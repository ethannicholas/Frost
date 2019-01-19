#include "org/frostlang/frostc/statement/For.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlang/frostc/lvalue/VariableLValue.h"
#include "frost/collections/HashSet.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$For$class_type org$frostlang$frostc$statement$For$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$For$cleanup} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn143)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn153)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn159)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn170)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn178)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn211)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn225)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn252)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn255)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn258)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn286)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn297)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn300)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn303)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn326)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn329)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn349)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn372)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn377)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn382)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn387)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn392)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn410)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn415)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn448)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn453)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn486)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn491)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn494)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn498)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn503)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn513)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn522)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn527)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn530)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn543)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn575)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn580)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn590)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn595)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn623)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn628)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn656)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn661)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn691)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn698)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn703)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn723)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn733)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn739)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn750)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn758)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn791)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn812)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn818)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn831)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn859)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn862)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn875)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn886)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn889)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn902)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn905)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn911)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn930)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn950)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn980)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn983)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn990)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn995)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1000)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1005)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1010)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1072)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1077)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1080)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1085)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1095)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1100)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1123)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1128)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1151)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1156)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1159)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1164)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1174)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1179)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1202)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1207)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1230)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1235)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1238)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1242)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1247)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1259)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1268)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1273)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1276)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1289)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1295)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1300)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1310)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1315)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1329)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1334)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1344)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1349)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1377)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1382)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1410)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1415)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1429)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1434)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1444)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1449)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1477)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1482)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1510)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1515)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1540)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1547)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1552)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1579)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1584)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1592)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1599)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1609)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1613)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1632)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1638)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1660)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1670)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1676)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1693)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1755)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1819)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2018)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2023)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2028)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn2038)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2048)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2052)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2074)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2079)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2106)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2111)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2119)(org$frostlang$frostc$IR$Value*);
typedef void (*$fn2201)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn2204)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2208)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2213)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2224)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2233)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2238)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2260)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2271)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2289)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn2294)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2298)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2303)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2315)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2333)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2357)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2375)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn2416)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn2425)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, -8546630798215305666, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72\x2e\x73\x69\x67\x6e\x65\x64\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, 6574045725383642610, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72\x2e\x75\x6e\x73\x69\x67\x6e\x65\x64\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 135, -891253980838503659, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1082 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s1108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s1187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s1302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s1322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s1336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s1436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s1454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1590 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1684 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s1722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1729 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, 7848791883756835730, NULL };
static frost$core$String $s1830 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s1832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, 7848791883756835730, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s1886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1990 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2009 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2020 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s2025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s2030 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s2059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s2100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s2164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s2177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2344 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s2430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

