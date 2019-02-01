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
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Compiler/Target.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/HashSet.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$For$class_type org$frostlang$frostc$statement$For$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$For$cleanup} };

typedef frost$core$Bit (*$fn10)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn117)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn135)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn156)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn166)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn176)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn182)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn187)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn195)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn226)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn249)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn252)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn255)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn285)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn296)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn299)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn302)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn331)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn334)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn362)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn388)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn393)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn398)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn403)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn408)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn426)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn431)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn457)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn462)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn488)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn493)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn496)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn500)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn505)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn517)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn526)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn531)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn534)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn547)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn583)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn588)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn598)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn603)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn629)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn634)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn660)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn665)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn699)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn706)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn711)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn736)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn746)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn752)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn757)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn765)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn804)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn810)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn817)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn841)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn844)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn847)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn878)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn889)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn892)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn895)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn925)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn928)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn934)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn953)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn980)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn1005)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1008)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1015)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1020)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1025)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1030)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1035)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1099)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1104)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1107)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1112)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1122)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1127)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1153)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1158)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1184)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1189)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1192)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1197)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1207)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1212)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1238)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1243)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1269)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1274)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1277)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1281)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1286)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1302)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1311)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1316)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1319)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1332)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1345)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1350)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1360)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1365)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1384)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1389)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1399)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1404)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1430)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1435)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1461)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1466)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1492)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1497)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1507)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1512)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1538)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1543)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1569)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1574)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1601)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1608)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1613)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1647)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1673)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1689)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1693)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1706)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1712)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1730)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1736)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1747)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1838)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1963)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1968)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1973)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn1983)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1993)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1997)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2013)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2018)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2041)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2046)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2054)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn2091)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2095)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2100)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2110)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2119)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2124)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn2141)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2147)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn2154)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn2159)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2163)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2168)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2180)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2191)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2216)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn2227)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn2258)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn2262)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, -8546630798215305666, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s61 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1017 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s1022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s1037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s1050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, -3508042023520705868, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1075 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s1413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s1499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s1521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x66\x6f\x72\x27\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x72\x61\x6e\x67\x65\x20\x27", 45, -9140460092722261265, NULL };
static frost$core$String $s1669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x3b\x20", 3, 1434131, NULL };
static frost$core$String $s1671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x72\x61\x6e\x67\x65\x73\x20\x6d\x75\x73\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x62\x6f\x74\x68\x20\x73\x74\x61\x72\x74\x20\x61\x6e\x64\x20\x65\x6e\x64", 43, 1427544015783743636, NULL };
static frost$core$String $s1710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1750 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1752 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s1795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s1846 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s1901 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s1970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s1975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s2007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s2076 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s2244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s2250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s2267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

