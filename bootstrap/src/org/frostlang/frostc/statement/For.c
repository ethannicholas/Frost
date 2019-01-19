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
typedef org$frostlang$frostc$IR$Block$ID (*$fn374)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn379)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn384)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn389)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn394)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn412)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn417)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn450)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn455)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn488)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn493)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn496)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn500)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn505)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn515)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn524)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn529)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn532)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn545)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn577)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn582)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn592)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn597)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn630)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn635)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn668)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn673)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn703)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn710)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn715)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn735)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn745)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn751)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn762)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn770)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn803)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn824)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn830)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn843)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn871)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn874)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn887)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn898)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn901)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn914)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn917)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn923)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn942)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn962)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn992)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn995)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1002)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1007)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1012)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1017)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1022)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1084)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1089)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1092)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1097)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1107)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1112)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1135)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1140)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1163)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1168)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1171)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1176)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1186)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1191)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1214)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1219)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1242)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1247)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1250)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1254)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1259)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1271)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1280)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1285)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1288)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1301)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1307)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1312)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1322)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1327)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1341)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1346)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1356)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1361)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1389)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1394)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1422)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1427)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1441)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1446)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1456)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1461)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1489)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1494)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1522)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1527)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1552)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1559)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1564)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1591)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1596)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1604)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1611)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1621)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1625)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1644)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1650)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1672)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1682)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1688)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1705)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1767)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1831)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2030)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2035)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2040)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn2050)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2060)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2064)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2086)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2091)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2118)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2123)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2131)(org$frostlang$frostc$IR$Value*);
typedef void (*$fn2213)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn2216)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2220)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2225)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2236)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2245)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2250)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2272)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2283)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2301)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn2306)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2310)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2315)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2327)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2345)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2369)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2387)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn2428)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn2437)(org$frostlang$frostc$IR$Value*);

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
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s1009 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s1014 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s1124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s1334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s1348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s1366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s1466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1784 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, 7848791883756835730, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 81, 7848791883756835730, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s1898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1953 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2001 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2022 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s2037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s2071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2080 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s2112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s2176 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s2185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2208 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 152, 6301997373933244768, NULL };
static frost$core$String $s2269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s2415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s2442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

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
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
org$frostlang$frostc$IR$Value* $tmp357 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local10) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($453:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// unreffing REF($452:org.frostlang.frostc.Type)
// line 118
org$frostlang$frostc$IR$Value* $tmp358 = *(&local10);
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit($tmp358 == NULL);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block33; else goto block34;
block33:;
// line 119
org$frostlang$frostc$IR$Value* $tmp361 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing stepComparison
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp362 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing step
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp363 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing inclusive
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp364 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// unreffing end
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp365 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing start
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp366 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing rangeFields
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp367 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing rangeClass
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp368 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp369 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block34:;
goto block29;
block32:;
// line 1
// line 123
org$frostlang$frostc$IR$Value* $tmp370 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
org$frostlang$frostc$IR$Value* $tmp371 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local10) = $tmp370;
goto block29;
block29:;
// line 127
org$frostlang$frostc$IR* $tmp372 = *(&local0);
$fn374 $tmp373 = ($fn374) $tmp372->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp375 = $tmp373($tmp372, &$s376);
*(&local11) = $tmp375;
// line 128
org$frostlang$frostc$IR* $tmp377 = *(&local0);
$fn379 $tmp378 = ($fn379) $tmp377->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp380 = $tmp378($tmp377, &$s381);
*(&local12) = $tmp380;
// line 129
org$frostlang$frostc$IR* $tmp382 = *(&local0);
$fn384 $tmp383 = ($fn384) $tmp382->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp385 = $tmp383($tmp382, &$s386);
*(&local13) = $tmp385;
// line 130
org$frostlang$frostc$IR* $tmp387 = *(&local0);
$fn389 $tmp388 = ($fn389) $tmp387->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp390 = $tmp388($tmp387, &$s391);
*(&local14) = $tmp390;
// line 131
org$frostlang$frostc$IR* $tmp392 = *(&local0);
$fn394 $tmp393 = ($fn394) $tmp392->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp395 = $tmp393($tmp392, &$s396);
*(&local15) = $tmp395;
// line 132
org$frostlang$frostc$Compiler$AutoContext* $tmp397 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp398 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp399 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp400 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp401 = *(&local13);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp398, $tmp399, param2, $tmp400, $tmp401);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp397, param0, $tmp398);
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
org$frostlang$frostc$Compiler$AutoContext* $tmp402 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local16) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// unreffing REF($557:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
// unreffing REF($556:org.frostlang.frostc.Compiler.AutoContext)
// line 1
// line 134
org$frostlang$frostc$Compiler$AutoScope* $tmp403 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp403, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
org$frostlang$frostc$Compiler$AutoScope* $tmp404 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local17) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($578:org.frostlang.frostc.Compiler.AutoScope)
// line 135
org$frostlang$frostc$IR* $tmp405 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp406 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp407 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp408 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp409 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp410 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp406, $tmp407, param1, $tmp408, $tmp409, $tmp410);
$fn412 $tmp411 = ($fn412) $tmp405->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp413 = $tmp411($tmp405, $tmp406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($592:org.frostlang.frostc.IR.Statement)
// line 137
org$frostlang$frostc$IR* $tmp414 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp415 = *(&local14);
$fn417 $tmp416 = ($fn417) $tmp414->$class->vtable[4];
$tmp416($tmp414, $tmp415);
// line 138
org$frostlang$frostc$IR$Value* $tmp418 = *(&local6);
frost$core$Bit $tmp419 = frost$core$Bit$init$builtin_bit($tmp418 != NULL);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp421 = (frost$core$Int64) {139};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s422, $tmp421, &$s423);
abort(); // unreachable
block35:;
org$frostlang$frostc$IR$Value* $tmp424 = *(&local7);
frost$core$Bit $tmp425 = frost$core$Bit$init$builtin_bit($tmp424 != NULL);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp427 = (frost$core$Int64) {139};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s428, $tmp427, &$s429);
abort(); // unreachable
block37:;
frost$collections$ListView* $tmp430 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp424);
org$frostlang$frostc$Compiler$TypeContext* $tmp431 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp432 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp433 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp431, $tmp432, $tmp433);
org$frostlang$frostc$IR$Value* $tmp434 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp418, &$s435, $tmp430, $tmp431);
frost$core$Bit $tmp436 = frost$core$Bit$init$builtin_bit($tmp434 != NULL);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp438 = (frost$core$Int64) {138};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s439, $tmp438, &$s440);
abort(); // unreachable
block39:;
org$frostlang$frostc$IR$Value* $tmp441 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp434);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
org$frostlang$frostc$IR$Value* $tmp442 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local18) = $tmp441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
// unreffing REF($641:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing REF($632:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing REF($630:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing REF($628:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing REF($627:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 140
org$frostlang$frostc$IR* $tmp443 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp444 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp445 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp446 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp447 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp448 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp444, $tmp445, param1, $tmp446, $tmp447, $tmp448);
$fn450 $tmp449 = ($fn450) $tmp443->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp451 = $tmp449($tmp443, $tmp444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($666:org.frostlang.frostc.IR.Statement)
// line 142
org$frostlang$frostc$IR* $tmp452 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp453 = *(&local15);
$fn455 $tmp454 = ($fn455) $tmp452->$class->vtable[4];
$tmp454($tmp452, $tmp453);
// line 143
org$frostlang$frostc$IR$Value* $tmp456 = *(&local6);
frost$core$Bit $tmp457 = frost$core$Bit$init$builtin_bit($tmp456 != NULL);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp459 = (frost$core$Int64) {144};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s460, $tmp459, &$s461);
abort(); // unreachable
block41:;
org$frostlang$frostc$IR$Value* $tmp462 = *(&local7);
frost$core$Bit $tmp463 = frost$core$Bit$init$builtin_bit($tmp462 != NULL);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp465 = (frost$core$Int64) {144};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s466, $tmp465, &$s467);
abort(); // unreachable
block43:;
frost$collections$ListView* $tmp468 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp462);
org$frostlang$frostc$Compiler$TypeContext* $tmp469 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp470 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp471 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp469, $tmp470, $tmp471);
org$frostlang$frostc$IR$Value* $tmp472 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp456, &$s473, $tmp468, $tmp469);
frost$core$Bit $tmp474 = frost$core$Bit$init$builtin_bit($tmp472 != NULL);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {143};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s477, $tmp476, &$s478);
abort(); // unreachable
block45:;
org$frostlang$frostc$IR$Value* $tmp479 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp472);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$IR$Value* $tmp480 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local19) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// unreffing REF($715:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// unreffing REF($706:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing REF($704:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing REF($702:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// unreffing REF($701:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 145
org$frostlang$frostc$IR* $tmp481 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp482 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp483 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp484 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp485 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp486 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp482, $tmp483, param1, $tmp484, $tmp485, $tmp486);
$fn488 $tmp487 = ($fn488) $tmp481->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp489 = $tmp487($tmp481, $tmp482);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($740:org.frostlang.frostc.IR.Statement)
// line 147
org$frostlang$frostc$IR* $tmp490 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp491 = *(&local11);
$fn493 $tmp492 = ($fn493) $tmp490->$class->vtable[4];
$tmp492($tmp490, $tmp491);
// line 148
ITable* $tmp494 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
frost$collections$Iterator* $tmp497 = $tmp495(((frost$collections$Iterable*) param5));
goto block47;
block47:;
ITable* $tmp498 = $tmp497->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[0];
frost$core$Bit $tmp501 = $tmp499($tmp497);
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block49; else goto block48;
block48:;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp503 = $tmp497->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[1];
frost$core$Object* $tmp506 = $tmp504($tmp497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp506)));
org$frostlang$frostc$ASTNode* $tmp507 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local20) = ((org$frostlang$frostc$ASTNode*) $tmp506);
// line 149
org$frostlang$frostc$ASTNode* $tmp508 = *(&local20);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp508);
frost$core$Frost$unref$frost$core$Object$Q($tmp506);
// unreffing REF($771:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp509 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing s
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing REF($760:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$IR$Value* $tmp510 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing entryExclusiveTest
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp511 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing entryInclusiveTest
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp512 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing scope
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 152
org$frostlang$frostc$IR* $tmp513 = *(&local0);
$fn515 $tmp514 = ($fn515) $tmp513->$class->vtable[5];
frost$core$Bit $tmp516 = $tmp514($tmp513);
frost$core$Bit $tmp517 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block50; else goto block51;
block50:;
// line 153
org$frostlang$frostc$IR* $tmp519 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp520 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp521 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp522 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp520, $tmp521, param1, $tmp522);
$fn524 $tmp523 = ($fn524) $tmp519->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp525 = $tmp523($tmp519, $tmp520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
// unreffing REF($818:org.frostlang.frostc.IR.Statement)
goto block51;
block51:;
// line 155
org$frostlang$frostc$IR* $tmp526 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp527 = *(&local13);
$fn529 $tmp528 = ($fn529) $tmp526->$class->vtable[4];
$tmp528($tmp526, $tmp527);
// line 156
org$frostlang$frostc$IR* $tmp530 = *(&local0);
$fn532 $tmp531 = ($fn532) $tmp530->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp533 = $tmp531($tmp530, &$s534);
*(&local21) = $tmp533;
// line 159
org$frostlang$frostc$IR$Value* $tmp535 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp536 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp537 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp538 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp539 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp540 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp541 = (frost$core$Int64) {2};
frost$core$Int64 $tmp542 = *(&local1);
org$frostlang$frostc$Type* $tmp543 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp540, $tmp541, $tmp542, $tmp543);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp538, $tmp539, param1, $tmp540);
$fn545 $tmp544 = ($fn545) $tmp537->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp546 = $tmp544($tmp537, $tmp538);
org$frostlang$frostc$Type* $tmp547 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp535, $tmp536, $tmp546, $tmp547);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
org$frostlang$frostc$IR$Value* $tmp548 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local22) = $tmp535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing REF($844:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($842:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
// unreffing REF($839:org.frostlang.frostc.IR.Value)
// line 163
org$frostlang$frostc$IR$Value* $tmp549 = *(&local7);
frost$core$Bit $tmp550 = frost$core$Bit$init$builtin_bit($tmp549 != NULL);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp552 = (frost$core$Int64) {163};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s553, $tmp552, &$s554);
abort(); // unreachable
block52:;
org$frostlang$frostc$IR$Value* $tmp555 = *(&local22);
frost$collections$ListView* $tmp556 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp555);
org$frostlang$frostc$Compiler$TypeContext* $tmp557 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp558 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp557, $tmp558);
org$frostlang$frostc$IR$Value* $tmp559 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp549, &$s560, $tmp556, $tmp557);
org$frostlang$frostc$Type* $tmp561 = *(&local3);
org$frostlang$frostc$Type* $tmp562 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp561);
org$frostlang$frostc$IR$Value* $tmp563 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp559, $tmp562);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$IR$Value* $tmp564 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local23) = $tmp563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
// unreffing REF($888:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($887:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing REF($885:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing REF($882:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing REF($881:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 165
org$frostlang$frostc$IR$Value* $tmp565 = *(&local23);
frost$core$Bit $tmp566 = frost$core$Bit$init$builtin_bit($tmp565 != NULL);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {165};
org$frostlang$frostc$IR$Value* $tmp569 = *(&local22);
frost$core$String* $tmp570 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s571, ((frost$core$Object*) $tmp569));
frost$core$String* $tmp572 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp570, &$s573);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s574, $tmp568, $tmp572);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing REF($921:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing REF($920:frost.core.String)
abort(); // unreachable
block54:;
// line 167
org$frostlang$frostc$IR* $tmp575 = *(&local0);
$fn577 $tmp576 = ($fn577) $tmp575->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp578 = $tmp576($tmp575, &$s579);
*(&local24) = $tmp578;
// line 168
org$frostlang$frostc$IR* $tmp580 = *(&local0);
$fn582 $tmp581 = ($fn582) $tmp580->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp583 = $tmp581($tmp580, &$s584);
*(&local25) = $tmp583;
// line 169
org$frostlang$frostc$IR* $tmp585 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp586 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp587 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp588 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp589 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp590 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp586, $tmp587, param1, $tmp588, $tmp589, $tmp590);
$fn592 $tmp591 = ($fn592) $tmp585->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp593 = $tmp591($tmp585, $tmp586);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// unreffing REF($942:org.frostlang.frostc.IR.Statement)
// line 172
org$frostlang$frostc$IR* $tmp594 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp595 = *(&local24);
$fn597 $tmp596 = ($fn597) $tmp594->$class->vtable[4];
$tmp596($tmp594, $tmp595);
// line 173
org$frostlang$frostc$IR$Value* $tmp598 = *(&local23);
frost$core$Bit $tmp599 = frost$core$Bit$init$builtin_bit($tmp598 != NULL);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp601 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s602, $tmp601, &$s603);
abort(); // unreachable
block56:;
org$frostlang$frostc$IR$Value* $tmp604 = *(&local10);
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604 != NULL);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp607 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s608, $tmp607, &$s609);
abort(); // unreachable
block58:;
frost$collections$ListView* $tmp610 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp604);
org$frostlang$frostc$Compiler$TypeContext* $tmp611 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp612 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp613 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp611, $tmp612, $tmp613);
org$frostlang$frostc$IR$Value* $tmp614 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp598, &$s615, $tmp610, $tmp611);
frost$core$Bit $tmp616 = frost$core$Bit$init$builtin_bit($tmp614 != NULL);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp618 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s619, $tmp618, &$s620);
abort(); // unreachable
block60:;
org$frostlang$frostc$IR$Value* $tmp621 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp614);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
org$frostlang$frostc$IR$Value* $tmp622 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local26) = $tmp621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing REF($991:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing REF($982:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($980:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($978:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing REF($977:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 175
org$frostlang$frostc$IR* $tmp623 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp624 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp625 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp626 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp627 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp628 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp624, $tmp625, param1, $tmp626, $tmp627, $tmp628);
$fn630 $tmp629 = ($fn630) $tmp623->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp631 = $tmp629($tmp623, $tmp624);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($1016:org.frostlang.frostc.IR.Statement)
// line 178
org$frostlang$frostc$IR* $tmp632 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp633 = *(&local25);
$fn635 $tmp634 = ($fn635) $tmp632->$class->vtable[4];
$tmp634($tmp632, $tmp633);
// line 179
org$frostlang$frostc$IR$Value* $tmp636 = *(&local23);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636 != NULL);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block62:;
org$frostlang$frostc$IR$Value* $tmp642 = *(&local10);
frost$core$Bit $tmp643 = frost$core$Bit$init$builtin_bit($tmp642 != NULL);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp645 = (frost$core$Int64) {180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s646, $tmp645, &$s647);
abort(); // unreachable
block64:;
frost$collections$ListView* $tmp648 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp642);
org$frostlang$frostc$Compiler$TypeContext* $tmp649 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp650 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp651 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp649, $tmp650, $tmp651);
org$frostlang$frostc$IR$Value* $tmp652 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp636, &$s653, $tmp648, $tmp649);
frost$core$Bit $tmp654 = frost$core$Bit$init$builtin_bit($tmp652 != NULL);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {179};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s657, $tmp656, &$s658);
abort(); // unreachable
block66:;
org$frostlang$frostc$IR$Value* $tmp659 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp652);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
org$frostlang$frostc$IR$Value* $tmp660 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local27) = $tmp659;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($1065:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($1056:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
// unreffing REF($1054:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing REF($1052:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing REF($1051:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 181
org$frostlang$frostc$IR* $tmp661 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp662 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp663 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp664 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp665 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp666 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp662, $tmp663, param1, $tmp664, $tmp665, $tmp666);
$fn668 $tmp667 = ($fn668) $tmp661->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp669 = $tmp667($tmp661, $tmp662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($1090:org.frostlang.frostc.IR.Statement)
// line 183
org$frostlang$frostc$IR* $tmp670 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp671 = *(&local21);
$fn673 $tmp672 = ($fn673) $tmp670->$class->vtable[4];
$tmp672($tmp670, $tmp671);
// line 184
org$frostlang$frostc$IR$Value* $tmp674 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp675 = *(&local9);
frost$core$Bit $tmp676 = frost$core$Bit$init$builtin_bit($tmp675 != NULL);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp678 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s679, $tmp678, &$s680);
abort(); // unreachable
block68:;
frost$collections$ListView* $tmp681 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp675);
org$frostlang$frostc$Compiler$TypeContext* $tmp682 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp683 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp682, $tmp683);
org$frostlang$frostc$IR$Value* $tmp684 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp674, &$s685, $tmp681, $tmp682);
org$frostlang$frostc$Type* $tmp686 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp687 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp684, $tmp686);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
org$frostlang$frostc$IR$Value* $tmp688 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local28) = $tmp687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing REF($1123:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($1121:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($1118:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($1117:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 186
org$frostlang$frostc$IR* $tmp689 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp690 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp691 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp692 = *(&local28);
frost$core$Bit $tmp693 = frost$core$Bit$init$builtin_bit($tmp692 != NULL);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp695 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s696, $tmp695, &$s697);
abort(); // unreachable
block70:;
org$frostlang$frostc$IR$Value* $tmp698 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp699 = (frost$core$Int64) {2};
frost$core$Int64 $tmp700 = *(&local1);
org$frostlang$frostc$Type* $tmp701 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp698, $tmp699, $tmp700, $tmp701);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp690, $tmp691, param1, $tmp692, $tmp698);
$fn703 $tmp702 = ($fn703) $tmp689->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp704 = $tmp702($tmp689, $tmp690);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing REF($1156:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($1145:org.frostlang.frostc.IR.Statement)
// line 187
org$frostlang$frostc$IR* $tmp705 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp706 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp707 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp708 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp706, $tmp707, param1, $tmp708);
$fn710 $tmp709 = ($fn710) $tmp705->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp711 = $tmp709($tmp705, $tmp706);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($1172:org.frostlang.frostc.IR.Statement)
// line 189
org$frostlang$frostc$IR* $tmp712 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp713 = *(&local12);
$fn715 $tmp714 = ($fn715) $tmp712->$class->vtable[4];
$tmp714($tmp712, $tmp713);
org$frostlang$frostc$IR$Value* $tmp716 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing inc
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp717 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing exclusiveTestBit
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp718 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
// unreffing inclusiveTestBit
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp719 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// unreffing delta
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp720 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing indexLoad
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp721 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// unreffing context
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp722 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
// unreffing stepComparison
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp723 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing step
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp724 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
// unreffing inclusive
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp725 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing end
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp726 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// unreffing start
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp727 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing rangeFields
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp728 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing rangeClass
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp729 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp730 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
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
// line 213
org$frostlang$frostc$IR** $tmp731 = &param0->ir;
org$frostlang$frostc$IR* $tmp732 = *$tmp731;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
org$frostlang$frostc$IR* $tmp733 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local0) = $tmp732;
// line 214
$fn735 $tmp734 = ($fn735) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp736 = $tmp734(param4);
org$frostlang$frostc$Type$Kind* $tmp737 = &$tmp736->typeKind;
org$frostlang$frostc$Type$Kind $tmp738 = *$tmp737;
org$frostlang$frostc$Type$Kind$wrapper* $tmp739;
$tmp739 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp739->value = $tmp738;
frost$core$Int64 $tmp740 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp741 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp740);
org$frostlang$frostc$Type$Kind$wrapper* $tmp742;
$tmp742 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp742->value = $tmp741;
ITable* $tmp743 = ((frost$core$Equatable*) $tmp739)->$class->itable;
while ($tmp743->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp743 = $tmp743->next;
}
$fn745 $tmp744 = $tmp743->methods[0];
frost$core$Bit $tmp746 = $tmp744(((frost$core$Equatable*) $tmp739), ((frost$core$Equatable*) $tmp742));
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s749, $tmp748);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp742)));
// unreffing REF($19:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp739)));
// unreffing REF($15:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 215
$fn751 $tmp750 = ($fn751) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp752 = $tmp750(param4);
org$frostlang$frostc$FixedArray** $tmp753 = &$tmp752->subtypes;
org$frostlang$frostc$FixedArray* $tmp754 = *$tmp753;
frost$core$Bit $tmp755 = frost$core$Bit$init$builtin_bit($tmp754 != NULL);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp757 = (frost$core$Int64) {215};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s758, $tmp757, &$s759);
abort(); // unreachable
block3:;
ITable* $tmp760 = ((frost$collections$CollectionView*) $tmp754)->$class->itable;
while ($tmp760->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp760 = $tmp760->next;
}
$fn762 $tmp761 = $tmp760->methods[0];
frost$core$Int64 $tmp763 = $tmp761(((frost$collections$CollectionView*) $tmp754));
frost$core$Int64 $tmp764 = (frost$core$Int64) {3};
frost$core$Bit $tmp765 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp763, $tmp764);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp767 = (frost$core$Int64) {215};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s768, $tmp767);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($38:org.frostlang.frostc.Type)
// line 216
$fn770 $tmp769 = ($fn770) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp771 = $tmp769(param4);
org$frostlang$frostc$FixedArray** $tmp772 = &$tmp771->subtypes;
org$frostlang$frostc$FixedArray* $tmp773 = *$tmp772;
frost$core$Bit $tmp774 = frost$core$Bit$init$builtin_bit($tmp773 != NULL);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp776 = (frost$core$Int64) {216};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s777, $tmp776, &$s778);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp779 = (frost$core$Int64) {0};
frost$core$Object* $tmp780 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp773, $tmp779);
frost$core$String** $tmp781 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp780))->name;
frost$core$String* $tmp782 = *$tmp781;
frost$core$Bit $tmp783 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp782, &$s784);
bool $tmp785 = $tmp783.value;
if ($tmp785) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp786 = (frost$core$Int64) {216};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s787, $tmp786);
abort(); // unreachable
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp780);
// unreffing REF($76:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing REF($63:org.frostlang.frostc.Type)
// line 217
// line 218
org$frostlang$frostc$Variable$Storage** $tmp788 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp789 = *$tmp788;
frost$core$Int64* $tmp790 = &$tmp789->$rawValue;
frost$core$Int64 $tmp791 = *$tmp790;
frost$core$Int64 $tmp792 = (frost$core$Int64) {0};
frost$core$Bit $tmp793 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp791, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block12; else goto block13;
block12:;
frost$core$Int64* $tmp795 = (frost$core$Int64*) ($tmp789->$data + 0);
frost$core$Int64 $tmp796 = *$tmp795;
*(&local2) = $tmp796;
// line 220
frost$core$Int64 $tmp797 = *(&local2);
*(&local1) = $tmp797;
goto block11;
block13:;
// line 223
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit(false);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp800 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s801, $tmp800);
abort(); // unreachable
block14:;
goto block11;
block11:;
// line 226
$fn803 $tmp802 = ($fn803) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp804 = $tmp802(param4);
org$frostlang$frostc$FixedArray** $tmp805 = &$tmp804->subtypes;
org$frostlang$frostc$FixedArray* $tmp806 = *$tmp805;
frost$core$Bit $tmp807 = frost$core$Bit$init$builtin_bit($tmp806 != NULL);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp809 = (frost$core$Int64) {226};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s810, $tmp809, &$s811);
abort(); // unreachable
block16:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {1};
frost$core$Object* $tmp813 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp806, $tmp812);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp813)));
org$frostlang$frostc$Type* $tmp814 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp813);
frost$core$Frost$unref$frost$core$Object$Q($tmp813);
// unreffing REF($133:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($120:org.frostlang.frostc.Type)
// line 227
org$frostlang$frostc$Type* $tmp815 = *(&local3);
org$frostlang$frostc$Type$Kind* $tmp816 = &$tmp815->typeKind;
org$frostlang$frostc$Type$Kind $tmp817 = *$tmp816;
org$frostlang$frostc$Type$Kind$wrapper* $tmp818;
$tmp818 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp818->value = $tmp817;
frost$core$Int64 $tmp819 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp820 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp819);
org$frostlang$frostc$Type$Kind$wrapper* $tmp821;
$tmp821 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp821->value = $tmp820;
ITable* $tmp822 = ((frost$core$Equatable*) $tmp818)->$class->itable;
while ($tmp822->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp822 = $tmp822->next;
}
$fn824 $tmp823 = $tmp822->methods[1];
frost$core$Bit $tmp825 = $tmp823(((frost$core$Equatable*) $tmp818), ((frost$core$Equatable*) $tmp821));
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp827 = (frost$core$Int64) {227};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s828, $tmp827);
abort(); // unreachable
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp821)));
// unreffing REF($156:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp818)));
// unreffing REF($152:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 228
$fn830 $tmp829 = ($fn830) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp831 = $tmp829(param4);
org$frostlang$frostc$FixedArray** $tmp832 = &$tmp831->subtypes;
org$frostlang$frostc$FixedArray* $tmp833 = *$tmp832;
frost$core$Bit $tmp834 = frost$core$Bit$init$builtin_bit($tmp833 != NULL);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp836 = (frost$core$Int64) {228};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s837, $tmp836, &$s838);
abort(); // unreachable
block20:;
frost$core$Int64 $tmp839 = (frost$core$Int64) {2};
frost$core$Object* $tmp840 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp833, $tmp839);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp840)));
org$frostlang$frostc$Type* $tmp841 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp840);
frost$core$Frost$unref$frost$core$Object$Q($tmp840);
// unreffing REF($185:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($172:org.frostlang.frostc.Type)
// line 229
$fn843 $tmp842 = ($fn843) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp844 = $tmp842(param4);
org$frostlang$frostc$ClassDecl* $tmp845 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp844);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$ClassDecl* $tmp846 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local5) = $tmp845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// unreffing REF($203:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// unreffing REF($202:org.frostlang.frostc.Type)
// line 230
org$frostlang$frostc$ClassDecl* $tmp847 = *(&local5);
frost$core$Bit $tmp848 = frost$core$Bit$init$builtin_bit($tmp847 == NULL);
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block22; else goto block23;
block22:;
// line 231
org$frostlang$frostc$ClassDecl* $tmp850 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// unreffing rangeClass
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp851 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing stepType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp852 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp853 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block23:;
// line 233
org$frostlang$frostc$ClassDecl* $tmp854 = *(&local5);
frost$core$Bit $tmp855 = frost$core$Bit$init$builtin_bit($tmp854 != NULL);
bool $tmp856 = $tmp855.value;
if ($tmp856) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp857 = (frost$core$Int64) {233};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s858, $tmp857, &$s859);
abort(); // unreachable
block24:;
frost$collections$ListView* $tmp860 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp854);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$collections$ListView* $tmp861 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local6) = $tmp860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing REF($255:frost.collections.ListView<org.frostlang.frostc.FieldDecl>)
// line 236
org$frostlang$frostc$IR$Value* $tmp862 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp863 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp864 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp865 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp866 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp867 = *(&local6);
frost$core$Int64 $tmp868 = (frost$core$Int64) {0};
ITable* $tmp869 = $tmp867->$class->itable;
while ($tmp869->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp869 = $tmp869->next;
}
$fn871 $tmp870 = $tmp869->methods[0];
frost$core$Object* $tmp872 = $tmp870($tmp867, $tmp868);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp865, $tmp866, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp872));
$fn874 $tmp873 = ($fn874) $tmp864->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp875 = $tmp873($tmp864, $tmp865);
org$frostlang$frostc$Type* $tmp876 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp862, $tmp863, $tmp875, $tmp876);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
org$frostlang$frostc$IR$Value* $tmp877 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local7) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q($tmp872);
// unreffing REF($276:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($270:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing REF($267:org.frostlang.frostc.IR.Value)
// line 240
org$frostlang$frostc$IR* $tmp878 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp879 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp880 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp881 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp882 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp883 = (frost$core$Int64) {2};
frost$core$Int64 $tmp884 = *(&local1);
org$frostlang$frostc$Type* $tmp885 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp882, $tmp883, $tmp884, $tmp885);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp879, $tmp880, param1, $tmp881, $tmp882);
$fn887 $tmp886 = ($fn887) $tmp878->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp888 = $tmp886($tmp878, $tmp879);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($304:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($301:org.frostlang.frostc.IR.Statement)
// line 243
org$frostlang$frostc$IR$Value* $tmp889 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp890 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp891 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp892 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp893 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp894 = *(&local6);
frost$core$Int64 $tmp895 = (frost$core$Int64) {1};
ITable* $tmp896 = $tmp894->$class->itable;
while ($tmp896->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[0];
frost$core$Object* $tmp899 = $tmp897($tmp894, $tmp895);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp892, $tmp893, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp899));
$fn901 $tmp900 = ($fn901) $tmp891->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp902 = $tmp900($tmp891, $tmp892);
org$frostlang$frostc$Type* $tmp903 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp889, $tmp890, $tmp902, $tmp903);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
org$frostlang$frostc$IR$Value* $tmp904 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local8) = $tmp889;
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
// unreffing REF($328:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing REF($322:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($319:org.frostlang.frostc.IR.Value)
// line 247
org$frostlang$frostc$IR$Value* $tmp905 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp906 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp907 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp908 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp909 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp910 = *(&local6);
frost$core$Int64 $tmp911 = (frost$core$Int64) {2};
ITable* $tmp912 = $tmp910->$class->itable;
while ($tmp912->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp912 = $tmp912->next;
}
$fn914 $tmp913 = $tmp912->methods[0];
frost$core$Object* $tmp915 = $tmp913($tmp910, $tmp911);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp908, $tmp909, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp915));
$fn917 $tmp916 = ($fn917) $tmp907->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp918 = $tmp916($tmp907, $tmp908);
org$frostlang$frostc$Type* $tmp919 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp905, $tmp906, $tmp918, $tmp919);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
org$frostlang$frostc$IR$Value* $tmp920 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local9) = $tmp905;
frost$core$Frost$unref$frost$core$Object$Q($tmp915);
// unreffing REF($361:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// unreffing REF($355:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($352:org.frostlang.frostc.IR.Value)
// line 249
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 250
org$frostlang$frostc$IR$Value* $tmp921 = *(&local9);
$fn923 $tmp922 = ($fn923) $tmp921->$class->vtable[2];
org$frostlang$frostc$Type* $tmp924 = $tmp922($tmp921);
org$frostlang$frostc$Type* $tmp925 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp926 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp924, $tmp925);
bool $tmp927 = $tmp926.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing REF($390:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing REF($389:org.frostlang.frostc.Type)
if ($tmp927) goto block26; else goto block28;
block26:;
// line 251
org$frostlang$frostc$IR$Value* $tmp928 = *(&local9);
org$frostlang$frostc$Type* $tmp929 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp930 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp928, $tmp929);
frost$core$Bit $tmp931 = frost$core$Bit$init$builtin_bit($tmp930 != NULL);
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp933 = (frost$core$Int64) {251};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s934, $tmp933, &$s935);
abort(); // unreachable
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
org$frostlang$frostc$IR$Value* $tmp936 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local10) = $tmp930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing REF($404:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing REF($403:org.frostlang.frostc.Type)
goto block27;
block28:;
// line 1
// line 254
org$frostlang$frostc$IR$Value* $tmp937 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
org$frostlang$frostc$IR$Value* $tmp938 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
*(&local10) = $tmp937;
goto block27;
block27:;
// line 256
org$frostlang$frostc$IR$Value* $tmp939 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp940 = *(&local9);
$fn942 $tmp941 = ($fn942) $tmp940->$class->vtable[2];
org$frostlang$frostc$Type* $tmp943 = $tmp941($tmp940);
org$frostlang$frostc$Type* $tmp944 = org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp943);
org$frostlang$frostc$IR$Value* $tmp945 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp939, $tmp944);
frost$core$Bit $tmp946 = frost$core$Bit$init$builtin_bit($tmp945 != NULL);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp948 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s949, $tmp948, &$s950);
abort(); // unreachable
block31:;
frost$collections$Array* $tmp951 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp952 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp951, $tmp952);
org$frostlang$frostc$Compiler$TypeContext* $tmp953 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp954 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp953, $tmp954);
org$frostlang$frostc$IR$Value* $tmp955 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp945, &$s956, ((frost$collections$ListView*) $tmp951), $tmp953);
org$frostlang$frostc$Type* $tmp957 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp958 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp955, $tmp957);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
org$frostlang$frostc$IR$Value* $tmp959 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local11) = $tmp958;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
// unreffing REF($462:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing REF($460:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing REF($457:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing REF($452:frost.collections.Array<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
// unreffing REF($443:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing REF($442:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($441:org.frostlang.frostc.Type)
// line 258
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 259
org$frostlang$frostc$IR$Value* $tmp960 = *(&local9);
$fn962 $tmp961 = ($fn962) $tmp960->$class->vtable[2];
org$frostlang$frostc$Type* $tmp963 = $tmp961($tmp960);
org$frostlang$frostc$Type* $tmp964 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp965 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp963, $tmp964);
bool $tmp966 = $tmp965.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing REF($497:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing REF($496:org.frostlang.frostc.Type)
if ($tmp966) goto block33; else goto block35;
block33:;
// line 260
org$frostlang$frostc$IR$Value* $tmp967 = *(&local11);
org$frostlang$frostc$Type* $tmp968 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp969 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp967, $tmp968);
frost$core$Bit $tmp970 = frost$core$Bit$init$builtin_bit($tmp969 != NULL);
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp972 = (frost$core$Int64) {260};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s973, $tmp972, &$s974);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
org$frostlang$frostc$IR$Value* $tmp975 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local12) = $tmp969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
// unreffing REF($510:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// unreffing REF($509:org.frostlang.frostc.Type)
goto block34;
block35:;
// line 1
// line 263
org$frostlang$frostc$IR$Value* $tmp976 = *(&local11);
frost$core$Bit $tmp977 = frost$core$Bit$init$builtin_bit($tmp976 != NULL);
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp979 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s980, $tmp979, &$s981);
abort(); // unreachable
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
org$frostlang$frostc$IR$Value* $tmp982 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local12) = $tmp976;
goto block34;
block34:;
// line 267
org$frostlang$frostc$IR$Value* $tmp983 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp984 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp985 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp986 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp987 = (frost$core$Int64) {9};
frost$collections$ListView* $tmp988 = *(&local6);
frost$core$Int64 $tmp989 = (frost$core$Int64) {3};
ITable* $tmp990 = $tmp988->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[0];
frost$core$Object* $tmp993 = $tmp991($tmp988, $tmp989);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp986, $tmp987, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp993));
$fn995 $tmp994 = ($fn995) $tmp985->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp996 = $tmp994($tmp985, $tmp986);
org$frostlang$frostc$Type* $tmp997 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp983, $tmp984, $tmp996, $tmp997);
org$frostlang$frostc$IR$Value* $tmp998 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp983);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
org$frostlang$frostc$IR$Value* $tmp999 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local13) = $tmp998;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
// unreffing REF($567:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// unreffing REF($565:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp993);
// unreffing REF($560:frost.collections.ListView.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($554:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// unreffing REF($551:org.frostlang.frostc.IR.Value)
// line 271
org$frostlang$frostc$IR* $tmp1000 = *(&local0);
$fn1002 $tmp1001 = ($fn1002) $tmp1000->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1003 = $tmp1001($tmp1000, &$s1004);
*(&local14) = $tmp1003;
// line 272
org$frostlang$frostc$IR* $tmp1005 = *(&local0);
$fn1007 $tmp1006 = ($fn1007) $tmp1005->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1008 = $tmp1006($tmp1005, &$s1009);
*(&local15) = $tmp1008;
// line 273
org$frostlang$frostc$IR* $tmp1010 = *(&local0);
$fn1012 $tmp1011 = ($fn1012) $tmp1010->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1013 = $tmp1011($tmp1010, &$s1014);
*(&local16) = $tmp1013;
// line 274
org$frostlang$frostc$IR* $tmp1015 = *(&local0);
$fn1017 $tmp1016 = ($fn1017) $tmp1015->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1018 = $tmp1016($tmp1015, &$s1019);
*(&local17) = $tmp1018;
// line 275
org$frostlang$frostc$IR* $tmp1020 = *(&local0);
$fn1022 $tmp1021 = ($fn1022) $tmp1020->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1023 = $tmp1021($tmp1020, &$s1024);
*(&local18) = $tmp1023;
// line 276
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 277
org$frostlang$frostc$Compiler$AutoContext* $tmp1025 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1026 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1027 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1028 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp1029 = *(&local16);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1026, $tmp1027, param2, $tmp1028, $tmp1029);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1025, param0, $tmp1026);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
org$frostlang$frostc$Compiler$AutoContext* $tmp1030 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local20) = $tmp1025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// unreffing REF($619:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// unreffing REF($618:org.frostlang.frostc.Compiler.AutoContext)
// line 1
// line 279
org$frostlang$frostc$Compiler$AutoScope* $tmp1031 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1031, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
org$frostlang$frostc$Compiler$AutoScope* $tmp1032 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local21) = $tmp1031;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// unreffing REF($640:org.frostlang.frostc.Compiler.AutoScope)
// line 280
org$frostlang$frostc$Type* $tmp1033 = *(&local4);
frost$core$String** $tmp1034 = &((org$frostlang$frostc$Symbol*) $tmp1033)->name;
frost$core$String* $tmp1035 = *$tmp1034;
frost$core$Bit $tmp1036 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1035, &$s1037);
bool $tmp1038 = $tmp1036.value;
if ($tmp1038) goto block40; else goto block42;
block40:;
// line 281
org$frostlang$frostc$IR$Value* $tmp1039 = *(&local9);
frost$collections$Array* $tmp1040 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1041 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1040, $tmp1041);
org$frostlang$frostc$ASTNode* $tmp1042 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1043 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp1044 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1042, $tmp1043, param1, $tmp1044);
frost$collections$Array$add$frost$collections$Array$T($tmp1040, ((frost$core$Object*) $tmp1042));
org$frostlang$frostc$Compiler$TypeContext* $tmp1045 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1046 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1047 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1045, $tmp1046, $tmp1047);
org$frostlang$frostc$IR$Value* $tmp1048 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1039, &$s1049, ((frost$collections$ListView*) $tmp1040), $tmp1045);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
org$frostlang$frostc$IR$Value* $tmp1050 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local22) = $tmp1048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($678:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
// unreffing REF($676:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// unreffing REF($674:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// unreffing REF($667:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
// unreffing REF($662:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 283
org$frostlang$frostc$IR$Value* $tmp1051 = *(&local22);
frost$core$Bit $tmp1052 = frost$core$Bit$init$builtin_bit($tmp1051 != NULL);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp1054 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1055, $tmp1054);
abort(); // unreachable
block43:;
// line 284
org$frostlang$frostc$IR$Value* $tmp1056 = *(&local22);
frost$core$Bit $tmp1057 = frost$core$Bit$init$builtin_bit($tmp1056 != NULL);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp1059 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1060, $tmp1059, &$s1061);
abort(); // unreachable
block45:;
org$frostlang$frostc$IR$Value* $tmp1062 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1056);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
org$frostlang$frostc$IR$Value* $tmp1063 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local19) = $tmp1062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// unreffing REF($720:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp1064 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
// unreffing comparison
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block41;
block42:;
// line 1
// line 287
org$frostlang$frostc$Type* $tmp1065 = *(&local4);
frost$core$String** $tmp1066 = &((org$frostlang$frostc$Symbol*) $tmp1065)->name;
frost$core$String* $tmp1067 = *$tmp1066;
frost$core$Bit $tmp1068 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1067, &$s1069);
bool $tmp1070 = $tmp1068.value;
if ($tmp1070) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp1071 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1072, $tmp1071);
abort(); // unreachable
block47:;
// line 288
org$frostlang$frostc$IR$Value* $tmp1073 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1074 = (frost$core$Int64) {0};
frost$core$Bit $tmp1075 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp1073, $tmp1074, $tmp1075);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlang$frostc$IR$Value* $tmp1076 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local19) = $tmp1073;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
// unreffing REF($749:org.frostlang.frostc.IR.Value)
goto block41;
block41:;
// line 290
org$frostlang$frostc$IR* $tmp1077 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1078 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1079 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1080 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1081 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp1082 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1078, $tmp1079, param1, $tmp1080, $tmp1081, $tmp1082);
$fn1084 $tmp1083 = ($fn1084) $tmp1077->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1085 = $tmp1083($tmp1077, $tmp1078);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
// unreffing REF($765:org.frostlang.frostc.IR.Statement)
// line 291
org$frostlang$frostc$IR* $tmp1086 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1087 = *(&local17);
$fn1089 $tmp1088 = ($fn1089) $tmp1086->$class->vtable[4];
$tmp1088($tmp1086, $tmp1087);
// line 292
org$frostlang$frostc$IR* $tmp1090 = *(&local0);
$fn1092 $tmp1091 = ($fn1092) $tmp1090->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1093 = $tmp1091($tmp1090, &$s1094);
*(&local23) = $tmp1093;
// line 293
org$frostlang$frostc$IR* $tmp1095 = *(&local0);
$fn1097 $tmp1096 = ($fn1097) $tmp1095->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1098 = $tmp1096($tmp1095, &$s1099);
*(&local24) = $tmp1098;
// line 294
org$frostlang$frostc$IR* $tmp1100 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1101 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1102 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1103 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1104 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp1105 = *(&local24);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1101, $tmp1102, param1, $tmp1103, $tmp1104, $tmp1105);
$fn1107 $tmp1106 = ($fn1107) $tmp1100->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1108 = $tmp1106($tmp1100, $tmp1101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($793:org.frostlang.frostc.IR.Statement)
// line 296
org$frostlang$frostc$IR* $tmp1109 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1110 = *(&local23);
$fn1112 $tmp1111 = ($fn1112) $tmp1109->$class->vtable[4];
$tmp1111($tmp1109, $tmp1110);
// line 297
org$frostlang$frostc$IR$Value* $tmp1113 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1114 = *(&local8);
frost$collections$ListView* $tmp1115 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1114);
org$frostlang$frostc$Compiler$TypeContext* $tmp1116 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1117 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1118 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1116, $tmp1117, $tmp1118);
org$frostlang$frostc$IR$Value* $tmp1119 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1113, &$s1120, $tmp1115, $tmp1116);
frost$core$Bit $tmp1121 = frost$core$Bit$init$builtin_bit($tmp1119 != NULL);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1123 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1124, $tmp1123, &$s1125);
abort(); // unreachable
block49:;
org$frostlang$frostc$IR$Value* $tmp1126 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1119);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
org$frostlang$frostc$IR$Value* $tmp1127 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local25) = $tmp1126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// unreffing REF($826:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
// unreffing REF($817:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
// unreffing REF($815:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// unreffing REF($813:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// unreffing REF($812:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 300
org$frostlang$frostc$IR* $tmp1128 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1129 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1130 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1131 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp1132 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1133 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1129, $tmp1130, param1, $tmp1131, $tmp1132, $tmp1133);
$fn1135 $tmp1134 = ($fn1135) $tmp1128->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1136 = $tmp1134($tmp1128, $tmp1129);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
// unreffing REF($851:org.frostlang.frostc.IR.Statement)
// line 302
org$frostlang$frostc$IR* $tmp1137 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1138 = *(&local24);
$fn1140 $tmp1139 = ($fn1140) $tmp1137->$class->vtable[4];
$tmp1139($tmp1137, $tmp1138);
// line 303
org$frostlang$frostc$IR$Value* $tmp1141 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1142 = *(&local8);
frost$collections$ListView* $tmp1143 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1142);
org$frostlang$frostc$Compiler$TypeContext* $tmp1144 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1145 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1146 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1144, $tmp1145, $tmp1146);
org$frostlang$frostc$IR$Value* $tmp1147 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1141, &$s1148, $tmp1143, $tmp1144);
frost$core$Bit $tmp1149 = frost$core$Bit$init$builtin_bit($tmp1147 != NULL);
bool $tmp1150 = $tmp1149.value;
if ($tmp1150) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1151 = (frost$core$Int64) {304};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1152, $tmp1151, &$s1153);
abort(); // unreachable
block51:;
org$frostlang$frostc$IR$Value* $tmp1154 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1147);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
org$frostlang$frostc$IR$Value* $tmp1155 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local26) = $tmp1154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// unreffing REF($884:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing REF($875:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing REF($873:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// unreffing REF($871:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
// unreffing REF($870:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 306
org$frostlang$frostc$IR* $tmp1156 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1157 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1158 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1159 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp1160 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1161 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1157, $tmp1158, param1, $tmp1159, $tmp1160, $tmp1161);
$fn1163 $tmp1162 = ($fn1163) $tmp1156->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1164 = $tmp1162($tmp1156, $tmp1157);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// unreffing REF($909:org.frostlang.frostc.IR.Statement)
// line 308
org$frostlang$frostc$IR* $tmp1165 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1166 = *(&local18);
$fn1168 $tmp1167 = ($fn1168) $tmp1165->$class->vtable[4];
$tmp1167($tmp1165, $tmp1166);
// line 309
org$frostlang$frostc$IR* $tmp1169 = *(&local0);
$fn1171 $tmp1170 = ($fn1171) $tmp1169->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1172 = $tmp1170($tmp1169, &$s1173);
*(&local27) = $tmp1172;
// line 310
org$frostlang$frostc$IR* $tmp1174 = *(&local0);
$fn1176 $tmp1175 = ($fn1176) $tmp1174->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1177 = $tmp1175($tmp1174, &$s1178);
*(&local28) = $tmp1177;
// line 311
org$frostlang$frostc$IR* $tmp1179 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1180 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1181 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1182 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1183 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1184 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1180, $tmp1181, param1, $tmp1182, $tmp1183, $tmp1184);
$fn1186 $tmp1185 = ($fn1186) $tmp1179->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1187 = $tmp1185($tmp1179, $tmp1180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
// unreffing REF($937:org.frostlang.frostc.IR.Statement)
// line 313
org$frostlang$frostc$IR* $tmp1188 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1189 = *(&local27);
$fn1191 $tmp1190 = ($fn1191) $tmp1188->$class->vtable[4];
$tmp1190($tmp1188, $tmp1189);
// line 314
org$frostlang$frostc$IR$Value* $tmp1192 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1193 = *(&local8);
frost$collections$ListView* $tmp1194 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1193);
org$frostlang$frostc$Compiler$TypeContext* $tmp1195 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1196 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1197 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1195, $tmp1196, $tmp1197);
org$frostlang$frostc$IR$Value* $tmp1198 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1192, &$s1199, $tmp1194, $tmp1195);
frost$core$Bit $tmp1200 = frost$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp1202 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1203, $tmp1202, &$s1204);
abort(); // unreachable
block53:;
org$frostlang$frostc$IR$Value* $tmp1205 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1198);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
org$frostlang$frostc$IR$Value* $tmp1206 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local29) = $tmp1205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
// unreffing REF($970:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// unreffing REF($961:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing REF($959:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
// unreffing REF($957:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
// unreffing REF($956:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 317
org$frostlang$frostc$IR* $tmp1207 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1208 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1209 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1210 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1211 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1212 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1208, $tmp1209, param1, $tmp1210, $tmp1211, $tmp1212);
$fn1214 $tmp1213 = ($fn1214) $tmp1207->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1215 = $tmp1213($tmp1207, $tmp1208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
// unreffing REF($995:org.frostlang.frostc.IR.Statement)
// line 319
org$frostlang$frostc$IR* $tmp1216 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1217 = *(&local28);
$fn1219 $tmp1218 = ($fn1219) $tmp1216->$class->vtable[4];
$tmp1218($tmp1216, $tmp1217);
// line 320
org$frostlang$frostc$IR$Value* $tmp1220 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1221 = *(&local8);
frost$collections$ListView* $tmp1222 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1221);
org$frostlang$frostc$Compiler$TypeContext* $tmp1223 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1224 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1225 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1223, $tmp1224, $tmp1225);
org$frostlang$frostc$IR$Value* $tmp1226 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1220, &$s1227, $tmp1222, $tmp1223);
frost$core$Bit $tmp1228 = frost$core$Bit$init$builtin_bit($tmp1226 != NULL);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp1230 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1231, $tmp1230, &$s1232);
abort(); // unreachable
block55:;
org$frostlang$frostc$IR$Value* $tmp1233 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1226);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
org$frostlang$frostc$IR$Value* $tmp1234 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local30) = $tmp1233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
// unreffing REF($1028:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// unreffing REF($1019:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing REF($1017:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// unreffing REF($1015:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
// unreffing REF($1014:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 323
org$frostlang$frostc$IR* $tmp1235 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1236 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1237 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp1239 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1240 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1236, $tmp1237, param1, $tmp1238, $tmp1239, $tmp1240);
$fn1242 $tmp1241 = ($fn1242) $tmp1235->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1243 = $tmp1241($tmp1235, $tmp1236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing REF($1053:org.frostlang.frostc.IR.Statement)
// line 325
org$frostlang$frostc$IR* $tmp1244 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1245 = *(&local14);
$fn1247 $tmp1246 = ($fn1247) $tmp1244->$class->vtable[4];
$tmp1246($tmp1244, $tmp1245);
// line 326
ITable* $tmp1248 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1248->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1248 = $tmp1248->next;
}
$fn1250 $tmp1249 = $tmp1248->methods[0];
frost$collections$Iterator* $tmp1251 = $tmp1249(((frost$collections$Iterable*) param5));
goto block57;
block57:;
ITable* $tmp1252 = $tmp1251->$class->itable;
while ($tmp1252->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1252 = $tmp1252->next;
}
$fn1254 $tmp1253 = $tmp1252->methods[0];
frost$core$Bit $tmp1255 = $tmp1253($tmp1251);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block59; else goto block58;
block58:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1257 = $tmp1251->$class->itable;
while ($tmp1257->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1257 = $tmp1257->next;
}
$fn1259 $tmp1258 = $tmp1257->methods[1];
frost$core$Object* $tmp1260 = $tmp1258($tmp1251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1260)));
org$frostlang$frostc$ASTNode* $tmp1261 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp1260);
// line 327
org$frostlang$frostc$ASTNode* $tmp1262 = *(&local31);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1262);
frost$core$Frost$unref$frost$core$Object$Q($tmp1260);
// unreffing REF($1084:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1263 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// unreffing s
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
// unreffing REF($1073:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$IR$Value* $tmp1264 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
// unreffing backwardEntryExclusiveTest
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1265 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
// unreffing backwardEntryInclusiveTest
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1266 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
// unreffing forwardEntryExclusiveTest
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1267 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing forwardEntryInclusiveTest
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1268 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
// unreffing scope
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 330
org$frostlang$frostc$IR* $tmp1269 = *(&local0);
$fn1271 $tmp1270 = ($fn1271) $tmp1269->$class->vtable[5];
frost$core$Bit $tmp1272 = $tmp1270($tmp1269);
frost$core$Bit $tmp1273 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1272);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block60; else goto block61;
block60:;
// line 331
org$frostlang$frostc$IR* $tmp1275 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1276 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1277 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1278 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1276, $tmp1277, param1, $tmp1278);
$fn1280 $tmp1279 = ($fn1280) $tmp1275->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1281 = $tmp1279($tmp1275, $tmp1276);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// unreffing REF($1141:org.frostlang.frostc.IR.Statement)
goto block61;
block61:;
// line 333
org$frostlang$frostc$IR* $tmp1282 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1283 = *(&local16);
$fn1285 $tmp1284 = ($fn1285) $tmp1282->$class->vtable[4];
$tmp1284($tmp1282, $tmp1283);
// line 334
org$frostlang$frostc$IR* $tmp1286 = *(&local0);
$fn1288 $tmp1287 = ($fn1288) $tmp1286->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1289 = $tmp1287($tmp1286, &$s1290);
*(&local32) = $tmp1289;
// line 336
org$frostlang$frostc$IR$Value* $tmp1291 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1292 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1293 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1294 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1295 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp1296 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1297 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1298 = *(&local1);
org$frostlang$frostc$Type* $tmp1299 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1296, $tmp1297, $tmp1298, $tmp1299);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1294, $tmp1295, param1, $tmp1296);
$fn1301 $tmp1300 = ($fn1301) $tmp1293->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1302 = $tmp1300($tmp1293, $tmp1294);
org$frostlang$frostc$Type* $tmp1303 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1291, $tmp1292, $tmp1302, $tmp1303);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
org$frostlang$frostc$IR$Value* $tmp1304 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local33) = $tmp1291;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
// unreffing REF($1167:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
// unreffing REF($1165:org.frostlang.frostc.IR.Statement)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// unreffing REF($1162:org.frostlang.frostc.IR.Value)
// line 338
org$frostlang$frostc$IR* $tmp1305 = *(&local0);
$fn1307 $tmp1306 = ($fn1307) $tmp1305->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1308 = $tmp1306($tmp1305, &$s1309);
*(&local34) = $tmp1308;
// line 339
org$frostlang$frostc$IR* $tmp1310 = *(&local0);
$fn1312 $tmp1311 = ($fn1312) $tmp1310->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1313 = $tmp1311($tmp1310, &$s1314);
*(&local35) = $tmp1313;
// line 340
org$frostlang$frostc$IR* $tmp1315 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1316 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1317 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1318 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1319 = *(&local34);
org$frostlang$frostc$IR$Block$ID $tmp1320 = *(&local35);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1316, $tmp1317, param1, $tmp1318, $tmp1319, $tmp1320);
$fn1322 $tmp1321 = ($fn1322) $tmp1315->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1323 = $tmp1321($tmp1315, $tmp1316);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
// unreffing REF($1205:org.frostlang.frostc.IR.Statement)
// line 344
org$frostlang$frostc$IR* $tmp1324 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1325 = *(&local34);
$fn1327 $tmp1326 = ($fn1327) $tmp1324->$class->vtable[4];
$tmp1326($tmp1324, $tmp1325);
// line 347
org$frostlang$frostc$IR$Value* $tmp1328 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1329 = *(&local33);
frost$collections$ListView* $tmp1330 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1329);
org$frostlang$frostc$Compiler$TypeContext* $tmp1331 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1332 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1331, $tmp1332);
org$frostlang$frostc$IR$Value* $tmp1333 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1328, &$s1334, $tmp1330, $tmp1331);
org$frostlang$frostc$Type* $tmp1335 = *(&local3);
org$frostlang$frostc$Type* $tmp1336 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1335);
org$frostlang$frostc$IR$Value* $tmp1337 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1333, $tmp1336);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
org$frostlang$frostc$IR$Value* $tmp1338 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local36) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
// unreffing REF($1231:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// unreffing REF($1230:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// unreffing REF($1228:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
// unreffing REF($1225:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing REF($1224:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 351
org$frostlang$frostc$IR* $tmp1339 = *(&local0);
$fn1341 $tmp1340 = ($fn1341) $tmp1339->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1342 = $tmp1340($tmp1339, &$s1343);
*(&local37) = $tmp1342;
// line 352
org$frostlang$frostc$IR* $tmp1344 = *(&local0);
$fn1346 $tmp1345 = ($fn1346) $tmp1344->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1347 = $tmp1345($tmp1344, &$s1348);
*(&local38) = $tmp1347;
// line 353
org$frostlang$frostc$IR* $tmp1349 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1350 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1351 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1352 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1353 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1354 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1350, $tmp1351, param1, $tmp1352, $tmp1353, $tmp1354);
$fn1356 $tmp1355 = ($fn1356) $tmp1349->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1357 = $tmp1355($tmp1349, $tmp1350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
// unreffing REF($1266:org.frostlang.frostc.IR.Statement)
// line 357
org$frostlang$frostc$IR* $tmp1358 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1359 = *(&local37);
$fn1361 $tmp1360 = ($fn1361) $tmp1358->$class->vtable[4];
$tmp1360($tmp1358, $tmp1359);
// line 358
org$frostlang$frostc$IR$Value* $tmp1362 = *(&local36);
frost$core$Bit $tmp1363 = frost$core$Bit$init$builtin_bit($tmp1362 != NULL);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp1365 = (frost$core$Int64) {359};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1366, $tmp1365, &$s1367);
abort(); // unreachable
block62:;
org$frostlang$frostc$IR$Value* $tmp1368 = *(&local10);
frost$collections$ListView* $tmp1369 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1368);
org$frostlang$frostc$Compiler$TypeContext* $tmp1370 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1371 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1372 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1370, $tmp1371, $tmp1372);
org$frostlang$frostc$IR$Value* $tmp1373 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1362, &$s1374, $tmp1369, $tmp1370);
frost$core$Bit $tmp1375 = frost$core$Bit$init$builtin_bit($tmp1373 != NULL);
bool $tmp1376 = $tmp1375.value;
if ($tmp1376) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1377 = (frost$core$Int64) {358};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1378, $tmp1377, &$s1379);
abort(); // unreachable
block64:;
org$frostlang$frostc$IR$Value* $tmp1380 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1373);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
org$frostlang$frostc$IR$Value* $tmp1381 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
*(&local39) = $tmp1380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
// unreffing REF($1307:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
// unreffing REF($1298:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
// unreffing REF($1296:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing REF($1294:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// unreffing REF($1293:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 360
org$frostlang$frostc$IR* $tmp1382 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1383 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1384 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1385 = *(&local39);
org$frostlang$frostc$IR$Block$ID $tmp1386 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1387 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1383, $tmp1384, param1, $tmp1385, $tmp1386, $tmp1387);
$fn1389 $tmp1388 = ($fn1389) $tmp1382->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1390 = $tmp1388($tmp1382, $tmp1383);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
// unreffing REF($1332:org.frostlang.frostc.IR.Statement)
// line 363
org$frostlang$frostc$IR* $tmp1391 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1392 = *(&local38);
$fn1394 $tmp1393 = ($fn1394) $tmp1391->$class->vtable[4];
$tmp1393($tmp1391, $tmp1392);
// line 364
org$frostlang$frostc$IR$Value* $tmp1395 = *(&local36);
frost$core$Bit $tmp1396 = frost$core$Bit$init$builtin_bit($tmp1395 != NULL);
bool $tmp1397 = $tmp1396.value;
if ($tmp1397) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp1398 = (frost$core$Int64) {365};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1399, $tmp1398, &$s1400);
abort(); // unreachable
block66:;
org$frostlang$frostc$IR$Value* $tmp1401 = *(&local10);
frost$collections$ListView* $tmp1402 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1401);
org$frostlang$frostc$Compiler$TypeContext* $tmp1403 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1404 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1405 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1403, $tmp1404, $tmp1405);
org$frostlang$frostc$IR$Value* $tmp1406 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1395, &$s1407, $tmp1402, $tmp1403);
frost$core$Bit $tmp1408 = frost$core$Bit$init$builtin_bit($tmp1406 != NULL);
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block68; else goto block69;
block69:;
frost$core$Int64 $tmp1410 = (frost$core$Int64) {364};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1411, $tmp1410, &$s1412);
abort(); // unreachable
block68:;
org$frostlang$frostc$IR$Value* $tmp1413 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1406);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
org$frostlang$frostc$IR$Value* $tmp1414 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local40) = $tmp1413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// unreffing REF($1373:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
// unreffing REF($1364:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
// unreffing REF($1362:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
// unreffing REF($1360:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
// unreffing REF($1359:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 366
org$frostlang$frostc$IR* $tmp1415 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1416 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1417 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1418 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1419 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1420 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1416, $tmp1417, param1, $tmp1418, $tmp1419, $tmp1420);
$fn1422 $tmp1421 = ($fn1422) $tmp1415->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1423 = $tmp1421($tmp1415, $tmp1416);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// unreffing REF($1398:org.frostlang.frostc.IR.Statement)
// line 370
org$frostlang$frostc$IR* $tmp1424 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1425 = *(&local35);
$fn1427 $tmp1426 = ($fn1427) $tmp1424->$class->vtable[4];
$tmp1426($tmp1424, $tmp1425);
// line 371
org$frostlang$frostc$IR$Value* $tmp1428 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1429 = *(&local8);
frost$collections$ListView* $tmp1430 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1429);
org$frostlang$frostc$Compiler$TypeContext* $tmp1431 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1432 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1431, $tmp1432);
org$frostlang$frostc$IR$Value* $tmp1433 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1428, &$s1434, $tmp1430, $tmp1431);
org$frostlang$frostc$Type* $tmp1435 = *(&local3);
org$frostlang$frostc$Type* $tmp1436 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1435);
org$frostlang$frostc$IR$Value* $tmp1437 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1433, $tmp1436);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
org$frostlang$frostc$IR$Value* $tmp1438 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local41) = $tmp1437;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
// unreffing REF($1424:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// unreffing REF($1423:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// unreffing REF($1421:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// unreffing REF($1418:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
// unreffing REF($1417:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 375
org$frostlang$frostc$IR* $tmp1439 = *(&local0);
$fn1441 $tmp1440 = ($fn1441) $tmp1439->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1442 = $tmp1440($tmp1439, &$s1443);
*(&local42) = $tmp1442;
// line 376
org$frostlang$frostc$IR* $tmp1444 = *(&local0);
$fn1446 $tmp1445 = ($fn1446) $tmp1444->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1447 = $tmp1445($tmp1444, &$s1448);
*(&local43) = $tmp1447;
// line 377
org$frostlang$frostc$IR* $tmp1449 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1450 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1451 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1452 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1453 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1454 = *(&local43);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1450, $tmp1451, param1, $tmp1452, $tmp1453, $tmp1454);
$fn1456 $tmp1455 = ($fn1456) $tmp1449->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1457 = $tmp1455($tmp1449, $tmp1450);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
// unreffing REF($1459:org.frostlang.frostc.IR.Statement)
// line 381
org$frostlang$frostc$IR* $tmp1458 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1459 = *(&local42);
$fn1461 $tmp1460 = ($fn1461) $tmp1458->$class->vtable[4];
$tmp1460($tmp1458, $tmp1459);
// line 382
org$frostlang$frostc$IR$Value* $tmp1462 = *(&local41);
frost$core$Bit $tmp1463 = frost$core$Bit$init$builtin_bit($tmp1462 != NULL);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp1465 = (frost$core$Int64) {383};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1466, $tmp1465, &$s1467);
abort(); // unreachable
block70:;
org$frostlang$frostc$IR$Value* $tmp1468 = *(&local12);
frost$collections$ListView* $tmp1469 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1468);
org$frostlang$frostc$Compiler$TypeContext* $tmp1470 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1471 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1472 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1470, $tmp1471, $tmp1472);
org$frostlang$frostc$IR$Value* $tmp1473 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1462, &$s1474, $tmp1469, $tmp1470);
frost$core$Bit $tmp1475 = frost$core$Bit$init$builtin_bit($tmp1473 != NULL);
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp1477 = (frost$core$Int64) {382};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1478, $tmp1477, &$s1479);
abort(); // unreachable
block72:;
org$frostlang$frostc$IR$Value* $tmp1480 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1473);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
org$frostlang$frostc$IR$Value* $tmp1481 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1481));
*(&local44) = $tmp1480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// unreffing REF($1500:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
// unreffing REF($1491:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// unreffing REF($1489:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
// unreffing REF($1487:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
// unreffing REF($1486:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 385
org$frostlang$frostc$IR* $tmp1482 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1483 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1484 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1485 = *(&local44);
org$frostlang$frostc$IR$Block$ID $tmp1486 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1487 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1483, $tmp1484, param1, $tmp1485, $tmp1486, $tmp1487);
$fn1489 $tmp1488 = ($fn1489) $tmp1482->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1490 = $tmp1488($tmp1482, $tmp1483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
// unreffing REF($1525:org.frostlang.frostc.IR.Statement)
// line 389
org$frostlang$frostc$IR* $tmp1491 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1492 = *(&local43);
$fn1494 $tmp1493 = ($fn1494) $tmp1491->$class->vtable[4];
$tmp1493($tmp1491, $tmp1492);
// line 390
org$frostlang$frostc$IR$Value* $tmp1495 = *(&local41);
frost$core$Bit $tmp1496 = frost$core$Bit$init$builtin_bit($tmp1495 != NULL);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp1498 = (frost$core$Int64) {391};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1499, $tmp1498, &$s1500);
abort(); // unreachable
block74:;
org$frostlang$frostc$IR$Value* $tmp1501 = *(&local12);
frost$collections$ListView* $tmp1502 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1501);
org$frostlang$frostc$Compiler$TypeContext* $tmp1503 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1504 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1505 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1503, $tmp1504, $tmp1505);
org$frostlang$frostc$IR$Value* $tmp1506 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1495, &$s1507, $tmp1502, $tmp1503);
frost$core$Bit $tmp1508 = frost$core$Bit$init$builtin_bit($tmp1506 != NULL);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block76; else goto block77;
block77:;
frost$core$Int64 $tmp1510 = (frost$core$Int64) {390};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1511, $tmp1510, &$s1512);
abort(); // unreachable
block76:;
org$frostlang$frostc$IR$Value* $tmp1513 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1506);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
org$frostlang$frostc$IR$Value* $tmp1514 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local45) = $tmp1513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
// unreffing REF($1566:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
// unreffing REF($1557:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
// unreffing REF($1555:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
// unreffing REF($1553:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// unreffing REF($1552:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 392
org$frostlang$frostc$IR* $tmp1515 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1516 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1517 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1518 = *(&local45);
org$frostlang$frostc$IR$Block$ID $tmp1519 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1520 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1516, $tmp1517, param1, $tmp1518, $tmp1519, $tmp1520);
$fn1522 $tmp1521 = ($fn1522) $tmp1515->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1523 = $tmp1521($tmp1515, $tmp1516);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
// unreffing REF($1591:org.frostlang.frostc.IR.Statement)
// line 395
org$frostlang$frostc$IR* $tmp1524 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1525 = *(&local32);
$fn1527 $tmp1526 = ($fn1527) $tmp1524->$class->vtable[4];
$tmp1526($tmp1524, $tmp1525);
// line 396
org$frostlang$frostc$IR$Value* $tmp1528 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1529 = *(&local9);
frost$collections$ListView* $tmp1530 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1529);
org$frostlang$frostc$Compiler$TypeContext* $tmp1531 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1532 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1531, $tmp1532);
org$frostlang$frostc$IR$Value* $tmp1533 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1528, &$s1534, $tmp1530, $tmp1531);
org$frostlang$frostc$Type* $tmp1535 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp1536 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1533, $tmp1535);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
org$frostlang$frostc$IR$Value* $tmp1537 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local46) = $tmp1536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
// unreffing REF($1616:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
// unreffing REF($1614:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
// unreffing REF($1611:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
// unreffing REF($1610:frost.collections.ListView<org.frostlang.frostc.ASTNode>)
// line 398
org$frostlang$frostc$IR* $tmp1538 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1539 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1540 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp1541 = *(&local46);
frost$core$Bit $tmp1542 = frost$core$Bit$init$builtin_bit($tmp1541 != NULL);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block78; else goto block79;
block79:;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {398};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1545, $tmp1544, &$s1546);
abort(); // unreachable
block78:;
org$frostlang$frostc$IR$Value* $tmp1547 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1548 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1549 = *(&local1);
org$frostlang$frostc$Type* $tmp1550 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1547, $tmp1548, $tmp1549, $tmp1550);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1539, $tmp1540, param1, $tmp1541, $tmp1547);
$fn1552 $tmp1551 = ($fn1552) $tmp1538->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1553 = $tmp1551($tmp1538, $tmp1539);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
// unreffing REF($1649:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
// unreffing REF($1638:org.frostlang.frostc.IR.Statement)
// line 399
org$frostlang$frostc$IR* $tmp1554 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1555 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1556 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1557 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1555, $tmp1556, param1, $tmp1557);
$fn1559 $tmp1558 = ($fn1559) $tmp1554->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1560 = $tmp1558($tmp1554, $tmp1555);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
// unreffing REF($1665:org.frostlang.frostc.IR.Statement)
// line 401
org$frostlang$frostc$IR* $tmp1561 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1562 = *(&local15);
$fn1564 $tmp1563 = ($fn1564) $tmp1561->$class->vtable[4];
$tmp1563($tmp1561, $tmp1562);
org$frostlang$frostc$IR$Value* $tmp1565 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// unreffing inc
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1566 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing backwardExclusiveTestBit
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1567 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
// unreffing backwardInclusiveTestBit
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1568 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
// unreffing backwardDelta
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1569 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
// unreffing forwardExclusiveTestBit
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1570 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
// unreffing forwardInclusiveTestBit
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1571 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
// unreffing forwardDelta
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1572 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
// unreffing indexLoad
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1573 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
// unreffing context
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1574 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
// unreffing direction
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1575 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// unreffing inclusive
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1576 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
// unreffing negStepComparison
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1577 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
// unreffing negStep
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1578 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
// unreffing stepComparison
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1579 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
// unreffing step
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1580 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
// unreffing end
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1581 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
// unreffing start
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1582 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
// unreffing rangeFields
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1583 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
// unreffing rangeClass
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1584 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
// unreffing stepType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1585 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
// unreffing indexType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1586 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
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
// line 408
org$frostlang$frostc$IR** $tmp1587 = &param0->ir;
org$frostlang$frostc$IR* $tmp1588 = *$tmp1587;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
org$frostlang$frostc$IR* $tmp1589 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
*(&local0) = $tmp1588;
// line 409
$fn1591 $tmp1590 = ($fn1591) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1592 = $tmp1590(param4);
frost$core$Bit $tmp1593 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1592);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1593;
goto block3;
block2:;
$fn1596 $tmp1595 = ($fn1596) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1597 = $tmp1595(param4);
frost$core$Bit $tmp1598 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1597);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// unreffing REF($19:org.frostlang.frostc.Type)
*(&local1) = $tmp1598;
goto block3;
block3:;
frost$core$Bit $tmp1599 = *(&local1);
bool $tmp1600 = $tmp1599.value;
if ($tmp1600) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1601 = (frost$core$Int64) {409};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1602, $tmp1601);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 410
$fn1604 $tmp1603 = ($fn1604) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1605 = $tmp1603(param4);
frost$core$Bit $tmp1606 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp1605);
frost$core$Bit $tmp1607 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1606);
bool $tmp1608 = $tmp1607.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
// unreffing REF($37:org.frostlang.frostc.Type)
if ($tmp1608) goto block6; else goto block7;
block6:;
// line 411
org$frostlang$frostc$IR* $tmp1609 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 413
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 414
$fn1611 $tmp1610 = ($fn1611) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1612 = $tmp1610(param4);
org$frostlang$frostc$Type$Kind* $tmp1613 = &$tmp1612->typeKind;
org$frostlang$frostc$Type$Kind $tmp1614 = *$tmp1613;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1615;
$tmp1615 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1615->value = $tmp1614;
frost$core$Int64 $tmp1616 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1617 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1616);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1618;
$tmp1618 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1618->value = $tmp1617;
ITable* $tmp1619 = ((frost$core$Equatable*) $tmp1615)->$class->itable;
while ($tmp1619->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1619 = $tmp1619->next;
}
$fn1621 $tmp1620 = $tmp1619->methods[0];
frost$core$Bit $tmp1622 = $tmp1620(((frost$core$Equatable*) $tmp1615), ((frost$core$Equatable*) $tmp1618));
bool $tmp1623 = $tmp1622.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1618)));
// unreffing REF($63:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1615)));
// unreffing REF($59:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
// unreffing REF($56:org.frostlang.frostc.Type)
if ($tmp1623) goto block8; else goto block10;
block8:;
// line 415
$fn1625 $tmp1624 = ($fn1625) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1626 = $tmp1624(param4);
org$frostlang$frostc$FixedArray** $tmp1627 = &$tmp1626->subtypes;
org$frostlang$frostc$FixedArray* $tmp1628 = *$tmp1627;
frost$core$Bit $tmp1629 = frost$core$Bit$init$builtin_bit($tmp1628 != NULL);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1631 = (frost$core$Int64) {415};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1632, $tmp1631, &$s1633);
abort(); // unreachable
block11:;
frost$core$Int64 $tmp1634 = (frost$core$Int64) {0};
frost$core$Object* $tmp1635 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1628, $tmp1634);
org$frostlang$frostc$Type$Kind* $tmp1636 = &((org$frostlang$frostc$Type*) $tmp1635)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1637 = *$tmp1636;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1638;
$tmp1638 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1638->value = $tmp1637;
frost$core$Int64 $tmp1639 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1640 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1639);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1641;
$tmp1641 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1641->value = $tmp1640;
ITable* $tmp1642 = ((frost$core$Equatable*) $tmp1638)->$class->itable;
while ($tmp1642->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1642 = $tmp1642->next;
}
$fn1644 $tmp1643 = $tmp1642->methods[0];
frost$core$Bit $tmp1645 = $tmp1643(((frost$core$Equatable*) $tmp1638), ((frost$core$Equatable*) $tmp1641));
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1647 = (frost$core$Int64) {415};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1648, $tmp1647);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1641)));
// unreffing REF($100:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1638)));
// unreffing REF($96:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1635);
// unreffing REF($92:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
// unreffing REF($79:org.frostlang.frostc.Type)
// line 416
$fn1650 $tmp1649 = ($fn1650) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1651 = $tmp1649(param4);
org$frostlang$frostc$FixedArray** $tmp1652 = &$tmp1651->subtypes;
org$frostlang$frostc$FixedArray* $tmp1653 = *$tmp1652;
frost$core$Bit $tmp1654 = frost$core$Bit$init$builtin_bit($tmp1653 != NULL);
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1656 = (frost$core$Int64) {416};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1657, $tmp1656, &$s1658);
abort(); // unreachable
block15:;
frost$core$Int64 $tmp1659 = (frost$core$Int64) {0};
frost$core$Object* $tmp1660 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1653, $tmp1659);
org$frostlang$frostc$FixedArray** $tmp1661 = &((org$frostlang$frostc$Type*) $tmp1660)->subtypes;
org$frostlang$frostc$FixedArray* $tmp1662 = *$tmp1661;
frost$core$Bit $tmp1663 = frost$core$Bit$init$builtin_bit($tmp1662 != NULL);
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1665 = (frost$core$Int64) {416};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1666, $tmp1665, &$s1667);
abort(); // unreachable
block17:;
frost$core$Int64 $tmp1668 = (frost$core$Int64) {1};
frost$core$Object* $tmp1669 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1662, $tmp1668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1669)));
org$frostlang$frostc$Type* $tmp1670 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1669);
frost$core$Frost$unref$frost$core$Object$Q($tmp1669);
// unreffing REF($149:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1660);
// unreffing REF($135:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
// unreffing REF($122:org.frostlang.frostc.Type)
goto block9;
block10:;
// line 1
// line 419
$fn1672 $tmp1671 = ($fn1672) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1673 = $tmp1671(param4);
org$frostlang$frostc$Type$Kind* $tmp1674 = &$tmp1673->typeKind;
org$frostlang$frostc$Type$Kind $tmp1675 = *$tmp1674;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1676;
$tmp1676 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1676->value = $tmp1675;
frost$core$Int64 $tmp1677 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1678 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1677);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1679;
$tmp1679 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1679->value = $tmp1678;
ITable* $tmp1680 = ((frost$core$Equatable*) $tmp1676)->$class->itable;
while ($tmp1680->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1680 = $tmp1680->next;
}
$fn1682 $tmp1681 = $tmp1680->methods[0];
frost$core$Bit $tmp1683 = $tmp1681(((frost$core$Equatable*) $tmp1676), ((frost$core$Equatable*) $tmp1679));
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {419};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1686, $tmp1685);
abort(); // unreachable
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1679)));
// unreffing REF($177:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1676)));
// unreffing REF($173:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
// unreffing REF($170:org.frostlang.frostc.Type)
// line 420
$fn1688 $tmp1687 = ($fn1688) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1689 = $tmp1687(param4);
org$frostlang$frostc$FixedArray** $tmp1690 = &$tmp1689->subtypes;
org$frostlang$frostc$FixedArray* $tmp1691 = *$tmp1690;
frost$core$Bit $tmp1692 = frost$core$Bit$init$builtin_bit($tmp1691 != NULL);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp1694 = (frost$core$Int64) {420};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1695, $tmp1694, &$s1696);
abort(); // unreachable
block21:;
frost$core$Int64 $tmp1697 = (frost$core$Int64) {1};
frost$core$Object* $tmp1698 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1691, $tmp1697);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1698)));
org$frostlang$frostc$Type* $tmp1699 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1698);
frost$core$Frost$unref$frost$core$Object$Q($tmp1698);
// unreffing REF($209:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
// unreffing REF($196:org.frostlang.frostc.Type)
goto block9;
block9:;
// line 422
org$frostlang$frostc$Type* $tmp1700 = *(&local2);
frost$core$Bit $tmp1701 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1700);
frost$core$Bit $tmp1702 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1701);
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block23; else goto block24;
block23:;
// line 423
$fn1705 $tmp1704 = ($fn1705) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1706 = $tmp1704(param4);
frost$core$String* $tmp1707 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1708, ((frost$core$Object*) $tmp1706));
frost$core$String* $tmp1709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1707, &$s1710);
frost$core$String* $tmp1711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1712, $tmp1709);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1711);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
// unreffing REF($236:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
// unreffing REF($235:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// unreffing REF($232:org.frostlang.frostc.Type)
// line 425
org$frostlang$frostc$Type* $tmp1713 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
// unreffing elementType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1714 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block24:;
// line 427
org$frostlang$frostc$Compiler$AutoScope* $tmp1715 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1715, param0);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
org$frostlang$frostc$Compiler$AutoScope* $tmp1716 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local3) = $tmp1715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
// unreffing REF($263:org.frostlang.frostc.Compiler.AutoScope)
// line 428
frost$core$Int64 $tmp1717 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1718 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1717);
org$frostlang$frostc$Type* $tmp1719 = *(&local2);
org$frostlang$frostc$Type* $tmp1720 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1719);
org$frostlang$frostc$Pair* $tmp1721 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1718, ((org$frostlang$frostc$ASTNode*) NULL), $tmp1720);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
org$frostlang$frostc$Pair* $tmp1722 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
*(&local4) = $tmp1721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// unreffing REF($281:org.frostlang.frostc.Pair<org.frostlang.frostc.Variable, org.frostlang.frostc.IR.Value?>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
// unreffing REF($279:org.frostlang.frostc.Type)
// line 430
org$frostlang$frostc$Pair* $tmp1723 = *(&local4);
frost$core$Bit $tmp1724 = frost$core$Bit$init$builtin_bit($tmp1723 == NULL);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block25; else goto block26;
block25:;
// line 431
org$frostlang$frostc$Pair* $tmp1726 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
// unreffing target
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1727 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
// unreffing scope
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1728 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
// unreffing elementType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1729 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block26:;
// line 433
org$frostlang$frostc$Pair* $tmp1730 = *(&local4);
frost$core$Bit $tmp1731 = frost$core$Bit$init$builtin_bit($tmp1730 != NULL);
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1733 = (frost$core$Int64) {433};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1734, $tmp1733, &$s1735);
abort(); // unreachable
block27:;
frost$core$Object** $tmp1736 = &$tmp1730->second;
frost$core$Object* $tmp1737 = *$tmp1736;
frost$core$Bit $tmp1738 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp1737) == NULL);
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp1740 = (frost$core$Int64) {433};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1741, $tmp1740);
abort(); // unreachable
block29:;
// line 434
org$frostlang$frostc$Pair* $tmp1742 = *(&local4);
frost$core$Bit $tmp1743 = frost$core$Bit$init$builtin_bit($tmp1742 != NULL);
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {434};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1746, $tmp1745, &$s1747);
abort(); // unreachable
block33:;
frost$core$Object** $tmp1748 = &$tmp1742->first;
frost$core$Object* $tmp1749 = *$tmp1748;
org$frostlang$frostc$Type** $tmp1750 = &((org$frostlang$frostc$Variable*) $tmp1749)->type;
org$frostlang$frostc$Type* $tmp1751 = *$tmp1750;
frost$core$Bit $tmp1752 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1751);
bool $tmp1753 = $tmp1752.value;
if ($tmp1753) goto block31; else goto block32;
block31:;
// line 435
frost$collections$Stack** $tmp1754 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1755 = *$tmp1754;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1756 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1757 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1758 = *(&local4);
frost$core$Bit $tmp1759 = frost$core$Bit$init$builtin_bit($tmp1758 != NULL);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp1761 = (frost$core$Int64) {435};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1762, $tmp1761, &$s1763);
abort(); // unreachable
block35:;
frost$core$Object** $tmp1764 = &$tmp1758->first;
frost$core$Object* $tmp1765 = *$tmp1764;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1756, $tmp1757, ((org$frostlang$frostc$Variable*) $tmp1765));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1755, ((frost$core$Object*) $tmp1756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
// unreffing REF($365:org.frostlang.frostc.Compiler.EnclosingContext)
goto block32;
block32:;
// line 437
$fn1767 $tmp1766 = ($fn1767) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1768 = $tmp1766(param4);
frost$core$Bit $tmp1769 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1768);
bool $tmp1770 = $tmp1769.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
// unreffing REF($388:org.frostlang.frostc.Type)
if ($tmp1770) goto block37; else goto block39;
block37:;
// line 438
org$frostlang$frostc$Pair* $tmp1771 = *(&local4);
frost$core$Bit $tmp1772 = frost$core$Bit$init$builtin_bit($tmp1771 != NULL);
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {438};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1775, $tmp1774, &$s1776);
abort(); // unreachable
block40:;
frost$core$Object** $tmp1777 = &$tmp1771->first;
frost$core$Object* $tmp1778 = *$tmp1777;
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1778), param4, param5);
goto block38;
block39:;
// line 1
// line 441
org$frostlang$frostc$Pair* $tmp1779 = *(&local4);
frost$core$Bit $tmp1780 = frost$core$Bit$init$builtin_bit($tmp1779 != NULL);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1782 = (frost$core$Int64) {441};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1783, $tmp1782, &$s1784);
abort(); // unreachable
block42:;
frost$core$Object** $tmp1785 = &$tmp1779->first;
frost$core$Object* $tmp1786 = *$tmp1785;
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1786), param4, param5);
goto block38;
block38:;
org$frostlang$frostc$Pair* $tmp1787 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
// unreffing target
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1788 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
// unreffing scope
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1789 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
// unreffing elementType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1790 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
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
// line 449
org$frostlang$frostc$IR** $tmp1791 = &param0->ir;
org$frostlang$frostc$IR* $tmp1792 = *$tmp1791;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
org$frostlang$frostc$IR* $tmp1793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local0) = $tmp1792;
// line 450
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 451
frost$core$Int64* $tmp1794 = &param3->$rawValue;
frost$core$Int64 $tmp1795 = *$tmp1794;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {48};
frost$core$Bit $tmp1797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1795, $tmp1796);
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1799 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1800 = *$tmp1799;
*(&local2) = $tmp1800;
frost$core$String** $tmp1801 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1802 = *$tmp1801;
org$frostlang$frostc$ASTNode** $tmp1803 = (org$frostlang$frostc$ASTNode**) (param3->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1804 = *$tmp1803;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
org$frostlang$frostc$ASTNode* $tmp1805 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local3) = $tmp1804;
// line 453
org$frostlang$frostc$Scanner** $tmp1806 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1807 = *$tmp1806;
org$frostlang$frostc$ASTNode* $tmp1808 = *(&local3);
frost$core$Bit $tmp1809 = frost$core$Bit$init$builtin_bit($tmp1808 != NULL);
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1811 = (frost$core$Int64) {453};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1812, $tmp1811, &$s1813);
abort(); // unreachable
block4:;
org$frostlang$frostc$Type* $tmp1814 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1807, $tmp1808);
org$frostlang$frostc$Type* $tmp1815 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1814);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
org$frostlang$frostc$Type* $tmp1816 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local4) = $tmp1815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
// unreffing REF($46:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
// unreffing REF($45:org.frostlang.frostc.Type)
// line 454
org$frostlang$frostc$Type* $tmp1817 = *(&local4);
frost$core$Bit $tmp1818 = frost$core$Bit$init$builtin_bit($tmp1817 != NULL);
bool $tmp1819 = $tmp1818.value;
if ($tmp1819) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1820 = (frost$core$Int64) {454};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1821, $tmp1820, &$s1822);
abort(); // unreachable
block8:;
org$frostlang$frostc$Type$Kind* $tmp1823 = &$tmp1817->typeKind;
org$frostlang$frostc$Type$Kind $tmp1824 = *$tmp1823;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1825;
$tmp1825 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1825->value = $tmp1824;
frost$core$Int64 $tmp1826 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1827 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1826);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1828;
$tmp1828 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1828->value = $tmp1827;
ITable* $tmp1829 = ((frost$core$Equatable*) $tmp1825)->$class->itable;
while ($tmp1829->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1829 = $tmp1829->next;
}
$fn1831 $tmp1830 = $tmp1829->methods[0];
frost$core$Bit $tmp1832 = $tmp1830(((frost$core$Equatable*) $tmp1825), ((frost$core$Equatable*) $tmp1828));
bool $tmp1833 = $tmp1832.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1828)));
// unreffing REF($76:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1825)));
// unreffing REF($72:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1833) goto block6; else goto block7;
block6:;
// line 455
org$frostlang$frostc$Position $tmp1834 = *(&local2);
org$frostlang$frostc$Type* $tmp1835 = *(&local4);
frost$core$Bit $tmp1836 = frost$core$Bit$init$builtin_bit($tmp1835 != NULL);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {455};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1839, $tmp1838, &$s1840);
abort(); // unreachable
block10:;
frost$core$String* $tmp1841 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1842, ((frost$core$Object*) $tmp1835));
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1841, &$s1844);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1834, $tmp1843);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
// unreffing REF($99:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
// unreffing REF($98:frost.core.String)
// line 456
org$frostlang$frostc$Type* $tmp1845 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
// unreffing t
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1846 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// unreffing type
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1848 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 458
org$frostlang$frostc$Type* $tmp1849 = *(&local4);
frost$core$Bit $tmp1850 = frost$core$Bit$init$builtin_bit($tmp1849 != NULL);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1852 = (frost$core$Int64) {458};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1853, $tmp1852, &$s1854);
abort(); // unreachable
block14:;
frost$core$Bit $tmp1855 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1849);
frost$core$Bit $tmp1856 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1855);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block12; else goto block13;
block12:;
// line 459
org$frostlang$frostc$Position $tmp1858 = *(&local2);
org$frostlang$frostc$Type* $tmp1859 = *(&local4);
frost$core$Bit $tmp1860 = frost$core$Bit$init$builtin_bit($tmp1859 != NULL);
bool $tmp1861 = $tmp1860.value;
if ($tmp1861) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp1862 = (frost$core$Int64) {460};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1863, $tmp1862, &$s1864);
abort(); // unreachable
block16:;
frost$core$String* $tmp1865 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1866, ((frost$core$Object*) $tmp1859));
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1865, &$s1868);
frost$core$String* $tmp1869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1870, $tmp1867);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1858, $tmp1869);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
// unreffing REF($156:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
// unreffing REF($154:frost.core.String)
// line 461
org$frostlang$frostc$Type* $tmp1871 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
// unreffing t
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1872 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
// unreffing type
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1874 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 463
frost$core$Int64* $tmp1875 = &param4->$rawValue;
frost$core$Int64 $tmp1876 = *$tmp1875;
frost$core$Int64 $tmp1877 = (frost$core$Int64) {36};
frost$core$Bit $tmp1878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1876, $tmp1877);
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp1880 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1881 = *$tmp1880;
org$frostlang$frostc$ASTNode** $tmp1882 = (org$frostlang$frostc$ASTNode**) (param4->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1883 = *$tmp1882;
frost$core$Bit* $tmp1884 = (frost$core$Bit*) (param4->$data + 24);
frost$core$Bit $tmp1885 = *$tmp1884;
org$frostlang$frostc$ASTNode** $tmp1886 = (org$frostlang$frostc$ASTNode**) (param4->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1887 = *$tmp1886;
org$frostlang$frostc$ASTNode** $tmp1888 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1889 = *$tmp1888;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
org$frostlang$frostc$ASTNode* $tmp1890 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local5) = $tmp1889;
// line 465
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 466
org$frostlang$frostc$ASTNode* $tmp1891 = *(&local5);
frost$core$Bit $tmp1892 = frost$core$Bit$init$builtin_bit($tmp1891 != NULL);
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block21; else goto block23;
block21:;
// line 467
org$frostlang$frostc$Type* $tmp1894 = *(&local4);
frost$core$Bit $tmp1895 = frost$core$Bit$init$builtin_bit($tmp1894 != NULL);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1897 = (frost$core$Int64) {467};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1898, $tmp1897, &$s1899);
abort(); // unreachable
block24:;
org$frostlang$frostc$Type* $tmp1900 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
org$frostlang$frostc$Type* $tmp1901 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local6) = $tmp1900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
// unreffing REF($231:org.frostlang.frostc.Type)
goto block22;
block23:;
// line 1
// line 470
org$frostlang$frostc$Type* $tmp1902 = *(&local4);
frost$core$Bit $tmp1903 = frost$core$Bit$init$builtin_bit($tmp1902 != NULL);
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1905 = (frost$core$Int64) {470};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1906, $tmp1905, &$s1907);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type* $tmp1908 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
org$frostlang$frostc$Type* $tmp1909 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
*(&local6) = $tmp1908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
// unreffing REF($253:org.frostlang.frostc.Type)
goto block22;
block22:;
// line 472
org$frostlang$frostc$Compiler$TypeContext* $tmp1910 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1911 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1912 = *(&local6);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1910, $tmp1911, $tmp1912);
org$frostlang$frostc$IR$Value* $tmp1913 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1910);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
org$frostlang$frostc$IR$Value* $tmp1914 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
*(&local1) = $tmp1913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
// unreffing REF($269:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
// unreffing REF($265:org.frostlang.frostc.Compiler.TypeContext)
org$frostlang$frostc$Type* $tmp1915 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
// unreffing type
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1916 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
// unreffing step
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
// line 475
frost$core$Bit $tmp1917 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1919 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1920, $tmp1919);
abort(); // unreachable
block28:;
goto block18;
block18:;
org$frostlang$frostc$Type* $tmp1921 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
// unreffing t
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1922 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
// unreffing type
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 480
org$frostlang$frostc$Type* $tmp1923 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
org$frostlang$frostc$Type* $tmp1924 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
*(&local7) = $tmp1923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
// unreffing REF($313:org.frostlang.frostc.Type?)
// line 481
org$frostlang$frostc$Compiler$TypeContext* $tmp1925 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1926 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1925, $tmp1926);
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
org$frostlang$frostc$Compiler$TypeContext* $tmp1927 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local8) = $tmp1925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
// unreffing REF($325:org.frostlang.frostc.Compiler.TypeContext)
// line 482
org$frostlang$frostc$Type* $tmp1928 = *(&local7);
frost$core$Bit $tmp1929 = frost$core$Bit$init$builtin_bit($tmp1928 != NULL);
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Type* $tmp1931 = *(&local7);
frost$core$Bit $tmp1932 = frost$core$Bit$init$builtin_bit($tmp1931 != NULL);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp1934 = (frost$core$Int64) {482};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1935, $tmp1934, &$s1936);
abort(); // unreachable
block35:;
frost$core$Bit $tmp1937 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1931);
*(&local9) = $tmp1937;
goto block34;
block33:;
*(&local9) = $tmp1929;
goto block34;
block34:;
frost$core$Bit $tmp1938 = *(&local9);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block30; else goto block37;
block30:;
// line 483
org$frostlang$frostc$Compiler$TypeContext* $tmp1940 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1941 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1942 = *(&local7);
frost$core$Bit $tmp1943 = frost$core$Bit$init$builtin_bit($tmp1942 != NULL);
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1945 = (frost$core$Int64) {483};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1946, $tmp1945, &$s1947);
abort(); // unreachable
block38:;
org$frostlang$frostc$FixedArray** $tmp1948 = &$tmp1942->subtypes;
org$frostlang$frostc$FixedArray* $tmp1949 = *$tmp1948;
frost$core$Bit $tmp1950 = frost$core$Bit$init$builtin_bit($tmp1949 != NULL);
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1952 = (frost$core$Int64) {483};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1953, $tmp1952, &$s1954);
abort(); // unreachable
block40:;
frost$core$Int64 $tmp1955 = (frost$core$Int64) {1};
frost$core$Object* $tmp1956 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1949, $tmp1955);
org$frostlang$frostc$Type* $tmp1957 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1956));
org$frostlang$frostc$Type* $tmp1958 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1957);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1940, $tmp1941, $tmp1958);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
org$frostlang$frostc$Compiler$TypeContext* $tmp1959 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local8) = $tmp1940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// unreffing REF($388:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
// unreffing REF($387:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1956);
// unreffing REF($385:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
// unreffing REF($362:org.frostlang.frostc.Compiler.TypeContext)
goto block31;
block37:;
// line 485
org$frostlang$frostc$Type* $tmp1960 = *(&local7);
frost$core$Bit $tmp1961 = frost$core$Bit$init$builtin_bit($tmp1960 != NULL);
bool $tmp1962 = $tmp1961.value;
if ($tmp1962) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Type* $tmp1963 = *(&local7);
frost$core$Bit $tmp1964 = frost$core$Bit$init$builtin_bit($tmp1963 != NULL);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {485};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1967, $tmp1966, &$s1968);
abort(); // unreachable
block47:;
frost$core$Bit $tmp1969 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1963);
*(&local10) = $tmp1969;
goto block46;
block45:;
*(&local10) = $tmp1961;
goto block46;
block46:;
frost$core$Bit $tmp1970 = *(&local10);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block42; else goto block43;
block42:;
// line 486
org$frostlang$frostc$Compiler$TypeContext* $tmp1972 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1973 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1974 = *(&local7);
frost$core$Bit $tmp1975 = frost$core$Bit$init$builtin_bit($tmp1974 != NULL);
bool $tmp1976 = $tmp1975.value;
if ($tmp1976) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1977 = (frost$core$Int64) {487};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1978, $tmp1977, &$s1979);
abort(); // unreachable
block49:;
org$frostlang$frostc$FixedArray** $tmp1980 = &$tmp1974->subtypes;
org$frostlang$frostc$FixedArray* $tmp1981 = *$tmp1980;
frost$core$Bit $tmp1982 = frost$core$Bit$init$builtin_bit($tmp1981 != NULL);
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp1984 = (frost$core$Int64) {487};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1985, $tmp1984, &$s1986);
abort(); // unreachable
block51:;
frost$core$Int64 $tmp1987 = (frost$core$Int64) {1};
frost$core$Object* $tmp1988 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1981, $tmp1987);
org$frostlang$frostc$Type* $tmp1989 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1988));
org$frostlang$frostc$Type* $tmp1990 = *(&local7);
frost$core$Bit $tmp1991 = frost$core$Bit$init$builtin_bit($tmp1990 != NULL);
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp1993 = (frost$core$Int64) {487};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1994, $tmp1993, &$s1995);
abort(); // unreachable
block53:;
org$frostlang$frostc$FixedArray** $tmp1996 = &$tmp1990->subtypes;
org$frostlang$frostc$FixedArray* $tmp1997 = *$tmp1996;
frost$core$Bit $tmp1998 = frost$core$Bit$init$builtin_bit($tmp1997 != NULL);
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp2000 = (frost$core$Int64) {487};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2001, $tmp2000, &$s2002);
abort(); // unreachable
block55:;
frost$core$Int64 $tmp2003 = (frost$core$Int64) {2};
frost$core$Object* $tmp2004 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1997, $tmp2003);
org$frostlang$frostc$Type* $tmp2005 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1989, ((org$frostlang$frostc$Type*) $tmp2004));
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1972, $tmp1973, $tmp2005);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
org$frostlang$frostc$Compiler$TypeContext* $tmp2006 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local8) = $tmp1972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
// unreffing REF($482:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2004);
// unreffing REF($480:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
// unreffing REF($458:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1988);
// unreffing REF($456:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
// unreffing REF($433:org.frostlang.frostc.Compiler.TypeContext)
goto block43;
block43:;
goto block31;
block31:;
// line 489
org$frostlang$frostc$Compiler$TypeContext* $tmp2007 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp2008 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp2007);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
org$frostlang$frostc$IR$Value* $tmp2009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local1) = $tmp2008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
// unreffing REF($509:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Compiler$TypeContext* $tmp2010 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
// unreffing type
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp2011 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
// unreffing preferred
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 492
org$frostlang$frostc$IR$Value* $tmp2012 = *(&local1);
frost$core$Bit $tmp2013 = frost$core$Bit$init$builtin_bit($tmp2012 == NULL);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block57; else goto block58;
block57:;
// line 493
org$frostlang$frostc$IR$Value* $tmp2015 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2016 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block58:;
// line 495
org$frostlang$frostc$IR$Value* $tmp2017 = *(&local1);
frost$core$Bit $tmp2018 = frost$core$Bit$init$builtin_bit($tmp2017 != NULL);
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp2020 = (frost$core$Int64) {495};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2021, $tmp2020, &$s2022);
abort(); // unreachable
block59:;
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2017, param5);
org$frostlang$frostc$IR$Value* $tmp2023 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
// unreffing list
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2024 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
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
// line 502
org$frostlang$frostc$IR** $tmp2025 = &param0->ir;
org$frostlang$frostc$IR* $tmp2026 = *$tmp2025;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
org$frostlang$frostc$IR* $tmp2027 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
*(&local0) = $tmp2026;
// line 503
org$frostlang$frostc$IR* $tmp2028 = *(&local0);
$fn2030 $tmp2029 = ($fn2030) $tmp2028->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2031 = $tmp2029($tmp2028, &$s2032);
*(&local1) = $tmp2031;
// line 504
org$frostlang$frostc$IR* $tmp2033 = *(&local0);
$fn2035 $tmp2034 = ($fn2035) $tmp2033->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2036 = $tmp2034($tmp2033, &$s2037);
*(&local2) = $tmp2036;
// line 505
org$frostlang$frostc$IR* $tmp2038 = *(&local0);
$fn2040 $tmp2039 = ($fn2040) $tmp2038->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2041 = $tmp2039($tmp2038, &$s2042);
*(&local3) = $tmp2041;
// line 506
org$frostlang$frostc$Compiler$AutoContext* $tmp2043 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2044 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2045 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp2046 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2047 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2044, $tmp2045, param2, $tmp2046, $tmp2047);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp2043, param0, $tmp2044);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
org$frostlang$frostc$Compiler$AutoContext* $tmp2048 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local4) = $tmp2043;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
// unreffing REF($27:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
// unreffing REF($26:org.frostlang.frostc.Compiler.AutoContext)
// line 507
$fn2050 $tmp2049 = ($fn2050) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2051 = $tmp2049(param4);
org$frostlang$frostc$Type$Kind* $tmp2052 = &$tmp2051->typeKind;
org$frostlang$frostc$Type$Kind $tmp2053 = *$tmp2052;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2054;
$tmp2054 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2054->value = $tmp2053;
frost$core$Int64 $tmp2055 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2056 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2055);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2057;
$tmp2057 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2057->value = $tmp2056;
ITable* $tmp2058 = ((frost$core$Equatable*) $tmp2054)->$class->itable;
while ($tmp2058->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2058 = $tmp2058->next;
}
$fn2060 $tmp2059 = $tmp2058->methods[0];
frost$core$Bit $tmp2061 = $tmp2059(((frost$core$Equatable*) $tmp2054), ((frost$core$Equatable*) $tmp2057));
bool $tmp2062 = $tmp2061.value;
if ($tmp2062) goto block1; else goto block2;
block1:;
$fn2064 $tmp2063 = ($fn2064) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2065 = $tmp2063(param4);
org$frostlang$frostc$FixedArray** $tmp2066 = &$tmp2065->subtypes;
org$frostlang$frostc$FixedArray* $tmp2067 = *$tmp2066;
frost$core$Bit $tmp2068 = frost$core$Bit$init$builtin_bit($tmp2067 != NULL);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2070 = (frost$core$Int64) {508};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2071, $tmp2070, &$s2072);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp2073 = (frost$core$Int64) {0};
frost$core$Object* $tmp2074 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2067, $tmp2073);
org$frostlang$frostc$Type* $tmp2075 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2076 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2074), $tmp2075);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// unreffing REF($76:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2074);
// unreffing REF($74:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// unreffing REF($61:org.frostlang.frostc.Type)
*(&local5) = $tmp2076;
goto block3;
block2:;
*(&local5) = $tmp2061;
goto block3;
block3:;
frost$core$Bit $tmp2077 = *(&local5);
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2079 = (frost$core$Int64) {507};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2080, $tmp2079);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2057)));
// unreffing REF($55:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2054)));
// unreffing REF($51:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
// unreffing REF($48:org.frostlang.frostc.Type)
// line 509
org$frostlang$frostc$IR* $tmp2081 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2082 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2083 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2084 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2082, $tmp2083, param1, $tmp2084);
$fn2086 $tmp2085 = ($fn2086) $tmp2081->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2087 = $tmp2085($tmp2081, $tmp2082);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
// unreffing REF($108:org.frostlang.frostc.IR.Statement)
// line 510
org$frostlang$frostc$IR* $tmp2088 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2089 = *(&local1);
$fn2091 $tmp2090 = ($fn2091) $tmp2088->$class->vtable[4];
$tmp2090($tmp2088, $tmp2089);
// line 511
frost$collections$Array* $tmp2092 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2092);
org$frostlang$frostc$Compiler$TypeContext* $tmp2093 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2094 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp2095 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2093, $tmp2094, $tmp2095);
org$frostlang$frostc$IR$Value* $tmp2096 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s2097, ((frost$collections$ListView*) $tmp2092), $tmp2093);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
org$frostlang$frostc$IR$Value* $tmp2098 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local6) = $tmp2096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
// unreffing REF($131:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
// unreffing REF($129:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
// unreffing REF($127:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
// unreffing REF($123:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 513
org$frostlang$frostc$IR$Value* $tmp2099 = *(&local6);
frost$core$Bit $tmp2100 = frost$core$Bit$init$builtin_bit($tmp2099 == NULL);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block8; else goto block9;
block8:;
// line 514
org$frostlang$frostc$IR$Value* $tmp2102 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2103 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// line 516
org$frostlang$frostc$IR* $tmp2105 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2106 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2107 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2108 = *(&local6);
frost$core$Bit $tmp2109 = frost$core$Bit$init$builtin_bit($tmp2108 != NULL);
bool $tmp2110 = $tmp2109.value;
if ($tmp2110) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2111 = (frost$core$Int64) {517};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2112, $tmp2111, &$s2113);
abort(); // unreachable
block10:;
org$frostlang$frostc$IR$Value* $tmp2114 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2108);
org$frostlang$frostc$IR$Block$ID $tmp2115 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2116 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2106, $tmp2107, param1, $tmp2114, $tmp2115, $tmp2116);
$fn2118 $tmp2117 = ($fn2118) $tmp2105->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2119 = $tmp2117($tmp2105, $tmp2106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
// unreffing REF($187:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing REF($176:org.frostlang.frostc.IR.Statement)
// line 518
org$frostlang$frostc$IR* $tmp2120 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2121 = *(&local2);
$fn2123 $tmp2122 = ($fn2123) $tmp2120->$class->vtable[4];
$tmp2122($tmp2120, $tmp2121);
// line 1
// line 520
org$frostlang$frostc$Compiler$AutoScope* $tmp2124 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2124, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
org$frostlang$frostc$Compiler$AutoScope* $tmp2125 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local7) = $tmp2124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
// unreffing REF($206:org.frostlang.frostc.Compiler.AutoScope)
// line 521
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 523
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2126 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2126, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2127 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local9) = $tmp2126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
// unreffing REF($222:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 524
frost$core$Int64 $tmp2128 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp2129 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp2128);
$fn2131 $tmp2130 = ($fn2131) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2132 = $tmp2130(param4);
org$frostlang$frostc$FixedArray** $tmp2133 = &$tmp2132->subtypes;
org$frostlang$frostc$FixedArray* $tmp2134 = *$tmp2133;
frost$core$Bit $tmp2135 = frost$core$Bit$init$builtin_bit($tmp2134 != NULL);
bool $tmp2136 = $tmp2135.value;
if ($tmp2136) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2137 = (frost$core$Int64) {525};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2138, $tmp2137, &$s2139);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp2140 = (frost$core$Int64) {1};
frost$core$Object* $tmp2141 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2134, $tmp2140);
org$frostlang$frostc$Pair* $tmp2142 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp2129, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp2141));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
org$frostlang$frostc$Pair* $tmp2143 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
*(&local8) = $tmp2142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
// unreffing REF($254:org.frostlang.frostc.Pair<org.frostlang.frostc.Variable, org.frostlang.frostc.IR.Value?>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2141);
// unreffing REF($251:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// unreffing REF($238:org.frostlang.frostc.Type)
// line 526
org$frostlang$frostc$Pair* $tmp2144 = *(&local8);
frost$core$Bit $tmp2145 = frost$core$Bit$init$builtin_bit($tmp2144 == NULL);
bool $tmp2146 = $tmp2145.value;
if ($tmp2146) goto block14; else goto block15;
block14:;
// line 527
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2147 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
// unreffing unrefs
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Pair* $tmp2148 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
// unreffing compiledTarget
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2149 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp2150 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2151 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2153 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
// unreffing unrefs
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 530
org$frostlang$frostc$Pair* $tmp2154 = *(&local8);
frost$core$Bit $tmp2155 = frost$core$Bit$init$builtin_bit($tmp2154 != NULL);
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2157 = (frost$core$Int64) {530};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2158, $tmp2157, &$s2159);
abort(); // unreachable
block16:;
frost$core$Object** $tmp2160 = &$tmp2154->first;
frost$core$Object* $tmp2161 = *$tmp2160;
org$frostlang$frostc$Type** $tmp2162 = &((org$frostlang$frostc$Variable*) $tmp2161)->type;
org$frostlang$frostc$Type* $tmp2163 = *$tmp2162;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
org$frostlang$frostc$Type* $tmp2164 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local10) = $tmp2163;
// line 531
org$frostlang$frostc$Type* $tmp2165 = *(&local10);
frost$core$Bit $tmp2166 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2165);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block18; else goto block19;
block18:;
// line 532
frost$collections$Stack** $tmp2168 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2169 = *$tmp2168;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2170 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2171 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp2172 = *(&local8);
frost$core$Bit $tmp2173 = frost$core$Bit$init$builtin_bit($tmp2172 != NULL);
bool $tmp2174 = $tmp2173.value;
if ($tmp2174) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2176, $tmp2175, &$s2177);
abort(); // unreachable
block20:;
frost$core$Object** $tmp2178 = &$tmp2172->first;
frost$core$Object* $tmp2179 = *$tmp2178;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp2170, $tmp2171, ((org$frostlang$frostc$Variable*) $tmp2179));
frost$collections$Stack$push$frost$collections$Stack$T($tmp2169, ((frost$core$Object*) $tmp2170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
// unreffing REF($344:org.frostlang.frostc.Compiler.EnclosingContext)
goto block19;
block19:;
// line 535
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 536
frost$collections$Array* $tmp2180 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2180);
org$frostlang$frostc$Compiler$TypeContext* $tmp2181 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2182 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp2183 = *(&local10);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2181, $tmp2182, $tmp2183);
org$frostlang$frostc$IR$Value* $tmp2184 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s2185, ((frost$collections$ListView*) $tmp2180), $tmp2181);
frost$core$Bit $tmp2186 = frost$core$Bit$init$builtin_bit($tmp2184 != NULL);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2188 = (frost$core$Int64) {536};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2189, $tmp2188, &$s2190);
abort(); // unreachable
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
org$frostlang$frostc$IR$Value* $tmp2191 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
*(&local11) = $tmp2184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
// unreffing REF($376:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
// unreffing REF($372:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
// unreffing REF($368:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 538
org$frostlang$frostc$IR$Value* $tmp2192 = *(&local11);
frost$core$Bit $tmp2193 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block24; else goto block25;
block24:;
// line 539
org$frostlang$frostc$IR$Value* $tmp2195 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// unreffing next
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2196 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp2197 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
// unreffing compiledTarget
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2198 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp2199 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2200 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2201 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block25:;
// line 541
org$frostlang$frostc$lvalue$VariableLValue* $tmp2202 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Pair* $tmp2203 = *(&local8);
frost$core$Bit $tmp2204 = frost$core$Bit$init$builtin_bit($tmp2203 != NULL);
bool $tmp2205 = $tmp2204.value;
if ($tmp2205) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2206 = (frost$core$Int64) {541};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2207, $tmp2206, &$s2208);
abort(); // unreachable
block26:;
frost$core$Object** $tmp2209 = &$tmp2203->first;
frost$core$Object* $tmp2210 = *$tmp2209;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp2202, param0, param1, ((org$frostlang$frostc$Variable*) $tmp2210));
org$frostlang$frostc$IR$Value* $tmp2211 = *(&local11);
$fn2213 $tmp2212 = ($fn2213) $tmp2202->$class->vtable[4];
$tmp2212($tmp2202, $tmp2211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
// unreffing REF($443:org.frostlang.frostc.lvalue.VariableLValue)
// line 542
ITable* $tmp2214 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2214->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2214 = $tmp2214->next;
}
$fn2216 $tmp2215 = $tmp2214->methods[0];
frost$collections$Iterator* $tmp2217 = $tmp2215(((frost$collections$Iterable*) param5));
goto block28;
block28:;
ITable* $tmp2218 = $tmp2217->$class->itable;
while ($tmp2218->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2218 = $tmp2218->next;
}
$fn2220 $tmp2219 = $tmp2218->methods[0];
frost$core$Bit $tmp2221 = $tmp2219($tmp2217);
bool $tmp2222 = $tmp2221.value;
if ($tmp2222) goto block30; else goto block29;
block29:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2223 = $tmp2217->$class->itable;
while ($tmp2223->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2223 = $tmp2223->next;
}
$fn2225 $tmp2224 = $tmp2223->methods[1];
frost$core$Object* $tmp2226 = $tmp2224($tmp2217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2226)));
org$frostlang$frostc$ASTNode* $tmp2227 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp2226);
// line 543
org$frostlang$frostc$ASTNode* $tmp2228 = *(&local12);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2228);
frost$core$Frost$unref$frost$core$Object$Q($tmp2226);
// unreffing REF($478:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2229 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
// unreffing s
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// unreffing REF($467:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$IR$Value* $tmp2230 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
// unreffing next
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2231 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp2232 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// unreffing compiledTarget
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2233 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 546
org$frostlang$frostc$IR* $tmp2234 = *(&local0);
$fn2236 $tmp2235 = ($fn2236) $tmp2234->$class->vtable[5];
frost$core$Bit $tmp2237 = $tmp2235($tmp2234);
frost$core$Bit $tmp2238 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2237);
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block31; else goto block32;
block31:;
// line 547
org$frostlang$frostc$IR* $tmp2240 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2241 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2242 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2243 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2241, $tmp2242, param1, $tmp2243);
$fn2245 $tmp2244 = ($fn2245) $tmp2240->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2246 = $tmp2244($tmp2240, $tmp2241);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
// unreffing REF($530:org.frostlang.frostc.IR.Statement)
goto block32;
block32:;
// line 549
org$frostlang$frostc$IR* $tmp2247 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2248 = *(&local3);
$fn2250 $tmp2249 = ($fn2250) $tmp2247->$class->vtable[4];
$tmp2249($tmp2247, $tmp2248);
org$frostlang$frostc$IR$Value* $tmp2251 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2252 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2253 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
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
// line 555
frost$core$Int64* $tmp2254 = &param4->$rawValue;
frost$core$Int64 $tmp2255 = *$tmp2254;
frost$core$Int64 $tmp2256 = (frost$core$Int64) {36};
frost$core$Bit $tmp2257 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2255, $tmp2256);
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block2; else goto block1;
block2:;
// line 559
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 560
return;
block1:;
// line 563
org$frostlang$frostc$IR$Value* $tmp2259 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, param4);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
org$frostlang$frostc$IR$Value* $tmp2260 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local0) = $tmp2259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
// unreffing REF($12:org.frostlang.frostc.IR.Value?)
// line 564
org$frostlang$frostc$IR$Value* $tmp2261 = *(&local0);
frost$core$Bit $tmp2262 = frost$core$Bit$init$builtin_bit($tmp2261 == NULL);
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block3; else goto block4;
block3:;
// line 565
org$frostlang$frostc$IR$Value* $tmp2264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block4:;
// line 567
org$frostlang$frostc$IR$Value* $tmp2265 = *(&local0);
frost$core$Bit $tmp2266 = frost$core$Bit$init$builtin_bit($tmp2265 != NULL);
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2268 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2269, $tmp2268, &$s2270);
abort(); // unreachable
block7:;
$fn2272 $tmp2271 = ($fn2272) $tmp2265->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2273 = $tmp2271($tmp2265);
frost$core$Bit $tmp2274 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp2273);
bool $tmp2275 = $tmp2274.value;
if ($tmp2275) goto block9; else goto block10;
block9:;
*(&local1) = $tmp2274;
goto block11;
block10:;
org$frostlang$frostc$IR$Value* $tmp2276 = *(&local0);
frost$core$Bit $tmp2277 = frost$core$Bit$init$builtin_bit($tmp2276 != NULL);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2279 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2280, $tmp2279, &$s2281);
abort(); // unreachable
block12:;
$fn2283 $tmp2282 = ($fn2283) $tmp2276->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2284 = $tmp2282($tmp2276);
frost$core$Bit $tmp2285 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp2284);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
// unreffing REF($63:org.frostlang.frostc.Type)
*(&local1) = $tmp2285;
goto block11;
block11:;
frost$core$Bit $tmp2286 = *(&local1);
bool $tmp2287 = $tmp2286.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
// unreffing REF($47:org.frostlang.frostc.Type)
if ($tmp2287) goto block5; else goto block14;
block5:;
// line 569
org$frostlang$frostc$IR$Value* $tmp2288 = *(&local0);
frost$core$Bit $tmp2289 = frost$core$Bit$init$builtin_bit($tmp2288 != NULL);
bool $tmp2290 = $tmp2289.value;
if ($tmp2290) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2291 = (frost$core$Int64) {569};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2292, $tmp2291, &$s2293);
abort(); // unreachable
block15:;
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2288, param5);
goto block6;
block14:;
// line 1
// line 572
org$frostlang$frostc$IR$Value* $tmp2294 = *(&local0);
frost$core$Bit $tmp2295 = frost$core$Bit$init$builtin_bit($tmp2294 != NULL);
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp2297 = (frost$core$Int64) {572};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2298, $tmp2297, &$s2299);
abort(); // unreachable
block17:;
$fn2301 $tmp2300 = ($fn2301) $tmp2294->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2302 = $tmp2300($tmp2294);
frost$collections$HashSet* $tmp2303 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp2302);
ITable* $tmp2304 = ((frost$collections$Iterable*) $tmp2303)->$class->itable;
while ($tmp2304->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2304 = $tmp2304->next;
}
$fn2306 $tmp2305 = $tmp2304->methods[0];
frost$collections$Iterator* $tmp2307 = $tmp2305(((frost$collections$Iterable*) $tmp2303));
goto block19;
block19:;
ITable* $tmp2308 = $tmp2307->$class->itable;
while ($tmp2308->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2308 = $tmp2308->next;
}
$fn2310 $tmp2309 = $tmp2308->methods[0];
frost$core$Bit $tmp2311 = $tmp2309($tmp2307);
bool $tmp2312 = $tmp2311.value;
if ($tmp2312) goto block21; else goto block20;
block20:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2313 = $tmp2307->$class->itable;
while ($tmp2313->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2313 = $tmp2313->next;
}
$fn2315 $tmp2314 = $tmp2313->methods[1];
frost$core$Object* $tmp2316 = $tmp2314($tmp2307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2316)));
org$frostlang$frostc$Type* $tmp2317 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp2316);
// line 573
org$frostlang$frostc$Type* $tmp2318 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp2319 = &$tmp2318->typeKind;
org$frostlang$frostc$Type$Kind $tmp2320 = *$tmp2319;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2321;
$tmp2321 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2321->value = $tmp2320;
frost$core$Int64 $tmp2322 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2323 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2322);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2324;
$tmp2324 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2324->value = $tmp2323;
ITable* $tmp2325 = ((frost$core$Equatable*) $tmp2321)->$class->itable;
while ($tmp2325->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2325 = $tmp2325->next;
}
$fn2327 $tmp2326 = $tmp2325->methods[0];
frost$core$Bit $tmp2328 = $tmp2326(((frost$core$Equatable*) $tmp2321), ((frost$core$Equatable*) $tmp2324));
bool $tmp2329 = $tmp2328.value;
if ($tmp2329) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type* $tmp2330 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2331 = &$tmp2330->subtypes;
org$frostlang$frostc$FixedArray* $tmp2332 = *$tmp2331;
frost$core$Bit $tmp2333 = frost$core$Bit$init$builtin_bit($tmp2332 != NULL);
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp2335 = (frost$core$Int64) {573};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2336, $tmp2335, &$s2337);
abort(); // unreachable
block27:;
frost$core$Int64 $tmp2338 = (frost$core$Int64) {0};
frost$core$Object* $tmp2339 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2332, $tmp2338);
org$frostlang$frostc$Type* $tmp2340 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2341 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2339), $tmp2340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
// unreffing REF($152:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2339);
// unreffing REF($150:org.frostlang.frostc.FixedArray.T)
*(&local3) = $tmp2341;
goto block26;
block25:;
*(&local3) = $tmp2328;
goto block26;
block26:;
frost$core$Bit $tmp2342 = *(&local3);
bool $tmp2343 = $tmp2342.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2324)));
// unreffing REF($132:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2321)));
// unreffing REF($128:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp2343) goto block22; else goto block23;
block22:;
// line 574
$fn2345 $tmp2344 = ($fn2345) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2346 = $tmp2344(param4);
org$frostlang$frostc$IR$Value* $tmp2347 = *(&local0);
org$frostlang$frostc$Type* $tmp2348 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp2349 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2346, $tmp2347, $tmp2348);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
org$frostlang$frostc$IR$Value* $tmp2350 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local4) = $tmp2349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2349));
// unreffing REF($178:org.frostlang.frostc.IR.Value?)
// line 575
org$frostlang$frostc$IR$Value* $tmp2351 = *(&local4);
frost$core$Bit $tmp2352 = frost$core$Bit$init$builtin_bit($tmp2351 != NULL);
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp2354 = (frost$core$Int64) {575};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2355, $tmp2354, &$s2356);
abort(); // unreachable
block29:;
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2351, param5);
// line 576
org$frostlang$frostc$IR$Value* $tmp2357 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2357));
// unreffing iterator
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2316);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// unreffing REF($100:org.frostlang.frostc.Type)
org$frostlang$frostc$IR$Value* $tmp2359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block23:;
// line 578
org$frostlang$frostc$Type* $tmp2360 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp2361 = &$tmp2360->typeKind;
org$frostlang$frostc$Type$Kind $tmp2362 = *$tmp2361;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2363;
$tmp2363 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2363->value = $tmp2362;
frost$core$Int64 $tmp2364 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2365 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2364);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2366;
$tmp2366 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2366->value = $tmp2365;
ITable* $tmp2367 = ((frost$core$Equatable*) $tmp2363)->$class->itable;
while ($tmp2367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2367 = $tmp2367->next;
}
$fn2369 $tmp2368 = $tmp2367->methods[0];
frost$core$Bit $tmp2370 = $tmp2368(((frost$core$Equatable*) $tmp2363), ((frost$core$Equatable*) $tmp2366));
bool $tmp2371 = $tmp2370.value;
if ($tmp2371) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Type* $tmp2372 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2373 = &$tmp2372->subtypes;
org$frostlang$frostc$FixedArray* $tmp2374 = *$tmp2373;
frost$core$Bit $tmp2375 = frost$core$Bit$init$builtin_bit($tmp2374 != NULL);
bool $tmp2376 = $tmp2375.value;
if ($tmp2376) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2377 = (frost$core$Int64) {578};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2378, $tmp2377, &$s2379);
abort(); // unreachable
block36:;
frost$core$Int64 $tmp2380 = (frost$core$Int64) {0};
frost$core$Object* $tmp2381 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2374, $tmp2380);
org$frostlang$frostc$Type* $tmp2382 = org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2383 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2381), $tmp2382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
// unreffing REF($257:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2381);
// unreffing REF($255:org.frostlang.frostc.FixedArray.T)
*(&local5) = $tmp2383;
goto block35;
block34:;
*(&local5) = $tmp2370;
goto block35;
block35:;
frost$core$Bit $tmp2384 = *(&local5);
bool $tmp2385 = $tmp2384.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2366)));
// unreffing REF($237:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2363)));
// unreffing REF($233:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp2385) goto block31; else goto block32;
block31:;
// line 579
$fn2387 $tmp2386 = ($fn2387) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2388 = $tmp2386(param4);
org$frostlang$frostc$IR$Value* $tmp2389 = *(&local0);
org$frostlang$frostc$Type* $tmp2390 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp2391 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2388, $tmp2389, $tmp2390);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
org$frostlang$frostc$IR$Value* $tmp2392 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
*(&local6) = $tmp2391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
// unreffing REF($283:org.frostlang.frostc.IR.Value?)
// line 580
org$frostlang$frostc$IR$Value* $tmp2393 = *(&local6);
frost$core$Bit $tmp2394 = frost$core$Bit$init$builtin_bit($tmp2393 == NULL);
bool $tmp2395 = $tmp2394.value;
if ($tmp2395) goto block38; else goto block39;
block38:;
// line 581
org$frostlang$frostc$IR$Value* $tmp2396 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
// unreffing iterable
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2316);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// unreffing REF($100:org.frostlang.frostc.Type)
org$frostlang$frostc$IR$Value* $tmp2398 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block39:;
// line 583
org$frostlang$frostc$IR$Value* $tmp2399 = *(&local6);
frost$core$Bit $tmp2400 = frost$core$Bit$init$builtin_bit($tmp2399 != NULL);
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp2402 = (frost$core$Int64) {583};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2403, $tmp2402, &$s2404);
abort(); // unreachable
block40:;
frost$collections$Array* $tmp2405 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2405);
org$frostlang$frostc$Compiler$TypeContext* $tmp2406 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2407 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2406, $tmp2407);
org$frostlang$frostc$IR$Value* $tmp2408 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2399, &$s2409, ((frost$collections$ListView*) $tmp2405), $tmp2406);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
org$frostlang$frostc$IR$Value* $tmp2410 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local7) = $tmp2408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
// unreffing REF($346:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
// unreffing REF($343:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
// unreffing REF($339:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 585
org$frostlang$frostc$IR$Value* $tmp2411 = *(&local7);
frost$core$Bit $tmp2412 = frost$core$Bit$init$builtin_bit($tmp2411 != NULL);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp2414 = (frost$core$Int64) {585};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2415, $tmp2414);
abort(); // unreachable
block42:;
// line 586
org$frostlang$frostc$IR$Value* $tmp2416 = *(&local7);
frost$core$Bit $tmp2417 = frost$core$Bit$init$builtin_bit($tmp2416 != NULL);
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp2419 = (frost$core$Int64) {586};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2420, $tmp2419, &$s2421);
abort(); // unreachable
block44:;
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2416, param5);
// line 587
org$frostlang$frostc$IR$Value* $tmp2422 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// unreffing iterator
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2423 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
// unreffing iterable
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2316);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2424 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// unreffing REF($100:org.frostlang.frostc.Type)
org$frostlang$frostc$IR$Value* $tmp2425 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// unreffing list
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block32:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2316);
// unreffing REF($116:frost.collections.Iterator.T)
org$frostlang$frostc$Type* $tmp2426 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing intf
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// unreffing REF($105:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
// unreffing REF($101:frost.collections.HashSet<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// unreffing REF($100:org.frostlang.frostc.Type)
// line 590
$fn2428 $tmp2427 = ($fn2428) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2429 = $tmp2427(param4);
org$frostlang$frostc$IR$Value* $tmp2430 = *(&local0);
frost$core$Bit $tmp2431 = frost$core$Bit$init$builtin_bit($tmp2430 != NULL);
bool $tmp2432 = $tmp2431.value;
if ($tmp2432) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp2433 = (frost$core$Int64) {591};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2434, $tmp2433, &$s2435);
abort(); // unreachable
block46:;
$fn2437 $tmp2436 = ($fn2437) $tmp2430->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2438 = $tmp2436($tmp2430);
frost$core$String* $tmp2439 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2440, ((frost$core$Object*) $tmp2438));
frost$core$String* $tmp2441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2439, &$s2442);
frost$core$String* $tmp2443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2444, $tmp2441);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2429, $tmp2443);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
// unreffing REF($452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
// unreffing REF($451:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing REF($448:org.frostlang.frostc.Type)
goto block6;
block6:;
org$frostlang$frostc$IR$Value* $tmp2445 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
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

