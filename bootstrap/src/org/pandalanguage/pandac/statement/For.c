#include "org/pandalanguage/pandac/statement/For.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoContext.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "org/pandalanguage/pandac/lvalue/VariableLValue.h"
#include "panda/collections/HashSet.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$For$class_type org$pandalanguage$pandac$statement$For$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$For$cleanup} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn143)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn153)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn159)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn170)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn178)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn211)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn225)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn252)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn255)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn258)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn286)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn297)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn300)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn303)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn326)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn329)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn349)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn372)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn377)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn382)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn387)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn392)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn410)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn415)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn448)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn453)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn486)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn491)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn494)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn498)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn503)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn513)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn522)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn527)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn530)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn543)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn575)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn580)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn590)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn595)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn623)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn628)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn656)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn661)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn691)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn698)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn703)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn723)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn733)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn739)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn750)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn758)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn791)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn812)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn818)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn831)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn859)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn862)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn875)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn886)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn889)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn902)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn905)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn911)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn930)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn950)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn980)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn983)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn990)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn995)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1000)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1005)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1010)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1072)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1077)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1080)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1085)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1095)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1100)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1123)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1128)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1151)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1156)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1159)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1164)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1174)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1179)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1202)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1207)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1230)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1235)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn1238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1247)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1259)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1268)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1273)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1276)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1289)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1295)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1300)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1310)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1315)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1329)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1334)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1344)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1349)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1377)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1382)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1410)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1415)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1429)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1434)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1444)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1449)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1477)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1482)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1510)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1515)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1540)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1547)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1552)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn1579)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1584)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1592)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1599)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1609)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1613)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1632)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1638)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1660)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1670)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1676)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1693)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1755)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1819)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn2018)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn2023)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn2028)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2038)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn2048)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn2052)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2074)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn2079)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2106)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn2111)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn2119)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn2201)(org$pandalanguage$pandac$lvalue$VariableLValue*, org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn2204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2213)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2224)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2233)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn2238)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn2260)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn2271)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn2289)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn2294)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2303)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2315)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2333)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2357)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2375)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2416)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2425)(org$pandalanguage$pandac$IR$Value*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 38, 405696763803624132, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72\x2e\x73\x69\x67\x6e\x65\x64\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, -6373339689117336932, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72\x2e\x75\x6e\x73\x69\x67\x6e\x65\x64\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, 2298592722432976367, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 85, 1438438597437898972, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 85, 1438438597437898972, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 168, -8836935949835456374, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

