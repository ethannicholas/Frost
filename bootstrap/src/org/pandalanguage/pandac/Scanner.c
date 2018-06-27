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
typedef panda$core$Bit (*$fn388)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn389)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn402)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn403)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn416)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn417)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn430)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn431)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn540)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn551)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn711)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn740)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn747)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn758)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn811)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn822)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn860)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn871)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn907)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn914)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn925)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn954)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn961)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn972)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn998)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1005)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1016)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1037)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1048)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1149)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1167)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1191)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1209)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1241)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1325)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1343)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1429)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1436)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1447)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1485)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1522)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1745)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1756)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1768)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1778)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1831)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1838)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1849)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1887)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1909)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1916)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1927)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1979)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1997)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2036)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2054)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2065)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2087)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2128)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2161)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2191)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2195)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2229)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2236)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2247)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2258)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2287)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2386)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2522)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2625)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2630)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2687)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
    panda$collections$Array* $tmp383;
    panda$collections$Array* $tmp384;
    panda$collections$Array* $tmp385;
    panda$core$Bit $tmp387;
    org$pandalanguage$pandac$Annotations$Expression* $tmp390;
    panda$core$Int64 $tmp392;
    org$pandalanguage$pandac$ASTNode* $tmp393;
    org$pandalanguage$pandac$ASTNode* $tmp394;
    panda$collections$Array* $tmp397;
    panda$collections$Array* $tmp398;
    panda$collections$Array* $tmp399;
    panda$core$Bit $tmp401;
    org$pandalanguage$pandac$Annotations$Expression* $tmp404;
    panda$core$Int64 $tmp406;
    org$pandalanguage$pandac$ASTNode* $tmp407;
    org$pandalanguage$pandac$ASTNode* $tmp408;
    panda$collections$Array* $tmp411;
    panda$collections$Array* $tmp412;
    panda$collections$Array* $tmp413;
    panda$core$Bit $tmp415;
    org$pandalanguage$pandac$Annotations$Expression* $tmp418;
    panda$core$Int64 $tmp420;
    org$pandalanguage$pandac$ASTNode* $tmp421;
    org$pandalanguage$pandac$ASTNode* $tmp422;
    panda$collections$Array* $tmp425;
    panda$collections$Array* $tmp426;
    panda$collections$Array* $tmp427;
    panda$core$Bit $tmp429;
    org$pandalanguage$pandac$Annotations$Expression* $tmp432;
    panda$core$Int64 $tmp434;
    org$pandalanguage$pandac$ASTNode* $tmp435;
    org$pandalanguage$pandac$ASTNode* $tmp436;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$Bit $tmp451;
    org$pandalanguage$pandac$Annotations* $returnValue458;
    org$pandalanguage$pandac$Annotations* $tmp459;
    org$pandalanguage$pandac$Annotations* $tmp460;
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
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp383 = expressions271;
                                                    panda$collections$Array* $tmp386 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp386);
                                                    $tmp385 = $tmp386;
                                                    $tmp384 = $tmp385;
                                                    expressions271 = $tmp384;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp387 = (($fn388) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp387 = (($fn389) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp387.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp391 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp392, 0);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp391, $tmp392, exprText315, expr322);
                                                $tmp390 = $tmp391;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp390));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
                                                {
                                                    $tmp393 = expr322;
                                                    $tmp394 = NULL;
                                                    expr322 = $tmp394;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp396 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s395);
                                        if ($tmp396.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp397 = expressions271;
                                                    panda$collections$Array* $tmp400 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp400);
                                                    $tmp399 = $tmp400;
                                                    $tmp398 = $tmp399;
                                                    expressions271 = $tmp398;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp401 = (($fn402) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp401 = (($fn403) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp401.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp405 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp406, 1);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp405, $tmp406, exprText315, expr322);
                                                $tmp404 = $tmp405;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp404));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                                                {
                                                    $tmp407 = expr322;
                                                    $tmp408 = NULL;
                                                    expr322 = $tmp408;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp410 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s409);
                                        if ($tmp410.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp411 = expressions271;
                                                    panda$collections$Array* $tmp414 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp414);
                                                    $tmp413 = $tmp414;
                                                    $tmp412 = $tmp413;
                                                    expressions271 = $tmp412;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp415 = (($fn416) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp415 = (($fn417) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp415.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp419 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp420, 2);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp419, $tmp420, exprText315, expr322);
                                                $tmp418 = $tmp419;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp418));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
                                                {
                                                    $tmp421 = expr322;
                                                    $tmp422 = NULL;
                                                    expr322 = $tmp422;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp424 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21327, &$s423);
                                        if ($tmp424.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp425 = expressions271;
                                                    panda$collections$Array* $tmp428 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp428);
                                                    $tmp427 = $tmp428;
                                                    $tmp426 = $tmp427;
                                                    expressions271 = $tmp426;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp429 = (($fn430) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr322);
                                            } else {
                                                $tmp429 = (($fn431) checkExpression273->pointer)(self, p311, text313, expr322);
                                            }
                                            if ($tmp429.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp433 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp434, 3);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp433, $tmp434, exprText315, expr322);
                                                $tmp432 = $tmp433;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp432));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                                                {
                                                    $tmp435 = expr322;
                                                    $tmp436 = NULL;
                                                    expr322 = $tmp436;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s439, text313);
                                            $tmp438 = $tmp440;
                                            panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s441);
                                            $tmp437 = $tmp442;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p311, $tmp437);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
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
                                        case -1: goto $l443;
                                    }
                                    $l443:;
                                    if (((panda$core$Bit) { expr322 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s446, text313);
                                        $tmp445 = $tmp447;
                                        panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s448);
                                        $tmp444 = $tmp449;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p311, $tmp444);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                                    }
                                    }
                                }
                                $tmp321 = -1;
                                goto $l319;
                                $l319:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr322));
                                expr322 = NULL;
                                switch ($tmp321) {
                                    case -1: goto $l450;
                                }
                                $l450:;
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp451, false);
                                if ($tmp451.value) goto $l452; else goto $l453;
                                $l453:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s454, (panda$core$Int64) { 150 });
                                abort();
                                $l452:;
                            }
                            }
                        }
                        $tmp306 = -1;
                        goto $l304;
                        $l304:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                        switch ($tmp306) {
                            case -1: goto $l455;
                        }
                        $l455:;
                    }
                    $tmp296 = -1;
                    goto $l294;
                    $l294:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c297));
                    c297 = NULL;
                    switch ($tmp296) {
                        case -1: goto $l456;
                    }
                    $l456:;
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
                case -1: goto $l457;
            }
            $l457:;
        }
        org$pandalanguage$pandac$Annotations* $tmp461 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp461, flags269, ((panda$collections$ListView*) expressions271));
        $tmp460 = $tmp461;
        $tmp459 = $tmp460;
        $returnValue458 = $tmp459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
        $tmp268 = 0;
        goto $l266;
        $l462:;
        return $returnValue458;
    }
    $l266:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) checkExpression273));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions271));
    checkExpression273 = NULL;
    switch ($tmp268) {
        case 0: goto $l462;
    }
    $l464:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment468 = NULL;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    org$pandalanguage$pandac$ASTNode* $match$164_13474 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp475;
    panda$core$Int64 $tmp476;
    org$pandalanguage$pandac$Position position478;
    panda$core$String* text480 = NULL;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$Bit $tmp484;
    org$pandalanguage$pandac$Annotations* annotations489 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp490;
    org$pandalanguage$pandac$Annotations* $tmp491;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind493;
    org$pandalanguage$pandac$ASTNode* $match$173_9497 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp498;
    panda$core$Int64 $tmp499;
    org$pandalanguage$pandac$Variable$Kind kind501;
    panda$collections$ImmutableArray* decls503 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$175_17505;
    panda$core$Int64 $tmp506;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp508;
    panda$core$Int64 $tmp509;
    panda$core$Int64 $tmp510;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp512;
    panda$core$Int64 $tmp513;
    panda$core$Int64 $tmp514;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp516;
    panda$core$Int64 $tmp517;
    org$pandalanguage$pandac$Annotations* $tmp518;
    panda$core$Int64 $tmp519;
    panda$core$Int64 $tmp521;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp523;
    panda$core$Int64 $tmp524;
    panda$collections$Iterator* Iter$186$17528 = NULL;
    panda$collections$Iterator* $tmp529;
    panda$collections$Iterator* $tmp530;
    org$pandalanguage$pandac$ASTNode* decl546 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp547;
    panda$core$Object* $tmp548;
    org$pandalanguage$pandac$ASTNode* $match$187_21556 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp557;
    panda$core$Int64 $tmp558;
    org$pandalanguage$pandac$Position declPosition560;
    org$pandalanguage$pandac$ASTNode* target562 = NULL;
    org$pandalanguage$pandac$ASTNode* rawValue564 = NULL;
    panda$core$String* name569 = NULL;
    org$pandalanguage$pandac$Type* type570 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$191_29574 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp575;
    panda$core$Int64 $tmp576;
    panda$core$String* id578 = NULL;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    org$pandalanguage$pandac$Type* $tmp582;
    org$pandalanguage$pandac$Type* $tmp583;
    org$pandalanguage$pandac$Type* $tmp584;
    panda$core$Int64 $tmp586;
    panda$core$String* id588 = NULL;
    org$pandalanguage$pandac$ASTNode* idType590 = NULL;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    org$pandalanguage$pandac$Type* $tmp594;
    org$pandalanguage$pandac$Type* $tmp595;
    org$pandalanguage$pandac$Type* $tmp596;
    panda$core$Bit $tmp598;
    org$pandalanguage$pandac$ASTNode* value603 = NULL;
    panda$core$Int64 $tmp610;
    org$pandalanguage$pandac$ASTNode* $tmp613;
    org$pandalanguage$pandac$ASTNode* $tmp614;
    org$pandalanguage$pandac$ASTNode* $tmp615;
    panda$core$Int64 $tmp617;
    org$pandalanguage$pandac$ASTNode* $tmp618;
    org$pandalanguage$pandac$ASTNode* $tmp619;
    org$pandalanguage$pandac$FieldDecl* field620 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp621;
    org$pandalanguage$pandac$FieldDecl* $tmp622;
    panda$core$Bit $tmp625;
    panda$core$Bit $tmp632;
    int $tmp467;
    {
        memset(&doccomment468, 0, sizeof(doccomment468));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp469 = doccomment468;
                $tmp470 = NULL;
                doccomment468 = $tmp470;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
            }
        }
        }
        else {
        {
            int $tmp473;
            {
                $tmp475 = p_rawDoccomment;
                $match$164_13474 = $tmp475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
                panda$core$Int64$init$builtin_int64(&$tmp476, 38);
                panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13474->$rawValue, $tmp476);
                if ($tmp477.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp479 = ((org$pandalanguage$pandac$Position*) ((char*) $match$164_13474->$data + 0));
                    position478 = *$tmp479;
                    panda$core$String** $tmp481 = ((panda$core$String**) ((char*) $match$164_13474->$data + 16));
                    text480 = *$tmp481;
                    {
                        $tmp482 = doccomment468;
                        $tmp483 = text480;
                        doccomment468 = $tmp483;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp484, false);
                    if ($tmp484.value) goto $l485; else goto $l486;
                    $l486:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s487, (panda$core$Int64) { 168 });
                    abort();
                    $l485:;
                }
                }
            }
            $tmp473 = -1;
            goto $l471;
            $l471:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
            switch ($tmp473) {
                case -1: goto $l488;
            }
            $l488:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp492 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp491 = $tmp492;
        $tmp490 = $tmp491;
        annotations489 = $tmp490;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
        memset(&fieldKind493, 0, sizeof(fieldKind493));
        int $tmp496;
        {
            $tmp498 = p_varDecl;
            $match$173_9497 = $tmp498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp498));
            panda$core$Int64$init$builtin_int64(&$tmp499, 47);
            panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9497->$rawValue, $tmp499);
            if ($tmp500.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp502 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$173_9497->$data + 16));
                kind501 = *$tmp502;
                panda$collections$ImmutableArray** $tmp504 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9497->$data + 24));
                decls503 = *$tmp504;
                {
                    $match$175_17505 = kind501;
                    panda$core$Int64$init$builtin_int64(&$tmp506, 0);
                    panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17505.$rawValue, $tmp506);
                    if ($tmp507.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp509, 0);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp508, $tmp509);
                        fieldKind493 = $tmp508;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp510, 1);
                    panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17505.$rawValue, $tmp510);
                    if ($tmp511.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp513, 1);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp512, $tmp513);
                        fieldKind493 = $tmp512;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp514, 2);
                    panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17505.$rawValue, $tmp514);
                    if ($tmp515.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp517, 2);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp516, $tmp517);
                        fieldKind493 = $tmp516;
                        $tmp518 = annotations489;
                        panda$core$Int64$init$builtin_int64(&$tmp519, 16);
                        panda$core$Int64 $tmp520 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp518->flags, $tmp519);
                        $tmp518->flags = $tmp520;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp521, 3);
                    panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17505.$rawValue, $tmp521);
                    if ($tmp522.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp524, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp523, $tmp524);
                        fieldKind493 = $tmp523;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp527;
                    {
                        ITable* $tmp531 = ((panda$collections$Iterable*) decls503)->$class->itable;
                        while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp531 = $tmp531->next;
                        }
                        $fn533 $tmp532 = $tmp531->methods[0];
                        panda$collections$Iterator* $tmp534 = $tmp532(((panda$collections$Iterable*) decls503));
                        $tmp530 = $tmp534;
                        $tmp529 = $tmp530;
                        Iter$186$17528 = $tmp529;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp529));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
                        $l535:;
                        ITable* $tmp538 = Iter$186$17528->$class->itable;
                        while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp538 = $tmp538->next;
                        }
                        $fn540 $tmp539 = $tmp538->methods[0];
                        panda$core$Bit $tmp541 = $tmp539(Iter$186$17528);
                        panda$core$Bit $tmp542 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp541);
                        bool $tmp537 = $tmp542.value;
                        if (!$tmp537) goto $l536;
                        {
                            int $tmp545;
                            {
                                ITable* $tmp549 = Iter$186$17528->$class->itable;
                                while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp549 = $tmp549->next;
                                }
                                $fn551 $tmp550 = $tmp549->methods[1];
                                panda$core$Object* $tmp552 = $tmp550(Iter$186$17528);
                                $tmp548 = $tmp552;
                                $tmp547 = ((org$pandalanguage$pandac$ASTNode*) $tmp548);
                                decl546 = $tmp547;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                                panda$core$Panda$unref$panda$core$Object($tmp548);
                                int $tmp555;
                                {
                                    $tmp557 = decl546;
                                    $match$187_21556 = $tmp557;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                                    panda$core$Int64$init$builtin_int64(&$tmp558, 13);
                                    panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_21556->$rawValue, $tmp558);
                                    if ($tmp559.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp561 = ((org$pandalanguage$pandac$Position*) ((char*) $match$187_21556->$data + 0));
                                        declPosition560 = *$tmp561;
                                        org$pandalanguage$pandac$ASTNode** $tmp563 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$187_21556->$data + 16));
                                        target562 = *$tmp563;
                                        org$pandalanguage$pandac$ASTNode** $tmp565 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$187_21556->$data + 24));
                                        rawValue564 = *$tmp565;
                                        int $tmp568;
                                        {
                                            memset(&name569, 0, sizeof(name569));
                                            memset(&type570, 0, sizeof(type570));
                                            int $tmp573;
                                            {
                                                $tmp575 = target562;
                                                $match$191_29574 = $tmp575;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                                                panda$core$Int64$init$builtin_int64(&$tmp576, 20);
                                                panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_29574->$rawValue, $tmp576);
                                                if ($tmp577.value) {
                                                {
                                                    panda$core$String** $tmp579 = ((panda$core$String**) ((char*) $match$191_29574->$data + 16));
                                                    id578 = *$tmp579;
                                                    {
                                                        $tmp580 = name569;
                                                        $tmp581 = id578;
                                                        name569 = $tmp581;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                    }
                                                    {
                                                        $tmp582 = type570;
                                                        org$pandalanguage$pandac$Type* $tmp585 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp584 = $tmp585;
                                                        $tmp583 = $tmp584;
                                                        type570 = $tmp583;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp586, 44);
                                                panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_29574->$rawValue, $tmp586);
                                                if ($tmp587.value) {
                                                {
                                                    panda$core$String** $tmp589 = ((panda$core$String**) ((char*) $match$191_29574->$data + 16));
                                                    id588 = *$tmp589;
                                                    org$pandalanguage$pandac$ASTNode** $tmp591 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_29574->$data + 24));
                                                    idType590 = *$tmp591;
                                                    {
                                                        $tmp592 = name569;
                                                        $tmp593 = id588;
                                                        name569 = $tmp593;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                    }
                                                    {
                                                        $tmp594 = type570;
                                                        org$pandalanguage$pandac$Type* $tmp597 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType590);
                                                        $tmp596 = $tmp597;
                                                        $tmp595 = $tmp596;
                                                        type570 = $tmp595;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp598, false);
                                                    if ($tmp598.value) goto $l599; else goto $l600;
                                                    $l600:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s601, (panda$core$Int64) { 199 });
                                                    abort();
                                                    $l599:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp573 = -1;
                                            goto $l571;
                                            $l571:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                                            switch ($tmp573) {
                                                case -1: goto $l602;
                                            }
                                            $l602:;
                                            memset(&value603, 0, sizeof(value603));
                                            bool $tmp605 = ((panda$core$Bit) { rawValue564 == NULL }).value;
                                            if (!$tmp605) goto $l606;
                                            panda$core$Bit $tmp607 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(annotations489);
                                            $tmp605 = $tmp607.value;
                                            $l606:;
                                            panda$core$Bit $tmp608 = { $tmp605 };
                                            bool $tmp604 = $tmp608.value;
                                            if (!$tmp604) goto $l609;
                                            panda$core$Int64$init$builtin_int64(&$tmp610, 1);
                                            panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type570->typeKind.$rawValue, $tmp610);
                                            $tmp604 = $tmp611.value;
                                            $l609:;
                                            panda$core$Bit $tmp612 = { $tmp604 };
                                            if ($tmp612.value) {
                                            {
                                                {
                                                    $tmp613 = value603;
                                                    org$pandalanguage$pandac$ASTNode* $tmp616 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp617, 28);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp616, $tmp617, declPosition560);
                                                    $tmp615 = $tmp616;
                                                    $tmp614 = $tmp615;
                                                    value603 = $tmp614;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp618 = value603;
                                                    $tmp619 = rawValue564;
                                                    value603 = $tmp619;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$FieldDecl* $tmp623 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp623, p_owner, declPosition560, doccomment468, annotations489, fieldKind493, name569, type570, value603);
                                            $tmp622 = $tmp623;
                                            $tmp621 = $tmp622;
                                            field620 = $tmp621;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field620));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field620));
                                        }
                                        $tmp568 = -1;
                                        goto $l566;
                                        $l566:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field620));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value603));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type570));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name569));
                                        field620 = NULL;
                                        switch ($tmp568) {
                                            case -1: goto $l624;
                                        }
                                        $l624:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp625, false);
                                        if ($tmp625.value) goto $l626; else goto $l627;
                                        $l627:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s628, (panda$core$Int64) { 214 });
                                        abort();
                                        $l626:;
                                    }
                                    }
                                }
                                $tmp555 = -1;
                                goto $l553;
                                $l553:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                                switch ($tmp555) {
                                    case -1: goto $l629;
                                }
                                $l629:;
                            }
                            $tmp545 = -1;
                            goto $l543;
                            $l543:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl546));
                            decl546 = NULL;
                            switch ($tmp545) {
                                case -1: goto $l630;
                            }
                            $l630:;
                        }
                        goto $l535;
                        $l536:;
                    }
                    $tmp527 = -1;
                    goto $l525;
                    $l525:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17528));
                    Iter$186$17528 = NULL;
                    switch ($tmp527) {
                        case -1: goto $l631;
                    }
                    $l631:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp632, false);
                if ($tmp632.value) goto $l633; else goto $l634;
                $l634:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s635, (panda$core$Int64) { 218 });
                abort();
                $l633:;
            }
            }
        }
        $tmp496 = -1;
        goto $l494;
        $l494:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
        switch ($tmp496) {
            case -1: goto $l636;
        }
        $l636:;
    }
    $tmp467 = -1;
    goto $l465;
    $l465:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment468));
    annotations489 = NULL;
    switch ($tmp467) {
        case -1: goto $l637;
    }
    $l637:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$224_9641 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp642;
    panda$core$Int64 $tmp643;
    org$pandalanguage$pandac$ASTNode* test645 = NULL;
    panda$core$Int64 $returnValue647;
    panda$core$Int64 $tmp651;
    panda$core$Int64 $tmp653;
    panda$core$Int64 $tmp656;
    panda$core$Int64 $tmp658;
    panda$core$Int64 $tmp661;
    org$pandalanguage$pandac$ASTNode* left663 = NULL;
    org$pandalanguage$pandac$ASTNode* right665 = NULL;
    panda$core$Int64 $tmp667;
    panda$core$Int64 $tmp674;
    panda$core$Int64 $tmp676;
    panda$core$Int64 $tmp679;
    panda$collections$ImmutableArray* statements681 = NULL;
    panda$core$Int64 result683;
    panda$core$Int64 $tmp684;
    panda$collections$Iterator* Iter$237$17688 = NULL;
    panda$collections$Iterator* $tmp689;
    panda$collections$Iterator* $tmp690;
    org$pandalanguage$pandac$ASTNode* s706 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp707;
    panda$core$Object* $tmp708;
    panda$core$Int64 $tmp719;
    panda$core$Int64 $tmp721;
    panda$core$Int64 $tmp724;
    org$pandalanguage$pandac$ASTNode* target726 = NULL;
    panda$collections$ImmutableArray* args728 = NULL;
    panda$core$Int64 result730;
    panda$collections$Iterator* Iter$245$17735 = NULL;
    panda$collections$Iterator* $tmp736;
    panda$collections$Iterator* $tmp737;
    org$pandalanguage$pandac$ASTNode* a753 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp754;
    panda$core$Object* $tmp755;
    panda$core$Int64 $tmp766;
    org$pandalanguage$pandac$ASTNode* base768 = NULL;
    panda$core$Int64 $tmp773;
    panda$core$Int64 $tmp775;
    panda$core$Int64 $tmp778;
    org$pandalanguage$pandac$ASTNode* value780 = NULL;
    panda$core$Int64 $tmp782;
    panda$core$Int64 $tmp788;
    panda$collections$ImmutableArray* statements790 = NULL;
    org$pandalanguage$pandac$ASTNode* test792 = NULL;
    panda$core$Int64 result794;
    panda$collections$Iterator* Iter$260$17799 = NULL;
    panda$collections$Iterator* $tmp800;
    panda$collections$Iterator* $tmp801;
    org$pandalanguage$pandac$ASTNode* s817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp818;
    panda$core$Object* $tmp819;
    panda$core$Int64 $tmp830;
    org$pandalanguage$pandac$ASTNode* base832 = NULL;
    panda$core$Int64 $tmp837;
    org$pandalanguage$pandac$ASTNode* list839 = NULL;
    panda$collections$ImmutableArray* statements841 = NULL;
    panda$core$Int64 result843;
    panda$collections$Iterator* Iter$268$17848 = NULL;
    panda$collections$Iterator* $tmp849;
    panda$collections$Iterator* $tmp850;
    org$pandalanguage$pandac$ASTNode* s866 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp867;
    panda$core$Object* $tmp868;
    panda$core$Int64 $tmp879;
    panda$core$Int64 $tmp881;
    panda$core$Int64 $tmp884;
    panda$core$Int64 $tmp886;
    panda$core$Int64 $tmp889;
    org$pandalanguage$pandac$ASTNode* test891 = NULL;
    panda$collections$ImmutableArray* ifTrue893 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse895 = NULL;
    panda$core$Int64 result897;
    panda$collections$Iterator* Iter$278$17902 = NULL;
    panda$collections$Iterator* $tmp903;
    panda$collections$Iterator* $tmp904;
    org$pandalanguage$pandac$ASTNode* s920 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp921;
    panda$core$Object* $tmp922;
    panda$core$Int64 $tmp935;
    panda$core$Int64 $tmp937;
    panda$core$Int64 $tmp940;
    panda$collections$ImmutableArray* statements942 = NULL;
    panda$core$Int64 result944;
    panda$core$Int64 $tmp945;
    panda$collections$Iterator* Iter$289$17949 = NULL;
    panda$collections$Iterator* $tmp950;
    panda$collections$Iterator* $tmp951;
    org$pandalanguage$pandac$ASTNode* s967 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp968;
    panda$core$Object* $tmp969;
    panda$core$Int64 $tmp980;
    org$pandalanguage$pandac$ASTNode* value982 = NULL;
    panda$collections$ImmutableArray* whens984 = NULL;
    panda$collections$ImmutableArray* other986 = NULL;
    panda$core$Int64 result988;
    panda$collections$Iterator* Iter$295$17993 = NULL;
    panda$collections$Iterator* $tmp994;
    panda$collections$Iterator* $tmp995;
    org$pandalanguage$pandac$ASTNode* w1011 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    panda$core$Object* $tmp1013;
    panda$collections$Iterator* Iter$299$211025 = NULL;
    panda$collections$Iterator* $tmp1026;
    panda$collections$Iterator* $tmp1027;
    org$pandalanguage$pandac$ASTNode* s1043 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1044;
    panda$core$Object* $tmp1045;
    panda$core$Int64 $tmp1056;
    panda$core$Int64 $tmp1058;
    panda$core$Int64 $tmp1061;
    panda$core$Int64 $tmp1063;
    panda$core$Int64 $tmp1066;
    panda$core$Int64 $tmp1068;
    panda$core$Int64 $tmp1071;
    org$pandalanguage$pandac$ASTNode* base1073 = NULL;
    panda$core$Int64 $tmp1075;
    panda$core$Int64 $tmp1080;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1087;
    panda$core$Int64 $tmp1090;
    panda$core$Int64 $tmp1092;
    panda$core$Int64 $tmp1095;
    org$pandalanguage$pandac$ASTNode* value1097 = NULL;
    panda$core$Int64 $tmp1099;
    panda$core$Int64 $tmp1105;
    panda$core$Int64 $tmp1107;
    panda$core$Int64 $tmp1110;
    panda$core$Int64 $tmp1112;
    panda$core$Int64 $tmp1115;
    panda$core$Int64 $tmp1117;
    panda$core$Int64 $tmp1120;
    panda$core$Int64 $tmp1122;
    panda$core$Int64 $tmp1125;
    panda$core$Int64 $tmp1127;
    panda$core$Int64 $tmp1130;
    panda$core$Int64 $tmp1132;
    panda$core$Int64 $tmp1135;
    panda$collections$ImmutableArray* decls1137 = NULL;
    panda$core$Int64 result1139;
    panda$core$Int64 $tmp1140;
    panda$collections$Iterator* Iter$337$171144 = NULL;
    panda$collections$Iterator* $tmp1145;
    panda$collections$Iterator* $tmp1146;
    org$pandalanguage$pandac$ASTNode* decl1162 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1163;
    panda$core$Object* $tmp1164;
    panda$core$Int64 $tmp1175;
    panda$collections$ImmutableArray* tests1177 = NULL;
    panda$collections$ImmutableArray* statements1179 = NULL;
    panda$core$Int64 result1181;
    panda$core$Int64 $tmp1182;
    panda$collections$Iterator* Iter$343$171186 = NULL;
    panda$collections$Iterator* $tmp1187;
    panda$collections$Iterator* $tmp1188;
    org$pandalanguage$pandac$ASTNode* test1204 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1205;
    panda$core$Object* $tmp1206;
    panda$collections$Iterator* Iter$346$171218 = NULL;
    panda$collections$Iterator* $tmp1219;
    panda$collections$Iterator* $tmp1220;
    org$pandalanguage$pandac$ASTNode* s1236 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1237;
    panda$core$Object* $tmp1238;
    panda$core$Int64 $tmp1249;
    org$pandalanguage$pandac$ASTNode* test1251 = NULL;
    panda$collections$ImmutableArray* statements1253 = NULL;
    panda$core$Int64 result1255;
    panda$collections$Iterator* Iter$352$171260 = NULL;
    panda$collections$Iterator* $tmp1261;
    panda$collections$Iterator* $tmp1262;
    org$pandalanguage$pandac$ASTNode* s1278 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    panda$core$Object* $tmp1280;
    panda$core$Bit $tmp1291;
    panda$core$String* $tmp1295;
    panda$core$String* $tmp1296;
    int $tmp640;
    {
        $tmp642 = p_node;
        $match$224_9641 = $tmp642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Int64$init$builtin_int64(&$tmp643, 1);
        panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp643);
        if ($tmp644.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp646 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            test645 = *$tmp646;
            panda$core$Int64 $tmp648 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test645);
            $returnValue647 = $tmp648;
            $tmp640 = 0;
            goto $l638;
            $l649:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp651, 2);
        panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp651);
        if ($tmp652.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp653, 0);
            $returnValue647 = $tmp653;
            $tmp640 = 1;
            goto $l638;
            $l654:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp656, 3);
        panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp656);
        if ($tmp657.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp658, 0);
            $returnValue647 = $tmp658;
            $tmp640 = 2;
            goto $l638;
            $l659:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp661, 4);
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp661);
        if ($tmp662.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp664 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            left663 = *$tmp664;
            org$pandalanguage$pandac$ASTNode** $tmp666 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 32));
            right665 = *$tmp666;
            panda$core$Int64$init$builtin_int64(&$tmp667, 1);
            panda$core$Int64 $tmp668 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left663);
            panda$core$Int64 $tmp669 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp667, $tmp668);
            panda$core$Int64 $tmp670 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right665);
            panda$core$Int64 $tmp671 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp669, $tmp670);
            $returnValue647 = $tmp671;
            $tmp640 = 3;
            goto $l638;
            $l672:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp674, 5);
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp674);
        if ($tmp675.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp676, 1);
            $returnValue647 = $tmp676;
            $tmp640 = 4;
            goto $l638;
            $l677:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp679, 6);
        panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp679);
        if ($tmp680.value) {
        {
            panda$collections$ImmutableArray** $tmp682 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 16));
            statements681 = *$tmp682;
            panda$core$Int64$init$builtin_int64(&$tmp684, 0);
            result683 = $tmp684;
            {
                int $tmp687;
                {
                    ITable* $tmp691 = ((panda$collections$Iterable*) statements681)->$class->itable;
                    while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp691 = $tmp691->next;
                    }
                    $fn693 $tmp692 = $tmp691->methods[0];
                    panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) statements681));
                    $tmp690 = $tmp694;
                    $tmp689 = $tmp690;
                    Iter$237$17688 = $tmp689;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                    $l695:;
                    ITable* $tmp698 = Iter$237$17688->$class->itable;
                    while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp698 = $tmp698->next;
                    }
                    $fn700 $tmp699 = $tmp698->methods[0];
                    panda$core$Bit $tmp701 = $tmp699(Iter$237$17688);
                    panda$core$Bit $tmp702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp701);
                    bool $tmp697 = $tmp702.value;
                    if (!$tmp697) goto $l696;
                    {
                        int $tmp705;
                        {
                            ITable* $tmp709 = Iter$237$17688->$class->itable;
                            while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp709 = $tmp709->next;
                            }
                            $fn711 $tmp710 = $tmp709->methods[1];
                            panda$core$Object* $tmp712 = $tmp710(Iter$237$17688);
                            $tmp708 = $tmp712;
                            $tmp707 = ((org$pandalanguage$pandac$ASTNode*) $tmp708);
                            s706 = $tmp707;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                            panda$core$Panda$unref$panda$core$Object($tmp708);
                            panda$core$Int64 $tmp713 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s706);
                            panda$core$Int64 $tmp714 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result683, $tmp713);
                            result683 = $tmp714;
                        }
                        $tmp705 = -1;
                        goto $l703;
                        $l703:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s706));
                        s706 = NULL;
                        switch ($tmp705) {
                            case -1: goto $l715;
                        }
                        $l715:;
                    }
                    goto $l695;
                    $l696:;
                }
                $tmp687 = -1;
                goto $l685;
                $l685:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$237$17688));
                Iter$237$17688 = NULL;
                switch ($tmp687) {
                    case -1: goto $l716;
                }
                $l716:;
            }
            $returnValue647 = result683;
            $tmp640 = 5;
            goto $l638;
            $l717:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp719, 7);
        panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp719);
        if ($tmp720.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp721, 1);
            $returnValue647 = $tmp721;
            $tmp640 = 6;
            goto $l638;
            $l722:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp724, 8);
        panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp724);
        if ($tmp725.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp727 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            target726 = *$tmp727;
            panda$collections$ImmutableArray** $tmp729 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            args728 = *$tmp729;
            panda$core$Int64 $tmp731 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target726);
            result730 = $tmp731;
            {
                int $tmp734;
                {
                    ITable* $tmp738 = ((panda$collections$Iterable*) args728)->$class->itable;
                    while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp738 = $tmp738->next;
                    }
                    $fn740 $tmp739 = $tmp738->methods[0];
                    panda$collections$Iterator* $tmp741 = $tmp739(((panda$collections$Iterable*) args728));
                    $tmp737 = $tmp741;
                    $tmp736 = $tmp737;
                    Iter$245$17735 = $tmp736;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                    $l742:;
                    ITable* $tmp745 = Iter$245$17735->$class->itable;
                    while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp745 = $tmp745->next;
                    }
                    $fn747 $tmp746 = $tmp745->methods[0];
                    panda$core$Bit $tmp748 = $tmp746(Iter$245$17735);
                    panda$core$Bit $tmp749 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp748);
                    bool $tmp744 = $tmp749.value;
                    if (!$tmp744) goto $l743;
                    {
                        int $tmp752;
                        {
                            ITable* $tmp756 = Iter$245$17735->$class->itable;
                            while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp756 = $tmp756->next;
                            }
                            $fn758 $tmp757 = $tmp756->methods[1];
                            panda$core$Object* $tmp759 = $tmp757(Iter$245$17735);
                            $tmp755 = $tmp759;
                            $tmp754 = ((org$pandalanguage$pandac$ASTNode*) $tmp755);
                            a753 = $tmp754;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
                            panda$core$Panda$unref$panda$core$Object($tmp755);
                            panda$core$Int64 $tmp760 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a753);
                            panda$core$Int64 $tmp761 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result730, $tmp760);
                            result730 = $tmp761;
                        }
                        $tmp752 = -1;
                        goto $l750;
                        $l750:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a753));
                        a753 = NULL;
                        switch ($tmp752) {
                            case -1: goto $l762;
                        }
                        $l762:;
                    }
                    goto $l742;
                    $l743:;
                }
                $tmp734 = -1;
                goto $l732;
                $l732:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$17735));
                Iter$245$17735 = NULL;
                switch ($tmp734) {
                    case -1: goto $l763;
                }
                $l763:;
            }
            $returnValue647 = result730;
            $tmp640 = 7;
            goto $l638;
            $l764:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp766, 10);
        panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp766);
        if ($tmp767.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp769 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            base768 = *$tmp769;
            panda$core$Int64 $tmp770 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base768);
            $returnValue647 = $tmp770;
            $tmp640 = 8;
            goto $l638;
            $l771:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp773, 12);
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp773);
        if ($tmp774.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp775, 1);
            $returnValue647 = $tmp775;
            $tmp640 = 9;
            goto $l638;
            $l776:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp778, 13);
        panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp778);
        if ($tmp779.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp781 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 24));
            value780 = *$tmp781;
            if (((panda$core$Bit) { value780 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp782, 0);
                $returnValue647 = $tmp782;
                $tmp640 = 10;
                goto $l638;
                $l783:;
                return $returnValue647;
            }
            }
            panda$core$Int64 $tmp785 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value780);
            $returnValue647 = $tmp785;
            $tmp640 = 11;
            goto $l638;
            $l786:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp788, 14);
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp788);
        if ($tmp789.value) {
        {
            panda$collections$ImmutableArray** $tmp791 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            statements790 = *$tmp791;
            org$pandalanguage$pandac$ASTNode** $tmp793 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 32));
            test792 = *$tmp793;
            panda$core$Int64 $tmp795 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test792);
            result794 = $tmp795;
            {
                int $tmp798;
                {
                    ITable* $tmp802 = ((panda$collections$Iterable*) statements790)->$class->itable;
                    while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp802 = $tmp802->next;
                    }
                    $fn804 $tmp803 = $tmp802->methods[0];
                    panda$collections$Iterator* $tmp805 = $tmp803(((panda$collections$Iterable*) statements790));
                    $tmp801 = $tmp805;
                    $tmp800 = $tmp801;
                    Iter$260$17799 = $tmp800;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                    $l806:;
                    ITable* $tmp809 = Iter$260$17799->$class->itable;
                    while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp809 = $tmp809->next;
                    }
                    $fn811 $tmp810 = $tmp809->methods[0];
                    panda$core$Bit $tmp812 = $tmp810(Iter$260$17799);
                    panda$core$Bit $tmp813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp812);
                    bool $tmp808 = $tmp813.value;
                    if (!$tmp808) goto $l807;
                    {
                        int $tmp816;
                        {
                            ITable* $tmp820 = Iter$260$17799->$class->itable;
                            while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp820 = $tmp820->next;
                            }
                            $fn822 $tmp821 = $tmp820->methods[1];
                            panda$core$Object* $tmp823 = $tmp821(Iter$260$17799);
                            $tmp819 = $tmp823;
                            $tmp818 = ((org$pandalanguage$pandac$ASTNode*) $tmp819);
                            s817 = $tmp818;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
                            panda$core$Panda$unref$panda$core$Object($tmp819);
                            panda$core$Int64 $tmp824 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s817);
                            panda$core$Int64 $tmp825 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result794, $tmp824);
                            result794 = $tmp825;
                        }
                        $tmp816 = -1;
                        goto $l814;
                        $l814:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s817));
                        s817 = NULL;
                        switch ($tmp816) {
                            case -1: goto $l826;
                        }
                        $l826:;
                    }
                    goto $l806;
                    $l807:;
                }
                $tmp798 = -1;
                goto $l796;
                $l796:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$260$17799));
                Iter$260$17799 = NULL;
                switch ($tmp798) {
                    case -1: goto $l827;
                }
                $l827:;
            }
            $returnValue647 = result794;
            $tmp640 = 12;
            goto $l638;
            $l828:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp830, 15);
        panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp830);
        if ($tmp831.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp833 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            base832 = *$tmp833;
            panda$core$Int64 $tmp834 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base832);
            $returnValue647 = $tmp834;
            $tmp640 = 13;
            goto $l638;
            $l835:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp837, 18);
        panda$core$Bit $tmp838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp837);
        if ($tmp838.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp840 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 32));
            list839 = *$tmp840;
            panda$collections$ImmutableArray** $tmp842 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 40));
            statements841 = *$tmp842;
            panda$core$Int64 $tmp844 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list839);
            result843 = $tmp844;
            {
                int $tmp847;
                {
                    ITable* $tmp851 = ((panda$collections$Iterable*) statements841)->$class->itable;
                    while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp851 = $tmp851->next;
                    }
                    $fn853 $tmp852 = $tmp851->methods[0];
                    panda$collections$Iterator* $tmp854 = $tmp852(((panda$collections$Iterable*) statements841));
                    $tmp850 = $tmp854;
                    $tmp849 = $tmp850;
                    Iter$268$17848 = $tmp849;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                    $l855:;
                    ITable* $tmp858 = Iter$268$17848->$class->itable;
                    while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp858 = $tmp858->next;
                    }
                    $fn860 $tmp859 = $tmp858->methods[0];
                    panda$core$Bit $tmp861 = $tmp859(Iter$268$17848);
                    panda$core$Bit $tmp862 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp861);
                    bool $tmp857 = $tmp862.value;
                    if (!$tmp857) goto $l856;
                    {
                        int $tmp865;
                        {
                            ITable* $tmp869 = Iter$268$17848->$class->itable;
                            while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp869 = $tmp869->next;
                            }
                            $fn871 $tmp870 = $tmp869->methods[1];
                            panda$core$Object* $tmp872 = $tmp870(Iter$268$17848);
                            $tmp868 = $tmp872;
                            $tmp867 = ((org$pandalanguage$pandac$ASTNode*) $tmp868);
                            s866 = $tmp867;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                            panda$core$Panda$unref$panda$core$Object($tmp868);
                            panda$core$Int64 $tmp873 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s866);
                            panda$core$Int64 $tmp874 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result843, $tmp873);
                            result843 = $tmp874;
                        }
                        $tmp865 = -1;
                        goto $l863;
                        $l863:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s866));
                        s866 = NULL;
                        switch ($tmp865) {
                            case -1: goto $l875;
                        }
                        $l875:;
                    }
                    goto $l855;
                    $l856:;
                }
                $tmp847 = -1;
                goto $l845;
                $l845:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$17848));
                Iter$268$17848 = NULL;
                switch ($tmp847) {
                    case -1: goto $l876;
                }
                $l876:;
            }
            $returnValue647 = result843;
            $tmp640 = 14;
            goto $l638;
            $l877:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp879, 19);
        panda$core$Bit $tmp880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp879);
        if ($tmp880.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp881, 0);
            $returnValue647 = $tmp881;
            $tmp640 = 15;
            goto $l638;
            $l882:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp884, 20);
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp884);
        if ($tmp885.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp886, 1);
            $returnValue647 = $tmp886;
            $tmp640 = 16;
            goto $l638;
            $l887:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp889, 21);
        panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp889);
        if ($tmp890.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp892 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            test891 = *$tmp892;
            panda$collections$ImmutableArray** $tmp894 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            ifTrue893 = *$tmp894;
            org$pandalanguage$pandac$ASTNode** $tmp896 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 32));
            ifFalse895 = *$tmp896;
            panda$core$Int64 $tmp898 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test891);
            result897 = $tmp898;
            {
                int $tmp901;
                {
                    ITable* $tmp905 = ((panda$collections$Iterable*) ifTrue893)->$class->itable;
                    while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp905 = $tmp905->next;
                    }
                    $fn907 $tmp906 = $tmp905->methods[0];
                    panda$collections$Iterator* $tmp908 = $tmp906(((panda$collections$Iterable*) ifTrue893));
                    $tmp904 = $tmp908;
                    $tmp903 = $tmp904;
                    Iter$278$17902 = $tmp903;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp903));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
                    $l909:;
                    ITable* $tmp912 = Iter$278$17902->$class->itable;
                    while ($tmp912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp912 = $tmp912->next;
                    }
                    $fn914 $tmp913 = $tmp912->methods[0];
                    panda$core$Bit $tmp915 = $tmp913(Iter$278$17902);
                    panda$core$Bit $tmp916 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp915);
                    bool $tmp911 = $tmp916.value;
                    if (!$tmp911) goto $l910;
                    {
                        int $tmp919;
                        {
                            ITable* $tmp923 = Iter$278$17902->$class->itable;
                            while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp923 = $tmp923->next;
                            }
                            $fn925 $tmp924 = $tmp923->methods[1];
                            panda$core$Object* $tmp926 = $tmp924(Iter$278$17902);
                            $tmp922 = $tmp926;
                            $tmp921 = ((org$pandalanguage$pandac$ASTNode*) $tmp922);
                            s920 = $tmp921;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
                            panda$core$Panda$unref$panda$core$Object($tmp922);
                            panda$core$Int64 $tmp927 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s920);
                            panda$core$Int64 $tmp928 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result897, $tmp927);
                            result897 = $tmp928;
                        }
                        $tmp919 = -1;
                        goto $l917;
                        $l917:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s920));
                        s920 = NULL;
                        switch ($tmp919) {
                            case -1: goto $l929;
                        }
                        $l929:;
                    }
                    goto $l909;
                    $l910:;
                }
                $tmp901 = -1;
                goto $l899;
                $l899:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$278$17902));
                Iter$278$17902 = NULL;
                switch ($tmp901) {
                    case -1: goto $l930;
                }
                $l930:;
            }
            if (((panda$core$Bit) { ifFalse895 != NULL }).value) {
            {
                panda$core$Int64 $tmp931 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse895);
                panda$core$Int64 $tmp932 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result897, $tmp931);
                result897 = $tmp932;
            }
            }
            $returnValue647 = result897;
            $tmp640 = 17;
            goto $l638;
            $l933:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp935, 22);
        panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp935);
        if ($tmp936.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp937, 1);
            $returnValue647 = $tmp937;
            $tmp640 = 18;
            goto $l638;
            $l938:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp940, 24);
        panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp940);
        if ($tmp941.value) {
        {
            panda$collections$ImmutableArray** $tmp943 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            statements942 = *$tmp943;
            panda$core$Int64$init$builtin_int64(&$tmp945, 0);
            result944 = $tmp945;
            {
                int $tmp948;
                {
                    ITable* $tmp952 = ((panda$collections$Iterable*) statements942)->$class->itable;
                    while ($tmp952->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp952 = $tmp952->next;
                    }
                    $fn954 $tmp953 = $tmp952->methods[0];
                    panda$collections$Iterator* $tmp955 = $tmp953(((panda$collections$Iterable*) statements942));
                    $tmp951 = $tmp955;
                    $tmp950 = $tmp951;
                    Iter$289$17949 = $tmp950;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp950));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
                    $l956:;
                    ITable* $tmp959 = Iter$289$17949->$class->itable;
                    while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp959 = $tmp959->next;
                    }
                    $fn961 $tmp960 = $tmp959->methods[0];
                    panda$core$Bit $tmp962 = $tmp960(Iter$289$17949);
                    panda$core$Bit $tmp963 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp962);
                    bool $tmp958 = $tmp963.value;
                    if (!$tmp958) goto $l957;
                    {
                        int $tmp966;
                        {
                            ITable* $tmp970 = Iter$289$17949->$class->itable;
                            while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp970 = $tmp970->next;
                            }
                            $fn972 $tmp971 = $tmp970->methods[1];
                            panda$core$Object* $tmp973 = $tmp971(Iter$289$17949);
                            $tmp969 = $tmp973;
                            $tmp968 = ((org$pandalanguage$pandac$ASTNode*) $tmp969);
                            s967 = $tmp968;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                            panda$core$Panda$unref$panda$core$Object($tmp969);
                            panda$core$Int64 $tmp974 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s967);
                            panda$core$Int64 $tmp975 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result944, $tmp974);
                            result944 = $tmp975;
                        }
                        $tmp966 = -1;
                        goto $l964;
                        $l964:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s967));
                        s967 = NULL;
                        switch ($tmp966) {
                            case -1: goto $l976;
                        }
                        $l976:;
                    }
                    goto $l956;
                    $l957:;
                }
                $tmp948 = -1;
                goto $l946;
                $l946:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17949));
                Iter$289$17949 = NULL;
                switch ($tmp948) {
                    case -1: goto $l977;
                }
                $l977:;
            }
            $returnValue647 = result944;
            $tmp640 = 19;
            goto $l638;
            $l978:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp980, 25);
        panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp980);
        if ($tmp981.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp983 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            value982 = *$tmp983;
            panda$collections$ImmutableArray** $tmp985 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            whens984 = *$tmp985;
            panda$collections$ImmutableArray** $tmp987 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 32));
            other986 = *$tmp987;
            panda$core$Int64 $tmp989 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value982);
            result988 = $tmp989;
            {
                int $tmp992;
                {
                    ITable* $tmp996 = ((panda$collections$Iterable*) whens984)->$class->itable;
                    while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp996 = $tmp996->next;
                    }
                    $fn998 $tmp997 = $tmp996->methods[0];
                    panda$collections$Iterator* $tmp999 = $tmp997(((panda$collections$Iterable*) whens984));
                    $tmp995 = $tmp999;
                    $tmp994 = $tmp995;
                    Iter$295$17993 = $tmp994;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp994));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp995));
                    $l1000:;
                    ITable* $tmp1003 = Iter$295$17993->$class->itable;
                    while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1003 = $tmp1003->next;
                    }
                    $fn1005 $tmp1004 = $tmp1003->methods[0];
                    panda$core$Bit $tmp1006 = $tmp1004(Iter$295$17993);
                    panda$core$Bit $tmp1007 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1006);
                    bool $tmp1002 = $tmp1007.value;
                    if (!$tmp1002) goto $l1001;
                    {
                        int $tmp1010;
                        {
                            ITable* $tmp1014 = Iter$295$17993->$class->itable;
                            while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1014 = $tmp1014->next;
                            }
                            $fn1016 $tmp1015 = $tmp1014->methods[1];
                            panda$core$Object* $tmp1017 = $tmp1015(Iter$295$17993);
                            $tmp1013 = $tmp1017;
                            $tmp1012 = ((org$pandalanguage$pandac$ASTNode*) $tmp1013);
                            w1011 = $tmp1012;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
                            panda$core$Panda$unref$panda$core$Object($tmp1013);
                            panda$core$Int64 $tmp1018 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w1011);
                            panda$core$Int64 $tmp1019 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result988, $tmp1018);
                            result988 = $tmp1019;
                        }
                        $tmp1010 = -1;
                        goto $l1008;
                        $l1008:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1011));
                        w1011 = NULL;
                        switch ($tmp1010) {
                            case -1: goto $l1020;
                        }
                        $l1020:;
                    }
                    goto $l1000;
                    $l1001:;
                }
                $tmp992 = -1;
                goto $l990;
                $l990:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$17993));
                Iter$295$17993 = NULL;
                switch ($tmp992) {
                    case -1: goto $l1021;
                }
                $l1021:;
            }
            if (((panda$core$Bit) { other986 != NULL }).value) {
            {
                {
                    int $tmp1024;
                    {
                        ITable* $tmp1028 = ((panda$collections$Iterable*) other986)->$class->itable;
                        while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1028 = $tmp1028->next;
                        }
                        $fn1030 $tmp1029 = $tmp1028->methods[0];
                        panda$collections$Iterator* $tmp1031 = $tmp1029(((panda$collections$Iterable*) other986));
                        $tmp1027 = $tmp1031;
                        $tmp1026 = $tmp1027;
                        Iter$299$211025 = $tmp1026;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1026));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1027));
                        $l1032:;
                        ITable* $tmp1035 = Iter$299$211025->$class->itable;
                        while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1035 = $tmp1035->next;
                        }
                        $fn1037 $tmp1036 = $tmp1035->methods[0];
                        panda$core$Bit $tmp1038 = $tmp1036(Iter$299$211025);
                        panda$core$Bit $tmp1039 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1038);
                        bool $tmp1034 = $tmp1039.value;
                        if (!$tmp1034) goto $l1033;
                        {
                            int $tmp1042;
                            {
                                ITable* $tmp1046 = Iter$299$211025->$class->itable;
                                while ($tmp1046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1046 = $tmp1046->next;
                                }
                                $fn1048 $tmp1047 = $tmp1046->methods[1];
                                panda$core$Object* $tmp1049 = $tmp1047(Iter$299$211025);
                                $tmp1045 = $tmp1049;
                                $tmp1044 = ((org$pandalanguage$pandac$ASTNode*) $tmp1045);
                                s1043 = $tmp1044;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                                panda$core$Panda$unref$panda$core$Object($tmp1045);
                                panda$core$Int64 $tmp1050 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1043);
                                panda$core$Int64 $tmp1051 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result988, $tmp1050);
                                result988 = $tmp1051;
                            }
                            $tmp1042 = -1;
                            goto $l1040;
                            $l1040:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1043));
                            s1043 = NULL;
                            switch ($tmp1042) {
                                case -1: goto $l1052;
                            }
                            $l1052:;
                        }
                        goto $l1032;
                        $l1033:;
                    }
                    $tmp1024 = -1;
                    goto $l1022;
                    $l1022:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$211025));
                    Iter$299$211025 = NULL;
                    switch ($tmp1024) {
                        case -1: goto $l1053;
                    }
                    $l1053:;
                }
            }
            }
            $returnValue647 = result988;
            $tmp640 = 20;
            goto $l638;
            $l1054:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1056, 26);
        panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1056);
        if ($tmp1057.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1058, 10);
            $returnValue647 = $tmp1058;
            $tmp640 = 21;
            goto $l638;
            $l1059:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1061, 28);
        panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1061);
        if ($tmp1062.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1063, 1);
            $returnValue647 = $tmp1063;
            $tmp640 = 22;
            goto $l638;
            $l1064:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1066, 29);
        panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1066);
        if ($tmp1067.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1068, 0);
            $returnValue647 = $tmp1068;
            $tmp640 = 23;
            goto $l638;
            $l1069:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1071, 32);
        panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1071);
        if ($tmp1072.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1074 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 24));
            base1073 = *$tmp1074;
            panda$core$Int64$init$builtin_int64(&$tmp1075, 1);
            panda$core$Int64 $tmp1076 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1073);
            panda$core$Int64 $tmp1077 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1075, $tmp1076);
            $returnValue647 = $tmp1077;
            $tmp640 = 24;
            goto $l638;
            $l1078:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1080, 33);
        panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1080);
        if ($tmp1081.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1082, 1);
            $returnValue647 = $tmp1082;
            $tmp640 = 25;
            goto $l638;
            $l1083:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1085, 34);
        panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1085);
        if ($tmp1086.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1087, 1);
            $returnValue647 = $tmp1087;
            $tmp640 = 26;
            goto $l638;
            $l1088:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1090, 35);
        panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1090);
        if ($tmp1091.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1092, 1);
            $returnValue647 = $tmp1092;
            $tmp640 = 27;
            goto $l638;
            $l1093:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1095, 36);
        panda$core$Bit $tmp1096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1095);
        if ($tmp1096.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1098 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 16));
            value1097 = *$tmp1098;
            if (((panda$core$Bit) { value1097 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1099, 0);
                $returnValue647 = $tmp1099;
                $tmp640 = 28;
                goto $l638;
                $l1100:;
                return $returnValue647;
            }
            }
            panda$core$Int64 $tmp1102 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1097);
            $returnValue647 = $tmp1102;
            $tmp640 = 29;
            goto $l638;
            $l1103:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1105, 37);
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1105);
        if ($tmp1106.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1107, 1);
            $returnValue647 = $tmp1107;
            $tmp640 = 30;
            goto $l638;
            $l1108:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1110, 38);
        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1110);
        if ($tmp1111.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1112, 1);
            $returnValue647 = $tmp1112;
            $tmp640 = 31;
            goto $l638;
            $l1113:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1115, 39);
        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1115);
        if ($tmp1116.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1117, 1);
            $returnValue647 = $tmp1117;
            $tmp640 = 32;
            goto $l638;
            $l1118:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1120, 42);
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1120);
        if ($tmp1121.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1122, 0);
            $returnValue647 = $tmp1122;
            $tmp640 = 33;
            goto $l638;
            $l1123:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1125, 43);
        panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1125);
        if ($tmp1126.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1127, 10);
            $returnValue647 = $tmp1127;
            $tmp640 = 34;
            goto $l638;
            $l1128:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1130, 45);
        panda$core$Bit $tmp1131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1130);
        if ($tmp1131.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1132, 10);
            $returnValue647 = $tmp1132;
            $tmp640 = 35;
            goto $l638;
            $l1133:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1135, 47);
        panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1135);
        if ($tmp1136.value) {
        {
            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            decls1137 = *$tmp1138;
            panda$core$Int64$init$builtin_int64(&$tmp1140, 0);
            result1139 = $tmp1140;
            {
                int $tmp1143;
                {
                    ITable* $tmp1147 = ((panda$collections$Iterable*) decls1137)->$class->itable;
                    while ($tmp1147->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1147 = $tmp1147->next;
                    }
                    $fn1149 $tmp1148 = $tmp1147->methods[0];
                    panda$collections$Iterator* $tmp1150 = $tmp1148(((panda$collections$Iterable*) decls1137));
                    $tmp1146 = $tmp1150;
                    $tmp1145 = $tmp1146;
                    Iter$337$171144 = $tmp1145;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1145));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1146));
                    $l1151:;
                    ITable* $tmp1154 = Iter$337$171144->$class->itable;
                    while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1154 = $tmp1154->next;
                    }
                    $fn1156 $tmp1155 = $tmp1154->methods[0];
                    panda$core$Bit $tmp1157 = $tmp1155(Iter$337$171144);
                    panda$core$Bit $tmp1158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1157);
                    bool $tmp1153 = $tmp1158.value;
                    if (!$tmp1153) goto $l1152;
                    {
                        int $tmp1161;
                        {
                            ITable* $tmp1165 = Iter$337$171144->$class->itable;
                            while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1165 = $tmp1165->next;
                            }
                            $fn1167 $tmp1166 = $tmp1165->methods[1];
                            panda$core$Object* $tmp1168 = $tmp1166(Iter$337$171144);
                            $tmp1164 = $tmp1168;
                            $tmp1163 = ((org$pandalanguage$pandac$ASTNode*) $tmp1164);
                            decl1162 = $tmp1163;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1163));
                            panda$core$Panda$unref$panda$core$Object($tmp1164);
                            panda$core$Int64 $tmp1169 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1162);
                            panda$core$Int64 $tmp1170 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1139, $tmp1169);
                            result1139 = $tmp1170;
                        }
                        $tmp1161 = -1;
                        goto $l1159;
                        $l1159:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1162));
                        decl1162 = NULL;
                        switch ($tmp1161) {
                            case -1: goto $l1171;
                        }
                        $l1171:;
                    }
                    goto $l1151;
                    $l1152:;
                }
                $tmp1143 = -1;
                goto $l1141;
                $l1141:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$171144));
                Iter$337$171144 = NULL;
                switch ($tmp1143) {
                    case -1: goto $l1172;
                }
                $l1172:;
            }
            $returnValue647 = result1139;
            $tmp640 = 36;
            goto $l638;
            $l1173:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1175, 48);
        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1175);
        if ($tmp1176.value) {
        {
            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 16));
            tests1177 = *$tmp1178;
            panda$collections$ImmutableArray** $tmp1180 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 24));
            statements1179 = *$tmp1180;
            panda$core$Int64$init$builtin_int64(&$tmp1182, 0);
            result1181 = $tmp1182;
            {
                int $tmp1185;
                {
                    ITable* $tmp1189 = ((panda$collections$Iterable*) tests1177)->$class->itable;
                    while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1189 = $tmp1189->next;
                    }
                    $fn1191 $tmp1190 = $tmp1189->methods[0];
                    panda$collections$Iterator* $tmp1192 = $tmp1190(((panda$collections$Iterable*) tests1177));
                    $tmp1188 = $tmp1192;
                    $tmp1187 = $tmp1188;
                    Iter$343$171186 = $tmp1187;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
                    $l1193:;
                    ITable* $tmp1196 = Iter$343$171186->$class->itable;
                    while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1196 = $tmp1196->next;
                    }
                    $fn1198 $tmp1197 = $tmp1196->methods[0];
                    panda$core$Bit $tmp1199 = $tmp1197(Iter$343$171186);
                    panda$core$Bit $tmp1200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1199);
                    bool $tmp1195 = $tmp1200.value;
                    if (!$tmp1195) goto $l1194;
                    {
                        int $tmp1203;
                        {
                            ITable* $tmp1207 = Iter$343$171186->$class->itable;
                            while ($tmp1207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1207 = $tmp1207->next;
                            }
                            $fn1209 $tmp1208 = $tmp1207->methods[1];
                            panda$core$Object* $tmp1210 = $tmp1208(Iter$343$171186);
                            $tmp1206 = $tmp1210;
                            $tmp1205 = ((org$pandalanguage$pandac$ASTNode*) $tmp1206);
                            test1204 = $tmp1205;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                            panda$core$Panda$unref$panda$core$Object($tmp1206);
                            panda$core$Int64 $tmp1211 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1204);
                            panda$core$Int64 $tmp1212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1181, $tmp1211);
                            result1181 = $tmp1212;
                        }
                        $tmp1203 = -1;
                        goto $l1201;
                        $l1201:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1204));
                        test1204 = NULL;
                        switch ($tmp1203) {
                            case -1: goto $l1213;
                        }
                        $l1213:;
                    }
                    goto $l1193;
                    $l1194:;
                }
                $tmp1185 = -1;
                goto $l1183;
                $l1183:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$343$171186));
                Iter$343$171186 = NULL;
                switch ($tmp1185) {
                    case -1: goto $l1214;
                }
                $l1214:;
            }
            {
                int $tmp1217;
                {
                    ITable* $tmp1221 = ((panda$collections$Iterable*) statements1179)->$class->itable;
                    while ($tmp1221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1221 = $tmp1221->next;
                    }
                    $fn1223 $tmp1222 = $tmp1221->methods[0];
                    panda$collections$Iterator* $tmp1224 = $tmp1222(((panda$collections$Iterable*) statements1179));
                    $tmp1220 = $tmp1224;
                    $tmp1219 = $tmp1220;
                    Iter$346$171218 = $tmp1219;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1219));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
                    $l1225:;
                    ITable* $tmp1228 = Iter$346$171218->$class->itable;
                    while ($tmp1228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1228 = $tmp1228->next;
                    }
                    $fn1230 $tmp1229 = $tmp1228->methods[0];
                    panda$core$Bit $tmp1231 = $tmp1229(Iter$346$171218);
                    panda$core$Bit $tmp1232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1231);
                    bool $tmp1227 = $tmp1232.value;
                    if (!$tmp1227) goto $l1226;
                    {
                        int $tmp1235;
                        {
                            ITable* $tmp1239 = Iter$346$171218->$class->itable;
                            while ($tmp1239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1239 = $tmp1239->next;
                            }
                            $fn1241 $tmp1240 = $tmp1239->methods[1];
                            panda$core$Object* $tmp1242 = $tmp1240(Iter$346$171218);
                            $tmp1238 = $tmp1242;
                            $tmp1237 = ((org$pandalanguage$pandac$ASTNode*) $tmp1238);
                            s1236 = $tmp1237;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1237));
                            panda$core$Panda$unref$panda$core$Object($tmp1238);
                            panda$core$Int64 $tmp1243 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1236);
                            panda$core$Int64 $tmp1244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1181, $tmp1243);
                            result1181 = $tmp1244;
                        }
                        $tmp1235 = -1;
                        goto $l1233;
                        $l1233:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1236));
                        s1236 = NULL;
                        switch ($tmp1235) {
                            case -1: goto $l1245;
                        }
                        $l1245:;
                    }
                    goto $l1225;
                    $l1226:;
                }
                $tmp1217 = -1;
                goto $l1215;
                $l1215:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171218));
                Iter$346$171218 = NULL;
                switch ($tmp1217) {
                    case -1: goto $l1246;
                }
                $l1246:;
            }
            $returnValue647 = result1181;
            $tmp640 = 37;
            goto $l638;
            $l1247:;
            return $returnValue647;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1249, 49);
        panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9641->$rawValue, $tmp1249);
        if ($tmp1250.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9641->$data + 24));
            test1251 = *$tmp1252;
            panda$collections$ImmutableArray** $tmp1254 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9641->$data + 32));
            statements1253 = *$tmp1254;
            panda$core$Int64 $tmp1256 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1251);
            result1255 = $tmp1256;
            {
                int $tmp1259;
                {
                    ITable* $tmp1263 = ((panda$collections$Iterable*) statements1253)->$class->itable;
                    while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1263 = $tmp1263->next;
                    }
                    $fn1265 $tmp1264 = $tmp1263->methods[0];
                    panda$collections$Iterator* $tmp1266 = $tmp1264(((panda$collections$Iterable*) statements1253));
                    $tmp1262 = $tmp1266;
                    $tmp1261 = $tmp1262;
                    Iter$352$171260 = $tmp1261;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                    $l1267:;
                    ITable* $tmp1270 = Iter$352$171260->$class->itable;
                    while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1270 = $tmp1270->next;
                    }
                    $fn1272 $tmp1271 = $tmp1270->methods[0];
                    panda$core$Bit $tmp1273 = $tmp1271(Iter$352$171260);
                    panda$core$Bit $tmp1274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1273);
                    bool $tmp1269 = $tmp1274.value;
                    if (!$tmp1269) goto $l1268;
                    {
                        int $tmp1277;
                        {
                            ITable* $tmp1281 = Iter$352$171260->$class->itable;
                            while ($tmp1281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1281 = $tmp1281->next;
                            }
                            $fn1283 $tmp1282 = $tmp1281->methods[1];
                            panda$core$Object* $tmp1284 = $tmp1282(Iter$352$171260);
                            $tmp1280 = $tmp1284;
                            $tmp1279 = ((org$pandalanguage$pandac$ASTNode*) $tmp1280);
                            s1278 = $tmp1279;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                            panda$core$Panda$unref$panda$core$Object($tmp1280);
                            panda$core$Int64 $tmp1285 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1278);
                            panda$core$Int64 $tmp1286 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1255, $tmp1285);
                            result1255 = $tmp1286;
                        }
                        $tmp1277 = -1;
                        goto $l1275;
                        $l1275:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1278));
                        s1278 = NULL;
                        switch ($tmp1277) {
                            case -1: goto $l1287;
                        }
                        $l1287:;
                    }
                    goto $l1267;
                    $l1268:;
                }
                $tmp1259 = -1;
                goto $l1257;
                $l1257:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$352$171260));
                Iter$352$171260 = NULL;
                switch ($tmp1259) {
                    case -1: goto $l1288;
                }
                $l1288:;
            }
            $returnValue647 = result1255;
            $tmp640 = 38;
            goto $l638;
            $l1289:;
            return $returnValue647;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1291, false);
            if ($tmp1291.value) goto $l1292; else goto $l1293;
            $l1293:;
            panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1297, ((panda$core$Object*) p_node));
            $tmp1296 = $tmp1298;
            panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1296, &$s1299);
            $tmp1295 = $tmp1300;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1294, (panda$core$Int64) { 357 }, $tmp1295);
            abort();
            $l1292:;
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
    $tmp640 = -1;
    goto $l638;
    $l638:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
    switch ($tmp640) {
        case 34: goto $l1128;
        case 18: goto $l938;
        case 2: goto $l659;
        case 36: goto $l1173;
        case -1: goto $l1301;
        case 7: goto $l764;
        case 17: goto $l933;
        case 3: goto $l672;
        case 19: goto $l978;
        case 8: goto $l771;
        case 30: goto $l1108;
        case 14: goto $l877;
        case 15: goto $l882;
        case 22: goto $l1064;
        case 31: goto $l1113;
        case 6: goto $l722;
        case 20: goto $l1054;
        case 38: goto $l1289;
        case 21: goto $l1059;
        case 25: goto $l1083;
        case 35: goto $l1133;
        case 0: goto $l649;
        case 28: goto $l1100;
        case 33: goto $l1123;
        case 24: goto $l1078;
        case 5: goto $l717;
        case 10: goto $l783;
        case 32: goto $l1118;
        case 29: goto $l1103;
        case 9: goto $l776;
        case 23: goto $l1069;
        case 1: goto $l654;
        case 11: goto $l786;
        case 12: goto $l828;
        case 13: goto $l835;
        case 16: goto $l887;
        case 26: goto $l1088;
        case 37: goto $l1247;
        case 27: goto $l1093;
        case 4: goto $l677;
    }
    $l1301:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1304;
    panda$core$Int64 $tmp1306;
    panda$core$Int64 c1315;
    panda$core$Int64 $tmp1316;
    panda$collections$Iterator* Iter$365$131320 = NULL;
    panda$collections$Iterator* $tmp1321;
    panda$collections$Iterator* $tmp1322;
    org$pandalanguage$pandac$ASTNode* s1338 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    panda$core$Object* $tmp1340;
    panda$core$Int64 $tmp1347;
    panda$core$Bit $returnValue1349;
    panda$core$Bit $tmp1350;
    panda$core$Bit $tmp1356;
    panda$core$Bit $tmp1358;
    panda$core$Object* $tmp1305 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1304 = $tmp1305;
    panda$core$Int64$init$builtin_int64(&$tmp1306, 0);
    panda$core$Bit $tmp1307 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1304)->settings->optimizationLevel, $tmp1306);
    bool $tmp1303 = $tmp1307.value;
    panda$core$Panda$unref$panda$core$Object($tmp1304);
    if (!$tmp1303) goto $l1308;
    panda$core$Bit $tmp1309 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1309);
    $tmp1303 = $tmp1310.value;
    $l1308:;
    panda$core$Bit $tmp1311 = { $tmp1303 };
    bool $tmp1302 = $tmp1311.value;
    if (!$tmp1302) goto $l1312;
    panda$core$Bit $tmp1313 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1302 = $tmp1313.value;
    $l1312:;
    panda$core$Bit $tmp1314 = { $tmp1302 };
    if ($tmp1314.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1316, 0);
        c1315 = $tmp1316;
        {
            int $tmp1319;
            {
                ITable* $tmp1323 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1323->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1323 = $tmp1323->next;
                }
                $fn1325 $tmp1324 = $tmp1323->methods[0];
                panda$collections$Iterator* $tmp1326 = $tmp1324(((panda$collections$Iterable*) p_statements));
                $tmp1322 = $tmp1326;
                $tmp1321 = $tmp1322;
                Iter$365$131320 = $tmp1321;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
                $l1327:;
                ITable* $tmp1330 = Iter$365$131320->$class->itable;
                while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1330 = $tmp1330->next;
                }
                $fn1332 $tmp1331 = $tmp1330->methods[0];
                panda$core$Bit $tmp1333 = $tmp1331(Iter$365$131320);
                panda$core$Bit $tmp1334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1333);
                bool $tmp1329 = $tmp1334.value;
                if (!$tmp1329) goto $l1328;
                {
                    int $tmp1337;
                    {
                        ITable* $tmp1341 = Iter$365$131320->$class->itable;
                        while ($tmp1341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1341 = $tmp1341->next;
                        }
                        $fn1343 $tmp1342 = $tmp1341->methods[1];
                        panda$core$Object* $tmp1344 = $tmp1342(Iter$365$131320);
                        $tmp1340 = $tmp1344;
                        $tmp1339 = ((org$pandalanguage$pandac$ASTNode*) $tmp1340);
                        s1338 = $tmp1339;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
                        panda$core$Panda$unref$panda$core$Object($tmp1340);
                        panda$core$Int64 $tmp1345 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1338);
                        panda$core$Int64 $tmp1346 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1315, $tmp1345);
                        c1315 = $tmp1346;
                        panda$core$Int64$init$builtin_int64(&$tmp1347, 10);
                        panda$core$Bit $tmp1348 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1315, $tmp1347);
                        if ($tmp1348.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1350, false);
                            $returnValue1349 = $tmp1350;
                            $tmp1337 = 0;
                            goto $l1335;
                            $l1351:;
                            $tmp1319 = 0;
                            goto $l1317;
                            $l1352:;
                            return $returnValue1349;
                        }
                        }
                    }
                    $tmp1337 = -1;
                    goto $l1335;
                    $l1335:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1338));
                    s1338 = NULL;
                    switch ($tmp1337) {
                        case 0: goto $l1351;
                        case -1: goto $l1354;
                    }
                    $l1354:;
                }
                goto $l1327;
                $l1328:;
            }
            $tmp1319 = -1;
            goto $l1317;
            $l1317:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$365$131320));
            Iter$365$131320 = NULL;
            switch ($tmp1319) {
                case 0: goto $l1352;
                case -1: goto $l1355;
            }
            $l1355:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1356, true);
        $returnValue1349 = $tmp1356;
        return $returnValue1349;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1358, false);
    $returnValue1349 = $tmp1358;
    return $returnValue1349;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1363 = NULL;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    org$pandalanguage$pandac$ASTNode* $match$386_131369 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1370;
    panda$core$Int64 $tmp1371;
    org$pandalanguage$pandac$Position position1373;
    panda$core$String* text1375 = NULL;
    panda$core$String* $tmp1377;
    panda$core$String* $tmp1378;
    panda$core$Bit $tmp1379;
    org$pandalanguage$pandac$Annotations* annotations1384 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1385;
    org$pandalanguage$pandac$Annotations* $tmp1386;
    panda$core$Int64 $tmp1390;
    org$pandalanguage$pandac$Annotations* $tmp1398;
    panda$core$Int64 $tmp1399;
    panda$collections$Array* generics1401 = NULL;
    panda$collections$Array* $tmp1405;
    panda$collections$Array* $tmp1406;
    panda$collections$Array* $tmp1407;
    panda$core$String* fullName1409 = NULL;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1412;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    panda$collections$Iterator* Iter$401$131424 = NULL;
    panda$collections$Iterator* $tmp1425;
    panda$collections$Iterator* $tmp1426;
    org$pandalanguage$pandac$ASTNode* p1442 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1443;
    panda$core$Object* $tmp1444;
    panda$core$String* parameterName1449 = NULL;
    org$pandalanguage$pandac$Type* bound1450 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$404_171454 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1455;
    panda$core$Int64 $tmp1456;
    panda$core$String* id1458 = NULL;
    panda$core$String* $tmp1460;
    panda$core$String* $tmp1461;
    org$pandalanguage$pandac$Type* $tmp1462;
    org$pandalanguage$pandac$Type* $tmp1463;
    org$pandalanguage$pandac$Type* $tmp1464;
    panda$core$Int64 $tmp1466;
    panda$core$String* id1468 = NULL;
    org$pandalanguage$pandac$ASTNode* type1470 = NULL;
    panda$core$String* $tmp1472;
    panda$core$String* $tmp1473;
    org$pandalanguage$pandac$Type* $tmp1474;
    org$pandalanguage$pandac$Type* $tmp1475;
    org$pandalanguage$pandac$Type* $tmp1476;
    panda$core$Bit $tmp1478;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1483;
    panda$collections$Array* $tmp1490;
    panda$collections$Array* $tmp1491;
    panda$collections$Array* parameters1492 = NULL;
    panda$collections$Array* $tmp1493;
    panda$collections$Array* $tmp1494;
    panda$collections$Iterator* Iter$422$91499 = NULL;
    panda$collections$Iterator* $tmp1500;
    panda$collections$Iterator* $tmp1501;
    org$pandalanguage$pandac$ASTNode* p1517 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1518;
    panda$core$Object* $tmp1519;
    org$pandalanguage$pandac$ASTNode* $match$423_131527 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1528;
    panda$core$Int64 $tmp1529;
    panda$core$String* name1531 = NULL;
    org$pandalanguage$pandac$ASTNode* type1533 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1535;
    org$pandalanguage$pandac$Type* $tmp1537;
    panda$core$Bit $tmp1539;
    org$pandalanguage$pandac$Type* returnType1546 = NULL;
    org$pandalanguage$pandac$Type* $tmp1547;
    org$pandalanguage$pandac$Type* $tmp1548;
    org$pandalanguage$pandac$Type* $tmp1549;
    org$pandalanguage$pandac$Type* $tmp1551;
    org$pandalanguage$pandac$Type* $tmp1552;
    org$pandalanguage$pandac$Type* $tmp1553;
    panda$core$Int64 $tmp1556;
    org$pandalanguage$pandac$Type* $tmp1559;
    org$pandalanguage$pandac$Annotations* $tmp1568;
    panda$core$Int64 $tmp1569;
    panda$core$Int64 $tmp1573;
    org$pandalanguage$pandac$Annotations* $tmp1576;
    panda$core$Int64 $tmp1577;
    org$pandalanguage$pandac$MethodDecl* $returnValue1579;
    org$pandalanguage$pandac$MethodDecl* $tmp1580;
    org$pandalanguage$pandac$MethodDecl* $tmp1581;
    int $tmp1362;
    {
        memset(&doccomment1363, 0, sizeof(doccomment1363));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1364 = doccomment1363;
                $tmp1365 = NULL;
                doccomment1363 = $tmp1365;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
            }
        }
        }
        else {
        {
            int $tmp1368;
            {
                $tmp1370 = p_rawDoccomment;
                $match$386_131369 = $tmp1370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                panda$core$Int64$init$builtin_int64(&$tmp1371, 38);
                panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386_131369->$rawValue, $tmp1371);
                if ($tmp1372.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1374 = ((org$pandalanguage$pandac$Position*) ((char*) $match$386_131369->$data + 0));
                    position1373 = *$tmp1374;
                    panda$core$String** $tmp1376 = ((panda$core$String**) ((char*) $match$386_131369->$data + 16));
                    text1375 = *$tmp1376;
                    {
                        $tmp1377 = doccomment1363;
                        $tmp1378 = text1375;
                        doccomment1363 = $tmp1378;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1379, false);
                    if ($tmp1379.value) goto $l1380; else goto $l1381;
                    $l1381:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1382, (panda$core$Int64) { 390 });
                    abort();
                    $l1380:;
                }
                }
            }
            $tmp1368 = -1;
            goto $l1366;
            $l1366:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
            switch ($tmp1368) {
                case -1: goto $l1383;
            }
            $l1383:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1387 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1386 = $tmp1387;
        $tmp1385 = $tmp1386;
        annotations1384 = $tmp1385;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
        panda$core$Int64$init$builtin_int64(&$tmp1390, 2);
        panda$core$Bit $tmp1391 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1390);
        bool $tmp1389 = $tmp1391.value;
        if (!$tmp1389) goto $l1392;
        panda$core$Bit $tmp1393 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1389 = $tmp1393.value;
        $l1392:;
        panda$core$Bit $tmp1394 = { $tmp1389 };
        bool $tmp1388 = $tmp1394.value;
        if ($tmp1388) goto $l1395;
        panda$core$Bit $tmp1396 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1384);
        $tmp1388 = $tmp1396.value;
        $l1395:;
        panda$core$Bit $tmp1397 = { $tmp1388 };
        if ($tmp1397.value) {
        {
            $tmp1398 = annotations1384;
            panda$core$Int64$init$builtin_int64(&$tmp1399, 256);
            panda$core$Int64 $tmp1400 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1398->flags, $tmp1399);
            $tmp1398->flags = $tmp1400;
        }
        }
        memset(&generics1401, 0, sizeof(generics1401));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1404;
            {
                {
                    $tmp1405 = generics1401;
                    panda$collections$Array* $tmp1408 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1408);
                    $tmp1407 = $tmp1408;
                    $tmp1406 = $tmp1407;
                    generics1401 = $tmp1406;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                }
                panda$core$String* $tmp1415 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1414 = $tmp1415;
                panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1416);
                $tmp1413 = $tmp1417;
                panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, p_name);
                $tmp1412 = $tmp1418;
                panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1419);
                $tmp1411 = $tmp1420;
                $tmp1410 = $tmp1411;
                fullName1409 = $tmp1410;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                {
                    int $tmp1423;
                    {
                        ITable* $tmp1427 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1427->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1427 = $tmp1427->next;
                        }
                        $fn1429 $tmp1428 = $tmp1427->methods[0];
                        panda$collections$Iterator* $tmp1430 = $tmp1428(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1426 = $tmp1430;
                        $tmp1425 = $tmp1426;
                        Iter$401$131424 = $tmp1425;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1425));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                        $l1431:;
                        ITable* $tmp1434 = Iter$401$131424->$class->itable;
                        while ($tmp1434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1434 = $tmp1434->next;
                        }
                        $fn1436 $tmp1435 = $tmp1434->methods[0];
                        panda$core$Bit $tmp1437 = $tmp1435(Iter$401$131424);
                        panda$core$Bit $tmp1438 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1437);
                        bool $tmp1433 = $tmp1438.value;
                        if (!$tmp1433) goto $l1432;
                        {
                            int $tmp1441;
                            {
                                ITable* $tmp1445 = Iter$401$131424->$class->itable;
                                while ($tmp1445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1445 = $tmp1445->next;
                                }
                                $fn1447 $tmp1446 = $tmp1445->methods[1];
                                panda$core$Object* $tmp1448 = $tmp1446(Iter$401$131424);
                                $tmp1444 = $tmp1448;
                                $tmp1443 = ((org$pandalanguage$pandac$ASTNode*) $tmp1444);
                                p1442 = $tmp1443;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1443));
                                panda$core$Panda$unref$panda$core$Object($tmp1444);
                                memset(&parameterName1449, 0, sizeof(parameterName1449));
                                memset(&bound1450, 0, sizeof(bound1450));
                                int $tmp1453;
                                {
                                    $tmp1455 = p1442;
                                    $match$404_171454 = $tmp1455;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
                                    panda$core$Int64$init$builtin_int64(&$tmp1456, 20);
                                    panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$404_171454->$rawValue, $tmp1456);
                                    if ($tmp1457.value) {
                                    {
                                        panda$core$String** $tmp1459 = ((panda$core$String**) ((char*) $match$404_171454->$data + 16));
                                        id1458 = *$tmp1459;
                                        {
                                            $tmp1460 = parameterName1449;
                                            $tmp1461 = id1458;
                                            parameterName1449 = $tmp1461;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1461));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                                        }
                                        {
                                            $tmp1462 = bound1450;
                                            org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1464 = $tmp1465;
                                            $tmp1463 = $tmp1464;
                                            bound1450 = $tmp1463;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1463));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1466, 44);
                                    panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$404_171454->$rawValue, $tmp1466);
                                    if ($tmp1467.value) {
                                    {
                                        panda$core$String** $tmp1469 = ((panda$core$String**) ((char*) $match$404_171454->$data + 16));
                                        id1468 = *$tmp1469;
                                        org$pandalanguage$pandac$ASTNode** $tmp1471 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$404_171454->$data + 24));
                                        type1470 = *$tmp1471;
                                        {
                                            $tmp1472 = parameterName1449;
                                            $tmp1473 = id1468;
                                            parameterName1449 = $tmp1473;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                                        }
                                        {
                                            $tmp1474 = bound1450;
                                            org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1470);
                                            $tmp1476 = $tmp1477;
                                            $tmp1475 = $tmp1476;
                                            bound1450 = $tmp1475;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1478, false);
                                        if ($tmp1478.value) goto $l1479; else goto $l1480;
                                        $l1480:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1481, (panda$core$Int64) { 412 });
                                        abort();
                                        $l1479:;
                                    }
                                    }
                                    }
                                }
                                $tmp1453 = -1;
                                goto $l1451;
                                $l1451:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1455));
                                switch ($tmp1453) {
                                    case -1: goto $l1482;
                                }
                                $l1482:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1484 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1486 = (($fn1485) p1442->$class->vtable[2])(p1442);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1484, $tmp1486, fullName1409, parameterName1449, bound1450);
                                $tmp1483 = $tmp1484;
                                panda$collections$Array$add$panda$collections$Array$T(generics1401, ((panda$core$Object*) $tmp1483));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
                            }
                            $tmp1441 = -1;
                            goto $l1439;
                            $l1439:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1450));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1449));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1442));
                            p1442 = NULL;
                            switch ($tmp1441) {
                                case -1: goto $l1487;
                            }
                            $l1487:;
                        }
                        goto $l1431;
                        $l1432:;
                    }
                    $tmp1423 = -1;
                    goto $l1421;
                    $l1421:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$401$131424));
                    Iter$401$131424 = NULL;
                    switch ($tmp1423) {
                        case -1: goto $l1488;
                    }
                    $l1488:;
                }
            }
            $tmp1404 = -1;
            goto $l1402;
            $l1402:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1409));
            fullName1409 = NULL;
            switch ($tmp1404) {
                case -1: goto $l1489;
            }
            $l1489:;
        }
        }
        else {
        {
            {
                $tmp1490 = generics1401;
                $tmp1491 = NULL;
                generics1401 = $tmp1491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
            }
        }
        }
        panda$collections$Array* $tmp1495 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1495);
        $tmp1494 = $tmp1495;
        $tmp1493 = $tmp1494;
        parameters1492 = $tmp1493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
        {
            int $tmp1498;
            {
                ITable* $tmp1502 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1502 = $tmp1502->next;
                }
                $fn1504 $tmp1503 = $tmp1502->methods[0];
                panda$collections$Iterator* $tmp1505 = $tmp1503(((panda$collections$Iterable*) p_rawParameters));
                $tmp1501 = $tmp1505;
                $tmp1500 = $tmp1501;
                Iter$422$91499 = $tmp1500;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1500));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
                $l1506:;
                ITable* $tmp1509 = Iter$422$91499->$class->itable;
                while ($tmp1509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1509 = $tmp1509->next;
                }
                $fn1511 $tmp1510 = $tmp1509->methods[0];
                panda$core$Bit $tmp1512 = $tmp1510(Iter$422$91499);
                panda$core$Bit $tmp1513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1512);
                bool $tmp1508 = $tmp1513.value;
                if (!$tmp1508) goto $l1507;
                {
                    int $tmp1516;
                    {
                        ITable* $tmp1520 = Iter$422$91499->$class->itable;
                        while ($tmp1520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1520 = $tmp1520->next;
                        }
                        $fn1522 $tmp1521 = $tmp1520->methods[1];
                        panda$core$Object* $tmp1523 = $tmp1521(Iter$422$91499);
                        $tmp1519 = $tmp1523;
                        $tmp1518 = ((org$pandalanguage$pandac$ASTNode*) $tmp1519);
                        p1517 = $tmp1518;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1518));
                        panda$core$Panda$unref$panda$core$Object($tmp1519);
                        int $tmp1526;
                        {
                            $tmp1528 = p1517;
                            $match$423_131527 = $tmp1528;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
                            panda$core$Int64$init$builtin_int64(&$tmp1529, 31);
                            panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_131527->$rawValue, $tmp1529);
                            if ($tmp1530.value) {
                            {
                                panda$core$String** $tmp1532 = ((panda$core$String**) ((char*) $match$423_131527->$data + 16));
                                name1531 = *$tmp1532;
                                org$pandalanguage$pandac$ASTNode** $tmp1534 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$423_131527->$data + 24));
                                type1533 = *$tmp1534;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1536 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1538 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1533);
                                $tmp1537 = $tmp1538;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1536, name1531, $tmp1537);
                                $tmp1535 = $tmp1536;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1492, ((panda$core$Object*) $tmp1535));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1539, false);
                                if ($tmp1539.value) goto $l1540; else goto $l1541;
                                $l1541:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1542, (panda$core$Int64) { 427 });
                                abort();
                                $l1540:;
                            }
                            }
                        }
                        $tmp1526 = -1;
                        goto $l1524;
                        $l1524:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
                        switch ($tmp1526) {
                            case -1: goto $l1543;
                        }
                        $l1543:;
                    }
                    $tmp1516 = -1;
                    goto $l1514;
                    $l1514:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1517));
                    p1517 = NULL;
                    switch ($tmp1516) {
                        case -1: goto $l1544;
                    }
                    $l1544:;
                }
                goto $l1506;
                $l1507:;
            }
            $tmp1498 = -1;
            goto $l1496;
            $l1496:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$91499));
            Iter$422$91499 = NULL;
            switch ($tmp1498) {
                case -1: goto $l1545;
            }
            $l1545:;
        }
        memset(&returnType1546, 0, sizeof(returnType1546));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1547 = returnType1546;
                org$pandalanguage$pandac$Type* $tmp1550 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1549 = $tmp1550;
                $tmp1548 = $tmp1549;
                returnType1546 = $tmp1548;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
            }
        }
        }
        else {
        {
            {
                $tmp1551 = returnType1546;
                org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1553 = $tmp1554;
                $tmp1552 = $tmp1553;
                returnType1546 = $tmp1552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1556, 1);
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1556);
        bool $tmp1555 = $tmp1557.value;
        if (!$tmp1555) goto $l1558;
        org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1559 = $tmp1560;
        panda$core$Bit $tmp1561 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1546, $tmp1559);
        $tmp1555 = $tmp1561.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
        $l1558:;
        panda$core$Bit $tmp1562 = { $tmp1555 };
        if ($tmp1562.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1563);
        }
        }
        bool $tmp1564 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1564) goto $l1565;
        panda$core$Bit $tmp1566 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1384, p_statements);
        $tmp1564 = $tmp1566.value;
        $l1565:;
        panda$core$Bit $tmp1567 = { $tmp1564 };
        if ($tmp1567.value) {
        {
            $tmp1568 = annotations1384;
            panda$core$Int64$init$builtin_int64(&$tmp1569, 1024);
            panda$core$Int64 $tmp1570 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1568->flags, $tmp1569);
            $tmp1568->flags = $tmp1570;
        }
        }
        bool $tmp1571 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1571) goto $l1572;
        panda$core$Int64$init$builtin_int64(&$tmp1573, 1);
        panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1573);
        $tmp1571 = $tmp1574.value;
        $l1572:;
        panda$core$Bit $tmp1575 = { $tmp1571 };
        if ($tmp1575.value) {
        {
            $tmp1576 = annotations1384;
            panda$core$Int64$init$builtin_int64(&$tmp1577, 512);
            panda$core$Int64 $tmp1578 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1576->flags, $tmp1577);
            $tmp1576->flags = $tmp1578;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1582 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1582, p_owner, p_position, doccomment1363, annotations1384, p_kind, p_name, generics1401, parameters1492, returnType1546, p_statements);
        $tmp1581 = $tmp1582;
        $tmp1580 = $tmp1581;
        $returnValue1579 = $tmp1580;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
        $tmp1362 = 0;
        goto $l1360;
        $l1583:;
        return $returnValue1579;
    }
    $l1360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1546));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1401));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1363));
    annotations1384 = NULL;
    parameters1492 = NULL;
    switch ($tmp1362) {
        case 0: goto $l1583;
    }
    $l1585:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$451_91589 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1590;
    panda$core$Int64 $tmp1591;
    org$pandalanguage$pandac$Position position1593;
    org$pandalanguage$pandac$ASTNode* dc1595 = NULL;
    panda$collections$ImmutableArray* annotations1597 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1599 = NULL;
    panda$core$Int64 $tmp1601;
    org$pandalanguage$pandac$Position position1603;
    org$pandalanguage$pandac$ASTNode* dc1605 = NULL;
    panda$collections$ImmutableArray* annotations1607 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1609;
    panda$core$String* name1611 = NULL;
    panda$collections$ImmutableArray* generics1613 = NULL;
    panda$collections$ImmutableArray* parameters1615 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1617 = NULL;
    panda$collections$ImmutableArray* statements1619 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1624 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1625;
    org$pandalanguage$pandac$MethodDecl* $tmp1626;
    panda$core$Int64 $tmp1629;
    org$pandalanguage$pandac$Position position1631;
    org$pandalanguage$pandac$ASTNode* dc1633 = NULL;
    panda$collections$ImmutableArray* annotations1635 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1637;
    panda$core$String* name1639 = NULL;
    panda$collections$ImmutableArray* generics1641 = NULL;
    panda$collections$ImmutableArray* supertypes1643 = NULL;
    panda$collections$ImmutableArray* members1645 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1650 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1651;
    org$pandalanguage$pandac$ClassDecl* $tmp1652;
    panda$core$Weak* $tmp1654;
    panda$core$Weak* $tmp1655;
    panda$core$Weak* $tmp1656;
    panda$core$String* $tmp1658;
    org$pandalanguage$pandac$Alias* $tmp1665;
    panda$core$String* $tmp1667;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1668;
    panda$core$Int64 $tmp1670;
    panda$core$Bit $tmp1672;
    org$pandalanguage$pandac$Position $tmp1674;
    org$pandalanguage$pandac$Alias* $tmp1675;
    panda$core$String* $tmp1677;
    org$pandalanguage$pandac$Position $tmp1679;
    panda$core$Int64 $tmp1681;
    org$pandalanguage$pandac$Position position1683;
    org$pandalanguage$pandac$ASTNode* dc1685 = NULL;
    panda$core$String* name1687 = NULL;
    panda$collections$ImmutableArray* fields1689 = NULL;
    panda$core$Bit $tmp1691;
    panda$core$String* $tmp1695;
    panda$core$String* $tmp1696;
    int $tmp1588;
    {
        $tmp1590 = p_node;
        $match$451_91589 = $tmp1590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1590));
        panda$core$Int64$init$builtin_int64(&$tmp1591, 16);
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91589->$rawValue, $tmp1591);
        if ($tmp1592.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1594 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91589->$data + 0));
            position1593 = *$tmp1594;
            org$pandalanguage$pandac$ASTNode** $tmp1596 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91589->$data + 16));
            dc1595 = *$tmp1596;
            panda$collections$ImmutableArray** $tmp1598 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 24));
            annotations1597 = *$tmp1598;
            org$pandalanguage$pandac$ASTNode** $tmp1600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91589->$data + 32));
            varDecl1599 = *$tmp1600;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1593, dc1595, annotations1597, varDecl1599);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1601, 26);
        panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91589->$rawValue, $tmp1601);
        if ($tmp1602.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1604 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91589->$data + 0));
            position1603 = *$tmp1604;
            org$pandalanguage$pandac$ASTNode** $tmp1606 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91589->$data + 16));
            dc1605 = *$tmp1606;
            panda$collections$ImmutableArray** $tmp1608 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 24));
            annotations1607 = *$tmp1608;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1610 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$451_91589->$data + 32));
            kind1609 = *$tmp1610;
            panda$core$String** $tmp1612 = ((panda$core$String**) ((char*) $match$451_91589->$data + 40));
            name1611 = *$tmp1612;
            panda$collections$ImmutableArray** $tmp1614 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 48));
            generics1613 = *$tmp1614;
            panda$collections$ImmutableArray** $tmp1616 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 56));
            parameters1615 = *$tmp1616;
            org$pandalanguage$pandac$ASTNode** $tmp1618 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91589->$data + 64));
            returnType1617 = *$tmp1618;
            panda$collections$ImmutableArray** $tmp1620 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 72));
            statements1619 = *$tmp1620;
            int $tmp1623;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1627 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1603, dc1605, annotations1607, kind1609, name1611, generics1613, parameters1615, returnType1617, statements1619);
                $tmp1626 = $tmp1627;
                $tmp1625 = $tmp1626;
                m1624 = $tmp1625;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
                if (((panda$core$Bit) { m1624 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1624));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1624));
                }
                }
            }
            $tmp1623 = -1;
            goto $l1621;
            $l1621:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1624));
            m1624 = NULL;
            switch ($tmp1623) {
                case -1: goto $l1628;
            }
            $l1628:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1629, 11);
        panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91589->$rawValue, $tmp1629);
        if ($tmp1630.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1632 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91589->$data + 0));
            position1631 = *$tmp1632;
            org$pandalanguage$pandac$ASTNode** $tmp1634 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91589->$data + 16));
            dc1633 = *$tmp1634;
            panda$collections$ImmutableArray** $tmp1636 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 24));
            annotations1635 = *$tmp1636;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1638 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$451_91589->$data + 32));
            kind1637 = *$tmp1638;
            panda$core$String** $tmp1640 = ((panda$core$String**) ((char*) $match$451_91589->$data + 40));
            name1639 = *$tmp1640;
            panda$collections$ImmutableArray** $tmp1642 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 48));
            generics1641 = *$tmp1642;
            panda$collections$ImmutableArray** $tmp1644 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 56));
            supertypes1643 = *$tmp1644;
            panda$collections$ImmutableArray** $tmp1646 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 64));
            members1645 = *$tmp1646;
            int $tmp1649;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1653 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1631, dc1633, annotations1635, kind1637, name1639, generics1641, supertypes1643, members1645);
                $tmp1652 = $tmp1653;
                $tmp1651 = $tmp1652;
                inner1650 = $tmp1651;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1651));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1652));
                if (((panda$core$Bit) { inner1650 != NULL }).value) {
                {
                    {
                        $tmp1654 = inner1650->owner;
                        panda$core$Weak* $tmp1657 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1657, ((panda$core$Object*) p_cl));
                        $tmp1656 = $tmp1657;
                        $tmp1655 = $tmp1656;
                        inner1650->owner = $tmp1655;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1655));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1650));
                    panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1659);
                    $tmp1658 = $tmp1660;
                    panda$core$Bit $tmp1661 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1650->name, $tmp1658);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
                    if ($tmp1661.value) goto $l1662; else goto $l1663;
                    $l1663:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1664, (panda$core$Int64) { 469 });
                    abort();
                    $l1662:;
                    org$pandalanguage$pandac$Alias* $tmp1666 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1669 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1670, 1);
                    panda$core$Int64 $tmp1671 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1669, $tmp1670);
                    panda$core$Bit$init$builtin_bit(&$tmp1672, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1668, ((panda$core$Int64$nullable) { $tmp1671, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1672);
                    panda$core$String* $tmp1673 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1650->name, $tmp1668);
                    $tmp1667 = $tmp1673;
                    org$pandalanguage$pandac$Position$init(&$tmp1674);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1666, $tmp1667, inner1650->name, $tmp1674);
                    $tmp1665 = $tmp1666;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1665));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
                    org$pandalanguage$pandac$Alias* $tmp1676 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1678 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1677 = $tmp1678;
                    org$pandalanguage$pandac$Position$init(&$tmp1679);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1676, $tmp1677, p_cl->name, $tmp1679);
                    $tmp1675 = $tmp1676;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1650->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1675));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                }
                }
            }
            $tmp1649 = -1;
            goto $l1647;
            $l1647:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1650));
            inner1650 = NULL;
            switch ($tmp1649) {
                case -1: goto $l1680;
            }
            $l1680:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1681, 9);
        panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91589->$rawValue, $tmp1681);
        if ($tmp1682.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1684 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91589->$data + 0));
            position1683 = *$tmp1684;
            org$pandalanguage$pandac$ASTNode** $tmp1686 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91589->$data + 16));
            dc1685 = *$tmp1686;
            panda$core$String** $tmp1688 = ((panda$core$String**) ((char*) $match$451_91589->$data + 24));
            name1687 = *$tmp1688;
            panda$collections$ImmutableArray** $tmp1690 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91589->$data + 32));
            fields1689 = *$tmp1690;
            org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1683, dc1685, name1687, fields1689);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1691, false);
            if ($tmp1691.value) goto $l1692; else goto $l1693;
            $l1693:;
            panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1697, ((panda$core$Object*) p_node));
            $tmp1696 = $tmp1698;
            panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1696, &$s1699);
            $tmp1695 = $tmp1700;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1694, (panda$core$Int64) { 477 }, $tmp1695);
            abort();
            $l1692:;
        }
        }
        }
        }
        }
    }
    $tmp1588 = -1;
    goto $l1586;
    $l1586:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
    switch ($tmp1588) {
        case -1: goto $l1701;
    }
    $l1701:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1705 = NULL;
    panda$core$String* $tmp1706;
    panda$core$String* $tmp1707;
    org$pandalanguage$pandac$ASTNode* $match$489_131711 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1712;
    panda$core$Int64 $tmp1713;
    org$pandalanguage$pandac$Position position1715;
    panda$core$String* text1717 = NULL;
    panda$core$String* $tmp1719;
    panda$core$String* $tmp1720;
    panda$core$Bit $tmp1721;
    panda$collections$Array* fields1726 = NULL;
    panda$collections$Array* $tmp1727;
    panda$collections$Array* $tmp1728;
    panda$collections$Iterator* Iter$497$91733 = NULL;
    panda$collections$Iterator* $tmp1734;
    panda$collections$Iterator* $tmp1735;
    org$pandalanguage$pandac$ASTNode* t1751 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1752;
    panda$core$Object* $tmp1753;
    org$pandalanguage$pandac$Type* $tmp1758;
    org$pandalanguage$pandac$ChoiceCase* entry1762 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp1763;
    org$pandalanguage$pandac$ChoiceCase* $tmp1764;
    int $tmp1704;
    {
        memset(&doccomment1705, 0, sizeof(doccomment1705));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1706 = doccomment1705;
                $tmp1707 = NULL;
                doccomment1705 = $tmp1707;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
            }
        }
        }
        else {
        {
            int $tmp1710;
            {
                $tmp1712 = p_rawDoccomment;
                $match$489_131711 = $tmp1712;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
                panda$core$Int64$init$builtin_int64(&$tmp1713, 38);
                panda$core$Bit $tmp1714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$489_131711->$rawValue, $tmp1713);
                if ($tmp1714.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1716 = ((org$pandalanguage$pandac$Position*) ((char*) $match$489_131711->$data + 0));
                    position1715 = *$tmp1716;
                    panda$core$String** $tmp1718 = ((panda$core$String**) ((char*) $match$489_131711->$data + 16));
                    text1717 = *$tmp1718;
                    {
                        $tmp1719 = doccomment1705;
                        $tmp1720 = text1717;
                        doccomment1705 = $tmp1720;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1719));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1721, false);
                    if ($tmp1721.value) goto $l1722; else goto $l1723;
                    $l1723:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1724, (panda$core$Int64) { 493 });
                    abort();
                    $l1722:;
                }
                }
            }
            $tmp1710 = -1;
            goto $l1708;
            $l1708:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
            switch ($tmp1710) {
                case -1: goto $l1725;
            }
            $l1725:;
        }
        }
        panda$collections$Array* $tmp1729 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1729);
        $tmp1728 = $tmp1729;
        $tmp1727 = $tmp1728;
        fields1726 = $tmp1727;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
        {
            int $tmp1732;
            {
                ITable* $tmp1736 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1736 = $tmp1736->next;
                }
                $fn1738 $tmp1737 = $tmp1736->methods[0];
                panda$collections$Iterator* $tmp1739 = $tmp1737(((panda$collections$Iterable*) p_rawFields));
                $tmp1735 = $tmp1739;
                $tmp1734 = $tmp1735;
                Iter$497$91733 = $tmp1734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
                $l1740:;
                ITable* $tmp1743 = Iter$497$91733->$class->itable;
                while ($tmp1743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1743 = $tmp1743->next;
                }
                $fn1745 $tmp1744 = $tmp1743->methods[0];
                panda$core$Bit $tmp1746 = $tmp1744(Iter$497$91733);
                panda$core$Bit $tmp1747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1746);
                bool $tmp1742 = $tmp1747.value;
                if (!$tmp1742) goto $l1741;
                {
                    int $tmp1750;
                    {
                        ITable* $tmp1754 = Iter$497$91733->$class->itable;
                        while ($tmp1754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1754 = $tmp1754->next;
                        }
                        $fn1756 $tmp1755 = $tmp1754->methods[1];
                        panda$core$Object* $tmp1757 = $tmp1755(Iter$497$91733);
                        $tmp1753 = $tmp1757;
                        $tmp1752 = ((org$pandalanguage$pandac$ASTNode*) $tmp1753);
                        t1751 = $tmp1752;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1752));
                        panda$core$Panda$unref$panda$core$Object($tmp1753);
                        org$pandalanguage$pandac$Type* $tmp1759 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1751);
                        $tmp1758 = $tmp1759;
                        panda$collections$Array$add$panda$collections$Array$T(fields1726, ((panda$core$Object*) $tmp1758));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
                    }
                    $tmp1750 = -1;
                    goto $l1748;
                    $l1748:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1751));
                    t1751 = NULL;
                    switch ($tmp1750) {
                        case -1: goto $l1760;
                    }
                    $l1760:;
                }
                goto $l1740;
                $l1741:;
            }
            $tmp1732 = -1;
            goto $l1730;
            $l1730:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$497$91733));
            Iter$497$91733 = NULL;
            switch ($tmp1732) {
                case -1: goto $l1761;
            }
            $l1761:;
        }
        org$pandalanguage$pandac$ChoiceCase* $tmp1765 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
        ITable* $tmp1766 = ((panda$collections$CollectionView*) p_cl->choiceCases)->$class->itable;
        while ($tmp1766->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1766 = $tmp1766->next;
        }
        $fn1768 $tmp1767 = $tmp1766->methods[0];
        panda$core$Int64 $tmp1769 = $tmp1767(((panda$collections$CollectionView*) p_cl->choiceCases));
        org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1765, p_cl, p_position, p_name, doccomment1705, $tmp1769, ((panda$collections$ListView*) fields1726));
        $tmp1764 = $tmp1765;
        $tmp1763 = $tmp1764;
        entry1762 = $tmp1763;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceCases, ((panda$core$Object*) entry1762));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1762));
    }
    $tmp1704 = -1;
    goto $l1702;
    $l1702:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1762));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1726));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1705));
    fields1726 = NULL;
    entry1762 = NULL;
    switch ($tmp1704) {
        case -1: goto $l1770;
    }
    $l1770:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1774 = NULL;
    panda$core$String* $tmp1780;
    panda$core$String* $tmp1781;
    panda$core$String* $tmp1782;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1784;
    panda$core$String* $tmp1785;
    panda$core$String* $tmp1792;
    panda$core$String* $tmp1793;
    panda$core$String* doccomment1794 = NULL;
    panda$core$String* $tmp1795;
    panda$core$String* $tmp1796;
    org$pandalanguage$pandac$ASTNode* $match$523_131800 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    panda$core$Int64 $tmp1802;
    org$pandalanguage$pandac$Position position1804;
    panda$core$String* text1806 = NULL;
    panda$core$String* $tmp1808;
    panda$core$String* $tmp1809;
    panda$core$Bit $tmp1810;
    org$pandalanguage$pandac$Annotations* annotations1815 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1816;
    org$pandalanguage$pandac$Annotations* $tmp1817;
    panda$collections$Array* parameters1819 = NULL;
    panda$collections$Array* $tmp1820;
    panda$collections$Array* $tmp1821;
    panda$collections$Iterator* Iter$533$131826 = NULL;
    panda$collections$Iterator* $tmp1827;
    panda$collections$Iterator* $tmp1828;
    org$pandalanguage$pandac$ASTNode* p1844 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1845;
    panda$core$Object* $tmp1846;
    panda$core$String* name1851 = NULL;
    org$pandalanguage$pandac$Type* bound1852 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$536_171856 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1857;
    panda$core$Int64 $tmp1858;
    panda$core$String* id1860 = NULL;
    panda$core$String* $tmp1862;
    panda$core$String* $tmp1863;
    org$pandalanguage$pandac$Type* $tmp1864;
    org$pandalanguage$pandac$Type* $tmp1865;
    org$pandalanguage$pandac$Type* $tmp1866;
    panda$core$Int64 $tmp1868;
    panda$core$String* id1870 = NULL;
    org$pandalanguage$pandac$ASTNode* type1872 = NULL;
    panda$core$String* $tmp1874;
    panda$core$String* $tmp1875;
    org$pandalanguage$pandac$Type* $tmp1876;
    org$pandalanguage$pandac$Type* $tmp1877;
    org$pandalanguage$pandac$Type* $tmp1878;
    panda$core$Bit $tmp1880;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1885;
    panda$core$Int64 $tmp1891;
    panda$collections$Array* supertypes1894 = NULL;
    panda$collections$Array* $tmp1895;
    panda$collections$Array* $tmp1896;
    panda$core$Int64 $tmp1898;
    panda$collections$Iterator* Iter$557$131904 = NULL;
    panda$collections$Iterator* $tmp1905;
    panda$collections$Iterator* $tmp1906;
    org$pandalanguage$pandac$ASTNode* s1922 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1923;
    panda$core$Object* $tmp1924;
    org$pandalanguage$pandac$Type* $tmp1929;
    org$pandalanguage$pandac$ClassDecl* result1933 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1934;
    org$pandalanguage$pandac$ClassDecl* $tmp1935;
    panda$core$Object* $tmp1937;
    panda$core$Object* $tmp1939;
    panda$core$Int64 $tmp1941;
    org$pandalanguage$pandac$FieldDecl* rawValue1946 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1947;
    org$pandalanguage$pandac$FieldDecl* $tmp1948;
    org$pandalanguage$pandac$Annotations* $tmp1950;
    panda$core$Int64 $tmp1952;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1953;
    panda$core$Int64 $tmp1954;
    org$pandalanguage$pandac$Type* $tmp1956;
    org$pandalanguage$pandac$FieldDecl* data1958 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1959;
    org$pandalanguage$pandac$FieldDecl* $tmp1960;
    org$pandalanguage$pandac$Annotations* $tmp1962;
    panda$core$Int64 $tmp1964;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1965;
    panda$core$Int64 $tmp1966;
    org$pandalanguage$pandac$Type* $tmp1968;
    panda$collections$Iterator* Iter$576$91974 = NULL;
    panda$collections$Iterator* $tmp1975;
    panda$collections$Iterator* $tmp1976;
    org$pandalanguage$pandac$ASTNode* m1992 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    panda$core$Object* $tmp1994;
    org$pandalanguage$pandac$ASTNode* $match$577_132002 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    panda$core$Int64 $tmp2004;
    org$pandalanguage$pandac$Position mPosition2006;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind2008;
    panda$core$Int64 $tmp2010;
    org$pandalanguage$pandac$ClassDecl$Kind $match$580_252012;
    panda$core$Int64 $tmp2013;
    panda$core$Int64 $tmp2015;
    panda$core$Int64 $tmp2018;
    panda$core$Bit foundInit2024;
    panda$core$Bit $tmp2025;
    panda$core$Bit foundCleanup2026;
    panda$core$Bit $tmp2027;
    panda$collections$Iterator* Iter$595$92031 = NULL;
    panda$collections$Iterator* $tmp2032;
    panda$collections$Iterator* $tmp2033;
    org$pandalanguage$pandac$MethodDecl* m2049 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2050;
    panda$core$Object* $tmp2051;
    panda$core$Int64 $tmp2056;
    panda$core$Bit $tmp2058;
    panda$core$Int64 $tmp2067;
    panda$core$Bit $tmp2070;
    panda$core$Int64 $tmp2071;
    panda$core$Int64 $tmp2080;
    org$pandalanguage$pandac$MethodDecl* defaultInit2093 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2094;
    org$pandalanguage$pandac$MethodDecl* $tmp2095;
    org$pandalanguage$pandac$Annotations* $tmp2097;
    panda$core$Int64 $tmp2099;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2100;
    panda$core$Int64 $tmp2101;
    panda$collections$Array* $tmp2103;
    panda$collections$Array* $tmp2105;
    org$pandalanguage$pandac$Type* $tmp2107;
    panda$collections$ImmutableArray* $tmp2109;
    panda$core$Int64 $tmp2117;
    panda$core$Int64 $tmp2120;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2134 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2135;
    org$pandalanguage$pandac$MethodDecl* $tmp2136;
    org$pandalanguage$pandac$Annotations* $tmp2138;
    panda$core$Int64 $tmp2140;
    panda$core$Int64 $tmp2141;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2143;
    panda$core$Int64 $tmp2144;
    panda$collections$Array* $tmp2146;
    panda$collections$Array* $tmp2148;
    org$pandalanguage$pandac$Type* $tmp2150;
    panda$collections$ImmutableArray* $tmp2152;
    panda$core$Int64 $tmp2155;
    panda$core$Bit haveFields2157;
    panda$core$Bit $tmp2158;
    panda$core$Int64 $tmp2163;
    panda$collections$Iterator* Iter$626$172168 = NULL;
    panda$collections$Iterator* $tmp2169;
    panda$collections$Iterator* $tmp2170;
    org$pandalanguage$pandac$ChoiceCase* e2186 = NULL;
    org$pandalanguage$pandac$ChoiceCase* $tmp2187;
    panda$core$Object* $tmp2188;
    panda$core$Int64 $tmp2197;
    panda$core$Bit $tmp2199;
    org$pandalanguage$pandac$ClassDecl* $returnValue2204;
    org$pandalanguage$pandac$ClassDecl* $tmp2205;
    org$pandalanguage$pandac$Type* $tmp2209;
    org$pandalanguage$pandac$Type* $tmp2210;
    org$pandalanguage$pandac$Type* $tmp2211;
    panda$core$Object* $tmp2213;
    panda$core$Object* $tmp2214;
    org$pandalanguage$pandac$ClassDecl* $tmp2217;
    int $tmp1773;
    {
        memset(&fullName1774, 0, sizeof(fullName1774));
        ITable* $tmp1776 = ((panda$core$Equatable*) p_contextName)->$class->itable;
        while ($tmp1776->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp1776 = $tmp1776->next;
        }
        $fn1778 $tmp1777 = $tmp1776->methods[1];
        panda$core$Bit $tmp1779 = $tmp1777(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s1775));
        if ($tmp1779.value) {
        {
            {
                $tmp1780 = fullName1774;
                panda$core$String* $tmp1786 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1785 = $tmp1786;
                panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1787);
                $tmp1784 = $tmp1788;
                panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, p_name);
                $tmp1783 = $tmp1789;
                panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1790);
                $tmp1782 = $tmp1791;
                $tmp1781 = $tmp1782;
                fullName1774 = $tmp1781;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
            }
        }
        }
        else {
        {
            {
                $tmp1792 = fullName1774;
                $tmp1793 = p_name;
                fullName1774 = $tmp1793;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
            }
        }
        }
        memset(&doccomment1794, 0, sizeof(doccomment1794));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1795 = doccomment1794;
                $tmp1796 = NULL;
                doccomment1794 = $tmp1796;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
            }
        }
        }
        else {
        {
            int $tmp1799;
            {
                $tmp1801 = p_rawDoccomment;
                $match$523_131800 = $tmp1801;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1801));
                panda$core$Int64$init$builtin_int64(&$tmp1802, 38);
                panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$523_131800->$rawValue, $tmp1802);
                if ($tmp1803.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1805 = ((org$pandalanguage$pandac$Position*) ((char*) $match$523_131800->$data + 0));
                    position1804 = *$tmp1805;
                    panda$core$String** $tmp1807 = ((panda$core$String**) ((char*) $match$523_131800->$data + 16));
                    text1806 = *$tmp1807;
                    {
                        $tmp1808 = doccomment1794;
                        $tmp1809 = text1806;
                        doccomment1794 = $tmp1809;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1808));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1810, false);
                    if ($tmp1810.value) goto $l1811; else goto $l1812;
                    $l1812:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1813, (panda$core$Int64) { 527 });
                    abort();
                    $l1811:;
                }
                }
            }
            $tmp1799 = -1;
            goto $l1797;
            $l1797:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
            switch ($tmp1799) {
                case -1: goto $l1814;
            }
            $l1814:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1818 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1817 = $tmp1818;
        $tmp1816 = $tmp1817;
        annotations1815 = $tmp1816;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
        panda$collections$Array* $tmp1822 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1822);
        $tmp1821 = $tmp1822;
        $tmp1820 = $tmp1821;
        parameters1819 = $tmp1820;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1825;
                {
                    ITable* $tmp1829 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1829->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1829 = $tmp1829->next;
                    }
                    $fn1831 $tmp1830 = $tmp1829->methods[0];
                    panda$collections$Iterator* $tmp1832 = $tmp1830(((panda$collections$Iterable*) p_generics));
                    $tmp1828 = $tmp1832;
                    $tmp1827 = $tmp1828;
                    Iter$533$131826 = $tmp1827;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1828));
                    $l1833:;
                    ITable* $tmp1836 = Iter$533$131826->$class->itable;
                    while ($tmp1836->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1836 = $tmp1836->next;
                    }
                    $fn1838 $tmp1837 = $tmp1836->methods[0];
                    panda$core$Bit $tmp1839 = $tmp1837(Iter$533$131826);
                    panda$core$Bit $tmp1840 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1839);
                    bool $tmp1835 = $tmp1840.value;
                    if (!$tmp1835) goto $l1834;
                    {
                        int $tmp1843;
                        {
                            ITable* $tmp1847 = Iter$533$131826->$class->itable;
                            while ($tmp1847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1847 = $tmp1847->next;
                            }
                            $fn1849 $tmp1848 = $tmp1847->methods[1];
                            panda$core$Object* $tmp1850 = $tmp1848(Iter$533$131826);
                            $tmp1846 = $tmp1850;
                            $tmp1845 = ((org$pandalanguage$pandac$ASTNode*) $tmp1846);
                            p1844 = $tmp1845;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1845));
                            panda$core$Panda$unref$panda$core$Object($tmp1846);
                            memset(&name1851, 0, sizeof(name1851));
                            memset(&bound1852, 0, sizeof(bound1852));
                            int $tmp1855;
                            {
                                $tmp1857 = p1844;
                                $match$536_171856 = $tmp1857;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1857));
                                panda$core$Int64$init$builtin_int64(&$tmp1858, 20);
                                panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_171856->$rawValue, $tmp1858);
                                if ($tmp1859.value) {
                                {
                                    panda$core$String** $tmp1861 = ((panda$core$String**) ((char*) $match$536_171856->$data + 16));
                                    id1860 = *$tmp1861;
                                    {
                                        $tmp1862 = name1851;
                                        $tmp1863 = id1860;
                                        name1851 = $tmp1863;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
                                    }
                                    {
                                        $tmp1864 = bound1852;
                                        org$pandalanguage$pandac$Type* $tmp1867 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1866 = $tmp1867;
                                        $tmp1865 = $tmp1866;
                                        bound1852 = $tmp1865;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1865));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1868, 44);
                                panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_171856->$rawValue, $tmp1868);
                                if ($tmp1869.value) {
                                {
                                    panda$core$String** $tmp1871 = ((panda$core$String**) ((char*) $match$536_171856->$data + 16));
                                    id1870 = *$tmp1871;
                                    org$pandalanguage$pandac$ASTNode** $tmp1873 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$536_171856->$data + 24));
                                    type1872 = *$tmp1873;
                                    {
                                        $tmp1874 = name1851;
                                        $tmp1875 = id1870;
                                        name1851 = $tmp1875;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
                                    }
                                    {
                                        $tmp1876 = bound1852;
                                        org$pandalanguage$pandac$Type* $tmp1879 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1872);
                                        $tmp1878 = $tmp1879;
                                        $tmp1877 = $tmp1878;
                                        bound1852 = $tmp1877;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1880, false);
                                    if ($tmp1880.value) goto $l1881; else goto $l1882;
                                    $l1882:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1883, (panda$core$Int64) { 544 });
                                    abort();
                                    $l1881:;
                                }
                                }
                                }
                            }
                            $tmp1855 = -1;
                            goto $l1853;
                            $l1853:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                            switch ($tmp1855) {
                                case -1: goto $l1884;
                            }
                            $l1884:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1886 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1888 = (($fn1887) p1844->$class->vtable[2])(p1844);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1886, $tmp1888, fullName1774, name1851, bound1852);
                            $tmp1885 = $tmp1886;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1819, ((panda$core$Object*) $tmp1885));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
                        }
                        $tmp1843 = -1;
                        goto $l1841;
                        $l1841:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1852));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1851));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1844));
                        p1844 = NULL;
                        switch ($tmp1843) {
                            case -1: goto $l1889;
                        }
                        $l1889:;
                    }
                    goto $l1833;
                    $l1834:;
                }
                $tmp1825 = -1;
                goto $l1823;
                $l1823:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$533$131826));
                Iter$533$131826 = NULL;
                switch ($tmp1825) {
                    case -1: goto $l1890;
                }
                $l1890:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1891, 2);
            panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1891);
            if ($tmp1892.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1893);
            }
            }
        }
        }
        panda$collections$Array* $tmp1897 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1897);
        $tmp1896 = $tmp1897;
        $tmp1895 = $tmp1896;
        supertypes1894 = $tmp1895;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1898, 2);
            panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1898);
            if ($tmp1899.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1900);
            }
            }
            {
                int $tmp1903;
                {
                    ITable* $tmp1907 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1907->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1907 = $tmp1907->next;
                    }
                    $fn1909 $tmp1908 = $tmp1907->methods[0];
                    panda$collections$Iterator* $tmp1910 = $tmp1908(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1906 = $tmp1910;
                    $tmp1905 = $tmp1906;
                    Iter$557$131904 = $tmp1905;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1905));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                    $l1911:;
                    ITable* $tmp1914 = Iter$557$131904->$class->itable;
                    while ($tmp1914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1914 = $tmp1914->next;
                    }
                    $fn1916 $tmp1915 = $tmp1914->methods[0];
                    panda$core$Bit $tmp1917 = $tmp1915(Iter$557$131904);
                    panda$core$Bit $tmp1918 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1917);
                    bool $tmp1913 = $tmp1918.value;
                    if (!$tmp1913) goto $l1912;
                    {
                        int $tmp1921;
                        {
                            ITable* $tmp1925 = Iter$557$131904->$class->itable;
                            while ($tmp1925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1925 = $tmp1925->next;
                            }
                            $fn1927 $tmp1926 = $tmp1925->methods[1];
                            panda$core$Object* $tmp1928 = $tmp1926(Iter$557$131904);
                            $tmp1924 = $tmp1928;
                            $tmp1923 = ((org$pandalanguage$pandac$ASTNode*) $tmp1924);
                            s1922 = $tmp1923;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                            panda$core$Panda$unref$panda$core$Object($tmp1924);
                            org$pandalanguage$pandac$Type* $tmp1930 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1922);
                            $tmp1929 = $tmp1930;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1894, ((panda$core$Object*) $tmp1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1929));
                        }
                        $tmp1921 = -1;
                        goto $l1919;
                        $l1919:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1922));
                        s1922 = NULL;
                        switch ($tmp1921) {
                            case -1: goto $l1931;
                        }
                        $l1931:;
                    }
                    goto $l1911;
                    $l1912:;
                }
                $tmp1903 = -1;
                goto $l1901;
                $l1901:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$557$131904));
                Iter$557$131904 = NULL;
                switch ($tmp1903) {
                    case -1: goto $l1932;
                }
                $l1932:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1936 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1938 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1937 = $tmp1938;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1936, p_source, p_position, p_aliases, doccomment1794, annotations1815, p_kind, fullName1774, ((panda$collections$ListView*) supertypes1894), parameters1819, ((org$pandalanguage$pandac$Compiler*) $tmp1937)->root);
        $tmp1935 = $tmp1936;
        $tmp1934 = $tmp1935;
        result1933 = $tmp1934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
        panda$core$Panda$unref$panda$core$Object($tmp1937);
        panda$core$Object* $tmp1940 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1939 = $tmp1940;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1939)->currentClass, ((panda$core$Object*) result1933));
        panda$core$Panda$unref$panda$core$Object($tmp1939);
        panda$core$Int64$init$builtin_int64(&$tmp1941, 2);
        panda$core$Bit $tmp1942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1941);
        if ($tmp1942.value) {
        {
            int $tmp1945;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1949 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1951 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1952, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1951, $tmp1952);
                $tmp1950 = $tmp1951;
                panda$core$Int64$init$builtin_int64(&$tmp1954, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1953, $tmp1954);
                org$pandalanguage$pandac$Type* $tmp1957 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1956 = $tmp1957;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1949, result1933, result1933->position, NULL, $tmp1950, $tmp1953, &$s1955, $tmp1956, NULL);
                $tmp1948 = $tmp1949;
                $tmp1947 = $tmp1948;
                rawValue1946 = $tmp1947;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
                panda$collections$Array$add$panda$collections$Array$T(result1933->fields, ((panda$core$Object*) rawValue1946));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1933->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1946));
                org$pandalanguage$pandac$FieldDecl* $tmp1961 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1963 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1964, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1963, $tmp1964);
                $tmp1962 = $tmp1963;
                panda$core$Int64$init$builtin_int64(&$tmp1966, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1965, $tmp1966);
                org$pandalanguage$pandac$Type* $tmp1969 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1968 = $tmp1969;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1961, result1933, result1933->position, NULL, $tmp1962, $tmp1965, &$s1967, $tmp1968, NULL);
                $tmp1960 = $tmp1961;
                $tmp1959 = $tmp1960;
                data1958 = $tmp1959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                panda$collections$Array$add$panda$collections$Array$T(result1933->fields, ((panda$core$Object*) data1958));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1933->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1958));
            }
            $tmp1945 = -1;
            goto $l1943;
            $l1943:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1958));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1946));
            rawValue1946 = NULL;
            data1958 = NULL;
            switch ($tmp1945) {
                case -1: goto $l1970;
            }
            $l1970:;
        }
        }
        {
            int $tmp1973;
            {
                ITable* $tmp1977 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1977->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1977 = $tmp1977->next;
                }
                $fn1979 $tmp1978 = $tmp1977->methods[0];
                panda$collections$Iterator* $tmp1980 = $tmp1978(((panda$collections$Iterable*) p_members));
                $tmp1976 = $tmp1980;
                $tmp1975 = $tmp1976;
                Iter$576$91974 = $tmp1975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1975));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1976));
                $l1981:;
                ITable* $tmp1984 = Iter$576$91974->$class->itable;
                while ($tmp1984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1984 = $tmp1984->next;
                }
                $fn1986 $tmp1985 = $tmp1984->methods[0];
                panda$core$Bit $tmp1987 = $tmp1985(Iter$576$91974);
                panda$core$Bit $tmp1988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1987);
                bool $tmp1983 = $tmp1988.value;
                if (!$tmp1983) goto $l1982;
                {
                    int $tmp1991;
                    {
                        ITable* $tmp1995 = Iter$576$91974->$class->itable;
                        while ($tmp1995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1995 = $tmp1995->next;
                        }
                        $fn1997 $tmp1996 = $tmp1995->methods[1];
                        panda$core$Object* $tmp1998 = $tmp1996(Iter$576$91974);
                        $tmp1994 = $tmp1998;
                        $tmp1993 = ((org$pandalanguage$pandac$ASTNode*) $tmp1994);
                        m1992 = $tmp1993;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
                        panda$core$Panda$unref$panda$core$Object($tmp1994);
                        int $tmp2001;
                        {
                            $tmp2003 = m1992;
                            $match$577_132002 = $tmp2003;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2003));
                            panda$core$Int64$init$builtin_int64(&$tmp2004, 26);
                            panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$577_132002->$rawValue, $tmp2004);
                            if ($tmp2005.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp2007 = ((org$pandalanguage$pandac$Position*) ((char*) $match$577_132002->$data + 0));
                                mPosition2006 = *$tmp2007;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2009 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$577_132002->$data + 32));
                                methodKind2008 = *$tmp2009;
                                panda$core$Int64$init$builtin_int64(&$tmp2010, 2);
                                panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind2008.$rawValue, $tmp2010);
                                if ($tmp2011.value) {
                                {
                                    {
                                        $match$580_252012 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2013, 0);
                                        panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$580_252012.$rawValue, $tmp2013);
                                        if ($tmp2014.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2015, 1);
                                        panda$core$Bit $tmp2016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$580_252012.$rawValue, $tmp2015);
                                        if ($tmp2016.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2006, &$s2017);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2018, 2);
                                        panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$580_252012.$rawValue, $tmp2018);
                                        if ($tmp2019.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2006, &$s2020);
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
                        $tmp2001 = -1;
                        goto $l1999;
                        $l1999:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
                        switch ($tmp2001) {
                            case -1: goto $l2021;
                        }
                        $l2021:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1933, m1992);
                    }
                    $tmp1991 = -1;
                    goto $l1989;
                    $l1989:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1992));
                    m1992 = NULL;
                    switch ($tmp1991) {
                        case -1: goto $l2022;
                    }
                    $l2022:;
                }
                goto $l1981;
                $l1982:;
            }
            $tmp1973 = -1;
            goto $l1971;
            $l1971:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$576$91974));
            Iter$576$91974 = NULL;
            switch ($tmp1973) {
                case -1: goto $l2023;
            }
            $l2023:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2025, false);
        foundInit2024 = $tmp2025;
        panda$core$Bit$init$builtin_bit(&$tmp2027, false);
        foundCleanup2026 = $tmp2027;
        {
            int $tmp2030;
            {
                ITable* $tmp2034 = ((panda$collections$Iterable*) result1933->methods)->$class->itable;
                while ($tmp2034->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2034 = $tmp2034->next;
                }
                $fn2036 $tmp2035 = $tmp2034->methods[0];
                panda$collections$Iterator* $tmp2037 = $tmp2035(((panda$collections$Iterable*) result1933->methods));
                $tmp2033 = $tmp2037;
                $tmp2032 = $tmp2033;
                Iter$595$92031 = $tmp2032;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2033));
                $l2038:;
                ITable* $tmp2041 = Iter$595$92031->$class->itable;
                while ($tmp2041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2041 = $tmp2041->next;
                }
                $fn2043 $tmp2042 = $tmp2041->methods[0];
                panda$core$Bit $tmp2044 = $tmp2042(Iter$595$92031);
                panda$core$Bit $tmp2045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2044);
                bool $tmp2040 = $tmp2045.value;
                if (!$tmp2040) goto $l2039;
                {
                    int $tmp2048;
                    {
                        ITable* $tmp2052 = Iter$595$92031->$class->itable;
                        while ($tmp2052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2052 = $tmp2052->next;
                        }
                        $fn2054 $tmp2053 = $tmp2052->methods[1];
                        panda$core$Object* $tmp2055 = $tmp2053(Iter$595$92031);
                        $tmp2051 = $tmp2055;
                        $tmp2050 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2051);
                        m2049 = $tmp2050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
                        panda$core$Panda$unref$panda$core$Object($tmp2051);
                        panda$core$Int64$init$builtin_int64(&$tmp2056, 2);
                        panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2049->methodKind.$rawValue, $tmp2056);
                        if ($tmp2057.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2058, true);
                            foundInit2024 = $tmp2058;
                        }
                        }
                        panda$core$Bit $tmp2061 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2049)->name, &$s2060);
                        bool $tmp2059 = $tmp2061.value;
                        if (!$tmp2059) goto $l2062;
                        ITable* $tmp2063 = ((panda$collections$CollectionView*) m2049->parameters)->$class->itable;
                        while ($tmp2063->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                            $tmp2063 = $tmp2063->next;
                        }
                        $fn2065 $tmp2064 = $tmp2063->methods[0];
                        panda$core$Int64 $tmp2066 = $tmp2064(((panda$collections$CollectionView*) m2049->parameters));
                        panda$core$Int64$init$builtin_int64(&$tmp2067, 0);
                        panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2066, $tmp2067);
                        $tmp2059 = $tmp2068.value;
                        $l2062:;
                        panda$core$Bit $tmp2069 = { $tmp2059 };
                        if ($tmp2069.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2070, true);
                            foundCleanup2026 = $tmp2070;
                            panda$core$Int64$init$builtin_int64(&$tmp2071, 2);
                            panda$core$Bit $tmp2072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2071);
                            if ($tmp2072.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2073);
                            }
                            }
                        }
                        }
                    }
                    $tmp2048 = -1;
                    goto $l2046;
                    $l2046:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2049));
                    m2049 = NULL;
                    switch ($tmp2048) {
                        case -1: goto $l2074;
                    }
                    $l2074:;
                }
                goto $l2038;
                $l2039:;
            }
            $tmp2030 = -1;
            goto $l2028;
            $l2028:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$595$92031));
            Iter$595$92031 = NULL;
            switch ($tmp2030) {
                case -1: goto $l2075;
            }
            $l2075:;
        }
        panda$core$Bit $tmp2078 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2024);
        bool $tmp2077 = $tmp2078.value;
        if (!$tmp2077) goto $l2079;
        panda$core$Int64$init$builtin_int64(&$tmp2080, 0);
        panda$core$Bit $tmp2081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2080);
        $tmp2077 = $tmp2081.value;
        $l2079:;
        panda$core$Bit $tmp2082 = { $tmp2077 };
        bool $tmp2076 = $tmp2082.value;
        if (!$tmp2076) goto $l2083;
        ITable* $tmp2085 = ((panda$core$Equatable*) result1933->name)->$class->itable;
        while ($tmp2085->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2085 = $tmp2085->next;
        }
        $fn2087 $tmp2086 = $tmp2085->methods[1];
        panda$core$Bit $tmp2088 = $tmp2086(((panda$core$Equatable*) result1933->name), ((panda$core$Equatable*) &$s2084));
        $tmp2076 = $tmp2088.value;
        $l2083:;
        panda$core$Bit $tmp2089 = { $tmp2076 };
        if ($tmp2089.value) {
        {
            int $tmp2092;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2096 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2098 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2099, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2098, $tmp2099);
                $tmp2097 = $tmp2098;
                panda$core$Int64$init$builtin_int64(&$tmp2101, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2100, $tmp2101);
                panda$collections$Array* $tmp2104 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2104);
                $tmp2103 = $tmp2104;
                panda$collections$Array* $tmp2106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2106);
                $tmp2105 = $tmp2106;
                org$pandalanguage$pandac$Type* $tmp2108 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2107 = $tmp2108;
                panda$collections$ImmutableArray* $tmp2110 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2110);
                $tmp2109 = $tmp2110;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2096, result1933, p_position, NULL, $tmp2097, $tmp2100, &$s2102, $tmp2103, $tmp2105, $tmp2107, $tmp2109);
                $tmp2095 = $tmp2096;
                $tmp2094 = $tmp2095;
                defaultInit2093 = $tmp2094;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2097));
                panda$collections$Array$add$panda$collections$Array$T(result1933->methods, ((panda$core$Object*) defaultInit2093));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1933->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2093));
            }
            $tmp2092 = -1;
            goto $l2090;
            $l2090:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2093));
            defaultInit2093 = NULL;
            switch ($tmp2092) {
                case -1: goto $l2111;
            }
            $l2111:;
        }
        }
        panda$core$Bit $tmp2114 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2026);
        bool $tmp2113 = $tmp2114.value;
        if (!$tmp2113) goto $l2115;
        panda$core$Int64$init$builtin_int64(&$tmp2117, 0);
        panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2117);
        bool $tmp2116 = $tmp2118.value;
        if ($tmp2116) goto $l2119;
        panda$core$Int64$init$builtin_int64(&$tmp2120, 2);
        panda$core$Bit $tmp2121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2120);
        $tmp2116 = $tmp2121.value;
        $l2119:;
        panda$core$Bit $tmp2122 = { $tmp2116 };
        $tmp2113 = $tmp2122.value;
        $l2115:;
        panda$core$Bit $tmp2123 = { $tmp2113 };
        bool $tmp2112 = $tmp2123.value;
        if (!$tmp2112) goto $l2124;
        ITable* $tmp2126 = ((panda$core$Equatable*) result1933->name)->$class->itable;
        while ($tmp2126->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2126 = $tmp2126->next;
        }
        $fn2128 $tmp2127 = $tmp2126->methods[1];
        panda$core$Bit $tmp2129 = $tmp2127(((panda$core$Equatable*) result1933->name), ((panda$core$Equatable*) &$s2125));
        $tmp2112 = $tmp2129.value;
        $l2124:;
        panda$core$Bit $tmp2130 = { $tmp2112 };
        if ($tmp2130.value) {
        {
            int $tmp2133;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2137 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2139 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2140, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2141, 8192);
                panda$core$Int64 $tmp2142 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2140, $tmp2141);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2139, $tmp2142);
                $tmp2138 = $tmp2139;
                panda$core$Int64$init$builtin_int64(&$tmp2144, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2143, $tmp2144);
                panda$collections$Array* $tmp2147 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2147);
                $tmp2146 = $tmp2147;
                panda$collections$Array* $tmp2149 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2149);
                $tmp2148 = $tmp2149;
                org$pandalanguage$pandac$Type* $tmp2151 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2150 = $tmp2151;
                panda$collections$ImmutableArray* $tmp2153 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2153);
                $tmp2152 = $tmp2153;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2137, result1933, p_position, NULL, $tmp2138, $tmp2143, &$s2145, $tmp2146, $tmp2148, $tmp2150, $tmp2152);
                $tmp2136 = $tmp2137;
                $tmp2135 = $tmp2136;
                defaultCleanup2134 = $tmp2135;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2148));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
                panda$collections$Array$add$panda$collections$Array$T(result1933->methods, ((panda$core$Object*) defaultCleanup2134));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1933->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2134));
            }
            $tmp2133 = -1;
            goto $l2131;
            $l2131:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2134));
            defaultCleanup2134 = NULL;
            switch ($tmp2133) {
                case -1: goto $l2154;
            }
            $l2154:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2155, 2);
        panda$core$Bit $tmp2156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2155);
        if ($tmp2156.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2158, false);
            haveFields2157 = $tmp2158;
            ITable* $tmp2159 = ((panda$collections$CollectionView*) result1933->choiceCases)->$class->itable;
            while ($tmp2159->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2159 = $tmp2159->next;
            }
            $fn2161 $tmp2160 = $tmp2159->methods[0];
            panda$core$Int64 $tmp2162 = $tmp2160(((panda$collections$CollectionView*) result1933->choiceCases));
            panda$core$Int64$init$builtin_int64(&$tmp2163, 0);
            panda$core$Bit $tmp2164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2162, $tmp2163);
            if ($tmp2164.value) {
            {
                {
                    int $tmp2167;
                    {
                        ITable* $tmp2171 = ((panda$collections$Iterable*) result1933->choiceCases)->$class->itable;
                        while ($tmp2171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2171 = $tmp2171->next;
                        }
                        $fn2173 $tmp2172 = $tmp2171->methods[0];
                        panda$collections$Iterator* $tmp2174 = $tmp2172(((panda$collections$Iterable*) result1933->choiceCases));
                        $tmp2170 = $tmp2174;
                        $tmp2169 = $tmp2170;
                        Iter$626$172168 = $tmp2169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
                        $l2175:;
                        ITable* $tmp2178 = Iter$626$172168->$class->itable;
                        while ($tmp2178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2178 = $tmp2178->next;
                        }
                        $fn2180 $tmp2179 = $tmp2178->methods[0];
                        panda$core$Bit $tmp2181 = $tmp2179(Iter$626$172168);
                        panda$core$Bit $tmp2182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2181);
                        bool $tmp2177 = $tmp2182.value;
                        if (!$tmp2177) goto $l2176;
                        {
                            int $tmp2185;
                            {
                                ITable* $tmp2189 = Iter$626$172168->$class->itable;
                                while ($tmp2189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2189 = $tmp2189->next;
                                }
                                $fn2191 $tmp2190 = $tmp2189->methods[1];
                                panda$core$Object* $tmp2192 = $tmp2190(Iter$626$172168);
                                $tmp2188 = $tmp2192;
                                $tmp2187 = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2188);
                                e2186 = $tmp2187;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
                                panda$core$Panda$unref$panda$core$Object($tmp2188);
                                ITable* $tmp2193 = ((panda$collections$CollectionView*) e2186->fields)->$class->itable;
                                while ($tmp2193->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                    $tmp2193 = $tmp2193->next;
                                }
                                $fn2195 $tmp2194 = $tmp2193->methods[0];
                                panda$core$Int64 $tmp2196 = $tmp2194(((panda$collections$CollectionView*) e2186->fields));
                                panda$core$Int64$init$builtin_int64(&$tmp2197, 0);
                                panda$core$Bit $tmp2198 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2196, $tmp2197);
                                if ($tmp2198.value) {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2199, true);
                                    haveFields2157 = $tmp2199;
                                    $tmp2185 = 0;
                                    goto $l2183;
                                    $l2200:;
                                    goto $l2176;
                                }
                                }
                            }
                            $tmp2185 = -1;
                            goto $l2183;
                            $l2183:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2186));
                            e2186 = NULL;
                            switch ($tmp2185) {
                                case 0: goto $l2200;
                                case -1: goto $l2201;
                            }
                            $l2201:;
                        }
                        goto $l2175;
                        $l2176:;
                    }
                    $tmp2167 = -1;
                    goto $l2165;
                    $l2165:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$626$172168));
                    Iter$626$172168 = NULL;
                    switch ($tmp2167) {
                        case -1: goto $l2202;
                    }
                    $l2202:;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, result1933->position, &$s2203);
                $tmp2205 = NULL;
                $returnValue2204 = $tmp2205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2205));
                $tmp1773 = 0;
                goto $l1771;
                $l2206:;
                return $returnValue2204;
            }
            }
            panda$core$Bit $tmp2208 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2157);
            if ($tmp2208.value) {
            {
                {
                    $tmp2209 = result1933->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2212 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2211 = $tmp2212;
                    $tmp2210 = $tmp2211;
                    result1933->rawSuper = $tmp2210;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2209));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2215 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2214 = $tmp2215;
        panda$core$Object* $tmp2216 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2214)->currentClass);
        $tmp2213 = $tmp2216;
        panda$core$Panda$unref$panda$core$Object($tmp2213);
        panda$core$Panda$unref$panda$core$Object($tmp2214);
        $tmp2217 = result1933;
        $returnValue2204 = $tmp2217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2217));
        $tmp1773 = 1;
        goto $l1771;
        $l2218:;
        return $returnValue2204;
    }
    $l1771:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1933));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1894));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1819));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1815));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1794));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1774));
    annotations1815 = NULL;
    parameters1819 = NULL;
    supertypes1894 = NULL;
    result1933 = NULL;
    switch ($tmp1773) {
        case 1: goto $l2218;
        case 0: goto $l2206;
    }
    $l2220:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$647$92224 = NULL;
    panda$collections$Iterator* $tmp2225;
    panda$collections$Iterator* $tmp2226;
    org$pandalanguage$pandac$ClassDecl* inner2242 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2243;
    panda$core$Object* $tmp2244;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2223;
        {
            ITable* $tmp2227 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2227->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2227 = $tmp2227->next;
            }
            $fn2229 $tmp2228 = $tmp2227->methods[0];
            panda$collections$Iterator* $tmp2230 = $tmp2228(((panda$collections$Iterable*) p_cl->classes));
            $tmp2226 = $tmp2230;
            $tmp2225 = $tmp2226;
            Iter$647$92224 = $tmp2225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
            $l2231:;
            ITable* $tmp2234 = Iter$647$92224->$class->itable;
            while ($tmp2234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2234 = $tmp2234->next;
            }
            $fn2236 $tmp2235 = $tmp2234->methods[0];
            panda$core$Bit $tmp2237 = $tmp2235(Iter$647$92224);
            panda$core$Bit $tmp2238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2237);
            bool $tmp2233 = $tmp2238.value;
            if (!$tmp2233) goto $l2232;
            {
                int $tmp2241;
                {
                    ITable* $tmp2245 = Iter$647$92224->$class->itable;
                    while ($tmp2245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2245 = $tmp2245->next;
                    }
                    $fn2247 $tmp2246 = $tmp2245->methods[1];
                    panda$core$Object* $tmp2248 = $tmp2246(Iter$647$92224);
                    $tmp2244 = $tmp2248;
                    $tmp2243 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2244);
                    inner2242 = $tmp2243;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2243));
                    panda$core$Panda$unref$panda$core$Object($tmp2244);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2242, p_arr);
                }
                $tmp2241 = -1;
                goto $l2239;
                $l2239:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2242));
                inner2242 = NULL;
                switch ($tmp2241) {
                    case -1: goto $l2249;
                }
                $l2249:;
            }
            goto $l2231;
            $l2232:;
        }
        $tmp2223 = -1;
        goto $l2221;
        $l2221:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$647$92224));
        Iter$647$92224 = NULL;
        switch ($tmp2223) {
            case -1: goto $l2250;
        }
        $l2250:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, panda$collections$List* p_classes) {
    panda$core$String* fullName2254 = NULL;
    panda$core$String* $tmp2260;
    panda$core$String* $tmp2261;
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2263;
    panda$core$String* $tmp2267;
    panda$core$String* $tmp2268;
    org$pandalanguage$pandac$ClassDecl* $tmp2270;
    org$pandalanguage$pandac$ClassDecl* $tmp2271;
    org$pandalanguage$pandac$ClassDecl* $tmp2272;
    org$pandalanguage$pandac$Position $tmp2274;
    org$pandalanguage$pandac$Annotations* $tmp2275;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2277;
    panda$core$Int64 $tmp2278;
    panda$collections$Array* $tmp2279;
    panda$collections$Array* $tmp2281;
    panda$core$Object* $tmp2283;
    org$pandalanguage$pandac$MethodDecl* defaultInit2288 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2289;
    org$pandalanguage$pandac$MethodDecl* $tmp2290;
    org$pandalanguage$pandac$Position $tmp2292;
    org$pandalanguage$pandac$Annotations* $tmp2293;
    panda$core$Int64 $tmp2295;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2296;
    panda$core$Int64 $tmp2297;
    panda$collections$Array* $tmp2299;
    panda$collections$Array* $tmp2301;
    org$pandalanguage$pandac$Type* $tmp2303;
    panda$collections$ImmutableArray* $tmp2305;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2307 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2308;
    org$pandalanguage$pandac$MethodDecl* $tmp2309;
    org$pandalanguage$pandac$Position $tmp2311;
    org$pandalanguage$pandac$Annotations* $tmp2312;
    panda$core$Int64 $tmp2314;
    panda$core$Int64 $tmp2315;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2317;
    panda$core$Int64 $tmp2318;
    panda$collections$Array* $tmp2320;
    panda$collections$Array* $tmp2322;
    org$pandalanguage$pandac$Type* $tmp2324;
    panda$collections$ImmutableArray* $tmp2326;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2253;
        {
            memset(&fullName2254, 0, sizeof(fullName2254));
            ITable* $tmp2256 = ((panda$core$Equatable*) p_contextName)->$class->itable;
            while ($tmp2256->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp2256 = $tmp2256->next;
            }
            $fn2258 $tmp2257 = $tmp2256->methods[1];
            panda$core$Bit $tmp2259 = $tmp2257(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s2255));
            if ($tmp2259.value) {
            {
                {
                    $tmp2260 = fullName2254;
                    panda$core$String* $tmp2264 = panda$core$String$convert$R$panda$core$String(p_contextName);
                    $tmp2263 = $tmp2264;
                    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2265);
                    $tmp2262 = $tmp2266;
                    $tmp2261 = $tmp2262;
                    fullName2254 = $tmp2261;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
                }
            }
            }
            else {
            {
                {
                    $tmp2267 = fullName2254;
                    $tmp2268 = &$s2269;
                    fullName2254 = $tmp2268;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2268));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
                }
            }
            }
            {
                $tmp2270 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2273 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2274);
                org$pandalanguage$pandac$Annotations* $tmp2276 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2276);
                $tmp2275 = $tmp2276;
                panda$core$Int64$init$builtin_int64(&$tmp2278, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2277, $tmp2278);
                panda$collections$Array* $tmp2280 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2280);
                $tmp2279 = $tmp2280;
                panda$collections$Array* $tmp2282 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2282);
                $tmp2281 = $tmp2282;
                panda$core$Object* $tmp2284 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2283 = $tmp2284;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2273, p_source, $tmp2274, p_aliases, NULL, $tmp2275, $tmp2277, fullName2254, ((panda$collections$ListView*) $tmp2279), $tmp2281, ((org$pandalanguage$pandac$Compiler*) $tmp2283)->root);
                $tmp2272 = $tmp2273;
                $tmp2271 = $tmp2272;
                self->bareCodeClass = $tmp2271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2271));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
                panda$core$Panda$unref$panda$core$Object($tmp2283);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
            }
            ITable* $tmp2285 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2285->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2285 = $tmp2285->next;
            }
            $fn2287 $tmp2286 = $tmp2285->methods[0];
            $tmp2286(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2291 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2292);
            org$pandalanguage$pandac$Annotations* $tmp2294 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2295, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2294, $tmp2295);
            $tmp2293 = $tmp2294;
            panda$core$Int64$init$builtin_int64(&$tmp2297, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2296, $tmp2297);
            panda$collections$Array* $tmp2300 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2300);
            $tmp2299 = $tmp2300;
            panda$collections$Array* $tmp2302 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2302);
            $tmp2301 = $tmp2302;
            org$pandalanguage$pandac$Type* $tmp2304 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2303 = $tmp2304;
            panda$collections$ImmutableArray* $tmp2306 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2306);
            $tmp2305 = $tmp2306;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2291, self->bareCodeClass, $tmp2292, NULL, $tmp2293, $tmp2296, &$s2298, $tmp2299, $tmp2301, $tmp2303, $tmp2305);
            $tmp2290 = $tmp2291;
            $tmp2289 = $tmp2290;
            defaultInit2288 = $tmp2289;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2288));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2288));
            org$pandalanguage$pandac$MethodDecl* $tmp2310 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2311);
            org$pandalanguage$pandac$Annotations* $tmp2313 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2314, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2315, 8192);
            panda$core$Int64 $tmp2316 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2314, $tmp2315);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2313, $tmp2316);
            $tmp2312 = $tmp2313;
            panda$core$Int64$init$builtin_int64(&$tmp2318, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2317, $tmp2318);
            panda$collections$Array* $tmp2321 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2321);
            $tmp2320 = $tmp2321;
            panda$collections$Array* $tmp2323 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2323);
            $tmp2322 = $tmp2323;
            org$pandalanguage$pandac$Type* $tmp2325 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2324 = $tmp2325;
            panda$collections$ImmutableArray* $tmp2327 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2327);
            $tmp2326 = $tmp2327;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2310, self->bareCodeClass, $tmp2311, NULL, $tmp2312, $tmp2317, &$s2319, $tmp2320, $tmp2322, $tmp2324, $tmp2326);
            $tmp2309 = $tmp2310;
            $tmp2308 = $tmp2309;
            defaultCleanup2307 = $tmp2308;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2307));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2307));
        }
        $tmp2253 = -1;
        goto $l2251;
        $l2251:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2307));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName2254));
        defaultInit2288 = NULL;
        defaultCleanup2307 = NULL;
        switch ($tmp2253) {
            case -1: goto $l2328;
        }
        $l2328:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2333;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2329; else goto $l2330;
    $l2330:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2331, (panda$core$Int64) { 682 }, &$s2332);
    abort();
    $l2329:;
    panda$core$Object* $tmp2334 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2333 = $tmp2334;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2333), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2333);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2335;
    panda$io$File* $tmp2336;
    org$pandalanguage$pandac$ASTNode* $match$688_92340 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2341;
    panda$core$Int64 $tmp2342;
    panda$collections$ImmutableArray* entries2344 = NULL;
    panda$collections$Array* result2349 = NULL;
    panda$collections$Array* $tmp2350;
    panda$collections$Array* $tmp2351;
    panda$core$String* currentPackage2353 = NULL;
    panda$core$String* $tmp2354;
    panda$collections$HashMap* aliases2356 = NULL;
    panda$collections$HashMap* $tmp2357;
    panda$collections$HashMap* $tmp2358;
    panda$collections$Iterator* Iter$693$172363 = NULL;
    panda$collections$Iterator* $tmp2364;
    panda$collections$Iterator* $tmp2365;
    org$pandalanguage$pandac$ASTNode* e2381 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    panda$core$Object* $tmp2383;
    org$pandalanguage$pandac$ASTNode* $match$694_212391 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2392;
    panda$core$Int64 $tmp2393;
    panda$core$String* name2395 = NULL;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2398;
    panda$core$Int64 $tmp2399;
    panda$core$String* fullName2401 = NULL;
    panda$core$String$Index$nullable idx2406;
    panda$core$String* alias2409 = NULL;
    panda$core$String* $tmp2410;
    panda$core$String* $tmp2411;
    panda$core$String* $tmp2412;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2413;
    panda$core$Bit $tmp2415;
    panda$core$String* $tmp2417;
    panda$core$String* $tmp2418;
    panda$core$Int64 $tmp2420;
    org$pandalanguage$pandac$Position position2422;
    org$pandalanguage$pandac$ASTNode* dc2424 = NULL;
    panda$collections$ImmutableArray* annotations2426 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2428;
    panda$core$String* name2430 = NULL;
    panda$collections$ImmutableArray* generics2432 = NULL;
    panda$collections$ImmutableArray* supertypes2434 = NULL;
    panda$collections$ImmutableArray* members2436 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2441 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2442;
    org$pandalanguage$pandac$ClassDecl* $tmp2443;
    panda$core$Int64 $tmp2446;
    org$pandalanguage$pandac$Position position2448;
    org$pandalanguage$pandac$ASTNode* dc2450 = NULL;
    panda$collections$ImmutableArray* annotations2452 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2454;
    panda$core$String* rawName2456 = NULL;
    panda$collections$ImmutableArray* generics2458 = NULL;
    panda$collections$ImmutableArray* parameters2460 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2462 = NULL;
    panda$collections$ImmutableArray* statements2464 = NULL;
    panda$core$Int64 $tmp2469;
    panda$core$String* name2475 = NULL;
    panda$core$String* $tmp2481;
    panda$core$String* $tmp2482;
    panda$collections$Array* mainParameters2484 = NULL;
    panda$collections$Array* $tmp2485;
    panda$collections$Array* $tmp2486;
    panda$collections$Array* mainStatements2488 = NULL;
    panda$collections$Array* $tmp2489;
    panda$collections$Array* $tmp2490;
    panda$collections$Array* mainArguments2492 = NULL;
    panda$collections$Array* $tmp2493;
    panda$collections$Array* $tmp2494;
    panda$collections$Iterator* Iter$727$332499 = NULL;
    panda$collections$Iterator* $tmp2500;
    panda$collections$Iterator* $tmp2501;
    org$pandalanguage$pandac$ASTNode* p2517 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2518;
    panda$core$Object* $tmp2519;
    org$pandalanguage$pandac$ASTNode* $match$728_372527 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2528;
    panda$core$Int64 $tmp2529;
    org$pandalanguage$pandac$Position position2531;
    panda$core$String* name2533 = NULL;
    org$pandalanguage$pandac$ASTNode* type2535 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2537;
    org$pandalanguage$pandac$Type* $tmp2539;
    org$pandalanguage$pandac$ASTNode* $tmp2541;
    panda$core$Int64 $tmp2543;
    panda$core$Bit $tmp2544;
    org$pandalanguage$pandac$ASTNode* bareConstruct2551 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    panda$core$Int64 $tmp2555;
    org$pandalanguage$pandac$ASTNode* $tmp2556;
    panda$core$Int64 $tmp2558;
    panda$collections$ImmutableArray* $tmp2560;
    org$pandalanguage$pandac$ASTNode* $tmp2562;
    panda$core$Int64 $tmp2564;
    org$pandalanguage$pandac$ASTNode* $tmp2565;
    panda$core$Int64 $tmp2567;
    panda$collections$ImmutableArray* $tmp2568;
    org$pandalanguage$pandac$Type* returnType2570 = NULL;
    org$pandalanguage$pandac$Type* $tmp2571;
    org$pandalanguage$pandac$Type* $tmp2572;
    org$pandalanguage$pandac$Type* $tmp2573;
    org$pandalanguage$pandac$Type* $tmp2575;
    org$pandalanguage$pandac$Type* $tmp2576;
    org$pandalanguage$pandac$Type* $tmp2577;
    org$pandalanguage$pandac$MethodDecl* bareMain2579 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2580;
    org$pandalanguage$pandac$MethodDecl* $tmp2581;
    org$pandalanguage$pandac$Position $tmp2583;
    org$pandalanguage$pandac$Annotations* $tmp2584;
    panda$core$Int64 $tmp2586;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2587;
    panda$core$Int64 $tmp2588;
    panda$collections$Array* $tmp2590;
    panda$collections$ImmutableArray* $tmp2592;
    panda$core$String* $tmp2595;
    panda$core$String* $tmp2596;
    panda$core$Object* $tmp2597;
    org$pandalanguage$pandac$MethodDecl* m2599 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2600;
    org$pandalanguage$pandac$MethodDecl* $tmp2601;
    org$pandalanguage$pandac$Annotations* $tmp2605;
    panda$core$Int64 $tmp2606;
    panda$core$Object* $tmp2609;
    panda$core$Int64 $tmp2612;
    org$pandalanguage$pandac$Position position2614;
    org$pandalanguage$pandac$ASTNode* dc2616 = NULL;
    panda$collections$ImmutableArray* annotations2618 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2620 = NULL;
    panda$core$Int64 old2622;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2627;
    panda$core$Bit $tmp2632;
    org$pandalanguage$pandac$FieldDecl* f2649 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2650;
    panda$core$Object* $tmp2651;
    panda$core$Int64 $tmp2654;
    panda$core$Bit $tmp2667;
    panda$core$String* $tmp2671;
    panda$core$String* $tmp2672;
    panda$core$String* $tmp2673;
    panda$core$String* $tmp2674;
    panda$core$String* $tmp2675;
    panda$core$String* $tmp2676;
    panda$core$Object* $tmp2681;
    panda$core$Object* $tmp2686;
    panda$io$File* $tmp2696;
    panda$io$File* $tmp2697;
    panda$collections$ListView* $returnValue2698;
    panda$collections$ListView* $tmp2699;
    panda$core$Bit $tmp2704;
    {
        $tmp2335 = self->source;
        $tmp2336 = p_source;
        self->source = $tmp2336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
    }
    int $tmp2339;
    {
        $tmp2341 = p_file;
        $match$688_92340 = $tmp2341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
        panda$core$Int64$init$builtin_int64(&$tmp2342, 17);
        panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$688_92340->$rawValue, $tmp2342);
        if ($tmp2343.value) {
        {
            panda$collections$ImmutableArray** $tmp2345 = ((panda$collections$ImmutableArray**) ((char*) $match$688_92340->$data + 0));
            entries2344 = *$tmp2345;
            int $tmp2348;
            {
                panda$collections$Array* $tmp2352 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2352);
                $tmp2351 = $tmp2352;
                $tmp2350 = $tmp2351;
                result2349 = $tmp2350;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
                $tmp2354 = &$s2355;
                currentPackage2353 = $tmp2354;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
                panda$collections$HashMap* $tmp2359 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2359);
                $tmp2358 = $tmp2359;
                $tmp2357 = $tmp2358;
                aliases2356 = $tmp2357;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2358));
                {
                    int $tmp2362;
                    {
                        ITable* $tmp2366 = ((panda$collections$Iterable*) entries2344)->$class->itable;
                        while ($tmp2366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2366 = $tmp2366->next;
                        }
                        $fn2368 $tmp2367 = $tmp2366->methods[0];
                        panda$collections$Iterator* $tmp2369 = $tmp2367(((panda$collections$Iterable*) entries2344));
                        $tmp2365 = $tmp2369;
                        $tmp2364 = $tmp2365;
                        Iter$693$172363 = $tmp2364;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2364));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
                        $l2370:;
                        ITable* $tmp2373 = Iter$693$172363->$class->itable;
                        while ($tmp2373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2373 = $tmp2373->next;
                        }
                        $fn2375 $tmp2374 = $tmp2373->methods[0];
                        panda$core$Bit $tmp2376 = $tmp2374(Iter$693$172363);
                        panda$core$Bit $tmp2377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2376);
                        bool $tmp2372 = $tmp2377.value;
                        if (!$tmp2372) goto $l2371;
                        {
                            int $tmp2380;
                            {
                                ITable* $tmp2384 = Iter$693$172363->$class->itable;
                                while ($tmp2384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2384 = $tmp2384->next;
                                }
                                $fn2386 $tmp2385 = $tmp2384->methods[1];
                                panda$core$Object* $tmp2387 = $tmp2385(Iter$693$172363);
                                $tmp2383 = $tmp2387;
                                $tmp2382 = ((org$pandalanguage$pandac$ASTNode*) $tmp2383);
                                e2381 = $tmp2382;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
                                panda$core$Panda$unref$panda$core$Object($tmp2383);
                                int $tmp2390;
                                {
                                    $tmp2392 = e2381;
                                    $match$694_212391 = $tmp2392;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
                                    panda$core$Int64$init$builtin_int64(&$tmp2393, 30);
                                    panda$core$Bit $tmp2394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212391->$rawValue, $tmp2393);
                                    if ($tmp2394.value) {
                                    {
                                        panda$core$String** $tmp2396 = ((panda$core$String**) ((char*) $match$694_212391->$data + 16));
                                        name2395 = *$tmp2396;
                                        {
                                            $tmp2397 = currentPackage2353;
                                            $tmp2398 = name2395;
                                            currentPackage2353 = $tmp2398;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2397));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2399, 46);
                                    panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212391->$rawValue, $tmp2399);
                                    if ($tmp2400.value) {
                                    {
                                        panda$core$String** $tmp2402 = ((panda$core$String**) ((char*) $match$694_212391->$data + 16));
                                        fullName2401 = *$tmp2402;
                                        int $tmp2405;
                                        {
                                            panda$core$String$Index$nullable $tmp2408 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2401, &$s2407);
                                            idx2406 = $tmp2408;
                                            memset(&alias2409, 0, sizeof(alias2409));
                                            if (((panda$core$Bit) { idx2406.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2410 = alias2409;
                                                    panda$core$String$Index $tmp2414 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2401, ((panda$core$String$Index) idx2406.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2415, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2413, ((panda$core$String$Index$nullable) { $tmp2414, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2415);
                                                    panda$core$String* $tmp2416 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2401, $tmp2413);
                                                    $tmp2412 = $tmp2416;
                                                    $tmp2411 = $tmp2412;
                                                    alias2409 = $tmp2411;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2411));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2412));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2410));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2417 = alias2409;
                                                    $tmp2418 = fullName2401;
                                                    alias2409 = $tmp2418;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2356, ((panda$collections$Key*) alias2409), ((panda$core$Object*) fullName2401));
                                        }
                                        $tmp2405 = -1;
                                        goto $l2403;
                                        $l2403:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2409));
                                        switch ($tmp2405) {
                                            case -1: goto $l2419;
                                        }
                                        $l2419:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2420, 11);
                                    panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212391->$rawValue, $tmp2420);
                                    if ($tmp2421.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2423 = ((org$pandalanguage$pandac$Position*) ((char*) $match$694_212391->$data + 0));
                                        position2422 = *$tmp2423;
                                        org$pandalanguage$pandac$ASTNode** $tmp2425 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212391->$data + 16));
                                        dc2424 = *$tmp2425;
                                        panda$collections$ImmutableArray** $tmp2427 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 24));
                                        annotations2426 = *$tmp2427;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2429 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$694_212391->$data + 32));
                                        kind2428 = *$tmp2429;
                                        panda$core$String** $tmp2431 = ((panda$core$String**) ((char*) $match$694_212391->$data + 40));
                                        name2430 = *$tmp2431;
                                        panda$collections$ImmutableArray** $tmp2433 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 48));
                                        generics2432 = *$tmp2433;
                                        panda$collections$ImmutableArray** $tmp2435 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 56));
                                        supertypes2434 = *$tmp2435;
                                        panda$collections$ImmutableArray** $tmp2437 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 64));
                                        members2436 = *$tmp2437;
                                        int $tmp2440;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2444 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2356), currentPackage2353, position2422, dc2424, annotations2426, kind2428, name2430, generics2432, supertypes2434, members2436);
                                            $tmp2443 = $tmp2444;
                                            $tmp2442 = $tmp2443;
                                            cl2441 = $tmp2442;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
                                            if (((panda$core$Bit) { cl2441 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2441, result2349);
                                            }
                                            }
                                        }
                                        $tmp2440 = -1;
                                        goto $l2438;
                                        $l2438:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2441));
                                        cl2441 = NULL;
                                        switch ($tmp2440) {
                                            case -1: goto $l2445;
                                        }
                                        $l2445:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2446, 26);
                                    panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212391->$rawValue, $tmp2446);
                                    if ($tmp2447.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2449 = ((org$pandalanguage$pandac$Position*) ((char*) $match$694_212391->$data + 0));
                                        position2448 = *$tmp2449;
                                        org$pandalanguage$pandac$ASTNode** $tmp2451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212391->$data + 16));
                                        dc2450 = *$tmp2451;
                                        panda$collections$ImmutableArray** $tmp2453 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 24));
                                        annotations2452 = *$tmp2453;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2455 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$694_212391->$data + 32));
                                        kind2454 = *$tmp2455;
                                        panda$core$String** $tmp2457 = ((panda$core$String**) ((char*) $match$694_212391->$data + 40));
                                        rawName2456 = *$tmp2457;
                                        panda$collections$ImmutableArray** $tmp2459 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 48));
                                        generics2458 = *$tmp2459;
                                        panda$collections$ImmutableArray** $tmp2461 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 56));
                                        parameters2460 = *$tmp2461;
                                        org$pandalanguage$pandac$ASTNode** $tmp2463 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212391->$data + 64));
                                        rawReturnType2462 = *$tmp2463;
                                        panda$collections$ImmutableArray** $tmp2465 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 72));
                                        statements2464 = *$tmp2465;
                                        int $tmp2468;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2469, 2);
                                            panda$core$Bit $tmp2470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2454.$rawValue, $tmp2469);
                                            if ($tmp2470.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2448, &$s2471);
                                                $tmp2468 = 0;
                                                goto $l2466;
                                                $l2472:;
                                                $tmp2390 = 0;
                                                goto $l2388;
                                                $l2473:;
                                                $tmp2380 = 0;
                                                goto $l2378;
                                                $l2474:;
                                                goto $l2370;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2356), currentPackage2353, ((panda$collections$List*) result2349));
                                            memset(&name2475, 0, sizeof(name2475));
                                            panda$core$Bit $tmp2477 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2456, &$s2476);
                                            if ($tmp2477.value) {
                                            {
                                                int $tmp2480;
                                                {
                                                    {
                                                        $tmp2481 = name2475;
                                                        $tmp2482 = &$s2483;
                                                        name2475 = $tmp2482;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2482));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
                                                    }
                                                    panda$collections$Array* $tmp2487 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2487);
                                                    $tmp2486 = $tmp2487;
                                                    $tmp2485 = $tmp2486;
                                                    mainParameters2484 = $tmp2485;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
                                                    panda$collections$Array* $tmp2491 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2491);
                                                    $tmp2490 = $tmp2491;
                                                    $tmp2489 = $tmp2490;
                                                    mainStatements2488 = $tmp2489;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2490));
                                                    panda$collections$Array* $tmp2495 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2495);
                                                    $tmp2494 = $tmp2495;
                                                    $tmp2493 = $tmp2494;
                                                    mainArguments2492 = $tmp2493;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
                                                    {
                                                        int $tmp2498;
                                                        {
                                                            ITable* $tmp2502 = ((panda$collections$Iterable*) parameters2460)->$class->itable;
                                                            while ($tmp2502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2502 = $tmp2502->next;
                                                            }
                                                            $fn2504 $tmp2503 = $tmp2502->methods[0];
                                                            panda$collections$Iterator* $tmp2505 = $tmp2503(((panda$collections$Iterable*) parameters2460));
                                                            $tmp2501 = $tmp2505;
                                                            $tmp2500 = $tmp2501;
                                                            Iter$727$332499 = $tmp2500;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2500));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                                                            $l2506:;
                                                            ITable* $tmp2509 = Iter$727$332499->$class->itable;
                                                            while ($tmp2509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2509 = $tmp2509->next;
                                                            }
                                                            $fn2511 $tmp2510 = $tmp2509->methods[0];
                                                            panda$core$Bit $tmp2512 = $tmp2510(Iter$727$332499);
                                                            panda$core$Bit $tmp2513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2512);
                                                            bool $tmp2508 = $tmp2513.value;
                                                            if (!$tmp2508) goto $l2507;
                                                            {
                                                                int $tmp2516;
                                                                {
                                                                    ITable* $tmp2520 = Iter$727$332499->$class->itable;
                                                                    while ($tmp2520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2520 = $tmp2520->next;
                                                                    }
                                                                    $fn2522 $tmp2521 = $tmp2520->methods[1];
                                                                    panda$core$Object* $tmp2523 = $tmp2521(Iter$727$332499);
                                                                    $tmp2519 = $tmp2523;
                                                                    $tmp2518 = ((org$pandalanguage$pandac$ASTNode*) $tmp2519);
                                                                    p2517 = $tmp2518;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2519);
                                                                    int $tmp2526;
                                                                    {
                                                                        $tmp2528 = p2517;
                                                                        $match$728_372527 = $tmp2528;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2528));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2529, 31);
                                                                        panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_372527->$rawValue, $tmp2529);
                                                                        if ($tmp2530.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2532 = ((org$pandalanguage$pandac$Position*) ((char*) $match$728_372527->$data + 0));
                                                                            position2531 = *$tmp2532;
                                                                            panda$core$String** $tmp2534 = ((panda$core$String**) ((char*) $match$728_372527->$data + 16));
                                                                            name2533 = *$tmp2534;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2536 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$728_372527->$data + 24));
                                                                            type2535 = *$tmp2536;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2538 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2540 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2535);
                                                                            $tmp2539 = $tmp2540;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2538, name2533, $tmp2539);
                                                                            $tmp2537 = $tmp2538;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2484, ((panda$core$Object*) $tmp2537));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2537));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2542 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2543, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2542, $tmp2543, position2531, name2533);
                                                                            $tmp2541 = $tmp2542;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2492, ((panda$core$Object*) $tmp2541));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2541));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2544, false);
                                                                            if ($tmp2544.value) goto $l2545; else goto $l2546;
                                                                            $l2546:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2547, (panda$core$Int64) { 734 });
                                                                            abort();
                                                                            $l2545:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2526 = -1;
                                                                    goto $l2524;
                                                                    $l2524:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2528));
                                                                    switch ($tmp2526) {
                                                                        case -1: goto $l2548;
                                                                    }
                                                                    $l2548:;
                                                                }
                                                                $tmp2516 = -1;
                                                                goto $l2514;
                                                                $l2514:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2517));
                                                                p2517 = NULL;
                                                                switch ($tmp2516) {
                                                                    case -1: goto $l2549;
                                                                }
                                                                $l2549:;
                                                            }
                                                            goto $l2506;
                                                            $l2507:;
                                                        }
                                                        $tmp2498 = -1;
                                                        goto $l2496;
                                                        $l2496:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$727$332499));
                                                        Iter$727$332499 = NULL;
                                                        switch ($tmp2498) {
                                                            case -1: goto $l2550;
                                                        }
                                                        $l2550:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2554 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2555, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2557 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2558, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2557, $tmp2558, position2448, &$s2559);
                                                    $tmp2556 = $tmp2557;
                                                    panda$collections$ImmutableArray* $tmp2561 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2561);
                                                    $tmp2560 = $tmp2561;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2554, $tmp2555, position2448, $tmp2556, $tmp2560);
                                                    $tmp2553 = $tmp2554;
                                                    $tmp2552 = $tmp2553;
                                                    bareConstruct2551 = $tmp2552;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2564, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2566 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2567, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2566, $tmp2567, position2448, bareConstruct2551, name2475);
                                                    $tmp2565 = $tmp2566;
                                                    panda$collections$ImmutableArray* $tmp2569 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2492);
                                                    $tmp2568 = $tmp2569;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2563, $tmp2564, position2448, $tmp2565, $tmp2568);
                                                    $tmp2562 = $tmp2563;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2488, ((panda$core$Object*) $tmp2562));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
                                                    memset(&returnType2570, 0, sizeof(returnType2570));
                                                    if (((panda$core$Bit) { rawReturnType2462 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2571 = returnType2570;
                                                            org$pandalanguage$pandac$Type* $tmp2574 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2462);
                                                            $tmp2573 = $tmp2574;
                                                            $tmp2572 = $tmp2573;
                                                            returnType2570 = $tmp2572;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2572));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2573));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2571));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2575 = returnType2570;
                                                            org$pandalanguage$pandac$Type* $tmp2578 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2577 = $tmp2578;
                                                            $tmp2576 = $tmp2577;
                                                            returnType2570 = $tmp2576;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2576));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2575));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2582 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2583);
                                                    org$pandalanguage$pandac$Annotations* $tmp2585 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2586, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2585, $tmp2586);
                                                    $tmp2584 = $tmp2585;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2588, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2587, $tmp2588);
                                                    panda$collections$Array* $tmp2591 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2591);
                                                    $tmp2590 = $tmp2591;
                                                    panda$collections$ImmutableArray* $tmp2593 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2488);
                                                    $tmp2592 = $tmp2593;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2582, self->bareCodeClass, $tmp2583, NULL, $tmp2584, $tmp2587, &$s2589, $tmp2590, mainParameters2484, returnType2570, $tmp2592);
                                                    $tmp2581 = $tmp2582;
                                                    $tmp2580 = $tmp2581;
                                                    bareMain2579 = $tmp2580;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2580));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2581));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2579));
                                                }
                                                $tmp2480 = -1;
                                                goto $l2478;
                                                $l2478:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2579));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2570));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2551));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2492));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2488));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2484));
                                                mainParameters2484 = NULL;
                                                mainStatements2488 = NULL;
                                                mainArguments2492 = NULL;
                                                bareConstruct2551 = NULL;
                                                bareMain2579 = NULL;
                                                switch ($tmp2480) {
                                                    case -1: goto $l2594;
                                                }
                                                $l2594:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2595 = name2475;
                                                    $tmp2596 = rawName2456;
                                                    name2475 = $tmp2596;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2596));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2595));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2598 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2597 = $tmp2598;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2597)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2597);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2602 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2448, dc2450, annotations2452, kind2454, name2475, generics2458, parameters2460, rawReturnType2462, statements2464);
                                            $tmp2601 = $tmp2602;
                                            $tmp2600 = $tmp2601;
                                            m2599 = $tmp2600;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                                            panda$core$Bit $tmp2603 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2599->annotations);
                                            if ($tmp2603.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2599)->position, &$s2604);
                                                $tmp2605 = m2599->annotations;
                                                panda$core$Int64$init$builtin_int64(&$tmp2606, 16);
                                                panda$core$Int64 $tmp2607 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2606);
                                                panda$core$Int64 $tmp2608 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2605->flags, $tmp2607);
                                                $tmp2605->flags = $tmp2608;
                                            }
                                            }
                                            panda$core$Object* $tmp2610 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2609 = $tmp2610;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2609)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2609);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2599));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2599));
                                        }
                                        $tmp2468 = -1;
                                        goto $l2466;
                                        $l2466:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2599));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2475));
                                        m2599 = NULL;
                                        switch ($tmp2468) {
                                            case -1: goto $l2611;
                                            case 0: goto $l2472;
                                        }
                                        $l2611:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2612, 16);
                                    panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212391->$rawValue, $tmp2612);
                                    if ($tmp2613.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2615 = ((org$pandalanguage$pandac$Position*) ((char*) $match$694_212391->$data + 0));
                                        position2614 = *$tmp2615;
                                        org$pandalanguage$pandac$ASTNode** $tmp2617 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212391->$data + 16));
                                        dc2616 = *$tmp2617;
                                        panda$collections$ImmutableArray** $tmp2619 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212391->$data + 24));
                                        annotations2618 = *$tmp2619;
                                        org$pandalanguage$pandac$ASTNode** $tmp2621 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212391->$data + 32));
                                        varDecl2620 = *$tmp2621;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2356), currentPackage2353, ((panda$collections$List*) result2349));
                                        ITable* $tmp2623 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2623->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2623 = $tmp2623->next;
                                        }
                                        $fn2625 $tmp2624 = $tmp2623->methods[0];
                                        panda$core$Int64 $tmp2626 = $tmp2624(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        old2622 = $tmp2626;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2614, dc2616, annotations2618, varDecl2620);
                                        ITable* $tmp2628 = ((panda$collections$CollectionView*) self->bareCodeClass->fields)->$class->itable;
                                        while ($tmp2628->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                                            $tmp2628 = $tmp2628->next;
                                        }
                                        $fn2630 $tmp2629 = $tmp2628->methods[0];
                                        panda$core$Int64 $tmp2631 = $tmp2629(((panda$collections$CollectionView*) self->bareCodeClass->fields));
                                        panda$core$Bit$init$builtin_bit(&$tmp2632, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2627, old2622, $tmp2631, $tmp2632);
                                        int64_t $tmp2634 = $tmp2627.min.value;
                                        panda$core$Int64 i2633 = { $tmp2634 };
                                        int64_t $tmp2636 = $tmp2627.max.value;
                                        bool $tmp2637 = $tmp2627.inclusive.value;
                                        if ($tmp2637) goto $l2644; else goto $l2645;
                                        $l2644:;
                                        if ($tmp2634 <= $tmp2636) goto $l2638; else goto $l2640;
                                        $l2645:;
                                        if ($tmp2634 < $tmp2636) goto $l2638; else goto $l2640;
                                        $l2638:;
                                        {
                                            int $tmp2648;
                                            {
                                                panda$core$Object* $tmp2652 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2633);
                                                $tmp2651 = $tmp2652;
                                                $tmp2650 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2651);
                                                f2649 = $tmp2650;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2650));
                                                panda$core$Panda$unref$panda$core$Object($tmp2651);
                                                panda$core$Int64$init$builtin_int64(&$tmp2654, 2);
                                                panda$core$Bit $tmp2655 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2649->fieldKind.$rawValue, $tmp2654);
                                                bool $tmp2653 = $tmp2655.value;
                                                if (!$tmp2653) goto $l2656;
                                                panda$core$Bit $tmp2657 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2649->annotations);
                                                $tmp2653 = $tmp2657.value;
                                                $l2656:;
                                                panda$core$Bit $tmp2658 = { $tmp2653 };
                                                if ($tmp2658.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2649)->position, &$s2659);
                                                }
                                                }
                                            }
                                            $tmp2648 = -1;
                                            goto $l2646;
                                            $l2646:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2649));
                                            f2649 = NULL;
                                            switch ($tmp2648) {
                                                case -1: goto $l2660;
                                            }
                                            $l2660:;
                                        }
                                        $l2641:;
                                        int64_t $tmp2662 = $tmp2636 - i2633.value;
                                        if ($tmp2637) goto $l2663; else goto $l2664;
                                        $l2663:;
                                        if ((uint64_t) $tmp2662 >= 1) goto $l2661; else goto $l2640;
                                        $l2664:;
                                        if ((uint64_t) $tmp2662 > 1) goto $l2661; else goto $l2640;
                                        $l2661:;
                                        i2633.value += 1;
                                        goto $l2638;
                                        $l2640:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2667, false);
                                        if ($tmp2667.value) goto $l2668; else goto $l2669;
                                        $l2669:;
                                        panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2677, ((panda$core$Object*) e2381));
                                        $tmp2676 = $tmp2678;
                                        panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, &$s2679);
                                        $tmp2675 = $tmp2680;
                                        panda$core$Int64$wrapper* $tmp2682;
                                        $tmp2682 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2682->value = e2381->$rawValue;
                                        $tmp2681 = ((panda$core$Object*) $tmp2682);
                                        panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2675, $tmp2681);
                                        $tmp2674 = $tmp2683;
                                        panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, &$s2684);
                                        $tmp2673 = $tmp2685;
                                        org$pandalanguage$pandac$Position $tmp2688 = (($fn2687) e2381->$class->vtable[2])(e2381);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2689;
                                        $tmp2689 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2689->value = $tmp2688;
                                        $tmp2686 = ((panda$core$Object*) $tmp2689);
                                        panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2673, $tmp2686);
                                        $tmp2672 = $tmp2690;
                                        panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2691);
                                        $tmp2671 = $tmp2692;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2670, (panda$core$Int64) { 783 }, $tmp2671);
                                        abort();
                                        $l2668:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2390 = -1;
                                goto $l2388;
                                $l2388:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
                                switch ($tmp2390) {
                                    case -1: goto $l2693;
                                    case 0: goto $l2473;
                                }
                                $l2693:;
                            }
                            $tmp2380 = -1;
                            goto $l2378;
                            $l2378:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2381));
                            e2381 = NULL;
                            switch ($tmp2380) {
                                case -1: goto $l2694;
                                case 0: goto $l2474;
                            }
                            $l2694:;
                        }
                        goto $l2370;
                        $l2371:;
                    }
                    $tmp2362 = -1;
                    goto $l2360;
                    $l2360:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$693$172363));
                    Iter$693$172363 = NULL;
                    switch ($tmp2362) {
                        case -1: goto $l2695;
                    }
                    $l2695:;
                }
                {
                    $tmp2696 = self->source;
                    $tmp2697 = NULL;
                    self->source = $tmp2697;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2697));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2696));
                }
                $tmp2699 = ((panda$collections$ListView*) result2349);
                $returnValue2698 = $tmp2699;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2699));
                $tmp2348 = 0;
                goto $l2346;
                $l2700:;
                $tmp2339 = 0;
                goto $l2337;
                $l2701:;
                return $returnValue2698;
            }
            $l2346:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2353));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2349));
            result2349 = NULL;
            currentPackage2353 = NULL;
            aliases2356 = NULL;
            switch ($tmp2348) {
                case 0: goto $l2700;
            }
            $l2703:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2704, false);
            if ($tmp2704.value) goto $l2705; else goto $l2706;
            $l2706:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2707, (panda$core$Int64) { 789 });
            abort();
            $l2705:;
        }
        }
    }
    $tmp2339 = -1;
    goto $l2337;
    $l2337:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
    switch ($tmp2339) {
        case 0: goto $l2701;
        case -1: goto $l2708;
    }
    $l2708:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2711;
    {
    }
    $tmp2711 = -1;
    goto $l2709;
    $l2709:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2711) {
        case -1: goto $l2712;
    }
    $l2712:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

