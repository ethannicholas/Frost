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
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Stack.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn91)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn98)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn109)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn120)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn165)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn183)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn200)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn264)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn449)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn467)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn569)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn576)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn587)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn631)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn678)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn689)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn718)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn736)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn767)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn774)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn785)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn810)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn817)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn828)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn860)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn871)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn885)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn892)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn903)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn971)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn978)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn989)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1011)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1018)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1029)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1043)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1050)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1061)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1084)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1091)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1123)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1160)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1237)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1255)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1290)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1309)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1316)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1327)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1526)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1544)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1629)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1664)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1684)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1691)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1702)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1713)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1716)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1769)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1801)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1808)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1819)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1908)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1915)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1940)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1956)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1963)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1995)(panda$core$Weak*);
typedef void (*$fn1999)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Object* (*$fn2041)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn2075)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2082)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2093)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2200)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2207)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2285)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2296)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Position (*$fn2364)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
    org$pandalanguage$pandac$IRNode* node12 = NULL;
    org$pandalanguage$pandac$IRNode* $match$27_1717 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp18;
    org$pandalanguage$pandac$Type* type20 = NULL;
    org$pandalanguage$pandac$Type* $returnValue22;
    org$pandalanguage$pandac$Type* $tmp23;
    org$pandalanguage$pandac$Position position32;
    panda$core$String* name34 = NULL;
    org$pandalanguage$pandac$Type* $tmp36;
    org$pandalanguage$pandac$Type* $tmp37;
    org$pandalanguage$pandac$Type$Kind $tmp39;
    org$pandalanguage$pandac$Position position43;
    org$pandalanguage$pandac$ASTNode* base45 = NULL;
    panda$collections$Array* subtypes50 = NULL;
    panda$collections$Array* $tmp51;
    panda$collections$Array* $tmp52;
    org$pandalanguage$pandac$Type* $tmp54;
    org$pandalanguage$pandac$Type* $tmp56;
    org$pandalanguage$pandac$Type* $tmp57;
    panda$core$String* $tmp59;
    panda$core$Object* $tmp60;
    org$pandalanguage$pandac$Type$Kind $tmp64;
    org$pandalanguage$pandac$Position position70;
    panda$core$String* base72 = NULL;
    panda$collections$ImmutableArray* args74 = NULL;
    panda$collections$Array* finalArgs79 = NULL;
    panda$collections$Array* $tmp80;
    panda$collections$Array* $tmp81;
    panda$collections$Iterator* Iter$41$1786 = NULL;
    panda$collections$Iterator* $tmp87;
    panda$collections$Iterator* $tmp88;
    org$pandalanguage$pandac$ASTNode* arg104 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp105;
    panda$core$Object* $tmp106;
    org$pandalanguage$pandac$Type* $tmp111;
    org$pandalanguage$pandac$Type* $tmp115;
    org$pandalanguage$pandac$Type* $tmp116;
    org$pandalanguage$pandac$Type* $tmp117;
    org$pandalanguage$pandac$Type$Kind $tmp119;
    org$pandalanguage$pandac$Position position128;
    org$pandalanguage$pandac$parser$Token$Kind kind130;
    panda$collections$ImmutableArray* rawParameters132 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType134 = NULL;
    org$pandalanguage$pandac$Type$Kind typeKind139;
    org$pandalanguage$pandac$parser$Token$Kind $match$47_17140;
    org$pandalanguage$pandac$Type$Kind $tmp142;
    org$pandalanguage$pandac$Type$Kind $tmp144;
    org$pandalanguage$pandac$Type$Kind $tmp146;
    org$pandalanguage$pandac$Type$Kind $tmp148;
    panda$collections$Array* parameters153 = NULL;
    panda$collections$Array* $tmp154;
    panda$collections$Array* $tmp155;
    panda$collections$Iterator* Iter$60$17160 = NULL;
    panda$collections$Iterator* $tmp161;
    panda$collections$Iterator* $tmp162;
    org$pandalanguage$pandac$ASTNode* p178 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp179;
    panda$core$Object* $tmp180;
    org$pandalanguage$pandac$Type* $tmp185;
    org$pandalanguage$pandac$Type* returnType189 = NULL;
    org$pandalanguage$pandac$Type* $tmp190;
    org$pandalanguage$pandac$Type* $tmp191;
    org$pandalanguage$pandac$Type* $tmp192;
    org$pandalanguage$pandac$Type* $tmp194;
    org$pandalanguage$pandac$Type* $tmp195;
    org$pandalanguage$pandac$Type* $tmp196;
    org$pandalanguage$pandac$Type* $tmp198;
    org$pandalanguage$pandac$Type* $tmp199;
    panda$collections$ImmutableArray* $tmp202;
    panda$core$String* $tmp212;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    panda$core$Object* $tmp220;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$25_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$25_99->$data + 0));
            node12 = *$tmp13;
            int $tmp16;
            {
                $tmp18 = node12;
                $match$27_1717 = $tmp18;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27_1717->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp19.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp21 = ((org$pandalanguage$pandac$Type**) ((char*) $match$27_1717->$data + 16));
                    type20 = *$tmp21;
                    $tmp23 = type20;
                    $returnValue22 = $tmp23;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
                    $tmp16 = 0;
                    goto $l14;
                    $l24:;
                    $tmp8 = 0;
                    goto $l6;
                    $l25:;
                    return $returnValue22;
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l27; else goto $l28;
                    $l28:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s29, (panda$core$Int64) { 31 });
                    abort();
                    $l27:;
                }
                }
            }
            $tmp16 = -1;
            goto $l14;
            $l14:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            switch ($tmp16) {
                case -1: goto $l30;
                case 0: goto $l24;
            }
            $l30:;
        }
        }
        else {
        panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp31.value) {
        {
            org$pandalanguage$pandac$Position* $tmp33 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position32 = *$tmp33;
            panda$core$String** $tmp35 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            name34 = *$tmp35;
            org$pandalanguage$pandac$Type* $tmp38 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp39, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp38, name34, $tmp39, position32);
            $tmp37 = $tmp38;
            $tmp36 = $tmp37;
            $returnValue22 = $tmp36;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
            $tmp8 = 1;
            goto $l6;
            $l40:;
            return $returnValue22;
        }
        }
        else {
        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp42.value) {
        {
            org$pandalanguage$pandac$Position* $tmp44 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position43 = *$tmp44;
            org$pandalanguage$pandac$ASTNode** $tmp46 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 16));
            base45 = *$tmp46;
            int $tmp49;
            {
                panda$collections$Array* $tmp53 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp53);
                $tmp52 = $tmp53;
                $tmp51 = $tmp52;
                subtypes50 = $tmp51;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
                org$pandalanguage$pandac$Type* $tmp55 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base45);
                $tmp54 = $tmp55;
                panda$collections$Array$add$panda$collections$Array$T(subtypes50, ((panda$core$Object*) $tmp54));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                org$pandalanguage$pandac$Type* $tmp58 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp61 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes50, ((panda$core$Int64) { 0 }));
                $tmp60 = $tmp61;
                panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp60))->name, &$s62);
                $tmp59 = $tmp63;
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp64, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp58, $tmp59, $tmp64, position43, ((panda$collections$ListView*) subtypes50), ((panda$core$Bit) { false }));
                $tmp57 = $tmp58;
                $tmp56 = $tmp57;
                $returnValue22 = $tmp56;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
                panda$core$Panda$unref$panda$core$Object($tmp60);
                $tmp49 = 0;
                goto $l47;
                $l65:;
                $tmp8 = 2;
                goto $l6;
                $l66:;
                return $returnValue22;
            }
            $l47:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes50));
            subtypes50 = NULL;
            switch ($tmp49) {
                case 0: goto $l65;
            }
            $l68:;
        }
        }
        else {
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp69.value) {
        {
            org$pandalanguage$pandac$Position* $tmp71 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position70 = *$tmp71;
            panda$core$String** $tmp73 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            base72 = *$tmp73;
            panda$collections$ImmutableArray** $tmp75 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            args74 = *$tmp75;
            int $tmp78;
            {
                panda$collections$Array* $tmp82 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp82);
                $tmp81 = $tmp82;
                $tmp80 = $tmp81;
                finalArgs79 = $tmp80;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
                {
                    int $tmp85;
                    {
                        ITable* $tmp89 = ((panda$collections$Iterable*) args74)->$class->itable;
                        while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp89 = $tmp89->next;
                        }
                        $fn91 $tmp90 = $tmp89->methods[0];
                        panda$collections$Iterator* $tmp92 = $tmp90(((panda$collections$Iterable*) args74));
                        $tmp88 = $tmp92;
                        $tmp87 = $tmp88;
                        Iter$41$1786 = $tmp87;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
                        $l93:;
                        ITable* $tmp96 = Iter$41$1786->$class->itable;
                        while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp96 = $tmp96->next;
                        }
                        $fn98 $tmp97 = $tmp96->methods[0];
                        panda$core$Bit $tmp99 = $tmp97(Iter$41$1786);
                        panda$core$Bit $tmp100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp99);
                        bool $tmp95 = $tmp100.value;
                        if (!$tmp95) goto $l94;
                        {
                            int $tmp103;
                            {
                                ITable* $tmp107 = Iter$41$1786->$class->itable;
                                while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp107 = $tmp107->next;
                                }
                                $fn109 $tmp108 = $tmp107->methods[1];
                                panda$core$Object* $tmp110 = $tmp108(Iter$41$1786);
                                $tmp106 = $tmp110;
                                $tmp105 = ((org$pandalanguage$pandac$ASTNode*) $tmp106);
                                arg104 = $tmp105;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
                                panda$core$Panda$unref$panda$core$Object($tmp106);
                                org$pandalanguage$pandac$Type* $tmp112 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg104);
                                $tmp111 = $tmp112;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs79, ((panda$core$Object*) $tmp111));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
                            }
                            $tmp103 = -1;
                            goto $l101;
                            $l101:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg104));
                            arg104 = NULL;
                            switch ($tmp103) {
                                case -1: goto $l113;
                            }
                            $l113:;
                        }
                        goto $l93;
                        $l94:;
                    }
                    $tmp85 = -1;
                    goto $l83;
                    $l83:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$41$1786));
                    Iter$41$1786 = NULL;
                    switch ($tmp85) {
                        case -1: goto $l114;
                    }
                    $l114:;
                }
                org$pandalanguage$pandac$Type* $tmp118 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp119, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Position $tmp121 = (($fn120) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp118, base72, $tmp119, $tmp121);
                $tmp117 = $tmp118;
                org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp117, ((panda$collections$ListView*) finalArgs79));
                $tmp116 = $tmp122;
                $tmp115 = $tmp116;
                $returnValue22 = $tmp115;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
                $tmp78 = 0;
                goto $l76;
                $l123:;
                $tmp8 = 3;
                goto $l6;
                $l124:;
                return $returnValue22;
            }
            $l76:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs79));
            finalArgs79 = NULL;
            switch ($tmp78) {
                case 0: goto $l123;
            }
            $l126:;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Position* $tmp129 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position128 = *$tmp129;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp131 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$25_99->$data + 16));
            kind130 = *$tmp131;
            panda$collections$ImmutableArray** $tmp133 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            rawParameters132 = *$tmp133;
            org$pandalanguage$pandac$ASTNode** $tmp135 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 32));
            rawReturnType134 = *$tmp135;
            int $tmp138;
            {
                memset(&typeKind139, 0, sizeof(typeKind139));
                {
                    $match$47_17140 = kind130;
                    panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17140.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp141.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp142, ((panda$core$Int64) { 14 }));
                        typeKind139 = $tmp142;
                    }
                    }
                    else {
                    panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17140.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp143.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp144, ((panda$core$Int64) { 15 }));
                        typeKind139 = $tmp144;
                    }
                    }
                    else {
                    panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17140.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp145.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp146, ((panda$core$Int64) { 16 }));
                        typeKind139 = $tmp146;
                    }
                    }
                    else {
                    panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17140.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp147.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp148, ((panda$core$Int64) { 17 }));
                        typeKind139 = $tmp148;
                    }
                    }
                    else {
                    {
                        if (((panda$core$Bit) { false }).value) goto $l149; else goto $l150;
                        $l150:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s151, (panda$core$Int64) { 57 }, &$s152);
                        abort();
                        $l149:;
                    }
                    }
                    }
                    }
                    }
                }
                panda$collections$Array* $tmp156 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp156);
                $tmp155 = $tmp156;
                $tmp154 = $tmp155;
                parameters153 = $tmp154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                {
                    int $tmp159;
                    {
                        ITable* $tmp163 = ((panda$collections$Iterable*) rawParameters132)->$class->itable;
                        while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp163 = $tmp163->next;
                        }
                        $fn165 $tmp164 = $tmp163->methods[0];
                        panda$collections$Iterator* $tmp166 = $tmp164(((panda$collections$Iterable*) rawParameters132));
                        $tmp162 = $tmp166;
                        $tmp161 = $tmp162;
                        Iter$60$17160 = $tmp161;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                        $l167:;
                        ITable* $tmp170 = Iter$60$17160->$class->itable;
                        while ($tmp170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp170 = $tmp170->next;
                        }
                        $fn172 $tmp171 = $tmp170->methods[0];
                        panda$core$Bit $tmp173 = $tmp171(Iter$60$17160);
                        panda$core$Bit $tmp174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp173);
                        bool $tmp169 = $tmp174.value;
                        if (!$tmp169) goto $l168;
                        {
                            int $tmp177;
                            {
                                ITable* $tmp181 = Iter$60$17160->$class->itable;
                                while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp181 = $tmp181->next;
                                }
                                $fn183 $tmp182 = $tmp181->methods[1];
                                panda$core$Object* $tmp184 = $tmp182(Iter$60$17160);
                                $tmp180 = $tmp184;
                                $tmp179 = ((org$pandalanguage$pandac$ASTNode*) $tmp180);
                                p178 = $tmp179;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                                panda$core$Panda$unref$panda$core$Object($tmp180);
                                org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p178);
                                $tmp185 = $tmp186;
                                panda$collections$Array$add$panda$collections$Array$T(parameters153, ((panda$core$Object*) $tmp185));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                            }
                            $tmp177 = -1;
                            goto $l175;
                            $l175:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p178));
                            p178 = NULL;
                            switch ($tmp177) {
                                case -1: goto $l187;
                            }
                            $l187:;
                        }
                        goto $l167;
                        $l168:;
                    }
                    $tmp159 = -1;
                    goto $l157;
                    $l157:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$60$17160));
                    Iter$60$17160 = NULL;
                    switch ($tmp159) {
                        case -1: goto $l188;
                    }
                    $l188:;
                }
                memset(&returnType189, 0, sizeof(returnType189));
                if (((panda$core$Bit) { rawReturnType134 != NULL }).value) {
                {
                    {
                        $tmp190 = returnType189;
                        org$pandalanguage$pandac$Type* $tmp193 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType134);
                        $tmp192 = $tmp193;
                        $tmp191 = $tmp192;
                        returnType189 = $tmp191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
                    }
                }
                }
                else {
                {
                    {
                        $tmp194 = returnType189;
                        org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                        $tmp196 = $tmp197;
                        $tmp195 = $tmp196;
                        returnType189 = $tmp195;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
                    }
                }
                }
                org$pandalanguage$pandac$Position $tmp201 = (($fn200) p_type->$class->vtable[2])(p_type);
                panda$collections$ImmutableArray* $tmp203 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters153);
                $tmp202 = $tmp203;
                org$pandalanguage$pandac$Type* $tmp204 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp201, typeKind139, ((panda$collections$ListView*) $tmp202), returnType189);
                $tmp199 = $tmp204;
                $tmp198 = $tmp199;
                $returnValue22 = $tmp198;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                $tmp138 = 0;
                goto $l136;
                $l205:;
                $tmp8 = 4;
                goto $l6;
                $l206:;
                return $returnValue22;
            }
            $l136:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters153));
            parameters153 = NULL;
            switch ($tmp138) {
                case 0: goto $l205;
            }
            $l208:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l209; else goto $l210;
            $l210:;
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s216, ((panda$core$Object*) p_type));
            $tmp215 = $tmp217;
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp215, &$s218);
            $tmp214 = $tmp219;
            panda$core$Int64$wrapper* $tmp221;
            $tmp221 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp221->value = p_type->$rawValue;
            $tmp220 = ((panda$core$Object*) $tmp221);
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp214, $tmp220);
            $tmp213 = $tmp222;
            panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s223);
            $tmp212 = $tmp224;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s211, (panda$core$Int64) { 72 }, $tmp212);
            abort();
            $l209:;
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
        case 4: goto $l206;
        case 2: goto $l66;
        case 0: goto $l25;
        case 1: goto $l40;
        case -1: goto $l225;
        case 3: goto $l124;
    }
    $l225:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_flags, panda$core$Int64 p_flag) {
    panda$core$Int64 $returnValue229;
    panda$core$Int64 $tmp226 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    panda$core$Bit $tmp227 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp226, ((panda$core$Int64) { 0 }));
    if ($tmp227.value) {
    {
        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s228);
    }
    }
    panda$core$Int64 $tmp230 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    $returnValue229 = $tmp230;
    return $returnValue229;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags235;
    panda$collections$Array* expressions236 = NULL;
    panda$collections$Array* $tmp237;
    panda$collections$Iterator* Iter$86$9241 = NULL;
    panda$collections$Iterator* $tmp242;
    panda$collections$Iterator* $tmp243;
    org$pandalanguage$pandac$ASTNode* c259 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp260;
    panda$core$Object* $tmp261;
    org$pandalanguage$pandac$ASTNode* $match$87_13269 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp270;
    org$pandalanguage$pandac$Position p272;
    panda$core$String* text274 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr276 = NULL;
    org$pandalanguage$pandac$ASTNode* expr281 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp282;
    panda$core$String* $match$90_21286 = NULL;
    panda$core$String* $tmp287;
    panda$collections$Array* $tmp329;
    panda$collections$Array* $tmp330;
    panda$collections$Array* $tmp331;
    org$pandalanguage$pandac$Annotations$Expression* $tmp333;
    org$pandalanguage$pandac$ASTNode* $tmp335;
    org$pandalanguage$pandac$ASTNode* $tmp336;
    panda$collections$Array* $tmp339;
    panda$collections$Array* $tmp340;
    panda$collections$Array* $tmp341;
    org$pandalanguage$pandac$Annotations$Expression* $tmp343;
    org$pandalanguage$pandac$ASTNode* $tmp345;
    org$pandalanguage$pandac$ASTNode* $tmp346;
    panda$collections$Array* $tmp349;
    panda$collections$Array* $tmp350;
    panda$collections$Array* $tmp351;
    org$pandalanguage$pandac$Annotations$Expression* $tmp353;
    org$pandalanguage$pandac$ASTNode* $tmp355;
    org$pandalanguage$pandac$ASTNode* $tmp356;
    panda$collections$Array* $tmp359;
    panda$collections$Array* $tmp360;
    panda$collections$Array* $tmp361;
    org$pandalanguage$pandac$Annotations$Expression* $tmp363;
    org$pandalanguage$pandac$ASTNode* $tmp365;
    org$pandalanguage$pandac$ASTNode* $tmp366;
    panda$core$String* $tmp367;
    panda$core$String* $tmp368;
    panda$core$String* $tmp374;
    panda$core$String* $tmp375;
    org$pandalanguage$pandac$Annotations* $returnValue387;
    org$pandalanguage$pandac$Annotations* $tmp388;
    org$pandalanguage$pandac$Annotations* $tmp389;
    int $tmp234;
    {
        flags235 = ((panda$core$Int64) { 0 });
        $tmp237 = NULL;
        expressions236 = $tmp237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
        {
            int $tmp240;
            {
                ITable* $tmp244 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp244 = $tmp244->next;
                }
                $fn246 $tmp245 = $tmp244->methods[0];
                panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) p_a));
                $tmp243 = $tmp247;
                $tmp242 = $tmp243;
                Iter$86$9241 = $tmp242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                $l248:;
                ITable* $tmp251 = Iter$86$9241->$class->itable;
                while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp251 = $tmp251->next;
                }
                $fn253 $tmp252 = $tmp251->methods[0];
                panda$core$Bit $tmp254 = $tmp252(Iter$86$9241);
                panda$core$Bit $tmp255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp254);
                bool $tmp250 = $tmp255.value;
                if (!$tmp250) goto $l249;
                {
                    int $tmp258;
                    {
                        ITable* $tmp262 = Iter$86$9241->$class->itable;
                        while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp262 = $tmp262->next;
                        }
                        $fn264 $tmp263 = $tmp262->methods[1];
                        panda$core$Object* $tmp265 = $tmp263(Iter$86$9241);
                        $tmp261 = $tmp265;
                        $tmp260 = ((org$pandalanguage$pandac$ASTNode*) $tmp261);
                        c259 = $tmp260;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
                        panda$core$Panda$unref$panda$core$Object($tmp261);
                        int $tmp268;
                        {
                            $tmp270 = c259;
                            $match$87_13269 = $tmp270;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
                            panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$87_13269->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp271.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$87_13269->$data + 0));
                                p272 = *$tmp273;
                                panda$core$String** $tmp275 = ((panda$core$String**) ((char*) $match$87_13269->$data + 16));
                                text274 = *$tmp275;
                                org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$87_13269->$data + 24));
                                rawExpr276 = *$tmp277;
                                int $tmp280;
                                {
                                    $tmp282 = rawExpr276;
                                    expr281 = $tmp282;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
                                    int $tmp285;
                                    {
                                        $tmp287 = text274;
                                        $match$90_21286 = $tmp287;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                                        panda$core$Bit $tmp289 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s288);
                                        if ($tmp289.value) {
                                        {
                                            panda$core$Int64 $tmp290 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 2 }));
                                            flags235 = $tmp290;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp292 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s291);
                                        if ($tmp292.value) {
                                        {
                                            panda$core$Int64 $tmp293 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 4 }));
                                            flags235 = $tmp293;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp295 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s294);
                                        if ($tmp295.value) {
                                        {
                                            panda$core$Int64 $tmp296 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 8 }));
                                            flags235 = $tmp296;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp298 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s297);
                                        if ($tmp298.value) {
                                        {
                                            panda$core$Int64 $tmp299 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 16 }));
                                            flags235 = $tmp299;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp301 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s300);
                                        if ($tmp301.value) {
                                        {
                                            panda$core$Int64 $tmp302 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 32 }));
                                            flags235 = $tmp302;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s303);
                                        if ($tmp304.value) {
                                        {
                                            panda$core$Int64 $tmp305 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 64 }));
                                            flags235 = $tmp305;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s306);
                                        if ($tmp307.value) {
                                        {
                                            panda$core$Int64 $tmp308 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 128 }));
                                            flags235 = $tmp308;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp310 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s309);
                                        if ($tmp310.value) {
                                        {
                                            panda$core$Int64 $tmp311 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 256 }));
                                            flags235 = $tmp311;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp313 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s312);
                                        if ($tmp313.value) {
                                        {
                                            panda$core$Int64 $tmp314 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 512 }));
                                            flags235 = $tmp314;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp316 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s315);
                                        if ($tmp316.value) {
                                        {
                                            panda$core$Int64 $tmp317 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 1024 }));
                                            flags235 = $tmp317;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s318);
                                        if ($tmp319.value) {
                                        {
                                            panda$core$Int64 $tmp320 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 2048 }));
                                            flags235 = $tmp320;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s321);
                                        if ($tmp322.value) {
                                        {
                                            panda$core$Int64 $tmp323 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 4096 }));
                                            flags235 = $tmp323;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s324);
                                        if ($tmp325.value) {
                                        {
                                            panda$core$Int64 $tmp326 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p272, flags235, ((panda$core$Int64) { 16384 }));
                                            flags235 = $tmp326;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp328 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s327);
                                        if ($tmp328.value) {
                                        {
                                            if (((panda$core$Bit) { expressions236 == NULL }).value) {
                                            {
                                                {
                                                    $tmp329 = expressions236;
                                                    panda$collections$Array* $tmp332 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp332);
                                                    $tmp331 = $tmp332;
                                                    $tmp330 = $tmp331;
                                                    expressions236 = $tmp330;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp334 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp334, ((panda$core$Int64) { 0 }), expr281);
                                            $tmp333 = $tmp334;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions236, ((panda$core$Object*) $tmp333));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                                            {
                                                $tmp335 = expr281;
                                                $tmp336 = NULL;
                                                expr281 = $tmp336;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s337);
                                        if ($tmp338.value) {
                                        {
                                            if (((panda$core$Bit) { expressions236 == NULL }).value) {
                                            {
                                                {
                                                    $tmp339 = expressions236;
                                                    panda$collections$Array* $tmp342 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp342);
                                                    $tmp341 = $tmp342;
                                                    $tmp340 = $tmp341;
                                                    expressions236 = $tmp340;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp344 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp344, ((panda$core$Int64) { 1 }), expr281);
                                            $tmp343 = $tmp344;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions236, ((panda$core$Object*) $tmp343));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                                            {
                                                $tmp345 = expr281;
                                                $tmp346 = NULL;
                                                expr281 = $tmp346;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp348 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s347);
                                        if ($tmp348.value) {
                                        {
                                            if (((panda$core$Bit) { expressions236 == NULL }).value) {
                                            {
                                                {
                                                    $tmp349 = expressions236;
                                                    panda$collections$Array* $tmp352 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp352);
                                                    $tmp351 = $tmp352;
                                                    $tmp350 = $tmp351;
                                                    expressions236 = $tmp350;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp354 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp354, ((panda$core$Int64) { 2 }), expr281);
                                            $tmp353 = $tmp354;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions236, ((panda$core$Object*) $tmp353));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                                            {
                                                $tmp355 = expr281;
                                                $tmp356 = NULL;
                                                expr281 = $tmp356;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21286, &$s357);
                                        if ($tmp358.value) {
                                        {
                                            if (((panda$core$Bit) { expressions236 == NULL }).value) {
                                            {
                                                {
                                                    $tmp359 = expressions236;
                                                    panda$collections$Array* $tmp362 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp362);
                                                    $tmp361 = $tmp362;
                                                    $tmp360 = $tmp361;
                                                    expressions236 = $tmp360;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp364 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp364, ((panda$core$Int64) { 3 }), expr281);
                                            $tmp363 = $tmp364;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions236, ((panda$core$Object*) $tmp363));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
                                            {
                                                $tmp365 = expr281;
                                                $tmp366 = NULL;
                                                expr281 = $tmp366;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s369, text274);
                                            $tmp368 = $tmp370;
                                            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s371);
                                            $tmp367 = $tmp372;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p272, $tmp367);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp368));
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
                                    $tmp285 = -1;
                                    goto $l283;
                                    $l283:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
                                    switch ($tmp285) {
                                        case -1: goto $l373;
                                    }
                                    $l373:;
                                    if (((panda$core$Bit) { expr281 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s376, text274);
                                        $tmp375 = $tmp377;
                                        panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s378);
                                        $tmp374 = $tmp379;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p272, $tmp374);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
                                    }
                                    }
                                }
                                $tmp280 = -1;
                                goto $l278;
                                $l278:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr281));
                                expr281 = NULL;
                                switch ($tmp280) {
                                    case -1: goto $l380;
                                }
                                $l380:;
                            }
                            }
                            else {
                            {
                                if (((panda$core$Bit) { false }).value) goto $l381; else goto $l382;
                                $l382:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s383, (panda$core$Int64) { 135 });
                                abort();
                                $l381:;
                            }
                            }
                        }
                        $tmp268 = -1;
                        goto $l266;
                        $l266:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                        switch ($tmp268) {
                            case -1: goto $l384;
                        }
                        $l384:;
                    }
                    $tmp258 = -1;
                    goto $l256;
                    $l256:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c259));
                    c259 = NULL;
                    switch ($tmp258) {
                        case -1: goto $l385;
                    }
                    $l385:;
                }
                goto $l248;
                $l249:;
            }
            $tmp240 = -1;
            goto $l238;
            $l238:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$86$9241));
            Iter$86$9241 = NULL;
            switch ($tmp240) {
                case -1: goto $l386;
            }
            $l386:;
        }
        org$pandalanguage$pandac$Annotations* $tmp390 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp390, flags235, ((panda$collections$ListView*) expressions236));
        $tmp389 = $tmp390;
        $tmp388 = $tmp389;
        $returnValue387 = $tmp388;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
        $tmp234 = 0;
        goto $l232;
        $l391:;
        return $returnValue387;
    }
    $l232:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions236));
    switch ($tmp234) {
        case 0: goto $l391;
    }
    $l393:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment397 = NULL;
    panda$core$String* $tmp398;
    panda$core$String* $tmp399;
    org$pandalanguage$pandac$ASTNode* $match$149_13403 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp404;
    org$pandalanguage$pandac$Position position406;
    panda$core$String* text408 = NULL;
    panda$core$String* $tmp410;
    panda$core$String* $tmp411;
    org$pandalanguage$pandac$Annotations* annotations416 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp417;
    org$pandalanguage$pandac$Annotations* $tmp418;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind420;
    org$pandalanguage$pandac$ASTNode* $match$158_9424 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp425;
    org$pandalanguage$pandac$Variable$Kind kind427;
    panda$collections$ImmutableArray* decls429 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$160_17431;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp433;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp435;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp437;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp440;
    panda$collections$Iterator* Iter$171$17444 = NULL;
    panda$collections$Iterator* $tmp445;
    panda$collections$Iterator* $tmp446;
    org$pandalanguage$pandac$ASTNode* decl462 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp463;
    panda$core$Object* $tmp464;
    org$pandalanguage$pandac$ASTNode* $match$172_21472 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp473;
    org$pandalanguage$pandac$Position declPosition475;
    org$pandalanguage$pandac$ASTNode* target477 = NULL;
    org$pandalanguage$pandac$ASTNode* value479 = NULL;
    panda$core$String* name484 = NULL;
    org$pandalanguage$pandac$Type* type485 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$176_29489 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp490;
    panda$core$String* id492 = NULL;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    org$pandalanguage$pandac$Type* $tmp496;
    org$pandalanguage$pandac$Type* $tmp497;
    org$pandalanguage$pandac$Type* $tmp498;
    panda$core$String* id501 = NULL;
    org$pandalanguage$pandac$ASTNode* idType503 = NULL;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    org$pandalanguage$pandac$Type* $tmp507;
    org$pandalanguage$pandac$Type* $tmp508;
    org$pandalanguage$pandac$Type* $tmp509;
    org$pandalanguage$pandac$FieldDecl* field515 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp516;
    org$pandalanguage$pandac$FieldDecl* $tmp517;
    int $tmp396;
    {
        memset(&doccomment397, 0, sizeof(doccomment397));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp398 = doccomment397;
                $tmp399 = NULL;
                doccomment397 = $tmp399;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
            }
        }
        }
        else {
        {
            int $tmp402;
            {
                $tmp404 = p_rawDoccomment;
                $match$149_13403 = $tmp404;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
                panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149_13403->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp405.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$149_13403->$data + 0));
                    position406 = *$tmp407;
                    panda$core$String** $tmp409 = ((panda$core$String**) ((char*) $match$149_13403->$data + 16));
                    text408 = *$tmp409;
                    {
                        $tmp410 = doccomment397;
                        $tmp411 = text408;
                        doccomment397 = $tmp411;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
                    }
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l412; else goto $l413;
                    $l413:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s414, (panda$core$Int64) { 153 });
                    abort();
                    $l412:;
                }
                }
            }
            $tmp402 = -1;
            goto $l400;
            $l400:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
            switch ($tmp402) {
                case -1: goto $l415;
            }
            $l415:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp419 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp418 = $tmp419;
        $tmp417 = $tmp418;
        annotations416 = $tmp417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
        memset(&fieldKind420, 0, sizeof(fieldKind420));
        int $tmp423;
        {
            $tmp425 = p_varDecl;
            $match$158_9424 = $tmp425;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
            panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_9424->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp426.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp428 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$158_9424->$data + 16));
                kind427 = *$tmp428;
                panda$collections$ImmutableArray** $tmp430 = ((panda$collections$ImmutableArray**) ((char*) $match$158_9424->$data + 24));
                decls429 = *$tmp430;
                {
                    $match$160_17431 = kind427;
                    panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17431.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp432.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp433, ((panda$core$Int64) { 0 }));
                        fieldKind420 = $tmp433;
                    }
                    }
                    else {
                    panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17431.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp434.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp435, ((panda$core$Int64) { 1 }));
                        fieldKind420 = $tmp435;
                    }
                    }
                    else {
                    panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17431.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp436.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp437, ((panda$core$Int64) { 2 }));
                        fieldKind420 = $tmp437;
                        panda$core$Int64 $tmp438 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations416->flags, ((panda$core$Int64) { 16 }));
                        annotations416->flags = $tmp438;
                    }
                    }
                    else {
                    panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17431.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp439.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp440, ((panda$core$Int64) { 3 }));
                        fieldKind420 = $tmp440;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp443;
                    {
                        ITable* $tmp447 = ((panda$collections$Iterable*) decls429)->$class->itable;
                        while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp447 = $tmp447->next;
                        }
                        $fn449 $tmp448 = $tmp447->methods[0];
                        panda$collections$Iterator* $tmp450 = $tmp448(((panda$collections$Iterable*) decls429));
                        $tmp446 = $tmp450;
                        $tmp445 = $tmp446;
                        Iter$171$17444 = $tmp445;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                        $l451:;
                        ITable* $tmp454 = Iter$171$17444->$class->itable;
                        while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp454 = $tmp454->next;
                        }
                        $fn456 $tmp455 = $tmp454->methods[0];
                        panda$core$Bit $tmp457 = $tmp455(Iter$171$17444);
                        panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp457);
                        bool $tmp453 = $tmp458.value;
                        if (!$tmp453) goto $l452;
                        {
                            int $tmp461;
                            {
                                ITable* $tmp465 = Iter$171$17444->$class->itable;
                                while ($tmp465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp465 = $tmp465->next;
                                }
                                $fn467 $tmp466 = $tmp465->methods[1];
                                panda$core$Object* $tmp468 = $tmp466(Iter$171$17444);
                                $tmp464 = $tmp468;
                                $tmp463 = ((org$pandalanguage$pandac$ASTNode*) $tmp464);
                                decl462 = $tmp463;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
                                panda$core$Panda$unref$panda$core$Object($tmp464);
                                int $tmp471;
                                {
                                    $tmp473 = decl462;
                                    $match$172_21472 = $tmp473;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
                                    panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$172_21472->$rawValue, ((panda$core$Int64) { 13 }));
                                    if ($tmp474.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp476 = ((org$pandalanguage$pandac$Position*) ((char*) $match$172_21472->$data + 0));
                                        declPosition475 = *$tmp476;
                                        org$pandalanguage$pandac$ASTNode** $tmp478 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$172_21472->$data + 16));
                                        target477 = *$tmp478;
                                        org$pandalanguage$pandac$ASTNode** $tmp480 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$172_21472->$data + 24));
                                        value479 = *$tmp480;
                                        int $tmp483;
                                        {
                                            memset(&name484, 0, sizeof(name484));
                                            memset(&type485, 0, sizeof(type485));
                                            int $tmp488;
                                            {
                                                $tmp490 = target477;
                                                $match$176_29489 = $tmp490;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
                                                panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_29489->$rawValue, ((panda$core$Int64) { 20 }));
                                                if ($tmp491.value) {
                                                {
                                                    panda$core$String** $tmp493 = ((panda$core$String**) ((char*) $match$176_29489->$data + 16));
                                                    id492 = *$tmp493;
                                                    {
                                                        $tmp494 = name484;
                                                        $tmp495 = id492;
                                                        name484 = $tmp495;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                                                    }
                                                    {
                                                        $tmp496 = type485;
                                                        org$pandalanguage$pandac$Type* $tmp499 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp498 = $tmp499;
                                                        $tmp497 = $tmp498;
                                                        type485 = $tmp497;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_29489->$rawValue, ((panda$core$Int64) { 44 }));
                                                if ($tmp500.value) {
                                                {
                                                    panda$core$String** $tmp502 = ((panda$core$String**) ((char*) $match$176_29489->$data + 16));
                                                    id501 = *$tmp502;
                                                    org$pandalanguage$pandac$ASTNode** $tmp504 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$176_29489->$data + 24));
                                                    idType503 = *$tmp504;
                                                    {
                                                        $tmp505 = name484;
                                                        $tmp506 = id501;
                                                        name484 = $tmp506;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
                                                    }
                                                    {
                                                        $tmp507 = type485;
                                                        org$pandalanguage$pandac$Type* $tmp510 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType503);
                                                        $tmp509 = $tmp510;
                                                        $tmp508 = $tmp509;
                                                        type485 = $tmp508;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    if (((panda$core$Bit) { false }).value) goto $l511; else goto $l512;
                                                    $l512:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s513, (panda$core$Int64) { 184 });
                                                    abort();
                                                    $l511:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp488 = -1;
                                            goto $l486;
                                            $l486:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                                            switch ($tmp488) {
                                                case -1: goto $l514;
                                            }
                                            $l514:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp518 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp518, p_owner, declPosition475, doccomment397, annotations416, fieldKind420, name484, type485, value479);
                                            $tmp517 = $tmp518;
                                            $tmp516 = $tmp517;
                                            field515 = $tmp516;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field515));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field515));
                                        }
                                        $tmp483 = -1;
                                        goto $l481;
                                        $l481:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field515));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type485));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name484));
                                        field515 = NULL;
                                        switch ($tmp483) {
                                            case -1: goto $l519;
                                        }
                                        $l519:;
                                    }
                                    }
                                    else {
                                    {
                                        if (((panda$core$Bit) { false }).value) goto $l520; else goto $l521;
                                        $l521:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s522, (panda$core$Int64) { 191 });
                                        abort();
                                        $l520:;
                                    }
                                    }
                                }
                                $tmp471 = -1;
                                goto $l469;
                                $l469:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                                switch ($tmp471) {
                                    case -1: goto $l523;
                                }
                                $l523:;
                            }
                            $tmp461 = -1;
                            goto $l459;
                            $l459:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl462));
                            decl462 = NULL;
                            switch ($tmp461) {
                                case -1: goto $l524;
                            }
                            $l524:;
                        }
                        goto $l451;
                        $l452:;
                    }
                    $tmp443 = -1;
                    goto $l441;
                    $l441:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$17444));
                    Iter$171$17444 = NULL;
                    switch ($tmp443) {
                        case -1: goto $l525;
                    }
                    $l525:;
                }
            }
            }
            else {
            {
                if (((panda$core$Bit) { false }).value) goto $l526; else goto $l527;
                $l527:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s528, (panda$core$Int64) { 195 });
                abort();
                $l526:;
            }
            }
        }
        $tmp423 = -1;
        goto $l421;
        $l421:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
        switch ($tmp423) {
            case -1: goto $l529;
        }
        $l529:;
    }
    $tmp396 = -1;
    goto $l394;
    $l394:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations416));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment397));
    annotations416 = NULL;
    switch ($tmp396) {
        case -1: goto $l530;
    }
    $l530:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$201_9534 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp535;
    org$pandalanguage$pandac$ASTNode* test537 = NULL;
    panda$core$Int64 $returnValue539;
    org$pandalanguage$pandac$ASTNode* left544 = NULL;
    org$pandalanguage$pandac$ASTNode* right546 = NULL;
    panda$collections$ImmutableArray* statements558 = NULL;
    panda$core$Int64 result560;
    panda$collections$Iterator* Iter$210$17564 = NULL;
    panda$collections$Iterator* $tmp565;
    panda$collections$Iterator* $tmp566;
    org$pandalanguage$pandac$ASTNode* s582 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp583;
    panda$core$Object* $tmp584;
    org$pandalanguage$pandac$ASTNode* target599 = NULL;
    panda$collections$ImmutableArray* args601 = NULL;
    panda$core$Int64 result603;
    panda$collections$Iterator* Iter$218$17608 = NULL;
    panda$collections$Iterator* $tmp609;
    panda$collections$Iterator* $tmp610;
    org$pandalanguage$pandac$ASTNode* a626 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp627;
    panda$core$Object* $tmp628;
    org$pandalanguage$pandac$ASTNode* base640 = NULL;
    org$pandalanguage$pandac$ASTNode* value649 = NULL;
    panda$collections$ImmutableArray* statements657 = NULL;
    org$pandalanguage$pandac$ASTNode* test659 = NULL;
    panda$core$Int64 result661;
    panda$collections$Iterator* Iter$233$17666 = NULL;
    panda$collections$Iterator* $tmp667;
    panda$collections$Iterator* $tmp668;
    org$pandalanguage$pandac$ASTNode* s684 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp685;
    panda$core$Object* $tmp686;
    org$pandalanguage$pandac$ASTNode* base698 = NULL;
    org$pandalanguage$pandac$ASTNode* list704 = NULL;
    panda$collections$ImmutableArray* statements706 = NULL;
    panda$core$Int64 result708;
    panda$collections$Iterator* Iter$241$17713 = NULL;
    panda$collections$Iterator* $tmp714;
    panda$collections$Iterator* $tmp715;
    org$pandalanguage$pandac$ASTNode* s731 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp732;
    panda$core$Object* $tmp733;
    org$pandalanguage$pandac$ASTNode* test751 = NULL;
    panda$collections$ImmutableArray* ifTrue753 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse755 = NULL;
    panda$core$Int64 result757;
    panda$collections$Iterator* Iter$251$17762 = NULL;
    panda$collections$Iterator* $tmp763;
    panda$collections$Iterator* $tmp764;
    org$pandalanguage$pandac$ASTNode* s780 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp781;
    panda$core$Object* $tmp782;
    panda$collections$ImmutableArray* statements799 = NULL;
    panda$core$Int64 result801;
    panda$collections$Iterator* Iter$262$17805 = NULL;
    panda$collections$Iterator* $tmp806;
    panda$collections$Iterator* $tmp807;
    org$pandalanguage$pandac$ASTNode* s823 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp824;
    panda$core$Object* $tmp825;
    org$pandalanguage$pandac$ASTNode* value837 = NULL;
    panda$collections$ImmutableArray* whens839 = NULL;
    panda$collections$ImmutableArray* other841 = NULL;
    panda$core$Int64 result843;
    panda$collections$Iterator* Iter$268$17848 = NULL;
    panda$collections$Iterator* $tmp849;
    panda$collections$Iterator* $tmp850;
    org$pandalanguage$pandac$ASTNode* w866 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp867;
    panda$core$Object* $tmp868;
    panda$collections$Iterator* Iter$272$21880 = NULL;
    panda$collections$Iterator* $tmp881;
    panda$collections$Iterator* $tmp882;
    org$pandalanguage$pandac$ASTNode* s898 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp899;
    panda$core$Object* $tmp900;
    org$pandalanguage$pandac$ASTNode* base921 = NULL;
    org$pandalanguage$pandac$ASTNode* value934 = NULL;
    panda$collections$ImmutableArray* decls960 = NULL;
    panda$core$Int64 result962;
    panda$collections$Iterator* Iter$308$17966 = NULL;
    panda$collections$Iterator* $tmp967;
    panda$collections$Iterator* $tmp968;
    org$pandalanguage$pandac$ASTNode* decl984 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp985;
    panda$core$Object* $tmp986;
    panda$collections$ImmutableArray* tests998 = NULL;
    panda$collections$ImmutableArray* statements1000 = NULL;
    panda$core$Int64 result1002;
    panda$collections$Iterator* Iter$314$171006 = NULL;
    panda$collections$Iterator* $tmp1007;
    panda$collections$Iterator* $tmp1008;
    org$pandalanguage$pandac$ASTNode* test1024 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1025;
    panda$core$Object* $tmp1026;
    panda$collections$Iterator* Iter$317$171038 = NULL;
    panda$collections$Iterator* $tmp1039;
    panda$collections$Iterator* $tmp1040;
    org$pandalanguage$pandac$ASTNode* s1056 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1057;
    panda$core$Object* $tmp1058;
    org$pandalanguage$pandac$ASTNode* test1070 = NULL;
    panda$collections$ImmutableArray* statements1072 = NULL;
    panda$core$Int64 result1074;
    panda$collections$Iterator* Iter$323$171079 = NULL;
    panda$collections$Iterator* $tmp1080;
    panda$collections$Iterator* $tmp1081;
    org$pandalanguage$pandac$ASTNode* s1097 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1098;
    panda$core$Object* $tmp1099;
    panda$core$String* $tmp1113;
    panda$core$String* $tmp1114;
    int $tmp533;
    {
        $tmp535 = p_node;
        $match$201_9534 = $tmp535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp536.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp538 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            test537 = *$tmp538;
            panda$core$Int64 $tmp540 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test537);
            $returnValue539 = $tmp540;
            $tmp533 = 0;
            goto $l531;
            $l541:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp543.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp545 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            left544 = *$tmp545;
            org$pandalanguage$pandac$ASTNode** $tmp547 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 32));
            right546 = *$tmp547;
            panda$core$Int64 $tmp548 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left544);
            panda$core$Int64 $tmp549 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp548);
            panda$core$Int64 $tmp550 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right546);
            panda$core$Int64 $tmp551 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp549, $tmp550);
            $returnValue539 = $tmp551;
            $tmp533 = 1;
            goto $l531;
            $l552:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp554.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 2;
            goto $l531;
            $l555:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp557.value) {
        {
            panda$collections$ImmutableArray** $tmp559 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 16));
            statements558 = *$tmp559;
            result560 = ((panda$core$Int64) { 0 });
            {
                int $tmp563;
                {
                    ITable* $tmp567 = ((panda$collections$Iterable*) statements558)->$class->itable;
                    while ($tmp567->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp567 = $tmp567->next;
                    }
                    $fn569 $tmp568 = $tmp567->methods[0];
                    panda$collections$Iterator* $tmp570 = $tmp568(((panda$collections$Iterable*) statements558));
                    $tmp566 = $tmp570;
                    $tmp565 = $tmp566;
                    Iter$210$17564 = $tmp565;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                    $l571:;
                    ITable* $tmp574 = Iter$210$17564->$class->itable;
                    while ($tmp574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp574 = $tmp574->next;
                    }
                    $fn576 $tmp575 = $tmp574->methods[0];
                    panda$core$Bit $tmp577 = $tmp575(Iter$210$17564);
                    panda$core$Bit $tmp578 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp577);
                    bool $tmp573 = $tmp578.value;
                    if (!$tmp573) goto $l572;
                    {
                        int $tmp581;
                        {
                            ITable* $tmp585 = Iter$210$17564->$class->itable;
                            while ($tmp585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp585 = $tmp585->next;
                            }
                            $fn587 $tmp586 = $tmp585->methods[1];
                            panda$core$Object* $tmp588 = $tmp586(Iter$210$17564);
                            $tmp584 = $tmp588;
                            $tmp583 = ((org$pandalanguage$pandac$ASTNode*) $tmp584);
                            s582 = $tmp583;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
                            panda$core$Panda$unref$panda$core$Object($tmp584);
                            panda$core$Int64 $tmp589 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s582);
                            panda$core$Int64 $tmp590 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result560, $tmp589);
                            result560 = $tmp590;
                        }
                        $tmp581 = -1;
                        goto $l579;
                        $l579:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s582));
                        s582 = NULL;
                        switch ($tmp581) {
                            case -1: goto $l591;
                        }
                        $l591:;
                    }
                    goto $l571;
                    $l572:;
                }
                $tmp563 = -1;
                goto $l561;
                $l561:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$210$17564));
                Iter$210$17564 = NULL;
                switch ($tmp563) {
                    case -1: goto $l592;
                }
                $l592:;
            }
            $returnValue539 = result560;
            $tmp533 = 3;
            goto $l531;
            $l593:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp595.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 4;
            goto $l531;
            $l596:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp598.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            target599 = *$tmp600;
            panda$collections$ImmutableArray** $tmp602 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            args601 = *$tmp602;
            panda$core$Int64 $tmp604 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target599);
            result603 = $tmp604;
            {
                int $tmp607;
                {
                    ITable* $tmp611 = ((panda$collections$Iterable*) args601)->$class->itable;
                    while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp611 = $tmp611->next;
                    }
                    $fn613 $tmp612 = $tmp611->methods[0];
                    panda$collections$Iterator* $tmp614 = $tmp612(((panda$collections$Iterable*) args601));
                    $tmp610 = $tmp614;
                    $tmp609 = $tmp610;
                    Iter$218$17608 = $tmp609;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp609));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                    $l615:;
                    ITable* $tmp618 = Iter$218$17608->$class->itable;
                    while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp618 = $tmp618->next;
                    }
                    $fn620 $tmp619 = $tmp618->methods[0];
                    panda$core$Bit $tmp621 = $tmp619(Iter$218$17608);
                    panda$core$Bit $tmp622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp621);
                    bool $tmp617 = $tmp622.value;
                    if (!$tmp617) goto $l616;
                    {
                        int $tmp625;
                        {
                            ITable* $tmp629 = Iter$218$17608->$class->itable;
                            while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp629 = $tmp629->next;
                            }
                            $fn631 $tmp630 = $tmp629->methods[1];
                            panda$core$Object* $tmp632 = $tmp630(Iter$218$17608);
                            $tmp628 = $tmp632;
                            $tmp627 = ((org$pandalanguage$pandac$ASTNode*) $tmp628);
                            a626 = $tmp627;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                            panda$core$Panda$unref$panda$core$Object($tmp628);
                            panda$core$Int64 $tmp633 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a626);
                            panda$core$Int64 $tmp634 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result603, $tmp633);
                            result603 = $tmp634;
                        }
                        $tmp625 = -1;
                        goto $l623;
                        $l623:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a626));
                        a626 = NULL;
                        switch ($tmp625) {
                            case -1: goto $l635;
                        }
                        $l635:;
                    }
                    goto $l615;
                    $l616:;
                }
                $tmp607 = -1;
                goto $l605;
                $l605:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$218$17608));
                Iter$218$17608 = NULL;
                switch ($tmp607) {
                    case -1: goto $l636;
                }
                $l636:;
            }
            $returnValue539 = result603;
            $tmp533 = 5;
            goto $l531;
            $l637:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp639.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp641 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            base640 = *$tmp641;
            panda$core$Int64 $tmp642 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base640);
            $returnValue539 = $tmp642;
            $tmp533 = 6;
            goto $l531;
            $l643:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp645.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 7;
            goto $l531;
            $l646:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp648.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp650 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 24));
            value649 = *$tmp650;
            if (((panda$core$Bit) { value649 == NULL }).value) {
            {
                $returnValue539 = ((panda$core$Int64) { 0 });
                $tmp533 = 8;
                goto $l531;
                $l651:;
                return $returnValue539;
            }
            }
            panda$core$Int64 $tmp653 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value649);
            $returnValue539 = $tmp653;
            $tmp533 = 9;
            goto $l531;
            $l654:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp656.value) {
        {
            panda$collections$ImmutableArray** $tmp658 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            statements657 = *$tmp658;
            org$pandalanguage$pandac$ASTNode** $tmp660 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 32));
            test659 = *$tmp660;
            panda$core$Int64 $tmp662 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test659);
            result661 = $tmp662;
            {
                int $tmp665;
                {
                    ITable* $tmp669 = ((panda$collections$Iterable*) statements657)->$class->itable;
                    while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp669 = $tmp669->next;
                    }
                    $fn671 $tmp670 = $tmp669->methods[0];
                    panda$collections$Iterator* $tmp672 = $tmp670(((panda$collections$Iterable*) statements657));
                    $tmp668 = $tmp672;
                    $tmp667 = $tmp668;
                    Iter$233$17666 = $tmp667;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                    $l673:;
                    ITable* $tmp676 = Iter$233$17666->$class->itable;
                    while ($tmp676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp676 = $tmp676->next;
                    }
                    $fn678 $tmp677 = $tmp676->methods[0];
                    panda$core$Bit $tmp679 = $tmp677(Iter$233$17666);
                    panda$core$Bit $tmp680 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp679);
                    bool $tmp675 = $tmp680.value;
                    if (!$tmp675) goto $l674;
                    {
                        int $tmp683;
                        {
                            ITable* $tmp687 = Iter$233$17666->$class->itable;
                            while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp687 = $tmp687->next;
                            }
                            $fn689 $tmp688 = $tmp687->methods[1];
                            panda$core$Object* $tmp690 = $tmp688(Iter$233$17666);
                            $tmp686 = $tmp690;
                            $tmp685 = ((org$pandalanguage$pandac$ASTNode*) $tmp686);
                            s684 = $tmp685;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
                            panda$core$Panda$unref$panda$core$Object($tmp686);
                            panda$core$Int64 $tmp691 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s684);
                            panda$core$Int64 $tmp692 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result661, $tmp691);
                            result661 = $tmp692;
                        }
                        $tmp683 = -1;
                        goto $l681;
                        $l681:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s684));
                        s684 = NULL;
                        switch ($tmp683) {
                            case -1: goto $l693;
                        }
                        $l693:;
                    }
                    goto $l673;
                    $l674:;
                }
                $tmp665 = -1;
                goto $l663;
                $l663:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$233$17666));
                Iter$233$17666 = NULL;
                switch ($tmp665) {
                    case -1: goto $l694;
                }
                $l694:;
            }
            $returnValue539 = result661;
            $tmp533 = 10;
            goto $l531;
            $l695:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp697.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp699 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            base698 = *$tmp699;
            panda$core$Int64 $tmp700 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base698);
            $returnValue539 = $tmp700;
            $tmp533 = 11;
            goto $l531;
            $l701:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp703.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp705 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 32));
            list704 = *$tmp705;
            panda$collections$ImmutableArray** $tmp707 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 40));
            statements706 = *$tmp707;
            panda$core$Int64 $tmp709 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list704);
            result708 = $tmp709;
            {
                int $tmp712;
                {
                    ITable* $tmp716 = ((panda$collections$Iterable*) statements706)->$class->itable;
                    while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp716 = $tmp716->next;
                    }
                    $fn718 $tmp717 = $tmp716->methods[0];
                    panda$collections$Iterator* $tmp719 = $tmp717(((panda$collections$Iterable*) statements706));
                    $tmp715 = $tmp719;
                    $tmp714 = $tmp715;
                    Iter$241$17713 = $tmp714;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp714));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                    $l720:;
                    ITable* $tmp723 = Iter$241$17713->$class->itable;
                    while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp723 = $tmp723->next;
                    }
                    $fn725 $tmp724 = $tmp723->methods[0];
                    panda$core$Bit $tmp726 = $tmp724(Iter$241$17713);
                    panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
                    bool $tmp722 = $tmp727.value;
                    if (!$tmp722) goto $l721;
                    {
                        int $tmp730;
                        {
                            ITable* $tmp734 = Iter$241$17713->$class->itable;
                            while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp734 = $tmp734->next;
                            }
                            $fn736 $tmp735 = $tmp734->methods[1];
                            panda$core$Object* $tmp737 = $tmp735(Iter$241$17713);
                            $tmp733 = $tmp737;
                            $tmp732 = ((org$pandalanguage$pandac$ASTNode*) $tmp733);
                            s731 = $tmp732;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp732));
                            panda$core$Panda$unref$panda$core$Object($tmp733);
                            panda$core$Int64 $tmp738 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s731);
                            panda$core$Int64 $tmp739 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result708, $tmp738);
                            result708 = $tmp739;
                        }
                        $tmp730 = -1;
                        goto $l728;
                        $l728:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s731));
                        s731 = NULL;
                        switch ($tmp730) {
                            case -1: goto $l740;
                        }
                        $l740:;
                    }
                    goto $l720;
                    $l721:;
                }
                $tmp712 = -1;
                goto $l710;
                $l710:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17713));
                Iter$241$17713 = NULL;
                switch ($tmp712) {
                    case -1: goto $l741;
                }
                $l741:;
            }
            $returnValue539 = result708;
            $tmp533 = 12;
            goto $l531;
            $l742:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp744.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 0 });
            $tmp533 = 13;
            goto $l531;
            $l745:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp747.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 14;
            goto $l531;
            $l748:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp750.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp752 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            test751 = *$tmp752;
            panda$collections$ImmutableArray** $tmp754 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            ifTrue753 = *$tmp754;
            org$pandalanguage$pandac$ASTNode** $tmp756 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 32));
            ifFalse755 = *$tmp756;
            panda$core$Int64 $tmp758 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test751);
            result757 = $tmp758;
            {
                int $tmp761;
                {
                    ITable* $tmp765 = ((panda$collections$Iterable*) ifTrue753)->$class->itable;
                    while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp765 = $tmp765->next;
                    }
                    $fn767 $tmp766 = $tmp765->methods[0];
                    panda$collections$Iterator* $tmp768 = $tmp766(((panda$collections$Iterable*) ifTrue753));
                    $tmp764 = $tmp768;
                    $tmp763 = $tmp764;
                    Iter$251$17762 = $tmp763;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                    $l769:;
                    ITable* $tmp772 = Iter$251$17762->$class->itable;
                    while ($tmp772->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp772 = $tmp772->next;
                    }
                    $fn774 $tmp773 = $tmp772->methods[0];
                    panda$core$Bit $tmp775 = $tmp773(Iter$251$17762);
                    panda$core$Bit $tmp776 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp775);
                    bool $tmp771 = $tmp776.value;
                    if (!$tmp771) goto $l770;
                    {
                        int $tmp779;
                        {
                            ITable* $tmp783 = Iter$251$17762->$class->itable;
                            while ($tmp783->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp783 = $tmp783->next;
                            }
                            $fn785 $tmp784 = $tmp783->methods[1];
                            panda$core$Object* $tmp786 = $tmp784(Iter$251$17762);
                            $tmp782 = $tmp786;
                            $tmp781 = ((org$pandalanguage$pandac$ASTNode*) $tmp782);
                            s780 = $tmp781;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp781));
                            panda$core$Panda$unref$panda$core$Object($tmp782);
                            panda$core$Int64 $tmp787 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s780);
                            panda$core$Int64 $tmp788 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result757, $tmp787);
                            result757 = $tmp788;
                        }
                        $tmp779 = -1;
                        goto $l777;
                        $l777:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s780));
                        s780 = NULL;
                        switch ($tmp779) {
                            case -1: goto $l789;
                        }
                        $l789:;
                    }
                    goto $l769;
                    $l770:;
                }
                $tmp761 = -1;
                goto $l759;
                $l759:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$17762));
                Iter$251$17762 = NULL;
                switch ($tmp761) {
                    case -1: goto $l790;
                }
                $l790:;
            }
            if (((panda$core$Bit) { ifFalse755 != NULL }).value) {
            {
                panda$core$Int64 $tmp791 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse755);
                panda$core$Int64 $tmp792 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result757, $tmp791);
                result757 = $tmp792;
            }
            }
            $returnValue539 = result757;
            $tmp533 = 15;
            goto $l531;
            $l793:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp795.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 16;
            goto $l531;
            $l796:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp798.value) {
        {
            panda$collections$ImmutableArray** $tmp800 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            statements799 = *$tmp800;
            result801 = ((panda$core$Int64) { 0 });
            {
                int $tmp804;
                {
                    ITable* $tmp808 = ((panda$collections$Iterable*) statements799)->$class->itable;
                    while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp808 = $tmp808->next;
                    }
                    $fn810 $tmp809 = $tmp808->methods[0];
                    panda$collections$Iterator* $tmp811 = $tmp809(((panda$collections$Iterable*) statements799));
                    $tmp807 = $tmp811;
                    $tmp806 = $tmp807;
                    Iter$262$17805 = $tmp806;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                    $l812:;
                    ITable* $tmp815 = Iter$262$17805->$class->itable;
                    while ($tmp815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp815 = $tmp815->next;
                    }
                    $fn817 $tmp816 = $tmp815->methods[0];
                    panda$core$Bit $tmp818 = $tmp816(Iter$262$17805);
                    panda$core$Bit $tmp819 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp818);
                    bool $tmp814 = $tmp819.value;
                    if (!$tmp814) goto $l813;
                    {
                        int $tmp822;
                        {
                            ITable* $tmp826 = Iter$262$17805->$class->itable;
                            while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp826 = $tmp826->next;
                            }
                            $fn828 $tmp827 = $tmp826->methods[1];
                            panda$core$Object* $tmp829 = $tmp827(Iter$262$17805);
                            $tmp825 = $tmp829;
                            $tmp824 = ((org$pandalanguage$pandac$ASTNode*) $tmp825);
                            s823 = $tmp824;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
                            panda$core$Panda$unref$panda$core$Object($tmp825);
                            panda$core$Int64 $tmp830 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s823);
                            panda$core$Int64 $tmp831 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result801, $tmp830);
                            result801 = $tmp831;
                        }
                        $tmp822 = -1;
                        goto $l820;
                        $l820:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s823));
                        s823 = NULL;
                        switch ($tmp822) {
                            case -1: goto $l832;
                        }
                        $l832:;
                    }
                    goto $l812;
                    $l813:;
                }
                $tmp804 = -1;
                goto $l802;
                $l802:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$17805));
                Iter$262$17805 = NULL;
                switch ($tmp804) {
                    case -1: goto $l833;
                }
                $l833:;
            }
            $returnValue539 = result801;
            $tmp533 = 17;
            goto $l531;
            $l834:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp836.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp838 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            value837 = *$tmp838;
            panda$collections$ImmutableArray** $tmp840 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            whens839 = *$tmp840;
            panda$collections$ImmutableArray** $tmp842 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 32));
            other841 = *$tmp842;
            panda$core$Int64 $tmp844 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value837);
            result843 = $tmp844;
            {
                int $tmp847;
                {
                    ITable* $tmp851 = ((panda$collections$Iterable*) whens839)->$class->itable;
                    while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp851 = $tmp851->next;
                    }
                    $fn853 $tmp852 = $tmp851->methods[0];
                    panda$collections$Iterator* $tmp854 = $tmp852(((panda$collections$Iterable*) whens839));
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
                            w866 = $tmp867;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                            panda$core$Panda$unref$panda$core$Object($tmp868);
                            panda$core$Int64 $tmp873 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w866);
                            panda$core$Int64 $tmp874 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result843, $tmp873);
                            result843 = $tmp874;
                        }
                        $tmp865 = -1;
                        goto $l863;
                        $l863:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w866));
                        w866 = NULL;
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
            if (((panda$core$Bit) { other841 != NULL }).value) {
            {
                {
                    int $tmp879;
                    {
                        ITable* $tmp883 = ((panda$collections$Iterable*) other841)->$class->itable;
                        while ($tmp883->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp883 = $tmp883->next;
                        }
                        $fn885 $tmp884 = $tmp883->methods[0];
                        panda$collections$Iterator* $tmp886 = $tmp884(((panda$collections$Iterable*) other841));
                        $tmp882 = $tmp886;
                        $tmp881 = $tmp882;
                        Iter$272$21880 = $tmp881;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
                        $l887:;
                        ITable* $tmp890 = Iter$272$21880->$class->itable;
                        while ($tmp890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp890 = $tmp890->next;
                        }
                        $fn892 $tmp891 = $tmp890->methods[0];
                        panda$core$Bit $tmp893 = $tmp891(Iter$272$21880);
                        panda$core$Bit $tmp894 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp893);
                        bool $tmp889 = $tmp894.value;
                        if (!$tmp889) goto $l888;
                        {
                            int $tmp897;
                            {
                                ITable* $tmp901 = Iter$272$21880->$class->itable;
                                while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp901 = $tmp901->next;
                                }
                                $fn903 $tmp902 = $tmp901->methods[1];
                                panda$core$Object* $tmp904 = $tmp902(Iter$272$21880);
                                $tmp900 = $tmp904;
                                $tmp899 = ((org$pandalanguage$pandac$ASTNode*) $tmp900);
                                s898 = $tmp899;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp899));
                                panda$core$Panda$unref$panda$core$Object($tmp900);
                                panda$core$Int64 $tmp905 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s898);
                                panda$core$Int64 $tmp906 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result843, $tmp905);
                                result843 = $tmp906;
                            }
                            $tmp897 = -1;
                            goto $l895;
                            $l895:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s898));
                            s898 = NULL;
                            switch ($tmp897) {
                                case -1: goto $l907;
                            }
                            $l907:;
                        }
                        goto $l887;
                        $l888:;
                    }
                    $tmp879 = -1;
                    goto $l877;
                    $l877:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$21880));
                    Iter$272$21880 = NULL;
                    switch ($tmp879) {
                        case -1: goto $l908;
                    }
                    $l908:;
                }
            }
            }
            $returnValue539 = result843;
            $tmp533 = 18;
            goto $l531;
            $l909:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp911.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 10 });
            $tmp533 = 19;
            goto $l531;
            $l912:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp914.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 20;
            goto $l531;
            $l915:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp917.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 0 });
            $tmp533 = 21;
            goto $l531;
            $l918:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp920.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp922 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 24));
            base921 = *$tmp922;
            panda$core$Int64 $tmp923 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base921);
            panda$core$Int64 $tmp924 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp923);
            $returnValue539 = $tmp924;
            $tmp533 = 22;
            goto $l531;
            $l925:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp927.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 23;
            goto $l531;
            $l928:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp930.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 24;
            goto $l531;
            $l931:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp933.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp935 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 16));
            value934 = *$tmp935;
            if (((panda$core$Bit) { value934 == NULL }).value) {
            {
                $returnValue539 = ((panda$core$Int64) { 0 });
                $tmp533 = 25;
                goto $l531;
                $l936:;
                return $returnValue539;
            }
            }
            panda$core$Int64 $tmp938 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value934);
            $returnValue539 = $tmp938;
            $tmp533 = 26;
            goto $l531;
            $l939:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp941.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 27;
            goto $l531;
            $l942:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp944.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 28;
            goto $l531;
            $l945:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp947.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 1 });
            $tmp533 = 29;
            goto $l531;
            $l948:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp950.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 0 });
            $tmp533 = 30;
            goto $l531;
            $l951:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp953.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 10 });
            $tmp533 = 31;
            goto $l531;
            $l954:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp956.value) {
        {
            $returnValue539 = ((panda$core$Int64) { 10 });
            $tmp533 = 32;
            goto $l531;
            $l957:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp959.value) {
        {
            panda$collections$ImmutableArray** $tmp961 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            decls960 = *$tmp961;
            result962 = ((panda$core$Int64) { 0 });
            {
                int $tmp965;
                {
                    ITable* $tmp969 = ((panda$collections$Iterable*) decls960)->$class->itable;
                    while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp969 = $tmp969->next;
                    }
                    $fn971 $tmp970 = $tmp969->methods[0];
                    panda$collections$Iterator* $tmp972 = $tmp970(((panda$collections$Iterable*) decls960));
                    $tmp968 = $tmp972;
                    $tmp967 = $tmp968;
                    Iter$308$17966 = $tmp967;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
                    $l973:;
                    ITable* $tmp976 = Iter$308$17966->$class->itable;
                    while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp976 = $tmp976->next;
                    }
                    $fn978 $tmp977 = $tmp976->methods[0];
                    panda$core$Bit $tmp979 = $tmp977(Iter$308$17966);
                    panda$core$Bit $tmp980 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp979);
                    bool $tmp975 = $tmp980.value;
                    if (!$tmp975) goto $l974;
                    {
                        int $tmp983;
                        {
                            ITable* $tmp987 = Iter$308$17966->$class->itable;
                            while ($tmp987->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp987 = $tmp987->next;
                            }
                            $fn989 $tmp988 = $tmp987->methods[1];
                            panda$core$Object* $tmp990 = $tmp988(Iter$308$17966);
                            $tmp986 = $tmp990;
                            $tmp985 = ((org$pandalanguage$pandac$ASTNode*) $tmp986);
                            decl984 = $tmp985;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp985));
                            panda$core$Panda$unref$panda$core$Object($tmp986);
                            panda$core$Int64 $tmp991 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl984);
                            panda$core$Int64 $tmp992 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result962, $tmp991);
                            result962 = $tmp992;
                        }
                        $tmp983 = -1;
                        goto $l981;
                        $l981:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl984));
                        decl984 = NULL;
                        switch ($tmp983) {
                            case -1: goto $l993;
                        }
                        $l993:;
                    }
                    goto $l973;
                    $l974:;
                }
                $tmp965 = -1;
                goto $l963;
                $l963:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$17966));
                Iter$308$17966 = NULL;
                switch ($tmp965) {
                    case -1: goto $l994;
                }
                $l994:;
            }
            $returnValue539 = result962;
            $tmp533 = 33;
            goto $l531;
            $l995:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp997.value) {
        {
            panda$collections$ImmutableArray** $tmp999 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 16));
            tests998 = *$tmp999;
            panda$collections$ImmutableArray** $tmp1001 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 24));
            statements1000 = *$tmp1001;
            result1002 = ((panda$core$Int64) { 0 });
            {
                int $tmp1005;
                {
                    ITable* $tmp1009 = ((panda$collections$Iterable*) tests998)->$class->itable;
                    while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1009 = $tmp1009->next;
                    }
                    $fn1011 $tmp1010 = $tmp1009->methods[0];
                    panda$collections$Iterator* $tmp1012 = $tmp1010(((panda$collections$Iterable*) tests998));
                    $tmp1008 = $tmp1012;
                    $tmp1007 = $tmp1008;
                    Iter$314$171006 = $tmp1007;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                    $l1013:;
                    ITable* $tmp1016 = Iter$314$171006->$class->itable;
                    while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1016 = $tmp1016->next;
                    }
                    $fn1018 $tmp1017 = $tmp1016->methods[0];
                    panda$core$Bit $tmp1019 = $tmp1017(Iter$314$171006);
                    panda$core$Bit $tmp1020 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1019);
                    bool $tmp1015 = $tmp1020.value;
                    if (!$tmp1015) goto $l1014;
                    {
                        int $tmp1023;
                        {
                            ITable* $tmp1027 = Iter$314$171006->$class->itable;
                            while ($tmp1027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1027 = $tmp1027->next;
                            }
                            $fn1029 $tmp1028 = $tmp1027->methods[1];
                            panda$core$Object* $tmp1030 = $tmp1028(Iter$314$171006);
                            $tmp1026 = $tmp1030;
                            $tmp1025 = ((org$pandalanguage$pandac$ASTNode*) $tmp1026);
                            test1024 = $tmp1025;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
                            panda$core$Panda$unref$panda$core$Object($tmp1026);
                            panda$core$Int64 $tmp1031 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1024);
                            panda$core$Int64 $tmp1032 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1002, $tmp1031);
                            result1002 = $tmp1032;
                        }
                        $tmp1023 = -1;
                        goto $l1021;
                        $l1021:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1024));
                        test1024 = NULL;
                        switch ($tmp1023) {
                            case -1: goto $l1033;
                        }
                        $l1033:;
                    }
                    goto $l1013;
                    $l1014:;
                }
                $tmp1005 = -1;
                goto $l1003;
                $l1003:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$171006));
                Iter$314$171006 = NULL;
                switch ($tmp1005) {
                    case -1: goto $l1034;
                }
                $l1034:;
            }
            {
                int $tmp1037;
                {
                    ITable* $tmp1041 = ((panda$collections$Iterable*) statements1000)->$class->itable;
                    while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1041 = $tmp1041->next;
                    }
                    $fn1043 $tmp1042 = $tmp1041->methods[0];
                    panda$collections$Iterator* $tmp1044 = $tmp1042(((panda$collections$Iterable*) statements1000));
                    $tmp1040 = $tmp1044;
                    $tmp1039 = $tmp1040;
                    Iter$317$171038 = $tmp1039;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                    $l1045:;
                    ITable* $tmp1048 = Iter$317$171038->$class->itable;
                    while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1048 = $tmp1048->next;
                    }
                    $fn1050 $tmp1049 = $tmp1048->methods[0];
                    panda$core$Bit $tmp1051 = $tmp1049(Iter$317$171038);
                    panda$core$Bit $tmp1052 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1051);
                    bool $tmp1047 = $tmp1052.value;
                    if (!$tmp1047) goto $l1046;
                    {
                        int $tmp1055;
                        {
                            ITable* $tmp1059 = Iter$317$171038->$class->itable;
                            while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1059 = $tmp1059->next;
                            }
                            $fn1061 $tmp1060 = $tmp1059->methods[1];
                            panda$core$Object* $tmp1062 = $tmp1060(Iter$317$171038);
                            $tmp1058 = $tmp1062;
                            $tmp1057 = ((org$pandalanguage$pandac$ASTNode*) $tmp1058);
                            s1056 = $tmp1057;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1057));
                            panda$core$Panda$unref$panda$core$Object($tmp1058);
                            panda$core$Int64 $tmp1063 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1056);
                            panda$core$Int64 $tmp1064 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1002, $tmp1063);
                            result1002 = $tmp1064;
                        }
                        $tmp1055 = -1;
                        goto $l1053;
                        $l1053:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1056));
                        s1056 = NULL;
                        switch ($tmp1055) {
                            case -1: goto $l1065;
                        }
                        $l1065:;
                    }
                    goto $l1045;
                    $l1046:;
                }
                $tmp1037 = -1;
                goto $l1035;
                $l1035:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$171038));
                Iter$317$171038 = NULL;
                switch ($tmp1037) {
                    case -1: goto $l1066;
                }
                $l1066:;
            }
            $returnValue539 = result1002;
            $tmp533 = 34;
            goto $l531;
            $l1067:;
            return $returnValue539;
        }
        }
        else {
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9534->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp1069.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1071 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9534->$data + 24));
            test1070 = *$tmp1071;
            panda$collections$ImmutableArray** $tmp1073 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9534->$data + 32));
            statements1072 = *$tmp1073;
            panda$core$Int64 $tmp1075 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1070);
            result1074 = $tmp1075;
            {
                int $tmp1078;
                {
                    ITable* $tmp1082 = ((panda$collections$Iterable*) statements1072)->$class->itable;
                    while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1082 = $tmp1082->next;
                    }
                    $fn1084 $tmp1083 = $tmp1082->methods[0];
                    panda$collections$Iterator* $tmp1085 = $tmp1083(((panda$collections$Iterable*) statements1072));
                    $tmp1081 = $tmp1085;
                    $tmp1080 = $tmp1081;
                    Iter$323$171079 = $tmp1080;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1081));
                    $l1086:;
                    ITable* $tmp1089 = Iter$323$171079->$class->itable;
                    while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1089 = $tmp1089->next;
                    }
                    $fn1091 $tmp1090 = $tmp1089->methods[0];
                    panda$core$Bit $tmp1092 = $tmp1090(Iter$323$171079);
                    panda$core$Bit $tmp1093 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1092);
                    bool $tmp1088 = $tmp1093.value;
                    if (!$tmp1088) goto $l1087;
                    {
                        int $tmp1096;
                        {
                            ITable* $tmp1100 = Iter$323$171079->$class->itable;
                            while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1100 = $tmp1100->next;
                            }
                            $fn1102 $tmp1101 = $tmp1100->methods[1];
                            panda$core$Object* $tmp1103 = $tmp1101(Iter$323$171079);
                            $tmp1099 = $tmp1103;
                            $tmp1098 = ((org$pandalanguage$pandac$ASTNode*) $tmp1099);
                            s1097 = $tmp1098;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                            panda$core$Panda$unref$panda$core$Object($tmp1099);
                            panda$core$Int64 $tmp1104 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1097);
                            panda$core$Int64 $tmp1105 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1074, $tmp1104);
                            result1074 = $tmp1105;
                        }
                        $tmp1096 = -1;
                        goto $l1094;
                        $l1094:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1097));
                        s1097 = NULL;
                        switch ($tmp1096) {
                            case -1: goto $l1106;
                        }
                        $l1106:;
                    }
                    goto $l1086;
                    $l1087:;
                }
                $tmp1078 = -1;
                goto $l1076;
                $l1076:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$171079));
                Iter$323$171079 = NULL;
                switch ($tmp1078) {
                    case -1: goto $l1107;
                }
                $l1107:;
            }
            $returnValue539 = result1074;
            $tmp533 = 35;
            goto $l531;
            $l1108:;
            return $returnValue539;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l1110; else goto $l1111;
            $l1111:;
            panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1115, ((panda$core$Object*) p_node));
            $tmp1114 = $tmp1116;
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1117);
            $tmp1113 = $tmp1118;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1112, (panda$core$Int64) { 328 }, $tmp1113);
            abort();
            $l1110:;
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
    $tmp533 = -1;
    goto $l531;
    $l531:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
    switch ($tmp533) {
        case 31: goto $l954;
        case 10: goto $l695;
        case 11: goto $l701;
        case 26: goto $l939;
        case 32: goto $l957;
        case 21: goto $l918;
        case 9: goto $l654;
        case 27: goto $l942;
        case 22: goto $l925;
        case 14: goto $l748;
        case 13: goto $l745;
        case 1: goto $l552;
        case 12: goto $l742;
        case 25: goto $l936;
        case 17: goto $l834;
        case 35: goto $l1108;
        case 28: goto $l945;
        case 5: goto $l637;
        case 29: goto $l948;
        case 6: goto $l643;
        case 20: goto $l915;
        case 0: goto $l541;
        case 15: goto $l793;
        case 18: goto $l909;
        case 19: goto $l912;
        case 16: goto $l796;
        case 23: goto $l928;
        case 24: goto $l931;
        case 3: goto $l593;
        case 34: goto $l1067;
        case 30: goto $l951;
        case -1: goto $l1119;
        case 4: goto $l596;
        case 2: goto $l555;
        case 33: goto $l995;
        case 7: goto $l646;
        case 8: goto $l651;
    }
    $l1119:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1122;
    panda$core$Int64 c1133;
    panda$collections$Iterator* Iter$336$131137 = NULL;
    panda$collections$Iterator* $tmp1138;
    panda$collections$Iterator* $tmp1139;
    org$pandalanguage$pandac$ASTNode* s1155 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1156;
    panda$core$Object* $tmp1157;
    panda$core$Bit $returnValue1165;
    panda$core$Object* $tmp1124 = (($fn1123) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1122 = $tmp1124;
    panda$core$Bit $tmp1125 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1122)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp1121 = $tmp1125.value;
    panda$core$Panda$unref$panda$core$Object($tmp1122);
    if (!$tmp1121) goto $l1126;
    panda$core$Bit $tmp1127 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1127);
    $tmp1121 = $tmp1128.value;
    $l1126:;
    panda$core$Bit $tmp1129 = { $tmp1121 };
    bool $tmp1120 = $tmp1129.value;
    if (!$tmp1120) goto $l1130;
    panda$core$Bit $tmp1131 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1120 = $tmp1131.value;
    $l1130:;
    panda$core$Bit $tmp1132 = { $tmp1120 };
    if ($tmp1132.value) {
    {
        c1133 = ((panda$core$Int64) { 0 });
        {
            int $tmp1136;
            {
                ITable* $tmp1140 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1140 = $tmp1140->next;
                }
                $fn1142 $tmp1141 = $tmp1140->methods[0];
                panda$collections$Iterator* $tmp1143 = $tmp1141(((panda$collections$Iterable*) p_statements));
                $tmp1139 = $tmp1143;
                $tmp1138 = $tmp1139;
                Iter$336$131137 = $tmp1138;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1139));
                $l1144:;
                ITable* $tmp1147 = Iter$336$131137->$class->itable;
                while ($tmp1147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1147 = $tmp1147->next;
                }
                $fn1149 $tmp1148 = $tmp1147->methods[0];
                panda$core$Bit $tmp1150 = $tmp1148(Iter$336$131137);
                panda$core$Bit $tmp1151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1150);
                bool $tmp1146 = $tmp1151.value;
                if (!$tmp1146) goto $l1145;
                {
                    int $tmp1154;
                    {
                        ITable* $tmp1158 = Iter$336$131137->$class->itable;
                        while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1158 = $tmp1158->next;
                        }
                        $fn1160 $tmp1159 = $tmp1158->methods[1];
                        panda$core$Object* $tmp1161 = $tmp1159(Iter$336$131137);
                        $tmp1157 = $tmp1161;
                        $tmp1156 = ((org$pandalanguage$pandac$ASTNode*) $tmp1157);
                        s1155 = $tmp1156;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                        panda$core$Panda$unref$panda$core$Object($tmp1157);
                        panda$core$Int64 $tmp1162 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1155);
                        panda$core$Int64 $tmp1163 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1133, $tmp1162);
                        c1133 = $tmp1163;
                        panda$core$Bit $tmp1164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1133, ((panda$core$Int64) { 10 }));
                        if ($tmp1164.value) {
                        {
                            $returnValue1165 = ((panda$core$Bit) { false });
                            $tmp1154 = 0;
                            goto $l1152;
                            $l1166:;
                            $tmp1136 = 0;
                            goto $l1134;
                            $l1167:;
                            return $returnValue1165;
                        }
                        }
                    }
                    $tmp1154 = -1;
                    goto $l1152;
                    $l1152:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1155));
                    s1155 = NULL;
                    switch ($tmp1154) {
                        case -1: goto $l1169;
                        case 0: goto $l1166;
                    }
                    $l1169:;
                }
                goto $l1144;
                $l1145:;
            }
            $tmp1136 = -1;
            goto $l1134;
            $l1134:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$131137));
            Iter$336$131137 = NULL;
            switch ($tmp1136) {
                case -1: goto $l1170;
                case 0: goto $l1167;
            }
            $l1170:;
        }
        $returnValue1165 = ((panda$core$Bit) { true });
        return $returnValue1165;
    }
    }
    $returnValue1165 = ((panda$core$Bit) { false });
    return $returnValue1165;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1176 = NULL;
    panda$core$String* $tmp1177;
    panda$core$String* $tmp1178;
    org$pandalanguage$pandac$ASTNode* $match$357_131182 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1183;
    org$pandalanguage$pandac$Position position1185;
    panda$core$String* text1187 = NULL;
    panda$core$String* $tmp1189;
    panda$core$String* $tmp1190;
    org$pandalanguage$pandac$Annotations* annotations1195 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1196;
    org$pandalanguage$pandac$Annotations* $tmp1197;
    panda$collections$Array* generics1209 = NULL;
    panda$collections$Array* $tmp1213;
    panda$collections$Array* $tmp1214;
    panda$collections$Array* $tmp1215;
    panda$core$String* fullName1217 = NULL;
    panda$core$String* $tmp1218;
    panda$core$String* $tmp1219;
    panda$core$String* $tmp1220;
    panda$core$String* $tmp1221;
    panda$core$String* $tmp1222;
    panda$collections$Iterator* Iter$372$131232 = NULL;
    panda$collections$Iterator* $tmp1233;
    panda$collections$Iterator* $tmp1234;
    org$pandalanguage$pandac$ASTNode* p1250 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1251;
    panda$core$Object* $tmp1252;
    panda$core$String* parameterName1257 = NULL;
    org$pandalanguage$pandac$Type* bound1258 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$375_171262 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1263;
    panda$core$String* id1265 = NULL;
    panda$core$String* $tmp1267;
    panda$core$String* $tmp1268;
    org$pandalanguage$pandac$Type* $tmp1269;
    org$pandalanguage$pandac$Type* $tmp1270;
    org$pandalanguage$pandac$Type* $tmp1271;
    panda$core$String* id1274 = NULL;
    org$pandalanguage$pandac$ASTNode* type1276 = NULL;
    panda$core$String* $tmp1278;
    panda$core$String* $tmp1279;
    org$pandalanguage$pandac$Type* $tmp1280;
    org$pandalanguage$pandac$Type* $tmp1281;
    org$pandalanguage$pandac$Type* $tmp1282;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1288;
    panda$collections$Array* $tmp1295;
    panda$collections$Array* $tmp1296;
    panda$collections$Array* parameters1297 = NULL;
    panda$collections$Array* $tmp1298;
    panda$collections$Array* $tmp1299;
    panda$collections$Iterator* Iter$393$91304 = NULL;
    panda$collections$Iterator* $tmp1305;
    panda$collections$Iterator* $tmp1306;
    org$pandalanguage$pandac$ASTNode* p1322 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1323;
    panda$core$Object* $tmp1324;
    org$pandalanguage$pandac$ASTNode* $match$394_131332 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1333;
    panda$core$String* name1335 = NULL;
    org$pandalanguage$pandac$ASTNode* type1337 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1339;
    org$pandalanguage$pandac$Type* $tmp1341;
    org$pandalanguage$pandac$Type* returnType1349 = NULL;
    org$pandalanguage$pandac$Type* $tmp1350;
    org$pandalanguage$pandac$Type* $tmp1351;
    org$pandalanguage$pandac$Type* $tmp1352;
    org$pandalanguage$pandac$Type* $tmp1354;
    org$pandalanguage$pandac$Type* $tmp1355;
    org$pandalanguage$pandac$Type* $tmp1356;
    org$pandalanguage$pandac$Type* $tmp1361;
    org$pandalanguage$pandac$MethodDecl* $returnValue1376;
    org$pandalanguage$pandac$MethodDecl* $tmp1377;
    org$pandalanguage$pandac$MethodDecl* $tmp1378;
    int $tmp1175;
    {
        memset(&doccomment1176, 0, sizeof(doccomment1176));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1177 = doccomment1176;
                $tmp1178 = NULL;
                doccomment1176 = $tmp1178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1177));
            }
        }
        }
        else {
        {
            int $tmp1181;
            {
                $tmp1183 = p_rawDoccomment;
                $match$357_131182 = $tmp1183;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
                panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$357_131182->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1184.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$357_131182->$data + 0));
                    position1185 = *$tmp1186;
                    panda$core$String** $tmp1188 = ((panda$core$String**) ((char*) $match$357_131182->$data + 16));
                    text1187 = *$tmp1188;
                    {
                        $tmp1189 = doccomment1176;
                        $tmp1190 = text1187;
                        doccomment1176 = $tmp1190;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
                    }
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l1191; else goto $l1192;
                    $l1192:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1193, (panda$core$Int64) { 361 });
                    abort();
                    $l1191:;
                }
                }
            }
            $tmp1181 = -1;
            goto $l1179;
            $l1179:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
            switch ($tmp1181) {
                case -1: goto $l1194;
            }
            $l1194:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1198 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1197 = $tmp1198;
        $tmp1196 = $tmp1197;
        annotations1195 = $tmp1196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
        panda$core$Bit $tmp1201 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1200 = $tmp1201.value;
        if (!$tmp1200) goto $l1202;
        panda$core$Bit $tmp1203 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1200 = $tmp1203.value;
        $l1202:;
        panda$core$Bit $tmp1204 = { $tmp1200 };
        bool $tmp1199 = $tmp1204.value;
        if ($tmp1199) goto $l1205;
        panda$core$Bit $tmp1206 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1195);
        $tmp1199 = $tmp1206.value;
        $l1205:;
        panda$core$Bit $tmp1207 = { $tmp1199 };
        if ($tmp1207.value) {
        {
            panda$core$Int64 $tmp1208 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1195->flags, ((panda$core$Int64) { 256 }));
            annotations1195->flags = $tmp1208;
        }
        }
        memset(&generics1209, 0, sizeof(generics1209));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1212;
            {
                {
                    $tmp1213 = generics1209;
                    panda$collections$Array* $tmp1216 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1216);
                    $tmp1215 = $tmp1216;
                    $tmp1214 = $tmp1215;
                    generics1209 = $tmp1214;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1214));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                }
                panda$core$String* $tmp1223 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1222 = $tmp1223;
                panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1222, &$s1224);
                $tmp1221 = $tmp1225;
                panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, p_name);
                $tmp1220 = $tmp1226;
                panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1220, &$s1227);
                $tmp1219 = $tmp1228;
                $tmp1218 = $tmp1219;
                fullName1217 = $tmp1218;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1222));
                {
                    int $tmp1231;
                    {
                        ITable* $tmp1235 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1235->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1235 = $tmp1235->next;
                        }
                        $fn1237 $tmp1236 = $tmp1235->methods[0];
                        panda$collections$Iterator* $tmp1238 = $tmp1236(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1234 = $tmp1238;
                        $tmp1233 = $tmp1234;
                        Iter$372$131232 = $tmp1233;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                        $l1239:;
                        ITable* $tmp1242 = Iter$372$131232->$class->itable;
                        while ($tmp1242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1242 = $tmp1242->next;
                        }
                        $fn1244 $tmp1243 = $tmp1242->methods[0];
                        panda$core$Bit $tmp1245 = $tmp1243(Iter$372$131232);
                        panda$core$Bit $tmp1246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1245);
                        bool $tmp1241 = $tmp1246.value;
                        if (!$tmp1241) goto $l1240;
                        {
                            int $tmp1249;
                            {
                                ITable* $tmp1253 = Iter$372$131232->$class->itable;
                                while ($tmp1253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1253 = $tmp1253->next;
                                }
                                $fn1255 $tmp1254 = $tmp1253->methods[1];
                                panda$core$Object* $tmp1256 = $tmp1254(Iter$372$131232);
                                $tmp1252 = $tmp1256;
                                $tmp1251 = ((org$pandalanguage$pandac$ASTNode*) $tmp1252);
                                p1250 = $tmp1251;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
                                panda$core$Panda$unref$panda$core$Object($tmp1252);
                                memset(&parameterName1257, 0, sizeof(parameterName1257));
                                memset(&bound1258, 0, sizeof(bound1258));
                                int $tmp1261;
                                {
                                    $tmp1263 = p1250;
                                    $match$375_171262 = $tmp1263;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1263));
                                    panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$375_171262->$rawValue, ((panda$core$Int64) { 20 }));
                                    if ($tmp1264.value) {
                                    {
                                        panda$core$String** $tmp1266 = ((panda$core$String**) ((char*) $match$375_171262->$data + 16));
                                        id1265 = *$tmp1266;
                                        {
                                            $tmp1267 = parameterName1257;
                                            $tmp1268 = id1265;
                                            parameterName1257 = $tmp1268;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1268));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                                        }
                                        {
                                            $tmp1269 = bound1258;
                                            org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1271 = $tmp1272;
                                            $tmp1270 = $tmp1271;
                                            bound1258 = $tmp1270;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1270));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1271));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$375_171262->$rawValue, ((panda$core$Int64) { 44 }));
                                    if ($tmp1273.value) {
                                    {
                                        panda$core$String** $tmp1275 = ((panda$core$String**) ((char*) $match$375_171262->$data + 16));
                                        id1274 = *$tmp1275;
                                        org$pandalanguage$pandac$ASTNode** $tmp1277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$375_171262->$data + 24));
                                        type1276 = *$tmp1277;
                                        {
                                            $tmp1278 = parameterName1257;
                                            $tmp1279 = id1274;
                                            parameterName1257 = $tmp1279;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1278));
                                        }
                                        {
                                            $tmp1280 = bound1258;
                                            org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1276);
                                            $tmp1282 = $tmp1283;
                                            $tmp1281 = $tmp1282;
                                            bound1258 = $tmp1281;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        if (((panda$core$Bit) { false }).value) goto $l1284; else goto $l1285;
                                        $l1285:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1286, (panda$core$Int64) { 383 });
                                        abort();
                                        $l1284:;
                                    }
                                    }
                                    }
                                }
                                $tmp1261 = -1;
                                goto $l1259;
                                $l1259:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                                switch ($tmp1261) {
                                    case -1: goto $l1287;
                                }
                                $l1287:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1289 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1291 = (($fn1290) p1250->$class->vtable[2])(p1250);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1289, $tmp1291, fullName1217, parameterName1257, bound1258);
                                $tmp1288 = $tmp1289;
                                panda$collections$Array$add$panda$collections$Array$T(generics1209, ((panda$core$Object*) $tmp1288));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                            }
                            $tmp1249 = -1;
                            goto $l1247;
                            $l1247:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1258));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1257));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1250));
                            p1250 = NULL;
                            switch ($tmp1249) {
                                case -1: goto $l1292;
                            }
                            $l1292:;
                        }
                        goto $l1239;
                        $l1240:;
                    }
                    $tmp1231 = -1;
                    goto $l1229;
                    $l1229:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$372$131232));
                    Iter$372$131232 = NULL;
                    switch ($tmp1231) {
                        case -1: goto $l1293;
                    }
                    $l1293:;
                }
            }
            $tmp1212 = -1;
            goto $l1210;
            $l1210:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1217));
            fullName1217 = NULL;
            switch ($tmp1212) {
                case -1: goto $l1294;
            }
            $l1294:;
        }
        }
        else {
        {
            {
                $tmp1295 = generics1209;
                $tmp1296 = NULL;
                generics1209 = $tmp1296;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
            }
        }
        }
        panda$collections$Array* $tmp1300 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1300);
        $tmp1299 = $tmp1300;
        $tmp1298 = $tmp1299;
        parameters1297 = $tmp1298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
        {
            int $tmp1303;
            {
                ITable* $tmp1307 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1307 = $tmp1307->next;
                }
                $fn1309 $tmp1308 = $tmp1307->methods[0];
                panda$collections$Iterator* $tmp1310 = $tmp1308(((panda$collections$Iterable*) p_rawParameters));
                $tmp1306 = $tmp1310;
                $tmp1305 = $tmp1306;
                Iter$393$91304 = $tmp1305;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
                $l1311:;
                ITable* $tmp1314 = Iter$393$91304->$class->itable;
                while ($tmp1314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1314 = $tmp1314->next;
                }
                $fn1316 $tmp1315 = $tmp1314->methods[0];
                panda$core$Bit $tmp1317 = $tmp1315(Iter$393$91304);
                panda$core$Bit $tmp1318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1317);
                bool $tmp1313 = $tmp1318.value;
                if (!$tmp1313) goto $l1312;
                {
                    int $tmp1321;
                    {
                        ITable* $tmp1325 = Iter$393$91304->$class->itable;
                        while ($tmp1325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1325 = $tmp1325->next;
                        }
                        $fn1327 $tmp1326 = $tmp1325->methods[1];
                        panda$core$Object* $tmp1328 = $tmp1326(Iter$393$91304);
                        $tmp1324 = $tmp1328;
                        $tmp1323 = ((org$pandalanguage$pandac$ASTNode*) $tmp1324);
                        p1322 = $tmp1323;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
                        panda$core$Panda$unref$panda$core$Object($tmp1324);
                        int $tmp1331;
                        {
                            $tmp1333 = p1322;
                            $match$394_131332 = $tmp1333;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
                            panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_131332->$rawValue, ((panda$core$Int64) { 31 }));
                            if ($tmp1334.value) {
                            {
                                panda$core$String** $tmp1336 = ((panda$core$String**) ((char*) $match$394_131332->$data + 16));
                                name1335 = *$tmp1336;
                                org$pandalanguage$pandac$ASTNode** $tmp1338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$394_131332->$data + 24));
                                type1337 = *$tmp1338;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1340 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1337);
                                $tmp1341 = $tmp1342;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1340, name1335, $tmp1341);
                                $tmp1339 = $tmp1340;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1297, ((panda$core$Object*) $tmp1339));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            }
                            }
                            else {
                            {
                                if (((panda$core$Bit) { false }).value) goto $l1343; else goto $l1344;
                                $l1344:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1345, (panda$core$Int64) { 398 });
                                abort();
                                $l1343:;
                            }
                            }
                        }
                        $tmp1331 = -1;
                        goto $l1329;
                        $l1329:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
                        switch ($tmp1331) {
                            case -1: goto $l1346;
                        }
                        $l1346:;
                    }
                    $tmp1321 = -1;
                    goto $l1319;
                    $l1319:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1322));
                    p1322 = NULL;
                    switch ($tmp1321) {
                        case -1: goto $l1347;
                    }
                    $l1347:;
                }
                goto $l1311;
                $l1312:;
            }
            $tmp1303 = -1;
            goto $l1301;
            $l1301:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$393$91304));
            Iter$393$91304 = NULL;
            switch ($tmp1303) {
                case -1: goto $l1348;
            }
            $l1348:;
        }
        memset(&returnType1349, 0, sizeof(returnType1349));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1350 = returnType1349;
                org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1352 = $tmp1353;
                $tmp1351 = $tmp1352;
                returnType1349 = $tmp1351;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
            }
        }
        }
        else {
        {
            {
                $tmp1354 = returnType1349;
                org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1356 = $tmp1357;
                $tmp1355 = $tmp1356;
                returnType1349 = $tmp1355;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
            }
        }
        }
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1358 = $tmp1359.value;
        if (!$tmp1358) goto $l1360;
        org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1361 = $tmp1362;
        panda$core$Bit $tmp1363 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1349, $tmp1361);
        $tmp1358 = $tmp1363.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
        $l1360:;
        panda$core$Bit $tmp1364 = { $tmp1358 };
        if ($tmp1364.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1365);
        }
        }
        bool $tmp1366 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1366) goto $l1367;
        panda$core$Bit $tmp1368 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1195, p_statements);
        $tmp1366 = $tmp1368.value;
        $l1367:;
        panda$core$Bit $tmp1369 = { $tmp1366 };
        if ($tmp1369.value) {
        {
            panda$core$Int64 $tmp1370 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1195->flags, ((panda$core$Int64) { 1024 }));
            annotations1195->flags = $tmp1370;
        }
        }
        bool $tmp1371 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1371) goto $l1372;
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp1371 = $tmp1373.value;
        $l1372:;
        panda$core$Bit $tmp1374 = { $tmp1371 };
        if ($tmp1374.value) {
        {
            panda$core$Int64 $tmp1375 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1195->flags, ((panda$core$Int64) { 512 }));
            annotations1195->flags = $tmp1375;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1379 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1379, p_owner, p_position, doccomment1176, annotations1195, p_kind, p_name, generics1209, parameters1297, returnType1349, p_statements);
        $tmp1378 = $tmp1379;
        $tmp1377 = $tmp1378;
        $returnValue1376 = $tmp1377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
        $tmp1175 = 0;
        goto $l1173;
        $l1380:;
        return $returnValue1376;
    }
    $l1173:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1349));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1209));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1195));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1176));
    annotations1195 = NULL;
    parameters1297 = NULL;
    switch ($tmp1175) {
        case 0: goto $l1380;
    }
    $l1382:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$422_91386 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1387;
    org$pandalanguage$pandac$Position position1389;
    org$pandalanguage$pandac$ASTNode* dc1391 = NULL;
    panda$collections$ImmutableArray* annotations1393 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1395 = NULL;
    org$pandalanguage$pandac$Position position1398;
    org$pandalanguage$pandac$ASTNode* dc1400 = NULL;
    panda$collections$ImmutableArray* annotations1402 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1404;
    panda$core$String* name1406 = NULL;
    panda$collections$ImmutableArray* generics1408 = NULL;
    panda$collections$ImmutableArray* parameters1410 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1412 = NULL;
    panda$collections$ImmutableArray* statements1414 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1419 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1420;
    org$pandalanguage$pandac$MethodDecl* $tmp1421;
    org$pandalanguage$pandac$Position position1425;
    org$pandalanguage$pandac$ASTNode* dc1427 = NULL;
    panda$collections$ImmutableArray* annotations1429 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1431;
    panda$core$String* name1433 = NULL;
    panda$collections$ImmutableArray* generics1435 = NULL;
    panda$collections$ImmutableArray* supertypes1437 = NULL;
    panda$collections$ImmutableArray* members1439 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1444 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1445;
    org$pandalanguage$pandac$ClassDecl* $tmp1446;
    panda$core$Weak* $tmp1448;
    panda$core$Weak* $tmp1449;
    panda$core$Weak* $tmp1450;
    panda$core$String* $tmp1452;
    org$pandalanguage$pandac$Alias* $tmp1459;
    panda$core$String* $tmp1461;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1462;
    org$pandalanguage$pandac$Position $tmp1466;
    org$pandalanguage$pandac$Alias* $tmp1467;
    panda$core$String* $tmp1469;
    org$pandalanguage$pandac$Position $tmp1471;
    org$pandalanguage$pandac$Position position1474;
    org$pandalanguage$pandac$ASTNode* dc1476 = NULL;
    panda$core$String* name1478 = NULL;
    panda$collections$ImmutableArray* fields1480 = NULL;
    panda$core$String* $tmp1485;
    panda$core$String* $tmp1486;
    int $tmp1385;
    {
        $tmp1387 = p_node;
        $match$422_91386 = $tmp1387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1387));
        panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91386->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1388.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1390 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91386->$data + 0));
            position1389 = *$tmp1390;
            org$pandalanguage$pandac$ASTNode** $tmp1392 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91386->$data + 16));
            dc1391 = *$tmp1392;
            panda$collections$ImmutableArray** $tmp1394 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 24));
            annotations1393 = *$tmp1394;
            org$pandalanguage$pandac$ASTNode** $tmp1396 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91386->$data + 32));
            varDecl1395 = *$tmp1396;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1389, dc1391, annotations1393, varDecl1395);
        }
        }
        else {
        panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91386->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1397.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91386->$data + 0));
            position1398 = *$tmp1399;
            org$pandalanguage$pandac$ASTNode** $tmp1401 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91386->$data + 16));
            dc1400 = *$tmp1401;
            panda$collections$ImmutableArray** $tmp1403 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 24));
            annotations1402 = *$tmp1403;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1405 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$422_91386->$data + 32));
            kind1404 = *$tmp1405;
            panda$core$String** $tmp1407 = ((panda$core$String**) ((char*) $match$422_91386->$data + 40));
            name1406 = *$tmp1407;
            panda$collections$ImmutableArray** $tmp1409 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 48));
            generics1408 = *$tmp1409;
            panda$collections$ImmutableArray** $tmp1411 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 56));
            parameters1410 = *$tmp1411;
            org$pandalanguage$pandac$ASTNode** $tmp1413 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91386->$data + 64));
            returnType1412 = *$tmp1413;
            panda$collections$ImmutableArray** $tmp1415 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 72));
            statements1414 = *$tmp1415;
            int $tmp1418;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1422 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1398, dc1400, annotations1402, kind1404, name1406, generics1408, parameters1410, returnType1412, statements1414);
                $tmp1421 = $tmp1422;
                $tmp1420 = $tmp1421;
                m1419 = $tmp1420;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                if (((panda$core$Bit) { m1419 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1419));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1419));
                }
                }
            }
            $tmp1418 = -1;
            goto $l1416;
            $l1416:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1419));
            m1419 = NULL;
            switch ($tmp1418) {
                case -1: goto $l1423;
            }
            $l1423:;
        }
        }
        else {
        panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91386->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1424.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1426 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91386->$data + 0));
            position1425 = *$tmp1426;
            org$pandalanguage$pandac$ASTNode** $tmp1428 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91386->$data + 16));
            dc1427 = *$tmp1428;
            panda$collections$ImmutableArray** $tmp1430 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 24));
            annotations1429 = *$tmp1430;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1432 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$422_91386->$data + 32));
            kind1431 = *$tmp1432;
            panda$core$String** $tmp1434 = ((panda$core$String**) ((char*) $match$422_91386->$data + 40));
            name1433 = *$tmp1434;
            panda$collections$ImmutableArray** $tmp1436 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 48));
            generics1435 = *$tmp1436;
            panda$collections$ImmutableArray** $tmp1438 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 56));
            supertypes1437 = *$tmp1438;
            panda$collections$ImmutableArray** $tmp1440 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 64));
            members1439 = *$tmp1440;
            int $tmp1443;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1447 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1425, dc1427, annotations1429, kind1431, name1433, generics1435, supertypes1437, members1439);
                $tmp1446 = $tmp1447;
                $tmp1445 = $tmp1446;
                inner1444 = $tmp1445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                if (((panda$core$Bit) { inner1444 != NULL }).value) {
                {
                    {
                        $tmp1448 = inner1444->owner;
                        panda$core$Weak* $tmp1451 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1451, ((panda$core$Object*) p_cl));
                        $tmp1450 = $tmp1451;
                        $tmp1449 = $tmp1450;
                        inner1444->owner = $tmp1449;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1444));
                    panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1453);
                    $tmp1452 = $tmp1454;
                    panda$core$Bit $tmp1455 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1444->name, $tmp1452);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                    if ($tmp1455.value) goto $l1456; else goto $l1457;
                    $l1457:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1458, (panda$core$Int64) { 440 });
                    abort();
                    $l1456:;
                    org$pandalanguage$pandac$Alias* $tmp1460 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1463 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1464 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1463, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1462, ((panda$core$Int64$nullable) { $tmp1464, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1465 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1444->name, $tmp1462);
                    $tmp1461 = $tmp1465;
                    org$pandalanguage$pandac$Position$init(&$tmp1466);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1460, $tmp1461, inner1444->name, $tmp1466);
                    $tmp1459 = $tmp1460;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1459));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                    org$pandalanguage$pandac$Alias* $tmp1468 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1470 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1469 = $tmp1470;
                    org$pandalanguage$pandac$Position$init(&$tmp1471);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1468, $tmp1469, p_cl->name, $tmp1471);
                    $tmp1467 = $tmp1468;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1444->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1467));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                }
                }
            }
            $tmp1443 = -1;
            goto $l1441;
            $l1441:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1444));
            inner1444 = NULL;
            switch ($tmp1443) {
                case -1: goto $l1472;
            }
            $l1472:;
        }
        }
        else {
        panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91386->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1473.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1475 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91386->$data + 0));
            position1474 = *$tmp1475;
            org$pandalanguage$pandac$ASTNode** $tmp1477 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91386->$data + 16));
            dc1476 = *$tmp1477;
            panda$core$String** $tmp1479 = ((panda$core$String**) ((char*) $match$422_91386->$data + 24));
            name1478 = *$tmp1479;
            panda$collections$ImmutableArray** $tmp1481 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91386->$data + 32));
            fields1480 = *$tmp1481;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1474, dc1476, name1478, fields1480);
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l1482; else goto $l1483;
            $l1483:;
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1487, ((panda$core$Object*) p_node));
            $tmp1486 = $tmp1488;
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1486, &$s1489);
            $tmp1485 = $tmp1490;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1484, (panda$core$Int64) { 448 }, $tmp1485);
            abort();
            $l1482:;
        }
        }
        }
        }
        }
    }
    $tmp1385 = -1;
    goto $l1383;
    $l1383:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
    switch ($tmp1385) {
        case -1: goto $l1491;
    }
    $l1491:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1495 = NULL;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1497;
    org$pandalanguage$pandac$ASTNode* $match$460_131501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1502;
    org$pandalanguage$pandac$Position position1504;
    panda$core$String* text1506 = NULL;
    panda$core$String* $tmp1508;
    panda$core$String* $tmp1509;
    panda$collections$Array* fields1514 = NULL;
    panda$collections$Array* $tmp1515;
    panda$collections$Array* $tmp1516;
    panda$collections$Iterator* Iter$468$91521 = NULL;
    panda$collections$Iterator* $tmp1522;
    panda$collections$Iterator* $tmp1523;
    org$pandalanguage$pandac$ASTNode* t1539 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1540;
    panda$core$Object* $tmp1541;
    org$pandalanguage$pandac$Type* $tmp1546;
    org$pandalanguage$pandac$ChoiceEntry* entry1550 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1551;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1552;
    int $tmp1494;
    {
        memset(&doccomment1495, 0, sizeof(doccomment1495));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1496 = doccomment1495;
                $tmp1497 = NULL;
                doccomment1495 = $tmp1497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
            }
        }
        }
        else {
        {
            int $tmp1500;
            {
                $tmp1502 = p_rawDoccomment;
                $match$460_131501 = $tmp1502;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_131501->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1503.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1505 = ((org$pandalanguage$pandac$Position*) ((char*) $match$460_131501->$data + 0));
                    position1504 = *$tmp1505;
                    panda$core$String** $tmp1507 = ((panda$core$String**) ((char*) $match$460_131501->$data + 16));
                    text1506 = *$tmp1507;
                    {
                        $tmp1508 = doccomment1495;
                        $tmp1509 = text1506;
                        doccomment1495 = $tmp1509;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                    }
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l1510; else goto $l1511;
                    $l1511:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1512, (panda$core$Int64) { 464 });
                    abort();
                    $l1510:;
                }
                }
            }
            $tmp1500 = -1;
            goto $l1498;
            $l1498:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
            switch ($tmp1500) {
                case -1: goto $l1513;
            }
            $l1513:;
        }
        }
        panda$collections$Array* $tmp1517 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1517);
        $tmp1516 = $tmp1517;
        $tmp1515 = $tmp1516;
        fields1514 = $tmp1515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
        {
            int $tmp1520;
            {
                ITable* $tmp1524 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1524->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1524 = $tmp1524->next;
                }
                $fn1526 $tmp1525 = $tmp1524->methods[0];
                panda$collections$Iterator* $tmp1527 = $tmp1525(((panda$collections$Iterable*) p_rawFields));
                $tmp1523 = $tmp1527;
                $tmp1522 = $tmp1523;
                Iter$468$91521 = $tmp1522;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
                $l1528:;
                ITable* $tmp1531 = Iter$468$91521->$class->itable;
                while ($tmp1531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1531 = $tmp1531->next;
                }
                $fn1533 $tmp1532 = $tmp1531->methods[0];
                panda$core$Bit $tmp1534 = $tmp1532(Iter$468$91521);
                panda$core$Bit $tmp1535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1534);
                bool $tmp1530 = $tmp1535.value;
                if (!$tmp1530) goto $l1529;
                {
                    int $tmp1538;
                    {
                        ITable* $tmp1542 = Iter$468$91521->$class->itable;
                        while ($tmp1542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1542 = $tmp1542->next;
                        }
                        $fn1544 $tmp1543 = $tmp1542->methods[1];
                        panda$core$Object* $tmp1545 = $tmp1543(Iter$468$91521);
                        $tmp1541 = $tmp1545;
                        $tmp1540 = ((org$pandalanguage$pandac$ASTNode*) $tmp1541);
                        t1539 = $tmp1540;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
                        panda$core$Panda$unref$panda$core$Object($tmp1541);
                        org$pandalanguage$pandac$Type* $tmp1547 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1539);
                        $tmp1546 = $tmp1547;
                        panda$collections$Array$add$panda$collections$Array$T(fields1514, ((panda$core$Object*) $tmp1546));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
                    }
                    $tmp1538 = -1;
                    goto $l1536;
                    $l1536:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1539));
                    t1539 = NULL;
                    switch ($tmp1538) {
                        case -1: goto $l1548;
                    }
                    $l1548:;
                }
                goto $l1528;
                $l1529:;
            }
            $tmp1520 = -1;
            goto $l1518;
            $l1518:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$91521));
            Iter$468$91521 = NULL;
            switch ($tmp1520) {
                case -1: goto $l1549;
            }
            $l1549:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1553 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1554 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1553, p_cl, p_position, p_name, doccomment1495, $tmp1554, ((panda$collections$ListView*) fields1514));
        $tmp1552 = $tmp1553;
        $tmp1551 = $tmp1552;
        entry1550 = $tmp1551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1550));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1550));
    }
    $tmp1494 = -1;
    goto $l1492;
    $l1492:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1550));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1514));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1495));
    fields1514 = NULL;
    entry1550 = NULL;
    switch ($tmp1494) {
        case -1: goto $l1555;
    }
    $l1555:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1559 = NULL;
    panda$core$String* $tmp1562;
    panda$core$String* $tmp1563;
    panda$core$String* $tmp1564;
    panda$core$String* $tmp1565;
    panda$core$String* $tmp1566;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1574;
    panda$core$String* $tmp1575;
    panda$core$String* doccomment1576 = NULL;
    panda$core$String* $tmp1577;
    panda$core$String* $tmp1578;
    org$pandalanguage$pandac$ASTNode* $match$494_131582 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1583;
    org$pandalanguage$pandac$Position position1585;
    panda$core$String* text1587 = NULL;
    panda$core$String* $tmp1589;
    panda$core$String* $tmp1590;
    org$pandalanguage$pandac$Annotations* annotations1595 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1596;
    org$pandalanguage$pandac$Annotations* $tmp1597;
    panda$collections$Array* parameters1599 = NULL;
    panda$collections$Array* $tmp1600;
    panda$collections$Array* $tmp1601;
    panda$collections$Iterator* Iter$504$131606 = NULL;
    panda$collections$Iterator* $tmp1607;
    panda$collections$Iterator* $tmp1608;
    org$pandalanguage$pandac$ASTNode* p1624 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1625;
    panda$core$Object* $tmp1626;
    panda$core$String* name1631 = NULL;
    org$pandalanguage$pandac$Type* bound1632 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$507_171636 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    panda$core$String* id1639 = NULL;
    panda$core$String* $tmp1641;
    panda$core$String* $tmp1642;
    org$pandalanguage$pandac$Type* $tmp1643;
    org$pandalanguage$pandac$Type* $tmp1644;
    org$pandalanguage$pandac$Type* $tmp1645;
    panda$core$String* id1648 = NULL;
    org$pandalanguage$pandac$ASTNode* type1650 = NULL;
    panda$core$String* $tmp1652;
    panda$core$String* $tmp1653;
    org$pandalanguage$pandac$Type* $tmp1654;
    org$pandalanguage$pandac$Type* $tmp1655;
    org$pandalanguage$pandac$Type* $tmp1656;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1662;
    panda$collections$Array* supertypes1670 = NULL;
    panda$collections$Array* $tmp1671;
    panda$collections$Array* $tmp1672;
    panda$collections$Iterator* Iter$528$131679 = NULL;
    panda$collections$Iterator* $tmp1680;
    panda$collections$Iterator* $tmp1681;
    org$pandalanguage$pandac$ASTNode* s1697 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1698;
    panda$core$Object* $tmp1699;
    org$pandalanguage$pandac$Type* $tmp1704;
    org$pandalanguage$pandac$ClassDecl* result1708 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1709;
    org$pandalanguage$pandac$ClassDecl* $tmp1710;
    panda$core$Object* $tmp1712;
    panda$core$Object* $tmp1715;
    org$pandalanguage$pandac$FieldDecl* rawValue1722 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1723;
    org$pandalanguage$pandac$FieldDecl* $tmp1724;
    org$pandalanguage$pandac$Annotations* $tmp1726;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1728;
    org$pandalanguage$pandac$Type* $tmp1730;
    org$pandalanguage$pandac$FieldDecl* data1732 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1733;
    org$pandalanguage$pandac$FieldDecl* $tmp1734;
    org$pandalanguage$pandac$Annotations* $tmp1736;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1738;
    org$pandalanguage$pandac$Type* $tmp1740;
    panda$collections$Iterator* Iter$545$91746 = NULL;
    panda$collections$Iterator* $tmp1747;
    panda$collections$Iterator* $tmp1748;
    org$pandalanguage$pandac$ASTNode* m1764 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1765;
    panda$core$Object* $tmp1766;
    org$pandalanguage$pandac$ASTNode* $match$546_131774 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1775;
    org$pandalanguage$pandac$Position mPosition1777;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1779;
    org$pandalanguage$pandac$ClassDecl$Kind $match$549_251782;
    panda$core$Bit foundInit1791;
    panda$core$Bit foundCleanup1792;
    panda$collections$Iterator* Iter$564$91796 = NULL;
    panda$collections$Iterator* $tmp1797;
    panda$collections$Iterator* $tmp1798;
    org$pandalanguage$pandac$MethodDecl* m1814 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1815;
    panda$core$Object* $tmp1816;
    org$pandalanguage$pandac$MethodDecl* defaultInit1846 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1847;
    org$pandalanguage$pandac$MethodDecl* $tmp1848;
    org$pandalanguage$pandac$Annotations* $tmp1850;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1852;
    panda$collections$Array* $tmp1854;
    panda$collections$Array* $tmp1856;
    org$pandalanguage$pandac$Type* $tmp1858;
    panda$collections$ImmutableArray* $tmp1860;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1880 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1881;
    org$pandalanguage$pandac$MethodDecl* $tmp1882;
    org$pandalanguage$pandac$Annotations* $tmp1884;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1887;
    panda$collections$Array* $tmp1889;
    panda$collections$Array* $tmp1891;
    org$pandalanguage$pandac$Type* $tmp1893;
    panda$collections$ImmutableArray* $tmp1895;
    panda$core$Bit haveFields1899;
    panda$collections$Iterator* Iter$594$131903 = NULL;
    panda$collections$Iterator* $tmp1904;
    panda$collections$Iterator* $tmp1905;
    org$pandalanguage$pandac$ChoiceEntry* e1921 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1922;
    panda$core$Object* $tmp1923;
    org$pandalanguage$pandac$Type* $tmp1934;
    org$pandalanguage$pandac$Type* $tmp1935;
    org$pandalanguage$pandac$Type* $tmp1936;
    panda$core$Object* $tmp1938;
    panda$core$Object* $tmp1939;
    org$pandalanguage$pandac$ClassDecl* $returnValue1943;
    org$pandalanguage$pandac$ClassDecl* $tmp1944;
    int $tmp1558;
    {
        memset(&fullName1559, 0, sizeof(fullName1559));
        panda$core$Bit $tmp1561 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1560);
        if ($tmp1561.value) {
        {
            {
                $tmp1562 = fullName1559;
                panda$core$String* $tmp1568 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1567 = $tmp1568;
                panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1569);
                $tmp1566 = $tmp1570;
                panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1566, p_name);
                $tmp1565 = $tmp1571;
                panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1572);
                $tmp1564 = $tmp1573;
                $tmp1563 = $tmp1564;
                fullName1559 = $tmp1563;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1564));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1562));
            }
        }
        }
        else {
        {
            {
                $tmp1574 = fullName1559;
                $tmp1575 = p_name;
                fullName1559 = $tmp1575;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
            }
        }
        }
        memset(&doccomment1576, 0, sizeof(doccomment1576));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1577 = doccomment1576;
                $tmp1578 = NULL;
                doccomment1576 = $tmp1578;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
            }
        }
        }
        else {
        {
            int $tmp1581;
            {
                $tmp1583 = p_rawDoccomment;
                $match$494_131582 = $tmp1583;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
                panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131582->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp1584.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1586 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131582->$data + 0));
                    position1585 = *$tmp1586;
                    panda$core$String** $tmp1588 = ((panda$core$String**) ((char*) $match$494_131582->$data + 16));
                    text1587 = *$tmp1588;
                    {
                        $tmp1589 = doccomment1576;
                        $tmp1590 = text1587;
                        doccomment1576 = $tmp1590;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1590));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
                    }
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l1591; else goto $l1592;
                    $l1592:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1593, (panda$core$Int64) { 498 });
                    abort();
                    $l1591:;
                }
                }
            }
            $tmp1581 = -1;
            goto $l1579;
            $l1579:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
            switch ($tmp1581) {
                case -1: goto $l1594;
            }
            $l1594:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1598 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1597 = $tmp1598;
        $tmp1596 = $tmp1597;
        annotations1595 = $tmp1596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
        panda$collections$Array* $tmp1602 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1602);
        $tmp1601 = $tmp1602;
        $tmp1600 = $tmp1601;
        parameters1599 = $tmp1600;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1605;
                {
                    ITable* $tmp1609 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1609 = $tmp1609->next;
                    }
                    $fn1611 $tmp1610 = $tmp1609->methods[0];
                    panda$collections$Iterator* $tmp1612 = $tmp1610(((panda$collections$Iterable*) p_generics));
                    $tmp1608 = $tmp1612;
                    $tmp1607 = $tmp1608;
                    Iter$504$131606 = $tmp1607;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
                    $l1613:;
                    ITable* $tmp1616 = Iter$504$131606->$class->itable;
                    while ($tmp1616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1616 = $tmp1616->next;
                    }
                    $fn1618 $tmp1617 = $tmp1616->methods[0];
                    panda$core$Bit $tmp1619 = $tmp1617(Iter$504$131606);
                    panda$core$Bit $tmp1620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1619);
                    bool $tmp1615 = $tmp1620.value;
                    if (!$tmp1615) goto $l1614;
                    {
                        int $tmp1623;
                        {
                            ITable* $tmp1627 = Iter$504$131606->$class->itable;
                            while ($tmp1627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1627 = $tmp1627->next;
                            }
                            $fn1629 $tmp1628 = $tmp1627->methods[1];
                            panda$core$Object* $tmp1630 = $tmp1628(Iter$504$131606);
                            $tmp1626 = $tmp1630;
                            $tmp1625 = ((org$pandalanguage$pandac$ASTNode*) $tmp1626);
                            p1624 = $tmp1625;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
                            panda$core$Panda$unref$panda$core$Object($tmp1626);
                            memset(&name1631, 0, sizeof(name1631));
                            memset(&bound1632, 0, sizeof(bound1632));
                            int $tmp1635;
                            {
                                $tmp1637 = p1624;
                                $match$507_171636 = $tmp1637;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
                                panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$507_171636->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1638.value) {
                                {
                                    panda$core$String** $tmp1640 = ((panda$core$String**) ((char*) $match$507_171636->$data + 16));
                                    id1639 = *$tmp1640;
                                    {
                                        $tmp1641 = name1631;
                                        $tmp1642 = id1639;
                                        name1631 = $tmp1642;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1642));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
                                    }
                                    {
                                        $tmp1643 = bound1632;
                                        org$pandalanguage$pandac$Type* $tmp1646 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1645 = $tmp1646;
                                        $tmp1644 = $tmp1645;
                                        bound1632 = $tmp1644;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1644));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1645));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$507_171636->$rawValue, ((panda$core$Int64) { 44 }));
                                if ($tmp1647.value) {
                                {
                                    panda$core$String** $tmp1649 = ((panda$core$String**) ((char*) $match$507_171636->$data + 16));
                                    id1648 = *$tmp1649;
                                    org$pandalanguage$pandac$ASTNode** $tmp1651 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$507_171636->$data + 24));
                                    type1650 = *$tmp1651;
                                    {
                                        $tmp1652 = name1631;
                                        $tmp1653 = id1648;
                                        name1631 = $tmp1653;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1652));
                                    }
                                    {
                                        $tmp1654 = bound1632;
                                        org$pandalanguage$pandac$Type* $tmp1657 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1650);
                                        $tmp1656 = $tmp1657;
                                        $tmp1655 = $tmp1656;
                                        bound1632 = $tmp1655;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1655));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                                    }
                                }
                                }
                                else {
                                {
                                    if (((panda$core$Bit) { false }).value) goto $l1658; else goto $l1659;
                                    $l1659:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1660, (panda$core$Int64) { 515 });
                                    abort();
                                    $l1658:;
                                }
                                }
                                }
                            }
                            $tmp1635 = -1;
                            goto $l1633;
                            $l1633:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                            switch ($tmp1635) {
                                case -1: goto $l1661;
                            }
                            $l1661:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1663 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1665 = (($fn1664) p1624->$class->vtable[2])(p1624);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1663, $tmp1665, fullName1559, name1631, bound1632);
                            $tmp1662 = $tmp1663;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1599, ((panda$core$Object*) $tmp1662));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1662));
                        }
                        $tmp1623 = -1;
                        goto $l1621;
                        $l1621:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1632));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1631));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1624));
                        p1624 = NULL;
                        switch ($tmp1623) {
                            case -1: goto $l1666;
                        }
                        $l1666:;
                    }
                    goto $l1613;
                    $l1614:;
                }
                $tmp1605 = -1;
                goto $l1603;
                $l1603:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$504$131606));
                Iter$504$131606 = NULL;
                switch ($tmp1605) {
                    case -1: goto $l1667;
                }
                $l1667:;
            }
            panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1668.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1669);
            }
            }
        }
        }
        panda$collections$Array* $tmp1673 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1673);
        $tmp1672 = $tmp1673;
        $tmp1671 = $tmp1672;
        supertypes1670 = $tmp1671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1674.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1675);
            }
            }
            {
                int $tmp1678;
                {
                    ITable* $tmp1682 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1682->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1682 = $tmp1682->next;
                    }
                    $fn1684 $tmp1683 = $tmp1682->methods[0];
                    panda$collections$Iterator* $tmp1685 = $tmp1683(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1681 = $tmp1685;
                    $tmp1680 = $tmp1681;
                    Iter$528$131679 = $tmp1680;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1680));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1681));
                    $l1686:;
                    ITable* $tmp1689 = Iter$528$131679->$class->itable;
                    while ($tmp1689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1689 = $tmp1689->next;
                    }
                    $fn1691 $tmp1690 = $tmp1689->methods[0];
                    panda$core$Bit $tmp1692 = $tmp1690(Iter$528$131679);
                    panda$core$Bit $tmp1693 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1692);
                    bool $tmp1688 = $tmp1693.value;
                    if (!$tmp1688) goto $l1687;
                    {
                        int $tmp1696;
                        {
                            ITable* $tmp1700 = Iter$528$131679->$class->itable;
                            while ($tmp1700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1700 = $tmp1700->next;
                            }
                            $fn1702 $tmp1701 = $tmp1700->methods[1];
                            panda$core$Object* $tmp1703 = $tmp1701(Iter$528$131679);
                            $tmp1699 = $tmp1703;
                            $tmp1698 = ((org$pandalanguage$pandac$ASTNode*) $tmp1699);
                            s1697 = $tmp1698;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1698));
                            panda$core$Panda$unref$panda$core$Object($tmp1699);
                            org$pandalanguage$pandac$Type* $tmp1705 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1697);
                            $tmp1704 = $tmp1705;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1670, ((panda$core$Object*) $tmp1704));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
                        }
                        $tmp1696 = -1;
                        goto $l1694;
                        $l1694:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1697));
                        s1697 = NULL;
                        switch ($tmp1696) {
                            case -1: goto $l1706;
                        }
                        $l1706:;
                    }
                    goto $l1686;
                    $l1687:;
                }
                $tmp1678 = -1;
                goto $l1676;
                $l1676:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$528$131679));
                Iter$528$131679 = NULL;
                switch ($tmp1678) {
                    case -1: goto $l1707;
                }
                $l1707:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1711 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1714 = (($fn1713) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1712 = $tmp1714;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1711, p_source, p_position, p_aliases, doccomment1576, annotations1595, p_kind, fullName1559, ((panda$collections$ListView*) supertypes1670), parameters1599, ((org$pandalanguage$pandac$Compiler*) $tmp1712)->root);
        $tmp1710 = $tmp1711;
        $tmp1709 = $tmp1710;
        result1708 = $tmp1709;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1709));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
        panda$core$Panda$unref$panda$core$Object($tmp1712);
        panda$core$Object* $tmp1717 = (($fn1716) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1715 = $tmp1717;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1715)->currentClass, ((panda$core$Object*) result1708));
        panda$core$Panda$unref$panda$core$Object($tmp1715);
        panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1718.value) {
        {
            int $tmp1721;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1725 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1727 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1727);
                $tmp1726 = $tmp1727;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1728, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1731 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1730 = $tmp1731;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1725, result1708, result1708->position, NULL, $tmp1726, $tmp1728, &$s1729, $tmp1730, NULL);
                $tmp1724 = $tmp1725;
                $tmp1723 = $tmp1724;
                rawValue1722 = $tmp1723;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
                panda$collections$Array$add$panda$collections$Array$T(result1708->fields, ((panda$core$Object*) rawValue1722));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1708->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1722));
                org$pandalanguage$pandac$FieldDecl* $tmp1735 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1737 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1737);
                $tmp1736 = $tmp1737;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1738, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1741 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1740 = $tmp1741;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1735, result1708, result1708->position, NULL, $tmp1736, $tmp1738, &$s1739, $tmp1740, NULL);
                $tmp1734 = $tmp1735;
                $tmp1733 = $tmp1734;
                data1732 = $tmp1733;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1733));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                panda$collections$Array$add$panda$collections$Array$T(result1708->fields, ((panda$core$Object*) data1732));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1708->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1732));
            }
            $tmp1721 = -1;
            goto $l1719;
            $l1719:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1732));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1722));
            rawValue1722 = NULL;
            data1732 = NULL;
            switch ($tmp1721) {
                case -1: goto $l1742;
            }
            $l1742:;
        }
        }
        {
            int $tmp1745;
            {
                ITable* $tmp1749 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1749 = $tmp1749->next;
                }
                $fn1751 $tmp1750 = $tmp1749->methods[0];
                panda$collections$Iterator* $tmp1752 = $tmp1750(((panda$collections$Iterable*) p_members));
                $tmp1748 = $tmp1752;
                $tmp1747 = $tmp1748;
                Iter$545$91746 = $tmp1747;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                $l1753:;
                ITable* $tmp1756 = Iter$545$91746->$class->itable;
                while ($tmp1756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1756 = $tmp1756->next;
                }
                $fn1758 $tmp1757 = $tmp1756->methods[0];
                panda$core$Bit $tmp1759 = $tmp1757(Iter$545$91746);
                panda$core$Bit $tmp1760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1759);
                bool $tmp1755 = $tmp1760.value;
                if (!$tmp1755) goto $l1754;
                {
                    int $tmp1763;
                    {
                        ITable* $tmp1767 = Iter$545$91746->$class->itable;
                        while ($tmp1767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1767 = $tmp1767->next;
                        }
                        $fn1769 $tmp1768 = $tmp1767->methods[1];
                        panda$core$Object* $tmp1770 = $tmp1768(Iter$545$91746);
                        $tmp1766 = $tmp1770;
                        $tmp1765 = ((org$pandalanguage$pandac$ASTNode*) $tmp1766);
                        m1764 = $tmp1765;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
                        panda$core$Panda$unref$panda$core$Object($tmp1766);
                        int $tmp1773;
                        {
                            $tmp1775 = m1764;
                            $match$546_131774 = $tmp1775;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1775));
                            panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$546_131774->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1776.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1778 = ((org$pandalanguage$pandac$Position*) ((char*) $match$546_131774->$data + 0));
                                mPosition1777 = *$tmp1778;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1780 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$546_131774->$data + 32));
                                methodKind1779 = *$tmp1780;
                                panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1779.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1781.value) {
                                {
                                    {
                                        $match$549_251782 = p_kind;
                                        panda$core$Bit $tmp1783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251782.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1783.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251782.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1784.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1777, &$s1785);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251782.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1786.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1777, &$s1787);
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
                        $tmp1773 = -1;
                        goto $l1771;
                        $l1771:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
                        switch ($tmp1773) {
                            case -1: goto $l1788;
                        }
                        $l1788:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1708, m1764);
                    }
                    $tmp1763 = -1;
                    goto $l1761;
                    $l1761:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1764));
                    m1764 = NULL;
                    switch ($tmp1763) {
                        case -1: goto $l1789;
                    }
                    $l1789:;
                }
                goto $l1753;
                $l1754:;
            }
            $tmp1745 = -1;
            goto $l1743;
            $l1743:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$545$91746));
            Iter$545$91746 = NULL;
            switch ($tmp1745) {
                case -1: goto $l1790;
            }
            $l1790:;
        }
        foundInit1791 = ((panda$core$Bit) { false });
        foundCleanup1792 = ((panda$core$Bit) { false });
        {
            int $tmp1795;
            {
                ITable* $tmp1799 = ((panda$collections$Iterable*) result1708->methods)->$class->itable;
                while ($tmp1799->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1799 = $tmp1799->next;
                }
                $fn1801 $tmp1800 = $tmp1799->methods[0];
                panda$collections$Iterator* $tmp1802 = $tmp1800(((panda$collections$Iterable*) result1708->methods));
                $tmp1798 = $tmp1802;
                $tmp1797 = $tmp1798;
                Iter$564$91796 = $tmp1797;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1797));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
                $l1803:;
                ITable* $tmp1806 = Iter$564$91796->$class->itable;
                while ($tmp1806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1806 = $tmp1806->next;
                }
                $fn1808 $tmp1807 = $tmp1806->methods[0];
                panda$core$Bit $tmp1809 = $tmp1807(Iter$564$91796);
                panda$core$Bit $tmp1810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1809);
                bool $tmp1805 = $tmp1810.value;
                if (!$tmp1805) goto $l1804;
                {
                    int $tmp1813;
                    {
                        ITable* $tmp1817 = Iter$564$91796->$class->itable;
                        while ($tmp1817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1817 = $tmp1817->next;
                        }
                        $fn1819 $tmp1818 = $tmp1817->methods[1];
                        panda$core$Object* $tmp1820 = $tmp1818(Iter$564$91796);
                        $tmp1816 = $tmp1820;
                        $tmp1815 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1816);
                        m1814 = $tmp1815;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
                        panda$core$Panda$unref$panda$core$Object($tmp1816);
                        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1814->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1821.value) {
                        {
                            foundInit1791 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1824 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1814)->name, &$s1823);
                        bool $tmp1822 = $tmp1824.value;
                        if (!$tmp1822) goto $l1825;
                        panda$core$Int64 $tmp1826 = panda$collections$Array$get_count$R$panda$core$Int64(m1814->parameters);
                        panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1826, ((panda$core$Int64) { 0 }));
                        $tmp1822 = $tmp1827.value;
                        $l1825:;
                        panda$core$Bit $tmp1828 = { $tmp1822 };
                        if ($tmp1828.value) {
                        {
                            foundCleanup1792 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1829.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1830);
                            }
                            }
                        }
                        }
                    }
                    $tmp1813 = -1;
                    goto $l1811;
                    $l1811:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1814));
                    m1814 = NULL;
                    switch ($tmp1813) {
                        case -1: goto $l1831;
                    }
                    $l1831:;
                }
                goto $l1803;
                $l1804:;
            }
            $tmp1795 = -1;
            goto $l1793;
            $l1793:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$564$91796));
            Iter$564$91796 = NULL;
            switch ($tmp1795) {
                case -1: goto $l1832;
            }
            $l1832:;
        }
        panda$core$Bit $tmp1835 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1791);
        bool $tmp1834 = $tmp1835.value;
        if (!$tmp1834) goto $l1836;
        panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1834 = $tmp1837.value;
        $l1836:;
        panda$core$Bit $tmp1838 = { $tmp1834 };
        bool $tmp1833 = $tmp1838.value;
        if (!$tmp1833) goto $l1839;
        panda$core$Bit $tmp1841 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1708->name, &$s1840);
        $tmp1833 = $tmp1841.value;
        $l1839:;
        panda$core$Bit $tmp1842 = { $tmp1833 };
        if ($tmp1842.value) {
        {
            int $tmp1845;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1849 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1851 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1851, ((panda$core$Int64) { 8192 }));
                $tmp1850 = $tmp1851;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1852, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1855 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1855);
                $tmp1854 = $tmp1855;
                panda$collections$Array* $tmp1857 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1857);
                $tmp1856 = $tmp1857;
                org$pandalanguage$pandac$Type* $tmp1859 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1858 = $tmp1859;
                panda$collections$ImmutableArray* $tmp1861 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1861);
                $tmp1860 = $tmp1861;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1849, result1708, p_position, NULL, $tmp1850, $tmp1852, &$s1853, $tmp1854, $tmp1856, $tmp1858, $tmp1860);
                $tmp1848 = $tmp1849;
                $tmp1847 = $tmp1848;
                defaultInit1846 = $tmp1847;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1847));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1848));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
                panda$collections$Array$add$panda$collections$Array$T(result1708->methods, ((panda$core$Object*) defaultInit1846));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1708->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1846));
            }
            $tmp1845 = -1;
            goto $l1843;
            $l1843:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1846));
            defaultInit1846 = NULL;
            switch ($tmp1845) {
                case -1: goto $l1862;
            }
            $l1862:;
        }
        }
        panda$core$Bit $tmp1865 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1792);
        bool $tmp1864 = $tmp1865.value;
        if (!$tmp1864) goto $l1866;
        panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1867 = $tmp1868.value;
        if ($tmp1867) goto $l1869;
        panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1867 = $tmp1870.value;
        $l1869:;
        panda$core$Bit $tmp1871 = { $tmp1867 };
        $tmp1864 = $tmp1871.value;
        $l1866:;
        panda$core$Bit $tmp1872 = { $tmp1864 };
        bool $tmp1863 = $tmp1872.value;
        if (!$tmp1863) goto $l1873;
        panda$core$Bit $tmp1875 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1708->name, &$s1874);
        $tmp1863 = $tmp1875.value;
        $l1873:;
        panda$core$Bit $tmp1876 = { $tmp1863 };
        if ($tmp1876.value) {
        {
            int $tmp1879;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1883 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1885 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1886 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1885, $tmp1886);
                $tmp1884 = $tmp1885;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1887, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1890 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1890);
                $tmp1889 = $tmp1890;
                panda$collections$Array* $tmp1892 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1892);
                $tmp1891 = $tmp1892;
                org$pandalanguage$pandac$Type* $tmp1894 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1893 = $tmp1894;
                panda$collections$ImmutableArray* $tmp1896 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1896);
                $tmp1895 = $tmp1896;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1883, result1708, p_position, NULL, $tmp1884, $tmp1887, &$s1888, $tmp1889, $tmp1891, $tmp1893, $tmp1895);
                $tmp1882 = $tmp1883;
                $tmp1881 = $tmp1882;
                defaultCleanup1880 = $tmp1881;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1895));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
                panda$collections$Array$add$panda$collections$Array$T(result1708->methods, ((panda$core$Object*) defaultCleanup1880));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1708->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1880));
            }
            $tmp1879 = -1;
            goto $l1877;
            $l1877:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1880));
            defaultCleanup1880 = NULL;
            switch ($tmp1879) {
                case -1: goto $l1897;
            }
            $l1897:;
        }
        }
        panda$core$Bit $tmp1898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1898.value) {
        {
            haveFields1899 = ((panda$core$Bit) { false });
            {
                int $tmp1902;
                {
                    ITable* $tmp1906 = ((panda$collections$Iterable*) result1708->choiceEntries)->$class->itable;
                    while ($tmp1906->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1906 = $tmp1906->next;
                    }
                    $fn1908 $tmp1907 = $tmp1906->methods[0];
                    panda$collections$Iterator* $tmp1909 = $tmp1907(((panda$collections$Iterable*) result1708->choiceEntries));
                    $tmp1905 = $tmp1909;
                    $tmp1904 = $tmp1905;
                    Iter$594$131903 = $tmp1904;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1904));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1905));
                    $l1910:;
                    ITable* $tmp1913 = Iter$594$131903->$class->itable;
                    while ($tmp1913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1913 = $tmp1913->next;
                    }
                    $fn1915 $tmp1914 = $tmp1913->methods[0];
                    panda$core$Bit $tmp1916 = $tmp1914(Iter$594$131903);
                    panda$core$Bit $tmp1917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1916);
                    bool $tmp1912 = $tmp1917.value;
                    if (!$tmp1912) goto $l1911;
                    {
                        int $tmp1920;
                        {
                            ITable* $tmp1924 = Iter$594$131903->$class->itable;
                            while ($tmp1924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1924 = $tmp1924->next;
                            }
                            $fn1926 $tmp1925 = $tmp1924->methods[1];
                            panda$core$Object* $tmp1927 = $tmp1925(Iter$594$131903);
                            $tmp1923 = $tmp1927;
                            $tmp1922 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1923);
                            e1921 = $tmp1922;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
                            panda$core$Panda$unref$panda$core$Object($tmp1923);
                            panda$core$Int64 $tmp1928 = panda$collections$Array$get_count$R$panda$core$Int64(e1921->fields);
                            panda$core$Bit $tmp1929 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1928, ((panda$core$Int64) { 0 }));
                            if ($tmp1929.value) {
                            {
                                haveFields1899 = ((panda$core$Bit) { true });
                                $tmp1920 = 0;
                                goto $l1918;
                                $l1930:;
                                goto $l1911;
                            }
                            }
                        }
                        $tmp1920 = -1;
                        goto $l1918;
                        $l1918:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1921));
                        e1921 = NULL;
                        switch ($tmp1920) {
                            case 0: goto $l1930;
                            case -1: goto $l1931;
                        }
                        $l1931:;
                    }
                    goto $l1910;
                    $l1911:;
                }
                $tmp1902 = -1;
                goto $l1900;
                $l1900:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$594$131903));
                Iter$594$131903 = NULL;
                switch ($tmp1902) {
                    case -1: goto $l1932;
                }
                $l1932:;
            }
            panda$core$Bit $tmp1933 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1899);
            if ($tmp1933.value) {
            {
                {
                    $tmp1934 = result1708->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1937 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1936 = $tmp1937;
                    $tmp1935 = $tmp1936;
                    result1708->rawSuper = $tmp1935;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1941 = (($fn1940) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1939 = $tmp1941;
        panda$core$Object* $tmp1942 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1939)->currentClass);
        $tmp1938 = $tmp1942;
        panda$core$Panda$unref$panda$core$Object($tmp1938);
        panda$core$Panda$unref$panda$core$Object($tmp1939);
        $tmp1944 = result1708;
        $returnValue1943 = $tmp1944;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
        $tmp1558 = 0;
        goto $l1556;
        $l1945:;
        return $returnValue1943;
    }
    $l1556:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1670));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1599));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1595));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1576));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1559));
    annotations1595 = NULL;
    parameters1599 = NULL;
    supertypes1670 = NULL;
    result1708 = NULL;
    switch ($tmp1558) {
        case 0: goto $l1945;
    }
    $l1947:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$610$91951 = NULL;
    panda$collections$Iterator* $tmp1952;
    panda$collections$Iterator* $tmp1953;
    org$pandalanguage$pandac$ClassDecl* inner1969 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1970;
    panda$core$Object* $tmp1971;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1950;
        {
            ITable* $tmp1954 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1954->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1954 = $tmp1954->next;
            }
            $fn1956 $tmp1955 = $tmp1954->methods[0];
            panda$collections$Iterator* $tmp1957 = $tmp1955(((panda$collections$Iterable*) p_cl->classes));
            $tmp1953 = $tmp1957;
            $tmp1952 = $tmp1953;
            Iter$610$91951 = $tmp1952;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
            $l1958:;
            ITable* $tmp1961 = Iter$610$91951->$class->itable;
            while ($tmp1961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1961 = $tmp1961->next;
            }
            $fn1963 $tmp1962 = $tmp1961->methods[0];
            panda$core$Bit $tmp1964 = $tmp1962(Iter$610$91951);
            panda$core$Bit $tmp1965 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1964);
            bool $tmp1960 = $tmp1965.value;
            if (!$tmp1960) goto $l1959;
            {
                int $tmp1968;
                {
                    ITable* $tmp1972 = Iter$610$91951->$class->itable;
                    while ($tmp1972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1972 = $tmp1972->next;
                    }
                    $fn1974 $tmp1973 = $tmp1972->methods[1];
                    panda$core$Object* $tmp1975 = $tmp1973(Iter$610$91951);
                    $tmp1971 = $tmp1975;
                    $tmp1970 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1971);
                    inner1969 = $tmp1970;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
                    panda$core$Panda$unref$panda$core$Object($tmp1971);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1969, p_arr);
                }
                $tmp1968 = -1;
                goto $l1966;
                $l1966:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1969));
                inner1969 = NULL;
                switch ($tmp1968) {
                    case -1: goto $l1976;
                }
                $l1976:;
            }
            goto $l1958;
            $l1959:;
        }
        $tmp1950 = -1;
        goto $l1948;
        $l1948:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$610$91951));
        Iter$610$91951 = NULL;
        switch ($tmp1950) {
            case -1: goto $l1977;
        }
        $l1977:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp1981;
    org$pandalanguage$pandac$ClassDecl* $tmp1982;
    org$pandalanguage$pandac$ClassDecl* $tmp1983;
    org$pandalanguage$pandac$Position $tmp1985;
    org$pandalanguage$pandac$Annotations* $tmp1986;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1988;
    panda$collections$Array* $tmp1990;
    panda$collections$Array* $tmp1992;
    panda$core$Object* $tmp1994;
    org$pandalanguage$pandac$MethodDecl* defaultInit2000 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2001;
    org$pandalanguage$pandac$MethodDecl* $tmp2002;
    org$pandalanguage$pandac$Position $tmp2004;
    org$pandalanguage$pandac$Annotations* $tmp2005;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2007;
    panda$collections$Array* $tmp2009;
    panda$collections$Array* $tmp2011;
    org$pandalanguage$pandac$Type* $tmp2013;
    panda$collections$ImmutableArray* $tmp2015;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2017 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2018;
    org$pandalanguage$pandac$MethodDecl* $tmp2019;
    org$pandalanguage$pandac$Position $tmp2021;
    org$pandalanguage$pandac$Annotations* $tmp2022;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2025;
    panda$collections$Array* $tmp2027;
    panda$collections$Array* $tmp2029;
    org$pandalanguage$pandac$Type* $tmp2031;
    panda$collections$ImmutableArray* $tmp2033;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp1980;
        {
            {
                $tmp1981 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp1984 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp1985);
                org$pandalanguage$pandac$Annotations* $tmp1987 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1987);
                $tmp1986 = $tmp1987;
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1988, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1991 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1991);
                $tmp1990 = $tmp1991;
                panda$collections$Array* $tmp1993 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1993);
                $tmp1992 = $tmp1993;
                panda$core$Object* $tmp1996 = (($fn1995) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1994 = $tmp1996;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1984, p_source, $tmp1985, p_aliases, NULL, $tmp1986, $tmp1988, &$s1989, ((panda$collections$ListView*) $tmp1990), $tmp1992, ((org$pandalanguage$pandac$Compiler*) $tmp1994)->root);
                $tmp1983 = $tmp1984;
                $tmp1982 = $tmp1983;
                self->bareCodeClass = $tmp1982;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1983));
                panda$core$Panda$unref$panda$core$Object($tmp1994);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1981));
            }
            ITable* $tmp1997 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp1997->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp1997 = $tmp1997->next;
            }
            $fn1999 $tmp1998 = $tmp1997->methods[0];
            $tmp1998(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2003 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2004);
            org$pandalanguage$pandac$Annotations* $tmp2006 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2006, ((panda$core$Int64) { 8192 }));
            $tmp2005 = $tmp2006;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2007, ((panda$core$Int64) { 2 }));
            panda$collections$Array* $tmp2010 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2010);
            $tmp2009 = $tmp2010;
            panda$collections$Array* $tmp2012 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2012);
            $tmp2011 = $tmp2012;
            org$pandalanguage$pandac$Type* $tmp2014 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2013 = $tmp2014;
            panda$collections$ImmutableArray* $tmp2016 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2016);
            $tmp2015 = $tmp2016;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2003, self->bareCodeClass, $tmp2004, NULL, $tmp2005, $tmp2007, &$s2008, $tmp2009, $tmp2011, $tmp2013, $tmp2015);
            $tmp2002 = $tmp2003;
            $tmp2001 = $tmp2002;
            defaultInit2000 = $tmp2001;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2002));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2015));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2000));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2000));
            org$pandalanguage$pandac$MethodDecl* $tmp2020 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2021);
            org$pandalanguage$pandac$Annotations* $tmp2023 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64 $tmp2024 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 32 }), ((panda$core$Int64) { 8192 }));
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2023, $tmp2024);
            $tmp2022 = $tmp2023;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2025, ((panda$core$Int64) { 0 }));
            panda$collections$Array* $tmp2028 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2028);
            $tmp2027 = $tmp2028;
            panda$collections$Array* $tmp2030 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2030);
            $tmp2029 = $tmp2030;
            org$pandalanguage$pandac$Type* $tmp2032 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2031 = $tmp2032;
            panda$collections$ImmutableArray* $tmp2034 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2034);
            $tmp2033 = $tmp2034;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2020, self->bareCodeClass, $tmp2021, NULL, $tmp2022, $tmp2025, &$s2026, $tmp2027, $tmp2029, $tmp2031, $tmp2033);
            $tmp2019 = $tmp2020;
            $tmp2018 = $tmp2019;
            defaultCleanup2017 = $tmp2018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2019));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2033));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2031));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2029));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2017));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2017));
        }
        $tmp1980 = -1;
        goto $l1978;
        $l1978:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2017));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2000));
        defaultInit2000 = NULL;
        defaultCleanup2017 = NULL;
        switch ($tmp1980) {
            case -1: goto $l2035;
        }
        $l2035:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2040;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2036; else goto $l2037;
    $l2037:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2038, (panda$core$Int64) { 638 }, &$s2039);
    abort();
    $l2036:;
    panda$core$Object* $tmp2042 = (($fn2041) self->compiler->$class->vtable[2])(self->compiler);
    $tmp2040 = $tmp2042;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2040), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2040);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2043;
    panda$io$File* $tmp2044;
    org$pandalanguage$pandac$ASTNode* $match$644_92048 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    panda$collections$ImmutableArray* entries2051 = NULL;
    panda$collections$Array* result2056 = NULL;
    panda$collections$Array* $tmp2057;
    panda$collections$Array* $tmp2058;
    panda$core$String* currentPackage2060 = NULL;
    panda$core$String* $tmp2061;
    panda$collections$HashMap* aliases2063 = NULL;
    panda$collections$HashMap* $tmp2064;
    panda$collections$HashMap* $tmp2065;
    panda$collections$Iterator* Iter$649$172070 = NULL;
    panda$collections$Iterator* $tmp2071;
    panda$collections$Iterator* $tmp2072;
    org$pandalanguage$pandac$ASTNode* e2088 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    panda$core$Object* $tmp2090;
    org$pandalanguage$pandac$ASTNode* $match$650_212098 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    panda$core$String* name2101 = NULL;
    panda$core$String* $tmp2103;
    panda$core$String* $tmp2104;
    panda$core$String* fullName2106 = NULL;
    panda$core$String$Index$nullable idx2111;
    panda$core$String* alias2114 = NULL;
    panda$core$String* $tmp2115;
    panda$core$String* $tmp2116;
    panda$core$String* $tmp2117;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2118;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2122;
    org$pandalanguage$pandac$Position position2125;
    org$pandalanguage$pandac$ASTNode* dc2127 = NULL;
    panda$collections$ImmutableArray* annotations2129 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2131;
    panda$core$String* name2133 = NULL;
    panda$collections$ImmutableArray* generics2135 = NULL;
    panda$collections$ImmutableArray* supertypes2137 = NULL;
    panda$collections$ImmutableArray* members2139 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2144 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2145;
    org$pandalanguage$pandac$ClassDecl* $tmp2146;
    org$pandalanguage$pandac$Position position2150;
    org$pandalanguage$pandac$ASTNode* dc2152 = NULL;
    panda$collections$ImmutableArray* annotations2154 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2156;
    panda$core$String* rawName2158 = NULL;
    panda$collections$ImmutableArray* generics2160 = NULL;
    panda$collections$ImmutableArray* parameters2162 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2164 = NULL;
    panda$collections$ImmutableArray* statements2166 = NULL;
    panda$core$String* name2171 = NULL;
    panda$core$String* $tmp2177;
    panda$core$String* $tmp2178;
    panda$collections$Array* mainParameters2180 = NULL;
    panda$collections$Array* $tmp2181;
    panda$collections$Array* $tmp2182;
    panda$collections$Array* mainStatements2184 = NULL;
    panda$collections$Array* $tmp2185;
    panda$collections$Array* $tmp2186;
    panda$collections$Array* mainArguments2188 = NULL;
    panda$collections$Array* $tmp2189;
    panda$collections$Array* $tmp2190;
    panda$collections$Iterator* Iter$679$332195 = NULL;
    panda$collections$Iterator* $tmp2196;
    panda$collections$Iterator* $tmp2197;
    org$pandalanguage$pandac$ASTNode* p2213 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    panda$core$Object* $tmp2215;
    org$pandalanguage$pandac$ASTNode* $match$680_372223 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    org$pandalanguage$pandac$Position position2226;
    panda$core$String* name2228 = NULL;
    org$pandalanguage$pandac$ASTNode* type2230 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2232;
    org$pandalanguage$pandac$Type* $tmp2234;
    org$pandalanguage$pandac$ASTNode* $tmp2236;
    org$pandalanguage$pandac$ASTNode* bareConstruct2244 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$ASTNode* $tmp2246;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    panda$collections$ImmutableArray* $tmp2251;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    panda$collections$ImmutableArray* $tmp2257;
    org$pandalanguage$pandac$Type* returnType2259 = NULL;
    org$pandalanguage$pandac$Type* $tmp2260;
    org$pandalanguage$pandac$Type* $tmp2261;
    org$pandalanguage$pandac$Type* $tmp2262;
    org$pandalanguage$pandac$Type* $tmp2264;
    org$pandalanguage$pandac$Type* $tmp2265;
    org$pandalanguage$pandac$Type* $tmp2266;
    org$pandalanguage$pandac$MethodDecl* bareMain2268 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2269;
    org$pandalanguage$pandac$MethodDecl* $tmp2270;
    org$pandalanguage$pandac$Position $tmp2272;
    org$pandalanguage$pandac$Annotations* $tmp2273;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2275;
    panda$collections$Array* $tmp2277;
    panda$collections$ImmutableArray* $tmp2279;
    panda$core$String* $tmp2282;
    panda$core$String* $tmp2283;
    panda$core$Object* $tmp2284;
    org$pandalanguage$pandac$MethodDecl* m2287 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2288;
    org$pandalanguage$pandac$MethodDecl* $tmp2289;
    panda$core$Object* $tmp2295;
    org$pandalanguage$pandac$Position position2300;
    org$pandalanguage$pandac$ASTNode* dc2302 = NULL;
    panda$collections$ImmutableArray* annotations2304 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2306 = NULL;
    panda$core$Int64 old2308;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2310;
    org$pandalanguage$pandac$FieldDecl* f2328 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2329;
    panda$core$Object* $tmp2330;
    panda$core$String* $tmp2348;
    panda$core$String* $tmp2349;
    panda$core$String* $tmp2350;
    panda$core$String* $tmp2351;
    panda$core$String* $tmp2352;
    panda$core$String* $tmp2353;
    panda$core$Object* $tmp2358;
    panda$core$Object* $tmp2363;
    panda$io$File* $tmp2373;
    panda$io$File* $tmp2374;
    panda$collections$ListView* $returnValue2375;
    panda$collections$ListView* $tmp2376;
    {
        $tmp2043 = self->source;
        $tmp2044 = p_source;
        self->source = $tmp2044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2043));
    }
    int $tmp2047;
    {
        $tmp2049 = p_file;
        $match$644_92048 = $tmp2049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2049));
        panda$core$Bit $tmp2050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_92048->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2050.value) {
        {
            panda$collections$ImmutableArray** $tmp2052 = ((panda$collections$ImmutableArray**) ((char*) $match$644_92048->$data + 0));
            entries2051 = *$tmp2052;
            int $tmp2055;
            {
                panda$collections$Array* $tmp2059 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2059);
                $tmp2058 = $tmp2059;
                $tmp2057 = $tmp2058;
                result2056 = $tmp2057;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                $tmp2061 = &$s2062;
                currentPackage2060 = $tmp2061;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2061));
                panda$collections$HashMap* $tmp2066 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2066);
                $tmp2065 = $tmp2066;
                $tmp2064 = $tmp2065;
                aliases2063 = $tmp2064;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
                {
                    int $tmp2069;
                    {
                        ITable* $tmp2073 = ((panda$collections$Iterable*) entries2051)->$class->itable;
                        while ($tmp2073->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2073 = $tmp2073->next;
                        }
                        $fn2075 $tmp2074 = $tmp2073->methods[0];
                        panda$collections$Iterator* $tmp2076 = $tmp2074(((panda$collections$Iterable*) entries2051));
                        $tmp2072 = $tmp2076;
                        $tmp2071 = $tmp2072;
                        Iter$649$172070 = $tmp2071;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2071));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                        $l2077:;
                        ITable* $tmp2080 = Iter$649$172070->$class->itable;
                        while ($tmp2080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2080 = $tmp2080->next;
                        }
                        $fn2082 $tmp2081 = $tmp2080->methods[0];
                        panda$core$Bit $tmp2083 = $tmp2081(Iter$649$172070);
                        panda$core$Bit $tmp2084 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2083);
                        bool $tmp2079 = $tmp2084.value;
                        if (!$tmp2079) goto $l2078;
                        {
                            int $tmp2087;
                            {
                                ITable* $tmp2091 = Iter$649$172070->$class->itable;
                                while ($tmp2091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2091 = $tmp2091->next;
                                }
                                $fn2093 $tmp2092 = $tmp2091->methods[1];
                                panda$core$Object* $tmp2094 = $tmp2092(Iter$649$172070);
                                $tmp2090 = $tmp2094;
                                $tmp2089 = ((org$pandalanguage$pandac$ASTNode*) $tmp2090);
                                e2088 = $tmp2089;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
                                panda$core$Panda$unref$panda$core$Object($tmp2090);
                                int $tmp2097;
                                {
                                    $tmp2099 = e2088;
                                    $match$650_212098 = $tmp2099;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
                                    panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212098->$rawValue, ((panda$core$Int64) { 30 }));
                                    if ($tmp2100.value) {
                                    {
                                        panda$core$String** $tmp2102 = ((panda$core$String**) ((char*) $match$650_212098->$data + 16));
                                        name2101 = *$tmp2102;
                                        {
                                            $tmp2103 = currentPackage2060;
                                            $tmp2104 = name2101;
                                            currentPackage2060 = $tmp2104;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2103));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212098->$rawValue, ((panda$core$Int64) { 46 }));
                                    if ($tmp2105.value) {
                                    {
                                        panda$core$String** $tmp2107 = ((panda$core$String**) ((char*) $match$650_212098->$data + 16));
                                        fullName2106 = *$tmp2107;
                                        int $tmp2110;
                                        {
                                            panda$core$String$Index$nullable $tmp2113 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2106, &$s2112);
                                            idx2111 = $tmp2113;
                                            memset(&alias2114, 0, sizeof(alias2114));
                                            if (((panda$core$Bit) { idx2111.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2115 = alias2114;
                                                    panda$core$String$Index $tmp2119 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2106, ((panda$core$String$Index) idx2111.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2118, ((panda$core$String$Index$nullable) { $tmp2119, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp2120 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2106, $tmp2118);
                                                    $tmp2117 = $tmp2120;
                                                    $tmp2116 = $tmp2117;
                                                    alias2114 = $tmp2116;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2121 = alias2114;
                                                    $tmp2122 = fullName2106;
                                                    alias2114 = $tmp2122;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2122));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2063, ((panda$collections$Key*) alias2114), ((panda$core$Object*) fullName2106));
                                        }
                                        $tmp2110 = -1;
                                        goto $l2108;
                                        $l2108:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2114));
                                        switch ($tmp2110) {
                                            case -1: goto $l2123;
                                        }
                                        $l2123:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212098->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp2124.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212098->$data + 0));
                                        position2125 = *$tmp2126;
                                        org$pandalanguage$pandac$ASTNode** $tmp2128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212098->$data + 16));
                                        dc2127 = *$tmp2128;
                                        panda$collections$ImmutableArray** $tmp2130 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 24));
                                        annotations2129 = *$tmp2130;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2132 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$650_212098->$data + 32));
                                        kind2131 = *$tmp2132;
                                        panda$core$String** $tmp2134 = ((panda$core$String**) ((char*) $match$650_212098->$data + 40));
                                        name2133 = *$tmp2134;
                                        panda$collections$ImmutableArray** $tmp2136 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 48));
                                        generics2135 = *$tmp2136;
                                        panda$collections$ImmutableArray** $tmp2138 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 56));
                                        supertypes2137 = *$tmp2138;
                                        panda$collections$ImmutableArray** $tmp2140 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 64));
                                        members2139 = *$tmp2140;
                                        int $tmp2143;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2147 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2063), currentPackage2060, position2125, dc2127, annotations2129, kind2131, name2133, generics2135, supertypes2137, members2139);
                                            $tmp2146 = $tmp2147;
                                            $tmp2145 = $tmp2146;
                                            cl2144 = $tmp2145;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                                            if (((panda$core$Bit) { cl2144 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2144, result2056);
                                            }
                                            }
                                        }
                                        $tmp2143 = -1;
                                        goto $l2141;
                                        $l2141:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2144));
                                        cl2144 = NULL;
                                        switch ($tmp2143) {
                                            case -1: goto $l2148;
                                        }
                                        $l2148:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212098->$rawValue, ((panda$core$Int64) { 26 }));
                                    if ($tmp2149.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212098->$data + 0));
                                        position2150 = *$tmp2151;
                                        org$pandalanguage$pandac$ASTNode** $tmp2153 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212098->$data + 16));
                                        dc2152 = *$tmp2153;
                                        panda$collections$ImmutableArray** $tmp2155 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 24));
                                        annotations2154 = *$tmp2155;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2157 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$650_212098->$data + 32));
                                        kind2156 = *$tmp2157;
                                        panda$core$String** $tmp2159 = ((panda$core$String**) ((char*) $match$650_212098->$data + 40));
                                        rawName2158 = *$tmp2159;
                                        panda$collections$ImmutableArray** $tmp2161 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 48));
                                        generics2160 = *$tmp2161;
                                        panda$collections$ImmutableArray** $tmp2163 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 56));
                                        parameters2162 = *$tmp2163;
                                        org$pandalanguage$pandac$ASTNode** $tmp2165 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212098->$data + 64));
                                        rawReturnType2164 = *$tmp2165;
                                        panda$collections$ImmutableArray** $tmp2167 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 72));
                                        statements2166 = *$tmp2167;
                                        int $tmp2170;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2063), ((panda$collections$List*) result2056));
                                            memset(&name2171, 0, sizeof(name2171));
                                            panda$core$Bit $tmp2173 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2158, &$s2172);
                                            if ($tmp2173.value) {
                                            {
                                                int $tmp2176;
                                                {
                                                    {
                                                        $tmp2177 = name2171;
                                                        $tmp2178 = &$s2179;
                                                        name2171 = $tmp2178;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
                                                    }
                                                    panda$collections$Array* $tmp2183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2183);
                                                    $tmp2182 = $tmp2183;
                                                    $tmp2181 = $tmp2182;
                                                    mainParameters2180 = $tmp2181;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                                                    panda$collections$Array* $tmp2187 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2187);
                                                    $tmp2186 = $tmp2187;
                                                    $tmp2185 = $tmp2186;
                                                    mainStatements2184 = $tmp2185;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
                                                    panda$collections$Array* $tmp2191 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2191);
                                                    $tmp2190 = $tmp2191;
                                                    $tmp2189 = $tmp2190;
                                                    mainArguments2188 = $tmp2189;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2189));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
                                                    {
                                                        int $tmp2194;
                                                        {
                                                            ITable* $tmp2198 = ((panda$collections$Iterable*) parameters2162)->$class->itable;
                                                            while ($tmp2198->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2198 = $tmp2198->next;
                                                            }
                                                            $fn2200 $tmp2199 = $tmp2198->methods[0];
                                                            panda$collections$Iterator* $tmp2201 = $tmp2199(((panda$collections$Iterable*) parameters2162));
                                                            $tmp2197 = $tmp2201;
                                                            $tmp2196 = $tmp2197;
                                                            Iter$679$332195 = $tmp2196;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
                                                            $l2202:;
                                                            ITable* $tmp2205 = Iter$679$332195->$class->itable;
                                                            while ($tmp2205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2205 = $tmp2205->next;
                                                            }
                                                            $fn2207 $tmp2206 = $tmp2205->methods[0];
                                                            panda$core$Bit $tmp2208 = $tmp2206(Iter$679$332195);
                                                            panda$core$Bit $tmp2209 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2208);
                                                            bool $tmp2204 = $tmp2209.value;
                                                            if (!$tmp2204) goto $l2203;
                                                            {
                                                                int $tmp2212;
                                                                {
                                                                    ITable* $tmp2216 = Iter$679$332195->$class->itable;
                                                                    while ($tmp2216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2216 = $tmp2216->next;
                                                                    }
                                                                    $fn2218 $tmp2217 = $tmp2216->methods[1];
                                                                    panda$core$Object* $tmp2219 = $tmp2217(Iter$679$332195);
                                                                    $tmp2215 = $tmp2219;
                                                                    $tmp2214 = ((org$pandalanguage$pandac$ASTNode*) $tmp2215);
                                                                    p2213 = $tmp2214;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2215);
                                                                    int $tmp2222;
                                                                    {
                                                                        $tmp2224 = p2213;
                                                                        $match$680_372223 = $tmp2224;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
                                                                        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_372223->$rawValue, ((panda$core$Int64) { 31 }));
                                                                        if ($tmp2225.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2227 = ((org$pandalanguage$pandac$Position*) ((char*) $match$680_372223->$data + 0));
                                                                            position2226 = *$tmp2227;
                                                                            panda$core$String** $tmp2229 = ((panda$core$String**) ((char*) $match$680_372223->$data + 16));
                                                                            name2228 = *$tmp2229;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$680_372223->$data + 24));
                                                                            type2230 = *$tmp2231;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2233 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2235 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2230);
                                                                            $tmp2234 = $tmp2235;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2233, name2228, $tmp2234);
                                                                            $tmp2232 = $tmp2233;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2180, ((panda$core$Object*) $tmp2232));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2237 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2237, ((panda$core$Int64) { 20 }), position2226, name2228);
                                                                            $tmp2236 = $tmp2237;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2188, ((panda$core$Object*) $tmp2236));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            if (((panda$core$Bit) { false }).value) goto $l2238; else goto $l2239;
                                                                            $l2239:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2240, (panda$core$Int64) { 686 });
                                                                            abort();
                                                                            $l2238:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2222 = -1;
                                                                    goto $l2220;
                                                                    $l2220:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
                                                                    switch ($tmp2222) {
                                                                        case -1: goto $l2241;
                                                                    }
                                                                    $l2241:;
                                                                }
                                                                $tmp2212 = -1;
                                                                goto $l2210;
                                                                $l2210:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2213));
                                                                p2213 = NULL;
                                                                switch ($tmp2212) {
                                                                    case -1: goto $l2242;
                                                                }
                                                                $l2242:;
                                                            }
                                                            goto $l2202;
                                                            $l2203:;
                                                        }
                                                        $tmp2194 = -1;
                                                        goto $l2192;
                                                        $l2192:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$679$332195));
                                                        Iter$679$332195 = NULL;
                                                        switch ($tmp2194) {
                                                            case -1: goto $l2243;
                                                        }
                                                        $l2243:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2247 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2249 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2249, ((panda$core$Int64) { 20 }), position2150, &$s2250);
                                                    $tmp2248 = $tmp2249;
                                                    panda$collections$ImmutableArray* $tmp2252 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2252);
                                                    $tmp2251 = $tmp2252;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2247, ((panda$core$Int64) { 8 }), position2150, $tmp2248, $tmp2251);
                                                    $tmp2246 = $tmp2247;
                                                    $tmp2245 = $tmp2246;
                                                    bareConstruct2244 = $tmp2245;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2254 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2256 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2256, ((panda$core$Int64) { 15 }), position2150, bareConstruct2244, name2171);
                                                    $tmp2255 = $tmp2256;
                                                    panda$collections$ImmutableArray* $tmp2258 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2188);
                                                    $tmp2257 = $tmp2258;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2254, ((panda$core$Int64) { 8 }), position2150, $tmp2255, $tmp2257);
                                                    $tmp2253 = $tmp2254;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2184, ((panda$core$Object*) $tmp2253));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                                                    memset(&returnType2259, 0, sizeof(returnType2259));
                                                    if (((panda$core$Bit) { rawReturnType2164 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2260 = returnType2259;
                                                            org$pandalanguage$pandac$Type* $tmp2263 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2164);
                                                            $tmp2262 = $tmp2263;
                                                            $tmp2261 = $tmp2262;
                                                            returnType2259 = $tmp2261;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2264 = returnType2259;
                                                            org$pandalanguage$pandac$Type* $tmp2267 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2266 = $tmp2267;
                                                            $tmp2265 = $tmp2266;
                                                            returnType2259 = $tmp2265;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2271 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2272);
                                                    org$pandalanguage$pandac$Annotations* $tmp2274 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2274, ((panda$core$Int64) { 16 }));
                                                    $tmp2273 = $tmp2274;
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2275, ((panda$core$Int64) { 0 }));
                                                    panda$collections$Array* $tmp2278 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2278);
                                                    $tmp2277 = $tmp2278;
                                                    panda$collections$ImmutableArray* $tmp2280 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2184);
                                                    $tmp2279 = $tmp2280;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2271, self->bareCodeClass, $tmp2272, NULL, $tmp2273, $tmp2275, &$s2276, $tmp2277, mainParameters2180, returnType2259, $tmp2279);
                                                    $tmp2270 = $tmp2271;
                                                    $tmp2269 = $tmp2270;
                                                    bareMain2268 = $tmp2269;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2277));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2268));
                                                }
                                                $tmp2176 = -1;
                                                goto $l2174;
                                                $l2174:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2268));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2259));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2244));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2188));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2184));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2180));
                                                mainParameters2180 = NULL;
                                                mainStatements2184 = NULL;
                                                mainArguments2188 = NULL;
                                                bareConstruct2244 = NULL;
                                                bareMain2268 = NULL;
                                                switch ($tmp2176) {
                                                    case -1: goto $l2281;
                                                }
                                                $l2281:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2282 = name2171;
                                                    $tmp2283 = rawName2158;
                                                    name2171 = $tmp2283;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2283));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2282));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2286 = (($fn2285) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2284 = $tmp2286;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2284)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2284);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2290 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2150, dc2152, annotations2154, kind2156, name2171, generics2160, parameters2162, rawReturnType2164, statements2166);
                                            $tmp2289 = $tmp2290;
                                            $tmp2288 = $tmp2289;
                                            m2287 = $tmp2288;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                                            panda$core$Bit $tmp2291 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2287->annotations);
                                            if ($tmp2291.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2287)->position, &$s2292);
                                                panda$core$Int64 $tmp2293 = panda$core$Int64$$BNOT$R$panda$core$Int64(((panda$core$Int64) { 16 }));
                                                panda$core$Int64 $tmp2294 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2287->annotations->flags, $tmp2293);
                                                m2287->annotations->flags = $tmp2294;
                                            }
                                            }
                                            panda$core$Object* $tmp2297 = (($fn2296) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2295 = $tmp2297;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2295)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2295);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2287));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2287));
                                        }
                                        $tmp2170 = -1;
                                        goto $l2168;
                                        $l2168:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2287));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2171));
                                        m2287 = NULL;
                                        switch ($tmp2170) {
                                            case -1: goto $l2298;
                                        }
                                        $l2298:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp2299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212098->$rawValue, ((panda$core$Int64) { 16 }));
                                    if ($tmp2299.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212098->$data + 0));
                                        position2300 = *$tmp2301;
                                        org$pandalanguage$pandac$ASTNode** $tmp2303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212098->$data + 16));
                                        dc2302 = *$tmp2303;
                                        panda$collections$ImmutableArray** $tmp2305 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212098->$data + 24));
                                        annotations2304 = *$tmp2305;
                                        org$pandalanguage$pandac$ASTNode** $tmp2307 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212098->$data + 32));
                                        varDecl2306 = *$tmp2307;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2063), ((panda$collections$List*) result2056));
                                        panda$core$Int64 $tmp2309 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2308 = $tmp2309;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2300, dc2302, annotations2304, varDecl2306);
                                        panda$core$Int64 $tmp2311 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2310, old2308, $tmp2311, ((panda$core$Bit) { false }));
                                        int64_t $tmp2313 = $tmp2310.min.value;
                                        panda$core$Int64 i2312 = { $tmp2313 };
                                        int64_t $tmp2315 = $tmp2310.max.value;
                                        bool $tmp2316 = $tmp2310.inclusive.value;
                                        if ($tmp2316) goto $l2323; else goto $l2324;
                                        $l2323:;
                                        if ($tmp2313 <= $tmp2315) goto $l2317; else goto $l2319;
                                        $l2324:;
                                        if ($tmp2313 < $tmp2315) goto $l2317; else goto $l2319;
                                        $l2317:;
                                        {
                                            int $tmp2327;
                                            {
                                                panda$core$Object* $tmp2331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2312);
                                                $tmp2330 = $tmp2331;
                                                $tmp2329 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2330);
                                                f2328 = $tmp2329;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
                                                panda$core$Panda$unref$panda$core$Object($tmp2330);
                                                panda$core$Bit $tmp2333 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2328->fieldKind.$rawValue, ((panda$core$Int64) { 2 }));
                                                bool $tmp2332 = $tmp2333.value;
                                                if (!$tmp2332) goto $l2334;
                                                panda$core$Bit $tmp2335 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2328->annotations);
                                                $tmp2332 = $tmp2335.value;
                                                $l2334:;
                                                panda$core$Bit $tmp2336 = { $tmp2332 };
                                                if ($tmp2336.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2328)->position, &$s2337);
                                                }
                                                }
                                            }
                                            $tmp2327 = -1;
                                            goto $l2325;
                                            $l2325:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2328));
                                            f2328 = NULL;
                                            switch ($tmp2327) {
                                                case -1: goto $l2338;
                                            }
                                            $l2338:;
                                        }
                                        $l2320:;
                                        int64_t $tmp2340 = $tmp2315 - i2312.value;
                                        if ($tmp2316) goto $l2341; else goto $l2342;
                                        $l2341:;
                                        if ((uint64_t) $tmp2340 >= 1) goto $l2339; else goto $l2319;
                                        $l2342:;
                                        if ((uint64_t) $tmp2340 > 1) goto $l2339; else goto $l2319;
                                        $l2339:;
                                        i2312.value += 1;
                                        goto $l2317;
                                        $l2319:;
                                    }
                                    }
                                    else {
                                    {
                                        if (((panda$core$Bit) { false }).value) goto $l2345; else goto $l2346;
                                        $l2346:;
                                        panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2354, ((panda$core$Object*) e2088));
                                        $tmp2353 = $tmp2355;
                                        panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2356);
                                        $tmp2352 = $tmp2357;
                                        panda$core$Int64$wrapper* $tmp2359;
                                        $tmp2359 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2359->value = e2088->$rawValue;
                                        $tmp2358 = ((panda$core$Object*) $tmp2359);
                                        panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2352, $tmp2358);
                                        $tmp2351 = $tmp2360;
                                        panda$core$String* $tmp2362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, &$s2361);
                                        $tmp2350 = $tmp2362;
                                        org$pandalanguage$pandac$Position $tmp2365 = (($fn2364) e2088->$class->vtable[2])(e2088);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2366;
                                        $tmp2366 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2366->value = $tmp2365;
                                        $tmp2363 = ((panda$core$Object*) $tmp2366);
                                        panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2350, $tmp2363);
                                        $tmp2349 = $tmp2367;
                                        panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2368);
                                        $tmp2348 = $tmp2369;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2347, (panda$core$Int64) { 735 }, $tmp2348);
                                        abort();
                                        $l2345:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2097 = -1;
                                goto $l2095;
                                $l2095:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                                switch ($tmp2097) {
                                    case -1: goto $l2370;
                                }
                                $l2370:;
                            }
                            $tmp2087 = -1;
                            goto $l2085;
                            $l2085:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2088));
                            e2088 = NULL;
                            switch ($tmp2087) {
                                case -1: goto $l2371;
                            }
                            $l2371:;
                        }
                        goto $l2077;
                        $l2078:;
                    }
                    $tmp2069 = -1;
                    goto $l2067;
                    $l2067:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$649$172070));
                    Iter$649$172070 = NULL;
                    switch ($tmp2069) {
                        case -1: goto $l2372;
                    }
                    $l2372:;
                }
                {
                    $tmp2373 = self->source;
                    $tmp2374 = NULL;
                    self->source = $tmp2374;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
                }
                $tmp2376 = ((panda$collections$ListView*) result2056);
                $returnValue2375 = $tmp2376;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2376));
                $tmp2055 = 0;
                goto $l2053;
                $l2377:;
                $tmp2047 = 0;
                goto $l2045;
                $l2378:;
                return $returnValue2375;
            }
            $l2053:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2063));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2060));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2056));
            result2056 = NULL;
            currentPackage2060 = NULL;
            aliases2063 = NULL;
            switch ($tmp2055) {
                case 0: goto $l2377;
            }
            $l2380:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l2381; else goto $l2382;
            $l2382:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2383, (panda$core$Int64) { 741 });
            abort();
            $l2381:;
        }
        }
    }
    $tmp2047 = -1;
    goto $l2045;
    $l2045:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
    switch ($tmp2047) {
        case -1: goto $l2384;
        case 0: goto $l2378;
    }
    $l2384:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2387;
    {
    }
    $tmp2387 = -1;
    goto $l2385;
    $l2385:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2387) {
        case -1: goto $l2388;
    }
    $l2388:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