frost$core$Bit org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Bit local2;
frost$core$Bit local3;
// line 24
org$frostlang$frostc$Type$Kind* $tmp2 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3 = *$tmp2;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = $tmp3;
frost$core$Int64 $tmp5 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp6 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp5);
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((frost$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Bit $tmp11 = $tmp9(((frost$core$Equatable*) $tmp4), ((frost$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp7)));
// unreffing REF($7:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
// unreffing REF($3:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp12) goto block1; else goto block2;
block1:;
// line 25
org$frostlang$frostc$FixedArray** $tmp13 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp14 = *$tmp13;
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit($tmp14 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp17 = (frost$core$Int64) {25};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s18, $tmp17, &$s19);
abort(); // unreachable
block3:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {0};
frost$core$Object* $tmp21 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp14, $tmp20);
frost$core$Bit $tmp22 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q($tmp21);
// unreffing REF($31:org.frostlang.frostc.FixedArray.T)
return $tmp22;
block2:;
// line 27
frost$core$Bit $tmp23 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(param2);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block6;
block5:;
// line 28
org$frostlang$frostc$FixedArray** $tmp25 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp26 = *$tmp25;
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit($tmp26 != NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {28};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1};
frost$core$Object* $tmp33 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp26, $tmp32);
org$frostlang$frostc$Type* $tmp34 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp33));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
org$frostlang$frostc$Type* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = $tmp34;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($57:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
// unreffing REF($55:org.frostlang.frostc.FixedArray.T)
// line 29
org$frostlang$frostc$FixedArray** $tmp36 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp37 = *$tmp36;
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37 != NULL);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {29};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s41, $tmp40, &$s42);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {2};
frost$core$Object* $tmp44 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp37, $tmp43);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp44)));
org$frostlang$frostc$Type* $tmp45 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp44);
frost$core$Frost$unref$frost$core$Object$Q($tmp44);
// unreffing REF($84:org.frostlang.frostc.FixedArray.T)
// line 30
org$frostlang$frostc$Type* $tmp46 = *(&local0);
org$frostlang$frostc$Type* $tmp47 = *(&local1);
frost$core$Bit $tmp48 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp46, $tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block11; else goto block12;
block11:;
// line 31
frost$core$Bit $tmp50 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp51 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing type2
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing type1
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp50;
block12:;
// line 33
org$frostlang$frostc$Type* $tmp53 = *(&local0);
frost$core$Bit $tmp54 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Type* $tmp56 = *(&local1);
frost$core$String** $tmp57 = &((org$frostlang$frostc$Symbol*) $tmp56)->name;
frost$core$String* $tmp58 = *$tmp57;
frost$core$Bit $tmp59 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp58, &$s60);
*(&local3) = $tmp59;
goto block17;
block16:;
*(&local3) = $tmp54;
goto block17;
block17:;
frost$core$Bit $tmp61 = *(&local3);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type* $tmp63 = *(&local0);
frost$core$String** $tmp64 = &((org$frostlang$frostc$Symbol*) $tmp63)->name;
frost$core$String* $tmp65 = *$tmp64;
org$frostlang$frostc$Type* $tmp66 = *(&local1);
frost$core$String** $tmp67 = &((org$frostlang$frostc$Symbol*) $tmp66)->name;
frost$core$String* $tmp68 = *$tmp67;
frost$core$Int64 $tmp69 = frost$core$String$get_length$R$frost$core$Int64(&$s70);
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp72 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp69, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp71);
frost$core$String* $tmp73 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp68, $tmp72);
frost$core$Bit $tmp74 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp65, $tmp73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($144:frost.core.String)
*(&local2) = $tmp74;
goto block20;
block19:;
*(&local2) = $tmp61;
goto block20;
block20:;
frost$core$Bit $tmp75 = *(&local2);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block13; else goto block14;
block13:;
// line 35
frost$core$Bit $tmp77 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp78 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing type2
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp79 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing type1
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp77;
block14:;
// line 37
frost$core$String* $tmp80 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s81, ((frost$core$Object*) param2));
frost$core$String* $tmp82 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp80, &$s83);
frost$core$String* $tmp84 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp82, &$s85);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($173:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($171:frost.core.String)
// line 39
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp87 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing type2
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing type1
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp86;
block6:;
// line 41
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit(true);
return $tmp89;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 47
org$frostlang$frostc$Type* $tmp90 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp91 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp92 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp91);
bool $tmp93 = $tmp92.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($2:org.frostlang.frostc.Type)
if ($tmp93) goto block2; else goto block3;
block2:;
// line 48
org$frostlang$frostc$Type* $tmp94 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($10:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp94;
block3:;
org$frostlang$frostc$Type* $tmp95 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp96 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp95);
bool $tmp97 = $tmp96.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// unreffing REF($20:org.frostlang.frostc.Type)
if ($tmp97) goto block4; else goto block5;
block4:;
// line 49
org$frostlang$frostc$Type* $tmp98 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp98;
block5:;
org$frostlang$frostc$Type* $tmp99 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp100 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp99);
bool $tmp101 = $tmp100.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($38:org.frostlang.frostc.Type)
if ($tmp101) goto block6; else goto block7;
block6:;
// line 50
org$frostlang$frostc$Type* $tmp102 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($46:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp102;
block7:;
org$frostlang$frostc$Type* $tmp103 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp104 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp103);
bool $tmp105 = $tmp104.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($56:org.frostlang.frostc.Type)
if ($tmp105) goto block8; else goto block9;
block8:;
// line 51
org$frostlang$frostc$Type* $tmp106 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// unreffing REF($64:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp106;
block9:;
// line 52
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:org.frostlang.frostc.Type)
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($1:org.frostlang.frostc.Type)
frost$core$Bit $tmp107 = frost$core$Bit$init$builtin_bit(false);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp109 = (frost$core$Int64) {46};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s110, $tmp109, &$s111);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 59
org$frostlang$frostc$Type* $tmp112 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp113 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp114 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp112, $tmp113);
bool $tmp115 = $tmp114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($2:org.frostlang.frostc.Type)
if ($tmp115) goto block2; else goto block3;
block2:;
// line 60
org$frostlang$frostc$Type* $tmp116 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($10:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp116;
block3:;
org$frostlang$frostc$Type* $tmp117 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp118 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp112, $tmp117);
bool $tmp119 = $tmp118.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($20:org.frostlang.frostc.Type)
if ($tmp119) goto block4; else goto block5;
block4:;
// line 61
org$frostlang$frostc$Type* $tmp120 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($28:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp120;
block5:;
org$frostlang$frostc$Type* $tmp121 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp122 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp112, $tmp121);
bool $tmp123 = $tmp122.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($38:org.frostlang.frostc.Type)
if ($tmp123) goto block6; else goto block7;
block6:;
// line 62
org$frostlang$frostc$Type* $tmp124 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($46:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp124;
block7:;
org$frostlang$frostc$Type* $tmp125 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp126 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp112, $tmp125);
bool $tmp127 = $tmp126.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($56:org.frostlang.frostc.Type)
if ($tmp127) goto block8; else goto block9;
block8:;
// line 63
org$frostlang$frostc$Type* $tmp128 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($64:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($1:org.frostlang.frostc.Type)
return $tmp128;
block9:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($1:org.frostlang.frostc.Type)
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($1:org.frostlang.frostc.Type)
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit(false);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {58};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block10:;
abort(); // unreachable

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// line 71
frost$collections$Array* $tmp134 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp135 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp134, $tmp135);
org$frostlang$frostc$ASTNode* $tmp136 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp138 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp136, $tmp137, $tmp138, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp134, ((frost$core$Object*) $tmp136));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp134)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($6:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($1:frost.collections.Array<org.frostlang.frostc.ASTNode>)
return ((frost$collections$ListView*) $tmp134);

}
void org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$ClassDecl* local4 = NULL;
frost$collections$ListView* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Block$ID local11;
org$frostlang$frostc$IR$Block$ID local12;
org$frostlang$frostc$IR$Block$ID local13;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$Compiler$AutoContext* local16 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local17 = NULL;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
org$frostlang$frostc$IR$Block$ID local21;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$IR$Value* local23 = NULL;
org$frostlang$frostc$IR$Block$ID local24;
org$frostlang$frostc$IR$Block$ID local25;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Value* local28 = NULL;
// line 78
org$frostlang$frostc$IR** $tmp139 = &param0->ir;
org$frostlang$frostc$IR* $tmp140 = *$tmp139;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
org$frostlang$frostc$IR* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = $tmp140;
// line 79
$fn143 $tmp142 = ($fn143) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp144 = $tmp142(param4);
org$frostlang$frostc$Type$Kind* $tmp145 = &$tmp144->typeKind;
org$frostlang$frostc$Type$Kind $tmp146 = *$tmp145;
org$frostlang$frostc$Type$Kind$wrapper* $tmp147;
$tmp147 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp147->value = $tmp146;
frost$core$Int64 $tmp148 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp149 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp148);
org$frostlang$frostc$Type$Kind$wrapper* $tmp150;
$tmp150 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp150->value = $tmp149;
ITable* $tmp151 = ((frost$core$Equatable*) $tmp147)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Bit $tmp154 = $tmp152(((frost$core$Equatable*) $tmp147), ((frost$core$Equatable*) $tmp150));
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s157, $tmp156);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp150)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp147)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 80
$fn159 $tmp158 = ($fn159) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp160 = $tmp158(param4);
org$frostlang$frostc$FixedArray** $tmp161 = &$tmp160->subtypes;
org$frostlang$frostc$FixedArray* $tmp162 = *$tmp161;
frost$core$Bit $tmp163 = frost$core$Bit$init$builtin_bit($tmp162 != NULL);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s166, $tmp165, &$s167);
abort(); // unreachable
block3:;
ITable* $tmp168 = ((frost$collections$CollectionView*) $tmp162)->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
frost$core$Int64 $tmp171 = $tmp169(((frost$collections$CollectionView*) $tmp162));
frost$core$Int64 $tmp172 = (frost$core$Int64) {2};
frost$core$Bit $tmp173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp171, $tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp175 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s176, $tmp175);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing REF($38:org.frostlang.frostc.Type)
// line 81
$fn178 $tmp177 = ($fn178) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp179 = $tmp177(param4);
org$frostlang$frostc$FixedArray** $tmp180 = &$tmp179->subtypes;
org$frostlang$frostc$FixedArray* $tmp181 = *$tmp180;
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit($tmp181 != NULL);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {0};
frost$core$Object* $tmp188 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp181, $tmp187);
frost$core$String** $tmp189 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp188))->name;
frost$core$String* $tmp190 = *$tmp189;
frost$core$Bit $tmp191 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp190, &$s192);
bool $tmp193 = $tmp191.value;
if ($tmp193) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp194 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s195, $tmp194);
abort(); // unreachable
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
// unreffing REF($76:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($63:org.frostlang.frostc.Type)
// line 82
// line 83
org$frostlang$frostc$Variable$Storage** $tmp196 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp197 = *$tmp196;
frost$core$Int64* $tmp198 = &$tmp197->$rawValue;
frost$core$Int64 $tmp199 = *$tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {0};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp199, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp203 = (frost$core$Int64*) ($tmp197->$data + 0);
frost$core$Int64 $tmp204 = *$tmp203;
*(&local2) = $tmp204;
// line 85
frost$core$Int64 $tmp205 = *(&local2);
*(&local1) = $tmp205;
goto block11;
block13:;
// line 88
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit(false);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s209, $tmp208);
abort(); // unreachable
block14:;
goto block11;
block11:;
// line 91
$fn211 $tmp210 = ($fn211) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp212 = $tmp210(param4);
org$frostlang$frostc$FixedArray** $tmp213 = &$tmp212->subtypes;
org$frostlang$frostc$FixedArray* $tmp214 = *$tmp213;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214 != NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {91};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block16:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {1};
frost$core$Object* $tmp221 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp214, $tmp220);
org$frostlang$frostc$Type* $tmp222 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp221));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
org$frostlang$frostc$Type* $tmp223 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local3) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($135:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
// unreffing REF($133:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
// unreffing REF($120:org.frostlang.frostc.Type)
// line 92
$fn225 $tmp224 = ($fn225) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp226 = $tmp224(param4);
org$frostlang$frostc$ClassDecl* $tmp227 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp226);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$ClassDecl* $tmp228 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local4) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($155:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($154:org.frostlang.frostc.Type)
// line 93
org$frostlang$frostc$ClassDecl* $tmp229 = *(&local4);
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit($tmp229 == NULL);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block18; else goto block19;
block18:;
// line 94
org$frostlang$frostc$ClassDecl* $tmp232 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing rangeClass
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp233 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block19:;
// line 96
org$frostlang$frostc$ClassDecl* $tmp235 = *(&local4);
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit($tmp235 != NULL);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp238 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s239, $tmp238, &$s240);
abort(); // unreachable
block20:;
frost$collections$ListView* $tmp241 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp235);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$collections$ListView* $tmp242 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local5) = $tmp241;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing REF($202:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
// line 99
org$frostlang$frostc$IR$Value* $tmp243 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp244 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp245 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp246 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp247 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp248 = *(&local5);
frost$core$Int64 $tmp249 = (frost$core$Int64) {0};
ITable* $tmp250 = $tmp248->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$core$Object* $tmp253 = $tmp251($tmp248, $tmp249);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp246, $tmp247, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp253));
$fn255 $tmp254 = ($fn255) $tmp245->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp256 = $tmp254($tmp245, $tmp246);
$fn258 $tmp257 = ($fn258) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp259 = $tmp257(param4);
org$frostlang$frostc$FixedArray** $tmp260 = &$tmp259->subtypes;
org$frostlang$frostc$FixedArray* $tmp261 = *$tmp260;
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261 != NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp264 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s265, $tmp264, &$s266);
abort(); // unreachable
block22:;
frost$core$Int64 $tmp267 = (frost$core$Int64) {1};
frost$core$Object* $tmp268 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp261, $tmp267);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp243, $tmp244, $tmp256, ((org$frostlang$frostc$Type*) $tmp268));
org$frostlang$frostc$Type* $tmp269 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp270 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp243, $tmp269);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
org$frostlang$frostc$IR$Value* $tmp271 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local6) = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($247:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp268);
// unreffing REF($242:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($229:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
// unreffing REF($223:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($217:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($214:org.frostlang.frostc.IR.Value)
// line 103
org$frostlang$frostc$IR* $tmp272 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp273 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp275 = *(&local6);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit($tmp275 != NULL);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s279, $tmp278, &$s280);
abort(); // unreachable
block24:;
org$frostlang$frostc$IR$Value* $tmp281 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp282 = (frost$core$Int64) {2};
frost$core$Int64 $tmp283 = *(&local1);
org$frostlang$frostc$Type* $tmp284 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp281, $tmp282, $tmp283, $tmp284);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp273, $tmp274, param1, $tmp275, $tmp281);
$fn286 $tmp285 = ($fn286) $tmp272->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp287 = $tmp285($tmp272, $tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($286:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($275:org.frostlang.frostc.IR.Statement)
// line 106
org$frostlang$frostc$IR$Value* $tmp288 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp289 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp290 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp291 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp292 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp293 = *(&local5);
frost$core$Int64 $tmp294 = (frost$core$Int64) {1};
ITable* $tmp295 = $tmp293->$class->itable;
while ($tmp295->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[0];
frost$core$Object* $tmp298 = $tmp296($tmp293, $tmp294);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp291, $tmp292, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp298));
$fn300 $tmp299 = ($fn300) $tmp290->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp301 = $tmp299($tmp290, $tmp291);
$fn303 $tmp302 = ($fn303) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp304 = $tmp302(param4);
org$frostlang$frostc$FixedArray** $tmp305 = &$tmp304->subtypes;
org$frostlang$frostc$FixedArray* $tmp306 = *$tmp305;
frost$core$Bit $tmp307 = frost$core$Bit$init$builtin_bit($tmp306 != NULL);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp309 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s310, $tmp309, &$s311);
abort(); // unreachable
block26:;
frost$core$Int64 $tmp312 = (frost$core$Int64) {1};
frost$core$Object* $tmp313 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp306, $tmp312);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp288, $tmp289, $tmp301, ((org$frostlang$frostc$Type*) $tmp313));
org$frostlang$frostc$Type* $tmp314 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp315 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp288, $tmp314);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
org$frostlang$frostc$IR$Value* $tmp316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local7) = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($334:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp313);
// unreffing REF($329:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($316:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
// unreffing REF($310:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($304:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($301:org.frostlang.frostc.IR.Value)
// line 110
org$frostlang$frostc$IR$Value* $tmp317 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp318 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp319 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp320 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp321 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp322 = *(&local5);
frost$core$Int64 $tmp323 = (frost$core$Int64) {2};
ITable* $tmp324 = $tmp322->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[0];
frost$core$Object* $tmp327 = $tmp325($tmp322, $tmp323);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp320, $tmp321, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp327));
$fn329 $tmp328 = ($fn329) $tmp319->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp330 = $tmp328($tmp319, $tmp320);
org$frostlang$frostc$Type* $tmp331 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp317, $tmp318, $tmp330, $tmp331);
org$frostlang$frostc$IR$Value* $tmp332 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp317);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
org$frostlang$frostc$IR$Value* $tmp333 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local8) = $tmp332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
// unreffing REF($377:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($375:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
// unreffing REF($370:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing REF($364:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($361:org.frostlang.frostc.IR.Value)
// line 113
org$frostlang$frostc$ASTNode* $tmp334 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp336 = (frost$core$UInt64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp334, $tmp335, param1, $tmp336);
org$frostlang$frostc$Compiler$TypeContext* $tmp337 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp338 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp339 = *(&local3);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp337, $tmp338, $tmp339);
org$frostlang$frostc$IR$Value* $tmp340 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp334, $tmp337);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
org$frostlang$frostc$IR$Value* $tmp341 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local9) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($409:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($405:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($401:org.frostlang.frostc.ASTNode)
// line 115
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 116
org$frostlang$frostc$IR$Value* $tmp342 = *(&local9);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342 != NULL);
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp345 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s346, $tmp345, &$s347);
abort(); // unreachable
block30:;
$fn349 $tmp348 = ($fn349) $tmp342->$class->vtable[2];
org$frostlang$frostc$Type* $tmp350 = $tmp348($tmp342);
org$frostlang$frostc$Type* $tmp351 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp352 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp350, $tmp351);
bool $tmp353 = $tmp352.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// unreffing REF($440:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($439:org.frostlang.frostc.Type)
if ($tmp353) goto block28; else goto block32;
block28:;
// line 117
org$frostlang$frostc$IR$Value* $tmp354 = *(&local9);
org$frostlang$frostc$Type* $tmp355 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp356 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp354, $tmp355);
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356 != NULL);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {117};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$IR$Value* $tmp362 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local10) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($453:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing REF($452:org.frostlang.frostc.Type)
goto block29;
block32:;
// line 1
// line 120
org$frostlang$frostc$IR$Value* $tmp363 = *(&local9);
frost$core$Bit $tmp364 = frost$core$Bit$init$builtin_bit($tmp363 != NULL);
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp366 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s367, $tmp366, &$s368);
abort(); // unreachable
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$IR$Value* $tmp369 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local10) = $tmp363;
goto block29;
block29:;
// line 124
org$frostlang$frostc$IR* $tmp370 = *(&local0);
$fn372 $tmp371 = ($fn372) $tmp370->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp373 = $tmp371($tmp370, &$s374);
*(&local11) = $tmp373;
// line 125
org$frostlang$frostc$IR* $tmp375 = *(&local0);
$fn377 $tmp376 = ($fn377) $tmp375->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp378 = $tmp376($tmp375, &$s379);
*(&local12) = $tmp378;
// line 126
org$frostlang$frostc$IR* $tmp380 = *(&local0);
$fn382 $tmp381 = ($fn382) $tmp380->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp383 = $tmp381($tmp380, &$s384);
*(&local13) = $tmp383;
// line 127
org$frostlang$frostc$IR* $tmp385 = *(&local0);
$fn387 $tmp386 = ($fn387) $tmp385->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp388 = $tmp386($tmp385, &$s389);
*(&local14) = $tmp388;
// line 128
org$frostlang$frostc$IR* $tmp390 = *(&local0);
$fn392 $tmp391 = ($fn392) $tmp390->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp393 = $tmp391($tmp390, &$s394);
*(&local15) = $tmp393;
// line 129
org$frostlang$frostc$Compiler$AutoContext* $tmp395 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp396 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp397 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp398 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp399 = *(&local13);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp396, $tmp397, param2, $tmp398, $tmp399);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp395, param0, $tmp396);
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$Compiler$AutoContext* $tmp400 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local16) = $tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing REF($520:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($519:org.frostlang.frostc.Compiler.AutoContext)
// line 1
// line 131
org$frostlang$frostc$Compiler$AutoScope* $tmp401 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp401, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
org$frostlang$frostc$Compiler$AutoScope* $tmp402 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local17) = $tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// unreffing REF($541:org.frostlang.frostc.Compiler.AutoScope)
// line 132
org$frostlang$frostc$IR* $tmp403 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp404 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp405 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp406 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp407 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp408 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp404, $tmp405, param1, $tmp406, $tmp407, $tmp408);
$fn410 $tmp409 = ($fn410) $tmp403->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp411 = $tmp409($tmp403, $tmp404);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($555:org.frostlang.frostc.IR.Statement)
// line 134
org$frostlang$frostc$IR* $tmp412 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp413 = *(&local14);
$fn415 $tmp414 = ($fn415) $tmp412->$class->vtable[4];
$tmp414($tmp412, $tmp413);
// line 135
org$frostlang$frostc$IR$Value* $tmp416 = *(&local6);
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit($tmp416 != NULL);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp419 = (frost$core$Int64) {136};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s420, $tmp419, &$s421);
abort(); // unreachable
block37:;
org$frostlang$frostc$IR$Value* $tmp422 = *(&local7);
frost$core$Bit $tmp423 = frost$core$Bit$init$builtin_bit($tmp422 != NULL);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp425 = (frost$core$Int64) {136};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s426, $tmp425, &$s427);
abort(); // unreachable
block39:;
frost$collections$ListView* $tmp428 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp422);
org$frostlang$frostc$Compiler$TypeContext* $tmp429 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp430 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp431 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp429, $tmp430, $tmp431);
org$frostlang$frostc$IR$Value* $tmp432 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp416, &$s433, $tmp428, $tmp429);
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit($tmp432 != NULL);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp436 = (frost$core$Int64) {135};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s437, $tmp436, &$s438);
abort(); // unreachable
block41:;
org$frostlang$frostc$IR$Value* $tmp439 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp432);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
org$frostlang$frostc$IR$Value* $tmp440 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local18) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// unreffing REF($604:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing REF($595:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing REF($593:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing REF($591:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($590:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 137
org$frostlang$frostc$IR* $tmp441 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp442 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp443 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp444 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp445 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp446 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp442, $tmp443, param1, $tmp444, $tmp445, $tmp446);
$fn448 $tmp447 = ($fn448) $tmp441->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp449 = $tmp447($tmp441, $tmp442);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
// unreffing REF($629:org.frostlang.frostc.IR.Statement)
// line 139
org$frostlang$frostc$IR* $tmp450 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp451 = *(&local15);
$fn453 $tmp452 = ($fn453) $tmp450->$class->vtable[4];
$tmp452($tmp450, $tmp451);
// line 140
org$frostlang$frostc$IR$Value* $tmp454 = *(&local6);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp457 = (frost$core$Int64) {141};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block43:;
org$frostlang$frostc$IR$Value* $tmp460 = *(&local7);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit($tmp460 != NULL);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {141};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s464, $tmp463, &$s465);
abort(); // unreachable
block45:;
frost$collections$ListView* $tmp466 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp460);
org$frostlang$frostc$Compiler$TypeContext* $tmp467 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp468 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp469 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp467, $tmp468, $tmp469);
org$frostlang$frostc$IR$Value* $tmp470 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp454, &$s471, $tmp466, $tmp467);
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit($tmp470 != NULL);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {140};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block47:;
org$frostlang$frostc$IR$Value* $tmp477 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp470);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
org$frostlang$frostc$IR$Value* $tmp478 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local19) = $tmp477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// unreffing REF($678:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
// unreffing REF($669:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing REF($667:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// unreffing REF($665:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($664:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 142
org$frostlang$frostc$IR* $tmp479 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp480 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp481 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp482 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp483 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp484 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp480, $tmp481, param1, $tmp482, $tmp483, $tmp484);
$fn486 $tmp485 = ($fn486) $tmp479->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp487 = $tmp485($tmp479, $tmp480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($703:org.frostlang.frostc.IR.Statement)
// line 144
org$frostlang$frostc$IR* $tmp488 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp489 = *(&local11);
$fn491 $tmp490 = ($fn491) $tmp488->$class->vtable[4];
$tmp490($tmp488, $tmp489);
// line 145
ITable* $tmp492 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[0];
frost$collections$Iterator* $tmp495 = $tmp493(((frost$collections$Iterable*) param5));
goto block49;
block49:;
ITable* $tmp496 = $tmp495->$class->itable;
while ($tmp496->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp496 = $tmp496->next;
}
$fn498 $tmp497 = $tmp496->methods[0];
frost$core$Bit $tmp499 = $tmp497($tmp495);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block51; else goto block50;
block50:;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp501 = $tmp495->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[1];
frost$core$Object* $tmp504 = $tmp502($tmp495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp504)));
org$frostlang$frostc$ASTNode* $tmp505 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local20) = ((org$frostlang$frostc$ASTNode*) $tmp504);
// line 146
org$frostlang$frostc$ASTNode* $tmp506 = *(&local20);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp506);
frost$core$Frost$unref$frost$core$Object$Q($tmp504);
// unreffing REF($734:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp507 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing s
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block49;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing REF($723:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$IR$Value* $tmp508 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing entryExclusiveTest
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp509 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing entryInclusiveTest
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp510 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing scope
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 149
org$frostlang$frostc$IR* $tmp511 = *(&local0);
$fn513 $tmp512 = ($fn513) $tmp511->$class->vtable[5];
frost$core$Bit $tmp514 = $tmp512($tmp511);
frost$core$Bit $tmp515 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp514);
bool $tmp516 = $tmp515.value;
if ($tmp516) goto block52; else goto block53;
block52:;
// line 150
org$frostlang$frostc$IR* $tmp517 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp518 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp519 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp520 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp518, $tmp519, param1, $tmp520);
$fn522 $tmp521 = ($fn522) $tmp517->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp523 = $tmp521($tmp517, $tmp518);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
// unreffing REF($781:org.frostlang.frostc.IR.Statement)
goto block53;
block53:;
// line 152
org$frostlang$frostc$IR* $tmp524 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp525 = *(&local13);
$fn527 $tmp526 = ($fn527) $tmp524->$class->vtable[4];
$tmp526($tmp524, $tmp525);
// line 153
org$frostlang$frostc$IR* $tmp528 = *(&local0);
$fn530 $tmp529 = ($fn530) $tmp528->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp531 = $tmp529($tmp528, &$s532);
*(&local21) = $tmp531;
// line 156
org$frostlang$frostc$IR$Value* $tmp533 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp534 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp535 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp536 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp537 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp538 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp539 = (frost$core$Int64) {2};
frost$core$Int64 $tmp540 = *(&local1);
org$frostlang$frostc$Type* $tmp541 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp538, $tmp539, $tmp540, $tmp541);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp536, $tmp537, param1, $tmp538);
$fn543 $tmp542 = ($fn543) $tmp535->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp544 = $tmp542($tmp535, $tmp536);
org$frostlang$frostc$Type* $tmp545 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp533, $tmp534, $tmp544, $tmp545);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
org$frostlang$frostc$IR$Value* $tmp546 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local22) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($807:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
// unreffing REF($805:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing REF($802:org.frostlang.frostc.IR.Value)
// line 160
org$frostlang$frostc$IR$Value* $tmp547 = *(&local7);
frost$core$Bit $tmp548 = frost$core$Bit$init$builtin_bit($tmp547 != NULL);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {160};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s551, $tmp550, &$s552);
abort(); // unreachable
block54:;
org$frostlang$frostc$IR$Value* $tmp553 = *(&local22);
frost$collections$ListView* $tmp554 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp553);
org$frostlang$frostc$Compiler$TypeContext* $tmp555 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp556 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp555, $tmp556);
org$frostlang$frostc$IR$Value* $tmp557 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp547, &$s558, $tmp554, $tmp555);
org$frostlang$frostc$Type* $tmp559 = *(&local3);
org$frostlang$frostc$Type* $tmp560 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp559);
org$frostlang$frostc$IR$Value* $tmp561 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp557, $tmp560);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
org$frostlang$frostc$IR$Value* $tmp562 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local23) = $tmp561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing REF($851:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// unreffing REF($850:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing REF($848:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing REF($845:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// unreffing REF($844:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 162
org$frostlang$frostc$IR$Value* $tmp563 = *(&local23);
frost$core$Bit $tmp564 = frost$core$Bit$init$builtin_bit($tmp563 != NULL);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp566 = (frost$core$Int64) {162};
org$frostlang$frostc$IR$Value* $tmp567 = *(&local22);
frost$core$String* $tmp568 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s569, ((frost$core$Object*) $tmp567));
frost$core$String* $tmp570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp568, &$s571);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s572, $tmp566, $tmp570);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing REF($884:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($883:frost.core.String)
abort(); // unreachable
block56:;
// line 164
org$frostlang$frostc$IR* $tmp573 = *(&local0);
$fn575 $tmp574 = ($fn575) $tmp573->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp576 = $tmp574($tmp573, &$s577);
*(&local24) = $tmp576;
// line 165
org$frostlang$frostc$IR* $tmp578 = *(&local0);
$fn580 $tmp579 = ($fn580) $tmp578->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp581 = $tmp579($tmp578, &$s582);
*(&local25) = $tmp581;
// line 166
org$frostlang$frostc$IR* $tmp583 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp584 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp585 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp586 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp587 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp588 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp584, $tmp585, param1, $tmp586, $tmp587, $tmp588);
$fn590 $tmp589 = ($fn590) $tmp583->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp591 = $tmp589($tmp583, $tmp584);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($905:org.frostlang.frostc.IR.Statement)
// line 169
org$frostlang$frostc$IR* $tmp592 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp593 = *(&local24);
$fn595 $tmp594 = ($fn595) $tmp592->$class->vtable[4];
$tmp594($tmp592, $tmp593);
// line 170
org$frostlang$frostc$IR$Value* $tmp596 = *(&local23);
frost$core$Bit $tmp597 = frost$core$Bit$init$builtin_bit($tmp596 != NULL);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {171};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block58:;
org$frostlang$frostc$IR$Value* $tmp602 = *(&local10);
frost$collections$ListView* $tmp603 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp602);
org$frostlang$frostc$Compiler$TypeContext* $tmp604 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp605 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp606 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp604, $tmp605, $tmp606);
org$frostlang$frostc$IR$Value* $tmp607 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp596, &$s608, $tmp603, $tmp604);
frost$core$Bit $tmp609 = frost$core$Bit$init$builtin_bit($tmp607 != NULL);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp611 = (frost$core$Int64) {170};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s612, $tmp611, &$s613);
abort(); // unreachable
block60:;
org$frostlang$frostc$IR$Value* $tmp614 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp607);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
org$frostlang$frostc$IR$Value* $tmp615 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local26) = $tmp614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing REF($946:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing REF($937:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($935:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($933:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing REF($932:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 172
org$frostlang$frostc$IR* $tmp616 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp617 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp618 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp619 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp620 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp621 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp617, $tmp618, param1, $tmp619, $tmp620, $tmp621);
$fn623 $tmp622 = ($fn623) $tmp616->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp624 = $tmp622($tmp616, $tmp617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($971:org.frostlang.frostc.IR.Statement)
// line 175
org$frostlang$frostc$IR* $tmp625 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp626 = *(&local25);
$fn628 $tmp627 = ($fn628) $tmp625->$class->vtable[4];
$tmp627($tmp625, $tmp626);
// line 176
org$frostlang$frostc$IR$Value* $tmp629 = *(&local23);
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit($tmp629 != NULL);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {177};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s633, $tmp632, &$s634);
abort(); // unreachable
block62:;
org$frostlang$frostc$IR$Value* $tmp635 = *(&local10);
frost$collections$ListView* $tmp636 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp635);
org$frostlang$frostc$Compiler$TypeContext* $tmp637 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp638 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp639 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp637, $tmp638, $tmp639);
org$frostlang$frostc$IR$Value* $tmp640 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp629, &$s641, $tmp636, $tmp637);
frost$core$Bit $tmp642 = frost$core$Bit$init$builtin_bit($tmp640 != NULL);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {176};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block64:;
org$frostlang$frostc$IR$Value* $tmp647 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp640);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$IR$Value* $tmp648 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local27) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing REF($1012:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// unreffing REF($1003:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
// unreffing REF($1001:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// unreffing REF($999:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing REF($998:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 178
org$frostlang$frostc$IR* $tmp649 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp650 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp651 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp652 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp653 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp654 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp650, $tmp651, param1, $tmp652, $tmp653, $tmp654);
$fn656 $tmp655 = ($fn656) $tmp649->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp657 = $tmp655($tmp649, $tmp650);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing REF($1037:org.frostlang.frostc.IR.Statement)
// line 180
org$frostlang$frostc$IR* $tmp658 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp659 = *(&local21);
$fn661 $tmp660 = ($fn661) $tmp658->$class->vtable[4];
$tmp660($tmp658, $tmp659);
// line 181
org$frostlang$frostc$IR$Value* $tmp662 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp663 = *(&local9);
frost$core$Bit $tmp664 = frost$core$Bit$init$builtin_bit($tmp663 != NULL);
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp666 = (frost$core$Int64) {181};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s667, $tmp666, &$s668);
abort(); // unreachable
block66:;
frost$collections$ListView* $tmp669 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp663);
org$frostlang$frostc$Compiler$TypeContext* $tmp670 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp671 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp670, $tmp671);
org$frostlang$frostc$IR$Value* $tmp672 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp662, &$s673, $tmp669, $tmp670);
org$frostlang$frostc$Type* $tmp674 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp675 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp672, $tmp674);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
org$frostlang$frostc$IR$Value* $tmp676 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local28) = $tmp675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($1070:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($1068:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($1065:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
// unreffing REF($1064:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 183
org$frostlang$frostc$IR* $tmp677 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp678 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp679 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp680 = *(&local28);
frost$core$Bit $tmp681 = frost$core$Bit$init$builtin_bit($tmp680 != NULL);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {183};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s684, $tmp683, &$s685);
abort(); // unreachable
block68:;
org$frostlang$frostc$IR$Value* $tmp686 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp687 = (frost$core$Int64) {2};
frost$core$Int64 $tmp688 = *(&local1);
org$frostlang$frostc$Type* $tmp689 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp686, $tmp687, $tmp688, $tmp689);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp678, $tmp679, param1, $tmp680, $tmp686);
$fn691 $tmp690 = ($fn691) $tmp677->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp692 = $tmp690($tmp677, $tmp678);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($1103:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing REF($1092:org.frostlang.frostc.IR.Statement)
// line 184
org$frostlang$frostc$IR* $tmp693 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp694 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp695 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp696 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp694, $tmp695, param1, $tmp696);
$fn698 $tmp697 = ($fn698) $tmp693->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp699 = $tmp697($tmp693, $tmp694);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($1119:org.frostlang.frostc.IR.Statement)
// line 186
org$frostlang$frostc$IR* $tmp700 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp701 = *(&local12);
$fn703 $tmp702 = ($fn703) $tmp700->$class->vtable[4];
$tmp702($tmp700, $tmp701);
org$frostlang$frostc$IR$Value* $tmp704 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing inc
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp705 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing exclusiveTestBit
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp706 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing inclusiveTestBit
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp707 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing delta
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp708 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing indexLoad
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp709 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing context
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp710 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing stepComparison
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp711 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing step
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp712 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing inclusive
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp713 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing end
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp714 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
// unreffing start
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp715 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
// unreffing rangeFields
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp716 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing rangeClass
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp717 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$ClassDecl* local5 = NULL;
frost$collections$ListView* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$IR$Block$ID local16;
org$frostlang$frostc$IR$Block$ID local17;
org$frostlang$frostc$IR$Block$ID local18;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$Compiler$AutoContext* local20 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local21 = NULL;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$IR$Block$ID local23;
org$frostlang$frostc$IR$Block$ID local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$IR$Block$ID local27;
org$frostlang$frostc$IR$Block$ID local28;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$ASTNode* local31 = NULL;
org$frostlang$frostc$IR$Block$ID local32;
org$frostlang$frostc$IR$Value* local33 = NULL;
org$frostlang$frostc$IR$Block$ID local34;
org$frostlang$frostc$IR$Block$ID local35;
org$frostlang$frostc$IR$Value* local36 = NULL;
org$frostlang$frostc$IR$Block$ID local37;
org$frostlang$frostc$IR$Block$ID local38;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$IR$Value* local41 = NULL;
org$frostlang$frostc$IR$Block$ID local42;
org$frostlang$frostc$IR$Block$ID local43;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$IR$Value* local46 = NULL;
// line 210
org$frostlang$frostc$IR** $tmp719 = &param0->ir;
org$frostlang$frostc$IR* $tmp720 = *$tmp719;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
org$frostlang$frostc$IR* $tmp721 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local0) = $tmp720;
// line 211
$fn723 $tmp722 = ($fn723) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp724 = $tmp722(param4);
org$frostlang$frostc$Type$Kind* $tmp725 = &$tmp724->typeKind;
org$frostlang$frostc$Type$Kind $tmp726 = *$tmp725;
org$frostlang$frostc$Type$Kind$wrapper* $tmp727;
$tmp727 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp727->value = $tmp726;
frost$core$Int64 $tmp728 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp729 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp728);
org$frostlang$frostc$Type$Kind$wrapper* $tmp730;
$tmp730 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp730->value = $tmp729;
ITable* $tmp731 = ((frost$core$Equatable*) $tmp727)->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
frost$core$Bit $tmp734 = $tmp732(((frost$core$Equatable*) $tmp727), ((frost$core$Equatable*) $tmp730));
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp736 = (frost$core$Int64) {211};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s737, $tmp736);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp730)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp727)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 212
$fn739 $tmp738 = ($fn739) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp740 = $tmp738(param4);
org$frostlang$frostc$FixedArray** $tmp741 = &$tmp740->subtypes;
org$frostlang$frostc$FixedArray* $tmp742 = *$tmp741;
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit($tmp742 != NULL);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp745 = (frost$core$Int64) {212};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s746, $tmp745, &$s747);
abort(); // unreachable
block3:;
ITable* $tmp748 = ((frost$collections$CollectionView*) $tmp742)->$class->itable;
while ($tmp748->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp748 = $tmp748->next;
}
$fn750 $tmp749 = $tmp748->methods[0];
frost$core$Int64 $tmp751 = $tmp749(((frost$collections$CollectionView*) $tmp742));
frost$core$Int64 $tmp752 = (frost$core$Int64) {3};
frost$core$Bit $tmp753 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp751, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp755 = (frost$core$Int64) {212};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s756, $tmp755);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing REF($38:org.frostlang.frostc.Type)
// line 213
$fn758 $tmp757 = ($fn758) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp759 = $tmp757(param4);
org$frostlang$frostc$FixedArray** $tmp760 = &$tmp759->subtypes;
org$frostlang$frostc$FixedArray* $tmp761 = *$tmp760;
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit($tmp761 != NULL);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp764 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s765, $tmp764, &$s766);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp767 = (frost$core$Int64) {0};
frost$core$Object* $tmp768 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp761, $tmp767);
frost$core$String** $tmp769 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp768))->name;
frost$core$String* $tmp770 = *$tmp769;
frost$core$Bit $tmp771 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp770, &$s772);
bool $tmp773 = $tmp771.value;
if ($tmp773) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp774 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s775, $tmp774);
abort(); // unreachable
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp768);
// unreffing REF($76:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing REF($63:org.frostlang.frostc.Type)
// line 214
// line 215
org$frostlang$frostc$Variable$Storage** $tmp776 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp777 = *$tmp776;
frost$core$Int64* $tmp778 = &$tmp777->$rawValue;
frost$core$Int64 $tmp779 = *$tmp778;
frost$core$Int64 $tmp780 = (frost$core$Int64) {0};
frost$core$Bit $tmp781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp779, $tmp780);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp783 = (frost$core$Int64*) ($tmp777->$data + 0);
frost$core$Int64 $tmp784 = *$tmp783;
*(&local2) = $tmp784;
// line 217
frost$core$Int64 $tmp785 = *(&local2);
*(&local1) = $tmp785;
goto block11;
block13:;
// line 220
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(false);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s789, $tmp788);
abort(); // unreachable
block14:;
goto block11;
block11:;
// line 223
$fn791 $tmp790 = ($fn791) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp792 = $tmp790(param4);
org$frostlang$frostc$FixedArray** $tmp793 = &$tmp792->subtypes;
org$frostlang$frostc$FixedArray* $tmp794 = *$tmp793;
frost$core$Bit $tmp795 = frost$core$Bit$init$builtin_bit($tmp794 != NULL);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp797 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s798, $tmp797, &$s799);
abort(); // unreachable
block16:;
frost$core$Int64 $tmp800 = (frost$core$Int64) {1};
frost$core$Object* $tmp801 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp794, $tmp800);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp801)));
org$frostlang$frostc$Type* $tmp802 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp801);
frost$core$Frost$unref$frost$core$Object$Q($tmp801);
// unreffing REF($133:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing REF($120:org.frostlang.frostc.Type)
// line 224
org$frostlang$frostc$Type* $tmp803 = *(&local3);
org$frostlang$frostc$Type$Kind* $tmp804 = &$tmp803->typeKind;
org$frostlang$frostc$Type$Kind $tmp805 = *$tmp804;
org$frostlang$frostc$Type$Kind$wrapper* $tmp806;
$tmp806 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp806->value = $tmp805;
frost$core$Int64 $tmp807 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp808 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp807);
org$frostlang$frostc$Type$Kind$wrapper* $tmp809;
$tmp809 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp809->value = $tmp808;
ITable* $tmp810 = ((frost$core$Equatable*) $tmp806)->$class->itable;
while ($tmp810->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[1];
frost$core$Bit $tmp813 = $tmp811(((frost$core$Equatable*) $tmp806), ((frost$core$Equatable*) $tmp809));
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp815 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s816, $tmp815);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp809)));
// unreffing REF($156:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp806)));
// unreffing REF($152:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 225
$fn818 $tmp817 = ($fn818) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp819 = $tmp817(param4);
org$frostlang$frostc$FixedArray** $tmp820 = &$tmp819->subtypes;
org$frostlang$frostc$FixedArray* $tmp821 = *$tmp820;
frost$core$Bit $tmp822 = frost$core$Bit$init$builtin_bit($tmp821 != NULL);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp824 = (frost$core$Int64) {225};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s825, $tmp824, &$s826);
abort(); // unreachable
block20:;
frost$core$Int64 $tmp827 = (frost$core$Int64) {2};
frost$core$Object* $tmp828 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp821, $tmp827);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp828)));
org$frostlang$frostc$Type* $tmp829 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp828);
frost$core$Frost$unref$frost$core$Object$Q($tmp828);
// unreffing REF($185:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($172:org.frostlang.frostc.Type)
// line 226
$fn831 $tmp830 = ($fn831) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp832 = $tmp830(param4);
org$frostlang$frostc$ClassDecl* $tmp833 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp832);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
org$frostlang$frostc$ClassDecl* $tmp834 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
*(&local5) = $tmp833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($203:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing REF($202:org.frostlang.frostc.Type)
// line 227
org$frostlang$frostc$ClassDecl* $tmp835 = *(&local5);
frost$core$Bit $tmp836 = frost$core$Bit$init$builtin_bit($tmp835 == NULL);
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block22; else goto block23;
block22:;
// line 228
org$frostlang$frostc$ClassDecl* $tmp838 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing rangeClass
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp839 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing stepType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp840 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp841 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block23:;
// line 230
org$frostlang$frostc$ClassDecl* $tmp842 = *(&local5);
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit($tmp842 != NULL);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp845 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s846, $tmp845, &$s847);
abort(); // unreachable
block24:;
frost$collections$ListView* $tmp848 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp842);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$collections$ListView* $tmp849 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local6) = $tmp848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// unreffing REF($255:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
// line 233
org$frostlang$frostc$IR$Value* $tmp850 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp851 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp852 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp853 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp854 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp855 = *(&local6);
frost$core$Int64 $tmp856 = (frost$core$Int64) {0};
ITable* $tmp857 = $tmp855->$class->itable;
while ($tmp857->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp857 = $tmp857->next;
}
$fn859 $tmp858 = $tmp857->methods[0];
frost$core$Object* $tmp860 = $tmp858($tmp855, $tmp856);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp853, $tmp854, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp860));
$fn862 $tmp861 = ($fn862) $tmp852->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp863 = $tmp861($tmp852, $tmp853);
org$frostlang$frostc$Type* $tmp864 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp850, $tmp851, $tmp863, $tmp864);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
org$frostlang$frostc$IR$Value* $tmp865 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local7) = $tmp850;
frost$core$Frost$unref$frost$core$Object$Q($tmp860);
// unreffing REF($276:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($270:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing REF($267:org.frostlang.frostc.IR.Value)
// line 237
org$frostlang$frostc$IR* $tmp866 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp867 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp868 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp869 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp870 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp871 = (frost$core$Int64) {2};
frost$core$Int64 $tmp872 = *(&local1);
org$frostlang$frostc$Type* $tmp873 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp870, $tmp871, $tmp872, $tmp873);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp867, $tmp868, param1, $tmp869, $tmp870);
$fn875 $tmp874 = ($fn875) $tmp866->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp876 = $tmp874($tmp866, $tmp867);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
// unreffing REF($304:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($301:org.frostlang.frostc.IR.Statement)
// line 240
org$frostlang$frostc$IR$Value* $tmp877 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp878 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp879 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp880 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp881 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp882 = *(&local6);
frost$core$Int64 $tmp883 = (frost$core$Int64) {1};
ITable* $tmp884 = $tmp882->$class->itable;
while ($tmp884->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp884 = $tmp884->next;
}
$fn886 $tmp885 = $tmp884->methods[0];
frost$core$Object* $tmp887 = $tmp885($tmp882, $tmp883);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp880, $tmp881, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp887));
$fn889 $tmp888 = ($fn889) $tmp879->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp890 = $tmp888($tmp879, $tmp880);
org$frostlang$frostc$Type* $tmp891 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp877, $tmp878, $tmp890, $tmp891);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
org$frostlang$frostc$IR$Value* $tmp892 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local8) = $tmp877;
frost$core$Frost$unref$frost$core$Object$Q($tmp887);
// unreffing REF($328:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing REF($322:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing REF($319:org.frostlang.frostc.IR.Value)
// line 244
org$frostlang$frostc$IR$Value* $tmp893 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp894 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp895 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp896 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp897 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp898 = *(&local6);
frost$core$Int64 $tmp899 = (frost$core$Int64) {2};
ITable* $tmp900 = $tmp898->$class->itable;
while ($tmp900->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp900 = $tmp900->next;
}
$fn902 $tmp901 = $tmp900->methods[0];
frost$core$Object* $tmp903 = $tmp901($tmp898, $tmp899);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp896, $tmp897, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp903));
$fn905 $tmp904 = ($fn905) $tmp895->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp906 = $tmp904($tmp895, $tmp896);
org$frostlang$frostc$Type* $tmp907 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp893, $tmp894, $tmp906, $tmp907);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
org$frostlang$frostc$IR$Value* $tmp908 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local9) = $tmp893;
frost$core$Frost$unref$frost$core$Object$Q($tmp903);
// unreffing REF($361:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// unreffing REF($355:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($352:org.frostlang.frostc.IR.Value)
// line 246
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 247
org$frostlang$frostc$IR$Value* $tmp909 = *(&local9);
$fn911 $tmp910 = ($fn911) $tmp909->$class->vtable[2];
org$frostlang$frostc$Type* $tmp912 = $tmp910($tmp909);
org$frostlang$frostc$Type* $tmp913 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp914 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp912, $tmp913);
bool $tmp915 = $tmp914.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($390:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($389:org.frostlang.frostc.Type)
if ($tmp915) goto block26; else goto block28;
block26:;
// line 248
org$frostlang$frostc$IR$Value* $tmp916 = *(&local9);
org$frostlang$frostc$Type* $tmp917 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp918 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp916, $tmp917);
frost$core$Bit $tmp919 = frost$core$Bit$init$builtin_bit($tmp918 != NULL);
bool $tmp920 = $tmp919.value;
if ($tmp920) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp921 = (frost$core$Int64) {248};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s922, $tmp921, &$s923);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
org$frostlang$frostc$IR$Value* $tmp924 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local10) = $tmp918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// unreffing REF($404:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// unreffing REF($403:org.frostlang.frostc.Type)
goto block27;
block28:;
// line 1
// line 251
org$frostlang$frostc$IR$Value* $tmp925 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
org$frostlang$frostc$IR$Value* $tmp926 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local10) = $tmp925;
goto block27;
block27:;
// line 253
org$frostlang$frostc$IR$Value* $tmp927 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp928 = *(&local9);
$fn930 $tmp929 = ($fn930) $tmp928->$class->vtable[2];
org$frostlang$frostc$Type* $tmp931 = $tmp929($tmp928);
org$frostlang$frostc$Type* $tmp932 = org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp931);
org$frostlang$frostc$IR$Value* $tmp933 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp927, $tmp932);
frost$core$Bit $tmp934 = frost$core$Bit$init$builtin_bit($tmp933 != NULL);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp936 = (frost$core$Int64) {253};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s937, $tmp936, &$s938);
abort(); // unreachable
block31:;
frost$collections$Array* $tmp939 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp940 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp939, $tmp940);
org$frostlang$frostc$Compiler$TypeContext* $tmp941 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp942 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp941, $tmp942);
org$frostlang$frostc$IR$Value* $tmp943 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp933, &$s944, ((frost$collections$ListView*) $tmp939), $tmp941);
org$frostlang$frostc$Type* $tmp945 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp946 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp943, $tmp945);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
org$frostlang$frostc$IR$Value* $tmp947 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
*(&local11) = $tmp946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// unreffing REF($462:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($460:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing REF($457:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
// unreffing REF($452:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($443:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($442:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// unreffing REF($441:org.frostlang.frostc.Type)
// line 255
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 256
org$frostlang$frostc$IR$Value* $tmp948 = *(&local9);
$fn950 $tmp949 = ($fn950) $tmp948->$class->vtable[2];
org$frostlang$frostc$Type* $tmp951 = $tmp949($tmp948);
org$frostlang$frostc$Type* $tmp952 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp953 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp951, $tmp952);
bool $tmp954 = $tmp953.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing REF($497:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing REF($496:org.frostlang.frostc.Type)
if ($tmp954) goto block33; else goto block35;
block33:;
// line 257
org$frostlang$frostc$IR$Value* $tmp955 = *(&local11);
org$frostlang$frostc$Type* $tmp956 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp957 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp955, $tmp956);
frost$core$Bit $tmp958 = frost$core$Bit$init$builtin_bit($tmp957 != NULL);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp960 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s961, $tmp960, &$s962);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
org$frostlang$frostc$IR$Value* $tmp963 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local12) = $tmp957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($510:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($509:org.frostlang.frostc.Type)
goto block34;
block35:;
// line 1
// line 260
org$frostlang$frostc$IR$Value* $tmp964 = *(&local11);
frost$core$Bit $tmp965 = frost$core$Bit$init$builtin_bit($tmp964 != NULL);
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp967 = (frost$core$Int64) {260};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s968, $tmp967, &$s969);
abort(); // unreachable
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
org$frostlang$frostc$IR$Value* $tmp970 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local12) = $tmp964;
goto block34;
block34:;
// line 264
org$frostlang$frostc$IR$Value* $tmp971 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp972 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp973 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp974 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp975 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp976 = *(&local6);
frost$core$Int64 $tmp977 = (frost$core$Int64) {3};
ITable* $tmp978 = $tmp976->$class->itable;
while ($tmp978->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
frost$core$Object* $tmp981 = $tmp979($tmp976, $tmp977);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp974, $tmp975, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp981));
$fn983 $tmp982 = ($fn983) $tmp973->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp984 = $tmp982($tmp973, $tmp974);
org$frostlang$frostc$Type* $tmp985 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp971, $tmp972, $tmp984, $tmp985);
org$frostlang$frostc$IR$Value* $tmp986 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp971);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
org$frostlang$frostc$IR$Value* $tmp987 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local13) = $tmp986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($567:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing REF($565:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp981);
// unreffing REF($560:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// unreffing REF($554:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
// unreffing REF($551:org.frostlang.frostc.IR.Value)
// line 268
org$frostlang$frostc$IR* $tmp988 = *(&local0);
$fn990 $tmp989 = ($fn990) $tmp988->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp991 = $tmp989($tmp988, &$s992);
*(&local14) = $tmp991;
// line 269
org$frostlang$frostc$IR* $tmp993 = *(&local0);
$fn995 $tmp994 = ($fn995) $tmp993->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp996 = $tmp994($tmp993, &$s997);
*(&local15) = $tmp996;
// line 270
org$frostlang$frostc$IR* $tmp998 = *(&local0);
$fn1000 $tmp999 = ($fn1000) $tmp998->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1001 = $tmp999($tmp998, &$s1002);
*(&local16) = $tmp1001;
// line 271
org$frostlang$frostc$IR* $tmp1003 = *(&local0);
$fn1005 $tmp1004 = ($fn1005) $tmp1003->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1006 = $tmp1004($tmp1003, &$s1007);
*(&local17) = $tmp1006;
// line 272
org$frostlang$frostc$IR* $tmp1008 = *(&local0);
$fn1010 $tmp1009 = ($fn1010) $tmp1008->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1011 = $tmp1009($tmp1008, &$s1012);
*(&local18) = $tmp1011;
// line 273
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 274
org$frostlang$frostc$Compiler$AutoContext* $tmp1013 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1014 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1015 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1016 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp1017 = *(&local16);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1014, $tmp1015, param2, $tmp1016, $tmp1017);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1013, param0, $tmp1014);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
org$frostlang$frostc$Compiler$AutoContext* $tmp1018 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local20) = $tmp1013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// unreffing REF($619:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// unreffing REF($618:org.frostlang.frostc.Compiler.AutoContext)
// line 1
// line 276
org$frostlang$frostc$Compiler$AutoScope* $tmp1019 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1019, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
org$frostlang$frostc$Compiler$AutoScope* $tmp1020 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local21) = $tmp1019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
// unreffing REF($640:org.frostlang.frostc.Compiler.AutoScope)
// line 277
org$frostlang$frostc$Type* $tmp1021 = *(&local4);
frost$core$String** $tmp1022 = &((org$frostlang$frostc$Symbol*) $tmp1021)->name;
frost$core$String* $tmp1023 = *$tmp1022;
frost$core$Bit $tmp1024 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1023, &$s1025);
bool $tmp1026 = $tmp1024.value;
if ($tmp1026) goto block40; else goto block42;
block40:;
// line 278
org$frostlang$frostc$IR$Value* $tmp1027 = *(&local9);
frost$collections$Array* $tmp1028 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1029 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1028, $tmp1029);
org$frostlang$frostc$ASTNode* $tmp1030 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1031 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp1032 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1030, $tmp1031, param1, $tmp1032);
frost$collections$Array$add$frost$collections$Array$T($tmp1028, ((frost$core$Object*) $tmp1030));
org$frostlang$frostc$Compiler$TypeContext* $tmp1033 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1034 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1035 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1033, $tmp1034, $tmp1035);
org$frostlang$frostc$IR$Value* $tmp1036 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1027, &$s1037, ((frost$collections$ListView*) $tmp1028), $tmp1033);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
org$frostlang$frostc$IR$Value* $tmp1038 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local22) = $tmp1036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// unreffing REF($678:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
// unreffing REF($676:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
// unreffing REF($674:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing REF($667:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($662:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 280
org$frostlang$frostc$IR$Value* $tmp1039 = *(&local22);
frost$core$Bit $tmp1040 = frost$core$Bit$init$builtin_bit($tmp1039 != NULL);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {280};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1043, $tmp1042);
abort(); // unreachable
block43:;
// line 281
org$frostlang$frostc$IR$Value* $tmp1044 = *(&local22);
frost$core$Bit $tmp1045 = frost$core$Bit$init$builtin_bit($tmp1044 != NULL);
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1047 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1048, $tmp1047, &$s1049);
abort(); // unreachable
block45:;
org$frostlang$frostc$IR$Value* $tmp1050 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
org$frostlang$frostc$IR$Value* $tmp1051 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local19) = $tmp1050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
// unreffing REF($720:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp1052 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
// unreffing comparison
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block41;
block42:;
// line 1
// line 284
org$frostlang$frostc$Type* $tmp1053 = *(&local4);
frost$core$String** $tmp1054 = &((org$frostlang$frostc$Symbol*) $tmp1053)->name;
frost$core$String* $tmp1055 = *$tmp1054;
frost$core$Bit $tmp1056 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1055, &$s1057);
bool $tmp1058 = $tmp1056.value;
if ($tmp1058) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp1059 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1060, $tmp1059);
abort(); // unreachable
block47:;
// line 285
org$frostlang$frostc$IR$Value* $tmp1061 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1062 = (frost$core$Int64) {0};
frost$core$Bit $tmp1063 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp1061, $tmp1062, $tmp1063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
org$frostlang$frostc$IR$Value* $tmp1064 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local19) = $tmp1061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
// unreffing REF($749:org.frostlang.frostc.IR.Value)
goto block41;
block41:;
// line 287
org$frostlang$frostc$IR* $tmp1065 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1066 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1067 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1068 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1069 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp1070 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1066, $tmp1067, param1, $tmp1068, $tmp1069, $tmp1070);
$fn1072 $tmp1071 = ($fn1072) $tmp1065->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1073 = $tmp1071($tmp1065, $tmp1066);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing REF($765:org.frostlang.frostc.IR.Statement)
// line 288
org$frostlang$frostc$IR* $tmp1074 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1075 = *(&local17);
$fn1077 $tmp1076 = ($fn1077) $tmp1074->$class->vtable[4];
$tmp1076($tmp1074, $tmp1075);
// line 289
org$frostlang$frostc$IR* $tmp1078 = *(&local0);
$fn1080 $tmp1079 = ($fn1080) $tmp1078->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1081 = $tmp1079($tmp1078, &$s1082);
*(&local23) = $tmp1081;
// line 290
org$frostlang$frostc$IR* $tmp1083 = *(&local0);
$fn1085 $tmp1084 = ($fn1085) $tmp1083->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1086 = $tmp1084($tmp1083, &$s1087);
*(&local24) = $tmp1086;
// line 291
org$frostlang$frostc$IR* $tmp1088 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1089 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1090 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1091 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1092 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp1093 = *(&local24);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1089, $tmp1090, param1, $tmp1091, $tmp1092, $tmp1093);
$fn1095 $tmp1094 = ($fn1095) $tmp1088->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1096 = $tmp1094($tmp1088, $tmp1089);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
// unreffing REF($793:org.frostlang.frostc.IR.Statement)
// line 293
org$frostlang$frostc$IR* $tmp1097 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1098 = *(&local23);
$fn1100 $tmp1099 = ($fn1100) $tmp1097->$class->vtable[4];
$tmp1099($tmp1097, $tmp1098);
// line 294
org$frostlang$frostc$IR$Value* $tmp1101 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1102 = *(&local8);
frost$collections$ListView* $tmp1103 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1102);
org$frostlang$frostc$Compiler$TypeContext* $tmp1104 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1105 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1106 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1104, $tmp1105, $tmp1106);
org$frostlang$frostc$IR$Value* $tmp1107 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1101, &$s1108, $tmp1103, $tmp1104);
frost$core$Bit $tmp1109 = frost$core$Bit$init$builtin_bit($tmp1107 != NULL);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1111 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1112, $tmp1111, &$s1113);
abort(); // unreachable
block49:;
org$frostlang$frostc$IR$Value* $tmp1114 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1107);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
org$frostlang$frostc$IR$Value* $tmp1115 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local25) = $tmp1114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
// unreffing REF($826:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// unreffing REF($817:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1106));
// unreffing REF($815:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
// unreffing REF($813:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($812:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 297
org$frostlang$frostc$IR* $tmp1116 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1117 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1118 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1119 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp1120 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1121 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1117, $tmp1118, param1, $tmp1119, $tmp1120, $tmp1121);
$fn1123 $tmp1122 = ($fn1123) $tmp1116->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1124 = $tmp1122($tmp1116, $tmp1117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
// unreffing REF($851:org.frostlang.frostc.IR.Statement)
// line 299
org$frostlang$frostc$IR* $tmp1125 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1126 = *(&local24);
$fn1128 $tmp1127 = ($fn1128) $tmp1125->$class->vtable[4];
$tmp1127($tmp1125, $tmp1126);
// line 300
org$frostlang$frostc$IR$Value* $tmp1129 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1130 = *(&local8);
frost$collections$ListView* $tmp1131 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1130);
org$frostlang$frostc$Compiler$TypeContext* $tmp1132 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1133 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1134 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1132, $tmp1133, $tmp1134);
org$frostlang$frostc$IR$Value* $tmp1135 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1129, &$s1136, $tmp1131, $tmp1132);
frost$core$Bit $tmp1137 = frost$core$Bit$init$builtin_bit($tmp1135 != NULL);
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1139 = (frost$core$Int64) {301};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1140, $tmp1139, &$s1141);
abort(); // unreachable
block51:;
org$frostlang$frostc$IR$Value* $tmp1142 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1135);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
org$frostlang$frostc$IR$Value* $tmp1143 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local26) = $tmp1142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
// unreffing REF($884:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing REF($875:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
// unreffing REF($873:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($871:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// unreffing REF($870:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 303
org$frostlang$frostc$IR* $tmp1144 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1145 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1146 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1147 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp1148 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1149 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1145, $tmp1146, param1, $tmp1147, $tmp1148, $tmp1149);
$fn1151 $tmp1150 = ($fn1151) $tmp1144->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1152 = $tmp1150($tmp1144, $tmp1145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
// unreffing REF($909:org.frostlang.frostc.IR.Statement)
// line 305
org$frostlang$frostc$IR* $tmp1153 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1154 = *(&local18);
$fn1156 $tmp1155 = ($fn1156) $tmp1153->$class->vtable[4];
$tmp1155($tmp1153, $tmp1154);
// line 306
org$frostlang$frostc$IR* $tmp1157 = *(&local0);
$fn1159 $tmp1158 = ($fn1159) $tmp1157->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1160 = $tmp1158($tmp1157, &$s1161);
*(&local27) = $tmp1160;
// line 307
org$frostlang$frostc$IR* $tmp1162 = *(&local0);
$fn1164 $tmp1163 = ($fn1164) $tmp1162->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1165 = $tmp1163($tmp1162, &$s1166);
*(&local28) = $tmp1165;
// line 308
org$frostlang$frostc$IR* $tmp1167 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1168 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1169 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1170 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1171 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1172 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1168, $tmp1169, param1, $tmp1170, $tmp1171, $tmp1172);
$fn1174 $tmp1173 = ($fn1174) $tmp1167->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1175 = $tmp1173($tmp1167, $tmp1168);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// unreffing REF($937:org.frostlang.frostc.IR.Statement)
// line 310
org$frostlang$frostc$IR* $tmp1176 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1177 = *(&local27);
$fn1179 $tmp1178 = ($fn1179) $tmp1176->$class->vtable[4];
$tmp1178($tmp1176, $tmp1177);
// line 311
org$frostlang$frostc$IR$Value* $tmp1180 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1181 = *(&local8);
frost$collections$ListView* $tmp1182 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1181);
org$frostlang$frostc$Compiler$TypeContext* $tmp1183 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1184 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1185 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1183, $tmp1184, $tmp1185);
org$frostlang$frostc$IR$Value* $tmp1186 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1180, &$s1187, $tmp1182, $tmp1183);
frost$core$Bit $tmp1188 = frost$core$Bit$init$builtin_bit($tmp1186 != NULL);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp1190 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1191, $tmp1190, &$s1192);
abort(); // unreachable
block53:;
org$frostlang$frostc$IR$Value* $tmp1193 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1186);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
org$frostlang$frostc$IR$Value* $tmp1194 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local29) = $tmp1193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// unreffing REF($970:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// unreffing REF($961:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// unreffing REF($959:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
// unreffing REF($957:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// unreffing REF($956:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 314
org$frostlang$frostc$IR* $tmp1195 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1196 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1197 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1198 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1199 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1200 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1196, $tmp1197, param1, $tmp1198, $tmp1199, $tmp1200);
$fn1202 $tmp1201 = ($fn1202) $tmp1195->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1203 = $tmp1201($tmp1195, $tmp1196);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
// unreffing REF($995:org.frostlang.frostc.IR.Statement)
// line 316
org$frostlang$frostc$IR* $tmp1204 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1205 = *(&local28);
$fn1207 $tmp1206 = ($fn1207) $tmp1204->$class->vtable[4];
$tmp1206($tmp1204, $tmp1205);
// line 317
org$frostlang$frostc$IR$Value* $tmp1208 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1209 = *(&local8);
frost$collections$ListView* $tmp1210 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1209);
org$frostlang$frostc$Compiler$TypeContext* $tmp1211 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1212 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1213 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1211, $tmp1212, $tmp1213);
org$frostlang$frostc$IR$Value* $tmp1214 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1208, &$s1215, $tmp1210, $tmp1211);
frost$core$Bit $tmp1216 = frost$core$Bit$init$builtin_bit($tmp1214 != NULL);
bool $tmp1217 = $tmp1216.value;
if ($tmp1217) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp1218 = (frost$core$Int64) {318};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1219, $tmp1218, &$s1220);
abort(); // unreachable
block55:;
org$frostlang$frostc$IR$Value* $tmp1221 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1214);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local30) = $tmp1221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// unreffing REF($1028:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// unreffing REF($1019:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
// unreffing REF($1017:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
// unreffing REF($1015:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
// unreffing REF($1014:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 320
org$frostlang$frostc$IR* $tmp1223 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1224 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1225 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1226 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp1227 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1228 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1224, $tmp1225, param1, $tmp1226, $tmp1227, $tmp1228);
$fn1230 $tmp1229 = ($fn1230) $tmp1223->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1231 = $tmp1229($tmp1223, $tmp1224);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
// unreffing REF($1053:org.frostlang.frostc.IR.Statement)
// line 322
org$frostlang$frostc$IR* $tmp1232 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1233 = *(&local14);
$fn1235 $tmp1234 = ($fn1235) $tmp1232->$class->vtable[4];
$tmp1234($tmp1232, $tmp1233);
// line 323
ITable* $tmp1236 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1236->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1236 = $tmp1236->next;
}
$fn1238 $tmp1237 = $tmp1236->methods[0];
frost$collections$Iterator* $tmp1239 = $tmp1237(((frost$collections$Iterable*) param5));
goto block57;
block57:;
ITable* $tmp1240 = $tmp1239->$class->itable;
while ($tmp1240->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1240 = $tmp1240->next;
}
$fn1242 $tmp1241 = $tmp1240->methods[0];
frost$core$Bit $tmp1243 = $tmp1241($tmp1239);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block59; else goto block58;
block58:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1245 = $tmp1239->$class->itable;
while ($tmp1245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1245 = $tmp1245->next;
}
$fn1247 $tmp1246 = $tmp1245->methods[1];
frost$core$Object* $tmp1248 = $tmp1246($tmp1239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1248)));
org$frostlang$frostc$ASTNode* $tmp1249 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp1248);
// line 324
org$frostlang$frostc$ASTNode* $tmp1250 = *(&local31);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1250);
frost$core$Frost$unref$frost$core$Object$Q($tmp1248);
// unreffing REF($1084:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1251 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing s
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// unreffing REF($1073:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$IR$Value* $tmp1252 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
// unreffing backwardEntryExclusiveTest
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1253 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing backwardEntryInclusiveTest
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
// unreffing forwardEntryExclusiveTest
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
// unreffing forwardEntryInclusiveTest
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1256 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing scope
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 327
org$frostlang$frostc$IR* $tmp1257 = *(&local0);
$fn1259 $tmp1258 = ($fn1259) $tmp1257->$class->vtable[5];
frost$core$Bit $tmp1260 = $tmp1258($tmp1257);
frost$core$Bit $tmp1261 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1260);
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block60; else goto block61;
block60:;
// line 328
org$frostlang$frostc$IR* $tmp1263 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1264 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1265 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1266 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1264, $tmp1265, param1, $tmp1266);
$fn1268 $tmp1267 = ($fn1268) $tmp1263->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1269 = $tmp1267($tmp1263, $tmp1264);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
// unreffing REF($1141:org.frostlang.frostc.IR.Statement)
goto block61;
block61:;
// line 330
org$frostlang$frostc$IR* $tmp1270 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1271 = *(&local16);
$fn1273 $tmp1272 = ($fn1273) $tmp1270->$class->vtable[4];
$tmp1272($tmp1270, $tmp1271);
// line 331
org$frostlang$frostc$IR* $tmp1274 = *(&local0);
$fn1276 $tmp1275 = ($fn1276) $tmp1274->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1277 = $tmp1275($tmp1274, &$s1278);
*(&local32) = $tmp1277;
// line 333
org$frostlang$frostc$IR$Value* $tmp1279 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1280 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1281 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1282 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1283 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp1284 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1285 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1286 = *(&local1);
org$frostlang$frostc$Type* $tmp1287 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1284, $tmp1285, $tmp1286, $tmp1287);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1282, $tmp1283, param1, $tmp1284);
$fn1289 $tmp1288 = ($fn1289) $tmp1281->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1290 = $tmp1288($tmp1281, $tmp1282);
org$frostlang$frostc$Type* $tmp1291 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1279, $tmp1280, $tmp1290, $tmp1291);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
org$frostlang$frostc$IR$Value* $tmp1292 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local33) = $tmp1279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// unreffing REF($1167:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
// unreffing REF($1165:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
// unreffing REF($1162:org.frostlang.frostc.IR.Value)
// line 335
org$frostlang$frostc$IR* $tmp1293 = *(&local0);
$fn1295 $tmp1294 = ($fn1295) $tmp1293->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1296 = $tmp1294($tmp1293, &$s1297);
*(&local34) = $tmp1296;
// line 336
org$frostlang$frostc$IR* $tmp1298 = *(&local0);
$fn1300 $tmp1299 = ($fn1300) $tmp1298->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1301 = $tmp1299($tmp1298, &$s1302);
*(&local35) = $tmp1301;
// line 337
org$frostlang$frostc$IR* $tmp1303 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1304 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1305 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1306 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1307 = *(&local34);
org$frostlang$frostc$IR$Block$ID $tmp1308 = *(&local35);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1304, $tmp1305, param1, $tmp1306, $tmp1307, $tmp1308);
$fn1310 $tmp1309 = ($fn1310) $tmp1303->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1311 = $tmp1309($tmp1303, $tmp1304);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
// unreffing REF($1205:org.frostlang.frostc.IR.Statement)
// line 341
org$frostlang$frostc$IR* $tmp1312 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1313 = *(&local34);
$fn1315 $tmp1314 = ($fn1315) $tmp1312->$class->vtable[4];
$tmp1314($tmp1312, $tmp1313);
// line 344
org$frostlang$frostc$IR$Value* $tmp1316 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1317 = *(&local33);
frost$collections$ListView* $tmp1318 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1317);
org$frostlang$frostc$Compiler$TypeContext* $tmp1319 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1320 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1319, $tmp1320);
org$frostlang$frostc$IR$Value* $tmp1321 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1316, &$s1322, $tmp1318, $tmp1319);
org$frostlang$frostc$Type* $tmp1323 = *(&local3);
org$frostlang$frostc$Type* $tmp1324 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1323);
org$frostlang$frostc$IR$Value* $tmp1325 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1321, $tmp1324);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
org$frostlang$frostc$IR$Value* $tmp1326 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local36) = $tmp1325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// unreffing REF($1231:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// unreffing REF($1230:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// unreffing REF($1228:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
// unreffing REF($1225:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
// unreffing REF($1224:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 348
org$frostlang$frostc$IR* $tmp1327 = *(&local0);
$fn1329 $tmp1328 = ($fn1329) $tmp1327->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1330 = $tmp1328($tmp1327, &$s1331);
*(&local37) = $tmp1330;
// line 349
org$frostlang$frostc$IR* $tmp1332 = *(&local0);
$fn1334 $tmp1333 = ($fn1334) $tmp1332->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1335 = $tmp1333($tmp1332, &$s1336);
*(&local38) = $tmp1335;
// line 350
org$frostlang$frostc$IR* $tmp1337 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1338 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1339 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1340 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1341 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1342 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1338, $tmp1339, param1, $tmp1340, $tmp1341, $tmp1342);
$fn1344 $tmp1343 = ($fn1344) $tmp1337->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1345 = $tmp1343($tmp1337, $tmp1338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// unreffing REF($1266:org.frostlang.frostc.IR.Statement)
// line 354
org$frostlang$frostc$IR* $tmp1346 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1347 = *(&local37);
$fn1349 $tmp1348 = ($fn1349) $tmp1346->$class->vtable[4];
$tmp1348($tmp1346, $tmp1347);
// line 355
org$frostlang$frostc$IR$Value* $tmp1350 = *(&local36);
frost$core$Bit $tmp1351 = frost$core$Bit$init$builtin_bit($tmp1350 != NULL);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {356};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1354, $tmp1353, &$s1355);
abort(); // unreachable
block62:;
org$frostlang$frostc$IR$Value* $tmp1356 = *(&local10);
frost$collections$ListView* $tmp1357 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1356);
org$frostlang$frostc$Compiler$TypeContext* $tmp1358 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1359 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1360 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1358, $tmp1359, $tmp1360);
org$frostlang$frostc$IR$Value* $tmp1361 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1350, &$s1362, $tmp1357, $tmp1358);
frost$core$Bit $tmp1363 = frost$core$Bit$init$builtin_bit($tmp1361 != NULL);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1365 = (frost$core$Int64) {355};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1366, $tmp1365, &$s1367);
abort(); // unreachable
block64:;
org$frostlang$frostc$IR$Value* $tmp1368 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1361);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
org$frostlang$frostc$IR$Value* $tmp1369 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local39) = $tmp1368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// unreffing REF($1307:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// unreffing REF($1298:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing REF($1296:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
// unreffing REF($1294:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
// unreffing REF($1293:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 357
org$frostlang$frostc$IR* $tmp1370 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1371 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1372 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1373 = *(&local39);
org$frostlang$frostc$IR$Block$ID $tmp1374 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1375 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1371, $tmp1372, param1, $tmp1373, $tmp1374, $tmp1375);
$fn1377 $tmp1376 = ($fn1377) $tmp1370->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1378 = $tmp1376($tmp1370, $tmp1371);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
// unreffing REF($1332:org.frostlang.frostc.IR.Statement)
// line 360
org$frostlang$frostc$IR* $tmp1379 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1380 = *(&local38);
$fn1382 $tmp1381 = ($fn1382) $tmp1379->$class->vtable[4];
$tmp1381($tmp1379, $tmp1380);
// line 361
org$frostlang$frostc$IR$Value* $tmp1383 = *(&local36);
frost$core$Bit $tmp1384 = frost$core$Bit$init$builtin_bit($tmp1383 != NULL);
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp1386 = (frost$core$Int64) {362};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1387, $tmp1386, &$s1388);
abort(); // unreachable
block66:;
org$frostlang$frostc$IR$Value* $tmp1389 = *(&local10);
frost$collections$ListView* $tmp1390 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1389);
org$frostlang$frostc$Compiler$TypeContext* $tmp1391 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1392 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1393 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1391, $tmp1392, $tmp1393);
org$frostlang$frostc$IR$Value* $tmp1394 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1383, &$s1395, $tmp1390, $tmp1391);
frost$core$Bit $tmp1396 = frost$core$Bit$init$builtin_bit($tmp1394 != NULL);
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp1398 = (frost$core$Int64) {361};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1399, $tmp1398, &$s1400);
abort(); // unreachable
block68:;
org$frostlang$frostc$IR$Value* $tmp1401 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1394);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
org$frostlang$frostc$IR$Value* $tmp1402 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local40) = $tmp1401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
// unreffing REF($1373:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
// unreffing REF($1364:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// unreffing REF($1362:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
// unreffing REF($1360:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
// unreffing REF($1359:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 363
org$frostlang$frostc$IR* $tmp1403 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1404 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1405 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1406 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1407 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1408 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1404, $tmp1405, param1, $tmp1406, $tmp1407, $tmp1408);
$fn1410 $tmp1409 = ($fn1410) $tmp1403->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1411 = $tmp1409($tmp1403, $tmp1404);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
// unreffing REF($1398:org.frostlang.frostc.IR.Statement)
// line 367
org$frostlang$frostc$IR* $tmp1412 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1413 = *(&local35);
$fn1415 $tmp1414 = ($fn1415) $tmp1412->$class->vtable[4];
$tmp1414($tmp1412, $tmp1413);
// line 368
org$frostlang$frostc$IR$Value* $tmp1416 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1417 = *(&local8);
frost$collections$ListView* $tmp1418 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1417);
org$frostlang$frostc$Compiler$TypeContext* $tmp1419 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1420 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1419, $tmp1420);
org$frostlang$frostc$IR$Value* $tmp1421 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1416, &$s1422, $tmp1418, $tmp1419);
org$frostlang$frostc$Type* $tmp1423 = *(&local3);
org$frostlang$frostc$Type* $tmp1424 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1423);
org$frostlang$frostc$IR$Value* $tmp1425 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1421, $tmp1424);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
org$frostlang$frostc$IR$Value* $tmp1426 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local41) = $tmp1425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
// unreffing REF($1424:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// unreffing REF($1423:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
// unreffing REF($1421:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($1418:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
// unreffing REF($1417:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 372
org$frostlang$frostc$IR* $tmp1427 = *(&local0);
$fn1429 $tmp1428 = ($fn1429) $tmp1427->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1430 = $tmp1428($tmp1427, &$s1431);
*(&local42) = $tmp1430;
// line 373
org$frostlang$frostc$IR* $tmp1432 = *(&local0);
$fn1434 $tmp1433 = ($fn1434) $tmp1432->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1435 = $tmp1433($tmp1432, &$s1436);
*(&local43) = $tmp1435;
// line 374
org$frostlang$frostc$IR* $tmp1437 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1438 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1439 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1440 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1441 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1442 = *(&local43);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1438, $tmp1439, param1, $tmp1440, $tmp1441, $tmp1442);
$fn1444 $tmp1443 = ($fn1444) $tmp1437->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1445 = $tmp1443($tmp1437, $tmp1438);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
// unreffing REF($1459:org.frostlang.frostc.IR.Statement)
// line 378
org$frostlang$frostc$IR* $tmp1446 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1447 = *(&local42);
$fn1449 $tmp1448 = ($fn1449) $tmp1446->$class->vtable[4];
$tmp1448($tmp1446, $tmp1447);
// line 379
org$frostlang$frostc$IR$Value* $tmp1450 = *(&local41);
frost$core$Bit $tmp1451 = frost$core$Bit$init$builtin_bit($tmp1450 != NULL);
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp1453 = (frost$core$Int64) {380};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1454, $tmp1453, &$s1455);
abort(); // unreachable
block70:;
org$frostlang$frostc$IR$Value* $tmp1456 = *(&local12);
frost$collections$ListView* $tmp1457 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1456);
org$frostlang$frostc$Compiler$TypeContext* $tmp1458 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1459 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1460 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1458, $tmp1459, $tmp1460);
org$frostlang$frostc$IR$Value* $tmp1461 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1450, &$s1462, $tmp1457, $tmp1458);
frost$core$Bit $tmp1463 = frost$core$Bit$init$builtin_bit($tmp1461 != NULL);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp1465 = (frost$core$Int64) {379};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1466, $tmp1465, &$s1467);
abort(); // unreachable
block72:;
org$frostlang$frostc$IR$Value* $tmp1468 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1461);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$IR$Value* $tmp1469 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local44) = $tmp1468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// unreffing REF($1500:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
// unreffing REF($1491:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
// unreffing REF($1489:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing REF($1487:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// unreffing REF($1486:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 382
org$frostlang$frostc$IR* $tmp1470 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1471 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1472 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1473 = *(&local44);
org$frostlang$frostc$IR$Block$ID $tmp1474 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1475 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1471, $tmp1472, param1, $tmp1473, $tmp1474, $tmp1475);
$fn1477 $tmp1476 = ($fn1477) $tmp1470->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1478 = $tmp1476($tmp1470, $tmp1471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
// unreffing REF($1525:org.frostlang.frostc.IR.Statement)
// line 386
org$frostlang$frostc$IR* $tmp1479 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1480 = *(&local43);
$fn1482 $tmp1481 = ($fn1482) $tmp1479->$class->vtable[4];
$tmp1481($tmp1479, $tmp1480);
// line 387
org$frostlang$frostc$IR$Value* $tmp1483 = *(&local41);
frost$core$Bit $tmp1484 = frost$core$Bit$init$builtin_bit($tmp1483 != NULL);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {388};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1487, $tmp1486, &$s1488);
abort(); // unreachable
block74:;
org$frostlang$frostc$IR$Value* $tmp1489 = *(&local12);
frost$collections$ListView* $tmp1490 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1489);
org$frostlang$frostc$Compiler$TypeContext* $tmp1491 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1492 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1493 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1491, $tmp1492, $tmp1493);
org$frostlang$frostc$IR$Value* $tmp1494 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1483, &$s1495, $tmp1490, $tmp1491);
frost$core$Bit $tmp1496 = frost$core$Bit$init$builtin_bit($tmp1494 != NULL);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block76; else goto block77;
block77:;
frost$core$Int64 $tmp1498 = (frost$core$Int64) {387};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1499, $tmp1498, &$s1500);
abort(); // unreachable
block76:;
org$frostlang$frostc$IR$Value* $tmp1501 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1494);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
org$frostlang$frostc$IR$Value* $tmp1502 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local45) = $tmp1501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
// unreffing REF($1566:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
// unreffing REF($1557:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
// unreffing REF($1555:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
// unreffing REF($1553:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
// unreffing REF($1552:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 389
org$frostlang$frostc$IR* $tmp1503 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1504 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1505 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1506 = *(&local45);
org$frostlang$frostc$IR$Block$ID $tmp1507 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1508 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1504, $tmp1505, param1, $tmp1506, $tmp1507, $tmp1508);
$fn1510 $tmp1509 = ($fn1510) $tmp1503->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1511 = $tmp1509($tmp1503, $tmp1504);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
// unreffing REF($1591:org.frostlang.frostc.IR.Statement)
// line 392
org$frostlang$frostc$IR* $tmp1512 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1513 = *(&local32);
$fn1515 $tmp1514 = ($fn1515) $tmp1512->$class->vtable[4];
$tmp1514($tmp1512, $tmp1513);
// line 393
org$frostlang$frostc$IR$Value* $tmp1516 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1517 = *(&local9);
frost$collections$ListView* $tmp1518 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1517);
org$frostlang$frostc$Compiler$TypeContext* $tmp1519 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1520 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1519, $tmp1520);
org$frostlang$frostc$IR$Value* $tmp1521 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1516, &$s1522, $tmp1518, $tmp1519);
org$frostlang$frostc$Type* $tmp1523 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp1524 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1521, $tmp1523);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
org$frostlang$frostc$IR$Value* $tmp1525 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local46) = $tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
// unreffing REF($1616:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
// unreffing REF($1614:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
// unreffing REF($1611:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
// unreffing REF($1610:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 395
org$frostlang$frostc$IR* $tmp1526 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1527 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1528 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1529 = *(&local46);
frost$core$Bit $tmp1530 = frost$core$Bit$init$builtin_bit($tmp1529 != NULL);
bool $tmp1531 = $tmp1530.value;
if ($tmp1531) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp1532 = (frost$core$Int64) {395};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1533, $tmp1532, &$s1534);
abort(); // unreachable
block78:;
org$frostlang$frostc$IR$Value* $tmp1535 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1536 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1537 = *(&local1);
org$frostlang$frostc$Type* $tmp1538 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1535, $tmp1536, $tmp1537, $tmp1538);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1527, $tmp1528, param1, $tmp1529, $tmp1535);
$fn1540 $tmp1539 = ($fn1540) $tmp1526->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1541 = $tmp1539($tmp1526, $tmp1527);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
// unreffing REF($1649:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
// unreffing REF($1638:org.frostlang.frostc.IR.Statement)
// line 396
org$frostlang$frostc$IR* $tmp1542 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1543 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1544 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1545 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1543, $tmp1544, param1, $tmp1545);
$fn1547 $tmp1546 = ($fn1547) $tmp1542->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1548 = $tmp1546($tmp1542, $tmp1543);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1543));
// unreffing REF($1665:org.frostlang.frostc.IR.Statement)
// line 398
org$frostlang$frostc$IR* $tmp1549 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1550 = *(&local15);
$fn1552 $tmp1551 = ($fn1552) $tmp1549->$class->vtable[4];
$tmp1551($tmp1549, $tmp1550);
org$frostlang$frostc$IR$Value* $tmp1553 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
// unreffing inc
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1554 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
// unreffing backwardExclusiveTestBit
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1555 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
// unreffing backwardInclusiveTestBit
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1556 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
// unreffing backwardDelta
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1557 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// unreffing forwardExclusiveTestBit
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1558 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
// unreffing forwardInclusiveTestBit
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1559 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing forwardDelta
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1560 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
// unreffing indexLoad
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1561 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
// unreffing context
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1562 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
// unreffing direction
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1563 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
// unreffing inclusive
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1564 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
// unreffing negStepComparison
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1565 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// unreffing negStep
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1566 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing stepComparison
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1567 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
// unreffing step
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1568 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
// unreffing end
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1569 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
// unreffing start
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1570 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
// unreffing rangeFields
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1571 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
// unreffing rangeClass
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1572 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
// unreffing stepType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1573 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1574 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
// line 405
org$frostlang$frostc$IR** $tmp1575 = &param0->ir;
org$frostlang$frostc$IR* $tmp1576 = *$tmp1575;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
org$frostlang$frostc$IR* $tmp1577 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local0) = $tmp1576;
// line 406
$fn1579 $tmp1578 = ($fn1579) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1580 = $tmp1578(param4);
frost$core$Bit $tmp1581 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1580);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1581;
goto block3;
block2:;
$fn1584 $tmp1583 = ($fn1584) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1585 = $tmp1583(param4);
frost$core$Bit $tmp1586 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1585);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
// unreffing REF($19:org.frostlang.frostc.Type)
*(&local1) = $tmp1586;
goto block3;
block3:;
frost$core$Bit $tmp1587 = *(&local1);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {406};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1590, $tmp1589);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 407
$fn1592 $tmp1591 = ($fn1592) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1593 = $tmp1591(param4);
frost$core$Bit $tmp1594 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp1593);
frost$core$Bit $tmp1595 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1594);
bool $tmp1596 = $tmp1595.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// unreffing REF($37:org.frostlang.frostc.Type)
if ($tmp1596) goto block6; else goto block7;
block6:;
// line 408
org$frostlang$frostc$IR* $tmp1597 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 410
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 411
$fn1599 $tmp1598 = ($fn1599) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1600 = $tmp1598(param4);
org$frostlang$frostc$Type$Kind* $tmp1601 = &$tmp1600->typeKind;
org$frostlang$frostc$Type$Kind $tmp1602 = *$tmp1601;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1603;
$tmp1603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1603->value = $tmp1602;
frost$core$Int64 $tmp1604 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1605 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1604);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1606;
$tmp1606 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
ITable* $tmp1607 = ((frost$core$Equatable*) $tmp1603)->$class->itable;
while ($tmp1607->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1607 = $tmp1607->next;
}
$fn1609 $tmp1608 = $tmp1607->methods[0];
frost$core$Bit $tmp1610 = $tmp1608(((frost$core$Equatable*) $tmp1603), ((frost$core$Equatable*) $tmp1606));
bool $tmp1611 = $tmp1610.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1606)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1603)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
// unreffing REF($56:org.frostlang.frostc.Type)
if ($tmp1611) goto block8; else goto block10;
block8:;
// line 412
$fn1613 $tmp1612 = ($fn1613) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1614 = $tmp1612(param4);
org$frostlang$frostc$FixedArray** $tmp1615 = &$tmp1614->subtypes;
org$frostlang$frostc$FixedArray* $tmp1616 = *$tmp1615;
frost$core$Bit $tmp1617 = frost$core$Bit$init$builtin_bit($tmp1616 != NULL);
bool $tmp1618 = $tmp1617.value;
if ($tmp1618) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {412};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1620, $tmp1619, &$s1621);
abort(); // unreachable
block11:;
frost$core$Int64 $tmp1622 = (frost$core$Int64) {0};
frost$core$Object* $tmp1623 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1616, $tmp1622);
org$frostlang$frostc$Type$Kind* $tmp1624 = &((org$frostlang$frostc$Type*) $tmp1623)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1625 = *$tmp1624;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1626;
$tmp1626 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1626->value = $tmp1625;
frost$core$Int64 $tmp1627 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1628 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1627);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1629;
$tmp1629 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1629->value = $tmp1628;
ITable* $tmp1630 = ((frost$core$Equatable*) $tmp1626)->$class->itable;
while ($tmp1630->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1630 = $tmp1630->next;
}
$fn1632 $tmp1631 = $tmp1630->methods[0];
frost$core$Bit $tmp1633 = $tmp1631(((frost$core$Equatable*) $tmp1626), ((frost$core$Equatable*) $tmp1629));
bool $tmp1634 = $tmp1633.value;
if ($tmp1634) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1635 = (frost$core$Int64) {412};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1636, $tmp1635);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1629)));
// unreffing REF($100:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1626)));
// unreffing REF($96:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1623);
// unreffing REF($92:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
// unreffing REF($79:org.frostlang.frostc.Type)
// line 413
$fn1638 $tmp1637 = ($fn1638) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1639 = $tmp1637(param4);
org$frostlang$frostc$FixedArray** $tmp1640 = &$tmp1639->subtypes;
org$frostlang$frostc$FixedArray* $tmp1641 = *$tmp1640;
frost$core$Bit $tmp1642 = frost$core$Bit$init$builtin_bit($tmp1641 != NULL);
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1644 = (frost$core$Int64) {413};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1645, $tmp1644, &$s1646);
abort(); // unreachable
block15:;
frost$core$Int64 $tmp1647 = (frost$core$Int64) {0};
frost$core$Object* $tmp1648 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1641, $tmp1647);
org$frostlang$frostc$FixedArray** $tmp1649 = &((org$frostlang$frostc$Type*) $tmp1648)->subtypes;
org$frostlang$frostc$FixedArray* $tmp1650 = *$tmp1649;
frost$core$Bit $tmp1651 = frost$core$Bit$init$builtin_bit($tmp1650 != NULL);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1653 = (frost$core$Int64) {413};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1654, $tmp1653, &$s1655);
abort(); // unreachable
block17:;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {1};
frost$core$Object* $tmp1657 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1650, $tmp1656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1657)));
org$frostlang$frostc$Type* $tmp1658 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1657);
frost$core$Frost$unref$frost$core$Object$Q($tmp1657);
// unreffing REF($149:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1648);
// unreffing REF($135:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
// unreffing REF($122:org.frostlang.frostc.Type)
goto block9;
block10:;
// line 1
// line 416
$fn1660 $tmp1659 = ($fn1660) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1661 = $tmp1659(param4);
org$frostlang$frostc$Type$Kind* $tmp1662 = &$tmp1661->typeKind;
org$frostlang$frostc$Type$Kind $tmp1663 = *$tmp1662;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1664;
$tmp1664 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1664->value = $tmp1663;
frost$core$Int64 $tmp1665 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1666 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1665);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1667;
$tmp1667 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1667->value = $tmp1666;
ITable* $tmp1668 = ((frost$core$Equatable*) $tmp1664)->$class->itable;
while ($tmp1668->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1668 = $tmp1668->next;
}
$fn1670 $tmp1669 = $tmp1668->methods[0];
frost$core$Bit $tmp1671 = $tmp1669(((frost$core$Equatable*) $tmp1664), ((frost$core$Equatable*) $tmp1667));
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1673 = (frost$core$Int64) {416};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1674, $tmp1673);
abort(); // unreachable
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1667)));
// unreffing REF($177:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1664)));
// unreffing REF($173:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
// unreffing REF($170:org.frostlang.frostc.Type)
// line 417
$fn1676 $tmp1675 = ($fn1676) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1677 = $tmp1675(param4);
org$frostlang$frostc$FixedArray** $tmp1678 = &$tmp1677->subtypes;
org$frostlang$frostc$FixedArray* $tmp1679 = *$tmp1678;
frost$core$Bit $tmp1680 = frost$core$Bit$init$builtin_bit($tmp1679 != NULL);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp1682 = (frost$core$Int64) {417};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1683, $tmp1682, &$s1684);
abort(); // unreachable
block21:;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {1};
frost$core$Object* $tmp1686 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1679, $tmp1685);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1686)));
org$frostlang$frostc$Type* $tmp1687 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1686);
frost$core$Frost$unref$frost$core$Object$Q($tmp1686);
// unreffing REF($209:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
// unreffing REF($196:org.frostlang.frostc.Type)
goto block9;
block9:;
// line 419
org$frostlang$frostc$Type* $tmp1688 = *(&local2);
frost$core$Bit $tmp1689 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1688);
frost$core$Bit $tmp1690 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1689);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block23; else goto block24;
block23:;
// line 420
$fn1693 $tmp1692 = ($fn1693) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1694 = $tmp1692(param4);
frost$core$String* $tmp1695 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1696, ((frost$core$Object*) $tmp1694));
frost$core$String* $tmp1697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1695, &$s1698);
frost$core$String* $tmp1699 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1700, $tmp1697);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1699);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
// unreffing REF($236:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
// unreffing REF($235:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
// unreffing REF($232:org.frostlang.frostc.Type)
// line 422
org$frostlang$frostc$Type* $tmp1701 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
// unreffing elementType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block24:;
// line 424
org$frostlang$frostc$Compiler$AutoScope* $tmp1703 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1703, param0);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
org$frostlang$frostc$Compiler$AutoScope* $tmp1704 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local3) = $tmp1703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
// unreffing REF($263:org.frostlang.frostc.Compiler.AutoScope)
// line 425
frost$core$Int64 $tmp1705 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1706 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1705);
org$frostlang$frostc$Type* $tmp1707 = *(&local2);
org$frostlang$frostc$Type* $tmp1708 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1707);
org$frostlang$frostc$Pair* $tmp1709 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1706, ((org$frostlang$frostc$ASTNode*) NULL), $tmp1708);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
org$frostlang$frostc$Pair* $tmp1710 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local4) = $tmp1709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
// unreffing REF($281:org.frostlang.frostc.Pair<org.frostlang.frostc.Variable, org.frostlang.frostc.IR.Value?>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
// unreffing REF($279:org.frostlang.frostc.Type)
// line 427
org$frostlang$frostc$Pair* $tmp1711 = *(&local4);
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit($tmp1711 == NULL);
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block25; else goto block26;
block25:;
// line 428
org$frostlang$frostc$Pair* $tmp1714 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
// unreffing target
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1715 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
// unreffing scope
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
// unreffing elementType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1717 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// line 430
org$frostlang$frostc$Pair* $tmp1718 = *(&local4);
frost$core$Bit $tmp1719 = frost$core$Bit$init$builtin_bit($tmp1718 != NULL);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1721 = (frost$core$Int64) {430};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1722, $tmp1721, &$s1723);
abort(); // unreachable
block27:;
frost$core$Object** $tmp1724 = &$tmp1718->second;
frost$core$Object* $tmp1725 = *$tmp1724;
frost$core$Bit $tmp1726 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp1725) == NULL);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp1728 = (frost$core$Int64) {430};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1729, $tmp1728);
abort(); // unreachable
block29:;
// line 431
org$frostlang$frostc$Pair* $tmp1730 = *(&local4);
frost$core$Bit $tmp1731 = frost$core$Bit$init$builtin_bit($tmp1730 != NULL);
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1733 = (frost$core$Int64) {431};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1734, $tmp1733, &$s1735);
abort(); // unreachable
block33:;
frost$core$Object** $tmp1736 = &$tmp1730->first;
frost$core$Object* $tmp1737 = *$tmp1736;
org$frostlang$frostc$Type** $tmp1738 = &((org$frostlang$frostc$Variable*) $tmp1737)->type;
org$frostlang$frostc$Type* $tmp1739 = *$tmp1738;
frost$core$Bit $tmp1740 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1739);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block31; else goto block32;
block31:;
// line 432
frost$collections$Stack** $tmp1742 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1743 = *$tmp1742;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1744 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1745 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1746 = *(&local4);
frost$core$Bit $tmp1747 = frost$core$Bit$init$builtin_bit($tmp1746 != NULL);
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp1749 = (frost$core$Int64) {432};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1750, $tmp1749, &$s1751);
abort(); // unreachable
block35:;
frost$core$Object** $tmp1752 = &$tmp1746->first;
frost$core$Object* $tmp1753 = *$tmp1752;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1744, $tmp1745, ((org$frostlang$frostc$Variable*) $tmp1753));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1743, ((frost$core$Object*) $tmp1744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
// unreffing REF($365:org.frostlang.frostc.Compiler.EnclosingContext)
goto block32;
block32:;
// line 434
$fn1755 $tmp1754 = ($fn1755) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1756 = $tmp1754(param4);
frost$core$Bit $tmp1757 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1756);
bool $tmp1758 = $tmp1757.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
// unreffing REF($388:org.frostlang.frostc.Type)
if ($tmp1758) goto block37; else goto block39;
block37:;
// line 435
org$frostlang$frostc$Pair* $tmp1759 = *(&local4);
frost$core$Bit $tmp1760 = frost$core$Bit$init$builtin_bit($tmp1759 != NULL);
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {435};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1763, $tmp1762, &$s1764);
abort(); // unreachable
block40:;
frost$core$Object** $tmp1765 = &$tmp1759->first;
frost$core$Object* $tmp1766 = *$tmp1765;
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1766), param4, param5);
goto block38;
block39:;
// line 1
// line 438
org$frostlang$frostc$Pair* $tmp1767 = *(&local4);
frost$core$Bit $tmp1768 = frost$core$Bit$init$builtin_bit($tmp1767 != NULL);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1770 = (frost$core$Int64) {438};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1771, $tmp1770, &$s1772);
abort(); // unreachable
block42:;
frost$core$Object** $tmp1773 = &$tmp1767->first;
frost$core$Object* $tmp1774 = *$tmp1773;
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1774), param4, param5);
goto block38;
block38:;
org$frostlang$frostc$Pair* $tmp1775 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
// unreffing target
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1776 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
// unreffing scope
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// unreffing elementType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1778 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Compiler$TypeContext* local8 = NULL;
frost$core$Bit local9;
frost$core$Bit local10;
// line 446
org$frostlang$frostc$IR** $tmp1779 = &param0->ir;
org$frostlang$frostc$IR* $tmp1780 = *$tmp1779;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
org$frostlang$frostc$IR* $tmp1781 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
*(&local0) = $tmp1780;
// line 447
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 448
frost$core$Int64* $tmp1782 = &param3->$rawValue;
frost$core$Int64 $tmp1783 = *$tmp1782;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {48};
frost$core$Bit $tmp1785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1783, $tmp1784);
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1787 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1788 = *$tmp1787;
*(&local2) = $tmp1788;
frost$core$String** $tmp1789 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1790 = *$tmp1789;
org$frostlang$frostc$ASTNode** $tmp1791 = (org$frostlang$frostc$ASTNode**) (param3->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1792 = *$tmp1791;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
org$frostlang$frostc$ASTNode* $tmp1793 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local3) = $tmp1792;
// line 450
org$frostlang$frostc$Scanner** $tmp1794 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1795 = *$tmp1794;
org$frostlang$frostc$ASTNode* $tmp1796 = *(&local3);
frost$core$Bit $tmp1797 = frost$core$Bit$init$builtin_bit($tmp1796 != NULL);
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1799 = (frost$core$Int64) {450};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1800, $tmp1799, &$s1801);
abort(); // unreachable
block4:;
org$frostlang$frostc$Type* $tmp1802 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1795, $tmp1796);
org$frostlang$frostc$Type* $tmp1803 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1802);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
org$frostlang$frostc$Type* $tmp1804 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local4) = $tmp1803;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
// unreffing REF($46:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
// unreffing REF($45:org.frostlang.frostc.Type)
// line 451
org$frostlang$frostc$Type* $tmp1805 = *(&local4);
frost$core$Bit $tmp1806 = frost$core$Bit$init$builtin_bit($tmp1805 != NULL);
bool $tmp1807 = $tmp1806.value;
if ($tmp1807) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1808 = (frost$core$Int64) {451};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1809, $tmp1808, &$s1810);
abort(); // unreachable
block8:;
org$frostlang$frostc$Type$Kind* $tmp1811 = &$tmp1805->typeKind;
org$frostlang$frostc$Type$Kind $tmp1812 = *$tmp1811;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1813;
$tmp1813 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1813->value = $tmp1812;
frost$core$Int64 $tmp1814 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1815 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1814);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1816;
$tmp1816 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1816->value = $tmp1815;
ITable* $tmp1817 = ((frost$core$Equatable*) $tmp1813)->$class->itable;
while ($tmp1817->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1817 = $tmp1817->next;
}
$fn1819 $tmp1818 = $tmp1817->methods[0];
frost$core$Bit $tmp1820 = $tmp1818(((frost$core$Equatable*) $tmp1813), ((frost$core$Equatable*) $tmp1816));
bool $tmp1821 = $tmp1820.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1816)));
// unreffing REF($76:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1813)));
// unreffing REF($72:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1821) goto block6; else goto block7;
block6:;
// line 452
org$frostlang$frostc$Position $tmp1822 = *(&local2);
org$frostlang$frostc$Type* $tmp1823 = *(&local4);
frost$core$Bit $tmp1824 = frost$core$Bit$init$builtin_bit($tmp1823 != NULL);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1826 = (frost$core$Int64) {452};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1827, $tmp1826, &$s1828);
abort(); // unreachable
block10:;
frost$core$String* $tmp1829 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1830, ((frost$core$Object*) $tmp1823));
frost$core$String* $tmp1831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1829, &$s1832);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1822, $tmp1831);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// unreffing REF($99:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
// unreffing REF($98:frost.core.String)
// line 453
org$frostlang$frostc$Type* $tmp1833 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
// unreffing t
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1834 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// unreffing type
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1836 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 455
org$frostlang$frostc$Type* $tmp1837 = *(&local4);
frost$core$Bit $tmp1838 = frost$core$Bit$init$builtin_bit($tmp1837 != NULL);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1840 = (frost$core$Int64) {455};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1841, $tmp1840, &$s1842);
abort(); // unreachable
block14:;
frost$core$Bit $tmp1843 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1837);
frost$core$Bit $tmp1844 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1843);
bool $tmp1845 = $tmp1844.value;
if ($tmp1845) goto block12; else goto block13;
block12:;
// line 456
org$frostlang$frostc$Position $tmp1846 = *(&local2);
org$frostlang$frostc$Type* $tmp1847 = *(&local4);
frost$core$Bit $tmp1848 = frost$core$Bit$init$builtin_bit($tmp1847 != NULL);
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {457};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1851, $tmp1850, &$s1852);
abort(); // unreachable
block16:;
frost$core$String* $tmp1853 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1854, ((frost$core$Object*) $tmp1847));
frost$core$String* $tmp1855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1853, &$s1856);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1858, $tmp1855);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1846, $tmp1857);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// unreffing REF($156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
// unreffing REF($154:frost.core.String)
// line 458
org$frostlang$frostc$Type* $tmp1859 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
// unreffing t
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1860 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
// unreffing type
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1861 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1862 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 460
frost$core$Int64* $tmp1863 = &param4->$rawValue;
frost$core$Int64 $tmp1864 = *$tmp1863;
frost$core$Int64 $tmp1865 = (frost$core$Int64) {36};
frost$core$Bit $tmp1866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1864, $tmp1865);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp1868 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1869 = *$tmp1868;
org$frostlang$frostc$ASTNode** $tmp1870 = (org$frostlang$frostc$ASTNode**) (param4->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1871 = *$tmp1870;
frost$core$Bit* $tmp1872 = (frost$core$Bit*) (param4->$data + 24);
frost$core$Bit $tmp1873 = *$tmp1872;
org$frostlang$frostc$ASTNode** $tmp1874 = (org$frostlang$frostc$ASTNode**) (param4->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1875 = *$tmp1874;
org$frostlang$frostc$ASTNode** $tmp1876 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1877 = *$tmp1876;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local5) = $tmp1877;
// line 462
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 463
org$frostlang$frostc$ASTNode* $tmp1879 = *(&local5);
frost$core$Bit $tmp1880 = frost$core$Bit$init$builtin_bit($tmp1879 != NULL);
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block21; else goto block23;
block21:;
// line 464
org$frostlang$frostc$Type* $tmp1882 = *(&local4);
frost$core$Bit $tmp1883 = frost$core$Bit$init$builtin_bit($tmp1882 != NULL);
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1885 = (frost$core$Int64) {464};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1886, $tmp1885, &$s1887);
abort(); // unreachable
block24:;
org$frostlang$frostc$Type* $tmp1888 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1882);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
org$frostlang$frostc$Type* $tmp1889 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local6) = $tmp1888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
// unreffing REF($231:org.frostlang.frostc.Type)
goto block22;
block23:;
// line 1
// line 467
org$frostlang$frostc$Type* $tmp1890 = *(&local4);
frost$core$Bit $tmp1891 = frost$core$Bit$init$builtin_bit($tmp1890 != NULL);
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1893 = (frost$core$Int64) {467};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1894, $tmp1893, &$s1895);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type* $tmp1896 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1890);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
org$frostlang$frostc$Type* $tmp1897 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
*(&local6) = $tmp1896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
// unreffing REF($253:org.frostlang.frostc.Type)
goto block22;
block22:;
// line 469
org$frostlang$frostc$Compiler$TypeContext* $tmp1898 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1899 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1900 = *(&local6);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1898, $tmp1899, $tmp1900);
org$frostlang$frostc$IR$Value* $tmp1901 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
org$frostlang$frostc$IR$Value* $tmp1902 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local1) = $tmp1901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// unreffing REF($269:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
// unreffing REF($265:org.frostlang.frostc.Compiler.TypeContext)
org$frostlang$frostc$Type* $tmp1903 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
// unreffing type
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1904 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
// unreffing step
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
// line 472
frost$core$Bit $tmp1905 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1906 = $tmp1905.value;
if ($tmp1906) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1907 = (frost$core$Int64) {472};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1908, $tmp1907);
abort(); // unreachable
block28:;
goto block18;
block18:;
org$frostlang$frostc$Type* $tmp1909 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
// unreffing t
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1910 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
// unreffing type
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 477
org$frostlang$frostc$Type* $tmp1911 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$Type* $tmp1912 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local7) = $tmp1911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
// unreffing REF($313:org.frostlang.frostc.Type?)
// line 478
org$frostlang$frostc$Compiler$TypeContext* $tmp1913 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1914 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1913, $tmp1914);
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
org$frostlang$frostc$Compiler$TypeContext* $tmp1915 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local8) = $tmp1913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
// unreffing REF($325:org.frostlang.frostc.Compiler.TypeContext)
// line 479
org$frostlang$frostc$Type* $tmp1916 = *(&local7);
frost$core$Bit $tmp1917 = frost$core$Bit$init$builtin_bit($tmp1916 != NULL);
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Type* $tmp1919 = *(&local7);
frost$core$Bit $tmp1920 = frost$core$Bit$init$builtin_bit($tmp1919 != NULL);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp1922 = (frost$core$Int64) {479};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1923, $tmp1922, &$s1924);
abort(); // unreachable
block35:;
frost$core$Bit $tmp1925 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1919);
*(&local9) = $tmp1925;
goto block34;
block33:;
*(&local9) = $tmp1917;
goto block34;
block34:;
frost$core$Bit $tmp1926 = *(&local9);
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block30; else goto block37;
block30:;
// line 480
org$frostlang$frostc$Compiler$TypeContext* $tmp1928 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1929 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1930 = *(&local7);
frost$core$Bit $tmp1931 = frost$core$Bit$init$builtin_bit($tmp1930 != NULL);
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1933 = (frost$core$Int64) {480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1934, $tmp1933, &$s1935);
abort(); // unreachable
block38:;
org$frostlang$frostc$FixedArray** $tmp1936 = &$tmp1930->subtypes;
org$frostlang$frostc$FixedArray* $tmp1937 = *$tmp1936;
frost$core$Bit $tmp1938 = frost$core$Bit$init$builtin_bit($tmp1937 != NULL);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1940 = (frost$core$Int64) {480};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1941, $tmp1940, &$s1942);
abort(); // unreachable
block40:;
frost$core$Int64 $tmp1943 = (frost$core$Int64) {1};
frost$core$Object* $tmp1944 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1937, $tmp1943);
org$frostlang$frostc$Type* $tmp1945 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1944));
org$frostlang$frostc$Type* $tmp1946 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1945);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1928, $tmp1929, $tmp1946);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$Compiler$TypeContext* $tmp1947 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local8) = $tmp1928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
// unreffing REF($388:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
// unreffing REF($387:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1944);
// unreffing REF($385:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// unreffing REF($362:org.frostlang.frostc.Compiler.TypeContext)
goto block31;
block37:;
// line 482
org$frostlang$frostc$Type* $tmp1948 = *(&local7);
frost$core$Bit $tmp1949 = frost$core$Bit$init$builtin_bit($tmp1948 != NULL);
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Type* $tmp1951 = *(&local7);
frost$core$Bit $tmp1952 = frost$core$Bit$init$builtin_bit($tmp1951 != NULL);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp1954 = (frost$core$Int64) {482};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1955, $tmp1954, &$s1956);
abort(); // unreachable
block47:;
frost$core$Bit $tmp1957 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1951);
*(&local10) = $tmp1957;
goto block46;
block45:;
*(&local10) = $tmp1949;
goto block46;
block46:;
frost$core$Bit $tmp1958 = *(&local10);
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block42; else goto block43;
block42:;
// line 483
org$frostlang$frostc$Compiler$TypeContext* $tmp1960 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1961 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1962 = *(&local7);
frost$core$Bit $tmp1963 = frost$core$Bit$init$builtin_bit($tmp1962 != NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1965 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1966, $tmp1965, &$s1967);
abort(); // unreachable
block49:;
org$frostlang$frostc$FixedArray** $tmp1968 = &$tmp1962->subtypes;
org$frostlang$frostc$FixedArray* $tmp1969 = *$tmp1968;
frost$core$Bit $tmp1970 = frost$core$Bit$init$builtin_bit($tmp1969 != NULL);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1972 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1973, $tmp1972, &$s1974);
abort(); // unreachable
block51:;
frost$core$Int64 $tmp1975 = (frost$core$Int64) {1};
frost$core$Object* $tmp1976 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1969, $tmp1975);
org$frostlang$frostc$Type* $tmp1977 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1976));
org$frostlang$frostc$Type* $tmp1978 = *(&local7);
frost$core$Bit $tmp1979 = frost$core$Bit$init$builtin_bit($tmp1978 != NULL);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp1981 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1982, $tmp1981, &$s1983);
abort(); // unreachable
block53:;
org$frostlang$frostc$FixedArray** $tmp1984 = &$tmp1978->subtypes;
org$frostlang$frostc$FixedArray* $tmp1985 = *$tmp1984;
frost$core$Bit $tmp1986 = frost$core$Bit$init$builtin_bit($tmp1985 != NULL);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1989, $tmp1988, &$s1990);
abort(); // unreachable
block55:;
frost$core$Int64 $tmp1991 = (frost$core$Int64) {2};
frost$core$Object* $tmp1992 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1985, $tmp1991);
org$frostlang$frostc$Type* $tmp1993 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1977, ((org$frostlang$frostc$Type*) $tmp1992));
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1960, $tmp1961, $tmp1993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
org$frostlang$frostc$Compiler$TypeContext* $tmp1994 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local8) = $tmp1960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
// unreffing REF($482:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1992);
// unreffing REF($480:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
// unreffing REF($458:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1976);
// unreffing REF($456:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// unreffing REF($433:org.frostlang.frostc.Compiler.TypeContext)
goto block43;
block43:;
goto block31;
block31:;
// line 486
org$frostlang$frostc$Compiler$TypeContext* $tmp1995 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1996 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1995);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
org$frostlang$frostc$IR$Value* $tmp1997 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
*(&local1) = $tmp1996;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
// unreffing REF($509:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Compiler$TypeContext* $tmp1998 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
// unreffing type
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp1999 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
// unreffing preferred
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 489
org$frostlang$frostc$IR$Value* $tmp2000 = *(&local1);
frost$core$Bit $tmp2001 = frost$core$Bit$init$builtin_bit($tmp2000 == NULL);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block57; else goto block58;
block57:;
// line 490
org$frostlang$frostc$IR$Value* $tmp2003 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2004 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block58:;
// line 492
org$frostlang$frostc$IR$Value* $tmp2005 = *(&local1);
frost$core$Bit $tmp2006 = frost$core$Bit$init$builtin_bit($tmp2005 != NULL);
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp2008 = (frost$core$Int64) {492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2009, $tmp2008, &$s2010);
abort(); // unreachable
block59:;
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2005, param5);
org$frostlang$frostc$IR$Value* $tmp2011 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2012 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Compiler$AutoContext* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local7 = NULL;
org$frostlang$frostc$Pair* local8 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$ASTNode* local12 = NULL;
// line 499
org$frostlang$frostc$IR** $tmp2013 = &param0->ir;
org$frostlang$frostc$IR* $tmp2014 = *$tmp2013;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
org$frostlang$frostc$IR* $tmp2015 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
*(&local0) = $tmp2014;
// line 500
org$frostlang$frostc$IR* $tmp2016 = *(&local0);
$fn2018 $tmp2017 = ($fn2018) $tmp2016->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2019 = $tmp2017($tmp2016, &$s2020);
*(&local1) = $tmp2019;
// line 501
org$frostlang$frostc$IR* $tmp2021 = *(&local0);
$fn2023 $tmp2022 = ($fn2023) $tmp2021->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2024 = $tmp2022($tmp2021, &$s2025);
*(&local2) = $tmp2024;
// line 502
org$frostlang$frostc$IR* $tmp2026 = *(&local0);
$fn2028 $tmp2027 = ($fn2028) $tmp2026->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2029 = $tmp2027($tmp2026, &$s2030);
*(&local3) = $tmp2029;
// line 503
org$frostlang$frostc$Compiler$AutoContext* $tmp2031 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2032 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2033 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp2034 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2035 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2032, $tmp2033, param2, $tmp2034, $tmp2035);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp2031, param0, $tmp2032);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
org$frostlang$frostc$Compiler$AutoContext* $tmp2036 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local4) = $tmp2031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
// unreffing REF($27:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
// unreffing REF($26:org.frostlang.frostc.Compiler.AutoContext)
// line 504
$fn2038 $tmp2037 = ($fn2038) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2039 = $tmp2037(param4);
org$frostlang$frostc$Type$Kind* $tmp2040 = &$tmp2039->typeKind;
org$frostlang$frostc$Type$Kind $tmp2041 = *$tmp2040;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2042;
$tmp2042 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2042->value = $tmp2041;
frost$core$Int64 $tmp2043 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2044 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2043);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2045;
$tmp2045 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2045->value = $tmp2044;
ITable* $tmp2046 = ((frost$core$Equatable*) $tmp2042)->$class->itable;
while ($tmp2046->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2046 = $tmp2046->next;
}
$fn2048 $tmp2047 = $tmp2046->methods[0];
frost$core$Bit $tmp2049 = $tmp2047(((frost$core$Equatable*) $tmp2042), ((frost$core$Equatable*) $tmp2045));
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block1; else goto block2;
block1:;
$fn2052 $tmp2051 = ($fn2052) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2053 = $tmp2051(param4);
org$frostlang$frostc$FixedArray** $tmp2054 = &$tmp2053->subtypes;
org$frostlang$frostc$FixedArray* $tmp2055 = *$tmp2054;
frost$core$Bit $tmp2056 = frost$core$Bit$init$builtin_bit($tmp2055 != NULL);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2058 = (frost$core$Int64) {505};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2059, $tmp2058, &$s2060);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp2061 = (frost$core$Int64) {0};
frost$core$Object* $tmp2062 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2055, $tmp2061);
org$frostlang$frostc$Type* $tmp2063 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2064 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2062), $tmp2063);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
// unreffing REF($76:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2062);
// unreffing REF($74:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
// unreffing REF($61:org.frostlang.frostc.Type)
*(&local5) = $tmp2064;
goto block3;
block2:;
*(&local5) = $tmp2049;
goto block3;
block3:;
frost$core$Bit $tmp2065 = *(&local5);
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2067 = (frost$core$Int64) {504};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2068, $tmp2067);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2045)));
// unreffing REF($55:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2042)));
// unreffing REF($51:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
// unreffing REF($48:org.frostlang.frostc.Type)
// line 506
org$frostlang$frostc$IR* $tmp2069 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2070 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2071 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2072 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2070, $tmp2071, param1, $tmp2072);
$fn2074 $tmp2073 = ($fn2074) $tmp2069->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2075 = $tmp2073($tmp2069, $tmp2070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
// unreffing REF($108:org.frostlang.frostc.IR.Statement)
// line 507
org$frostlang$frostc$IR* $tmp2076 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2077 = *(&local1);
$fn2079 $tmp2078 = ($fn2079) $tmp2076->$class->vtable[4];
$tmp2078($tmp2076, $tmp2077);
// line 508
frost$collections$Array* $tmp2080 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2080);
org$frostlang$frostc$Compiler$TypeContext* $tmp2081 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2082 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp2083 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2081, $tmp2082, $tmp2083);
org$frostlang$frostc$IR$Value* $tmp2084 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s2085, ((frost$collections$ListView*) $tmp2080), $tmp2081);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
org$frostlang$frostc$IR$Value* $tmp2086 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local6) = $tmp2084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// unreffing REF($131:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
// unreffing REF($129:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
// unreffing REF($127:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// unreffing REF($123:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 510
org$frostlang$frostc$IR$Value* $tmp2087 = *(&local6);
frost$core$Bit $tmp2088 = frost$core$Bit$init$builtin_bit($tmp2087 == NULL);
bool $tmp2089 = $tmp2088.value;
if ($tmp2089) goto block8; else goto block9;
block8:;
// line 511
org$frostlang$frostc$IR$Value* $tmp2090 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2091 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2092 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// line 513
org$frostlang$frostc$IR* $tmp2093 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2094 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2095 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2096 = *(&local6);
frost$core$Bit $tmp2097 = frost$core$Bit$init$builtin_bit($tmp2096 != NULL);
bool $tmp2098 = $tmp2097.value;
if ($tmp2098) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2099 = (frost$core$Int64) {514};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2100, $tmp2099, &$s2101);
abort(); // unreachable
block10:;
org$frostlang$frostc$IR$Value* $tmp2102 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2096);
org$frostlang$frostc$IR$Block$ID $tmp2103 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2104 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2094, $tmp2095, param1, $tmp2102, $tmp2103, $tmp2104);
$fn2106 $tmp2105 = ($fn2106) $tmp2093->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2107 = $tmp2105($tmp2093, $tmp2094);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// unreffing REF($187:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
// unreffing REF($176:org.frostlang.frostc.IR.Statement)
// line 515
org$frostlang$frostc$IR* $tmp2108 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2109 = *(&local2);
$fn2111 $tmp2110 = ($fn2111) $tmp2108->$class->vtable[4];
$tmp2110($tmp2108, $tmp2109);
// line 1
// line 517
org$frostlang$frostc$Compiler$AutoScope* $tmp2112 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2112, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
org$frostlang$frostc$Compiler$AutoScope* $tmp2113 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
*(&local7) = $tmp2112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// unreffing REF($206:org.frostlang.frostc.Compiler.AutoScope)
// line 518
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 520
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2114 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2114, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2115 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
*(&local9) = $tmp2114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
// unreffing REF($222:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 521
frost$core$Int64 $tmp2116 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp2117 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp2116);
$fn2119 $tmp2118 = ($fn2119) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2120 = $tmp2118(param4);
org$frostlang$frostc$FixedArray** $tmp2121 = &$tmp2120->subtypes;
org$frostlang$frostc$FixedArray* $tmp2122 = *$tmp2121;
frost$core$Bit $tmp2123 = frost$core$Bit$init$builtin_bit($tmp2122 != NULL);
bool $tmp2124 = $tmp2123.value;
if ($tmp2124) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2125 = (frost$core$Int64) {522};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2126, $tmp2125, &$s2127);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp2128 = (frost$core$Int64) {1};
frost$core$Object* $tmp2129 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2122, $tmp2128);
org$frostlang$frostc$Pair* $tmp2130 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp2117, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp2129));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
org$frostlang$frostc$Pair* $tmp2131 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local8) = $tmp2130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
// unreffing REF($254:org.frostlang.frostc.Pair<org.frostlang.frostc.Variable, org.frostlang.frostc.IR.Value?>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2129);
// unreffing REF($251:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
// unreffing REF($238:org.frostlang.frostc.Type)
// line 523
org$frostlang$frostc$Pair* $tmp2132 = *(&local8);
frost$core$Bit $tmp2133 = frost$core$Bit$init$builtin_bit($tmp2132 == NULL);
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block14; else goto block15;
block14:;
// line 524
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2135 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
// unreffing unrefs
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Pair* $tmp2136 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
// unreffing compiledTarget
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2137 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp2138 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2141 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
// unreffing unrefs
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 527
org$frostlang$frostc$Pair* $tmp2142 = *(&local8);
frost$core$Bit $tmp2143 = frost$core$Bit$init$builtin_bit($tmp2142 != NULL);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2145 = (frost$core$Int64) {527};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2146, $tmp2145, &$s2147);
abort(); // unreachable
block16:;
frost$core$Object** $tmp2148 = &$tmp2142->first;
frost$core$Object* $tmp2149 = *$tmp2148;
org$frostlang$frostc$Type** $tmp2150 = &((org$frostlang$frostc$Variable*) $tmp2149)->type;
org$frostlang$frostc$Type* $tmp2151 = *$tmp2150;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
org$frostlang$frostc$Type* $tmp2152 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local10) = $tmp2151;
// line 528
org$frostlang$frostc$Type* $tmp2153 = *(&local10);
frost$core$Bit $tmp2154 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2153);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block18; else goto block19;
block18:;
// line 529
frost$collections$Stack** $tmp2156 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2157 = *$tmp2156;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2158 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2159 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp2160 = *(&local8);
frost$core$Bit $tmp2161 = frost$core$Bit$init$builtin_bit($tmp2160 != NULL);
bool $tmp2162 = $tmp2161.value;
if ($tmp2162) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2163 = (frost$core$Int64) {530};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2164, $tmp2163, &$s2165);
abort(); // unreachable
block20:;
frost$core$Object** $tmp2166 = &$tmp2160->first;
frost$core$Object* $tmp2167 = *$tmp2166;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp2158, $tmp2159, ((org$frostlang$frostc$Variable*) $tmp2167));
frost$collections$Stack$push$frost$collections$Stack$T($tmp2157, ((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
// unreffing REF($344:org.frostlang.frostc.Compiler.EnclosingContext)
goto block19;
block19:;
// line 532
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 533
frost$collections$Array* $tmp2168 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2168);
org$frostlang$frostc$Compiler$TypeContext* $tmp2169 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2170 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp2171 = *(&local10);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2169, $tmp2170, $tmp2171);
org$frostlang$frostc$IR$Value* $tmp2172 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s2173, ((frost$collections$ListView*) $tmp2168), $tmp2169);
frost$core$Bit $tmp2174 = frost$core$Bit$init$builtin_bit($tmp2172 != NULL);
bool $tmp2175 = $tmp2174.value;
if ($tmp2175) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2176 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2177, $tmp2176, &$s2178);
abort(); // unreachable
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
org$frostlang$frostc$IR$Value* $tmp2179 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local11) = $tmp2172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
// unreffing REF($376:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
// unreffing REF($372:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
// unreffing REF($368:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 535
org$frostlang$frostc$IR$Value* $tmp2180 = *(&local11);
frost$core$Bit $tmp2181 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2182 = $tmp2181.value;
if ($tmp2182) goto block24; else goto block25;
block24:;
// line 536
org$frostlang$frostc$IR$Value* $tmp2183 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
// unreffing next
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2184 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp2185 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing compiledTarget
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2186 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp2187 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2188 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block25:;
// line 538
org$frostlang$frostc$lvalue$VariableLValue* $tmp2190 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Pair* $tmp2191 = *(&local8);
frost$core$Bit $tmp2192 = frost$core$Bit$init$builtin_bit($tmp2191 != NULL);
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2194 = (frost$core$Int64) {538};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2195, $tmp2194, &$s2196);
abort(); // unreachable
block26:;
frost$core$Object** $tmp2197 = &$tmp2191->first;
frost$core$Object* $tmp2198 = *$tmp2197;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp2190, param0, param1, ((org$frostlang$frostc$Variable*) $tmp2198));
org$frostlang$frostc$IR$Value* $tmp2199 = *(&local11);
$fn2201 $tmp2200 = ($fn2201) $tmp2190->$class->vtable[4];
$tmp2200($tmp2190, $tmp2199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// unreffing REF($443:org.frostlang.frostc.lvalue.VariableLValue)
// line 539
ITable* $tmp2202 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2202->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2202 = $tmp2202->next;
}
$fn2204 $tmp2203 = $tmp2202->methods[0];
frost$collections$Iterator* $tmp2205 = $tmp2203(((frost$collections$Iterable*) param5));
goto block28;
block28:;
ITable* $tmp2206 = $tmp2205->$class->itable;
while ($tmp2206->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2206 = $tmp2206->next;
}
$fn2208 $tmp2207 = $tmp2206->methods[0];
frost$core$Bit $tmp2209 = $tmp2207($tmp2205);
bool $tmp2210 = $tmp2209.value;
if ($tmp2210) goto block30; else goto block29;
block29:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2211 = $tmp2205->$class->itable;
while ($tmp2211->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[1];
frost$core$Object* $tmp2214 = $tmp2212($tmp2205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2214)));
org$frostlang$frostc$ASTNode* $tmp2215 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp2214);
// line 540
org$frostlang$frostc$ASTNode* $tmp2216 = *(&local12);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2216);
frost$core$Frost$unref$frost$core$Object$Q($tmp2214);
// unreffing REF($478:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2217 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// unreffing s
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
// unreffing REF($467:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$IR$Value* $tmp2218 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// unreffing next
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2219 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp2220 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
// unreffing compiledTarget
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2221 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 543
org$frostlang$frostc$IR* $tmp2222 = *(&local0);
$fn2224 $tmp2223 = ($fn2224) $tmp2222->$class->vtable[5];
frost$core$Bit $tmp2225 = $tmp2223($tmp2222);
frost$core$Bit $tmp2226 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2225);
bool $tmp2227 = $tmp2226.value;
if ($tmp2227) goto block31; else goto block32;
block31:;
// line 544
org$frostlang$frostc$IR* $tmp2228 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2229 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2230 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2231 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2229, $tmp2230, param1, $tmp2231);
$fn2233 $tmp2232 = ($fn2233) $tmp2228->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2234 = $tmp2232($tmp2228, $tmp2229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
// unreffing REF($530:org.frostlang.frostc.IR.Statement)
goto block32;
block32:;
// line 546
org$frostlang$frostc$IR* $tmp2235 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2236 = *(&local3);
$fn2238 $tmp2237 = ($fn2238) $tmp2235->$class->vtable[4];
$tmp2237($tmp2235, $tmp2236);
org$frostlang$frostc$IR$Value* $tmp2239 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2240 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2241 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
// line 552
frost$core$Int64* $tmp2242 = &param4->$rawValue;
frost$core$Int64 $tmp2243 = *$tmp2242;
frost$core$Int64 $tmp2244 = (frost$core$Int64) {36};
frost$core$Bit $tmp2245 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2243, $tmp2244);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block2; else goto block1;
block2:;
// line 556
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 557
return;
block1:;
// line 560
org$frostlang$frostc$IR$Value* $tmp2247 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, param4);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
org$frostlang$frostc$IR$Value* $tmp2248 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local0) = $tmp2247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
// unreffing REF($12:org.frostlang.frostc.IR.Value?)
// line 561
org$frostlang$frostc$IR$Value* $tmp2249 = *(&local0);
frost$core$Bit $tmp2250 = frost$core$Bit$init$builtin_bit($tmp2249 == NULL);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block3; else goto block4;
block3:;
// line 562
org$frostlang$frostc$IR$Value* $tmp2252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block4:;
// line 564
org$frostlang$frostc$IR$Value* $tmp2253 = *(&local0);
frost$core$Bit $tmp2254 = frost$core$Bit$init$builtin_bit($tmp2253 != NULL);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2256 = (frost$core$Int64) {564};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2257, $tmp2256, &$s2258);
abort(); // unreachable
block7:;
$fn2260 $tmp2259 = ($fn2260) $tmp2253->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2261 = $tmp2259($tmp2253);
frost$core$Bit $tmp2262 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp2261);
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block9; else goto block10;
block9:;
*(&local1) = $tmp2262;
goto block11;
block10:;
org$frostlang$frostc$IR$Value* $tmp2264 = *(&local0);
frost$core$Bit $tmp2265 = frost$core$Bit$init$builtin_bit($tmp2264 != NULL);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2267 = (frost$core$Int64) {564};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2268, $tmp2267, &$s2269);
abort(); // unreachable
block12:;
$fn2271 $tmp2270 = ($fn2271) $tmp2264->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2272 = $tmp2270($tmp2264);
frost$core$Bit $tmp2273 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp2272);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
// unreffing REF($63:org.frostlang.frostc.Type)
*(&local1) = $tmp2273;
goto block11;
block11:;
frost$core$Bit $tmp2274 = *(&local1);
bool $tmp2275 = $tmp2274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
// unreffing REF($47:org.frostlang.frostc.Type)
if ($tmp2275) goto block5; else goto block14;
block5:;
// line 566
org$frostlang$frostc$IR$Value* $tmp2276 = *(&local0);
frost$core$Bit $tmp2277 = frost$core$Bit$init$builtin_bit($tmp2276 != NULL);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2279 = (frost$core$Int64) {566};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2280, $tmp2279, &$s2281);
abort(); // unreachable
block15:;
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2276, param5);
goto block6;
block14:;
// line 1
// line 569
org$frostlang$frostc$IR$Value* $tmp2282 = *(&local0);
frost$core$Bit $tmp2283 = frost$core$Bit$init$builtin_bit($tmp2282 != NULL);
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp2285 = (frost$core$Int64) {569};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2286, $tmp2285, &$s2287);
abort(); // unreachable
block17:;
$fn2289 $tmp2288 = ($fn2289) $tmp2282->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2290 = $tmp2288($tmp2282);
frost$collections$HashSet* $tmp2291 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp2290);
ITable* $tmp2292 = ((frost$collections$Iterable*) $tmp2291)->$class->itable;
while ($tmp2292->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2292 = $tmp2292->next;
}
$fn2294 $tmp2293 = $tmp2292->methods[0];
frost$collections$Iterator* $tmp2295 = $tmp2293(((frost$collections$Iterable*) $tmp2291));
goto block19;
block19:;
ITable* $tmp2296 = $tmp2295->$class->itable;
while ($tmp2296->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2296 = $tmp2296->next;
}
$fn2298 $tmp2297 = $tmp2296->methods[0];
frost$core$Bit $tmp2299 = $tmp2297($tmp2295);
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block21; else goto block20;
block20:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2301 = $tmp2295->$class->itable;
while ($tmp2301->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[1];
frost$core$Object* $tmp2304 = $tmp2302($tmp2295);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2304)));
org$frostlang$frostc$Type* $tmp2305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp2304);
// line 570
org$frostlang$frostc$Type* $tmp2306 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp2307 = &$tmp2306->typeKind;
org$frostlang$frostc$Type$Kind $tmp2308 = *$tmp2307;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2309;
$tmp2309 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2309->value = $tmp2308;
frost$core$Int64 $tmp2310 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2311 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2310);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2312;
$tmp2312 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2312->value = $tmp2311;
ITable* $tmp2313 = ((frost$core$Equatable*) $tmp2309)->$class->itable;
while ($tmp2313->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2313 = $tmp2313->next;
}
$fn2315 $tmp2314 = $tmp2313->methods[0];
frost$core$Bit $tmp2316 = $tmp2314(((frost$core$Equatable*) $tmp2309), ((frost$core$Equatable*) $tmp2312));
bool $tmp2317 = $tmp2316.value;
if ($tmp2317) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type* $tmp2318 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2319 = &$tmp2318->subtypes;
org$frostlang$frostc$FixedArray* $tmp2320 = *$tmp2319;
frost$core$Bit $tmp2321 = frost$core$Bit$init$builtin_bit($tmp2320 != NULL);
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp2323 = (frost$core$Int64) {570};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2324, $tmp2323, &$s2325);
abort(); // unreachable
block27:;
frost$core$Int64 $tmp2326 = (frost$core$Int64) {0};
frost$core$Object* $tmp2327 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2320, $tmp2326);
org$frostlang$frostc$Type* $tmp2328 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2329 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2327), $tmp2328);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
// unreffing REF($152:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2327);
// unreffing REF($150:org.frostlang.frostc.FixedArray.T)
*(&local3) = $tmp2329;
goto block26;
block25:;
*(&local3) = $tmp2316;
goto block26;
block26:;
frost$core$Bit $tmp2330 = *(&local3);
bool $tmp2331 = $tmp2330.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2312)));
// unreffing REF($132:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2309)));
// unreffing REF($128:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp2331) goto block22; else goto block23;
block22:;
// line 571
$fn2333 $tmp2332 = ($fn2333) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2334 = $tmp2332(param4);
org$frostlang$frostc$IR$Value* $tmp2335 = *(&local0);
org$frostlang$frostc$Type* $tmp2336 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp2337 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2334, $tmp2335, $tmp2336);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
org$frostlang$frostc$IR$Value* $tmp2338 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
*(&local4) = $tmp2337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
// unreffing REF($178:org.frostlang.frostc.IR.Value?)
// line 572
org$frostlang$frostc$IR$Value* $tmp2339 = *(&local4);
frost$core$Bit $tmp2340 = frost$core$Bit$init$builtin_bit($tmp2339 != NULL);
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp2342 = (frost$core$Int64) {572};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2343, $tmp2342, &$s2344);
abort(); // unreachable
block29:;
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2339, param5);
// line 573
org$frostlang$frostc$IR$Value* $tmp2345 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
// unreffing iterator
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2304);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// unreffing REF($100:org.frostlang.frostc.Type)
org$frostlang$frostc$IR$Value* $tmp2347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block23:;
// line 575
org$frostlang$frostc$Type* $tmp2348 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp2349 = &$tmp2348->typeKind;
org$frostlang$frostc$Type$Kind $tmp2350 = *$tmp2349;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2351;
$tmp2351 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2351->value = $tmp2350;
frost$core$Int64 $tmp2352 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2353 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2352);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2354;
$tmp2354 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2354->value = $tmp2353;
ITable* $tmp2355 = ((frost$core$Equatable*) $tmp2351)->$class->itable;
while ($tmp2355->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2355 = $tmp2355->next;
}
$fn2357 $tmp2356 = $tmp2355->methods[0];
frost$core$Bit $tmp2358 = $tmp2356(((frost$core$Equatable*) $tmp2351), ((frost$core$Equatable*) $tmp2354));
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Type* $tmp2360 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2361 = &$tmp2360->subtypes;
org$frostlang$frostc$FixedArray* $tmp2362 = *$tmp2361;
frost$core$Bit $tmp2363 = frost$core$Bit$init$builtin_bit($tmp2362 != NULL);
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2365 = (frost$core$Int64) {575};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2366, $tmp2365, &$s2367);
abort(); // unreachable
block36:;
frost$core$Int64 $tmp2368 = (frost$core$Int64) {0};
frost$core$Object* $tmp2369 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2362, $tmp2368);
org$frostlang$frostc$Type* $tmp2370 = org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2371 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2369), $tmp2370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
// unreffing REF($257:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2369);
// unreffing REF($255:org.frostlang.frostc.FixedArray.T)
*(&local5) = $tmp2371;
goto block35;
block34:;
*(&local5) = $tmp2358;
goto block35;
block35:;
frost$core$Bit $tmp2372 = *(&local5);
bool $tmp2373 = $tmp2372.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2354)));
// unreffing REF($237:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2351)));
// unreffing REF($233:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp2373) goto block31; else goto block32;
block31:;
// line 576
$fn2375 $tmp2374 = ($fn2375) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2376 = $tmp2374(param4);
org$frostlang$frostc$IR$Value* $tmp2377 = *(&local0);
org$frostlang$frostc$Type* $tmp2378 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp2379 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2376, $tmp2377, $tmp2378);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
org$frostlang$frostc$IR$Value* $tmp2380 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local6) = $tmp2379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
// unreffing REF($283:org.frostlang.frostc.IR.Value?)
// line 577
org$frostlang$frostc$IR$Value* $tmp2381 = *(&local6);
frost$core$Bit $tmp2382 = frost$core$Bit$init$builtin_bit($tmp2381 == NULL);
bool $tmp2383 = $tmp2382.value;
if ($tmp2383) goto block38; else goto block39;
block38:;
// line 578
org$frostlang$frostc$IR$Value* $tmp2384 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
// unreffing iterable
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2304);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2385 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// unreffing REF($100:org.frostlang.frostc.Type)
org$frostlang$frostc$IR$Value* $tmp2386 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block39:;
// line 580
org$frostlang$frostc$IR$Value* $tmp2387 = *(&local6);
frost$core$Bit $tmp2388 = frost$core$Bit$init$builtin_bit($tmp2387 != NULL);
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp2390 = (frost$core$Int64) {580};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2391, $tmp2390, &$s2392);
abort(); // unreachable
block40:;
frost$collections$Array* $tmp2393 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2393);
org$frostlang$frostc$Compiler$TypeContext* $tmp2394 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2395 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2394, $tmp2395);
org$frostlang$frostc$IR$Value* $tmp2396 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2387, &$s2397, ((frost$collections$ListView*) $tmp2393), $tmp2394);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
org$frostlang$frostc$IR$Value* $tmp2398 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
*(&local7) = $tmp2396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// unreffing REF($346:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
// unreffing REF($343:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
// unreffing REF($339:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 582
org$frostlang$frostc$IR$Value* $tmp2399 = *(&local7);
frost$core$Bit $tmp2400 = frost$core$Bit$init$builtin_bit($tmp2399 != NULL);
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp2402 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2403, $tmp2402);
abort(); // unreachable
block42:;
// line 583
org$frostlang$frostc$IR$Value* $tmp2404 = *(&local7);
frost$core$Bit $tmp2405 = frost$core$Bit$init$builtin_bit($tmp2404 != NULL);
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp2407 = (frost$core$Int64) {583};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2408, $tmp2407, &$s2409);
abort(); // unreachable
block44:;
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2404, param5);
// line 584
org$frostlang$frostc$IR$Value* $tmp2410 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
// unreffing iterator
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2411 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
// unreffing iterable
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2304);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2412 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// unreffing REF($100:org.frostlang.frostc.Type)
org$frostlang$frostc$IR$Value* $tmp2413 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block32:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2304);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2414 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// unreffing REF($100:org.frostlang.frostc.Type)
// line 587
$fn2416 $tmp2415 = ($fn2416) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2417 = $tmp2415(param4);
org$frostlang$frostc$IR$Value* $tmp2418 = *(&local0);
frost$core$Bit $tmp2419 = frost$core$Bit$init$builtin_bit($tmp2418 != NULL);
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp2421 = (frost$core$Int64) {588};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2422, $tmp2421, &$s2423);
abort(); // unreachable
block46:;
$fn2425 $tmp2424 = ($fn2425) $tmp2418->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2426 = $tmp2424($tmp2418);
frost$core$String* $tmp2427 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2428, ((frost$core$Object*) $tmp2426));
frost$core$String* $tmp2429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2427, &$s2430);
frost$core$String* $tmp2431 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2432, $tmp2429);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2417, $tmp2431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
// unreffing REF($452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
// unreffing REF($451:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing REF($448:org.frostlang.frostc.Type)
goto block6;
block6:;
org$frostlang$frostc$IR$Value* $tmp2433 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$For$init(org$frostlang$frostc$statement$For* param0) {

return;

}
void org$frostlang$frostc$statement$For$cleanup(org$frostlang$frostc$statement$For* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