panda$core$Bit org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$Type* param2) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
// line 24
org$pandalanguage$pandac$Type$Kind* $tmp2 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3 = *$tmp2;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp4->value = $tmp3;
panda$core$Int64 $tmp5 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp6 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp5);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((panda$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) $tmp4), ((panda$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp12) goto block1; else goto block2;
block1:;
// line 25
org$pandalanguage$pandac$FixedArray** $tmp13 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp14 = *$tmp13;
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp17 = (panda$core$Int64) {25};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block3:;
panda$core$Int64 $tmp20 = (panda$core$Int64) {0};
panda$core$Object* $tmp21 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp14, $tmp20);
panda$core$Bit $tmp22 = org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q($tmp21);
// unreffing REF($31:org.pandalanguage.pandac.FixedArray.T)
return $tmp22;
block2:;
// line 27
panda$core$Bit $tmp23 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(param2);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block6;
block5:;
// line 28
org$pandalanguage$pandac$FixedArray** $tmp25 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp26 = *$tmp25;
panda$core$Bit $tmp27 = panda$core$Bit$init$builtin_bit($tmp26 != NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp29 = (panda$core$Int64) {28};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block7:;
panda$core$Int64 $tmp32 = (panda$core$Int64) {1};
panda$core$Object* $tmp33 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp26, $tmp32);
org$pandalanguage$pandac$Type* $tmp34 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp33));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
org$pandalanguage$pandac$Type* $tmp35 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
*(&local0) = $tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($57:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp33);
// unreffing REF($55:org.pandalanguage.pandac.FixedArray.T)
// line 29
org$pandalanguage$pandac$FixedArray** $tmp36 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp37 = *$tmp36;
panda$core$Bit $tmp38 = panda$core$Bit$init$builtin_bit($tmp37 != NULL);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp40 = (panda$core$Int64) {29};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s41, $tmp40, &$s42);
abort(); // unreachable
block9:;
panda$core$Int64 $tmp43 = (panda$core$Int64) {2};
panda$core$Object* $tmp44 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp37, $tmp43);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp44)));
org$pandalanguage$pandac$Type* $tmp45 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local1) = ((org$pandalanguage$pandac$Type*) $tmp44);
panda$core$Panda$unref$panda$core$Object$Q($tmp44);
// unreffing REF($84:org.pandalanguage.pandac.FixedArray.T)
// line 30
org$pandalanguage$pandac$Type* $tmp46 = *(&local0);
org$pandalanguage$pandac$Type* $tmp47 = *(&local1);
panda$core$Bit $tmp48 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp46, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block11; else goto block12;
block11:;
// line 31
panda$core$Bit $tmp50 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type* $tmp51 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing type2
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing type1
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp50;
block12:;
// line 33
org$pandalanguage$pandac$Type* $tmp53 = *(&local0);
panda$core$Bit $tmp54 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$Type* $tmp56 = *(&local1);
panda$core$String** $tmp57 = &((org$pandalanguage$pandac$Symbol*) $tmp56)->name;
panda$core$String* $tmp58 = *$tmp57;
panda$core$Bit $tmp59 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp58, &$s60);
*(&local3) = $tmp59;
goto block17;
block16:;
*(&local3) = $tmp54;
goto block17;
block17:;
panda$core$Bit $tmp61 = *(&local3);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Type* $tmp63 = *(&local0);
panda$core$String** $tmp64 = &((org$pandalanguage$pandac$Symbol*) $tmp63)->name;
panda$core$String* $tmp65 = *$tmp64;
org$pandalanguage$pandac$Type* $tmp66 = *(&local1);
panda$core$String** $tmp67 = &((org$pandalanguage$pandac$Symbol*) $tmp66)->name;
panda$core$String* $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = panda$core$String$get_length$R$panda$core$Int64(&$s70);
panda$core$Bit $tmp71 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp72 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp69, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp71);
panda$core$String* $tmp73 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp68, $tmp72);
panda$core$Bit $tmp74 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp65, $tmp73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($144:panda.core.String)
*(&local2) = $tmp74;
goto block20;
block19:;
*(&local2) = $tmp61;
goto block20;
block20:;
panda$core$Bit $tmp75 = *(&local2);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block13; else goto block14;
block13:;
// line 35
panda$core$Bit $tmp77 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type* $tmp78 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing type2
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp79 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing type1
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp77;
block14:;
// line 37
panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s81, ((panda$core$Object*) param2));
panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s83);
panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s85);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($173:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($171:panda.core.String)
// line 39
panda$core$Bit $tmp86 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp87 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing type2
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp88 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing type1
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp86;
block6:;
// line 41
panda$core$Bit $tmp89 = panda$core$Bit$init$builtin_bit(true);
return $tmp89;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$statement$For$signed$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 47
org$pandalanguage$pandac$Type* $tmp90 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp91 = org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp92 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp90, $tmp91);
bool $tmp93 = $tmp92.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($2:org.pandalanguage.pandac.Type)
if ($tmp93) goto block2; else goto block3;
block2:;
// line 48
org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($10:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp94;
block3:;
org$pandalanguage$pandac$Type* $tmp95 = org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp96 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp90, $tmp95);
bool $tmp97 = $tmp96.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp97) goto block4; else goto block5;
block4:;
// line 49
org$pandalanguage$pandac$Type* $tmp98 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp98;
block5:;
org$pandalanguage$pandac$Type* $tmp99 = org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp100 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp90, $tmp99);
bool $tmp101 = $tmp100.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
// unreffing REF($38:org.pandalanguage.pandac.Type)
if ($tmp101) goto block6; else goto block7;
block6:;
// line 50
org$pandalanguage$pandac$Type* $tmp102 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($46:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp102;
block7:;
org$pandalanguage$pandac$Type* $tmp103 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp104 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp90, $tmp103);
bool $tmp105 = $tmp104.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp105) goto block8; else goto block9;
block8:;
// line 51
org$pandalanguage$pandac$Type* $tmp106 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($64:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp106;
block9:;
// line 52
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return param0;
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($1:org.pandalanguage.pandac.Type)
panda$core$Bit $tmp107 = panda$core$Bit$init$builtin_bit(false);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp109 = (panda$core$Int64) {46};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s110, $tmp109, &$s111);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 59
org$pandalanguage$pandac$Type* $tmp112 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp113 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp114 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp112, $tmp113);
bool $tmp115 = $tmp114.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($2:org.pandalanguage.pandac.Type)
if ($tmp115) goto block2; else goto block3;
block2:;
// line 60
org$pandalanguage$pandac$Type* $tmp116 = org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($10:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp116;
block3:;
org$pandalanguage$pandac$Type* $tmp117 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp118 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp112, $tmp117);
bool $tmp119 = $tmp118.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp119) goto block4; else goto block5;
block4:;
// line 61
org$pandalanguage$pandac$Type* $tmp120 = org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp120;
block5:;
org$pandalanguage$pandac$Type* $tmp121 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp122 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp112, $tmp121);
bool $tmp123 = $tmp122.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($38:org.pandalanguage.pandac.Type)
if ($tmp123) goto block6; else goto block7;
block6:;
// line 62
org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($46:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp124;
block7:;
org$pandalanguage$pandac$Type* $tmp125 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp126 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp112, $tmp125);
bool $tmp127 = $tmp126.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp127) goto block8; else goto block9;
block8:;
// line 63
org$pandalanguage$pandac$Type* $tmp128 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($64:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp128;
block9:;
// line 64
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return param0;
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($1:org.pandalanguage.pandac.Type)
panda$core$Bit $tmp129 = panda$core$Bit$init$builtin_bit(false);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp131 = (panda$core$Int64) {58};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block10:;
abort(); // unreachable

}
panda$collections$ListView* org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$IR$Value* param0) {

// line 71
panda$collections$Array* $tmp134 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp135 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp134, $tmp135);
org$pandalanguage$pandac$ASTNode* $tmp136 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp137 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp138 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp136, $tmp137, $tmp138, param0);
panda$collections$Array$add$panda$collections$Array$T($tmp134, ((panda$core$Object*) $tmp136));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp134)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($6:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ListView*) $tmp134);

}
void org$pandalanguage$pandac$statement$For$compileSimpleRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$Variable* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$ClassDecl* local4 = NULL;
panda$collections$ListView* local5 = NULL;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$IR$Value* local9 = NULL;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$IR$Block$ID local11;
org$pandalanguage$pandac$IR$Block$ID local12;
org$pandalanguage$pandac$IR$Block$ID local13;
org$pandalanguage$pandac$IR$Block$ID local14;
org$pandalanguage$pandac$IR$Block$ID local15;
org$pandalanguage$pandac$Compiler$AutoContext* local16 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local17 = NULL;
org$pandalanguage$pandac$IR$Value* local18 = NULL;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
org$pandalanguage$pandac$IR$Block$ID local21;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
org$pandalanguage$pandac$IR$Value* local23 = NULL;
org$pandalanguage$pandac$IR$Block$ID local24;
org$pandalanguage$pandac$IR$Block$ID local25;
org$pandalanguage$pandac$IR$Value* local26 = NULL;
org$pandalanguage$pandac$IR$Value* local27 = NULL;
org$pandalanguage$pandac$IR$Value* local28 = NULL;
// line 78
org$pandalanguage$pandac$IR** $tmp139 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp140 = *$tmp139;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
org$pandalanguage$pandac$IR* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
*(&local0) = $tmp140;
// line 79
$fn143 $tmp142 = ($fn143) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp144 = $tmp142(param4);
org$pandalanguage$pandac$Type$Kind* $tmp145 = &$tmp144->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp146 = *$tmp145;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp147;
$tmp147 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp147->value = $tmp146;
panda$core$Int64 $tmp148 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp149 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp148);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp150;
$tmp150 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp150->value = $tmp149;
ITable* $tmp151 = ((panda$core$Equatable*) $tmp147)->$class->itable;
while ($tmp151->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
panda$core$Bit $tmp154 = $tmp152(((panda$core$Equatable*) $tmp147), ((panda$core$Equatable*) $tmp150));
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s157, $tmp156);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp150)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp147)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 80
$fn159 $tmp158 = ($fn159) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp160 = $tmp158(param4);
org$pandalanguage$pandac$FixedArray** $tmp161 = &$tmp160->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp162 = *$tmp161;
panda$core$Bit $tmp163 = panda$core$Bit$init$builtin_bit($tmp162 != NULL);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {80};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s166, $tmp165, &$s167);
abort(); // unreachable
block3:;
ITable* $tmp168 = ((panda$collections$CollectionView*) $tmp162)->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
panda$core$Int64 $tmp171 = $tmp169(((panda$collections$CollectionView*) $tmp162));
panda$core$Int64 $tmp172 = (panda$core$Int64) {2};
panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp171, $tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp175 = (panda$core$Int64) {80};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s176, $tmp175);
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing REF($38:org.pandalanguage.pandac.Type)
// line 81
$fn178 $tmp177 = ($fn178) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp179 = $tmp177(param4);
org$pandalanguage$pandac$FixedArray** $tmp180 = &$tmp179->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp181 = *$tmp180;
panda$core$Bit $tmp182 = panda$core$Bit$init$builtin_bit($tmp181 != NULL);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp184 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block7:;
panda$core$Int64 $tmp187 = (panda$core$Int64) {0};
panda$core$Object* $tmp188 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp181, $tmp187);
panda$core$String** $tmp189 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp188))->name;
panda$core$String* $tmp190 = *$tmp189;
panda$core$Bit $tmp191 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp190, &$s192);
bool $tmp193 = $tmp191.value;
if ($tmp193) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp194 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s195, $tmp194);
abort(); // unreachable
block9:;
panda$core$Panda$unref$panda$core$Object$Q($tmp188);
// unreffing REF($76:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($63:org.pandalanguage.pandac.Type)
// line 82
// line 83
org$pandalanguage$pandac$Variable$Storage** $tmp196 = &param3->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp197 = *$tmp196;
panda$core$Int64* $tmp198 = &$tmp197->$rawValue;
panda$core$Int64 $tmp199 = *$tmp198;
panda$core$Int64 $tmp200 = (panda$core$Int64) {0};
panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp199, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp203 = (panda$core$Int64*) ($tmp197->$data + 0);
panda$core$Int64 $tmp204 = *$tmp203;
*(&local2) = $tmp204;
// line 85
panda$core$Int64 $tmp205 = *(&local2);
*(&local1) = $tmp205;
goto block11;
block13:;
// line 88
panda$core$Bit $tmp206 = panda$core$Bit$init$builtin_bit(false);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {88};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s209, $tmp208);
abort(); // unreachable
block14:;
goto block11;
block11:;
// line 91
$fn211 $tmp210 = ($fn211) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp212 = $tmp210(param4);
org$pandalanguage$pandac$FixedArray** $tmp213 = &$tmp212->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp214 = *$tmp213;
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit($tmp214 != NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp217 = (panda$core$Int64) {91};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block16:;
panda$core$Int64 $tmp220 = (panda$core$Int64) {1};
panda$core$Object* $tmp221 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp214, $tmp220);
org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp221));
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
org$pandalanguage$pandac$Type* $tmp223 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
*(&local3) = $tmp222;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($135:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp221);
// unreffing REF($133:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($120:org.pandalanguage.pandac.Type)
// line 92
$fn225 $tmp224 = ($fn225) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp226 = $tmp224(param4);
org$pandalanguage$pandac$ClassDecl* $tmp227 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp226);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
org$pandalanguage$pandac$ClassDecl* $tmp228 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
*(&local4) = $tmp227;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing REF($155:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($154:org.pandalanguage.pandac.Type)
// line 93
org$pandalanguage$pandac$ClassDecl* $tmp229 = *(&local4);
panda$core$Bit $tmp230 = panda$core$Bit$init$builtin_bit($tmp229 == NULL);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block18; else goto block19;
block18:;
// line 94
org$pandalanguage$pandac$ClassDecl* $tmp232 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing rangeClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp233 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp234 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block19:;
// line 96
org$pandalanguage$pandac$ClassDecl* $tmp235 = *(&local4);
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit($tmp235 != NULL);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp238 = (panda$core$Int64) {96};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s239, $tmp238, &$s240);
abort(); // unreachable
block20:;
panda$collections$ListView* $tmp241 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(param0, $tmp235);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
panda$collections$ListView* $tmp242 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local5) = $tmp241;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing REF($202:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
// line 99
org$pandalanguage$pandac$IR$Value* $tmp243 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp244 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp245 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp246 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp247 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp248 = *(&local5);
panda$core$Int64 $tmp249 = (panda$core$Int64) {0};
ITable* $tmp250 = $tmp248->$class->itable;
while ($tmp250->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
panda$core$Object* $tmp253 = $tmp251($tmp248, $tmp249);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp246, $tmp247, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp253));
$fn255 $tmp254 = ($fn255) $tmp245->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp256 = $tmp254($tmp245, $tmp246);
$fn258 $tmp257 = ($fn258) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp259 = $tmp257(param4);
org$pandalanguage$pandac$FixedArray** $tmp260 = &$tmp259->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp261 = *$tmp260;
panda$core$Bit $tmp262 = panda$core$Bit$init$builtin_bit($tmp261 != NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp264 = (panda$core$Int64) {100};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s265, $tmp264, &$s266);
abort(); // unreachable
block22:;
panda$core$Int64 $tmp267 = (panda$core$Int64) {1};
panda$core$Object* $tmp268 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp261, $tmp267);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp243, $tmp244, $tmp256, ((org$pandalanguage$pandac$Type*) $tmp268));
org$pandalanguage$pandac$Type* $tmp269 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp270 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp243, $tmp269);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
org$pandalanguage$pandac$IR$Value* $tmp271 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
*(&local6) = $tmp270;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($247:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp268);
// unreffing REF($242:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($229:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp253);
// unreffing REF($223:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($217:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($214:org.pandalanguage.pandac.IR.Value)
// line 103
org$pandalanguage$pandac$IR* $tmp272 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp273 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp274 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp275 = *(&local6);
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {103};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s279, $tmp278, &$s280);
abort(); // unreachable
block24:;
org$pandalanguage$pandac$IR$Value* $tmp281 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp282 = (panda$core$Int64) {2};
panda$core$Int64 $tmp283 = *(&local1);
org$pandalanguage$pandac$Type* $tmp284 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp281, $tmp282, $tmp283, $tmp284);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp273, $tmp274, param1, $tmp275, $tmp281);
$fn286 $tmp285 = ($fn286) $tmp272->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp287 = $tmp285($tmp272, $tmp273);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($286:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
// unreffing REF($275:org.pandalanguage.pandac.IR.Statement)
// line 106
org$pandalanguage$pandac$IR$Value* $tmp288 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp289 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp290 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp291 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp292 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp293 = *(&local5);
panda$core$Int64 $tmp294 = (panda$core$Int64) {1};
ITable* $tmp295 = $tmp293->$class->itable;
while ($tmp295->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[0];
panda$core$Object* $tmp298 = $tmp296($tmp293, $tmp294);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp291, $tmp292, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp298));
$fn300 $tmp299 = ($fn300) $tmp290->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp301 = $tmp299($tmp290, $tmp291);
$fn303 $tmp302 = ($fn303) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp304 = $tmp302(param4);
org$pandalanguage$pandac$FixedArray** $tmp305 = &$tmp304->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp306 = *$tmp305;
panda$core$Bit $tmp307 = panda$core$Bit$init$builtin_bit($tmp306 != NULL);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp309 = (panda$core$Int64) {107};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s310, $tmp309, &$s311);
abort(); // unreachable
block26:;
panda$core$Int64 $tmp312 = (panda$core$Int64) {1};
panda$core$Object* $tmp313 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp306, $tmp312);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp288, $tmp289, $tmp301, ((org$pandalanguage$pandac$Type*) $tmp313));
org$pandalanguage$pandac$Type* $tmp314 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp315 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp288, $tmp314);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
org$pandalanguage$pandac$IR$Value* $tmp316 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
*(&local7) = $tmp315;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($334:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp313);
// unreffing REF($329:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($316:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp298);
// unreffing REF($310:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($304:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
// unreffing REF($301:org.pandalanguage.pandac.IR.Value)
// line 110
org$pandalanguage$pandac$IR$Value* $tmp317 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp318 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp319 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp320 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp321 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp322 = *(&local5);
panda$core$Int64 $tmp323 = (panda$core$Int64) {2};
ITable* $tmp324 = $tmp322->$class->itable;
while ($tmp324->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[0];
panda$core$Object* $tmp327 = $tmp325($tmp322, $tmp323);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp320, $tmp321, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp327));
$fn329 $tmp328 = ($fn329) $tmp319->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp330 = $tmp328($tmp319, $tmp320);
org$pandalanguage$pandac$Type* $tmp331 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp317, $tmp318, $tmp330, $tmp331);
org$pandalanguage$pandac$IR$Value* $tmp332 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp317);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
org$pandalanguage$pandac$IR$Value* $tmp333 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
*(&local8) = $tmp332;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing REF($377:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($375:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp327);
// unreffing REF($370:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing REF($364:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing REF($361:org.pandalanguage.pandac.IR.Value)
// line 113
org$pandalanguage$pandac$ASTNode* $tmp334 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp335 = (panda$core$Int64) {25};
panda$core$UInt64 $tmp336 = (panda$core$UInt64) {1};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp334, $tmp335, param1, $tmp336);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp337 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp338 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp339 = *(&local3);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp337, $tmp338, $tmp339);
org$pandalanguage$pandac$IR$Value* $tmp340 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp334, $tmp337);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
org$pandalanguage$pandac$IR$Value* $tmp341 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
*(&local9) = $tmp340;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($409:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($405:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($401:org.pandalanguage.pandac.ASTNode)
// line 115
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 116
org$pandalanguage$pandac$IR$Value* $tmp342 = *(&local9);
panda$core$Bit $tmp343 = panda$core$Bit$init$builtin_bit($tmp342 != NULL);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp345 = (panda$core$Int64) {116};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s346, $tmp345, &$s347);
abort(); // unreachable
block30:;
$fn349 $tmp348 = ($fn349) $tmp342->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp350 = $tmp348($tmp342);
org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp352 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp350, $tmp351);
bool $tmp353 = $tmp352.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing REF($440:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// unreffing REF($439:org.pandalanguage.pandac.Type)
if ($tmp353) goto block28; else goto block32;
block28:;
// line 117
org$pandalanguage$pandac$IR$Value* $tmp354 = *(&local9);
org$pandalanguage$pandac$Type* $tmp355 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value* $tmp356 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp354, $tmp355);
panda$core$Bit $tmp357 = panda$core$Bit$init$builtin_bit($tmp356 != NULL);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp359 = (panda$core$Int64) {117};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block33:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
org$pandalanguage$pandac$IR$Value* $tmp362 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
*(&local10) = $tmp356;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($453:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
// unreffing REF($452:org.pandalanguage.pandac.Type)
goto block29;
block32:;
// line 1
// line 120
org$pandalanguage$pandac$IR$Value* $tmp363 = *(&local9);
panda$core$Bit $tmp364 = panda$core$Bit$init$builtin_bit($tmp363 != NULL);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp366 = (panda$core$Int64) {120};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s367, $tmp366, &$s368);
abort(); // unreachable
block35:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
org$pandalanguage$pandac$IR$Value* $tmp369 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
*(&local10) = $tmp363;
goto block29;
block29:;
// line 124
org$pandalanguage$pandac$IR* $tmp370 = *(&local0);
$fn372 $tmp371 = ($fn372) $tmp370->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp373 = $tmp371($tmp370, &$s374);
*(&local11) = $tmp373;
// line 125
org$pandalanguage$pandac$IR* $tmp375 = *(&local0);
$fn377 $tmp376 = ($fn377) $tmp375->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp378 = $tmp376($tmp375, &$s379);
*(&local12) = $tmp378;
// line 126
org$pandalanguage$pandac$IR* $tmp380 = *(&local0);
$fn382 $tmp381 = ($fn382) $tmp380->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp383 = $tmp381($tmp380, &$s384);
*(&local13) = $tmp383;
// line 127
org$pandalanguage$pandac$IR* $tmp385 = *(&local0);
$fn387 $tmp386 = ($fn387) $tmp385->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp388 = $tmp386($tmp385, &$s389);
*(&local14) = $tmp388;
// line 128
org$pandalanguage$pandac$IR* $tmp390 = *(&local0);
$fn392 $tmp391 = ($fn392) $tmp390->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp393 = $tmp391($tmp390, &$s394);
*(&local15) = $tmp393;
// line 129
org$pandalanguage$pandac$Compiler$AutoContext* $tmp395 = (org$pandalanguage$pandac$Compiler$AutoContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp396 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp397 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp398 = *(&local12);
org$pandalanguage$pandac$IR$Block$ID $tmp399 = *(&local13);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp396, $tmp397, param2, $tmp398, $tmp399);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp395, param0, $tmp396);
*(&local16) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp400 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
*(&local16) = $tmp395;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing REF($520:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing REF($519:org.pandalanguage.pandac.Compiler.AutoContext)
// line 1
// line 131
org$pandalanguage$pandac$Compiler$AutoScope* $tmp401 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp401, param0);
*(&local17) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp402 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
*(&local17) = $tmp401;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($541:org.pandalanguage.pandac.Compiler.AutoScope)
// line 132
org$pandalanguage$pandac$IR* $tmp403 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp404 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp405 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp406 = *(&local8);
org$pandalanguage$pandac$IR$Block$ID $tmp407 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp408 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp404, $tmp405, param1, $tmp406, $tmp407, $tmp408);
$fn410 $tmp409 = ($fn410) $tmp403->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp411 = $tmp409($tmp403, $tmp404);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing REF($555:org.pandalanguage.pandac.IR.Statement)
// line 134
org$pandalanguage$pandac$IR* $tmp412 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp413 = *(&local14);
$fn415 $tmp414 = ($fn415) $tmp412->$class->vtable[4];
$tmp414($tmp412, $tmp413);
// line 135
org$pandalanguage$pandac$IR$Value* $tmp416 = *(&local6);
panda$core$Bit $tmp417 = panda$core$Bit$init$builtin_bit($tmp416 != NULL);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp419 = (panda$core$Int64) {136};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s420, $tmp419, &$s421);
abort(); // unreachable
block37:;
org$pandalanguage$pandac$IR$Value* $tmp422 = *(&local7);
panda$core$Bit $tmp423 = panda$core$Bit$init$builtin_bit($tmp422 != NULL);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp425 = (panda$core$Int64) {136};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s426, $tmp425, &$s427);
abort(); // unreachable
block39:;
panda$collections$ListView* $tmp428 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp422);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp429 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp430 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp431 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp429, $tmp430, $tmp431);
org$pandalanguage$pandac$IR$Value* $tmp432 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp416, &$s433, $tmp428, $tmp429);
panda$core$Bit $tmp434 = panda$core$Bit$init$builtin_bit($tmp432 != NULL);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp436 = (panda$core$Int64) {135};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s437, $tmp436, &$s438);
abort(); // unreachable
block41:;
org$pandalanguage$pandac$IR$Value* $tmp439 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp432);
*(&local18) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
org$pandalanguage$pandac$IR$Value* $tmp440 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
*(&local18) = $tmp439;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
// unreffing REF($604:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($595:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
// unreffing REF($593:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing REF($591:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
// unreffing REF($590:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 137
org$pandalanguage$pandac$IR* $tmp441 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp442 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp443 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp444 = *(&local18);
org$pandalanguage$pandac$IR$Block$ID $tmp445 = *(&local11);
org$pandalanguage$pandac$IR$Block$ID $tmp446 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp442, $tmp443, param1, $tmp444, $tmp445, $tmp446);
$fn448 $tmp447 = ($fn448) $tmp441->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp449 = $tmp447($tmp441, $tmp442);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
// unreffing REF($629:org.pandalanguage.pandac.IR.Statement)
// line 139
org$pandalanguage$pandac$IR* $tmp450 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp451 = *(&local15);
$fn453 $tmp452 = ($fn453) $tmp450->$class->vtable[4];
$tmp452($tmp450, $tmp451);
// line 140
org$pandalanguage$pandac$IR$Value* $tmp454 = *(&local6);
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit($tmp454 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp457 = (panda$core$Int64) {141};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block43:;
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local7);
panda$core$Bit $tmp461 = panda$core$Bit$init$builtin_bit($tmp460 != NULL);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp463 = (panda$core$Int64) {141};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s464, $tmp463, &$s465);
abort(); // unreachable
block45:;
panda$collections$ListView* $tmp466 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp460);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp467 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp468 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp469 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp467, $tmp468, $tmp469);
org$pandalanguage$pandac$IR$Value* $tmp470 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp454, &$s471, $tmp466, $tmp467);
panda$core$Bit $tmp472 = panda$core$Bit$init$builtin_bit($tmp470 != NULL);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp474 = (panda$core$Int64) {140};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block47:;
org$pandalanguage$pandac$IR$Value* $tmp477 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp470);
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
org$pandalanguage$pandac$IR$Value* $tmp478 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
*(&local19) = $tmp477;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing REF($678:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
// unreffing REF($669:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing REF($667:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
// unreffing REF($665:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
// unreffing REF($664:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 142
org$pandalanguage$pandac$IR* $tmp479 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp480 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp481 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp482 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp483 = *(&local11);
org$pandalanguage$pandac$IR$Block$ID $tmp484 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp480, $tmp481, param1, $tmp482, $tmp483, $tmp484);
$fn486 $tmp485 = ($fn486) $tmp479->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp487 = $tmp485($tmp479, $tmp480);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($703:org.pandalanguage.pandac.IR.Statement)
// line 144
org$pandalanguage$pandac$IR* $tmp488 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp489 = *(&local11);
$fn491 $tmp490 = ($fn491) $tmp488->$class->vtable[4];
$tmp490($tmp488, $tmp489);
// line 145
ITable* $tmp492 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
panda$collections$Iterator* $tmp495 = $tmp493(((panda$collections$Iterable*) param5));
goto block49;
block49:;
ITable* $tmp496 = $tmp495->$class->itable;
while ($tmp496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp496 = $tmp496->next;
}
$fn498 $tmp497 = $tmp496->methods[0];
panda$core$Bit $tmp499 = $tmp497($tmp495);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block51; else goto block50;
block50:;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp501 = $tmp495->$class->itable;
while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[1];
panda$core$Object* $tmp504 = $tmp502($tmp495);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp504)));
org$pandalanguage$pandac$ASTNode* $tmp505 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) $tmp504);
// line 146
org$pandalanguage$pandac$ASTNode* $tmp506 = *(&local20);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp506);
panda$core$Panda$unref$panda$core$Object$Q($tmp504);
// unreffing REF($734:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp507 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing s
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block49;
block51:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing REF($723:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp508 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// unreffing entryExclusiveTest
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp509 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
// unreffing entryInclusiveTest
*(&local18) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp510 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing scope
*(&local17) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 149
org$pandalanguage$pandac$IR* $tmp511 = *(&local0);
$fn513 $tmp512 = ($fn513) $tmp511->$class->vtable[5];
panda$core$Bit $tmp514 = $tmp512($tmp511);
panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block52; else goto block53;
block52:;
// line 150
org$pandalanguage$pandac$IR* $tmp517 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp518 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp519 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp520 = *(&local13);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp518, $tmp519, param1, $tmp520);
$fn522 $tmp521 = ($fn522) $tmp517->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp523 = $tmp521($tmp517, $tmp518);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing REF($781:org.pandalanguage.pandac.IR.Statement)
goto block53;
block53:;
// line 152
org$pandalanguage$pandac$IR* $tmp524 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp525 = *(&local13);
$fn527 $tmp526 = ($fn527) $tmp524->$class->vtable[4];
$tmp526($tmp524, $tmp525);
// line 153
org$pandalanguage$pandac$IR* $tmp528 = *(&local0);
$fn530 $tmp529 = ($fn530) $tmp528->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp531 = $tmp529($tmp528, &$s532);
*(&local21) = $tmp531;
// line 156
org$pandalanguage$pandac$IR$Value* $tmp533 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp534 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp535 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp536 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp537 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp538 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp539 = (panda$core$Int64) {2};
panda$core$Int64 $tmp540 = *(&local1);
org$pandalanguage$pandac$Type* $tmp541 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp538, $tmp539, $tmp540, $tmp541);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp536, $tmp537, param1, $tmp538);
$fn543 $tmp542 = ($fn543) $tmp535->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp544 = $tmp542($tmp535, $tmp536);
org$pandalanguage$pandac$Type* $tmp545 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp533, $tmp534, $tmp544, $tmp545);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
org$pandalanguage$pandac$IR$Value* $tmp546 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
*(&local22) = $tmp533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing REF($807:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing REF($805:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing REF($802:org.pandalanguage.pandac.IR.Value)
// line 160
org$pandalanguage$pandac$IR$Value* $tmp547 = *(&local7);
panda$core$Bit $tmp548 = panda$core$Bit$init$builtin_bit($tmp547 != NULL);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp550 = (panda$core$Int64) {160};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s551, $tmp550, &$s552);
abort(); // unreachable
block54:;
org$pandalanguage$pandac$IR$Value* $tmp553 = *(&local22);
panda$collections$ListView* $tmp554 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp553);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp555 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp556 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp555, $tmp556);
org$pandalanguage$pandac$IR$Value* $tmp557 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp547, &$s558, $tmp554, $tmp555);
org$pandalanguage$pandac$Type* $tmp559 = *(&local3);
org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp559);
org$pandalanguage$pandac$IR$Value* $tmp561 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp557, $tmp560);
*(&local23) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
org$pandalanguage$pandac$IR$Value* $tmp562 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
*(&local23) = $tmp561;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing REF($851:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($850:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing REF($848:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing REF($845:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
// unreffing REF($844:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 162
org$pandalanguage$pandac$IR$Value* $tmp563 = *(&local23);
panda$core$Bit $tmp564 = panda$core$Bit$init$builtin_bit($tmp563 != NULL);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp566 = (panda$core$Int64) {162};
org$pandalanguage$pandac$IR$Value* $tmp567 = *(&local22);
panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s569, ((panda$core$Object*) $tmp567));
panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s571);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s572, $tmp566, $tmp570);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// unreffing REF($884:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing REF($883:panda.core.String)
abort(); // unreachable
block56:;
// line 164
org$pandalanguage$pandac$IR* $tmp573 = *(&local0);
$fn575 $tmp574 = ($fn575) $tmp573->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp576 = $tmp574($tmp573, &$s577);
*(&local24) = $tmp576;
// line 165
org$pandalanguage$pandac$IR* $tmp578 = *(&local0);
$fn580 $tmp579 = ($fn580) $tmp578->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp581 = $tmp579($tmp578, &$s582);
*(&local25) = $tmp581;
// line 166
org$pandalanguage$pandac$IR* $tmp583 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp584 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp585 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp586 = *(&local8);
org$pandalanguage$pandac$IR$Block$ID $tmp587 = *(&local24);
org$pandalanguage$pandac$IR$Block$ID $tmp588 = *(&local25);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp584, $tmp585, param1, $tmp586, $tmp587, $tmp588);
$fn590 $tmp589 = ($fn590) $tmp583->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp591 = $tmp589($tmp583, $tmp584);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($905:org.pandalanguage.pandac.IR.Statement)
// line 169
org$pandalanguage$pandac$IR* $tmp592 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp593 = *(&local24);
$fn595 $tmp594 = ($fn595) $tmp592->$class->vtable[4];
$tmp594($tmp592, $tmp593);
// line 170
org$pandalanguage$pandac$IR$Value* $tmp596 = *(&local23);
panda$core$Bit $tmp597 = panda$core$Bit$init$builtin_bit($tmp596 != NULL);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp599 = (panda$core$Int64) {171};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block58:;
org$pandalanguage$pandac$IR$Value* $tmp602 = *(&local10);
panda$collections$ListView* $tmp603 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp602);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp604 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp605 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp606 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp604, $tmp605, $tmp606);
org$pandalanguage$pandac$IR$Value* $tmp607 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp596, &$s608, $tmp603, $tmp604);
panda$core$Bit $tmp609 = panda$core$Bit$init$builtin_bit($tmp607 != NULL);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp611 = (panda$core$Int64) {170};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s612, $tmp611, &$s613);
abort(); // unreachable
block60:;
org$pandalanguage$pandac$IR$Value* $tmp614 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp607);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
org$pandalanguage$pandac$IR$Value* $tmp615 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
*(&local26) = $tmp614;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing REF($946:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($937:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($935:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing REF($933:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing REF($932:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 172
org$pandalanguage$pandac$IR* $tmp616 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp617 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp618 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp619 = *(&local26);
org$pandalanguage$pandac$IR$Block$ID $tmp620 = *(&local21);
org$pandalanguage$pandac$IR$Block$ID $tmp621 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp617, $tmp618, param1, $tmp619, $tmp620, $tmp621);
$fn623 $tmp622 = ($fn623) $tmp616->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp624 = $tmp622($tmp616, $tmp617);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing REF($971:org.pandalanguage.pandac.IR.Statement)
// line 175
org$pandalanguage$pandac$IR* $tmp625 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp626 = *(&local25);
$fn628 $tmp627 = ($fn628) $tmp625->$class->vtable[4];
$tmp627($tmp625, $tmp626);
// line 176
org$pandalanguage$pandac$IR$Value* $tmp629 = *(&local23);
panda$core$Bit $tmp630 = panda$core$Bit$init$builtin_bit($tmp629 != NULL);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block62; else goto block63;
block63:;
panda$core$Int64 $tmp632 = (panda$core$Int64) {177};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s633, $tmp632, &$s634);
abort(); // unreachable
block62:;
org$pandalanguage$pandac$IR$Value* $tmp635 = *(&local10);
panda$collections$ListView* $tmp636 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp635);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp637 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp638 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp639 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp637, $tmp638, $tmp639);
org$pandalanguage$pandac$IR$Value* $tmp640 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp629, &$s641, $tmp636, $tmp637);
panda$core$Bit $tmp642 = panda$core$Bit$init$builtin_bit($tmp640 != NULL);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp644 = (panda$core$Int64) {176};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block64:;
org$pandalanguage$pandac$IR$Value* $tmp647 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp640);
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
org$pandalanguage$pandac$IR$Value* $tmp648 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
*(&local27) = $tmp647;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing REF($1012:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
// unreffing REF($1003:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing REF($1001:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
// unreffing REF($999:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
// unreffing REF($998:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 178
org$pandalanguage$pandac$IR* $tmp649 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp650 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp651 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp652 = *(&local27);
org$pandalanguage$pandac$IR$Block$ID $tmp653 = *(&local21);
org$pandalanguage$pandac$IR$Block$ID $tmp654 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp650, $tmp651, param1, $tmp652, $tmp653, $tmp654);
$fn656 $tmp655 = ($fn656) $tmp649->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp657 = $tmp655($tmp649, $tmp650);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
// unreffing REF($1037:org.pandalanguage.pandac.IR.Statement)
// line 180
org$pandalanguage$pandac$IR* $tmp658 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp659 = *(&local21);
$fn661 $tmp660 = ($fn661) $tmp658->$class->vtable[4];
$tmp660($tmp658, $tmp659);
// line 181
org$pandalanguage$pandac$IR$Value* $tmp662 = *(&local22);
org$pandalanguage$pandac$IR$Value* $tmp663 = *(&local9);
panda$core$Bit $tmp664 = panda$core$Bit$init$builtin_bit($tmp663 != NULL);
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block66; else goto block67;
block67:;
panda$core$Int64 $tmp666 = (panda$core$Int64) {181};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s667, $tmp666, &$s668);
abort(); // unreachable
block66:;
panda$collections$ListView* $tmp669 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp663);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp670 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp671 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp670, $tmp671);
org$pandalanguage$pandac$IR$Value* $tmp672 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp662, &$s673, $tmp669, $tmp670);
org$pandalanguage$pandac$Type* $tmp674 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp675 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp672, $tmp674);
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
org$pandalanguage$pandac$IR$Value* $tmp676 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
*(&local28) = $tmp675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing REF($1070:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing REF($1068:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($1065:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($1064:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 183
org$pandalanguage$pandac$IR* $tmp677 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp678 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp679 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp680 = *(&local28);
panda$core$Bit $tmp681 = panda$core$Bit$init$builtin_bit($tmp680 != NULL);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block68; else goto block69;
block69:;
panda$core$Int64 $tmp683 = (panda$core$Int64) {183};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s684, $tmp683, &$s685);
abort(); // unreachable
block68:;
org$pandalanguage$pandac$IR$Value* $tmp686 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp687 = (panda$core$Int64) {2};
panda$core$Int64 $tmp688 = *(&local1);
org$pandalanguage$pandac$Type* $tmp689 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp686, $tmp687, $tmp688, $tmp689);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp678, $tmp679, param1, $tmp680, $tmp686);
$fn691 $tmp690 = ($fn691) $tmp677->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp692 = $tmp690($tmp677, $tmp678);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
// unreffing REF($1103:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing REF($1092:org.pandalanguage.pandac.IR.Statement)
// line 184
org$pandalanguage$pandac$IR* $tmp693 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp694 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp695 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp696 = *(&local11);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp694, $tmp695, param1, $tmp696);
$fn698 $tmp697 = ($fn698) $tmp693->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp699 = $tmp697($tmp693, $tmp694);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($1119:org.pandalanguage.pandac.IR.Statement)
// line 186
org$pandalanguage$pandac$IR* $tmp700 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp701 = *(&local12);
$fn703 $tmp702 = ($fn703) $tmp700->$class->vtable[4];
$tmp702($tmp700, $tmp701);
org$pandalanguage$pandac$IR$Value* $tmp704 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing inc
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp705 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
// unreffing exclusiveTestBit
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp706 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
// unreffing inclusiveTestBit
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp707 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing delta
*(&local23) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp708 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing indexLoad
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp709 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
// unreffing context
*(&local16) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp710 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
// unreffing stepComparison
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp711 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing step
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp712 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing inclusive
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp713 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing end
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp714 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
// unreffing start
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$ListView* $tmp715 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing rangeFields
*(&local5) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp716 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing rangeClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp717 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp718 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileSteppedRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$Variable* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$ClassDecl* local5 = NULL;
panda$collections$ListView* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$IR$Value* local9 = NULL;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$IR$Value* local11 = NULL;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$IR$Value* local13 = NULL;
org$pandalanguage$pandac$IR$Block$ID local14;
org$pandalanguage$pandac$IR$Block$ID local15;
org$pandalanguage$pandac$IR$Block$ID local16;
org$pandalanguage$pandac$IR$Block$ID local17;
org$pandalanguage$pandac$IR$Block$ID local18;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$Compiler$AutoContext* local20 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local21 = NULL;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
org$pandalanguage$pandac$IR$Block$ID local23;
org$pandalanguage$pandac$IR$Block$ID local24;
org$pandalanguage$pandac$IR$Value* local25 = NULL;
org$pandalanguage$pandac$IR$Value* local26 = NULL;
org$pandalanguage$pandac$IR$Block$ID local27;
org$pandalanguage$pandac$IR$Block$ID local28;
org$pandalanguage$pandac$IR$Value* local29 = NULL;
org$pandalanguage$pandac$IR$Value* local30 = NULL;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
org$pandalanguage$pandac$IR$Block$ID local32;
org$pandalanguage$pandac$IR$Value* local33 = NULL;
org$pandalanguage$pandac$IR$Block$ID local34;
org$pandalanguage$pandac$IR$Block$ID local35;
org$pandalanguage$pandac$IR$Value* local36 = NULL;
org$pandalanguage$pandac$IR$Block$ID local37;
org$pandalanguage$pandac$IR$Block$ID local38;
org$pandalanguage$pandac$IR$Value* local39 = NULL;
org$pandalanguage$pandac$IR$Value* local40 = NULL;
org$pandalanguage$pandac$IR$Value* local41 = NULL;
org$pandalanguage$pandac$IR$Block$ID local42;
org$pandalanguage$pandac$IR$Block$ID local43;
org$pandalanguage$pandac$IR$Value* local44 = NULL;
org$pandalanguage$pandac$IR$Value* local45 = NULL;
org$pandalanguage$pandac$IR$Value* local46 = NULL;
// line 210
org$pandalanguage$pandac$IR** $tmp719 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp720 = *$tmp719;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
org$pandalanguage$pandac$IR* $tmp721 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
*(&local0) = $tmp720;
// line 211
$fn723 $tmp722 = ($fn723) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp724 = $tmp722(param4);
org$pandalanguage$pandac$Type$Kind* $tmp725 = &$tmp724->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp726 = *$tmp725;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp727;
$tmp727 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp727->value = $tmp726;
panda$core$Int64 $tmp728 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp729 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp728);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp730;
$tmp730 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp730->value = $tmp729;
ITable* $tmp731 = ((panda$core$Equatable*) $tmp727)->$class->itable;
while ($tmp731->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
panda$core$Bit $tmp734 = $tmp732(((panda$core$Equatable*) $tmp727), ((panda$core$Equatable*) $tmp730));
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp736 = (panda$core$Int64) {211};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s737, $tmp736);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp730)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp727)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 212
$fn739 $tmp738 = ($fn739) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp740 = $tmp738(param4);
org$pandalanguage$pandac$FixedArray** $tmp741 = &$tmp740->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp742 = *$tmp741;
panda$core$Bit $tmp743 = panda$core$Bit$init$builtin_bit($tmp742 != NULL);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp745 = (panda$core$Int64) {212};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s746, $tmp745, &$s747);
abort(); // unreachable
block3:;
ITable* $tmp748 = ((panda$collections$CollectionView*) $tmp742)->$class->itable;
while ($tmp748->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp748 = $tmp748->next;
}
$fn750 $tmp749 = $tmp748->methods[0];
panda$core$Int64 $tmp751 = $tmp749(((panda$collections$CollectionView*) $tmp742));
panda$core$Int64 $tmp752 = (panda$core$Int64) {3};
panda$core$Bit $tmp753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp751, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp755 = (panda$core$Int64) {212};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s756, $tmp755);
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing REF($38:org.pandalanguage.pandac.Type)
// line 213
$fn758 $tmp757 = ($fn758) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp759 = $tmp757(param4);
org$pandalanguage$pandac$FixedArray** $tmp760 = &$tmp759->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp761 = *$tmp760;
panda$core$Bit $tmp762 = panda$core$Bit$init$builtin_bit($tmp761 != NULL);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp764 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s765, $tmp764, &$s766);
abort(); // unreachable
block7:;
panda$core$Int64 $tmp767 = (panda$core$Int64) {0};
panda$core$Object* $tmp768 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp761, $tmp767);
panda$core$String** $tmp769 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp768))->name;
panda$core$String* $tmp770 = *$tmp769;
panda$core$Bit $tmp771 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp770, &$s772);
bool $tmp773 = $tmp771.value;
if ($tmp773) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp774 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s775, $tmp774);
abort(); // unreachable
block9:;
panda$core$Panda$unref$panda$core$Object$Q($tmp768);
// unreffing REF($76:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
// unreffing REF($63:org.pandalanguage.pandac.Type)
// line 214
// line 215
org$pandalanguage$pandac$Variable$Storage** $tmp776 = &param3->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp777 = *$tmp776;
panda$core$Int64* $tmp778 = &$tmp777->$rawValue;
panda$core$Int64 $tmp779 = *$tmp778;
panda$core$Int64 $tmp780 = (panda$core$Int64) {0};
panda$core$Bit $tmp781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp779, $tmp780);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block12; else goto block13;
block12:;
panda$core$Int64* $tmp783 = (panda$core$Int64*) ($tmp777->$data + 0);
panda$core$Int64 $tmp784 = *$tmp783;
*(&local2) = $tmp784;
// line 217
panda$core$Int64 $tmp785 = *(&local2);
*(&local1) = $tmp785;
goto block11;
block13:;
// line 220
panda$core$Bit $tmp786 = panda$core$Bit$init$builtin_bit(false);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp788 = (panda$core$Int64) {220};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s789, $tmp788);
abort(); // unreachable
block14:;
goto block11;
block11:;
// line 223
$fn791 $tmp790 = ($fn791) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp792 = $tmp790(param4);
org$pandalanguage$pandac$FixedArray** $tmp793 = &$tmp792->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp794 = *$tmp793;
panda$core$Bit $tmp795 = panda$core$Bit$init$builtin_bit($tmp794 != NULL);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp797 = (panda$core$Int64) {223};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s798, $tmp797, &$s799);
abort(); // unreachable
block16:;
panda$core$Int64 $tmp800 = (panda$core$Int64) {1};
panda$core$Object* $tmp801 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp794, $tmp800);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp801)));
org$pandalanguage$pandac$Type* $tmp802 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp801);
panda$core$Panda$unref$panda$core$Object$Q($tmp801);
// unreffing REF($133:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
// unreffing REF($120:org.pandalanguage.pandac.Type)
// line 224
org$pandalanguage$pandac$Type* $tmp803 = *(&local3);
org$pandalanguage$pandac$Type$Kind* $tmp804 = &$tmp803->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp805 = *$tmp804;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp806;
$tmp806 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp806->value = $tmp805;
panda$core$Int64 $tmp807 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp808 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp807);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp809;
$tmp809 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp809->value = $tmp808;
ITable* $tmp810 = ((panda$core$Equatable*) $tmp806)->$class->itable;
while ($tmp810->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[1];
panda$core$Bit $tmp813 = $tmp811(((panda$core$Equatable*) $tmp806), ((panda$core$Equatable*) $tmp809));
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp815 = (panda$core$Int64) {224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s816, $tmp815);
abort(); // unreachable
block18:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp809)));
// unreffing REF($156:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp806)));
// unreffing REF($152:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 225
$fn818 $tmp817 = ($fn818) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp819 = $tmp817(param4);
org$pandalanguage$pandac$FixedArray** $tmp820 = &$tmp819->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp821 = *$tmp820;
panda$core$Bit $tmp822 = panda$core$Bit$init$builtin_bit($tmp821 != NULL);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp824 = (panda$core$Int64) {225};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s825, $tmp824, &$s826);
abort(); // unreachable
block20:;
panda$core$Int64 $tmp827 = (panda$core$Int64) {2};
panda$core$Object* $tmp828 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp821, $tmp827);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp828)));
org$pandalanguage$pandac$Type* $tmp829 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
*(&local4) = ((org$pandalanguage$pandac$Type*) $tmp828);
panda$core$Panda$unref$panda$core$Object$Q($tmp828);
// unreffing REF($185:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing REF($172:org.pandalanguage.pandac.Type)
// line 226
$fn831 $tmp830 = ($fn831) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp832 = $tmp830(param4);
org$pandalanguage$pandac$ClassDecl* $tmp833 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp832);
*(&local5) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
org$pandalanguage$pandac$ClassDecl* $tmp834 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
*(&local5) = $tmp833;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
// unreffing REF($203:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
// unreffing REF($202:org.pandalanguage.pandac.Type)
// line 227
org$pandalanguage$pandac$ClassDecl* $tmp835 = *(&local5);
panda$core$Bit $tmp836 = panda$core$Bit$init$builtin_bit($tmp835 == NULL);
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block22; else goto block23;
block22:;
// line 228
org$pandalanguage$pandac$ClassDecl* $tmp838 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing rangeClass
*(&local5) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp839 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing stepType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp840 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp841 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block23:;
// line 230
org$pandalanguage$pandac$ClassDecl* $tmp842 = *(&local5);
panda$core$Bit $tmp843 = panda$core$Bit$init$builtin_bit($tmp842 != NULL);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp845 = (panda$core$Int64) {230};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s846, $tmp845, &$s847);
abort(); // unreachable
block24:;
panda$collections$ListView* $tmp848 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(param0, $tmp842);
*(&local6) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
panda$collections$ListView* $tmp849 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
*(&local6) = $tmp848;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
// unreffing REF($255:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
// line 233
org$pandalanguage$pandac$IR$Value* $tmp850 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp851 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp852 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp853 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp854 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp855 = *(&local6);
panda$core$Int64 $tmp856 = (panda$core$Int64) {0};
ITable* $tmp857 = $tmp855->$class->itable;
while ($tmp857->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp857 = $tmp857->next;
}
$fn859 $tmp858 = $tmp857->methods[0];
panda$core$Object* $tmp860 = $tmp858($tmp855, $tmp856);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp853, $tmp854, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp860));
$fn862 $tmp861 = ($fn862) $tmp852->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp863 = $tmp861($tmp852, $tmp853);
org$pandalanguage$pandac$Type* $tmp864 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp850, $tmp851, $tmp863, $tmp864);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
org$pandalanguage$pandac$IR$Value* $tmp865 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
*(&local7) = $tmp850;
panda$core$Panda$unref$panda$core$Object$Q($tmp860);
// unreffing REF($276:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
// unreffing REF($270:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// unreffing REF($267:org.pandalanguage.pandac.IR.Value)
// line 237
org$pandalanguage$pandac$IR* $tmp866 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp867 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp868 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp869 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp870 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp871 = (panda$core$Int64) {2};
panda$core$Int64 $tmp872 = *(&local1);
org$pandalanguage$pandac$Type* $tmp873 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp870, $tmp871, $tmp872, $tmp873);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp867, $tmp868, param1, $tmp869, $tmp870);
$fn875 $tmp874 = ($fn875) $tmp866->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp876 = $tmp874($tmp866, $tmp867);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// unreffing REF($304:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
// unreffing REF($301:org.pandalanguage.pandac.IR.Statement)
// line 240
org$pandalanguage$pandac$IR$Value* $tmp877 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp878 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp879 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp880 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp881 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp882 = *(&local6);
panda$core$Int64 $tmp883 = (panda$core$Int64) {1};
ITable* $tmp884 = $tmp882->$class->itable;
while ($tmp884->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp884 = $tmp884->next;
}
$fn886 $tmp885 = $tmp884->methods[0];
panda$core$Object* $tmp887 = $tmp885($tmp882, $tmp883);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp880, $tmp881, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp887));
$fn889 $tmp888 = ($fn889) $tmp879->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp890 = $tmp888($tmp879, $tmp880);
org$pandalanguage$pandac$Type* $tmp891 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp877, $tmp878, $tmp890, $tmp891);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
org$pandalanguage$pandac$IR$Value* $tmp892 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
*(&local8) = $tmp877;
panda$core$Panda$unref$panda$core$Object$Q($tmp887);
// unreffing REF($328:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing REF($322:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// unreffing REF($319:org.pandalanguage.pandac.IR.Value)
// line 244
org$pandalanguage$pandac$IR$Value* $tmp893 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp894 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp895 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp896 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp897 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp898 = *(&local6);
panda$core$Int64 $tmp899 = (panda$core$Int64) {2};
ITable* $tmp900 = $tmp898->$class->itable;
while ($tmp900->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp900 = $tmp900->next;
}
$fn902 $tmp901 = $tmp900->methods[0];
panda$core$Object* $tmp903 = $tmp901($tmp898, $tmp899);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp896, $tmp897, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp903));
$fn905 $tmp904 = ($fn905) $tmp895->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp906 = $tmp904($tmp895, $tmp896);
org$pandalanguage$pandac$Type* $tmp907 = *(&local4);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp893, $tmp894, $tmp906, $tmp907);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
org$pandalanguage$pandac$IR$Value* $tmp908 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
*(&local9) = $tmp893;
panda$core$Panda$unref$panda$core$Object$Q($tmp903);
// unreffing REF($361:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing REF($355:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing REF($352:org.pandalanguage.pandac.IR.Value)
// line 246
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 247
org$pandalanguage$pandac$IR$Value* $tmp909 = *(&local9);
$fn911 $tmp910 = ($fn911) $tmp909->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp912 = $tmp910($tmp909);
org$pandalanguage$pandac$Type* $tmp913 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp914 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp912, $tmp913);
bool $tmp915 = $tmp914.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
// unreffing REF($390:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
// unreffing REF($389:org.pandalanguage.pandac.Type)
if ($tmp915) goto block26; else goto block28;
block26:;
// line 248
org$pandalanguage$pandac$IR$Value* $tmp916 = *(&local9);
org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value* $tmp918 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp916, $tmp917);
panda$core$Bit $tmp919 = panda$core$Bit$init$builtin_bit($tmp918 != NULL);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp921 = (panda$core$Int64) {248};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s922, $tmp921, &$s923);
abort(); // unreachable
block29:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
org$pandalanguage$pandac$IR$Value* $tmp924 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
*(&local10) = $tmp918;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
// unreffing REF($404:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
// unreffing REF($403:org.pandalanguage.pandac.Type)
goto block27;
block28:;
// line 1
// line 251
org$pandalanguage$pandac$IR$Value* $tmp925 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp925));
org$pandalanguage$pandac$IR$Value* $tmp926 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
*(&local10) = $tmp925;
goto block27;
block27:;
// line 253
org$pandalanguage$pandac$IR$Value* $tmp927 = *(&local9);
org$pandalanguage$pandac$IR$Value* $tmp928 = *(&local9);
$fn930 $tmp929 = ($fn930) $tmp928->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp931 = $tmp929($tmp928);
org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$statement$For$signed$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp931);
org$pandalanguage$pandac$IR$Value* $tmp933 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp927, $tmp932);
panda$core$Bit $tmp934 = panda$core$Bit$init$builtin_bit($tmp933 != NULL);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp936 = (panda$core$Int64) {253};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s937, $tmp936, &$s938);
abort(); // unreachable
block31:;
panda$collections$Array* $tmp939 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp940 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp939, $tmp940);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp941 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp942 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp941, $tmp942);
org$pandalanguage$pandac$IR$Value* $tmp943 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp933, &$s944, ((panda$collections$ListView*) $tmp939), $tmp941);
org$pandalanguage$pandac$Type* $tmp945 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp946 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp943, $tmp945);
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
org$pandalanguage$pandac$IR$Value* $tmp947 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
*(&local11) = $tmp946;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing REF($462:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing REF($460:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing REF($457:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing REF($452:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing REF($443:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($442:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// unreffing REF($441:org.pandalanguage.pandac.Type)
// line 255
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 256
org$pandalanguage$pandac$IR$Value* $tmp948 = *(&local9);
$fn950 $tmp949 = ($fn950) $tmp948->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp951 = $tmp949($tmp948);
org$pandalanguage$pandac$Type* $tmp952 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp953 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp951, $tmp952);
bool $tmp954 = $tmp953.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing REF($497:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
// unreffing REF($496:org.pandalanguage.pandac.Type)
if ($tmp954) goto block33; else goto block35;
block33:;
// line 257
org$pandalanguage$pandac$IR$Value* $tmp955 = *(&local11);
org$pandalanguage$pandac$Type* $tmp956 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value* $tmp957 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp955, $tmp956);
panda$core$Bit $tmp958 = panda$core$Bit$init$builtin_bit($tmp957 != NULL);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp960 = (panda$core$Int64) {257};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s961, $tmp960, &$s962);
abort(); // unreachable
block36:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
org$pandalanguage$pandac$IR$Value* $tmp963 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
*(&local12) = $tmp957;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
// unreffing REF($510:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
// unreffing REF($509:org.pandalanguage.pandac.Type)
goto block34;
block35:;
// line 1
// line 260
org$pandalanguage$pandac$IR$Value* $tmp964 = *(&local11);
panda$core$Bit $tmp965 = panda$core$Bit$init$builtin_bit($tmp964 != NULL);
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp967 = (panda$core$Int64) {260};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s968, $tmp967, &$s969);
abort(); // unreachable
block38:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
org$pandalanguage$pandac$IR$Value* $tmp970 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
*(&local12) = $tmp964;
goto block34;
block34:;
// line 264
org$pandalanguage$pandac$IR$Value* $tmp971 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp972 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp973 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp974 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp975 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp976 = *(&local6);
panda$core$Int64 $tmp977 = (panda$core$Int64) {3};
ITable* $tmp978 = $tmp976->$class->itable;
while ($tmp978->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
panda$core$Object* $tmp981 = $tmp979($tmp976, $tmp977);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp974, $tmp975, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp981));
$fn983 $tmp982 = ($fn983) $tmp973->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp984 = $tmp982($tmp973, $tmp974);
org$pandalanguage$pandac$Type* $tmp985 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp971, $tmp972, $tmp984, $tmp985);
org$pandalanguage$pandac$IR$Value* $tmp986 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp971);
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
org$pandalanguage$pandac$IR$Value* $tmp987 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
*(&local13) = $tmp986;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing REF($567:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing REF($565:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp981);
// unreffing REF($560:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
// unreffing REF($554:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing REF($551:org.pandalanguage.pandac.IR.Value)
// line 268
org$pandalanguage$pandac$IR* $tmp988 = *(&local0);
$fn990 $tmp989 = ($fn990) $tmp988->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp991 = $tmp989($tmp988, &$s992);
*(&local14) = $tmp991;
// line 269
org$pandalanguage$pandac$IR* $tmp993 = *(&local0);
$fn995 $tmp994 = ($fn995) $tmp993->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp996 = $tmp994($tmp993, &$s997);
*(&local15) = $tmp996;
// line 270
org$pandalanguage$pandac$IR* $tmp998 = *(&local0);
$fn1000 $tmp999 = ($fn1000) $tmp998->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1001 = $tmp999($tmp998, &$s1002);
*(&local16) = $tmp1001;
// line 271
org$pandalanguage$pandac$IR* $tmp1003 = *(&local0);
$fn1005 $tmp1004 = ($fn1005) $tmp1003->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1006 = $tmp1004($tmp1003, &$s1007);
*(&local17) = $tmp1006;
// line 272
org$pandalanguage$pandac$IR* $tmp1008 = *(&local0);
$fn1010 $tmp1009 = ($fn1010) $tmp1008->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1011 = $tmp1009($tmp1008, &$s1012);
*(&local18) = $tmp1011;
// line 273
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 274
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1013 = (org$pandalanguage$pandac$Compiler$AutoContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp1014 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp1015 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp1016 = *(&local15);
org$pandalanguage$pandac$IR$Block$ID $tmp1017 = *(&local16);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1014, $tmp1015, param2, $tmp1016, $tmp1017);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp1013, param0, $tmp1014);
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1018 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
*(&local20) = $tmp1013;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing REF($619:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing REF($618:org.pandalanguage.pandac.Compiler.AutoContext)
// line 1
// line 276
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1019 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp1019, param0);
*(&local21) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1020 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
*(&local21) = $tmp1019;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing REF($640:org.pandalanguage.pandac.Compiler.AutoScope)
// line 277
org$pandalanguage$pandac$Type* $tmp1021 = *(&local4);
panda$core$String** $tmp1022 = &((org$pandalanguage$pandac$Symbol*) $tmp1021)->name;
panda$core$String* $tmp1023 = *$tmp1022;
panda$core$Bit $tmp1024 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1023, &$s1025);
bool $tmp1026 = $tmp1024.value;
if ($tmp1026) goto block40; else goto block42;
block40:;
// line 278
org$pandalanguage$pandac$IR$Value* $tmp1027 = *(&local9);
panda$collections$Array* $tmp1028 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp1029 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp1028, $tmp1029);
org$pandalanguage$pandac$ASTNode* $tmp1030 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1031 = (panda$core$Int64) {25};
panda$core$UInt64 $tmp1032 = (panda$core$UInt64) {0};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1030, $tmp1031, param1, $tmp1032);
panda$collections$Array$add$panda$collections$Array$T($tmp1028, ((panda$core$Object*) $tmp1030));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1033 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1034 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1035 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1033, $tmp1034, $tmp1035);
org$pandalanguage$pandac$IR$Value* $tmp1036 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1027, &$s1037, ((panda$collections$ListView*) $tmp1028), $tmp1033);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
org$pandalanguage$pandac$IR$Value* $tmp1038 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
*(&local22) = $tmp1036;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
// unreffing REF($678:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
// unreffing REF($676:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
// unreffing REF($674:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// unreffing REF($667:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($662:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 280
org$pandalanguage$pandac$IR$Value* $tmp1039 = *(&local22);
panda$core$Bit $tmp1040 = panda$core$Bit$init$builtin_bit($tmp1039 != NULL);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp1042 = (panda$core$Int64) {280};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1043, $tmp1042);
abort(); // unreachable
block43:;
// line 281
org$pandalanguage$pandac$IR$Value* $tmp1044 = *(&local22);
panda$core$Bit $tmp1045 = panda$core$Bit$init$builtin_bit($tmp1044 != NULL);
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp1047 = (panda$core$Int64) {281};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1048, $tmp1047, &$s1049);
abort(); // unreachable
block45:;
org$pandalanguage$pandac$IR$Value* $tmp1050 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1044);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
org$pandalanguage$pandac$IR$Value* $tmp1051 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
*(&local19) = $tmp1050;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
// unreffing REF($720:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp1052 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing comparison
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block41;
block42:;
// line 1
// line 284
org$pandalanguage$pandac$Type* $tmp1053 = *(&local4);
panda$core$String** $tmp1054 = &((org$pandalanguage$pandac$Symbol*) $tmp1053)->name;
panda$core$String* $tmp1055 = *$tmp1054;
panda$core$Bit $tmp1056 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1055, &$s1057);
bool $tmp1058 = $tmp1056.value;
if ($tmp1058) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp1059 = (panda$core$Int64) {284};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1060, $tmp1059);
abort(); // unreachable
block47:;
// line 285
org$pandalanguage$pandac$IR$Value* $tmp1061 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1062 = (panda$core$Int64) {0};
panda$core$Bit $tmp1063 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Bit($tmp1061, $tmp1062, $tmp1063);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
org$pandalanguage$pandac$IR$Value* $tmp1064 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
*(&local19) = $tmp1061;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing REF($749:org.pandalanguage.pandac.IR.Value)
goto block41;
block41:;
// line 287
org$pandalanguage$pandac$IR* $tmp1065 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1066 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1067 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1068 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp1069 = *(&local17);
org$pandalanguage$pandac$IR$Block$ID $tmp1070 = *(&local18);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1066, $tmp1067, param1, $tmp1068, $tmp1069, $tmp1070);
$fn1072 $tmp1071 = ($fn1072) $tmp1065->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1073 = $tmp1071($tmp1065, $tmp1066);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1066));
// unreffing REF($765:org.pandalanguage.pandac.IR.Statement)
// line 288
org$pandalanguage$pandac$IR* $tmp1074 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1075 = *(&local17);
$fn1077 $tmp1076 = ($fn1077) $tmp1074->$class->vtable[4];
$tmp1076($tmp1074, $tmp1075);
// line 289
org$pandalanguage$pandac$IR* $tmp1078 = *(&local0);
$fn1080 $tmp1079 = ($fn1080) $tmp1078->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1081 = $tmp1079($tmp1078, &$s1082);
*(&local23) = $tmp1081;
// line 290
org$pandalanguage$pandac$IR* $tmp1083 = *(&local0);
$fn1085 $tmp1084 = ($fn1085) $tmp1083->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1086 = $tmp1084($tmp1083, &$s1087);
*(&local24) = $tmp1086;
// line 291
org$pandalanguage$pandac$IR* $tmp1088 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1089 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1090 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1091 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp1092 = *(&local23);
org$pandalanguage$pandac$IR$Block$ID $tmp1093 = *(&local24);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1089, $tmp1090, param1, $tmp1091, $tmp1092, $tmp1093);
$fn1095 $tmp1094 = ($fn1095) $tmp1088->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1096 = $tmp1094($tmp1088, $tmp1089);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
// unreffing REF($793:org.pandalanguage.pandac.IR.Statement)
// line 293
org$pandalanguage$pandac$IR* $tmp1097 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1098 = *(&local23);
$fn1100 $tmp1099 = ($fn1100) $tmp1097->$class->vtable[4];
$tmp1099($tmp1097, $tmp1098);
// line 294
org$pandalanguage$pandac$IR$Value* $tmp1101 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp1102 = *(&local8);
panda$collections$ListView* $tmp1103 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1102);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1104 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1105 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1106 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1104, $tmp1105, $tmp1106);
org$pandalanguage$pandac$IR$Value* $tmp1107 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1101, &$s1108, $tmp1103, $tmp1104);
panda$core$Bit $tmp1109 = panda$core$Bit$init$builtin_bit($tmp1107 != NULL);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1111 = (panda$core$Int64) {295};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1112, $tmp1111, &$s1113);
abort(); // unreachable
block49:;
org$pandalanguage$pandac$IR$Value* $tmp1114 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1107);
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
org$pandalanguage$pandac$IR$Value* $tmp1115 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
*(&local25) = $tmp1114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing REF($826:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
// unreffing REF($817:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
// unreffing REF($815:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
// unreffing REF($813:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1103));
// unreffing REF($812:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 297
org$pandalanguage$pandac$IR* $tmp1116 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1117 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1118 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1119 = *(&local25);
org$pandalanguage$pandac$IR$Block$ID $tmp1120 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp1121 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1117, $tmp1118, param1, $tmp1119, $tmp1120, $tmp1121);
$fn1123 $tmp1122 = ($fn1123) $tmp1116->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1124 = $tmp1122($tmp1116, $tmp1117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
// unreffing REF($851:org.pandalanguage.pandac.IR.Statement)
// line 299
org$pandalanguage$pandac$IR* $tmp1125 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1126 = *(&local24);
$fn1128 $tmp1127 = ($fn1128) $tmp1125->$class->vtable[4];
$tmp1127($tmp1125, $tmp1126);
// line 300
org$pandalanguage$pandac$IR$Value* $tmp1129 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp1130 = *(&local8);
panda$collections$ListView* $tmp1131 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1130);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1132 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1133 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1134 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1132, $tmp1133, $tmp1134);
org$pandalanguage$pandac$IR$Value* $tmp1135 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1129, &$s1136, $tmp1131, $tmp1132);
panda$core$Bit $tmp1137 = panda$core$Bit$init$builtin_bit($tmp1135 != NULL);
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp1139 = (panda$core$Int64) {301};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1140, $tmp1139, &$s1141);
abort(); // unreachable
block51:;
org$pandalanguage$pandac$IR$Value* $tmp1142 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1135);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
org$pandalanguage$pandac$IR$Value* $tmp1143 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
*(&local26) = $tmp1142;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
// unreffing REF($884:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing REF($875:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing REF($873:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing REF($871:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing REF($870:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 303
org$pandalanguage$pandac$IR* $tmp1144 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1145 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1146 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1147 = *(&local26);
org$pandalanguage$pandac$IR$Block$ID $tmp1148 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp1149 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1145, $tmp1146, param1, $tmp1147, $tmp1148, $tmp1149);
$fn1151 $tmp1150 = ($fn1151) $tmp1144->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1152 = $tmp1150($tmp1144, $tmp1145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing REF($909:org.pandalanguage.pandac.IR.Statement)
// line 305
org$pandalanguage$pandac$IR* $tmp1153 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1154 = *(&local18);
$fn1156 $tmp1155 = ($fn1156) $tmp1153->$class->vtable[4];
$tmp1155($tmp1153, $tmp1154);
// line 306
org$pandalanguage$pandac$IR* $tmp1157 = *(&local0);
$fn1159 $tmp1158 = ($fn1159) $tmp1157->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1160 = $tmp1158($tmp1157, &$s1161);
*(&local27) = $tmp1160;
// line 307
org$pandalanguage$pandac$IR* $tmp1162 = *(&local0);
$fn1164 $tmp1163 = ($fn1164) $tmp1162->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1165 = $tmp1163($tmp1162, &$s1166);
*(&local28) = $tmp1165;
// line 308
org$pandalanguage$pandac$IR* $tmp1167 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1168 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1169 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1170 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp1171 = *(&local27);
org$pandalanguage$pandac$IR$Block$ID $tmp1172 = *(&local28);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1168, $tmp1169, param1, $tmp1170, $tmp1171, $tmp1172);
$fn1174 $tmp1173 = ($fn1174) $tmp1167->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1175 = $tmp1173($tmp1167, $tmp1168);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing REF($937:org.pandalanguage.pandac.IR.Statement)
// line 310
org$pandalanguage$pandac$IR* $tmp1176 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1177 = *(&local27);
$fn1179 $tmp1178 = ($fn1179) $tmp1176->$class->vtable[4];
$tmp1178($tmp1176, $tmp1177);
// line 311
org$pandalanguage$pandac$IR$Value* $tmp1180 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp1181 = *(&local8);
panda$collections$ListView* $tmp1182 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1181);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1183 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1184 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1183, $tmp1184, $tmp1185);
org$pandalanguage$pandac$IR$Value* $tmp1186 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1180, &$s1187, $tmp1182, $tmp1183);
panda$core$Bit $tmp1188 = panda$core$Bit$init$builtin_bit($tmp1186 != NULL);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp1190 = (panda$core$Int64) {312};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1191, $tmp1190, &$s1192);
abort(); // unreachable
block53:;
org$pandalanguage$pandac$IR$Value* $tmp1193 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1186);
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
org$pandalanguage$pandac$IR$Value* $tmp1194 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
*(&local29) = $tmp1193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing REF($970:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
// unreffing REF($961:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($959:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
// unreffing REF($957:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing REF($956:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 314
org$pandalanguage$pandac$IR* $tmp1195 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1196 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1197 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1198 = *(&local29);
org$pandalanguage$pandac$IR$Block$ID $tmp1199 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp1200 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1196, $tmp1197, param1, $tmp1198, $tmp1199, $tmp1200);
$fn1202 $tmp1201 = ($fn1202) $tmp1195->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1203 = $tmp1201($tmp1195, $tmp1196);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing REF($995:org.pandalanguage.pandac.IR.Statement)
// line 316
org$pandalanguage$pandac$IR* $tmp1204 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1205 = *(&local28);
$fn1207 $tmp1206 = ($fn1207) $tmp1204->$class->vtable[4];
$tmp1206($tmp1204, $tmp1205);
// line 317
org$pandalanguage$pandac$IR$Value* $tmp1208 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp1209 = *(&local8);
panda$collections$ListView* $tmp1210 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1209);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1211 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1212 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1213 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1211, $tmp1212, $tmp1213);
org$pandalanguage$pandac$IR$Value* $tmp1214 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1208, &$s1215, $tmp1210, $tmp1211);
panda$core$Bit $tmp1216 = panda$core$Bit$init$builtin_bit($tmp1214 != NULL);
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp1218 = (panda$core$Int64) {318};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1219, $tmp1218, &$s1220);
abort(); // unreachable
block55:;
org$pandalanguage$pandac$IR$Value* $tmp1221 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1214);
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
org$pandalanguage$pandac$IR$Value* $tmp1222 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
*(&local30) = $tmp1221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
// unreffing REF($1028:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
// unreffing REF($1019:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
// unreffing REF($1017:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
// unreffing REF($1015:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
// unreffing REF($1014:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 320
org$pandalanguage$pandac$IR* $tmp1223 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1224 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1225 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1226 = *(&local30);
org$pandalanguage$pandac$IR$Block$ID $tmp1227 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp1228 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1224, $tmp1225, param1, $tmp1226, $tmp1227, $tmp1228);
$fn1230 $tmp1229 = ($fn1230) $tmp1223->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1231 = $tmp1229($tmp1223, $tmp1224);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
// unreffing REF($1053:org.pandalanguage.pandac.IR.Statement)
// line 322
org$pandalanguage$pandac$IR* $tmp1232 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1233 = *(&local14);
$fn1235 $tmp1234 = ($fn1235) $tmp1232->$class->vtable[4];
$tmp1234($tmp1232, $tmp1233);
// line 323
ITable* $tmp1236 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1236 = $tmp1236->next;
}
$fn1238 $tmp1237 = $tmp1236->methods[0];
panda$collections$Iterator* $tmp1239 = $tmp1237(((panda$collections$Iterable*) param5));
goto block57;
block57:;
ITable* $tmp1240 = $tmp1239->$class->itable;
while ($tmp1240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1240 = $tmp1240->next;
}
$fn1242 $tmp1241 = $tmp1240->methods[0];
panda$core$Bit $tmp1243 = $tmp1241($tmp1239);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block59; else goto block58;
block58:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1245 = $tmp1239->$class->itable;
while ($tmp1245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1245 = $tmp1245->next;
}
$fn1247 $tmp1246 = $tmp1245->methods[1];
panda$core$Object* $tmp1248 = $tmp1246($tmp1239);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1248)));
org$pandalanguage$pandac$ASTNode* $tmp1249 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp1248);
// line 324
org$pandalanguage$pandac$ASTNode* $tmp1250 = *(&local31);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp1250);
panda$core$Panda$unref$panda$core$Object$Q($tmp1248);
// unreffing REF($1084:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1251 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
// unreffing s
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block57;
block59:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1239));
// unreffing REF($1073:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp1252 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
// unreffing backwardEntryExclusiveTest
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1253 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing backwardEntryInclusiveTest
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1254 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
// unreffing forwardEntryExclusiveTest
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1255 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
// unreffing forwardEntryInclusiveTest
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1256 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing scope
*(&local21) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 327
org$pandalanguage$pandac$IR* $tmp1257 = *(&local0);
$fn1259 $tmp1258 = ($fn1259) $tmp1257->$class->vtable[5];
panda$core$Bit $tmp1260 = $tmp1258($tmp1257);
panda$core$Bit $tmp1261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1260);
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block60; else goto block61;
block60:;
// line 328
org$pandalanguage$pandac$IR* $tmp1263 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1264 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1265 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1266 = *(&local16);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1264, $tmp1265, param1, $tmp1266);
$fn1268 $tmp1267 = ($fn1268) $tmp1263->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1269 = $tmp1267($tmp1263, $tmp1264);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
// unreffing REF($1141:org.pandalanguage.pandac.IR.Statement)
goto block61;
block61:;
// line 330
org$pandalanguage$pandac$IR* $tmp1270 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1271 = *(&local16);
$fn1273 $tmp1272 = ($fn1273) $tmp1270->$class->vtable[4];
$tmp1272($tmp1270, $tmp1271);
// line 331
org$pandalanguage$pandac$IR* $tmp1274 = *(&local0);
$fn1276 $tmp1275 = ($fn1276) $tmp1274->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1277 = $tmp1275($tmp1274, &$s1278);
*(&local32) = $tmp1277;
// line 333
org$pandalanguage$pandac$IR$Value* $tmp1279 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1280 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp1281 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1282 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1283 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp1284 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1285 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1286 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1287 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1284, $tmp1285, $tmp1286, $tmp1287);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1282, $tmp1283, param1, $tmp1284);
$fn1289 $tmp1288 = ($fn1289) $tmp1281->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1290 = $tmp1288($tmp1281, $tmp1282);
org$pandalanguage$pandac$Type* $tmp1291 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1279, $tmp1280, $tmp1290, $tmp1291);
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
org$pandalanguage$pandac$IR$Value* $tmp1292 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
*(&local33) = $tmp1279;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
// unreffing REF($1167:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
// unreffing REF($1165:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
// unreffing REF($1162:org.pandalanguage.pandac.IR.Value)
// line 335
org$pandalanguage$pandac$IR* $tmp1293 = *(&local0);
$fn1295 $tmp1294 = ($fn1295) $tmp1293->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1296 = $tmp1294($tmp1293, &$s1297);
*(&local34) = $tmp1296;
// line 336
org$pandalanguage$pandac$IR* $tmp1298 = *(&local0);
$fn1300 $tmp1299 = ($fn1300) $tmp1298->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1301 = $tmp1299($tmp1298, &$s1302);
*(&local35) = $tmp1301;
// line 337
org$pandalanguage$pandac$IR* $tmp1303 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1304 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1305 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1306 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp1307 = *(&local34);
org$pandalanguage$pandac$IR$Block$ID $tmp1308 = *(&local35);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1304, $tmp1305, param1, $tmp1306, $tmp1307, $tmp1308);
$fn1310 $tmp1309 = ($fn1310) $tmp1303->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1311 = $tmp1309($tmp1303, $tmp1304);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1304));
// unreffing REF($1205:org.pandalanguage.pandac.IR.Statement)
// line 341
org$pandalanguage$pandac$IR* $tmp1312 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1313 = *(&local34);
$fn1315 $tmp1314 = ($fn1315) $tmp1312->$class->vtable[4];
$tmp1314($tmp1312, $tmp1313);
// line 344
org$pandalanguage$pandac$IR$Value* $tmp1316 = *(&local8);
org$pandalanguage$pandac$IR$Value* $tmp1317 = *(&local33);
panda$collections$ListView* $tmp1318 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1317);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1319 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1320 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1319, $tmp1320);
org$pandalanguage$pandac$IR$Value* $tmp1321 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1316, &$s1322, $tmp1318, $tmp1319);
org$pandalanguage$pandac$Type* $tmp1323 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1324 = org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1323);
org$pandalanguage$pandac$IR$Value* $tmp1325 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1321, $tmp1324);
*(&local36) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
org$pandalanguage$pandac$IR$Value* $tmp1326 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
*(&local36) = $tmp1325;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing REF($1231:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing REF($1230:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing REF($1228:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing REF($1225:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing REF($1224:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 348
org$pandalanguage$pandac$IR* $tmp1327 = *(&local0);
$fn1329 $tmp1328 = ($fn1329) $tmp1327->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1330 = $tmp1328($tmp1327, &$s1331);
*(&local37) = $tmp1330;
// line 349
org$pandalanguage$pandac$IR* $tmp1332 = *(&local0);
$fn1334 $tmp1333 = ($fn1334) $tmp1332->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1335 = $tmp1333($tmp1332, &$s1336);
*(&local38) = $tmp1335;
// line 350
org$pandalanguage$pandac$IR* $tmp1337 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1338 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1339 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1340 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp1341 = *(&local37);
org$pandalanguage$pandac$IR$Block$ID $tmp1342 = *(&local38);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1338, $tmp1339, param1, $tmp1340, $tmp1341, $tmp1342);
$fn1344 $tmp1343 = ($fn1344) $tmp1337->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1345 = $tmp1343($tmp1337, $tmp1338);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// unreffing REF($1266:org.pandalanguage.pandac.IR.Statement)
// line 354
org$pandalanguage$pandac$IR* $tmp1346 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1347 = *(&local37);
$fn1349 $tmp1348 = ($fn1349) $tmp1346->$class->vtable[4];
$tmp1348($tmp1346, $tmp1347);
// line 355
org$pandalanguage$pandac$IR$Value* $tmp1350 = *(&local36);
panda$core$Bit $tmp1351 = panda$core$Bit$init$builtin_bit($tmp1350 != NULL);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block62; else goto block63;
block63:;
panda$core$Int64 $tmp1353 = (panda$core$Int64) {356};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1354, $tmp1353, &$s1355);
abort(); // unreachable
block62:;
org$pandalanguage$pandac$IR$Value* $tmp1356 = *(&local10);
panda$collections$ListView* $tmp1357 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1356);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1358 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1359 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1358, $tmp1359, $tmp1360);
org$pandalanguage$pandac$IR$Value* $tmp1361 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1350, &$s1362, $tmp1357, $tmp1358);
panda$core$Bit $tmp1363 = panda$core$Bit$init$builtin_bit($tmp1361 != NULL);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp1365 = (panda$core$Int64) {355};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1366, $tmp1365, &$s1367);
abort(); // unreachable
block64:;
org$pandalanguage$pandac$IR$Value* $tmp1368 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1361);
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
org$pandalanguage$pandac$IR$Value* $tmp1369 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
*(&local39) = $tmp1368;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
// unreffing REF($1307:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($1298:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
// unreffing REF($1296:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
// unreffing REF($1294:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
// unreffing REF($1293:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 357
org$pandalanguage$pandac$IR* $tmp1370 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1371 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1372 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1373 = *(&local39);
org$pandalanguage$pandac$IR$Block$ID $tmp1374 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1375 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1371, $tmp1372, param1, $tmp1373, $tmp1374, $tmp1375);
$fn1377 $tmp1376 = ($fn1377) $tmp1370->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1378 = $tmp1376($tmp1370, $tmp1371);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
// unreffing REF($1332:org.pandalanguage.pandac.IR.Statement)
// line 360
org$pandalanguage$pandac$IR* $tmp1379 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1380 = *(&local38);
$fn1382 $tmp1381 = ($fn1382) $tmp1379->$class->vtable[4];
$tmp1381($tmp1379, $tmp1380);
// line 361
org$pandalanguage$pandac$IR$Value* $tmp1383 = *(&local36);
panda$core$Bit $tmp1384 = panda$core$Bit$init$builtin_bit($tmp1383 != NULL);
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block66; else goto block67;
block67:;
panda$core$Int64 $tmp1386 = (panda$core$Int64) {362};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1387, $tmp1386, &$s1388);
abort(); // unreachable
block66:;
org$pandalanguage$pandac$IR$Value* $tmp1389 = *(&local10);
panda$collections$ListView* $tmp1390 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1389);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1391 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1392 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1393 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1391, $tmp1392, $tmp1393);
org$pandalanguage$pandac$IR$Value* $tmp1394 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1383, &$s1395, $tmp1390, $tmp1391);
panda$core$Bit $tmp1396 = panda$core$Bit$init$builtin_bit($tmp1394 != NULL);
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block68; else goto block69;
block69:;
panda$core$Int64 $tmp1398 = (panda$core$Int64) {361};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1399, $tmp1398, &$s1400);
abort(); // unreachable
block68:;
org$pandalanguage$pandac$IR$Value* $tmp1401 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1394);
*(&local40) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
org$pandalanguage$pandac$IR$Value* $tmp1402 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
*(&local40) = $tmp1401;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
// unreffing REF($1373:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing REF($1364:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing REF($1362:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing REF($1360:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing REF($1359:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 363
org$pandalanguage$pandac$IR* $tmp1403 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1404 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1405 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1406 = *(&local40);
org$pandalanguage$pandac$IR$Block$ID $tmp1407 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1408 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1404, $tmp1405, param1, $tmp1406, $tmp1407, $tmp1408);
$fn1410 $tmp1409 = ($fn1410) $tmp1403->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1411 = $tmp1409($tmp1403, $tmp1404);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
// unreffing REF($1398:org.pandalanguage.pandac.IR.Statement)
// line 367
org$pandalanguage$pandac$IR* $tmp1412 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1413 = *(&local35);
$fn1415 $tmp1414 = ($fn1415) $tmp1412->$class->vtable[4];
$tmp1414($tmp1412, $tmp1413);
// line 368
org$pandalanguage$pandac$IR$Value* $tmp1416 = *(&local33);
org$pandalanguage$pandac$IR$Value* $tmp1417 = *(&local8);
panda$collections$ListView* $tmp1418 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1417);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1419 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1420 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1419, $tmp1420);
org$pandalanguage$pandac$IR$Value* $tmp1421 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1416, &$s1422, $tmp1418, $tmp1419);
org$pandalanguage$pandac$Type* $tmp1423 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1423);
org$pandalanguage$pandac$IR$Value* $tmp1425 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1421, $tmp1424);
*(&local41) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
org$pandalanguage$pandac$IR$Value* $tmp1426 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
*(&local41) = $tmp1425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing REF($1424:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing REF($1423:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
// unreffing REF($1421:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
// unreffing REF($1418:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
// unreffing REF($1417:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 372
org$pandalanguage$pandac$IR* $tmp1427 = *(&local0);
$fn1429 $tmp1428 = ($fn1429) $tmp1427->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1430 = $tmp1428($tmp1427, &$s1431);
*(&local42) = $tmp1430;
// line 373
org$pandalanguage$pandac$IR* $tmp1432 = *(&local0);
$fn1434 $tmp1433 = ($fn1434) $tmp1432->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1435 = $tmp1433($tmp1432, &$s1436);
*(&local43) = $tmp1435;
// line 374
org$pandalanguage$pandac$IR* $tmp1437 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1438 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1439 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1440 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp1441 = *(&local42);
org$pandalanguage$pandac$IR$Block$ID $tmp1442 = *(&local43);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1438, $tmp1439, param1, $tmp1440, $tmp1441, $tmp1442);
$fn1444 $tmp1443 = ($fn1444) $tmp1437->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1445 = $tmp1443($tmp1437, $tmp1438);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
// unreffing REF($1459:org.pandalanguage.pandac.IR.Statement)
// line 378
org$pandalanguage$pandac$IR* $tmp1446 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1447 = *(&local42);
$fn1449 $tmp1448 = ($fn1449) $tmp1446->$class->vtable[4];
$tmp1448($tmp1446, $tmp1447);
// line 379
org$pandalanguage$pandac$IR$Value* $tmp1450 = *(&local41);
panda$core$Bit $tmp1451 = panda$core$Bit$init$builtin_bit($tmp1450 != NULL);
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block70; else goto block71;
block71:;
panda$core$Int64 $tmp1453 = (panda$core$Int64) {380};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1454, $tmp1453, &$s1455);
abort(); // unreachable
block70:;
org$pandalanguage$pandac$IR$Value* $tmp1456 = *(&local12);
panda$collections$ListView* $tmp1457 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1456);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1458 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1459 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1460 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1458, $tmp1459, $tmp1460);
org$pandalanguage$pandac$IR$Value* $tmp1461 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1450, &$s1462, $tmp1457, $tmp1458);
panda$core$Bit $tmp1463 = panda$core$Bit$init$builtin_bit($tmp1461 != NULL);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block72; else goto block73;
block73:;
panda$core$Int64 $tmp1465 = (panda$core$Int64) {379};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1466, $tmp1465, &$s1467);
abort(); // unreachable
block72:;
org$pandalanguage$pandac$IR$Value* $tmp1468 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1461);
*(&local44) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
org$pandalanguage$pandac$IR$Value* $tmp1469 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
*(&local44) = $tmp1468;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
// unreffing REF($1500:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing REF($1491:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing REF($1489:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
// unreffing REF($1487:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1457));
// unreffing REF($1486:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 382
org$pandalanguage$pandac$IR* $tmp1470 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1471 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1472 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1473 = *(&local44);
org$pandalanguage$pandac$IR$Block$ID $tmp1474 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1475 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1471, $tmp1472, param1, $tmp1473, $tmp1474, $tmp1475);
$fn1477 $tmp1476 = ($fn1477) $tmp1470->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1478 = $tmp1476($tmp1470, $tmp1471);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
// unreffing REF($1525:org.pandalanguage.pandac.IR.Statement)
// line 386
org$pandalanguage$pandac$IR* $tmp1479 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1480 = *(&local43);
$fn1482 $tmp1481 = ($fn1482) $tmp1479->$class->vtable[4];
$tmp1481($tmp1479, $tmp1480);
// line 387
org$pandalanguage$pandac$IR$Value* $tmp1483 = *(&local41);
panda$core$Bit $tmp1484 = panda$core$Bit$init$builtin_bit($tmp1483 != NULL);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block74; else goto block75;
block75:;
panda$core$Int64 $tmp1486 = (panda$core$Int64) {388};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1487, $tmp1486, &$s1488);
abort(); // unreachable
block74:;
org$pandalanguage$pandac$IR$Value* $tmp1489 = *(&local12);
panda$collections$ListView* $tmp1490 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1489);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1491 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1492 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1493 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1491, $tmp1492, $tmp1493);
org$pandalanguage$pandac$IR$Value* $tmp1494 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1483, &$s1495, $tmp1490, $tmp1491);
panda$core$Bit $tmp1496 = panda$core$Bit$init$builtin_bit($tmp1494 != NULL);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block76; else goto block77;
block77:;
panda$core$Int64 $tmp1498 = (panda$core$Int64) {387};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1499, $tmp1498, &$s1500);
abort(); // unreachable
block76:;
org$pandalanguage$pandac$IR$Value* $tmp1501 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1494);
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
org$pandalanguage$pandac$IR$Value* $tmp1502 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
*(&local45) = $tmp1501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
// unreffing REF($1566:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
// unreffing REF($1557:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
// unreffing REF($1555:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
// unreffing REF($1553:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
// unreffing REF($1552:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 389
org$pandalanguage$pandac$IR* $tmp1503 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1504 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1505 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1506 = *(&local45);
org$pandalanguage$pandac$IR$Block$ID $tmp1507 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1508 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1504, $tmp1505, param1, $tmp1506, $tmp1507, $tmp1508);
$fn1510 $tmp1509 = ($fn1510) $tmp1503->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1511 = $tmp1509($tmp1503, $tmp1504);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
// unreffing REF($1591:org.pandalanguage.pandac.IR.Statement)
// line 392
org$pandalanguage$pandac$IR* $tmp1512 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1513 = *(&local32);
$fn1515 $tmp1514 = ($fn1515) $tmp1512->$class->vtable[4];
$tmp1514($tmp1512, $tmp1513);
// line 393
org$pandalanguage$pandac$IR$Value* $tmp1516 = *(&local33);
org$pandalanguage$pandac$IR$Value* $tmp1517 = *(&local9);
panda$collections$ListView* $tmp1518 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1517);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1519 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1520 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1519, $tmp1520);
org$pandalanguage$pandac$IR$Value* $tmp1521 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1516, &$s1522, $tmp1518, $tmp1519);
org$pandalanguage$pandac$Type* $tmp1523 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp1524 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1521, $tmp1523);
*(&local46) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
org$pandalanguage$pandac$IR$Value* $tmp1525 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
*(&local46) = $tmp1524;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
// unreffing REF($1616:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing REF($1614:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1519));
// unreffing REF($1611:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
// unreffing REF($1610:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 395
org$pandalanguage$pandac$IR* $tmp1526 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1527 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1528 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1529 = *(&local46);
panda$core$Bit $tmp1530 = panda$core$Bit$init$builtin_bit($tmp1529 != NULL);
bool $tmp1531 = $tmp1530.value;
if ($tmp1531) goto block78; else goto block79;
block79:;
panda$core$Int64 $tmp1532 = (panda$core$Int64) {395};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1533, $tmp1532, &$s1534);
abort(); // unreachable
block78:;
org$pandalanguage$pandac$IR$Value* $tmp1535 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1536 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1537 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1538 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1535, $tmp1536, $tmp1537, $tmp1538);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp1527, $tmp1528, param1, $tmp1529, $tmp1535);
$fn1540 $tmp1539 = ($fn1540) $tmp1526->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1541 = $tmp1539($tmp1526, $tmp1527);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
// unreffing REF($1649:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1527));
// unreffing REF($1638:org.pandalanguage.pandac.IR.Statement)
// line 396
org$pandalanguage$pandac$IR* $tmp1542 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1543 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1544 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1545 = *(&local14);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1543, $tmp1544, param1, $tmp1545);
$fn1547 $tmp1546 = ($fn1547) $tmp1542->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1548 = $tmp1546($tmp1542, $tmp1543);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
// unreffing REF($1665:org.pandalanguage.pandac.IR.Statement)
// line 398
org$pandalanguage$pandac$IR* $tmp1549 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1550 = *(&local15);
$fn1552 $tmp1551 = ($fn1552) $tmp1549->$class->vtable[4];
$tmp1551($tmp1549, $tmp1550);
org$pandalanguage$pandac$IR$Value* $tmp1553 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// unreffing inc
*(&local46) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1554 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
// unreffing backwardExclusiveTestBit
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1555 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing backwardInclusiveTestBit
*(&local44) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1556 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
// unreffing backwardDelta
*(&local41) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1557 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
// unreffing forwardExclusiveTestBit
*(&local40) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1558 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
// unreffing forwardInclusiveTestBit
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1559 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing forwardDelta
*(&local36) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1560 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
// unreffing indexLoad
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1561 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
// unreffing context
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1562 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
// unreffing direction
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1563 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// unreffing inclusive
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1564 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
// unreffing negStepComparison
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1565 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
// unreffing negStep
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1566 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
// unreffing stepComparison
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1567 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
// unreffing step
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1568 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing end
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1569 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
// unreffing start
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$ListView* $tmp1570 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
// unreffing rangeFields
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1571 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// unreffing rangeClass
*(&local5) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1572 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
// unreffing stepType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1573 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1574 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1574));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local3 = NULL;
org$pandalanguage$pandac$Pair* local4 = NULL;
// line 405
org$pandalanguage$pandac$IR** $tmp1575 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1576 = *$tmp1575;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
org$pandalanguage$pandac$IR* $tmp1577 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
*(&local0) = $tmp1576;
// line 406
$fn1579 $tmp1578 = ($fn1579) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1580 = $tmp1578(param4);
panda$core$Bit $tmp1581 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1580);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1581;
goto block3;
block2:;
$fn1584 $tmp1583 = ($fn1584) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1585 = $tmp1583(param4);
panda$core$Bit $tmp1586 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit($tmp1585);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
// unreffing REF($19:org.pandalanguage.pandac.Type)
*(&local1) = $tmp1586;
goto block3;
block3:;
panda$core$Bit $tmp1587 = *(&local1);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1589 = (panda$core$Int64) {406};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1590, $tmp1589);
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 407
$fn1592 $tmp1591 = ($fn1592) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1593 = $tmp1591(param4);
panda$core$Bit $tmp1594 = org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param1, $tmp1593);
panda$core$Bit $tmp1595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1594);
bool $tmp1596 = $tmp1595.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
// unreffing REF($37:org.pandalanguage.pandac.Type)
if ($tmp1596) goto block6; else goto block7;
block6:;
// line 408
org$pandalanguage$pandac$IR* $tmp1597 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block7:;
// line 410
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 411
$fn1599 $tmp1598 = ($fn1599) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1600 = $tmp1598(param4);
org$pandalanguage$pandac$Type$Kind* $tmp1601 = &$tmp1600->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1602 = *$tmp1601;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1603;
$tmp1603 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1603->value = $tmp1602;
panda$core$Int64 $tmp1604 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1605 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1604);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1606;
$tmp1606 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
ITable* $tmp1607 = ((panda$core$Equatable*) $tmp1603)->$class->itable;
while ($tmp1607->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1607 = $tmp1607->next;
}
$fn1609 $tmp1608 = $tmp1607->methods[0];
panda$core$Bit $tmp1610 = $tmp1608(((panda$core$Equatable*) $tmp1603), ((panda$core$Equatable*) $tmp1606));
bool $tmp1611 = $tmp1610.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1606)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1603)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp1611) goto block8; else goto block10;
block8:;
// line 412
$fn1613 $tmp1612 = ($fn1613) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1614 = $tmp1612(param4);
org$pandalanguage$pandac$FixedArray** $tmp1615 = &$tmp1614->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1616 = *$tmp1615;
panda$core$Bit $tmp1617 = panda$core$Bit$init$builtin_bit($tmp1616 != NULL);
bool $tmp1618 = $tmp1617.value;
if ($tmp1618) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1619 = (panda$core$Int64) {412};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1620, $tmp1619, &$s1621);
abort(); // unreachable
block11:;
panda$core$Int64 $tmp1622 = (panda$core$Int64) {0};
panda$core$Object* $tmp1623 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1616, $tmp1622);
org$pandalanguage$pandac$Type$Kind* $tmp1624 = &((org$pandalanguage$pandac$Type*) $tmp1623)->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1625 = *$tmp1624;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1626;
$tmp1626 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1626->value = $tmp1625;
panda$core$Int64 $tmp1627 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1628 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1627);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1629;
$tmp1629 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1629->value = $tmp1628;
ITable* $tmp1630 = ((panda$core$Equatable*) $tmp1626)->$class->itable;
while ($tmp1630->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1630 = $tmp1630->next;
}
$fn1632 $tmp1631 = $tmp1630->methods[0];
panda$core$Bit $tmp1633 = $tmp1631(((panda$core$Equatable*) $tmp1626), ((panda$core$Equatable*) $tmp1629));
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp1635 = (panda$core$Int64) {412};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1636, $tmp1635);
abort(); // unreachable
block13:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1629)));
// unreffing REF($100:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1626)));
// unreffing REF($96:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1623);
// unreffing REF($92:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing REF($79:org.pandalanguage.pandac.Type)
// line 413
$fn1638 $tmp1637 = ($fn1638) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1639 = $tmp1637(param4);
org$pandalanguage$pandac$FixedArray** $tmp1640 = &$tmp1639->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1641 = *$tmp1640;
panda$core$Bit $tmp1642 = panda$core$Bit$init$builtin_bit($tmp1641 != NULL);
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp1644 = (panda$core$Int64) {413};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1645, $tmp1644, &$s1646);
abort(); // unreachable
block15:;
panda$core$Int64 $tmp1647 = (panda$core$Int64) {0};
panda$core$Object* $tmp1648 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1641, $tmp1647);
org$pandalanguage$pandac$FixedArray** $tmp1649 = &((org$pandalanguage$pandac$Type*) $tmp1648)->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1650 = *$tmp1649;
panda$core$Bit $tmp1651 = panda$core$Bit$init$builtin_bit($tmp1650 != NULL);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp1653 = (panda$core$Int64) {413};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1654, $tmp1653, &$s1655);
abort(); // unreachable
block17:;
panda$core$Int64 $tmp1656 = (panda$core$Int64) {1};
panda$core$Object* $tmp1657 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1650, $tmp1656);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1657)));
org$pandalanguage$pandac$Type* $tmp1658 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1658));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1657);
panda$core$Panda$unref$panda$core$Object$Q($tmp1657);
// unreffing REF($149:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1648);
// unreffing REF($135:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
// unreffing REF($122:org.pandalanguage.pandac.Type)
goto block9;
block10:;
// line 1
// line 416
$fn1660 $tmp1659 = ($fn1660) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1661 = $tmp1659(param4);
org$pandalanguage$pandac$Type$Kind* $tmp1662 = &$tmp1661->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1663 = *$tmp1662;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1664;
$tmp1664 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1664->value = $tmp1663;
panda$core$Int64 $tmp1665 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1666 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1665);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1667;
$tmp1667 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1667->value = $tmp1666;
ITable* $tmp1668 = ((panda$core$Equatable*) $tmp1664)->$class->itable;
while ($tmp1668->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1668 = $tmp1668->next;
}
$fn1670 $tmp1669 = $tmp1668->methods[0];
panda$core$Bit $tmp1671 = $tmp1669(((panda$core$Equatable*) $tmp1664), ((panda$core$Equatable*) $tmp1667));
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp1673 = (panda$core$Int64) {416};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1674, $tmp1673);
abort(); // unreachable
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1667)));
// unreffing REF($177:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1664)));
// unreffing REF($173:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// unreffing REF($170:org.pandalanguage.pandac.Type)
// line 417
$fn1676 $tmp1675 = ($fn1676) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1677 = $tmp1675(param4);
org$pandalanguage$pandac$FixedArray** $tmp1678 = &$tmp1677->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1679 = *$tmp1678;
panda$core$Bit $tmp1680 = panda$core$Bit$init$builtin_bit($tmp1679 != NULL);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp1682 = (panda$core$Int64) {417};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1683, $tmp1682, &$s1684);
abort(); // unreachable
block21:;
panda$core$Int64 $tmp1685 = (panda$core$Int64) {1};
panda$core$Object* $tmp1686 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1679, $tmp1685);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1686)));
org$pandalanguage$pandac$Type* $tmp1687 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1687));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1686);
panda$core$Panda$unref$panda$core$Object$Q($tmp1686);
// unreffing REF($209:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing REF($196:org.pandalanguage.pandac.Type)
goto block9;
block9:;
// line 419
org$pandalanguage$pandac$Type* $tmp1688 = *(&local2);
panda$core$Bit $tmp1689 = org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit($tmp1688);
panda$core$Bit $tmp1690 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1689);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block23; else goto block24;
block23:;
// line 420
$fn1693 $tmp1692 = ($fn1693) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1694 = $tmp1692(param4);
panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1696, ((panda$core$Object*) $tmp1694));
panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1698);
panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1700, $tmp1697);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1699);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
// unreffing REF($236:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing REF($235:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing REF($234:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
// unreffing REF($232:org.pandalanguage.pandac.Type)
// line 422
org$pandalanguage$pandac$Type* $tmp1701 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing elementType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1702 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block24:;
// line 424
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1703 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp1703, param0);
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1704 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
*(&local3) = $tmp1703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
// unreffing REF($263:org.pandalanguage.pandac.Compiler.AutoScope)
// line 425
panda$core$Int64 $tmp1705 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp1706 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp1705);
org$pandalanguage$pandac$Type* $tmp1707 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1708 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp1707);
org$pandalanguage$pandac$Pair* $tmp1709 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Variable$Corg$pandalanguage$pandac$IR$Value$Q$GT$Q(param0, param3, $tmp1706, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp1708);
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
org$pandalanguage$pandac$Pair* $tmp1710 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
*(&local4) = $tmp1709;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing REF($281:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Variable, org.pandalanguage.pandac.IR.Value?>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
// unreffing REF($279:org.pandalanguage.pandac.Type)
// line 427
org$pandalanguage$pandac$Pair* $tmp1711 = *(&local4);
panda$core$Bit $tmp1712 = panda$core$Bit$init$builtin_bit($tmp1711 == NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block25; else goto block26;
block25:;
// line 428
org$pandalanguage$pandac$Pair* $tmp1714 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1714));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1715 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
// unreffing scope
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Type* $tmp1716 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
// unreffing elementType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1717 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block26:;
// line 430
org$pandalanguage$pandac$Pair* $tmp1718 = *(&local4);
panda$core$Bit $tmp1719 = panda$core$Bit$init$builtin_bit($tmp1718 != NULL);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp1721 = (panda$core$Int64) {430};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1722, $tmp1721, &$s1723);
abort(); // unreachable
block27:;
panda$core$Object** $tmp1724 = &$tmp1718->second;
panda$core$Object* $tmp1725 = *$tmp1724;
panda$core$Bit $tmp1726 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$IR$Value*) $tmp1725) == NULL);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp1728 = (panda$core$Int64) {430};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1729, $tmp1728);
abort(); // unreachable
block29:;
// line 431
org$pandalanguage$pandac$Pair* $tmp1730 = *(&local4);
panda$core$Bit $tmp1731 = panda$core$Bit$init$builtin_bit($tmp1730 != NULL);
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp1733 = (panda$core$Int64) {431};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1734, $tmp1733, &$s1735);
abort(); // unreachable
block33:;
panda$core$Object** $tmp1736 = &$tmp1730->first;
panda$core$Object* $tmp1737 = *$tmp1736;
org$pandalanguage$pandac$Type** $tmp1738 = &((org$pandalanguage$pandac$Variable*) $tmp1737)->type;
org$pandalanguage$pandac$Type* $tmp1739 = *$tmp1738;
panda$core$Bit $tmp1740 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1739);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block31; else goto block32;
block31:;
// line 432
panda$collections$Stack** $tmp1742 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1743 = *$tmp1742;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp1744 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp1745 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Pair* $tmp1746 = *(&local4);
panda$core$Bit $tmp1747 = panda$core$Bit$init$builtin_bit($tmp1746 != NULL);
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp1749 = (panda$core$Int64) {432};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1750, $tmp1749, &$s1751);
abort(); // unreachable
block35:;
panda$core$Object** $tmp1752 = &$tmp1746->first;
panda$core$Object* $tmp1753 = *$tmp1752;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable($tmp1744, $tmp1745, ((org$pandalanguage$pandac$Variable*) $tmp1753));
panda$collections$Stack$push$panda$collections$Stack$T($tmp1743, ((panda$core$Object*) $tmp1744));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// unreffing REF($365:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block32;
block32:;
// line 434
$fn1755 $tmp1754 = ($fn1755) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1756 = $tmp1754(param4);
panda$core$Bit $tmp1757 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1756);
bool $tmp1758 = $tmp1757.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// unreffing REF($388:org.pandalanguage.pandac.Type)
if ($tmp1758) goto block37; else goto block39;
block37:;
// line 435
org$pandalanguage$pandac$Pair* $tmp1759 = *(&local4);
panda$core$Bit $tmp1760 = panda$core$Bit$init$builtin_bit($tmp1759 != NULL);
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp1762 = (panda$core$Int64) {435};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1763, $tmp1762, &$s1764);
abort(); // unreachable
block40:;
panda$core$Object** $tmp1765 = &$tmp1759->first;
panda$core$Object* $tmp1766 = *$tmp1765;
org$pandalanguage$pandac$statement$For$compileSimpleRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, ((org$pandalanguage$pandac$Variable*) $tmp1766), param4, param5);
goto block38;
block39:;
// line 1
// line 438
org$pandalanguage$pandac$Pair* $tmp1767 = *(&local4);
panda$core$Bit $tmp1768 = panda$core$Bit$init$builtin_bit($tmp1767 != NULL);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp1770 = (panda$core$Int64) {438};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1771, $tmp1770, &$s1772);
abort(); // unreachable
block42:;
panda$core$Object** $tmp1773 = &$tmp1767->first;
panda$core$Object* $tmp1774 = *$tmp1773;
org$pandalanguage$pandac$statement$For$compileSteppedRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, ((org$pandalanguage$pandac$Variable*) $tmp1774), param4, param5);
goto block38;
block38:;
org$pandalanguage$pandac$Pair* $tmp1775 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1775));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1776 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1776));
// unreffing scope
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Type* $tmp1777 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
// unreffing elementType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1778 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$Position local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$Type* local7 = NULL;
org$pandalanguage$pandac$Compiler$TypeContext* local8 = NULL;
panda$core$Bit local9;
panda$core$Bit local10;
// line 446
org$pandalanguage$pandac$IR** $tmp1779 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1780 = *$tmp1779;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
org$pandalanguage$pandac$IR* $tmp1781 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1781));
*(&local0) = $tmp1780;
// line 447
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 448
panda$core$Int64* $tmp1782 = &param3->$rawValue;
panda$core$Int64 $tmp1783 = *$tmp1782;
panda$core$Int64 $tmp1784 = (panda$core$Int64) {47};
panda$core$Bit $tmp1785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1783, $tmp1784);
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1787 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1788 = *$tmp1787;
*(&local2) = $tmp1788;
panda$core$String** $tmp1789 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1790 = *$tmp1789;
org$pandalanguage$pandac$ASTNode** $tmp1791 = (org$pandalanguage$pandac$ASTNode**) (param3->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1792 = *$tmp1791;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
org$pandalanguage$pandac$ASTNode* $tmp1793 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
*(&local3) = $tmp1792;
// line 450
org$pandalanguage$pandac$Scanner** $tmp1794 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp1795 = *$tmp1794;
org$pandalanguage$pandac$ASTNode* $tmp1796 = *(&local3);
panda$core$Bit $tmp1797 = panda$core$Bit$init$builtin_bit($tmp1796 != NULL);
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1799 = (panda$core$Int64) {450};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1800, $tmp1799, &$s1801);
abort(); // unreachable
block4:;
org$pandalanguage$pandac$Type* $tmp1802 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp1795, $tmp1796);
org$pandalanguage$pandac$Type* $tmp1803 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1802);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1803));
org$pandalanguage$pandac$Type* $tmp1804 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1804));
*(&local4) = $tmp1803;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1803));
// unreffing REF($46:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
// unreffing REF($45:org.pandalanguage.pandac.Type)
// line 451
org$pandalanguage$pandac$Type* $tmp1805 = *(&local4);
panda$core$Bit $tmp1806 = panda$core$Bit$init$builtin_bit($tmp1805 != NULL);
bool $tmp1807 = $tmp1806.value;
if ($tmp1807) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1808 = (panda$core$Int64) {451};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1809, $tmp1808, &$s1810);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$Type$Kind* $tmp1811 = &$tmp1805->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1812 = *$tmp1811;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1813;
$tmp1813 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1813->value = $tmp1812;
panda$core$Int64 $tmp1814 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1815 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1814);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1816;
$tmp1816 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1816->value = $tmp1815;
ITable* $tmp1817 = ((panda$core$Equatable*) $tmp1813)->$class->itable;
while ($tmp1817->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1817 = $tmp1817->next;
}
$fn1819 $tmp1818 = $tmp1817->methods[0];
panda$core$Bit $tmp1820 = $tmp1818(((panda$core$Equatable*) $tmp1813), ((panda$core$Equatable*) $tmp1816));
bool $tmp1821 = $tmp1820.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1816)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1813)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1821) goto block6; else goto block7;
block6:;
// line 452
org$pandalanguage$pandac$Position $tmp1822 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1823 = *(&local4);
panda$core$Bit $tmp1824 = panda$core$Bit$init$builtin_bit($tmp1823 != NULL);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1826 = (panda$core$Int64) {452};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1827, $tmp1826, &$s1828);
abort(); // unreachable
block10:;
panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1830, ((panda$core$Object*) $tmp1823));
panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1832);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp1822, $tmp1831);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
// unreffing REF($99:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
// unreffing REF($98:panda.core.String)
// line 453
org$pandalanguage$pandac$Type* $tmp1833 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1833));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1834 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1835 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp1836 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block7:;
// line 455
org$pandalanguage$pandac$Type* $tmp1837 = *(&local4);
panda$core$Bit $tmp1838 = panda$core$Bit$init$builtin_bit($tmp1837 != NULL);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp1840 = (panda$core$Int64) {455};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1841, $tmp1840, &$s1842);
abort(); // unreachable
block14:;
panda$core$Bit $tmp1843 = org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit($tmp1837);
panda$core$Bit $tmp1844 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1843);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block12; else goto block13;
block12:;
// line 456
org$pandalanguage$pandac$Position $tmp1846 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1847 = *(&local4);
panda$core$Bit $tmp1848 = panda$core$Bit$init$builtin_bit($tmp1847 != NULL);
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1850 = (panda$core$Int64) {457};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1851, $tmp1850, &$s1852);
abort(); // unreachable
block16:;
panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1854, ((panda$core$Object*) $tmp1847));
panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1856);
panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1858, $tmp1855);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp1846, $tmp1857);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
// unreffing REF($156:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
// unreffing REF($155:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1853));
// unreffing REF($154:panda.core.String)
// line 458
org$pandalanguage$pandac$Type* $tmp1859 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1860 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1861 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp1862 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block13:;
// line 460
panda$core$Int64* $tmp1863 = &param4->$rawValue;
panda$core$Int64 $tmp1864 = *$tmp1863;
panda$core$Int64 $tmp1865 = (panda$core$Int64) {36};
panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1864, $tmp1865);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp1868 = (org$pandalanguage$pandac$Position*) (param4->$data + 0);
org$pandalanguage$pandac$Position $tmp1869 = *$tmp1868;
org$pandalanguage$pandac$ASTNode** $tmp1870 = (org$pandalanguage$pandac$ASTNode**) (param4->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1871 = *$tmp1870;
panda$core$Bit* $tmp1872 = (panda$core$Bit*) (param4->$data + 24);
panda$core$Bit $tmp1873 = *$tmp1872;
org$pandalanguage$pandac$ASTNode** $tmp1874 = (org$pandalanguage$pandac$ASTNode**) (param4->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1875 = *$tmp1874;
org$pandalanguage$pandac$ASTNode** $tmp1876 = (org$pandalanguage$pandac$ASTNode**) (param4->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1877 = *$tmp1876;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
org$pandalanguage$pandac$ASTNode* $tmp1878 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
*(&local5) = $tmp1877;
// line 462
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
// line 463
org$pandalanguage$pandac$ASTNode* $tmp1879 = *(&local5);
panda$core$Bit $tmp1880 = panda$core$Bit$init$builtin_bit($tmp1879 != NULL);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block21; else goto block23;
block21:;
// line 464
org$pandalanguage$pandac$Type* $tmp1882 = *(&local4);
panda$core$Bit $tmp1883 = panda$core$Bit$init$builtin_bit($tmp1882 != NULL);
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp1885 = (panda$core$Int64) {464};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1886, $tmp1885, &$s1887);
abort(); // unreachable
block24:;
org$pandalanguage$pandac$Type* $tmp1888 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1882);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
org$pandalanguage$pandac$Type* $tmp1889 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
*(&local6) = $tmp1888;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
// unreffing REF($231:org.pandalanguage.pandac.Type)
goto block22;
block23:;
// line 1
// line 467
org$pandalanguage$pandac$Type* $tmp1890 = *(&local4);
panda$core$Bit $tmp1891 = panda$core$Bit$init$builtin_bit($tmp1890 != NULL);
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp1893 = (panda$core$Int64) {467};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1894, $tmp1893, &$s1895);
abort(); // unreachable
block26:;
org$pandalanguage$pandac$Type* $tmp1896 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1890);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
org$pandalanguage$pandac$Type* $tmp1897 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
*(&local6) = $tmp1896;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
// unreffing REF($253:org.pandalanguage.pandac.Type)
goto block22;
block22:;
// line 469
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1898 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1899 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1900 = *(&local6);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1898, $tmp1899, $tmp1900);
org$pandalanguage$pandac$IR$Value* $tmp1901 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp1898);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
org$pandalanguage$pandac$IR$Value* $tmp1902 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
*(&local1) = $tmp1901;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
// unreffing REF($269:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// unreffing REF($265:org.pandalanguage.pandac.Compiler.TypeContext)
org$pandalanguage$pandac$Type* $tmp1903 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
// unreffing type
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1904 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
// unreffing step
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block18;
block20:;
// line 472
panda$core$Bit $tmp1905 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1907 = (panda$core$Int64) {472};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1908, $tmp1907);
abort(); // unreachable
block28:;
goto block18;
block18:;
org$pandalanguage$pandac$Type* $tmp1909 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1910 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 477
org$pandalanguage$pandac$Type* $tmp1911 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param4);
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
org$pandalanguage$pandac$Type* $tmp1912 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
*(&local7) = $tmp1911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// unreffing REF($313:org.pandalanguage.pandac.Type?)
// line 478
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1913 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1914 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1913, $tmp1914);
*(&local8) = ((org$pandalanguage$pandac$Compiler$TypeContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1913));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1915 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
*(&local8) = $tmp1913;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1913));
// unreffing REF($325:org.pandalanguage.pandac.Compiler.TypeContext)
// line 479
org$pandalanguage$pandac$Type* $tmp1916 = *(&local7);
panda$core$Bit $tmp1917 = panda$core$Bit$init$builtin_bit($tmp1916 != NULL);
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Type* $tmp1919 = *(&local7);
panda$core$Bit $tmp1920 = panda$core$Bit$init$builtin_bit($tmp1919 != NULL);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp1922 = (panda$core$Int64) {479};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1923, $tmp1922, &$s1924);
abort(); // unreachable
block35:;
panda$core$Bit $tmp1925 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1919);
*(&local9) = $tmp1925;
goto block34;
block33:;
*(&local9) = $tmp1917;
goto block34;
block34:;
panda$core$Bit $tmp1926 = *(&local9);
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block30; else goto block37;
block30:;
// line 480
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1928 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1929 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1930 = *(&local7);
panda$core$Bit $tmp1931 = panda$core$Bit$init$builtin_bit($tmp1930 != NULL);
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp1933 = (panda$core$Int64) {480};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1934, $tmp1933, &$s1935);
abort(); // unreachable
block38:;
org$pandalanguage$pandac$FixedArray** $tmp1936 = &$tmp1930->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1937 = *$tmp1936;
panda$core$Bit $tmp1938 = panda$core$Bit$init$builtin_bit($tmp1937 != NULL);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp1940 = (panda$core$Int64) {480};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1941, $tmp1940, &$s1942);
abort(); // unreachable
block40:;
panda$core$Int64 $tmp1943 = (panda$core$Int64) {1};
panda$core$Object* $tmp1944 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1937, $tmp1943);
org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1944));
org$pandalanguage$pandac$Type* $tmp1946 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1945);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1928, $tmp1929, $tmp1946);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1947 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
*(&local8) = $tmp1928;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
// unreffing REF($388:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
// unreffing REF($387:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1944);
// unreffing REF($385:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
// unreffing REF($362:org.pandalanguage.pandac.Compiler.TypeContext)
goto block31;
block37:;
// line 482
org$pandalanguage$pandac$Type* $tmp1948 = *(&local7);
panda$core$Bit $tmp1949 = panda$core$Bit$init$builtin_bit($tmp1948 != NULL);
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Type* $tmp1951 = *(&local7);
panda$core$Bit $tmp1952 = panda$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp1954 = (panda$core$Int64) {482};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1955, $tmp1954, &$s1956);
abort(); // unreachable
block47:;
panda$core$Bit $tmp1957 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit($tmp1951);
*(&local10) = $tmp1957;
goto block46;
block45:;
*(&local10) = $tmp1949;
goto block46;
block46:;
panda$core$Bit $tmp1958 = *(&local10);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block42; else goto block43;
block42:;
// line 483
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1960 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1961 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1962 = *(&local7);
panda$core$Bit $tmp1963 = panda$core$Bit$init$builtin_bit($tmp1962 != NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1965 = (panda$core$Int64) {484};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1966, $tmp1965, &$s1967);
abort(); // unreachable
block49:;
org$pandalanguage$pandac$FixedArray** $tmp1968 = &$tmp1962->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1969 = *$tmp1968;
panda$core$Bit $tmp1970 = panda$core$Bit$init$builtin_bit($tmp1969 != NULL);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp1972 = (panda$core$Int64) {484};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1973, $tmp1972, &$s1974);
abort(); // unreachable
block51:;
panda$core$Int64 $tmp1975 = (panda$core$Int64) {1};
panda$core$Object* $tmp1976 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1969, $tmp1975);
org$pandalanguage$pandac$Type* $tmp1977 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1976));
org$pandalanguage$pandac$Type* $tmp1978 = *(&local7);
panda$core$Bit $tmp1979 = panda$core$Bit$init$builtin_bit($tmp1978 != NULL);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp1981 = (panda$core$Int64) {484};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1982, $tmp1981, &$s1983);
abort(); // unreachable
block53:;
org$pandalanguage$pandac$FixedArray** $tmp1984 = &$tmp1978->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1985 = *$tmp1984;
panda$core$Bit $tmp1986 = panda$core$Bit$init$builtin_bit($tmp1985 != NULL);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp1988 = (panda$core$Int64) {484};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1989, $tmp1988, &$s1990);
abort(); // unreachable
block55:;
panda$core$Int64 $tmp1991 = (panda$core$Int64) {2};
panda$core$Object* $tmp1992 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1985, $tmp1991);
org$pandalanguage$pandac$Type* $tmp1993 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1977, ((org$pandalanguage$pandac$Type*) $tmp1992));
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1960, $tmp1961, $tmp1993);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1994 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
*(&local8) = $tmp1960;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
// unreffing REF($482:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1992);
// unreffing REF($480:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
// unreffing REF($458:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1976);
// unreffing REF($456:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
// unreffing REF($433:org.pandalanguage.pandac.Compiler.TypeContext)
goto block43;
block43:;
goto block31;
block31:;
// line 486
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1995 = *(&local8);
org$pandalanguage$pandac$IR$Value* $tmp1996 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp1995);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
org$pandalanguage$pandac$IR$Value* $tmp1997 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
*(&local1) = $tmp1996;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
// unreffing REF($509:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1998 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$Compiler$TypeContext*) NULL);
org$pandalanguage$pandac$Type* $tmp1999 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
// unreffing preferred
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 489
org$pandalanguage$pandac$IR$Value* $tmp2000 = *(&local1);
panda$core$Bit $tmp2001 = panda$core$Bit$init$builtin_bit($tmp2000 == NULL);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block57; else goto block58;
block57:;
// line 490
org$pandalanguage$pandac$IR$Value* $tmp2003 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2004 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block58:;
// line 492
org$pandalanguage$pandac$IR$Value* $tmp2005 = *(&local1);
panda$core$Bit $tmp2006 = panda$core$Bit$init$builtin_bit($tmp2005 != NULL);
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp2008 = (panda$core$Int64) {492};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2009, $tmp2008, &$s2010);
abort(); // unreachable
block59:;
org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp2005, param5);
org$pandalanguage$pandac$IR$Value* $tmp2011 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2012 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$Compiler$AutoContext* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local7 = NULL;
org$pandalanguage$pandac$Pair* local8 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
org$pandalanguage$pandac$IR$Value* local11 = NULL;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
// line 499
org$pandalanguage$pandac$IR** $tmp2013 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp2014 = *$tmp2013;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2014));
org$pandalanguage$pandac$IR* $tmp2015 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
*(&local0) = $tmp2014;
// line 500
org$pandalanguage$pandac$IR* $tmp2016 = *(&local0);
$fn2018 $tmp2017 = ($fn2018) $tmp2016->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp2019 = $tmp2017($tmp2016, &$s2020);
*(&local1) = $tmp2019;
// line 501
org$pandalanguage$pandac$IR* $tmp2021 = *(&local0);
$fn2023 $tmp2022 = ($fn2023) $tmp2021->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp2024 = $tmp2022($tmp2021, &$s2025);
*(&local2) = $tmp2024;
// line 502
org$pandalanguage$pandac$IR* $tmp2026 = *(&local0);
$fn2028 $tmp2027 = ($fn2028) $tmp2026->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp2029 = $tmp2027($tmp2026, &$s2030);
*(&local3) = $tmp2029;
// line 503
org$pandalanguage$pandac$Compiler$AutoContext* $tmp2031 = (org$pandalanguage$pandac$Compiler$AutoContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp2032 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp2033 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp2034 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp2035 = *(&local1);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp2032, $tmp2033, param2, $tmp2034, $tmp2035);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp2031, param0, $tmp2032);
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp2036 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
*(&local4) = $tmp2031;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2032));
// unreffing REF($27:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing REF($26:org.pandalanguage.pandac.Compiler.AutoContext)
// line 504
$fn2038 $tmp2037 = ($fn2038) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2039 = $tmp2037(param4);
org$pandalanguage$pandac$Type$Kind* $tmp2040 = &$tmp2039->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2041 = *$tmp2040;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2042;
$tmp2042 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2042->value = $tmp2041;
panda$core$Int64 $tmp2043 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp2044 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2043);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2045;
$tmp2045 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2045->value = $tmp2044;
ITable* $tmp2046 = ((panda$core$Equatable*) $tmp2042)->$class->itable;
while ($tmp2046->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2046 = $tmp2046->next;
}
$fn2048 $tmp2047 = $tmp2046->methods[0];
panda$core$Bit $tmp2049 = $tmp2047(((panda$core$Equatable*) $tmp2042), ((panda$core$Equatable*) $tmp2045));
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block1; else goto block2;
block1:;
$fn2052 $tmp2051 = ($fn2052) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2053 = $tmp2051(param4);
org$pandalanguage$pandac$FixedArray** $tmp2054 = &$tmp2053->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2055 = *$tmp2054;
panda$core$Bit $tmp2056 = panda$core$Bit$init$builtin_bit($tmp2055 != NULL);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp2058 = (panda$core$Int64) {505};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2059, $tmp2058, &$s2060);
abort(); // unreachable
block4:;
panda$core$Int64 $tmp2061 = (panda$core$Int64) {0};
panda$core$Object* $tmp2062 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2055, $tmp2061);
org$pandalanguage$pandac$Type* $tmp2063 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp2064 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2062), $tmp2063);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
// unreffing REF($76:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2062);
// unreffing REF($74:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
// unreffing REF($61:org.pandalanguage.pandac.Type)
*(&local5) = $tmp2064;
goto block3;
block2:;
*(&local5) = $tmp2049;
goto block3;
block3:;
panda$core$Bit $tmp2065 = *(&local5);
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2067 = (panda$core$Int64) {504};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2068, $tmp2067);
abort(); // unreachable
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2045)));
// unreffing REF($55:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2042)));
// unreffing REF($51:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
// unreffing REF($48:org.pandalanguage.pandac.Type)
// line 506
org$pandalanguage$pandac$IR* $tmp2069 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2070 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2071 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp2072 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp2070, $tmp2071, param1, $tmp2072);
$fn2074 $tmp2073 = ($fn2074) $tmp2069->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2075 = $tmp2073($tmp2069, $tmp2070);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
// unreffing REF($108:org.pandalanguage.pandac.IR.Statement)
// line 507
org$pandalanguage$pandac$IR* $tmp2076 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp2077 = *(&local1);
$fn2079 $tmp2078 = ($fn2079) $tmp2076->$class->vtable[4];
$tmp2078($tmp2076, $tmp2077);
// line 508
panda$collections$Array* $tmp2080 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2080);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp2081 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp2082 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp2083 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2081, $tmp2082, $tmp2083);
org$pandalanguage$pandac$IR$Value* $tmp2084 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param4, &$s2085, ((panda$collections$ListView*) $tmp2080), $tmp2081);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
org$pandalanguage$pandac$IR$Value* $tmp2086 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
*(&local6) = $tmp2084;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// unreffing REF($131:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2083));
// unreffing REF($129:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2081));
// unreffing REF($127:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing REF($123:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 510
org$pandalanguage$pandac$IR$Value* $tmp2087 = *(&local6);
panda$core$Bit $tmp2088 = panda$core$Bit$init$builtin_bit($tmp2087 == NULL);
bool $tmp2089 = $tmp2088.value;
if ($tmp2089) goto block8; else goto block9;
block8:;
// line 511
org$pandalanguage$pandac$IR$Value* $tmp2090 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2090));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp2091 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp2092 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block9:;
// line 513
org$pandalanguage$pandac$IR* $tmp2093 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2094 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2095 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp2096 = *(&local6);
panda$core$Bit $tmp2097 = panda$core$Bit$init$builtin_bit($tmp2096 != NULL);
bool $tmp2098 = $tmp2097.value;
if ($tmp2098) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp2099 = (panda$core$Int64) {514};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2100, $tmp2099, &$s2101);
abort(); // unreachable
block10:;
org$pandalanguage$pandac$IR$Value* $tmp2102 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp2096);
org$pandalanguage$pandac$IR$Block$ID $tmp2103 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp2104 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp2094, $tmp2095, param1, $tmp2102, $tmp2103, $tmp2104);
$fn2106 $tmp2105 = ($fn2106) $tmp2093->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2107 = $tmp2105($tmp2093, $tmp2094);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
// unreffing REF($187:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
// unreffing REF($176:org.pandalanguage.pandac.IR.Statement)
// line 515
org$pandalanguage$pandac$IR* $tmp2108 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp2109 = *(&local2);
$fn2111 $tmp2110 = ($fn2111) $tmp2108->$class->vtable[4];
$tmp2110($tmp2108, $tmp2109);
// line 1
// line 517
org$pandalanguage$pandac$Compiler$AutoScope* $tmp2112 = (org$pandalanguage$pandac$Compiler$AutoScope*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp2112, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp2113 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
*(&local7) = $tmp2112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
// unreffing REF($206:org.pandalanguage.pandac.Compiler.AutoScope)
// line 518
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 1
// line 520
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp2114 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp2114, param0);
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp2115 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
*(&local9) = $tmp2114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
// unreffing REF($222:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 521
panda$core$Int64 $tmp2116 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp2117 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp2116);
$fn2119 $tmp2118 = ($fn2119) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2120 = $tmp2118(param4);
org$pandalanguage$pandac$FixedArray** $tmp2121 = &$tmp2120->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2122 = *$tmp2121;
panda$core$Bit $tmp2123 = panda$core$Bit$init$builtin_bit($tmp2122 != NULL);
bool $tmp2124 = $tmp2123.value;
if ($tmp2124) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2125 = (panda$core$Int64) {522};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2126, $tmp2125, &$s2127);
abort(); // unreachable
block12:;
panda$core$Int64 $tmp2128 = (panda$core$Int64) {1};
panda$core$Object* $tmp2129 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2122, $tmp2128);
org$pandalanguage$pandac$Pair* $tmp2130 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Variable$Corg$pandalanguage$pandac$IR$Value$Q$GT$Q(param0, param3, $tmp2117, ((org$pandalanguage$pandac$ASTNode*) NULL), ((org$pandalanguage$pandac$Type*) $tmp2129));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
org$pandalanguage$pandac$Pair* $tmp2131 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
*(&local8) = $tmp2130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
// unreffing REF($254:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Variable, org.pandalanguage.pandac.IR.Value?>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2129);
// unreffing REF($251:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
// unreffing REF($238:org.pandalanguage.pandac.Type)
// line 523
org$pandalanguage$pandac$Pair* $tmp2132 = *(&local8);
panda$core$Bit $tmp2133 = panda$core$Bit$init$builtin_bit($tmp2132 == NULL);
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block14; else goto block15;
block14:;
// line 524
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp2135 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
// unreffing unrefs
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$Pair* $tmp2136 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
// unreffing compiledTarget
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp2137 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2138 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp2139 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp2140 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block15:;
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp2141 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
// unreffing unrefs
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 527
org$pandalanguage$pandac$Pair* $tmp2142 = *(&local8);
panda$core$Bit $tmp2143 = panda$core$Bit$init$builtin_bit($tmp2142 != NULL);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp2145 = (panda$core$Int64) {527};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2146, $tmp2145, &$s2147);
abort(); // unreachable
block16:;
panda$core$Object** $tmp2148 = &$tmp2142->first;
panda$core$Object* $tmp2149 = *$tmp2148;
org$pandalanguage$pandac$Type** $tmp2150 = &((org$pandalanguage$pandac$Variable*) $tmp2149)->type;
org$pandalanguage$pandac$Type* $tmp2151 = *$tmp2150;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
org$pandalanguage$pandac$Type* $tmp2152 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2152));
*(&local10) = $tmp2151;
// line 528
org$pandalanguage$pandac$Type* $tmp2153 = *(&local10);
panda$core$Bit $tmp2154 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp2153);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block18; else goto block19;
block18:;
// line 529
panda$collections$Stack** $tmp2156 = &param0->enclosingContexts;
panda$collections$Stack* $tmp2157 = *$tmp2156;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp2158 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp2159 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Pair* $tmp2160 = *(&local8);
panda$core$Bit $tmp2161 = panda$core$Bit$init$builtin_bit($tmp2160 != NULL);
bool $tmp2162 = $tmp2161.value;
if ($tmp2162) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp2163 = (panda$core$Int64) {530};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2164, $tmp2163, &$s2165);
abort(); // unreachable
block20:;
panda$core$Object** $tmp2166 = &$tmp2160->first;
panda$core$Object* $tmp2167 = *$tmp2166;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable($tmp2158, $tmp2159, ((org$pandalanguage$pandac$Variable*) $tmp2167));
panda$collections$Stack$push$panda$collections$Stack$T($tmp2157, ((panda$core$Object*) $tmp2158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
// unreffing REF($344:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block19;
block19:;
// line 532
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 533
panda$collections$Array* $tmp2168 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2168);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp2169 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp2170 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp2171 = *(&local10);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2169, $tmp2170, $tmp2171);
org$pandalanguage$pandac$IR$Value* $tmp2172 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param4, &$s2173, ((panda$collections$ListView*) $tmp2168), $tmp2169);
panda$core$Bit $tmp2174 = panda$core$Bit$init$builtin_bit($tmp2172 != NULL);
bool $tmp2175 = $tmp2174.value;
if ($tmp2175) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2176 = (panda$core$Int64) {533};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2177, $tmp2176, &$s2178);
abort(); // unreachable
block22:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
org$pandalanguage$pandac$IR$Value* $tmp2179 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
*(&local11) = $tmp2172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
// unreffing REF($376:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2169));
// unreffing REF($372:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
// unreffing REF($368:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 535
org$pandalanguage$pandac$IR$Value* $tmp2180 = *(&local11);
panda$core$Bit $tmp2181 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block24; else goto block25;
block24:;
// line 536
org$pandalanguage$pandac$IR$Value* $tmp2183 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
// unreffing next
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp2184 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp2185 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing compiledTarget
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp2186 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2187 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp2188 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2188));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp2189 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block25:;
// line 538
org$pandalanguage$pandac$lvalue$VariableLValue* $tmp2190 = (org$pandalanguage$pandac$lvalue$VariableLValue*) frostObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$VariableLValue$class);
org$pandalanguage$pandac$Pair* $tmp2191 = *(&local8);
panda$core$Bit $tmp2192 = panda$core$Bit$init$builtin_bit($tmp2191 != NULL);
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp2194 = (panda$core$Int64) {538};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2195, $tmp2194, &$s2196);
abort(); // unreachable
block26:;
panda$core$Object** $tmp2197 = &$tmp2191->first;
panda$core$Object* $tmp2198 = *$tmp2197;
org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp2190, param0, param1, ((org$pandalanguage$pandac$Variable*) $tmp2198));
org$pandalanguage$pandac$IR$Value* $tmp2199 = *(&local11);
$fn2201 $tmp2200 = ($fn2201) $tmp2190->$class->vtable[4];
$tmp2200($tmp2190, $tmp2199);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($443:org.pandalanguage.pandac.lvalue.VariableLValue)
// line 539
ITable* $tmp2202 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp2202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2202 = $tmp2202->next;
}
$fn2204 $tmp2203 = $tmp2202->methods[0];
panda$collections$Iterator* $tmp2205 = $tmp2203(((panda$collections$Iterable*) param5));
goto block28;
block28:;
ITable* $tmp2206 = $tmp2205->$class->itable;
while ($tmp2206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2206 = $tmp2206->next;
}
$fn2208 $tmp2207 = $tmp2206->methods[0];
panda$core$Bit $tmp2209 = $tmp2207($tmp2205);
bool $tmp2210 = $tmp2209.value;
if ($tmp2210) goto block30; else goto block29;
block29:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2211 = $tmp2205->$class->itable;
while ($tmp2211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[1];
panda$core$Object* $tmp2214 = $tmp2212($tmp2205);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2214)));
org$pandalanguage$pandac$ASTNode* $tmp2215 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2215));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp2214);
// line 540
org$pandalanguage$pandac$ASTNode* $tmp2216 = *(&local12);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp2216);
panda$core$Panda$unref$panda$core$Object$Q($tmp2214);
// unreffing REF($478:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2217 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2217));
// unreffing s
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block30:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
// unreffing REF($467:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp2218 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
// unreffing next
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp2219 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2219));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp2220 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2220));
// unreffing compiledTarget
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp2221 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2221));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 543
org$pandalanguage$pandac$IR* $tmp2222 = *(&local0);
$fn2224 $tmp2223 = ($fn2224) $tmp2222->$class->vtable[5];
panda$core$Bit $tmp2225 = $tmp2223($tmp2222);
panda$core$Bit $tmp2226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2225);
bool $tmp2227 = $tmp2226.value;
if ($tmp2227) goto block31; else goto block32;
block31:;
// line 544
org$pandalanguage$pandac$IR* $tmp2228 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2229 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2230 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp2231 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp2229, $tmp2230, param1, $tmp2231);
$fn2233 $tmp2232 = ($fn2233) $tmp2228->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2234 = $tmp2232($tmp2228, $tmp2229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2229));
// unreffing REF($530:org.pandalanguage.pandac.IR.Statement)
goto block32;
block32:;
// line 546
org$pandalanguage$pandac$IR* $tmp2235 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp2236 = *(&local3);
$fn2238 $tmp2237 = ($fn2238) $tmp2235->$class->vtable[4];
$tmp2237($tmp2235, $tmp2236);
org$pandalanguage$pandac$IR$Value* $tmp2239 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2239));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp2240 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2240));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp2241 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2241));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
// line 552
panda$core$Int64* $tmp2242 = &param4->$rawValue;
panda$core$Int64 $tmp2243 = *$tmp2242;
panda$core$Int64 $tmp2244 = (panda$core$Int64) {36};
panda$core$Bit $tmp2245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2243, $tmp2244);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block2; else goto block1;
block2:;
// line 556
org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 557
return;
block1:;
// line 560
org$pandalanguage$pandac$IR$Value* $tmp2247 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
org$pandalanguage$pandac$IR$Value* $tmp2248 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2248));
*(&local0) = $tmp2247;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
// unreffing REF($12:org.pandalanguage.pandac.IR.Value?)
// line 561
org$pandalanguage$pandac$IR$Value* $tmp2249 = *(&local0);
panda$core$Bit $tmp2250 = panda$core$Bit$init$builtin_bit($tmp2249 == NULL);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block3; else goto block4;
block3:;
// line 562
org$pandalanguage$pandac$IR$Value* $tmp2252 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2252));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block4:;
// line 564
org$pandalanguage$pandac$IR$Value* $tmp2253 = *(&local0);
panda$core$Bit $tmp2254 = panda$core$Bit$init$builtin_bit($tmp2253 != NULL);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2256 = (panda$core$Int64) {564};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2257, $tmp2256, &$s2258);
abort(); // unreachable
block7:;
$fn2260 $tmp2259 = ($fn2260) $tmp2253->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2261 = $tmp2259($tmp2253);
panda$core$Bit $tmp2262 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp2261);
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block9; else goto block10;
block9:;
*(&local1) = $tmp2262;
goto block11;
block10:;
org$pandalanguage$pandac$IR$Value* $tmp2264 = *(&local0);
panda$core$Bit $tmp2265 = panda$core$Bit$init$builtin_bit($tmp2264 != NULL);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2267 = (panda$core$Int64) {564};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2268, $tmp2267, &$s2269);
abort(); // unreachable
block12:;
$fn2271 $tmp2270 = ($fn2271) $tmp2264->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2272 = $tmp2270($tmp2264);
panda$core$Bit $tmp2273 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit($tmp2272);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
// unreffing REF($63:org.pandalanguage.pandac.Type)
*(&local1) = $tmp2273;
goto block11;
block11:;
panda$core$Bit $tmp2274 = *(&local1);
bool $tmp2275 = $tmp2274.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
// unreffing REF($47:org.pandalanguage.pandac.Type)
if ($tmp2275) goto block5; else goto block14;
block5:;
// line 566
org$pandalanguage$pandac$IR$Value* $tmp2276 = *(&local0);
panda$core$Bit $tmp2277 = panda$core$Bit$init$builtin_bit($tmp2276 != NULL);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2279 = (panda$core$Int64) {566};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2280, $tmp2279, &$s2281);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp2276, param5);
goto block6;
block14:;
// line 1
// line 569
org$pandalanguage$pandac$IR$Value* $tmp2282 = *(&local0);
panda$core$Bit $tmp2283 = panda$core$Bit$init$builtin_bit($tmp2282 != NULL);
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp2285 = (panda$core$Int64) {569};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2286, $tmp2285, &$s2287);
abort(); // unreachable
block17:;
$fn2289 $tmp2288 = ($fn2289) $tmp2282->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2290 = $tmp2288($tmp2282);
panda$collections$HashSet* $tmp2291 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(param0, $tmp2290);
ITable* $tmp2292 = ((panda$collections$Iterable*) $tmp2291)->$class->itable;
while ($tmp2292->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2292 = $tmp2292->next;
}
$fn2294 $tmp2293 = $tmp2292->methods[0];
panda$collections$Iterator* $tmp2295 = $tmp2293(((panda$collections$Iterable*) $tmp2291));
goto block19;
block19:;
ITable* $tmp2296 = $tmp2295->$class->itable;
while ($tmp2296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2296 = $tmp2296->next;
}
$fn2298 $tmp2297 = $tmp2296->methods[0];
panda$core$Bit $tmp2299 = $tmp2297($tmp2295);
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block21; else goto block20;
block20:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp2301 = $tmp2295->$class->itable;
while ($tmp2301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[1];
panda$core$Object* $tmp2304 = $tmp2302($tmp2295);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2304)));
org$pandalanguage$pandac$Type* $tmp2305 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2305));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp2304);
// line 570
org$pandalanguage$pandac$Type* $tmp2306 = *(&local2);
org$pandalanguage$pandac$Type$Kind* $tmp2307 = &$tmp2306->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2308 = *$tmp2307;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2309;
$tmp2309 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2309->value = $tmp2308;
panda$core$Int64 $tmp2310 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp2311 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2310);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2312;
$tmp2312 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2312->value = $tmp2311;
ITable* $tmp2313 = ((panda$core$Equatable*) $tmp2309)->$class->itable;
while ($tmp2313->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2313 = $tmp2313->next;
}
$fn2315 $tmp2314 = $tmp2313->methods[0];
panda$core$Bit $tmp2316 = $tmp2314(((panda$core$Equatable*) $tmp2309), ((panda$core$Equatable*) $tmp2312));
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Type* $tmp2318 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp2319 = &$tmp2318->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2320 = *$tmp2319;
panda$core$Bit $tmp2321 = panda$core$Bit$init$builtin_bit($tmp2320 != NULL);
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp2323 = (panda$core$Int64) {570};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2324, $tmp2323, &$s2325);
abort(); // unreachable
block27:;
panda$core$Int64 $tmp2326 = (panda$core$Int64) {0};
panda$core$Object* $tmp2327 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2320, $tmp2326);
org$pandalanguage$pandac$Type* $tmp2328 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp2329 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2327), $tmp2328);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
// unreffing REF($152:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2327);
// unreffing REF($150:org.pandalanguage.pandac.FixedArray.T)
*(&local3) = $tmp2329;
goto block26;
block25:;
*(&local3) = $tmp2316;
goto block26;
block26:;
panda$core$Bit $tmp2330 = *(&local3);
bool $tmp2331 = $tmp2330.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2312)));
// unreffing REF($132:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2309)));
// unreffing REF($128:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp2331) goto block22; else goto block23;
block22:;
// line 571
$fn2333 $tmp2332 = ($fn2333) param4->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2334 = $tmp2332(param4);
org$pandalanguage$pandac$IR$Value* $tmp2335 = *(&local0);
org$pandalanguage$pandac$Type* $tmp2336 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp2337 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp2334, $tmp2335, $tmp2336);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
org$pandalanguage$pandac$IR$Value* $tmp2338 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
*(&local4) = $tmp2337;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
// unreffing REF($178:org.pandalanguage.pandac.IR.Value?)
// line 572
org$pandalanguage$pandac$IR$Value* $tmp2339 = *(&local4);
panda$core$Bit $tmp2340 = panda$core$Bit$init$builtin_bit($tmp2339 != NULL);
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp2342 = (panda$core$Int64) {572};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2343, $tmp2342, &$s2344);
abort(); // unreachable
block29:;
org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp2339, param5);
// line 573
org$pandalanguage$pandac$IR$Value* $tmp2345 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
// unreffing iterator
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2304);
// unreffing REF($116:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp2346 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// unreffing REF($105:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing REF($101:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
// unreffing REF($100:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$IR$Value* $tmp2347 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block23:;
// line 575
org$pandalanguage$pandac$Type* $tmp2348 = *(&local2);
org$pandalanguage$pandac$Type$Kind* $tmp2349 = &$tmp2348->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2350 = *$tmp2349;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2351;
$tmp2351 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2351->value = $tmp2350;
panda$core$Int64 $tmp2352 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp2353 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp2352);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp2354;
$tmp2354 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp2354->value = $tmp2353;
ITable* $tmp2355 = ((panda$core$Equatable*) $tmp2351)->$class->itable;
while ($tmp2355->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2355 = $tmp2355->next;
}
$fn2357 $tmp2356 = $tmp2355->methods[0];
panda$core$Bit $tmp2358 = $tmp2356(((panda$core$Equatable*) $tmp2351), ((panda$core$Equatable*) $tmp2354));
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Type* $tmp2360 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp2361 = &$tmp2360->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2362 = *$tmp2361;
panda$core$Bit $tmp2363 = panda$core$Bit$init$builtin_bit($tmp2362 != NULL);
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2365 = (panda$core$Int64) {575};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2366, $tmp2365, &$s2367);
abort(); // unreachable
block36:;
panda$core$Int64 $tmp2368 = (panda$core$Int64) {0};
panda$core$Object* $tmp2369 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2362, $tmp2368);
org$pandalanguage$pandac$Type* $tmp2370 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp2371 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2369), $tmp2370);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
// unreffing REF($257:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2369);
// unreffing REF($255:org.pandalanguage.pandac.FixedArray.T)
*(&local5) = $tmp2371;
goto block35;
block34:;
*(&local5) = $tmp2358;
goto block35;
block35:;
panda$core$Bit $tmp2372 = *(&local5);
bool $tmp2373 = $tmp2372.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2354)));
// unreffing REF($237:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2351)));
// unreffing REF($233:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp2373) goto block31; else goto block32;
block31:;
// line 576
$fn2375 $tmp2374 = ($fn2375) param4->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2376 = $tmp2374(param4);
org$pandalanguage$pandac$IR$Value* $tmp2377 = *(&local0);
org$pandalanguage$pandac$Type* $tmp2378 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp2379 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp2376, $tmp2377, $tmp2378);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
org$pandalanguage$pandac$IR$Value* $tmp2380 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
*(&local6) = $tmp2379;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
// unreffing REF($283:org.pandalanguage.pandac.IR.Value?)
// line 577
org$pandalanguage$pandac$IR$Value* $tmp2381 = *(&local6);
panda$core$Bit $tmp2382 = panda$core$Bit$init$builtin_bit($tmp2381 == NULL);
bool $tmp2383 = $tmp2382.value;
if ($tmp2383) goto block38; else goto block39;
block38:;
// line 578
org$pandalanguage$pandac$IR$Value* $tmp2384 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
// unreffing iterable
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2304);
// unreffing REF($116:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp2385 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// unreffing REF($105:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing REF($101:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
// unreffing REF($100:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$IR$Value* $tmp2386 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block39:;
// line 580
org$pandalanguage$pandac$IR$Value* $tmp2387 = *(&local6);
panda$core$Bit $tmp2388 = panda$core$Bit$init$builtin_bit($tmp2387 != NULL);
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp2390 = (panda$core$Int64) {580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2391, $tmp2390, &$s2392);
abort(); // unreachable
block40:;
panda$collections$Array* $tmp2393 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2393);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp2394 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp2395 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp2394, $tmp2395);
org$pandalanguage$pandac$IR$Value* $tmp2396 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2387, &$s2397, ((panda$collections$ListView*) $tmp2393), $tmp2394);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
org$pandalanguage$pandac$IR$Value* $tmp2398 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
*(&local7) = $tmp2396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing REF($346:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
// unreffing REF($343:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// unreffing REF($339:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 582
org$pandalanguage$pandac$IR$Value* $tmp2399 = *(&local7);
panda$core$Bit $tmp2400 = panda$core$Bit$init$builtin_bit($tmp2399 != NULL);
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp2402 = (panda$core$Int64) {582};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2403, $tmp2402);
abort(); // unreachable
block42:;
// line 583
org$pandalanguage$pandac$IR$Value* $tmp2404 = *(&local7);
panda$core$Bit $tmp2405 = panda$core$Bit$init$builtin_bit($tmp2404 != NULL);
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp2407 = (panda$core$Int64) {583};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2408, $tmp2407, &$s2409);
abort(); // unreachable
block44:;
org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp2404, param5);
// line 584
org$pandalanguage$pandac$IR$Value* $tmp2410 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// unreffing iterator
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2411 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
// unreffing iterable
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2304);
// unreffing REF($116:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp2412 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// unreffing REF($105:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing REF($101:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
// unreffing REF($100:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$IR$Value* $tmp2413 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2413));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block32:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2304);
// unreffing REF($116:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp2414 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block19;
block21:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// unreffing REF($105:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing REF($101:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
// unreffing REF($100:org.pandalanguage.pandac.Type)
// line 587
$fn2416 $tmp2415 = ($fn2416) param4->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2417 = $tmp2415(param4);
org$pandalanguage$pandac$IR$Value* $tmp2418 = *(&local0);
panda$core$Bit $tmp2419 = panda$core$Bit$init$builtin_bit($tmp2418 != NULL);
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block46; else goto block47;
block47:;
panda$core$Int64 $tmp2421 = (panda$core$Int64) {588};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2422, $tmp2421, &$s2423);
abort(); // unreachable
block46:;
$fn2425 $tmp2424 = ($fn2425) $tmp2418->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2426 = $tmp2424($tmp2418);
panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2428, ((panda$core$Object*) $tmp2426));
panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, &$s2430);
panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2432, $tmp2429);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2417, $tmp2431);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing REF($452:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2429));
// unreffing REF($451:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
// unreffing REF($450:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
// unreffing REF($448:org.pandalanguage.pandac.Type)
goto block6;
block6:;
org$pandalanguage$pandac$IR$Value* $tmp2433 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$init(org$pandalanguage$pandac$statement$For* param0) {

return;

}
void org$pandalanguage$pandac$statement$For$cleanup(org$pandalanguage$pandac$statement$For* param0) {

// line 20
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