frost$core$Bit org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
// line 25
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp12) goto block1; else goto block2;
block1:;
// line 26
org$frostlang$frostc$FixedArray* $tmp13 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp14 = (frost$core$Int64) {0};
frost$core$Object* $tmp15 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp13, $tmp14);
frost$core$Bit $tmp16 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp16;
block2:;
// line 28
frost$core$Bit $tmp17 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(param2);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block4;
block3:;
// line 29
org$frostlang$frostc$FixedArray* $tmp19 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp20 = (frost$core$Int64) {1};
frost$core$Object* $tmp21 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp19, $tmp20);
org$frostlang$frostc$Type* $tmp22 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp21));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$frostc$Type* $tmp23 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
*(&local0) = $tmp22;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q($tmp21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// line 30
org$frostlang$frostc$FixedArray* $tmp24 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp25 = (frost$core$Int64) {2};
frost$core$Object* $tmp26 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp24, $tmp25);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp26)));
org$frostlang$frostc$Type* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp26);
frost$core$Frost$unref$frost$core$Object$Q($tmp26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// line 31
org$frostlang$frostc$Type* $tmp28 = *(&local0);
org$frostlang$frostc$Type* $tmp29 = *(&local1);
frost$core$Bit $tmp30 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp28, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
// line 32
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp33 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp34 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp32;
block6:;
// line 34
org$frostlang$frostc$Type* $tmp35 = *(&local0);
frost$core$Bit $tmp36 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit($tmp35);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block10; else goto block8;
block10:;
org$frostlang$frostc$Type* $tmp38 = *(&local1);
frost$core$String** $tmp39 = &((org$frostlang$frostc$Symbol*) $tmp38)->name;
frost$core$String* $tmp40 = *$tmp39;
frost$core$Bit $tmp41 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp40, &$s42);
bool $tmp43 = $tmp41.value;
if ($tmp43) goto block9; else goto block8;
block9:;
org$frostlang$frostc$Type* $tmp44 = *(&local0);
frost$core$String** $tmp45 = &((org$frostlang$frostc$Symbol*) $tmp44)->name;
frost$core$String* $tmp46 = *$tmp45;
org$frostlang$frostc$Type* $tmp47 = *(&local1);
frost$core$String** $tmp48 = &((org$frostlang$frostc$Symbol*) $tmp47)->name;
frost$core$String* $tmp49 = *$tmp48;
frost$core$Int64 $tmp50 = frost$core$String$get_length$R$frost$core$Int64(&$s51);
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp53 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp50, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp52);
frost$core$String* $tmp54 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp49, $tmp53);
frost$core$Bit $tmp55 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp46, $tmp54);
bool $tmp56 = $tmp55.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
if ($tmp56) goto block7; else goto block8;
block7:;
// line 36
frost$core$Bit $tmp57 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp58 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp57;
block8:;
// line 38
frost$core$String* $tmp60 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s61, ((frost$core$Object*) param2));
frost$core$String* $tmp62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp60, &$s63);
frost$core$String* $tmp64 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp62, &$s65);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// line 40
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp67 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp66;
block4:;
// line 42
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit(true);
return $tmp69;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 48
org$frostlang$frostc$Type* $tmp70 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp71 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp72 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp70, $tmp71);
bool $tmp73 = $tmp72.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
if ($tmp73) goto block2; else goto block3;
block2:;
// line 49
org$frostlang$frostc$Type* $tmp74 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
return $tmp74;
block3:;
org$frostlang$frostc$Type* $tmp75 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp76 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp70, $tmp75);
bool $tmp77 = $tmp76.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
if ($tmp77) goto block4; else goto block5;
block4:;
// line 50
org$frostlang$frostc$Type* $tmp78 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
return $tmp78;
block5:;
org$frostlang$frostc$Type* $tmp79 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp80 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp70, $tmp79);
bool $tmp81 = $tmp80.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
if ($tmp81) goto block6; else goto block7;
block6:;
// line 51
org$frostlang$frostc$Type* $tmp82 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
return $tmp82;
block7:;
org$frostlang$frostc$Type* $tmp83 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp84 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp70, $tmp83);
bool $tmp85 = $tmp84.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
if ($tmp85) goto block8; else goto block9;
block8:;
// line 52
org$frostlang$frostc$Type* $tmp86 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
return $tmp86;
block9:;
// line 53
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
goto block10;
block10:;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 60
org$frostlang$frostc$Type* $tmp87 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp88 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp89 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp87, $tmp88);
bool $tmp90 = $tmp89.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
if ($tmp90) goto block2; else goto block3;
block2:;
// line 61
org$frostlang$frostc$Type* $tmp91 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return $tmp91;
block3:;
org$frostlang$frostc$Type* $tmp92 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp93 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp87, $tmp92);
bool $tmp94 = $tmp93.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
if ($tmp94) goto block4; else goto block5;
block4:;
// line 62
org$frostlang$frostc$Type* $tmp95 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return $tmp95;
block5:;
org$frostlang$frostc$Type* $tmp96 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp97 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp87, $tmp96);
bool $tmp98 = $tmp97.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
if ($tmp98) goto block6; else goto block7;
block6:;
// line 63
org$frostlang$frostc$Type* $tmp99 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return $tmp99;
block7:;
org$frostlang$frostc$Type* $tmp100 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp101 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp87, $tmp100);
bool $tmp102 = $tmp101.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
if ($tmp102) goto block8; else goto block9;
block8:;
// line 64
org$frostlang$frostc$Type* $tmp103 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return $tmp103;
block9:;
// line 65
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
goto block10;
block10:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// line 72
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp104 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp105 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp104, $tmp105);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp106 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp107 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp108 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp106, $tmp107, $tmp108, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp104, ((frost$core$Object*) $tmp106));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp104)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
return ((frost$collections$ListView*) $tmp104);

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 78
org$frostlang$frostc$Type$Kind* $tmp109 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp110 = *$tmp109;
org$frostlang$frostc$Type$Kind$wrapper* $tmp111;
$tmp111 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp111->value = $tmp110;
frost$core$Int64 $tmp112 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp113 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp112);
org$frostlang$frostc$Type$Kind$wrapper* $tmp114;
$tmp114 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp114->value = $tmp113;
ITable* $tmp115 = ((frost$core$Equatable*) $tmp111)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Bit $tmp118 = $tmp116(((frost$core$Equatable*) $tmp111), ((frost$core$Equatable*) $tmp114));
bool $tmp119 = $tmp118.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp114)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp111)));
if ($tmp119) goto block1; else goto block2;
block1:;
// line 79
org$frostlang$frostc$Type* $tmp120 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp121 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp120);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
return $tmp121;
block2:;
// line 81
org$frostlang$frostc$Type* $tmp122 = org$frostlang$frostc$Type$Char8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp123 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp122);
bool $tmp124 = $tmp123.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
if ($tmp124) goto block3; else goto block5;
block3:;
// line 82
org$frostlang$frostc$Type* $tmp125 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
return $tmp125;
block5:;
// line 84
org$frostlang$frostc$Type* $tmp126 = org$frostlang$frostc$Type$Char16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp127 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp126);
bool $tmp128 = $tmp127.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
if ($tmp128) goto block6; else goto block8;
block6:;
// line 85
org$frostlang$frostc$Type* $tmp129 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
return $tmp129;
block8:;
// line 87
org$frostlang$frostc$Type* $tmp130 = org$frostlang$frostc$Type$Char32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp131 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp130);
bool $tmp132 = $tmp131.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
if ($tmp132) goto block9; else goto block11;
block9:;
// line 88
org$frostlang$frostc$Type* $tmp133 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
return $tmp133;
block11:;
// line 1
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block10:;
goto block7;
block7:;
goto block4;
block4:;
goto block12;
block12:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR$Statement$ID local1;
// line 99
$fn135 $tmp134 = ($fn135) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp136 = $tmp134(param2);
frost$core$Bit $tmp137 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp136, param3);
bool $tmp138 = $tmp137.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
if ($tmp138) goto block1; else goto block2;
block1:;
// line 100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
return param2;
block2:;
// line 102
org$frostlang$frostc$ClassDecl* $tmp139 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, param3);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
org$frostlang$frostc$ClassDecl* $tmp140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local0) = $tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// line 103
org$frostlang$frostc$ClassDecl* $tmp141 = *(&local0);
frost$core$Bit $tmp142 = frost$core$Bit$init$builtin_bit($tmp141 != NULL);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s145, $tmp144);
abort(); // unreachable
block3:;
// line 104
org$frostlang$frostc$IR** $tmp146 = &param0->ir;
org$frostlang$frostc$IR* $tmp147 = *$tmp146;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp148 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp149 = (frost$core$Int64) {7};
org$frostlang$frostc$ClassDecl* $tmp150 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp151 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp152 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp151, $tmp152);
org$frostlang$frostc$IR$Value* $tmp153 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, param2);
frost$collections$Array$add$frost$collections$Array$T($tmp151, ((frost$core$Object*) $tmp153));
org$frostlang$frostc$FixedArray* $tmp154 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp151);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp148, $tmp149, param1, $tmp150, $tmp154);
$fn156 $tmp155 = ($fn156) $tmp147->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp157 = $tmp155($tmp147, $tmp148);
*(&local1) = $tmp157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// line 106
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp158 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp159 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp160 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp158, $tmp159, $tmp160, param3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$ClassDecl* $tmp161 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp158;

}
void org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

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
org$frostlang$frostc$IR$Block$ID local12;
org$frostlang$frostc$IR$Block$ID local13;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$IR$Block$ID local16;
org$frostlang$frostc$Compiler$AutoContext* local17 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$IR$Value* local20 = NULL;
org$frostlang$frostc$IR$Value* local21 = NULL;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$IR$Block$ID local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Block$ID local28;
org$frostlang$frostc$IR$Block$ID local29;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$IR$Value* local31 = NULL;
org$frostlang$frostc$IR$Value* local32 = NULL;
org$frostlang$frostc$IR$Value* local33 = NULL;
org$frostlang$frostc$IR$Value* local34 = NULL;
org$frostlang$frostc$IR$Value* local35 = NULL;
// line 113
org$frostlang$frostc$IR** $tmp162 = &param0->ir;
org$frostlang$frostc$IR* $tmp163 = *$tmp162;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$IR* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local0) = $tmp163;
// line 114
$fn166 $tmp165 = ($fn166) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp167 = $tmp165(param4);
org$frostlang$frostc$Type$Kind* $tmp168 = &$tmp167->typeKind;
org$frostlang$frostc$Type$Kind $tmp169 = *$tmp168;
org$frostlang$frostc$Type$Kind$wrapper* $tmp170;
$tmp170 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp170->value = $tmp169;
frost$core$Int64 $tmp171 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp172 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp171);
org$frostlang$frostc$Type$Kind$wrapper* $tmp173;
$tmp173 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp173->value = $tmp172;
ITable* $tmp174 = ((frost$core$Equatable*) $tmp170)->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
frost$core$Bit $tmp177 = $tmp175(((frost$core$Equatable*) $tmp170), ((frost$core$Equatable*) $tmp173));
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s180, $tmp179);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp173)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp170)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// line 115
$fn182 $tmp181 = ($fn182) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp183 = $tmp181(param4);
org$frostlang$frostc$FixedArray* $tmp184 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp183);
ITable* $tmp185 = ((frost$collections$CollectionView*) $tmp184)->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[0];
frost$core$Int64 $tmp188 = $tmp186(((frost$collections$CollectionView*) $tmp184));
frost$core$Int64 $tmp189 = (frost$core$Int64) {2};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s193, $tmp192);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// line 116
$fn195 $tmp194 = ($fn195) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp196 = $tmp194(param4);
org$frostlang$frostc$FixedArray* $tmp197 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp196);
frost$core$Int64 $tmp198 = (frost$core$Int64) {0};
frost$core$Object* $tmp199 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp197, $tmp198);
frost$core$String** $tmp200 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp199))->name;
frost$core$String* $tmp201 = *$tmp200;
frost$core$Bit $tmp202 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp201, &$s203);
bool $tmp204 = $tmp202.value;
if ($tmp204) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp205 = (frost$core$Int64) {116};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s206, $tmp205);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// line 117
// line 118
org$frostlang$frostc$Variable$Storage** $tmp207 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp208 = *$tmp207;
frost$core$Int64* $tmp209 = &$tmp208->$rawValue;
frost$core$Int64 $tmp210 = *$tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {0};
frost$core$Bit $tmp212 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp210, $tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp214 = (frost$core$Int64*) ($tmp208->$data + 0);
frost$core$Int64 $tmp215 = *$tmp214;
*(&local2) = $tmp215;
// line 120
frost$core$Int64 $tmp216 = *(&local2);
*(&local1) = $tmp216;
goto block7;
block9:;
// line 123
frost$core$Int64 $tmp217 = (frost$core$Int64) {123};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s218, $tmp217);
abort(); // unreachable
block7:;
// line 126
org$frostlang$frostc$Type** $tmp219 = &param3->type;
org$frostlang$frostc$Type* $tmp220 = *$tmp219;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
org$frostlang$frostc$Type* $tmp221 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local3) = $tmp220;
// line 127
org$frostlang$frostc$Type* $tmp222 = *(&local3);
org$frostlang$frostc$Type* $tmp223 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp222);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
org$frostlang$frostc$Type* $tmp224 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local4) = $tmp223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// line 129
$fn226 $tmp225 = ($fn226) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp227 = $tmp225(param4);
org$frostlang$frostc$ClassDecl* $tmp228 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp227);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$ClassDecl* $tmp229 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local5) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// line 130
org$frostlang$frostc$ClassDecl* $tmp230 = *(&local5);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230 == NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block10; else goto block11;
block10:;
// line 131
org$frostlang$frostc$ClassDecl* $tmp233 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp234 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp235 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block11:;
// line 133
org$frostlang$frostc$ClassDecl* $tmp237 = *(&local5);
frost$collections$ListView* $tmp238 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp237);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$collections$ListView* $tmp239 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local6) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// line 136
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp240 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp241 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp242 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp243 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp244 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp245 = *(&local6);
frost$core$Int64 $tmp246 = (frost$core$Int64) {0};
ITable* $tmp247 = $tmp245->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Object* $tmp250 = $tmp248($tmp245, $tmp246);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp243, $tmp244, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp250));
$fn252 $tmp251 = ($fn252) $tmp242->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp253 = $tmp251($tmp242, $tmp243);
$fn255 $tmp254 = ($fn255) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp256 = $tmp254(param4);
org$frostlang$frostc$FixedArray* $tmp257 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp256);
frost$core$Int64 $tmp258 = (frost$core$Int64) {1};
frost$core$Object* $tmp259 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp257, $tmp258);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp240, $tmp241, $tmp253, ((org$frostlang$frostc$Type*) $tmp259));
org$frostlang$frostc$Type* $tmp260 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp261 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp240, $tmp260);
org$frostlang$frostc$Type* $tmp262 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp263 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp261, $tmp262);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
org$frostlang$frostc$IR$Value* $tmp264 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local7) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q($tmp250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// line 139
org$frostlang$frostc$IR$Value* $tmp265 = *(&local7);
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265 == NULL);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block12; else goto block13;
block12:;
// line 140
org$frostlang$frostc$IR$Value* $tmp268 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp269 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp270 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp271 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp272 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 144
org$frostlang$frostc$IR* $tmp274 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp275 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp276 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp277 = *(&local7);
org$frostlang$frostc$Type* $tmp278 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp279 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp277, $tmp278);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp280 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp281 = (frost$core$Int64) {2};
frost$core$Int64 $tmp282 = *(&local1);
org$frostlang$frostc$Type* $tmp283 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp280, $tmp281, $tmp282, $tmp283);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp275, $tmp276, param1, $tmp279, $tmp280);
$fn285 $tmp284 = ($fn285) $tmp274->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp286 = $tmp284($tmp274, $tmp275);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// line 148
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp287 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp288 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp289 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp290 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp291 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp292 = *(&local6);
frost$core$Int64 $tmp293 = (frost$core$Int64) {1};
ITable* $tmp294 = $tmp292->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
frost$core$Object* $tmp297 = $tmp295($tmp292, $tmp293);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp290, $tmp291, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp297));
$fn299 $tmp298 = ($fn299) $tmp289->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp300 = $tmp298($tmp289, $tmp290);
$fn302 $tmp301 = ($fn302) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp303 = $tmp301(param4);
org$frostlang$frostc$FixedArray* $tmp304 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp303);
frost$core$Int64 $tmp305 = (frost$core$Int64) {1};
frost$core$Object* $tmp306 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp304, $tmp305);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp287, $tmp288, $tmp300, ((org$frostlang$frostc$Type*) $tmp306));
org$frostlang$frostc$Type* $tmp307 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp308 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp287, $tmp307);
org$frostlang$frostc$Type* $tmp309 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp310 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp308, $tmp309);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
org$frostlang$frostc$IR$Value* $tmp311 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local8) = $tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q($tmp306);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q($tmp297);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// line 151
org$frostlang$frostc$IR$Value* $tmp312 = *(&local8);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312 == NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block14; else goto block15;
block14:;
// line 152
org$frostlang$frostc$IR$Value* $tmp315 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp317 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp318 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp319 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp320 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// line 156
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp322 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp323 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp324 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp325 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp326 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp327 = *(&local6);
frost$core$Int64 $tmp328 = (frost$core$Int64) {2};
ITable* $tmp329 = $tmp327->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[0];
frost$core$Object* $tmp332 = $tmp330($tmp327, $tmp328);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp325, $tmp326, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp332));
$fn334 $tmp333 = ($fn334) $tmp324->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp335 = $tmp333($tmp324, $tmp325);
org$frostlang$frostc$Type* $tmp336 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp322, $tmp323, $tmp335, $tmp336);
org$frostlang$frostc$IR$Value* $tmp337 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp322);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
org$frostlang$frostc$IR$Value* $tmp338 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local9) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
frost$core$Frost$unref$frost$core$Object$Q($tmp332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// line 159
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp339 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp340 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp341 = (frost$core$UInt64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp339, $tmp340, param1, $tmp341);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp342 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp343 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp344 = *(&local4);
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp342, $tmp343, $tmp344, $tmp345);
org$frostlang$frostc$IR$Value* $tmp346 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp339, $tmp342);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlang$frostc$IR$Value* $tmp347 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local10) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// line 161
org$frostlang$frostc$IR$Value* $tmp348 = *(&local10);
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348 == NULL);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block16; else goto block17;
block16:;
// line 162
org$frostlang$frostc$IR$Value* $tmp351 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp352 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp353 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp354 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp355 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp356 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp357 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp358 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
// line 164
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 165
org$frostlang$frostc$IR$Value* $tmp360 = *(&local10);
$fn362 $tmp361 = ($fn362) $tmp360->$class->vtable[2];
org$frostlang$frostc$Type* $tmp363 = $tmp361($tmp360);
org$frostlang$frostc$Type* $tmp364 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp365 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp363, $tmp364);
bool $tmp366 = $tmp365.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
if ($tmp366) goto block18; else goto block20;
block18:;
// line 166
org$frostlang$frostc$IR$Value* $tmp367 = *(&local10);
org$frostlang$frostc$Type* $tmp368 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp369 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp367, $tmp368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
org$frostlang$frostc$IR$Value* $tmp370 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local11) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// line 167
org$frostlang$frostc$IR$Value* $tmp371 = *(&local11);
frost$core$Bit $tmp372 = frost$core$Bit$init$builtin_bit($tmp371 == NULL);
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block21; else goto block22;
block21:;
// line 168
org$frostlang$frostc$IR$Value* $tmp374 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp375 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp376 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp377 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp378 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp379 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp380 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp381 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp382 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp383 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block22:;
goto block19;
block20:;
// line 1
// line 172
org$frostlang$frostc$IR$Value* $tmp384 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
org$frostlang$frostc$IR$Value* $tmp385 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
*(&local11) = $tmp384;
goto block19;
block19:;
// line 176
org$frostlang$frostc$IR* $tmp386 = *(&local0);
$fn388 $tmp387 = ($fn388) $tmp386->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp389 = $tmp387($tmp386, &$s390);
*(&local12) = $tmp389;
// line 177
org$frostlang$frostc$IR* $tmp391 = *(&local0);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp394 = $tmp392($tmp391, &$s395);
*(&local13) = $tmp394;
// line 178
org$frostlang$frostc$IR* $tmp396 = *(&local0);
$fn398 $tmp397 = ($fn398) $tmp396->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp399 = $tmp397($tmp396, &$s400);
*(&local14) = $tmp399;
// line 179
org$frostlang$frostc$IR* $tmp401 = *(&local0);
$fn403 $tmp402 = ($fn403) $tmp401->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp404 = $tmp402($tmp401, &$s405);
*(&local15) = $tmp404;
// line 180
org$frostlang$frostc$IR* $tmp406 = *(&local0);
$fn408 $tmp407 = ($fn408) $tmp406->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp409 = $tmp407($tmp406, &$s410);
*(&local16) = $tmp409;
// line 181
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp411 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp412 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp413 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp414 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp415 = *(&local14);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp412, $tmp413, param2, $tmp414, $tmp415);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp411, param0, $tmp412);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
org$frostlang$frostc$Compiler$AutoContext* $tmp416 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local17) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// line 1
// line 183
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp417 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp417, param0);
*(&local18) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
org$frostlang$frostc$Compiler$AutoScope* $tmp418 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local18) = $tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// line 184
org$frostlang$frostc$IR* $tmp419 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp420 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp421 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp422 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp423 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp424 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp420, $tmp421, param1, $tmp422, $tmp423, $tmp424);
$fn426 $tmp425 = ($fn426) $tmp419->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp427 = $tmp425($tmp419, $tmp420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// line 186
org$frostlang$frostc$IR* $tmp428 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp429 = *(&local15);
$fn431 $tmp430 = ($fn431) $tmp428->$class->vtable[4];
$tmp430($tmp428, $tmp429);
// line 187
org$frostlang$frostc$IR$Value* $tmp432 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp433 = *(&local8);
frost$collections$ListView* $tmp434 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp433);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp435 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp436 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp437 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp435, $tmp436, $tmp437, $tmp438);
org$frostlang$frostc$IR$Value* $tmp439 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp432, &$s440, $tmp434, $tmp435);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
org$frostlang$frostc$IR$Value* $tmp441 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local19) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// line 189
org$frostlang$frostc$IR$Value* $tmp442 = *(&local19);
frost$core$Bit $tmp443 = frost$core$Bit$init$builtin_bit($tmp442 != NULL);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp445 = (frost$core$Int64) {189};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s446, $tmp445);
abort(); // unreachable
block23:;
// line 190
org$frostlang$frostc$IR$Value* $tmp447 = *(&local19);
org$frostlang$frostc$IR$Value* $tmp448 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp447);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
org$frostlang$frostc$IR$Value* $tmp449 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local20) = $tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// line 191
org$frostlang$frostc$IR* $tmp450 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp451 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp452 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp453 = *(&local20);
org$frostlang$frostc$IR$Block$ID $tmp454 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp455 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp451, $tmp452, param1, $tmp453, $tmp454, $tmp455);
$fn457 $tmp456 = ($fn457) $tmp450->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp458 = $tmp456($tmp450, $tmp451);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// line 193
org$frostlang$frostc$IR* $tmp459 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp460 = *(&local16);
$fn462 $tmp461 = ($fn462) $tmp459->$class->vtable[4];
$tmp461($tmp459, $tmp460);
// line 194
org$frostlang$frostc$IR$Value* $tmp463 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp464 = *(&local8);
frost$collections$ListView* $tmp465 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp464);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp466 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp467 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp468 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp466, $tmp467, $tmp468, $tmp469);
org$frostlang$frostc$IR$Value* $tmp470 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp463, &$s471, $tmp465, $tmp466);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
org$frostlang$frostc$IR$Value* $tmp472 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local21) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
// line 196
org$frostlang$frostc$IR$Value* $tmp473 = *(&local21);
frost$core$Bit $tmp474 = frost$core$Bit$init$builtin_bit($tmp473 != NULL);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {196};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s477, $tmp476);
abort(); // unreachable
block25:;
// line 197
org$frostlang$frostc$IR$Value* $tmp478 = *(&local21);
org$frostlang$frostc$IR$Value* $tmp479 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp478);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$IR$Value* $tmp480 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local22) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// line 198
org$frostlang$frostc$IR* $tmp481 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp482 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp483 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp484 = *(&local22);
org$frostlang$frostc$IR$Block$ID $tmp485 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp486 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp482, $tmp483, param1, $tmp484, $tmp485, $tmp486);
$fn488 $tmp487 = ($fn488) $tmp481->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp489 = $tmp487($tmp481, $tmp482);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// line 200
org$frostlang$frostc$IR* $tmp490 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp491 = *(&local12);
$fn493 $tmp492 = ($fn493) $tmp490->$class->vtable[4];
$tmp492($tmp490, $tmp491);
// line 201
ITable* $tmp494 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp494 = $tmp494->next;
}
$fn496 $tmp495 = $tmp494->methods[0];
frost$collections$Iterator* $tmp497 = $tmp495(((frost$collections$Iterable*) param5));
goto block27;
block27:;
ITable* $tmp498 = $tmp497->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[0];
frost$core$Bit $tmp501 = $tmp499($tmp497);
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block29; else goto block28;
block28:;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp503 = $tmp497->$class->itable;
while ($tmp503->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[1];
frost$core$Object* $tmp506 = $tmp504($tmp497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp506)));
org$frostlang$frostc$ASTNode* $tmp507 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local23) = ((org$frostlang$frostc$ASTNode*) $tmp506);
// line 202
org$frostlang$frostc$ASTNode* $tmp508 = *(&local23);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp508);
frost$core$Frost$unref$frost$core$Object$Q($tmp506);
org$frostlang$frostc$ASTNode* $tmp509 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
org$frostlang$frostc$IR$Value* $tmp510 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp511 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp512 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp513 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp514 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local18) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 205
org$frostlang$frostc$IR* $tmp515 = *(&local0);
$fn517 $tmp516 = ($fn517) $tmp515->$class->vtable[5];
frost$core$Bit $tmp518 = $tmp516($tmp515);
frost$core$Bit $tmp519 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp518);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block30; else goto block31;
block30:;
// line 206
org$frostlang$frostc$IR* $tmp521 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp522 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp524 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp522, $tmp523, param1, $tmp524);
$fn526 $tmp525 = ($fn526) $tmp521->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp527 = $tmp525($tmp521, $tmp522);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
goto block31;
block31:;
// line 208
org$frostlang$frostc$IR* $tmp528 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp529 = *(&local14);
$fn531 $tmp530 = ($fn531) $tmp528->$class->vtable[4];
$tmp530($tmp528, $tmp529);
// line 209
org$frostlang$frostc$IR* $tmp532 = *(&local0);
$fn534 $tmp533 = ($fn534) $tmp532->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp535 = $tmp533($tmp532, &$s536);
*(&local24) = $tmp535;
// line 212
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp537 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp538 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp539 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp540 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp541 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp542 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp543 = (frost$core$Int64) {2};
frost$core$Int64 $tmp544 = *(&local1);
org$frostlang$frostc$Type* $tmp545 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp542, $tmp543, $tmp544, $tmp545);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp540, $tmp541, param1, $tmp542);
$fn547 $tmp546 = ($fn547) $tmp539->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp548 = $tmp546($tmp539, $tmp540);
org$frostlang$frostc$Type* $tmp549 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp537, $tmp538, $tmp548, $tmp549);
org$frostlang$frostc$Type* $tmp550 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp551 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp537, $tmp550);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
org$frostlang$frostc$IR$Value* $tmp552 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local25) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// line 214
org$frostlang$frostc$IR$Value* $tmp553 = *(&local25);
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit($tmp553 != NULL);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s557, $tmp556);
abort(); // unreachable
block32:;
// line 217
org$frostlang$frostc$IR$Value* $tmp558 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp559 = *(&local25);
frost$collections$ListView* $tmp560 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp559);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp561 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp562 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp561, $tmp562);
org$frostlang$frostc$IR$Value* $tmp563 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp558, &$s564, $tmp560, $tmp561);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
org$frostlang$frostc$IR$Value* $tmp565 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local26) = $tmp563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// line 218
org$frostlang$frostc$IR$Value* $tmp566 = *(&local26);
frost$core$Bit $tmp567 = frost$core$Bit$init$builtin_bit($tmp566 != NULL);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp569 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s570, $tmp569);
abort(); // unreachable
block34:;
// line 219
org$frostlang$frostc$IR$Value* $tmp571 = *(&local26);
org$frostlang$frostc$Type* $tmp572 = *(&local4);
org$frostlang$frostc$Type* $tmp573 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp572);
org$frostlang$frostc$IR$Value* $tmp574 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp571, $tmp573);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
org$frostlang$frostc$IR$Value* $tmp575 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local27) = $tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// line 220
org$frostlang$frostc$IR$Value* $tmp576 = *(&local27);
frost$core$Bit $tmp577 = frost$core$Bit$init$builtin_bit($tmp576 != NULL);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp579 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s580, $tmp579);
abort(); // unreachable
block36:;
// line 222
org$frostlang$frostc$IR* $tmp581 = *(&local0);
$fn583 $tmp582 = ($fn583) $tmp581->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp584 = $tmp582($tmp581, &$s585);
*(&local28) = $tmp584;
// line 223
org$frostlang$frostc$IR* $tmp586 = *(&local0);
$fn588 $tmp587 = ($fn588) $tmp586->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp589 = $tmp587($tmp586, &$s590);
*(&local29) = $tmp589;
// line 224
org$frostlang$frostc$IR* $tmp591 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp592 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp593 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp594 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp595 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp596 = *(&local29);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp592, $tmp593, param1, $tmp594, $tmp595, $tmp596);
$fn598 $tmp597 = ($fn598) $tmp591->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp599 = $tmp597($tmp591, $tmp592);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// line 227
org$frostlang$frostc$IR* $tmp600 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp601 = *(&local28);
$fn603 $tmp602 = ($fn603) $tmp600->$class->vtable[4];
$tmp602($tmp600, $tmp601);
// line 228
org$frostlang$frostc$IR$Value* $tmp604 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp605 = *(&local11);
frost$collections$ListView* $tmp606 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp605);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp607 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp608 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp609 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp607, $tmp608, $tmp609, $tmp610);
org$frostlang$frostc$IR$Value* $tmp611 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp604, &$s612, $tmp606, $tmp607);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
org$frostlang$frostc$IR$Value* $tmp613 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local30) = $tmp611;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// line 230
org$frostlang$frostc$IR$Value* $tmp614 = *(&local30);
frost$core$Bit $tmp615 = frost$core$Bit$init$builtin_bit($tmp614 != NULL);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s618, $tmp617);
abort(); // unreachable
block38:;
// line 231
org$frostlang$frostc$IR$Value* $tmp619 = *(&local30);
org$frostlang$frostc$IR$Value* $tmp620 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp619);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$IR$Value* $tmp621 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local31) = $tmp620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// line 232
org$frostlang$frostc$IR* $tmp622 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp623 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp624 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp625 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp626 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp627 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp623, $tmp624, param1, $tmp625, $tmp626, $tmp627);
$fn629 $tmp628 = ($fn629) $tmp622->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp630 = $tmp628($tmp622, $tmp623);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// line 235
org$frostlang$frostc$IR* $tmp631 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp632 = *(&local29);
$fn634 $tmp633 = ($fn634) $tmp631->$class->vtable[4];
$tmp633($tmp631, $tmp632);
// line 236
org$frostlang$frostc$IR$Value* $tmp635 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp636 = *(&local11);
frost$collections$ListView* $tmp637 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp636);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp638 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp639 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp640 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp641 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp638, $tmp639, $tmp640, $tmp641);
org$frostlang$frostc$IR$Value* $tmp642 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp635, &$s643, $tmp637, $tmp638);
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
org$frostlang$frostc$IR$Value* $tmp644 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
*(&local32) = $tmp642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// line 238
org$frostlang$frostc$IR$Value* $tmp645 = *(&local32);
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit($tmp645 != NULL);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {238};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s649, $tmp648);
abort(); // unreachable
block40:;
// line 239
org$frostlang$frostc$IR$Value* $tmp650 = *(&local32);
org$frostlang$frostc$IR$Value* $tmp651 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp650);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
org$frostlang$frostc$IR$Value* $tmp652 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local33) = $tmp651;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
// line 240
org$frostlang$frostc$IR* $tmp653 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp654 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp655 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp656 = *(&local33);
org$frostlang$frostc$IR$Block$ID $tmp657 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp658 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp654, $tmp655, param1, $tmp656, $tmp657, $tmp658);
$fn660 $tmp659 = ($fn660) $tmp653->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp661 = $tmp659($tmp653, $tmp654);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// line 242
org$frostlang$frostc$IR* $tmp662 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp663 = *(&local24);
$fn665 $tmp664 = ($fn665) $tmp662->$class->vtable[4];
$tmp664($tmp662, $tmp663);
// line 243
org$frostlang$frostc$IR$Value* $tmp666 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp667 = *(&local10);
frost$collections$ListView* $tmp668 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp667);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp669 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp670 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp669, $tmp670);
org$frostlang$frostc$IR$Value* $tmp671 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp666, &$s672, $tmp668, $tmp669);
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
org$frostlang$frostc$IR$Value* $tmp673 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local34) = $tmp671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// line 244
org$frostlang$frostc$IR$Value* $tmp674 = *(&local34);
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {244};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s678, $tmp677);
abort(); // unreachable
block42:;
// line 245
org$frostlang$frostc$IR$Value* $tmp679 = *(&local34);
org$frostlang$frostc$Type* $tmp680 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp681 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp679, $tmp680);
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
org$frostlang$frostc$IR$Value* $tmp682 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local35) = $tmp681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// line 246
org$frostlang$frostc$IR$Value* $tmp683 = *(&local35);
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit($tmp683 != NULL);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp686 = (frost$core$Int64) {246};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s687, $tmp686);
abort(); // unreachable
block44:;
// line 247
org$frostlang$frostc$IR* $tmp688 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp689 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp690 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp691 = *(&local35);
org$frostlang$frostc$Type* $tmp692 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp693 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp691, $tmp692);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp694 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp695 = (frost$core$Int64) {2};
frost$core$Int64 $tmp696 = *(&local1);
org$frostlang$frostc$Type* $tmp697 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp694, $tmp695, $tmp696, $tmp697);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp689, $tmp690, param1, $tmp693, $tmp694);
$fn699 $tmp698 = ($fn699) $tmp688->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp700 = $tmp698($tmp688, $tmp689);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// line 250
org$frostlang$frostc$IR* $tmp701 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp702 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp703 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp704 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp702, $tmp703, param1, $tmp704);
$fn706 $tmp705 = ($fn706) $tmp701->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp707 = $tmp705($tmp701, $tmp702);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// line 252
org$frostlang$frostc$IR* $tmp708 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp709 = *(&local13);
$fn711 $tmp710 = ($fn711) $tmp708->$class->vtable[4];
$tmp710($tmp708, $tmp709);
org$frostlang$frostc$IR$Value* $tmp712 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp713 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp714 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp715 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp716 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp717 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp718 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp719 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp720 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp721 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp722 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp723 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp724 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp725 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp726 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp727 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp728 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp729 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp730 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp731 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$Variable* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$ClassDecl* local6 = NULL;
frost$collections$ListView* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$IR$Block$ID local16;
org$frostlang$frostc$IR$Block$ID local17;
org$frostlang$frostc$IR$Block$ID local18;
org$frostlang$frostc$IR$Block$ID local19;
org$frostlang$frostc$IR$Block$ID local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
org$frostlang$frostc$Compiler$AutoContext* local22 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local23 = NULL;
org$frostlang$frostc$IR$Value* local24 = NULL;
org$frostlang$frostc$IR$Block$ID local25;
org$frostlang$frostc$IR$Block$ID local26;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Value* local28 = NULL;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$IR$Value* local30 = NULL;
org$frostlang$frostc$IR$Block$ID local31;
org$frostlang$frostc$IR$Block$ID local32;
org$frostlang$frostc$IR$Value* local33 = NULL;
org$frostlang$frostc$IR$Value* local34 = NULL;
org$frostlang$frostc$IR$Value* local35 = NULL;
org$frostlang$frostc$IR$Value* local36 = NULL;
org$frostlang$frostc$ASTNode* local37 = NULL;
org$frostlang$frostc$IR$Block$ID local38;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$IR$Block$ID local40;
org$frostlang$frostc$IR$Block$ID local41;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$IR$Block$ID local43;
org$frostlang$frostc$IR$Block$ID local44;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$IR$Value* local49 = NULL;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$IR$Block$ID local51;
org$frostlang$frostc$IR$Block$ID local52;
org$frostlang$frostc$IR$Value* local53 = NULL;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$IR$Value* local56 = NULL;
org$frostlang$frostc$IR$Value* local57 = NULL;
// line 276
org$frostlang$frostc$IR** $tmp732 = &param0->ir;
org$frostlang$frostc$IR* $tmp733 = *$tmp732;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
org$frostlang$frostc$IR* $tmp734 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local0) = $tmp733;
// line 277
$fn736 $tmp735 = ($fn736) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp737 = $tmp735(param4);
org$frostlang$frostc$Type$Kind* $tmp738 = &$tmp737->typeKind;
org$frostlang$frostc$Type$Kind $tmp739 = *$tmp738;
org$frostlang$frostc$Type$Kind$wrapper* $tmp740;
$tmp740 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp740->value = $tmp739;
frost$core$Int64 $tmp741 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp742 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp741);
org$frostlang$frostc$Type$Kind$wrapper* $tmp743;
$tmp743 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp743->value = $tmp742;
ITable* $tmp744 = ((frost$core$Equatable*) $tmp740)->$class->itable;
while ($tmp744->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp744 = $tmp744->next;
}
$fn746 $tmp745 = $tmp744->methods[0];
frost$core$Bit $tmp747 = $tmp745(((frost$core$Equatable*) $tmp740), ((frost$core$Equatable*) $tmp743));
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {277};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s750, $tmp749);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp743)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp740)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// line 278
$fn752 $tmp751 = ($fn752) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp753 = $tmp751(param4);
org$frostlang$frostc$FixedArray* $tmp754 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp753);
ITable* $tmp755 = ((frost$collections$CollectionView*) $tmp754)->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[0];
frost$core$Int64 $tmp758 = $tmp756(((frost$collections$CollectionView*) $tmp754));
frost$core$Int64 $tmp759 = (frost$core$Int64) {3};
frost$core$Bit $tmp760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp758, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp762 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s763, $tmp762);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// line 279
$fn765 $tmp764 = ($fn765) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp766 = $tmp764(param4);
org$frostlang$frostc$FixedArray* $tmp767 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp766);
frost$core$Int64 $tmp768 = (frost$core$Int64) {0};
frost$core$Object* $tmp769 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp767, $tmp768);
frost$core$String** $tmp770 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp769))->name;
frost$core$String* $tmp771 = *$tmp770;
frost$core$Bit $tmp772 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp771, &$s773);
bool $tmp774 = $tmp772.value;
if ($tmp774) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp775 = (frost$core$Int64) {279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s776, $tmp775);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// line 280
// line 281
org$frostlang$frostc$Variable$Storage** $tmp777 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp778 = *$tmp777;
frost$core$Int64* $tmp779 = &$tmp778->$rawValue;
frost$core$Int64 $tmp780 = *$tmp779;
frost$core$Int64 $tmp781 = (frost$core$Int64) {0};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp780, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp784 = (frost$core$Int64*) ($tmp778->$data + 0);
frost$core$Int64 $tmp785 = *$tmp784;
*(&local2) = $tmp785;
// line 283
frost$core$Int64 $tmp786 = *(&local2);
*(&local1) = $tmp786;
goto block7;
block9:;
// line 286
frost$core$Int64 $tmp787 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s788, $tmp787);
abort(); // unreachable
block7:;
// line 289
org$frostlang$frostc$Type** $tmp789 = &param3->type;
org$frostlang$frostc$Type* $tmp790 = *$tmp789;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
org$frostlang$frostc$Type* $tmp791 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local3) = $tmp790;
// line 290
org$frostlang$frostc$Type* $tmp792 = *(&local3);
org$frostlang$frostc$Type* $tmp793 = org$frostlang$frostc$statement$For$getIndexType$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp792);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
org$frostlang$frostc$Type* $tmp794 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local4) = $tmp793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// line 291
org$frostlang$frostc$Type* $tmp795 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp796 = &$tmp795->typeKind;
org$frostlang$frostc$Type$Kind $tmp797 = *$tmp796;
org$frostlang$frostc$Type$Kind$wrapper* $tmp798;
$tmp798 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp798->value = $tmp797;
frost$core$Int64 $tmp799 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp800 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp799);
org$frostlang$frostc$Type$Kind$wrapper* $tmp801;
$tmp801 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp801->value = $tmp800;
ITable* $tmp802 = ((frost$core$Equatable*) $tmp798)->$class->itable;
while ($tmp802->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp802 = $tmp802->next;
}
$fn804 $tmp803 = $tmp802->methods[1];
frost$core$Bit $tmp805 = $tmp803(((frost$core$Equatable*) $tmp798), ((frost$core$Equatable*) $tmp801));
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp807 = (frost$core$Int64) {291};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s808, $tmp807);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp801)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp798)));
// line 292
$fn810 $tmp809 = ($fn810) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp811 = $tmp809(param4);
org$frostlang$frostc$FixedArray* $tmp812 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp811);
frost$core$Int64 $tmp813 = (frost$core$Int64) {2};
frost$core$Object* $tmp814 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp812, $tmp813);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp814)));
org$frostlang$frostc$Type* $tmp815 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp814);
frost$core$Frost$unref$frost$core$Object$Q($tmp814);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// line 293
$fn817 $tmp816 = ($fn817) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp818 = $tmp816(param4);
org$frostlang$frostc$ClassDecl* $tmp819 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp818);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
org$frostlang$frostc$ClassDecl* $tmp820 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local6) = $tmp819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// line 294
org$frostlang$frostc$ClassDecl* $tmp821 = *(&local6);
frost$core$Bit $tmp822 = frost$core$Bit$init$builtin_bit($tmp821 == NULL);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block12; else goto block13;
block12:;
// line 295
org$frostlang$frostc$ClassDecl* $tmp824 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp825 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp826 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp827 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 297
org$frostlang$frostc$ClassDecl* $tmp829 = *(&local6);
frost$collections$ListView* $tmp830 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp829);
*(&local7) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
frost$collections$ListView* $tmp831 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local7) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// line 300
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp832 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp833 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp834 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp835 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp836 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp837 = *(&local7);
frost$core$Int64 $tmp838 = (frost$core$Int64) {0};
ITable* $tmp839 = $tmp837->$class->itable;
while ($tmp839->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
frost$core$Object* $tmp842 = $tmp840($tmp837, $tmp838);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp835, $tmp836, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp842));
$fn844 $tmp843 = ($fn844) $tmp834->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp845 = $tmp843($tmp834, $tmp835);
$fn847 $tmp846 = ($fn847) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp848 = $tmp846(param4);
org$frostlang$frostc$FixedArray* $tmp849 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp848);
frost$core$Int64 $tmp850 = (frost$core$Int64) {1};
frost$core$Object* $tmp851 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp849, $tmp850);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp832, $tmp833, $tmp845, ((org$frostlang$frostc$Type*) $tmp851));
org$frostlang$frostc$Type* $tmp852 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp853 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp832, $tmp852);
org$frostlang$frostc$Type* $tmp854 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp855 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp853, $tmp854);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
org$frostlang$frostc$IR$Value* $tmp856 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local8) = $tmp855;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q($tmp851);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q($tmp842);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// line 303
org$frostlang$frostc$IR$Value* $tmp857 = *(&local8);
frost$core$Bit $tmp858 = frost$core$Bit$init$builtin_bit($tmp857 == NULL);
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block14; else goto block15;
block14:;
// line 304
org$frostlang$frostc$IR$Value* $tmp860 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp861 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local7) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp862 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp863 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp864 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp865 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp866 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// line 308
org$frostlang$frostc$IR* $tmp867 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp868 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp869 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp870 = *(&local8);
org$frostlang$frostc$Type* $tmp871 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp872 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp870, $tmp871);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp873 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp874 = (frost$core$Int64) {2};
frost$core$Int64 $tmp875 = *(&local1);
org$frostlang$frostc$Type* $tmp876 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp873, $tmp874, $tmp875, $tmp876);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp868, $tmp869, param1, $tmp872, $tmp873);
$fn878 $tmp877 = ($fn878) $tmp867->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp879 = $tmp877($tmp867, $tmp868);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// line 312
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp880 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp881 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp882 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp883 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp884 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp885 = *(&local7);
frost$core$Int64 $tmp886 = (frost$core$Int64) {1};
ITable* $tmp887 = $tmp885->$class->itable;
while ($tmp887->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp887 = $tmp887->next;
}
$fn889 $tmp888 = $tmp887->methods[0];
frost$core$Object* $tmp890 = $tmp888($tmp885, $tmp886);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp883, $tmp884, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp890));
$fn892 $tmp891 = ($fn892) $tmp882->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp893 = $tmp891($tmp882, $tmp883);
$fn895 $tmp894 = ($fn895) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp896 = $tmp894(param4);
org$frostlang$frostc$FixedArray* $tmp897 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp896);
frost$core$Int64 $tmp898 = (frost$core$Int64) {1};
frost$core$Object* $tmp899 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp897, $tmp898);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp880, $tmp881, $tmp893, ((org$frostlang$frostc$Type*) $tmp899));
org$frostlang$frostc$Type* $tmp900 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp901 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp880, $tmp900);
org$frostlang$frostc$Type* $tmp902 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp903 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp901, $tmp902);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
org$frostlang$frostc$IR$Value* $tmp904 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local9) = $tmp903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
frost$core$Frost$unref$frost$core$Object$Q($tmp890);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// line 315
org$frostlang$frostc$IR$Value* $tmp905 = *(&local9);
frost$core$Bit $tmp906 = frost$core$Bit$init$builtin_bit($tmp905 == NULL);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block16; else goto block17;
block16:;
// line 316
org$frostlang$frostc$IR$Value* $tmp908 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp909 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp910 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local7) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp911 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp912 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp913 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp914 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp915 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block17:;
// line 320
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp916 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp917 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp918 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp919 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp920 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp921 = *(&local7);
frost$core$Int64 $tmp922 = (frost$core$Int64) {2};
ITable* $tmp923 = $tmp921->$class->itable;
while ($tmp923->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp923 = $tmp923->next;
}
$fn925 $tmp924 = $tmp923->methods[0];
frost$core$Object* $tmp926 = $tmp924($tmp921, $tmp922);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp919, $tmp920, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp926));
$fn928 $tmp927 = ($fn928) $tmp918->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp929 = $tmp927($tmp918, $tmp919);
org$frostlang$frostc$Type* $tmp930 = *(&local5);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp916, $tmp917, $tmp929, $tmp930);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
org$frostlang$frostc$IR$Value* $tmp931 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local10) = $tmp916;
frost$core$Frost$unref$frost$core$Object$Q($tmp926);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// line 322
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 323
org$frostlang$frostc$IR$Value* $tmp932 = *(&local10);
$fn934 $tmp933 = ($fn934) $tmp932->$class->vtable[2];
org$frostlang$frostc$Type* $tmp935 = $tmp933($tmp932);
org$frostlang$frostc$Type* $tmp936 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp937 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp935, $tmp936);
bool $tmp938 = $tmp937.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
if ($tmp938) goto block18; else goto block20;
block18:;
// line 324
org$frostlang$frostc$IR$Value* $tmp939 = *(&local10);
org$frostlang$frostc$Type* $tmp940 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp941 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp939, $tmp940);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
org$frostlang$frostc$IR$Value* $tmp942 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local11) = $tmp941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// line 325
org$frostlang$frostc$IR$Value* $tmp943 = *(&local11);
frost$core$Bit $tmp944 = frost$core$Bit$init$builtin_bit($tmp943 != NULL);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp946 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s947, $tmp946);
abort(); // unreachable
block21:;
goto block19;
block20:;
// line 1
// line 328
org$frostlang$frostc$IR$Value* $tmp948 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
org$frostlang$frostc$IR$Value* $tmp949 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local11) = $tmp948;
goto block19;
block19:;
// line 330
org$frostlang$frostc$IR$Value* $tmp950 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp951 = *(&local10);
$fn953 $tmp952 = ($fn953) $tmp951->$class->vtable[2];
org$frostlang$frostc$Type* $tmp954 = $tmp952($tmp951);
org$frostlang$frostc$Type* $tmp955 = org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp954);
org$frostlang$frostc$IR$Value* $tmp956 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp950, $tmp955);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$IR$Value* $tmp957 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local12) = $tmp956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// line 331
org$frostlang$frostc$IR$Value* $tmp958 = *(&local12);
frost$core$Bit $tmp959 = frost$core$Bit$init$builtin_bit($tmp958 != NULL);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp961 = (frost$core$Int64) {331};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s962, $tmp961);
abort(); // unreachable
block23:;
// line 332
org$frostlang$frostc$IR$Value* $tmp963 = *(&local12);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp964 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp965 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp964, $tmp965);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp966 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp967 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp966, $tmp967);
org$frostlang$frostc$IR$Value* $tmp968 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp963, &$s969, ((frost$collections$ListView*) $tmp964), $tmp966);
org$frostlang$frostc$Type* $tmp970 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp971 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp968, $tmp970);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
org$frostlang$frostc$IR$Value* $tmp972 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local13) = $tmp971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// line 334
org$frostlang$frostc$IR$Value* $tmp973 = *(&local13);
frost$core$Bit $tmp974 = frost$core$Bit$init$builtin_bit($tmp973 != NULL);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp976 = (frost$core$Int64) {334};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s977, $tmp976);
abort(); // unreachable
block25:;
// line 335
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 336
org$frostlang$frostc$IR$Value* $tmp978 = *(&local10);
$fn980 $tmp979 = ($fn980) $tmp978->$class->vtable[2];
org$frostlang$frostc$Type* $tmp981 = $tmp979($tmp978);
org$frostlang$frostc$Type* $tmp982 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp983 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp981, $tmp982);
bool $tmp984 = $tmp983.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
if ($tmp984) goto block27; else goto block29;
block27:;
// line 337
org$frostlang$frostc$IR$Value* $tmp985 = *(&local13);
org$frostlang$frostc$Type* $tmp986 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp987 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp985, $tmp986);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
org$frostlang$frostc$IR$Value* $tmp988 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local14) = $tmp987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// line 338
org$frostlang$frostc$IR$Value* $tmp989 = *(&local14);
frost$core$Bit $tmp990 = frost$core$Bit$init$builtin_bit($tmp989 != NULL);
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp992 = (frost$core$Int64) {338};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s993, $tmp992);
abort(); // unreachable
block30:;
goto block28;
block29:;
// line 1
// line 341
org$frostlang$frostc$IR$Value* $tmp994 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
org$frostlang$frostc$IR$Value* $tmp995 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local14) = $tmp994;
goto block28;
block28:;
// line 345
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp996 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp997 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp998 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp999 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1000 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp1001 = *(&local7);
frost$core$Int64 $tmp1002 = (frost$core$Int64) {3};
ITable* $tmp1003 = $tmp1001->$class->itable;
while ($tmp1003->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1003 = $tmp1003->next;
}
$fn1005 $tmp1004 = $tmp1003->methods[0];
frost$core$Object* $tmp1006 = $tmp1004($tmp1001, $tmp1002);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp999, $tmp1000, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp1006));
$fn1008 $tmp1007 = ($fn1008) $tmp998->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1009 = $tmp1007($tmp998, $tmp999);
org$frostlang$frostc$Type* $tmp1010 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp996, $tmp997, $tmp1009, $tmp1010);
org$frostlang$frostc$IR$Value* $tmp1011 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp996);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
org$frostlang$frostc$IR$Value* $tmp1012 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local15) = $tmp1011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q($tmp1006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// line 349
org$frostlang$frostc$IR* $tmp1013 = *(&local0);
$fn1015 $tmp1014 = ($fn1015) $tmp1013->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1016 = $tmp1014($tmp1013, &$s1017);
*(&local16) = $tmp1016;
// line 350
org$frostlang$frostc$IR* $tmp1018 = *(&local0);
$fn1020 $tmp1019 = ($fn1020) $tmp1018->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1021 = $tmp1019($tmp1018, &$s1022);
*(&local17) = $tmp1021;
// line 351
org$frostlang$frostc$IR* $tmp1023 = *(&local0);
$fn1025 $tmp1024 = ($fn1025) $tmp1023->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1026 = $tmp1024($tmp1023, &$s1027);
*(&local18) = $tmp1026;
// line 352
org$frostlang$frostc$IR* $tmp1028 = *(&local0);
$fn1030 $tmp1029 = ($fn1030) $tmp1028->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1031 = $tmp1029($tmp1028, &$s1032);
*(&local19) = $tmp1031;
// line 353
org$frostlang$frostc$IR* $tmp1033 = *(&local0);
$fn1035 $tmp1034 = ($fn1035) $tmp1033->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1036 = $tmp1034($tmp1033, &$s1037);
*(&local20) = $tmp1036;
// line 354
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 355
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1038 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1039 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1040 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1041 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp1042 = *(&local18);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1039, $tmp1040, param2, $tmp1041, $tmp1042);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1038, param0, $tmp1039);
*(&local22) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
org$frostlang$frostc$Compiler$AutoContext* $tmp1043 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local22) = $tmp1038;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// line 1
// line 357
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1044 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1044, param0);
*(&local23) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$Compiler$AutoScope* $tmp1045 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local23) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// line 358
org$frostlang$frostc$Type* $tmp1046 = *(&local5);
frost$core$String** $tmp1047 = &((org$frostlang$frostc$Symbol*) $tmp1046)->name;
frost$core$String* $tmp1048 = *$tmp1047;
frost$core$Bit $tmp1049 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1048, &$s1050);
bool $tmp1051 = $tmp1049.value;
if ($tmp1051) goto block32; else goto block35;
block35:;
org$frostlang$frostc$Type* $tmp1052 = *(&local5);
frost$core$String** $tmp1053 = &((org$frostlang$frostc$Symbol*) $tmp1052)->name;
frost$core$String* $tmp1054 = *$tmp1053;
frost$core$Bit $tmp1055 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1054, &$s1056);
bool $tmp1057 = $tmp1055.value;
if ($tmp1057) goto block32; else goto block34;
block32:;
// line 360
org$frostlang$frostc$IR$Value* $tmp1058 = *(&local10);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1059 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1060 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1059, $tmp1060);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1061 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1062 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp1063 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp1061, $tmp1062, param1, $tmp1063);
frost$collections$Array$add$frost$collections$Array$T($tmp1059, ((frost$core$Object*) $tmp1061));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1064 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1065 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1066 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1067 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1064, $tmp1065, $tmp1066, $tmp1067);
org$frostlang$frostc$IR$Value* $tmp1068 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1058, &$s1069, ((frost$collections$ListView*) $tmp1059), $tmp1064);
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
org$frostlang$frostc$IR$Value* $tmp1070 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local24) = $tmp1068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// line 362
org$frostlang$frostc$IR$Value* $tmp1071 = *(&local24);
frost$core$Bit $tmp1072 = frost$core$Bit$init$builtin_bit($tmp1071 != NULL);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1074 = (frost$core$Int64) {362};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1075, $tmp1074);
abort(); // unreachable
block36:;
// line 363
org$frostlang$frostc$IR$Value* $tmp1076 = *(&local24);
org$frostlang$frostc$IR$Value* $tmp1077 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1076);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
org$frostlang$frostc$IR$Value* $tmp1078 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local21) = $tmp1077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
org$frostlang$frostc$IR$Value* $tmp1079 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local24) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block33;
block34:;
// line 1
// line 366
org$frostlang$frostc$Type* $tmp1080 = *(&local5);
frost$core$String** $tmp1081 = &((org$frostlang$frostc$Symbol*) $tmp1080)->name;
frost$core$String* $tmp1082 = *$tmp1081;
frost$core$Bit $tmp1083 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1082, &$s1084);
bool $tmp1085 = $tmp1083.value;
if ($tmp1085) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp1086 = (frost$core$Int64) {366};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1087, $tmp1086);
abort(); // unreachable
block38:;
// line 367
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1088 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1089 = (frost$core$Int64) {0};
frost$core$Bit $tmp1090 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp1088, $tmp1089, $tmp1090);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
org$frostlang$frostc$IR$Value* $tmp1091 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local21) = $tmp1088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
goto block33;
block33:;
// line 369
org$frostlang$frostc$IR* $tmp1092 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1093 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1094 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1095 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp1096 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1097 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1093, $tmp1094, param1, $tmp1095, $tmp1096, $tmp1097);
$fn1099 $tmp1098 = ($fn1099) $tmp1092->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1100 = $tmp1098($tmp1092, $tmp1093);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
// line 370
org$frostlang$frostc$IR* $tmp1101 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1102 = *(&local19);
$fn1104 $tmp1103 = ($fn1104) $tmp1101->$class->vtable[4];
$tmp1103($tmp1101, $tmp1102);
// line 371
org$frostlang$frostc$IR* $tmp1105 = *(&local0);
$fn1107 $tmp1106 = ($fn1107) $tmp1105->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1108 = $tmp1106($tmp1105, &$s1109);
*(&local25) = $tmp1108;
// line 372
org$frostlang$frostc$IR* $tmp1110 = *(&local0);
$fn1112 $tmp1111 = ($fn1112) $tmp1110->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1113 = $tmp1111($tmp1110, &$s1114);
*(&local26) = $tmp1113;
// line 373
org$frostlang$frostc$IR* $tmp1115 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1116 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1117 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1118 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp1119 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp1120 = *(&local26);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1116, $tmp1117, param1, $tmp1118, $tmp1119, $tmp1120);
$fn1122 $tmp1121 = ($fn1122) $tmp1115->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1123 = $tmp1121($tmp1115, $tmp1116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// line 375
org$frostlang$frostc$IR* $tmp1124 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1125 = *(&local25);
$fn1127 $tmp1126 = ($fn1127) $tmp1124->$class->vtable[4];
$tmp1126($tmp1124, $tmp1125);
// line 376
org$frostlang$frostc$IR$Value* $tmp1128 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1129 = *(&local9);
frost$collections$ListView* $tmp1130 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1129);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1131 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1132 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1133 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1134 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1131, $tmp1132, $tmp1133, $tmp1134);
org$frostlang$frostc$IR$Value* $tmp1135 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1128, &$s1136, $tmp1130, $tmp1131);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$IR$Value* $tmp1137 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local27) = $tmp1135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// line 378
org$frostlang$frostc$IR$Value* $tmp1138 = *(&local27);
frost$core$Bit $tmp1139 = frost$core$Bit$init$builtin_bit($tmp1138 != NULL);
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp1141 = (frost$core$Int64) {378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1142, $tmp1141);
abort(); // unreachable
block40:;
// line 379
org$frostlang$frostc$IR$Value* $tmp1143 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp1144 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1143);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
org$frostlang$frostc$IR$Value* $tmp1145 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local28) = $tmp1144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// line 380
org$frostlang$frostc$IR* $tmp1146 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1147 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1148 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1149 = *(&local28);
org$frostlang$frostc$IR$Block$ID $tmp1150 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp1151 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1147, $tmp1148, param1, $tmp1149, $tmp1150, $tmp1151);
$fn1153 $tmp1152 = ($fn1153) $tmp1146->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1154 = $tmp1152($tmp1146, $tmp1147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// line 382
org$frostlang$frostc$IR* $tmp1155 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1156 = *(&local26);
$fn1158 $tmp1157 = ($fn1158) $tmp1155->$class->vtable[4];
$tmp1157($tmp1155, $tmp1156);
// line 383
org$frostlang$frostc$IR$Value* $tmp1159 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1160 = *(&local9);
frost$collections$ListView* $tmp1161 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1160);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1162 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1163 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1164 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1165 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1162, $tmp1163, $tmp1164, $tmp1165);
org$frostlang$frostc$IR$Value* $tmp1166 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1159, &$s1167, $tmp1161, $tmp1162);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
org$frostlang$frostc$IR$Value* $tmp1168 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local29) = $tmp1166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// line 385
org$frostlang$frostc$IR$Value* $tmp1169 = *(&local29);
frost$core$Bit $tmp1170 = frost$core$Bit$init$builtin_bit($tmp1169 != NULL);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1172 = (frost$core$Int64) {385};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1173, $tmp1172);
abort(); // unreachable
block42:;
// line 386
org$frostlang$frostc$IR$Value* $tmp1174 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp1175 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1174);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
org$frostlang$frostc$IR$Value* $tmp1176 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local30) = $tmp1175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// line 387
org$frostlang$frostc$IR* $tmp1177 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1178 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1179 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1180 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp1181 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp1182 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1178, $tmp1179, param1, $tmp1180, $tmp1181, $tmp1182);
$fn1184 $tmp1183 = ($fn1184) $tmp1177->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1185 = $tmp1183($tmp1177, $tmp1178);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
// line 389
org$frostlang$frostc$IR* $tmp1186 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1187 = *(&local20);
$fn1189 $tmp1188 = ($fn1189) $tmp1186->$class->vtable[4];
$tmp1188($tmp1186, $tmp1187);
// line 390
org$frostlang$frostc$IR* $tmp1190 = *(&local0);
$fn1192 $tmp1191 = ($fn1192) $tmp1190->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1193 = $tmp1191($tmp1190, &$s1194);
*(&local31) = $tmp1193;
// line 391
org$frostlang$frostc$IR* $tmp1195 = *(&local0);
$fn1197 $tmp1196 = ($fn1197) $tmp1195->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1198 = $tmp1196($tmp1195, &$s1199);
*(&local32) = $tmp1198;
// line 392
org$frostlang$frostc$IR* $tmp1200 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1201 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1202 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1203 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp1204 = *(&local31);
org$frostlang$frostc$IR$Block$ID $tmp1205 = *(&local32);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1201, $tmp1202, param1, $tmp1203, $tmp1204, $tmp1205);
$fn1207 $tmp1206 = ($fn1207) $tmp1200->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1208 = $tmp1206($tmp1200, $tmp1201);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
// line 394
org$frostlang$frostc$IR* $tmp1209 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1210 = *(&local31);
$fn1212 $tmp1211 = ($fn1212) $tmp1209->$class->vtable[4];
$tmp1211($tmp1209, $tmp1210);
// line 395
org$frostlang$frostc$IR$Value* $tmp1213 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1214 = *(&local9);
frost$collections$ListView* $tmp1215 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1214);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1216 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1217 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1218 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1219 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1216, $tmp1217, $tmp1218, $tmp1219);
org$frostlang$frostc$IR$Value* $tmp1220 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1213, &$s1221, $tmp1215, $tmp1216);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local33) = $tmp1220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
// line 397
org$frostlang$frostc$IR$Value* $tmp1223 = *(&local33);
frost$core$Bit $tmp1224 = frost$core$Bit$init$builtin_bit($tmp1223 != NULL);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp1226 = (frost$core$Int64) {397};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1227, $tmp1226);
abort(); // unreachable
block44:;
// line 398
org$frostlang$frostc$IR$Value* $tmp1228 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1229 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1228);
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
org$frostlang$frostc$IR$Value* $tmp1230 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local34) = $tmp1229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
// line 399
org$frostlang$frostc$IR* $tmp1231 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1232 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1233 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1234 = *(&local34);
org$frostlang$frostc$IR$Block$ID $tmp1235 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp1236 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1232, $tmp1233, param1, $tmp1234, $tmp1235, $tmp1236);
$fn1238 $tmp1237 = ($fn1238) $tmp1231->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1239 = $tmp1237($tmp1231, $tmp1232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// line 401
org$frostlang$frostc$IR* $tmp1240 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1241 = *(&local32);
$fn1243 $tmp1242 = ($fn1243) $tmp1240->$class->vtable[4];
$tmp1242($tmp1240, $tmp1241);
// line 402
org$frostlang$frostc$IR$Value* $tmp1244 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local9);
frost$collections$ListView* $tmp1246 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1245);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1247 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1249 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1250 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1247, $tmp1248, $tmp1249, $tmp1250);
org$frostlang$frostc$IR$Value* $tmp1251 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1244, &$s1252, $tmp1246, $tmp1247);
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
org$frostlang$frostc$IR$Value* $tmp1253 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local35) = $tmp1251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// line 404
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local35);
frost$core$Bit $tmp1255 = frost$core$Bit$init$builtin_bit($tmp1254 != NULL);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp1257 = (frost$core$Int64) {404};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1258, $tmp1257);
abort(); // unreachable
block46:;
// line 405
org$frostlang$frostc$IR$Value* $tmp1259 = *(&local35);
org$frostlang$frostc$IR$Value* $tmp1260 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1259);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
org$frostlang$frostc$IR$Value* $tmp1261 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local36) = $tmp1260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
// line 406
org$frostlang$frostc$IR* $tmp1262 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1263 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1264 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1265 = *(&local36);
org$frostlang$frostc$IR$Block$ID $tmp1266 = *(&local16);
org$frostlang$frostc$IR$Block$ID $tmp1267 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1263, $tmp1264, param1, $tmp1265, $tmp1266, $tmp1267);
$fn1269 $tmp1268 = ($fn1269) $tmp1262->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1270 = $tmp1268($tmp1262, $tmp1263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
// line 408
org$frostlang$frostc$IR* $tmp1271 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1272 = *(&local16);
$fn1274 $tmp1273 = ($fn1274) $tmp1271->$class->vtable[4];
$tmp1273($tmp1271, $tmp1272);
// line 409
ITable* $tmp1275 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1275->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[0];
frost$collections$Iterator* $tmp1278 = $tmp1276(((frost$collections$Iterable*) param5));
goto block48;
block48:;
ITable* $tmp1279 = $tmp1278->$class->itable;
while ($tmp1279->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1279 = $tmp1279->next;
}
$fn1281 $tmp1280 = $tmp1279->methods[0];
frost$core$Bit $tmp1282 = $tmp1280($tmp1278);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block50; else goto block49;
block49:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1284 = $tmp1278->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[1];
frost$core$Object* $tmp1287 = $tmp1285($tmp1278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1287)));
org$frostlang$frostc$ASTNode* $tmp1288 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1287);
// line 410
org$frostlang$frostc$ASTNode* $tmp1289 = *(&local37);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1289);
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$ASTNode* $tmp1290 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
org$frostlang$frostc$IR$Value* $tmp1291 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1292 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1293 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1294 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1295 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1296 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1297 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1298 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1299 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local23) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 413
org$frostlang$frostc$IR* $tmp1300 = *(&local0);
$fn1302 $tmp1301 = ($fn1302) $tmp1300->$class->vtable[5];
frost$core$Bit $tmp1303 = $tmp1301($tmp1300);
frost$core$Bit $tmp1304 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1303);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block51; else goto block52;
block51:;
// line 414
org$frostlang$frostc$IR* $tmp1306 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1307 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1308 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1309 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1307, $tmp1308, param1, $tmp1309);
$fn1311 $tmp1310 = ($fn1311) $tmp1306->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1312 = $tmp1310($tmp1306, $tmp1307);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
goto block52;
block52:;
// line 416
org$frostlang$frostc$IR* $tmp1313 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1314 = *(&local18);
$fn1316 $tmp1315 = ($fn1316) $tmp1313->$class->vtable[4];
$tmp1315($tmp1313, $tmp1314);
// line 417
org$frostlang$frostc$IR* $tmp1317 = *(&local0);
$fn1319 $tmp1318 = ($fn1319) $tmp1317->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1320 = $tmp1318($tmp1317, &$s1321);
*(&local38) = $tmp1320;
// line 419
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1322 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1323 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1324 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1325 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1326 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1327 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1328 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1329 = *(&local1);
org$frostlang$frostc$Type* $tmp1330 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1327, $tmp1328, $tmp1329, $tmp1330);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1325, $tmp1326, param1, $tmp1327);
$fn1332 $tmp1331 = ($fn1332) $tmp1324->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1333 = $tmp1331($tmp1324, $tmp1325);
org$frostlang$frostc$Type* $tmp1334 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1322, $tmp1323, $tmp1333, $tmp1334);
org$frostlang$frostc$Type* $tmp1335 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp1336 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1322, $tmp1335);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$IR$Value* $tmp1337 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local39) = $tmp1336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// line 421
org$frostlang$frostc$IR$Value* $tmp1338 = *(&local39);
frost$core$Bit $tmp1339 = frost$core$Bit$init$builtin_bit($tmp1338 != NULL);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp1341 = (frost$core$Int64) {421};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1342, $tmp1341);
abort(); // unreachable
block53:;
// line 422
org$frostlang$frostc$IR* $tmp1343 = *(&local0);
$fn1345 $tmp1344 = ($fn1345) $tmp1343->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1346 = $tmp1344($tmp1343, &$s1347);
*(&local40) = $tmp1346;
// line 423
org$frostlang$frostc$IR* $tmp1348 = *(&local0);
$fn1350 $tmp1349 = ($fn1350) $tmp1348->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1351 = $tmp1349($tmp1348, &$s1352);
*(&local41) = $tmp1351;
// line 424
org$frostlang$frostc$IR* $tmp1353 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1354 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1355 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1356 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp1357 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1358 = *(&local41);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1354, $tmp1355, param1, $tmp1356, $tmp1357, $tmp1358);
$fn1360 $tmp1359 = ($fn1360) $tmp1353->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1361 = $tmp1359($tmp1353, $tmp1354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// line 428
org$frostlang$frostc$IR* $tmp1362 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1363 = *(&local40);
$fn1365 $tmp1364 = ($fn1365) $tmp1362->$class->vtable[4];
$tmp1364($tmp1362, $tmp1363);
// line 431
org$frostlang$frostc$IR$Value* $tmp1366 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp1367 = *(&local39);
frost$collections$ListView* $tmp1368 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1367);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1369 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1370 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1369, $tmp1370);
org$frostlang$frostc$IR$Value* $tmp1371 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1366, &$s1372, $tmp1368, $tmp1369);
org$frostlang$frostc$Type* $tmp1373 = *(&local4);
org$frostlang$frostc$Type* $tmp1374 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1373);
org$frostlang$frostc$IR$Value* $tmp1375 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1371, $tmp1374);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
org$frostlang$frostc$IR$Value* $tmp1376 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local42) = $tmp1375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// line 433
org$frostlang$frostc$IR$Value* $tmp1377 = *(&local42);
frost$core$Bit $tmp1378 = frost$core$Bit$init$builtin_bit($tmp1377 != NULL);
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp1380 = (frost$core$Int64) {433};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1381, $tmp1380);
abort(); // unreachable
block55:;
// line 436
org$frostlang$frostc$IR* $tmp1382 = *(&local0);
$fn1384 $tmp1383 = ($fn1384) $tmp1382->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1385 = $tmp1383($tmp1382, &$s1386);
*(&local43) = $tmp1385;
// line 437
org$frostlang$frostc$IR* $tmp1387 = *(&local0);
$fn1389 $tmp1388 = ($fn1389) $tmp1387->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1390 = $tmp1388($tmp1387, &$s1391);
*(&local44) = $tmp1390;
// line 438
org$frostlang$frostc$IR* $tmp1392 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1393 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1394 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1395 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp1396 = *(&local43);
org$frostlang$frostc$IR$Block$ID $tmp1397 = *(&local44);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1393, $tmp1394, param1, $tmp1395, $tmp1396, $tmp1397);
$fn1399 $tmp1398 = ($fn1399) $tmp1392->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1400 = $tmp1398($tmp1392, $tmp1393);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// line 442
org$frostlang$frostc$IR* $tmp1401 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1402 = *(&local43);
$fn1404 $tmp1403 = ($fn1404) $tmp1401->$class->vtable[4];
$tmp1403($tmp1401, $tmp1402);
// line 443
org$frostlang$frostc$IR$Value* $tmp1405 = *(&local42);
org$frostlang$frostc$IR$Value* $tmp1406 = *(&local11);
frost$collections$ListView* $tmp1407 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1406);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1408 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1409 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1410 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1411 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1408, $tmp1409, $tmp1410, $tmp1411);
org$frostlang$frostc$IR$Value* $tmp1412 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1405, &$s1413, $tmp1407, $tmp1408);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
org$frostlang$frostc$IR$Value* $tmp1414 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local45) = $tmp1412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
// line 445
org$frostlang$frostc$IR$Value* $tmp1415 = *(&local45);
frost$core$Bit $tmp1416 = frost$core$Bit$init$builtin_bit($tmp1415 != NULL);
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp1418 = (frost$core$Int64) {445};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1419, $tmp1418);
abort(); // unreachable
block57:;
// line 446
org$frostlang$frostc$IR$Value* $tmp1420 = *(&local45);
org$frostlang$frostc$IR$Value* $tmp1421 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1420);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
org$frostlang$frostc$IR$Value* $tmp1422 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local46) = $tmp1421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
// line 447
org$frostlang$frostc$IR* $tmp1423 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1424 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1425 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1426 = *(&local46);
org$frostlang$frostc$IR$Block$ID $tmp1427 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp1428 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1424, $tmp1425, param1, $tmp1426, $tmp1427, $tmp1428);
$fn1430 $tmp1429 = ($fn1430) $tmp1423->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1431 = $tmp1429($tmp1423, $tmp1424);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
// line 450
org$frostlang$frostc$IR* $tmp1432 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1433 = *(&local44);
$fn1435 $tmp1434 = ($fn1435) $tmp1432->$class->vtable[4];
$tmp1434($tmp1432, $tmp1433);
// line 451
org$frostlang$frostc$IR$Value* $tmp1436 = *(&local42);
org$frostlang$frostc$IR$Value* $tmp1437 = *(&local11);
frost$collections$ListView* $tmp1438 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1437);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1439 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1440 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1441 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1442 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1439, $tmp1440, $tmp1441, $tmp1442);
org$frostlang$frostc$IR$Value* $tmp1443 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1436, &$s1444, $tmp1438, $tmp1439);
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
org$frostlang$frostc$IR$Value* $tmp1445 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
*(&local47) = $tmp1443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
// line 453
org$frostlang$frostc$IR$Value* $tmp1446 = *(&local47);
frost$core$Bit $tmp1447 = frost$core$Bit$init$builtin_bit($tmp1446 != NULL);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp1449 = (frost$core$Int64) {453};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1450, $tmp1449);
abort(); // unreachable
block59:;
// line 454
org$frostlang$frostc$IR$Value* $tmp1451 = *(&local47);
org$frostlang$frostc$IR$Value* $tmp1452 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1451);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
org$frostlang$frostc$IR$Value* $tmp1453 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local48) = $tmp1452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
// line 455
org$frostlang$frostc$IR* $tmp1454 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1455 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1456 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1457 = *(&local48);
org$frostlang$frostc$IR$Block$ID $tmp1458 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp1459 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1455, $tmp1456, param1, $tmp1457, $tmp1458, $tmp1459);
$fn1461 $tmp1460 = ($fn1461) $tmp1454->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1462 = $tmp1460($tmp1454, $tmp1455);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// line 459
org$frostlang$frostc$IR* $tmp1463 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1464 = *(&local41);
$fn1466 $tmp1465 = ($fn1466) $tmp1463->$class->vtable[4];
$tmp1465($tmp1463, $tmp1464);
// line 460
org$frostlang$frostc$IR$Value* $tmp1467 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1468 = *(&local9);
frost$collections$ListView* $tmp1469 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1468);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1470 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1471 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1470, $tmp1471);
org$frostlang$frostc$IR$Value* $tmp1472 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1467, &$s1473, $tmp1469, $tmp1470);
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
org$frostlang$frostc$IR$Value* $tmp1474 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local49) = $tmp1472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
// line 461
org$frostlang$frostc$IR$Value* $tmp1475 = *(&local49);
frost$core$Bit $tmp1476 = frost$core$Bit$init$builtin_bit($tmp1475 != NULL);
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {461};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1479, $tmp1478);
abort(); // unreachable
block61:;
// line 462
org$frostlang$frostc$IR$Value* $tmp1480 = *(&local49);
org$frostlang$frostc$Type* $tmp1481 = *(&local4);
org$frostlang$frostc$Type* $tmp1482 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1481);
org$frostlang$frostc$IR$Value* $tmp1483 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1480, $tmp1482);
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
org$frostlang$frostc$IR$Value* $tmp1484 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local50) = $tmp1483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
// line 463
org$frostlang$frostc$IR$Value* $tmp1485 = *(&local50);
frost$core$Bit $tmp1486 = frost$core$Bit$init$builtin_bit($tmp1485 != NULL);
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp1488 = (frost$core$Int64) {463};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1489, $tmp1488);
abort(); // unreachable
block63:;
// line 466
org$frostlang$frostc$IR* $tmp1490 = *(&local0);
$fn1492 $tmp1491 = ($fn1492) $tmp1490->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1493 = $tmp1491($tmp1490, &$s1494);
*(&local51) = $tmp1493;
// line 467
org$frostlang$frostc$IR* $tmp1495 = *(&local0);
$fn1497 $tmp1496 = ($fn1497) $tmp1495->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1498 = $tmp1496($tmp1495, &$s1499);
*(&local52) = $tmp1498;
// line 468
org$frostlang$frostc$IR* $tmp1500 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1501 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1502 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1503 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp1504 = *(&local51);
org$frostlang$frostc$IR$Block$ID $tmp1505 = *(&local52);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1501, $tmp1502, param1, $tmp1503, $tmp1504, $tmp1505);
$fn1507 $tmp1506 = ($fn1507) $tmp1500->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1508 = $tmp1506($tmp1500, $tmp1501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
// line 472
org$frostlang$frostc$IR* $tmp1509 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1510 = *(&local51);
$fn1512 $tmp1511 = ($fn1512) $tmp1509->$class->vtable[4];
$tmp1511($tmp1509, $tmp1510);
// line 473
org$frostlang$frostc$IR$Value* $tmp1513 = *(&local50);
org$frostlang$frostc$IR$Value* $tmp1514 = *(&local14);
frost$collections$ListView* $tmp1515 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1514);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1516 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1517 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1518 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1519 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1516, $tmp1517, $tmp1518, $tmp1519);
org$frostlang$frostc$IR$Value* $tmp1520 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1513, &$s1521, $tmp1515, $tmp1516);
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
org$frostlang$frostc$IR$Value* $tmp1522 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local53) = $tmp1520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
// line 475
org$frostlang$frostc$IR$Value* $tmp1523 = *(&local53);
frost$core$Bit $tmp1524 = frost$core$Bit$init$builtin_bit($tmp1523 != NULL);
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp1526 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1527, $tmp1526);
abort(); // unreachable
block65:;
// line 476
org$frostlang$frostc$IR$Value* $tmp1528 = *(&local53);
org$frostlang$frostc$IR$Value* $tmp1529 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1528);
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
org$frostlang$frostc$IR$Value* $tmp1530 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local54) = $tmp1529;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
// line 477
org$frostlang$frostc$IR* $tmp1531 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1532 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1533 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1534 = *(&local54);
org$frostlang$frostc$IR$Block$ID $tmp1535 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp1536 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1532, $tmp1533, param1, $tmp1534, $tmp1535, $tmp1536);
$fn1538 $tmp1537 = ($fn1538) $tmp1531->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1539 = $tmp1537($tmp1531, $tmp1532);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
// line 481
org$frostlang$frostc$IR* $tmp1540 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1541 = *(&local52);
$fn1543 $tmp1542 = ($fn1543) $tmp1540->$class->vtable[4];
$tmp1542($tmp1540, $tmp1541);
// line 482
org$frostlang$frostc$IR$Value* $tmp1544 = *(&local50);
org$frostlang$frostc$IR$Value* $tmp1545 = *(&local14);
frost$collections$ListView* $tmp1546 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1545);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1547 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1548 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1549 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1550 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1547, $tmp1548, $tmp1549, $tmp1550);
org$frostlang$frostc$IR$Value* $tmp1551 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1544, &$s1552, $tmp1546, $tmp1547);
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
org$frostlang$frostc$IR$Value* $tmp1553 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
*(&local55) = $tmp1551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
// line 484
org$frostlang$frostc$IR$Value* $tmp1554 = *(&local55);
frost$core$Bit $tmp1555 = frost$core$Bit$init$builtin_bit($tmp1554 != NULL);
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp1557 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1558, $tmp1557);
abort(); // unreachable
block67:;
// line 485
org$frostlang$frostc$IR$Value* $tmp1559 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp1560 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1559);
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
org$frostlang$frostc$IR$Value* $tmp1561 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local56) = $tmp1560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
// line 486
org$frostlang$frostc$IR* $tmp1562 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1563 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1564 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1565 = *(&local56);
org$frostlang$frostc$IR$Block$ID $tmp1566 = *(&local38);
org$frostlang$frostc$IR$Block$ID $tmp1567 = *(&local17);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1563, $tmp1564, param1, $tmp1565, $tmp1566, $tmp1567);
$fn1569 $tmp1568 = ($fn1569) $tmp1562->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1570 = $tmp1568($tmp1562, $tmp1563);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
// line 489
org$frostlang$frostc$IR* $tmp1571 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1572 = *(&local38);
$fn1574 $tmp1573 = ($fn1574) $tmp1571->$class->vtable[4];
$tmp1573($tmp1571, $tmp1572);
// line 490
org$frostlang$frostc$IR$Value* $tmp1575 = *(&local39);
org$frostlang$frostc$IR$Value* $tmp1576 = *(&local10);
frost$collections$ListView* $tmp1577 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1576);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1578 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1579 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1578, $tmp1579);
org$frostlang$frostc$IR$Value* $tmp1580 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1575, &$s1581, $tmp1577, $tmp1578);
org$frostlang$frostc$Type* $tmp1582 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp1583 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1580, $tmp1582);
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
org$frostlang$frostc$IR$Value* $tmp1584 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local57) = $tmp1583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
// line 492
org$frostlang$frostc$IR$Value* $tmp1585 = *(&local57);
frost$core$Bit $tmp1586 = frost$core$Bit$init$builtin_bit($tmp1585 != NULL);
bool $tmp1587 = $tmp1586.value;
if ($tmp1587) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp1588 = (frost$core$Int64) {492};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1589, $tmp1588);
abort(); // unreachable
block69:;
// line 493
org$frostlang$frostc$IR* $tmp1590 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1591 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1592 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1593 = *(&local57);
org$frostlang$frostc$Type* $tmp1594 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp1595 = org$frostlang$frostc$statement$For$convertIndex$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1593, $tmp1594);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1596 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1597 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1598 = *(&local1);
org$frostlang$frostc$Type* $tmp1599 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1596, $tmp1597, $tmp1598, $tmp1599);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1591, $tmp1592, param1, $tmp1595, $tmp1596);
$fn1601 $tmp1600 = ($fn1601) $tmp1590->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1602 = $tmp1600($tmp1590, $tmp1591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
// line 495
org$frostlang$frostc$IR* $tmp1603 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp1604 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1605 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1606 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1604, $tmp1605, param1, $tmp1606);
$fn1608 $tmp1607 = ($fn1608) $tmp1603->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1609 = $tmp1607($tmp1603, $tmp1604);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
// line 497
org$frostlang$frostc$IR* $tmp1610 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1611 = *(&local17);
$fn1613 $tmp1612 = ($fn1613) $tmp1610->$class->vtable[4];
$tmp1612($tmp1610, $tmp1611);
org$frostlang$frostc$IR$Value* $tmp1614 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1615 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1616 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1617 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1618 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1619 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1620 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local49) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1621 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1622 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1623 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1624 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1625 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1626 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1627 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local22) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1628 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1629 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1630 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1631 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1632 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1633 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1634 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1635 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1636 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1637 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local7) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1638 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1639 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1640 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1641 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1642 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$core$Bit local2;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local4 = NULL;
org$frostlang$frostc$Compiler$Target* local5 = NULL;
org$frostlang$frostc$Variable* local6 = NULL;
// line 504
org$frostlang$frostc$IR** $tmp1643 = &param0->ir;
org$frostlang$frostc$IR* $tmp1644 = *$tmp1643;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
org$frostlang$frostc$IR* $tmp1645 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local0) = $tmp1644;
// line 505
$fn1647 $tmp1646 = ($fn1647) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1648 = $tmp1646(param4);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Type* $tmp1649 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local1) = $tmp1648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
// line 506
org$frostlang$frostc$Type* $tmp1650 = *(&local1);
frost$core$Bit $tmp1651 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1650);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block1; else goto block2;
block1:;
*(&local2) = $tmp1651;
goto block3;
block2:;
org$frostlang$frostc$Type* $tmp1653 = *(&local1);
frost$core$Bit $tmp1654 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1653);
*(&local2) = $tmp1654;
goto block3;
block3:;
frost$core$Bit $tmp1655 = *(&local2);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1657 = (frost$core$Int64) {506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1658, $tmp1657);
abort(); // unreachable
block4:;
// line 507
org$frostlang$frostc$Type* $tmp1659 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1660 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1659);
frost$core$Int64 $tmp1661 = (frost$core$Int64) {1};
frost$core$Object* $tmp1662 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1660, $tmp1661);
frost$core$Bit $tmp1663 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1662));
bool $tmp1664 = $tmp1663.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1662);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
if ($tmp1664) goto block6; else goto block7;
block6:;
// line 508
org$frostlang$frostc$Type* $tmp1665 = *(&local1);
frost$core$String* $tmp1666 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1667, ((frost$core$Object*) $tmp1665));
frost$core$String* $tmp1668 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1666, &$s1669);
frost$core$String* $tmp1670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1668, &$s1671);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1670);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
goto block7;
block7:;
// line 511
$fn1673 $tmp1672 = ($fn1673) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1674 = $tmp1672(param4);
frost$core$Bit $tmp1675 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp1674);
frost$core$Bit $tmp1676 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1675);
bool $tmp1677 = $tmp1676.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
if ($tmp1677) goto block8; else goto block9;
block8:;
// line 512
org$frostlang$frostc$Type* $tmp1678 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1679 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// line 514
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
// line 515
org$frostlang$frostc$Type* $tmp1680 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1681 = &$tmp1680->typeKind;
org$frostlang$frostc$Type$Kind $tmp1682 = *$tmp1681;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1683;
$tmp1683 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1683->value = $tmp1682;
frost$core$Int64 $tmp1684 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1685 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1684);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1686;
$tmp1686 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1686->value = $tmp1685;
ITable* $tmp1687 = ((frost$core$Equatable*) $tmp1683)->$class->itable;
while ($tmp1687->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1687 = $tmp1687->next;
}
$fn1689 $tmp1688 = $tmp1687->methods[0];
frost$core$Bit $tmp1690 = $tmp1688(((frost$core$Equatable*) $tmp1683), ((frost$core$Equatable*) $tmp1686));
bool $tmp1691 = $tmp1690.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1686)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1683)));
if ($tmp1691) goto block10; else goto block12;
block10:;
// line 516
$fn1693 $tmp1692 = ($fn1693) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1694 = $tmp1692(param4);
org$frostlang$frostc$FixedArray* $tmp1695 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1694);
frost$core$Int64 $tmp1696 = (frost$core$Int64) {0};
frost$core$Object* $tmp1697 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1695, $tmp1696);
org$frostlang$frostc$Type$Kind* $tmp1698 = &((org$frostlang$frostc$Type*) $tmp1697)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1699 = *$tmp1698;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1700;
$tmp1700 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1700->value = $tmp1699;
frost$core$Int64 $tmp1701 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1702 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1701);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1703;
$tmp1703 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1703->value = $tmp1702;
ITable* $tmp1704 = ((frost$core$Equatable*) $tmp1700)->$class->itable;
while ($tmp1704->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1704 = $tmp1704->next;
}
$fn1706 $tmp1705 = $tmp1704->methods[0];
frost$core$Bit $tmp1707 = $tmp1705(((frost$core$Equatable*) $tmp1700), ((frost$core$Equatable*) $tmp1703));
bool $tmp1708 = $tmp1707.value;
if ($tmp1708) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1709 = (frost$core$Int64) {516};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1710, $tmp1709);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1703)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1700)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
// line 517
$fn1712 $tmp1711 = ($fn1712) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1713 = $tmp1711(param4);
org$frostlang$frostc$FixedArray* $tmp1714 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1713);
frost$core$Int64 $tmp1715 = (frost$core$Int64) {0};
frost$core$Object* $tmp1716 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1714, $tmp1715);
org$frostlang$frostc$FixedArray* $tmp1717 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Type*) $tmp1716));
frost$core$Int64 $tmp1718 = (frost$core$Int64) {1};
frost$core$Object* $tmp1719 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1717, $tmp1718);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1719)));
org$frostlang$frostc$Type* $tmp1720 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1719);
frost$core$Frost$unref$frost$core$Object$Q($tmp1719);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$Frost$unref$frost$core$Object$Q($tmp1716);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
goto block11;
block12:;
// line 1
// line 520
org$frostlang$frostc$Type* $tmp1721 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1722 = &$tmp1721->typeKind;
org$frostlang$frostc$Type$Kind $tmp1723 = *$tmp1722;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1724;
$tmp1724 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1724->value = $tmp1723;
frost$core$Int64 $tmp1725 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1726 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1725);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1727;
$tmp1727 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1727->value = $tmp1726;
ITable* $tmp1728 = ((frost$core$Equatable*) $tmp1724)->$class->itable;
while ($tmp1728->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1728 = $tmp1728->next;
}
$fn1730 $tmp1729 = $tmp1728->methods[0];
frost$core$Bit $tmp1731 = $tmp1729(((frost$core$Equatable*) $tmp1724), ((frost$core$Equatable*) $tmp1727));
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1733 = (frost$core$Int64) {520};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1734, $tmp1733);
abort(); // unreachable
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1727)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1724)));
// line 521
$fn1736 $tmp1735 = ($fn1736) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1737 = $tmp1735(param4);
org$frostlang$frostc$FixedArray* $tmp1738 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1737);
frost$core$Int64 $tmp1739 = (frost$core$Int64) {1};
frost$core$Object* $tmp1740 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1738, $tmp1739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1740)));
org$frostlang$frostc$Type* $tmp1741 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1740);
frost$core$Frost$unref$frost$core$Object$Q($tmp1740);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
goto block11;
block11:;
// line 523
org$frostlang$frostc$Type* $tmp1742 = *(&local3);
frost$core$Bit $tmp1743 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1742);
frost$core$Bit $tmp1744 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1743);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block17; else goto block18;
block17:;
// line 524
$fn1747 $tmp1746 = ($fn1747) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1748 = $tmp1746(param4);
frost$core$String* $tmp1749 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1750, ((frost$core$Object*) $tmp1748));
frost$core$String* $tmp1751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1749, &$s1752);
frost$core$String* $tmp1753 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1754, $tmp1751);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1753);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
// line 526
org$frostlang$frostc$Type* $tmp1755 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1756 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1757 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block18:;
// line 528
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp1758 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1758, param0);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
org$frostlang$frostc$Compiler$AutoScope* $tmp1759 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
*(&local4) = $tmp1758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
// line 529
frost$core$Int64 $tmp1760 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1761 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1760);
org$frostlang$frostc$Type* $tmp1762 = *(&local3);
org$frostlang$frostc$Type* $tmp1763 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1762);
org$frostlang$frostc$Compiler$Target* $tmp1764 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp1761, ((org$frostlang$frostc$ASTNode*) NULL), $tmp1763);
*(&local5) = ((org$frostlang$frostc$Compiler$Target*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
org$frostlang$frostc$Compiler$Target* $tmp1765 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
*(&local5) = $tmp1764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
// line 531
org$frostlang$frostc$Compiler$Target* $tmp1766 = *(&local5);
frost$core$Bit $tmp1767 = frost$core$Bit$init$builtin_bit($tmp1766 == NULL);
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block19; else goto block20;
block19:;
// line 532
org$frostlang$frostc$Compiler$Target* $tmp1769 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
*(&local5) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1770 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1772 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1773 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
// line 534
org$frostlang$frostc$Compiler$Target* $tmp1774 = *(&local5);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp1774);
// line 535
org$frostlang$frostc$Compiler$Target* $tmp1775 = *(&local5);
frost$core$Int64* $tmp1776 = &$tmp1775->$rawValue;
frost$core$Int64 $tmp1777 = *$tmp1776;
frost$core$Int64 $tmp1778 = (frost$core$Int64) {0};
frost$core$Bit $tmp1779 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1777, $tmp1778);
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Variable** $tmp1781 = (org$frostlang$frostc$Variable**) ($tmp1775->$data + 0);
org$frostlang$frostc$Variable* $tmp1782 = *$tmp1781;
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
org$frostlang$frostc$Variable* $tmp1783 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local6) = $tmp1782;
org$frostlang$frostc$IR$Value** $tmp1784 = (org$frostlang$frostc$IR$Value**) ($tmp1775->$data + 8);
org$frostlang$frostc$IR$Value* $tmp1785 = *$tmp1784;
// line 537
org$frostlang$frostc$Type* $tmp1786 = *(&local1);
frost$core$Bit $tmp1787 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1786);
bool $tmp1788 = $tmp1787.value;
if ($tmp1788) goto block24; else goto block26;
block24:;
// line 538
org$frostlang$frostc$Variable* $tmp1789 = *(&local6);
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp1789, param4, param5);
goto block25;
block26:;
// line 1
// line 541
org$frostlang$frostc$Variable* $tmp1790 = *(&local6);
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, $tmp1790, param4, param5);
goto block25;
block25:;
org$frostlang$frostc$Variable* $tmp1791 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local6) = ((org$frostlang$frostc$Variable*) NULL);
goto block21;
block23:;
// line 545
frost$core$Bit $tmp1792 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1794 = (frost$core$Int64) {545};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1795, $tmp1794);
abort(); // unreachable
block27:;
goto block21;
block21:;
org$frostlang$frostc$Compiler$Target* $tmp1796 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local5) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1797 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1798 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1799 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1800 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
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
// line 554
org$frostlang$frostc$IR** $tmp1801 = &param0->ir;
org$frostlang$frostc$IR* $tmp1802 = *$tmp1801;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
org$frostlang$frostc$IR* $tmp1803 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local0) = $tmp1802;
// line 555
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 556
frost$core$Int64* $tmp1804 = &param3->$rawValue;
frost$core$Int64 $tmp1805 = *$tmp1804;
frost$core$Int64 $tmp1806 = (frost$core$Int64) {48};
frost$core$Bit $tmp1807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1805, $tmp1806);
bool $tmp1808 = $tmp1807.value;
if ($tmp1808) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1809 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1810 = *$tmp1809;
*(&local2) = $tmp1810;
frost$core$String** $tmp1811 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1812 = *$tmp1811;
org$frostlang$frostc$ASTNode** $tmp1813 = (org$frostlang$frostc$ASTNode**) (param3->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1814 = *$tmp1813;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
org$frostlang$frostc$ASTNode* $tmp1815 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
*(&local3) = $tmp1814;
// line 558
org$frostlang$frostc$Scanner** $tmp1816 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1817 = *$tmp1816;
org$frostlang$frostc$ASTNode* $tmp1818 = *(&local3);
org$frostlang$frostc$Type* $tmp1819 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1817, $tmp1818);
org$frostlang$frostc$Type* $tmp1820 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1819);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
org$frostlang$frostc$Type* $tmp1821 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local4) = $tmp1820;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
// line 559
org$frostlang$frostc$Type* $tmp1822 = *(&local4);
frost$core$Bit $tmp1823 = frost$core$Bit$init$builtin_bit($tmp1822 == NULL);
bool $tmp1824 = $tmp1823.value;
if ($tmp1824) goto block4; else goto block5;
block4:;
// line 560
org$frostlang$frostc$Type* $tmp1825 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1826 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block5:;
// line 562
org$frostlang$frostc$Type* $tmp1829 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp1830 = &$tmp1829->typeKind;
org$frostlang$frostc$Type$Kind $tmp1831 = *$tmp1830;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1832;
$tmp1832 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1832->value = $tmp1831;
frost$core$Int64 $tmp1833 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1834 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1833);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1835;
$tmp1835 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1835->value = $tmp1834;
ITable* $tmp1836 = ((frost$core$Equatable*) $tmp1832)->$class->itable;
while ($tmp1836->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1836 = $tmp1836->next;
}
$fn1838 $tmp1837 = $tmp1836->methods[0];
frost$core$Bit $tmp1839 = $tmp1837(((frost$core$Equatable*) $tmp1832), ((frost$core$Equatable*) $tmp1835));
bool $tmp1840 = $tmp1839.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1835)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1832)));
if ($tmp1840) goto block6; else goto block7;
block6:;
// line 563
org$frostlang$frostc$Position $tmp1841 = *(&local2);
org$frostlang$frostc$Type* $tmp1842 = *(&local4);
frost$core$String* $tmp1843 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1844, ((frost$core$Object*) $tmp1842));
frost$core$String* $tmp1845 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1843, &$s1846);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1841, $tmp1845);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
// line 564
org$frostlang$frostc$Type* $tmp1847 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1848 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1849 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 566
org$frostlang$frostc$Type* $tmp1851 = *(&local4);
frost$core$Bit $tmp1852 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1851);
frost$core$Bit $tmp1853 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1852);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block8; else goto block9;
block8:;
// line 567
org$frostlang$frostc$Position $tmp1855 = *(&local2);
org$frostlang$frostc$Type* $tmp1856 = *(&local4);
frost$core$String* $tmp1857 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1858, ((frost$core$Object*) $tmp1856));
frost$core$String* $tmp1859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1857, &$s1860);
frost$core$String* $tmp1861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1862, $tmp1859);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1855, $tmp1861);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// line 569
org$frostlang$frostc$Type* $tmp1863 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1864 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1865 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1866 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
// line 571
frost$core$Int64* $tmp1867 = &param4->$rawValue;
frost$core$Int64 $tmp1868 = *$tmp1867;
frost$core$Int64 $tmp1869 = (frost$core$Int64) {35};
frost$core$Bit $tmp1870 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1868, $tmp1869);
bool $tmp1871 = $tmp1870.value;
if ($tmp1871) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp1872 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1873 = *$tmp1872;
org$frostlang$frostc$ASTNode** $tmp1874 = (org$frostlang$frostc$ASTNode**) (param4->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1875 = *$tmp1874;
frost$core$Bit* $tmp1876 = (frost$core$Bit*) (param4->$data + 24);
frost$core$Bit $tmp1877 = *$tmp1876;
org$frostlang$frostc$ASTNode** $tmp1878 = (org$frostlang$frostc$ASTNode**) (param4->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1879 = *$tmp1878;
org$frostlang$frostc$ASTNode** $tmp1880 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1881 = *$tmp1880;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
org$frostlang$frostc$ASTNode* $tmp1882 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
*(&local5) = $tmp1881;
// line 573
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 574
org$frostlang$frostc$ASTNode* $tmp1883 = *(&local5);
frost$core$Bit $tmp1884 = frost$core$Bit$init$builtin_bit($tmp1883 != NULL);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block13; else goto block15;
block13:;
// line 575
org$frostlang$frostc$Type* $tmp1886 = *(&local4);
org$frostlang$frostc$Type* $tmp1887 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
org$frostlang$frostc$Type* $tmp1888 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local6) = $tmp1887;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
goto block14;
block15:;
// line 1
// line 578
org$frostlang$frostc$Type* $tmp1889 = *(&local4);
org$frostlang$frostc$Type* $tmp1890 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
org$frostlang$frostc$Type* $tmp1891 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local6) = $tmp1890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
goto block14;
block14:;
// line 580
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1892 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1893 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1894 = *(&local6);
frost$core$Bit $tmp1895 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1892, $tmp1893, $tmp1894, $tmp1895);
org$frostlang$frostc$IR$Value* $tmp1896 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1892);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
org$frostlang$frostc$IR$Value* $tmp1897 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
*(&local1) = $tmp1896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
org$frostlang$frostc$Type* $tmp1898 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1899 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block10;
block12:;
// line 583
frost$core$Int64 $tmp1900 = (frost$core$Int64) {583};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1901, $tmp1900);
abort(); // unreachable
block10:;
org$frostlang$frostc$Type* $tmp1902 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1903 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 588
org$frostlang$frostc$Type* $tmp1904 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
org$frostlang$frostc$Type* $tmp1905 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local7) = $tmp1904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
// line 589
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1906 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1907 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1906, $tmp1907);
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
org$frostlang$frostc$Compiler$TypeContext* $tmp1908 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local8) = $tmp1906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
// line 590
org$frostlang$frostc$Type* $tmp1909 = *(&local7);
frost$core$Bit $tmp1910 = frost$core$Bit$init$builtin_bit($tmp1909 != NULL);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block19; else goto block18;
block19:;
org$frostlang$frostc$Type* $tmp1912 = *(&local7);
frost$core$Bit $tmp1913 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1912);
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block16; else goto block18;
block16:;
// line 591
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1915 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1916 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1917 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1918 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1917);
frost$core$Int64 $tmp1919 = (frost$core$Int64) {1};
frost$core$Object* $tmp1920 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1918, $tmp1919);
org$frostlang$frostc$Type* $tmp1921 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1920));
org$frostlang$frostc$Type* $tmp1922 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1921);
frost$core$Bit $tmp1923 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1915, $tmp1916, $tmp1922, $tmp1923);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
org$frostlang$frostc$Compiler$TypeContext* $tmp1924 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
*(&local8) = $tmp1915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
frost$core$Frost$unref$frost$core$Object$Q($tmp1920);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
goto block17;
block18:;
// line 594
org$frostlang$frostc$Type* $tmp1925 = *(&local7);
frost$core$Bit $tmp1926 = frost$core$Bit$init$builtin_bit($tmp1925 != NULL);
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block22; else goto block21;
block22:;
org$frostlang$frostc$Type* $tmp1928 = *(&local7);
frost$core$Bit $tmp1929 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1928);
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block20; else goto block21;
block20:;
// line 595
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1931 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1932 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1933 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1934 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1933);
frost$core$Int64 $tmp1935 = (frost$core$Int64) {1};
frost$core$Object* $tmp1936 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1934, $tmp1935);
org$frostlang$frostc$Type* $tmp1937 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1936));
org$frostlang$frostc$Type* $tmp1938 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1939 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1938);
frost$core$Int64 $tmp1940 = (frost$core$Int64) {2};
frost$core$Object* $tmp1941 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1939, $tmp1940);
org$frostlang$frostc$Type* $tmp1942 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1937, ((org$frostlang$frostc$Type*) $tmp1941));
frost$core$Bit $tmp1943 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1931, $tmp1932, $tmp1942, $tmp1943);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
org$frostlang$frostc$Compiler$TypeContext* $tmp1944 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local8) = $tmp1931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
frost$core$Frost$unref$frost$core$Object$Q($tmp1941);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
frost$core$Frost$unref$frost$core$Object$Q($tmp1936);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
goto block21;
block21:;
goto block17;
block17:;
// line 598
org$frostlang$frostc$Compiler$TypeContext* $tmp1945 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1946 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1945);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
org$frostlang$frostc$IR$Value* $tmp1947 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
*(&local1) = $tmp1946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
org$frostlang$frostc$Compiler$TypeContext* $tmp1948 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp1949 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 601
org$frostlang$frostc$IR$Value* $tmp1950 = *(&local1);
frost$core$Bit $tmp1951 = frost$core$Bit$init$builtin_bit($tmp1950 == NULL);
bool $tmp1952 = $tmp1951.value;
if ($tmp1952) goto block23; else goto block24;
block23:;
// line 602
org$frostlang$frostc$IR$Value* $tmp1953 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block24:;
// line 604
org$frostlang$frostc$IR$Value* $tmp1955 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1955, param5);
org$frostlang$frostc$IR$Value* $tmp1956 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1957 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
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
org$frostlang$frostc$Compiler$Target* local8 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
// line 611
org$frostlang$frostc$IR** $tmp1958 = &param0->ir;
org$frostlang$frostc$IR* $tmp1959 = *$tmp1958;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$IR* $tmp1960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
*(&local0) = $tmp1959;
// line 612
org$frostlang$frostc$IR* $tmp1961 = *(&local0);
$fn1963 $tmp1962 = ($fn1963) $tmp1961->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1964 = $tmp1962($tmp1961, &$s1965);
*(&local1) = $tmp1964;
// line 613
org$frostlang$frostc$IR* $tmp1966 = *(&local0);
$fn1968 $tmp1967 = ($fn1968) $tmp1966->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1969 = $tmp1967($tmp1966, &$s1970);
*(&local2) = $tmp1969;
// line 614
org$frostlang$frostc$IR* $tmp1971 = *(&local0);
$fn1973 $tmp1972 = ($fn1973) $tmp1971->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1974 = $tmp1972($tmp1971, &$s1975);
*(&local3) = $tmp1974;
// line 615
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp1976 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1977 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1978 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1979 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1980 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1977, $tmp1978, param2, $tmp1979, $tmp1980);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1976, param0, $tmp1977);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
org$frostlang$frostc$Compiler$AutoContext* $tmp1981 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
*(&local4) = $tmp1976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
// line 616
$fn1983 $tmp1982 = ($fn1983) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1984 = $tmp1982(param4);
org$frostlang$frostc$Type$Kind* $tmp1985 = &$tmp1984->typeKind;
org$frostlang$frostc$Type$Kind $tmp1986 = *$tmp1985;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1987;
$tmp1987 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1987->value = $tmp1986;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp1989 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1988);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1990;
$tmp1990 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1990->value = $tmp1989;
ITable* $tmp1991 = ((frost$core$Equatable*) $tmp1987)->$class->itable;
while ($tmp1991->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1991 = $tmp1991->next;
}
$fn1993 $tmp1992 = $tmp1991->methods[0];
frost$core$Bit $tmp1994 = $tmp1992(((frost$core$Equatable*) $tmp1987), ((frost$core$Equatable*) $tmp1990));
bool $tmp1995 = $tmp1994.value;
if ($tmp1995) goto block1; else goto block2;
block1:;
$fn1997 $tmp1996 = ($fn1997) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1998 = $tmp1996(param4);
org$frostlang$frostc$FixedArray* $tmp1999 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1998);
frost$core$Int64 $tmp2000 = (frost$core$Int64) {0};
frost$core$Object* $tmp2001 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1999, $tmp2000);
org$frostlang$frostc$Type* $tmp2002 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2003 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2001), $tmp2002);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
frost$core$Frost$unref$frost$core$Object$Q($tmp2001);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local5) = $tmp2003;
goto block3;
block2:;
*(&local5) = $tmp1994;
goto block3;
block3:;
frost$core$Bit $tmp2004 = *(&local5);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2006 = (frost$core$Int64) {616};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2007, $tmp2006);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1990)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1987)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// line 618
org$frostlang$frostc$IR* $tmp2008 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2009 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2010 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2011 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2009, $tmp2010, param1, $tmp2011);
$fn2013 $tmp2012 = ($fn2013) $tmp2008->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2014 = $tmp2012($tmp2008, $tmp2009);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
// line 619
org$frostlang$frostc$IR* $tmp2015 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2016 = *(&local1);
$fn2018 $tmp2017 = ($fn2018) $tmp2015->$class->vtable[4];
$tmp2017($tmp2015, $tmp2016);
// line 620
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2019 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2019);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2020 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2021 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp2022 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2023 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp2020, $tmp2021, $tmp2022, $tmp2023);
org$frostlang$frostc$IR$Value* $tmp2024 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s2025, ((frost$collections$ListView*) $tmp2019), $tmp2020);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
org$frostlang$frostc$IR$Value* $tmp2026 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local6) = $tmp2024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
// line 622
org$frostlang$frostc$IR$Value* $tmp2027 = *(&local6);
frost$core$Bit $tmp2028 = frost$core$Bit$init$builtin_bit($tmp2027 == NULL);
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block6; else goto block7;
block6:;
// line 623
org$frostlang$frostc$IR$Value* $tmp2030 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2031 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2032 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 625
org$frostlang$frostc$IR* $tmp2033 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2034 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2035 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2036 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp2037 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2036);
org$frostlang$frostc$IR$Block$ID $tmp2038 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp2039 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2034, $tmp2035, param1, $tmp2037, $tmp2038, $tmp2039);
$fn2041 $tmp2040 = ($fn2041) $tmp2033->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2042 = $tmp2040($tmp2033, $tmp2034);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
// line 627
org$frostlang$frostc$IR* $tmp2043 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2044 = *(&local2);
$fn2046 $tmp2045 = ($fn2046) $tmp2043->$class->vtable[4];
$tmp2045($tmp2043, $tmp2044);
// line 1
// line 629
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp2047 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp2047, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
org$frostlang$frostc$Compiler$AutoScope* $tmp2048 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local7) = $tmp2047;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
// line 630
*(&local8) = ((org$frostlang$frostc$Compiler$Target*) NULL);
// line 1
// line 632
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2049 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2049, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2050 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local9) = $tmp2049;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
// line 633
frost$core$Int64 $tmp2051 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp2052 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp2051);
$fn2054 $tmp2053 = ($fn2054) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2055 = $tmp2053(param4);
org$frostlang$frostc$FixedArray* $tmp2056 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2055);
frost$core$Int64 $tmp2057 = (frost$core$Int64) {1};
frost$core$Object* $tmp2058 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2056, $tmp2057);
org$frostlang$frostc$Compiler$Target* $tmp2059 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Compiler$Target$Q(param0, param3, $tmp2052, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp2058));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
org$frostlang$frostc$Compiler$Target* $tmp2060 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local8) = $tmp2059;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
frost$core$Frost$unref$frost$core$Object$Q($tmp2058);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
// line 635
org$frostlang$frostc$Compiler$Target* $tmp2061 = *(&local8);
frost$core$Bit $tmp2062 = frost$core$Bit$init$builtin_bit($tmp2061 == NULL);
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block8; else goto block9;
block8:;
// line 636
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2064 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp2065 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local8) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2066 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp2067 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2068 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2069 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2070 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 639
org$frostlang$frostc$Compiler$Target* $tmp2071 = *(&local8);
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(param0, $tmp2071);
// line 640
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 641
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2072 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2072);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2073 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2074 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2073, $tmp2074);
org$frostlang$frostc$IR$Value* $tmp2075 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s2076, ((frost$collections$ListView*) $tmp2072), $tmp2073);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
org$frostlang$frostc$IR$Value* $tmp2077 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local10) = $tmp2075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
// line 643
org$frostlang$frostc$IR$Value* $tmp2078 = *(&local10);
frost$core$Bit $tmp2079 = frost$core$Bit$init$builtin_bit($tmp2078 == NULL);
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block10; else goto block11;
block10:;
// line 644
org$frostlang$frostc$IR$Value* $tmp2081 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp2082 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
*(&local8) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2083 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp2084 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2085 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2086 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block11:;
// line 646
org$frostlang$frostc$Compiler$Target* $tmp2087 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp2088 = *(&local10);
org$frostlang$frostc$Compiler$compileStore$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$Target$org$frostlang$frostc$IR$Value(param0, param1, $tmp2087, $tmp2088);
// line 647
ITable* $tmp2089 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2089->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2089 = $tmp2089->next;
}
$fn2091 $tmp2090 = $tmp2089->methods[0];
frost$collections$Iterator* $tmp2092 = $tmp2090(((frost$collections$Iterable*) param5));
goto block12;
block12:;
ITable* $tmp2093 = $tmp2092->$class->itable;
while ($tmp2093->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2093 = $tmp2093->next;
}
$fn2095 $tmp2094 = $tmp2093->methods[0];
frost$core$Bit $tmp2096 = $tmp2094($tmp2092);
bool $tmp2097 = $tmp2096.value;
if ($tmp2097) goto block14; else goto block13;
block13:;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2098 = $tmp2092->$class->itable;
while ($tmp2098->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2098 = $tmp2098->next;
}
$fn2100 $tmp2099 = $tmp2098->methods[1];
frost$core$Object* $tmp2101 = $tmp2099($tmp2092);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2101)));
org$frostlang$frostc$ASTNode* $tmp2102 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
*(&local11) = ((org$frostlang$frostc$ASTNode*) $tmp2101);
// line 648
org$frostlang$frostc$ASTNode* $tmp2103 = *(&local11);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp2103);
frost$core$Frost$unref$frost$core$Object$Q($tmp2101);
org$frostlang$frostc$ASTNode* $tmp2104 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
org$frostlang$frostc$IR$Value* $tmp2105 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$Target* $tmp2106 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
*(&local8) = ((org$frostlang$frostc$Compiler$Target*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp2107 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 651
org$frostlang$frostc$IR* $tmp2108 = *(&local0);
$fn2110 $tmp2109 = ($fn2110) $tmp2108->$class->vtable[5];
frost$core$Bit $tmp2111 = $tmp2109($tmp2108);
frost$core$Bit $tmp2112 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2111);
bool $tmp2113 = $tmp2112.value;
if ($tmp2113) goto block15; else goto block16;
block15:;
// line 652
org$frostlang$frostc$IR* $tmp2114 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2115 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2117 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2115, $tmp2116, param1, $tmp2117);
$fn2119 $tmp2118 = ($fn2119) $tmp2114->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2120 = $tmp2118($tmp2114, $tmp2115);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
goto block16;
block16:;
// line 654
org$frostlang$frostc$IR* $tmp2121 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2122 = *(&local3);
$fn2124 $tmp2123 = ($fn2124) $tmp2121->$class->vtable[4];
$tmp2123($tmp2121, $tmp2122);
org$frostlang$frostc$IR$Value* $tmp2125 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp2126 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp2127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 660
frost$core$Int64* $tmp2128 = &param4->$rawValue;
frost$core$Int64 $tmp2129 = *$tmp2128;
frost$core$Int64 $tmp2130 = (frost$core$Int64) {35};
frost$core$Bit $tmp2131 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2129, $tmp2130);
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block2; else goto block1;
block2:;
// line 664
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 665
return;
block1:;
// line 668
org$frostlang$frostc$IR$Value* $tmp2133 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, param4);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
org$frostlang$frostc$IR$Value* $tmp2134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
*(&local0) = $tmp2133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
// line 669
org$frostlang$frostc$IR$Value* $tmp2135 = *(&local0);
frost$core$Bit $tmp2136 = frost$core$Bit$init$builtin_bit($tmp2135 == NULL);
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block3; else goto block4;
block3:;
// line 670
org$frostlang$frostc$IR$Value* $tmp2138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block4:;
// line 672
org$frostlang$frostc$IR$Value* $tmp2139 = *(&local0);
$fn2141 $tmp2140 = ($fn2141) $tmp2139->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2142 = $tmp2140($tmp2139);
frost$core$Bit $tmp2143 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp2142);
bool $tmp2144 = $tmp2143.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
if ($tmp2144) goto block5; else goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp2145 = *(&local0);
$fn2147 $tmp2146 = ($fn2147) $tmp2145->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2148 = $tmp2146($tmp2145);
frost$core$Bit $tmp2149 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp2148);
bool $tmp2150 = $tmp2149.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
if ($tmp2150) goto block5; else goto block7;
block5:;
// line 674
org$frostlang$frostc$IR$Value* $tmp2151 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2151, param5);
goto block6;
block7:;
// line 1
// line 677
org$frostlang$frostc$IR$Value* $tmp2152 = *(&local0);
$fn2154 $tmp2153 = ($fn2154) $tmp2152->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2155 = $tmp2153($tmp2152);
frost$collections$HashSet* $tmp2156 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp2155);
ITable* $tmp2157 = ((frost$collections$Iterable*) $tmp2156)->$class->itable;
while ($tmp2157->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2157 = $tmp2157->next;
}
$fn2159 $tmp2158 = $tmp2157->methods[0];
frost$collections$Iterator* $tmp2160 = $tmp2158(((frost$collections$Iterable*) $tmp2156));
goto block9;
block9:;
ITable* $tmp2161 = $tmp2160->$class->itable;
while ($tmp2161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2161 = $tmp2161->next;
}
$fn2163 $tmp2162 = $tmp2161->methods[0];
frost$core$Bit $tmp2164 = $tmp2162($tmp2160);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block11; else goto block10;
block10:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp2166 = $tmp2160->$class->itable;
while ($tmp2166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2166 = $tmp2166->next;
}
$fn2168 $tmp2167 = $tmp2166->methods[1];
frost$core$Object* $tmp2169 = $tmp2167($tmp2160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2169)));
org$frostlang$frostc$Type* $tmp2170 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp2169);
// line 678
org$frostlang$frostc$Type* $tmp2171 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2172 = &$tmp2171->typeKind;
org$frostlang$frostc$Type$Kind $tmp2173 = *$tmp2172;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2174;
$tmp2174 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2174->value = $tmp2173;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2176 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2175);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2177;
$tmp2177 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2177->value = $tmp2176;
ITable* $tmp2178 = ((frost$core$Equatable*) $tmp2174)->$class->itable;
while ($tmp2178->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2178 = $tmp2178->next;
}
$fn2180 $tmp2179 = $tmp2178->methods[0];
frost$core$Bit $tmp2181 = $tmp2179(((frost$core$Equatable*) $tmp2174), ((frost$core$Equatable*) $tmp2177));
bool $tmp2182 = $tmp2181.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2177)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2174)));
if ($tmp2182) goto block14; else goto block13;
block14:;
org$frostlang$frostc$Type* $tmp2183 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2184 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2183);
frost$core$Int64 $tmp2185 = (frost$core$Int64) {0};
frost$core$Object* $tmp2186 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2184, $tmp2185);
org$frostlang$frostc$Type* $tmp2187 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2188 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2186), $tmp2187);
bool $tmp2189 = $tmp2188.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q($tmp2186);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
if ($tmp2189) goto block12; else goto block13;
block12:;
// line 679
$fn2191 $tmp2190 = ($fn2191) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2192 = $tmp2190(param4);
org$frostlang$frostc$IR$Value* $tmp2193 = *(&local0);
org$frostlang$frostc$Type* $tmp2194 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp2195 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2192, $tmp2193, $tmp2194);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
org$frostlang$frostc$IR$Value* $tmp2196 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local2) = $tmp2195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// line 680
org$frostlang$frostc$IR$Value* $tmp2197 = *(&local2);
frost$core$Bit $tmp2198 = frost$core$Bit$init$builtin_bit($tmp2197 == NULL);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block15; else goto block16;
block15:;
// line 681
org$frostlang$frostc$IR$Value* $tmp2200 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2169);
org$frostlang$frostc$Type* $tmp2201 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$IR$Value* $tmp2202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block16:;
// line 683
org$frostlang$frostc$IR$Value* $tmp2203 = *(&local2);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2203, param5);
// line 684
org$frostlang$frostc$IR$Value* $tmp2204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2169);
org$frostlang$frostc$Type* $tmp2205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$IR$Value* $tmp2206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block13:;
// line 686
org$frostlang$frostc$Type* $tmp2207 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2208 = &$tmp2207->typeKind;
org$frostlang$frostc$Type$Kind $tmp2209 = *$tmp2208;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2210;
$tmp2210 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2210->value = $tmp2209;
frost$core$Int64 $tmp2211 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp2212 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2211);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2213;
$tmp2213 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2213->value = $tmp2212;
ITable* $tmp2214 = ((frost$core$Equatable*) $tmp2210)->$class->itable;
while ($tmp2214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2214 = $tmp2214->next;
}
$fn2216 $tmp2215 = $tmp2214->methods[0];
frost$core$Bit $tmp2217 = $tmp2215(((frost$core$Equatable*) $tmp2210), ((frost$core$Equatable*) $tmp2213));
bool $tmp2218 = $tmp2217.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2213)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2210)));
if ($tmp2218) goto block19; else goto block18;
block19:;
org$frostlang$frostc$Type* $tmp2219 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2220 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2219);
frost$core$Int64 $tmp2221 = (frost$core$Int64) {0};
frost$core$Object* $tmp2222 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2220, $tmp2221);
org$frostlang$frostc$Type* $tmp2223 = org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp2224 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp2222), $tmp2223);
bool $tmp2225 = $tmp2224.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
frost$core$Frost$unref$frost$core$Object$Q($tmp2222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
if ($tmp2225) goto block17; else goto block18;
block17:;
// line 687
$fn2227 $tmp2226 = ($fn2227) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2228 = $tmp2226(param4);
org$frostlang$frostc$IR$Value* $tmp2229 = *(&local0);
org$frostlang$frostc$Type* $tmp2230 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp2231 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2228, $tmp2229, $tmp2230);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
org$frostlang$frostc$IR$Value* $tmp2232 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local3) = $tmp2231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
// line 688
org$frostlang$frostc$IR$Value* $tmp2233 = *(&local3);
frost$core$Bit $tmp2234 = frost$core$Bit$init$builtin_bit($tmp2233 == NULL);
bool $tmp2235 = $tmp2234.value;
if ($tmp2235) goto block20; else goto block21;
block20:;
// line 689
org$frostlang$frostc$IR$Value* $tmp2236 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2169);
org$frostlang$frostc$Type* $tmp2237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$IR$Value* $tmp2238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block21:;
// line 691
org$frostlang$frostc$IR$Value* $tmp2239 = *(&local3);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2240 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2240);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2241 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2242 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2241, $tmp2242);
org$frostlang$frostc$IR$Value* $tmp2243 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2239, &$s2244, ((frost$collections$ListView*) $tmp2240), $tmp2241);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
org$frostlang$frostc$IR$Value* $tmp2245 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local4) = $tmp2243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// line 693
org$frostlang$frostc$IR$Value* $tmp2246 = *(&local4);
frost$core$Bit $tmp2247 = frost$core$Bit$init$builtin_bit($tmp2246 != NULL);
bool $tmp2248 = $tmp2247.value;
if ($tmp2248) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2249 = (frost$core$Int64) {693};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2250, $tmp2249);
abort(); // unreachable
block22:;
// line 694
org$frostlang$frostc$IR$Value* $tmp2251 = *(&local4);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp2251, param5);
// line 695
org$frostlang$frostc$IR$Value* $tmp2252 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2253 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2169);
org$frostlang$frostc$Type* $tmp2254 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
org$frostlang$frostc$IR$Value* $tmp2255 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2169);
org$frostlang$frostc$Type* $tmp2256 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
// line 698
$fn2258 $tmp2257 = ($fn2258) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp2259 = $tmp2257(param4);
org$frostlang$frostc$IR$Value* $tmp2260 = *(&local0);
$fn2262 $tmp2261 = ($fn2262) $tmp2260->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2263 = $tmp2261($tmp2260);
frost$core$String* $tmp2264 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2265, ((frost$core$Object*) $tmp2263));
frost$core$String* $tmp2266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2264, &$s2267);
frost$core$String* $tmp2268 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2269, $tmp2266);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2259, $tmp2268);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
goto block6;
block6:;
org$frostlang$frostc$IR$Value* $tmp2270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;

}
void org$frostlang$frostc$statement$For$init(org$frostlang$frostc$statement$For* param0) {

return;

}
void org$frostlang$frostc$statement$For$cleanup(org$frostlang$frostc$statement$For* param0) {

// line 21
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

