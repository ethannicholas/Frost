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
typedef org$frostlang$frostc$Type* (*$fn116)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn126)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn132)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn138)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn146)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn172)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn181)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn203)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn206)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn209)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn235)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn246)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn249)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn252)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn279)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn282)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn298)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn323)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn328)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn333)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn338)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn343)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn361)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn366)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn385)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn390)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn409)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn414)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn417)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn421)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn426)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn436)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn445)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn450)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn453)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn466)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn493)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn498)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn508)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn513)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn532)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn537)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn556)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn561)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn581)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn588)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn593)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn613)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn623)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn629)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn635)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn643)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn669)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn685)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn691)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn699)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn722)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn725)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn738)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn749)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn752)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn765)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn768)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn774)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn788)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn803)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn823)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn826)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn833)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn838)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn843)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn848)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn853)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn911)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn916)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn919)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn924)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn934)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn939)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn958)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn963)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn982)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn987)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn990)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn995)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1005)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1010)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1029)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1034)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1053)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1058)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1061)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1065)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1070)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1082)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1091)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1096)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1099)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1112)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1118)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1123)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1133)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1138)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1152)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1157)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1167)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1172)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1191)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1196)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1215)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1220)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1234)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1239)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1249)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1254)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1273)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1278)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1297)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1302)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1322)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1329)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1334)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1361)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1366)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1374)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1381)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1391)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1395)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1409)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1415)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1427)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1437)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1443)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1455)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1502)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1546)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1674)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1679)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1684)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn1694)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1704)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1708)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1725)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1730)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1753)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1758)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1766)(org$frostlang$frostc$IR$Value*);
typedef void (*$fn1824)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1827)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1831)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1836)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1847)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1856)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1861)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1878)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1884)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1891)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1896)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1900)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1905)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1917)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1929)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn1954)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1966)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1997)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn2001)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, -8546630798215305666, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s972 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s1019 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s1145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s1241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s1486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s1554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s1681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s1719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s1806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s1989 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s2004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s2006 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

frost$core$Bit org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4)));
if ($tmp12) goto block1; else goto block2;
block1:;
// line 25
org$frostlang$frostc$FixedArray** $tmp13 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp14 = *$tmp13;
frost$core$Int64 $tmp15 = (frost$core$Int64) {0};
frost$core$Object* $tmp16 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp14, $tmp15);
frost$core$Bit $tmp17 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, ((org$frostlang$frostc$Type*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q($tmp16);
return $tmp17;
block2:;
// line 27
frost$core$Bit $tmp18 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit(param2);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block3; else goto block4;
block3:;
// line 28
org$frostlang$frostc$FixedArray** $tmp20 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp21 = *$tmp20;
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
frost$core$Object* $tmp23 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp21, $tmp22);
org$frostlang$frostc$Type* $tmp24 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp23));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type* $tmp25 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local0) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// line 29
org$frostlang$frostc$FixedArray** $tmp26 = &param2->subtypes;
org$frostlang$frostc$FixedArray* $tmp27 = *$tmp26;
frost$core$Int64 $tmp28 = (frost$core$Int64) {2};
frost$core$Object* $tmp29 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp27, $tmp28);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp29)));
org$frostlang$frostc$Type* $tmp30 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp29);
frost$core$Frost$unref$frost$core$Object$Q($tmp29);
// line 30
org$frostlang$frostc$Type* $tmp31 = *(&local0);
org$frostlang$frostc$Type* $tmp32 = *(&local1);
frost$core$Bit $tmp33 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block5; else goto block6;
block5:;
// line 31
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp36 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp35;
block6:;
// line 33
org$frostlang$frostc$Type* $tmp38 = *(&local0);
frost$core$Bit $tmp39 = org$frostlang$frostc$Type$get_isChar$R$frost$core$Bit($tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block10; else goto block8;
block10:;
org$frostlang$frostc$Type* $tmp41 = *(&local1);
frost$core$String** $tmp42 = &((org$frostlang$frostc$Symbol*) $tmp41)->name;
frost$core$String* $tmp43 = *$tmp42;
frost$core$Bit $tmp44 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp43, &$s45);
bool $tmp46 = $tmp44.value;
if ($tmp46) goto block9; else goto block8;
block9:;
org$frostlang$frostc$Type* $tmp47 = *(&local0);
frost$core$String** $tmp48 = &((org$frostlang$frostc$Symbol*) $tmp47)->name;
frost$core$String* $tmp49 = *$tmp48;
org$frostlang$frostc$Type* $tmp50 = *(&local1);
frost$core$String** $tmp51 = &((org$frostlang$frostc$Symbol*) $tmp50)->name;
frost$core$String* $tmp52 = *$tmp51;
frost$core$Int64 $tmp53 = frost$core$String$get_length$R$frost$core$Int64(&$s54);
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp56 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp53, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp55);
frost$core$String* $tmp57 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp52, $tmp56);
frost$core$Bit $tmp58 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp49, $tmp57);
bool $tmp59 = $tmp58.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
if ($tmp59) goto block7; else goto block8;
block7:;
// line 35
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp60;
block8:;
// line 37
frost$core$String* $tmp63 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s64, ((frost$core$Object*) param2));
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp63, &$s66);
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, &$s68);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// line 39
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp70 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp69;
block4:;
// line 41
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit(true);
return $tmp72;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 47
org$frostlang$frostc$Type* $tmp73 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp74 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp75 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp73, $tmp74);
bool $tmp76 = $tmp75.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
if ($tmp76) goto block2; else goto block3;
block2:;
// line 48
org$frostlang$frostc$Type* $tmp77 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return $tmp77;
block3:;
org$frostlang$frostc$Type* $tmp78 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp79 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp73, $tmp78);
bool $tmp80 = $tmp79.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
if ($tmp80) goto block4; else goto block5;
block4:;
// line 49
org$frostlang$frostc$Type* $tmp81 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return $tmp81;
block5:;
org$frostlang$frostc$Type* $tmp82 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp83 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp73, $tmp82);
bool $tmp84 = $tmp83.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
if ($tmp84) goto block6; else goto block7;
block6:;
// line 50
org$frostlang$frostc$Type* $tmp85 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return $tmp85;
block7:;
org$frostlang$frostc$Type* $tmp86 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp87 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp73, $tmp86);
bool $tmp88 = $tmp87.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
if ($tmp88) goto block8; else goto block9;
block8:;
// line 51
org$frostlang$frostc$Type* $tmp89 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return $tmp89;
block9:;
// line 52
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
goto block10;
block10:;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 59
org$frostlang$frostc$Type* $tmp90 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp91 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp92 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp91);
bool $tmp93 = $tmp92.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
if ($tmp93) goto block2; else goto block3;
block2:;
// line 60
org$frostlang$frostc$Type* $tmp94 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
return $tmp94;
block3:;
org$frostlang$frostc$Type* $tmp95 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp96 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp95);
bool $tmp97 = $tmp96.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
if ($tmp97) goto block4; else goto block5;
block4:;
// line 61
org$frostlang$frostc$Type* $tmp98 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
return $tmp98;
block5:;
org$frostlang$frostc$Type* $tmp99 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp100 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp99);
bool $tmp101 = $tmp100.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
if ($tmp101) goto block6; else goto block7;
block6:;
// line 62
org$frostlang$frostc$Type* $tmp102 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
return $tmp102;
block7:;
org$frostlang$frostc$Type* $tmp103 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp104 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp90, $tmp103);
bool $tmp105 = $tmp104.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
if ($tmp105) goto block8; else goto block9;
block8:;
// line 63
org$frostlang$frostc$Type* $tmp106 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
return $tmp106;
block9:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
goto block10;
block10:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// line 71
frost$collections$Array* $tmp107 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp108 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp107, $tmp108);
org$frostlang$frostc$ASTNode* $tmp109 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp111 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp109, $tmp110, $tmp111, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp107, ((frost$core$Object*) $tmp109));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp107)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
return ((frost$collections$ListView*) $tmp107);

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
org$frostlang$frostc$IR** $tmp112 = &param0->ir;
org$frostlang$frostc$IR* $tmp113 = *$tmp112;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
org$frostlang$frostc$IR* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = $tmp113;
// line 79
$fn116 $tmp115 = ($fn116) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp117 = $tmp115(param4);
org$frostlang$frostc$Type$Kind* $tmp118 = &$tmp117->typeKind;
org$frostlang$frostc$Type$Kind $tmp119 = *$tmp118;
org$frostlang$frostc$Type$Kind$wrapper* $tmp120;
$tmp120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp120->value = $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp122 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp121);
org$frostlang$frostc$Type$Kind$wrapper* $tmp123;
$tmp123 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp123->value = $tmp122;
ITable* $tmp124 = ((frost$core$Equatable*) $tmp120)->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Bit $tmp127 = $tmp125(((frost$core$Equatable*) $tmp120), ((frost$core$Equatable*) $tmp123));
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp129 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s130, $tmp129);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp123)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp120)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// line 80
$fn132 $tmp131 = ($fn132) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp133 = $tmp131(param4);
org$frostlang$frostc$FixedArray** $tmp134 = &$tmp133->subtypes;
org$frostlang$frostc$FixedArray* $tmp135 = *$tmp134;
ITable* $tmp136 = ((frost$collections$CollectionView*) $tmp135)->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
frost$core$Int64 $tmp139 = $tmp137(((frost$collections$CollectionView*) $tmp135));
frost$core$Int64 $tmp140 = (frost$core$Int64) {2};
frost$core$Bit $tmp141 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp139, $tmp140);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s144, $tmp143);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// line 81
$fn146 $tmp145 = ($fn146) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp147 = $tmp145(param4);
org$frostlang$frostc$FixedArray** $tmp148 = &$tmp147->subtypes;
org$frostlang$frostc$FixedArray* $tmp149 = *$tmp148;
frost$core$Int64 $tmp150 = (frost$core$Int64) {0};
frost$core$Object* $tmp151 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp149, $tmp150);
frost$core$String** $tmp152 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp151))->name;
frost$core$String* $tmp153 = *$tmp152;
frost$core$Bit $tmp154 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp153, &$s155);
bool $tmp156 = $tmp154.value;
if ($tmp156) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s158, $tmp157);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// line 82
// line 83
org$frostlang$frostc$Variable$Storage** $tmp159 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp160 = *$tmp159;
frost$core$Int64* $tmp161 = &$tmp160->$rawValue;
frost$core$Int64 $tmp162 = *$tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {0};
frost$core$Bit $tmp164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp162, $tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp166 = (frost$core$Int64*) ($tmp160->$data + 0);
frost$core$Int64 $tmp167 = *$tmp166;
*(&local2) = $tmp167;
// line 85
frost$core$Int64 $tmp168 = *(&local2);
*(&local1) = $tmp168;
goto block7;
block9:;
// line 88
frost$core$Int64 $tmp169 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s170, $tmp169);
abort(); // unreachable
block7:;
// line 91
$fn172 $tmp171 = ($fn172) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp173 = $tmp171(param4);
org$frostlang$frostc$FixedArray** $tmp174 = &$tmp173->subtypes;
org$frostlang$frostc$FixedArray* $tmp175 = *$tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {1};
frost$core$Object* $tmp177 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp175, $tmp176);
org$frostlang$frostc$Type* $tmp178 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp177));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
org$frostlang$frostc$Type* $tmp179 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
*(&local3) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q($tmp177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// line 92
$fn181 $tmp180 = ($fn181) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp182 = $tmp180(param4);
org$frostlang$frostc$ClassDecl* $tmp183 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp182);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local4) = $tmp183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// line 93
org$frostlang$frostc$ClassDecl* $tmp185 = *(&local4);
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 == NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block10; else goto block11;
block10:;
// line 94
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block11:;
// line 96
org$frostlang$frostc$ClassDecl* $tmp191 = *(&local4);
frost$collections$ListView* $tmp192 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp191);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
frost$collections$ListView* $tmp193 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local5) = $tmp192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// line 99
org$frostlang$frostc$IR$Value* $tmp194 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp195 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp196 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp197 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp198 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp199 = *(&local5);
frost$core$Int64 $tmp200 = (frost$core$Int64) {0};
ITable* $tmp201 = $tmp199->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[0];
frost$core$Object* $tmp204 = $tmp202($tmp199, $tmp200);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp197, $tmp198, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp204));
$fn206 $tmp205 = ($fn206) $tmp196->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp207 = $tmp205($tmp196, $tmp197);
$fn209 $tmp208 = ($fn209) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp210 = $tmp208(param4);
org$frostlang$frostc$FixedArray** $tmp211 = &$tmp210->subtypes;
org$frostlang$frostc$FixedArray* $tmp212 = *$tmp211;
frost$core$Int64 $tmp213 = (frost$core$Int64) {1};
frost$core$Object* $tmp214 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp212, $tmp213);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp194, $tmp195, $tmp207, ((org$frostlang$frostc$Type*) $tmp214));
org$frostlang$frostc$Type* $tmp215 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp216 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp194, $tmp215);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
org$frostlang$frostc$IR$Value* $tmp217 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local6) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// line 101
org$frostlang$frostc$IR$Value* $tmp218 = *(&local6);
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218 == NULL);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block12; else goto block13;
block12:;
// line 102
org$frostlang$frostc$IR$Value* $tmp221 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp222 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp224 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 106
org$frostlang$frostc$IR* $tmp226 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp227 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp228 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp229 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp230 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp231 = (frost$core$Int64) {2};
frost$core$Int64 $tmp232 = *(&local1);
org$frostlang$frostc$Type* $tmp233 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp230, $tmp231, $tmp232, $tmp233);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp227, $tmp228, param1, $tmp229, $tmp230);
$fn235 $tmp234 = ($fn235) $tmp226->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp236 = $tmp234($tmp226, $tmp227);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// line 109
org$frostlang$frostc$IR$Value* $tmp237 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp238 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp239 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp240 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp241 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp242 = *(&local5);
frost$core$Int64 $tmp243 = (frost$core$Int64) {1};
ITable* $tmp244 = $tmp242->$class->itable;
while ($tmp244->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp244 = $tmp244->next;
}
$fn246 $tmp245 = $tmp244->methods[0];
frost$core$Object* $tmp247 = $tmp245($tmp242, $tmp243);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp240, $tmp241, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp247));
$fn249 $tmp248 = ($fn249) $tmp239->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp250 = $tmp248($tmp239, $tmp240);
$fn252 $tmp251 = ($fn252) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp253 = $tmp251(param4);
org$frostlang$frostc$FixedArray** $tmp254 = &$tmp253->subtypes;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
frost$core$Int64 $tmp256 = (frost$core$Int64) {1};
frost$core$Object* $tmp257 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp255, $tmp256);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp237, $tmp238, $tmp250, ((org$frostlang$frostc$Type*) $tmp257));
org$frostlang$frostc$Type* $tmp258 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp259 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp237, $tmp258);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
org$frostlang$frostc$IR$Value* $tmp260 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local7) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q($tmp247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// line 111
org$frostlang$frostc$IR$Value* $tmp261 = *(&local7);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261 == NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block14; else goto block15;
block14:;
// line 112
org$frostlang$frostc$IR$Value* $tmp264 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp265 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp266 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp267 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp268 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// line 116
org$frostlang$frostc$IR$Value* $tmp270 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp271 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp272 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp273 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp275 = *(&local5);
frost$core$Int64 $tmp276 = (frost$core$Int64) {2};
ITable* $tmp277 = $tmp275->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[0];
frost$core$Object* $tmp280 = $tmp278($tmp275, $tmp276);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp273, $tmp274, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp280));
$fn282 $tmp281 = ($fn282) $tmp272->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp283 = $tmp281($tmp272, $tmp273);
org$frostlang$frostc$Type* $tmp284 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp270, $tmp271, $tmp283, $tmp284);
org$frostlang$frostc$IR$Value* $tmp285 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp270);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$IR$Value* $tmp286 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local8) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q($tmp280);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 119
org$frostlang$frostc$ASTNode* $tmp287 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp288 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp289 = (frost$core$UInt64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp287, $tmp288, param1, $tmp289);
org$frostlang$frostc$Compiler$TypeContext* $tmp290 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp291 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp292 = *(&local3);
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp290, $tmp291, $tmp292, $tmp293);
org$frostlang$frostc$IR$Value* $tmp294 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp287, $tmp290);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
org$frostlang$frostc$IR$Value* $tmp295 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local9) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// line 121
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 122
org$frostlang$frostc$IR$Value* $tmp296 = *(&local9);
$fn298 $tmp297 = ($fn298) $tmp296->$class->vtable[2];
org$frostlang$frostc$Type* $tmp299 = $tmp297($tmp296);
org$frostlang$frostc$Type* $tmp300 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp301 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp299, $tmp300);
bool $tmp302 = $tmp301.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
if ($tmp302) goto block16; else goto block18;
block16:;
// line 123
org$frostlang$frostc$IR$Value* $tmp303 = *(&local9);
org$frostlang$frostc$Type* $tmp304 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp305 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp303, $tmp304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
org$frostlang$frostc$IR$Value* $tmp306 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local10) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// line 124
org$frostlang$frostc$IR$Value* $tmp307 = *(&local10);
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit($tmp307 == NULL);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block19; else goto block20;
block19:;
// line 125
org$frostlang$frostc$IR$Value* $tmp310 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp311 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp312 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp313 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp314 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp315 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp316 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp317 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp318 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block20:;
goto block17;
block18:;
// line 1
// line 129
org$frostlang$frostc$IR$Value* $tmp319 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
org$frostlang$frostc$IR$Value* $tmp320 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local10) = $tmp319;
goto block17;
block17:;
// line 133
org$frostlang$frostc$IR* $tmp321 = *(&local0);
$fn323 $tmp322 = ($fn323) $tmp321->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp324 = $tmp322($tmp321, &$s325);
*(&local11) = $tmp324;
// line 134
org$frostlang$frostc$IR* $tmp326 = *(&local0);
$fn328 $tmp327 = ($fn328) $tmp326->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp329 = $tmp327($tmp326, &$s330);
*(&local12) = $tmp329;
// line 135
org$frostlang$frostc$IR* $tmp331 = *(&local0);
$fn333 $tmp332 = ($fn333) $tmp331->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp334 = $tmp332($tmp331, &$s335);
*(&local13) = $tmp334;
// line 136
org$frostlang$frostc$IR* $tmp336 = *(&local0);
$fn338 $tmp337 = ($fn338) $tmp336->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp339 = $tmp337($tmp336, &$s340);
*(&local14) = $tmp339;
// line 137
org$frostlang$frostc$IR* $tmp341 = *(&local0);
$fn343 $tmp342 = ($fn343) $tmp341->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp344 = $tmp342($tmp341, &$s345);
*(&local15) = $tmp344;
// line 138
org$frostlang$frostc$Compiler$AutoContext* $tmp346 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp347 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp348 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp349 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp350 = *(&local13);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp347, $tmp348, param2, $tmp349, $tmp350);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp346, param0, $tmp347);
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlang$frostc$Compiler$AutoContext* $tmp351 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local16) = $tmp346;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// line 1
// line 140
org$frostlang$frostc$Compiler$AutoScope* $tmp352 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp352, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
org$frostlang$frostc$Compiler$AutoScope* $tmp353 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local17) = $tmp352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// line 141
org$frostlang$frostc$IR* $tmp354 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp355 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp356 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp357 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp358 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp359 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp355, $tmp356, param1, $tmp357, $tmp358, $tmp359);
$fn361 $tmp360 = ($fn361) $tmp354->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp362 = $tmp360($tmp354, $tmp355);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// line 143
org$frostlang$frostc$IR* $tmp363 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp364 = *(&local14);
$fn366 $tmp365 = ($fn366) $tmp363->$class->vtable[4];
$tmp365($tmp363, $tmp364);
// line 144
org$frostlang$frostc$IR$Value* $tmp367 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp368 = *(&local7);
frost$collections$ListView* $tmp369 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp368);
org$frostlang$frostc$Compiler$TypeContext* $tmp370 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp371 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp372 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp370, $tmp371, $tmp372, $tmp373);
org$frostlang$frostc$IR$Value* $tmp374 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp367, &$s375, $tmp369, $tmp370);
org$frostlang$frostc$IR$Value* $tmp376 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp374);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$IR$Value* $tmp377 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local18) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// line 146
org$frostlang$frostc$IR* $tmp378 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp379 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp380 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp381 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp382 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp383 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp379, $tmp380, param1, $tmp381, $tmp382, $tmp383);
$fn385 $tmp384 = ($fn385) $tmp378->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp386 = $tmp384($tmp378, $tmp379);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// line 148
org$frostlang$frostc$IR* $tmp387 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp388 = *(&local15);
$fn390 $tmp389 = ($fn390) $tmp387->$class->vtable[4];
$tmp389($tmp387, $tmp388);
// line 149
org$frostlang$frostc$IR$Value* $tmp391 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp392 = *(&local7);
frost$collections$ListView* $tmp393 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp392);
org$frostlang$frostc$Compiler$TypeContext* $tmp394 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp395 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp396 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp394, $tmp395, $tmp396, $tmp397);
org$frostlang$frostc$IR$Value* $tmp398 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp391, &$s399, $tmp393, $tmp394);
org$frostlang$frostc$IR$Value* $tmp400 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp398);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
org$frostlang$frostc$IR$Value* $tmp401 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local19) = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// line 151
org$frostlang$frostc$IR* $tmp402 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp403 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp404 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp405 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp406 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp407 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp403, $tmp404, param1, $tmp405, $tmp406, $tmp407);
$fn409 $tmp408 = ($fn409) $tmp402->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp410 = $tmp408($tmp402, $tmp403);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// line 153
org$frostlang$frostc$IR* $tmp411 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp412 = *(&local11);
$fn414 $tmp413 = ($fn414) $tmp411->$class->vtable[4];
$tmp413($tmp411, $tmp412);
// line 154
ITable* $tmp415 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
frost$collections$Iterator* $tmp418 = $tmp416(((frost$collections$Iterable*) param5));
goto block21;
block21:;
ITable* $tmp419 = $tmp418->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Bit $tmp422 = $tmp420($tmp418);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block23; else goto block22;
block22:;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp424 = $tmp418->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[1];
frost$core$Object* $tmp427 = $tmp425($tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp427)));
org$frostlang$frostc$ASTNode* $tmp428 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local20) = ((org$frostlang$frostc$ASTNode*) $tmp427);
// line 155
org$frostlang$frostc$ASTNode* $tmp429 = *(&local20);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp429);
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
org$frostlang$frostc$ASTNode* $tmp430 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
org$frostlang$frostc$IR$Value* $tmp431 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp432 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp433 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 158
org$frostlang$frostc$IR* $tmp434 = *(&local0);
$fn436 $tmp435 = ($fn436) $tmp434->$class->vtable[5];
frost$core$Bit $tmp437 = $tmp435($tmp434);
frost$core$Bit $tmp438 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp437);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block24; else goto block25;
block24:;
// line 159
org$frostlang$frostc$IR* $tmp440 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp441 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp442 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp443 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp441, $tmp442, param1, $tmp443);
$fn445 $tmp444 = ($fn445) $tmp440->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp446 = $tmp444($tmp440, $tmp441);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
goto block25;
block25:;
// line 161
org$frostlang$frostc$IR* $tmp447 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp448 = *(&local13);
$fn450 $tmp449 = ($fn450) $tmp447->$class->vtable[4];
$tmp449($tmp447, $tmp448);
// line 162
org$frostlang$frostc$IR* $tmp451 = *(&local0);
$fn453 $tmp452 = ($fn453) $tmp451->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp454 = $tmp452($tmp451, &$s455);
*(&local21) = $tmp454;
// line 165
org$frostlang$frostc$IR$Value* $tmp456 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp457 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp458 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp459 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp460 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp461 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp462 = (frost$core$Int64) {2};
frost$core$Int64 $tmp463 = *(&local1);
org$frostlang$frostc$Type* $tmp464 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp461, $tmp462, $tmp463, $tmp464);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp459, $tmp460, param1, $tmp461);
$fn466 $tmp465 = ($fn466) $tmp458->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp467 = $tmp465($tmp458, $tmp459);
org$frostlang$frostc$Type* $tmp468 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp456, $tmp457, $tmp467, $tmp468);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
org$frostlang$frostc$IR$Value* $tmp469 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local22) = $tmp456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// line 169
org$frostlang$frostc$IR$Value* $tmp470 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp471 = *(&local22);
frost$collections$ListView* $tmp472 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp471);
org$frostlang$frostc$Compiler$TypeContext* $tmp473 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp474 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp473, $tmp474);
org$frostlang$frostc$IR$Value* $tmp475 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp470, &$s476, $tmp472, $tmp473);
org$frostlang$frostc$Type* $tmp477 = *(&local3);
org$frostlang$frostc$Type* $tmp478 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp477);
org$frostlang$frostc$IR$Value* $tmp479 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp475, $tmp478);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$IR$Value* $tmp480 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local23) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// line 171
org$frostlang$frostc$IR$Value* $tmp481 = *(&local23);
frost$core$Bit $tmp482 = frost$core$Bit$init$builtin_bit($tmp481 != NULL);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {171};
org$frostlang$frostc$IR$Value* $tmp485 = *(&local22);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s487, ((frost$core$Object*) $tmp485));
frost$core$String* $tmp488 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s489);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s490, $tmp484, $tmp488);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
abort(); // unreachable
block26:;
// line 173
org$frostlang$frostc$IR* $tmp491 = *(&local0);
$fn493 $tmp492 = ($fn493) $tmp491->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp494 = $tmp492($tmp491, &$s495);
*(&local24) = $tmp494;
// line 174
org$frostlang$frostc$IR* $tmp496 = *(&local0);
$fn498 $tmp497 = ($fn498) $tmp496->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp499 = $tmp497($tmp496, &$s500);
*(&local25) = $tmp499;
// line 175
org$frostlang$frostc$IR* $tmp501 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp502 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp503 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp504 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp505 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp506 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp502, $tmp503, param1, $tmp504, $tmp505, $tmp506);
$fn508 $tmp507 = ($fn508) $tmp501->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp509 = $tmp507($tmp501, $tmp502);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// line 178
org$frostlang$frostc$IR* $tmp510 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp511 = *(&local24);
$fn513 $tmp512 = ($fn513) $tmp510->$class->vtable[4];
$tmp512($tmp510, $tmp511);
// line 179
org$frostlang$frostc$IR$Value* $tmp514 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp515 = *(&local10);
frost$collections$ListView* $tmp516 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp515);
org$frostlang$frostc$Compiler$TypeContext* $tmp517 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp518 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp519 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp520 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp517, $tmp518, $tmp519, $tmp520);
org$frostlang$frostc$IR$Value* $tmp521 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp514, &$s522, $tmp516, $tmp517);
org$frostlang$frostc$IR$Value* $tmp523 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp521);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
org$frostlang$frostc$IR$Value* $tmp524 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local26) = $tmp523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// line 181
org$frostlang$frostc$IR* $tmp525 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp526 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp527 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp528 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp529 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp530 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp526, $tmp527, param1, $tmp528, $tmp529, $tmp530);
$fn532 $tmp531 = ($fn532) $tmp525->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp533 = $tmp531($tmp525, $tmp526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// line 184
org$frostlang$frostc$IR* $tmp534 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp535 = *(&local25);
$fn537 $tmp536 = ($fn537) $tmp534->$class->vtable[4];
$tmp536($tmp534, $tmp535);
// line 185
org$frostlang$frostc$IR$Value* $tmp538 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp539 = *(&local10);
frost$collections$ListView* $tmp540 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp539);
org$frostlang$frostc$Compiler$TypeContext* $tmp541 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp542 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp543 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp544 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp541, $tmp542, $tmp543, $tmp544);
org$frostlang$frostc$IR$Value* $tmp545 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp538, &$s546, $tmp540, $tmp541);
org$frostlang$frostc$IR$Value* $tmp547 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp545);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
org$frostlang$frostc$IR$Value* $tmp548 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local27) = $tmp547;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// line 187
org$frostlang$frostc$IR* $tmp549 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp550 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp551 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp552 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp553 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp554 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp550, $tmp551, param1, $tmp552, $tmp553, $tmp554);
$fn556 $tmp555 = ($fn556) $tmp549->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp557 = $tmp555($tmp549, $tmp550);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// line 189
org$frostlang$frostc$IR* $tmp558 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp559 = *(&local21);
$fn561 $tmp560 = ($fn561) $tmp558->$class->vtable[4];
$tmp560($tmp558, $tmp559);
// line 190
org$frostlang$frostc$IR$Value* $tmp562 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp563 = *(&local9);
frost$collections$ListView* $tmp564 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp563);
org$frostlang$frostc$Compiler$TypeContext* $tmp565 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp566 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp565, $tmp566);
org$frostlang$frostc$IR$Value* $tmp567 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp562, &$s568, $tmp564, $tmp565);
org$frostlang$frostc$Type* $tmp569 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp570 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp567, $tmp569);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
org$frostlang$frostc$IR$Value* $tmp571 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local28) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// line 192
org$frostlang$frostc$IR* $tmp572 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp573 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp574 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp575 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp576 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp577 = (frost$core$Int64) {2};
frost$core$Int64 $tmp578 = *(&local1);
org$frostlang$frostc$Type* $tmp579 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp576, $tmp577, $tmp578, $tmp579);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp573, $tmp574, param1, $tmp575, $tmp576);
$fn581 $tmp580 = ($fn581) $tmp572->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp582 = $tmp580($tmp572, $tmp573);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// line 193
org$frostlang$frostc$IR* $tmp583 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp584 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp585 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp586 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp584, $tmp585, param1, $tmp586);
$fn588 $tmp587 = ($fn588) $tmp583->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp589 = $tmp587($tmp583, $tmp584);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// line 195
org$frostlang$frostc$IR* $tmp590 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp591 = *(&local12);
$fn593 $tmp592 = ($fn593) $tmp590->$class->vtable[4];
$tmp592($tmp590, $tmp591);
org$frostlang$frostc$IR$Value* $tmp594 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp595 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp596 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp597 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp598 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp599 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp600 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp601 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp602 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp603 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp604 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp605 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp606 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp607 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
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
// line 219
org$frostlang$frostc$IR** $tmp609 = &param0->ir;
org$frostlang$frostc$IR* $tmp610 = *$tmp609;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
org$frostlang$frostc$IR* $tmp611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local0) = $tmp610;
// line 220
$fn613 $tmp612 = ($fn613) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp614 = $tmp612(param4);
org$frostlang$frostc$Type$Kind* $tmp615 = &$tmp614->typeKind;
org$frostlang$frostc$Type$Kind $tmp616 = *$tmp615;
org$frostlang$frostc$Type$Kind$wrapper* $tmp617;
$tmp617 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp617->value = $tmp616;
frost$core$Int64 $tmp618 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp619 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp618);
org$frostlang$frostc$Type$Kind$wrapper* $tmp620;
$tmp620 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp620->value = $tmp619;
ITable* $tmp621 = ((frost$core$Equatable*) $tmp617)->$class->itable;
while ($tmp621->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp621 = $tmp621->next;
}
$fn623 $tmp622 = $tmp621->methods[0];
frost$core$Bit $tmp624 = $tmp622(((frost$core$Equatable*) $tmp617), ((frost$core$Equatable*) $tmp620));
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {220};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s627, $tmp626);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp620)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp617)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// line 221
$fn629 $tmp628 = ($fn629) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp630 = $tmp628(param4);
org$frostlang$frostc$FixedArray** $tmp631 = &$tmp630->subtypes;
org$frostlang$frostc$FixedArray* $tmp632 = *$tmp631;
ITable* $tmp633 = ((frost$collections$CollectionView*) $tmp632)->$class->itable;
while ($tmp633->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp633 = $tmp633->next;
}
$fn635 $tmp634 = $tmp633->methods[0];
frost$core$Int64 $tmp636 = $tmp634(((frost$collections$CollectionView*) $tmp632));
frost$core$Int64 $tmp637 = (frost$core$Int64) {3};
frost$core$Bit $tmp638 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp636, $tmp637);
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp640 = (frost$core$Int64) {221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s641, $tmp640);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// line 222
$fn643 $tmp642 = ($fn643) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp644 = $tmp642(param4);
org$frostlang$frostc$FixedArray** $tmp645 = &$tmp644->subtypes;
org$frostlang$frostc$FixedArray* $tmp646 = *$tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {0};
frost$core$Object* $tmp648 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp646, $tmp647);
frost$core$String** $tmp649 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp648))->name;
frost$core$String* $tmp650 = *$tmp649;
frost$core$Bit $tmp651 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp650, &$s652);
bool $tmp653 = $tmp651.value;
if ($tmp653) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp654 = (frost$core$Int64) {222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s655, $tmp654);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp648);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// line 223
// line 224
org$frostlang$frostc$Variable$Storage** $tmp656 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp657 = *$tmp656;
frost$core$Int64* $tmp658 = &$tmp657->$rawValue;
frost$core$Int64 $tmp659 = *$tmp658;
frost$core$Int64 $tmp660 = (frost$core$Int64) {0};
frost$core$Bit $tmp661 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp659, $tmp660);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp663 = (frost$core$Int64*) ($tmp657->$data + 0);
frost$core$Int64 $tmp664 = *$tmp663;
*(&local2) = $tmp664;
// line 226
frost$core$Int64 $tmp665 = *(&local2);
*(&local1) = $tmp665;
goto block7;
block9:;
// line 229
frost$core$Int64 $tmp666 = (frost$core$Int64) {229};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s667, $tmp666);
abort(); // unreachable
block7:;
// line 232
$fn669 $tmp668 = ($fn669) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp670 = $tmp668(param4);
org$frostlang$frostc$FixedArray** $tmp671 = &$tmp670->subtypes;
org$frostlang$frostc$FixedArray* $tmp672 = *$tmp671;
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
frost$core$Object* $tmp674 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp672, $tmp673);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp674)));
org$frostlang$frostc$Type* $tmp675 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp674);
frost$core$Frost$unref$frost$core$Object$Q($tmp674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// line 233
org$frostlang$frostc$Type* $tmp676 = *(&local3);
org$frostlang$frostc$Type$Kind* $tmp677 = &$tmp676->typeKind;
org$frostlang$frostc$Type$Kind $tmp678 = *$tmp677;
org$frostlang$frostc$Type$Kind$wrapper* $tmp679;
$tmp679 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp679->value = $tmp678;
frost$core$Int64 $tmp680 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp681 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp680);
org$frostlang$frostc$Type$Kind$wrapper* $tmp682;
$tmp682 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp682->value = $tmp681;
ITable* $tmp683 = ((frost$core$Equatable*) $tmp679)->$class->itable;
while ($tmp683->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp683 = $tmp683->next;
}
$fn685 $tmp684 = $tmp683->methods[1];
frost$core$Bit $tmp686 = $tmp684(((frost$core$Equatable*) $tmp679), ((frost$core$Equatable*) $tmp682));
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {233};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s689, $tmp688);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp682)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp679)));
// line 234
$fn691 $tmp690 = ($fn691) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp692 = $tmp690(param4);
org$frostlang$frostc$FixedArray** $tmp693 = &$tmp692->subtypes;
org$frostlang$frostc$FixedArray* $tmp694 = *$tmp693;
frost$core$Int64 $tmp695 = (frost$core$Int64) {2};
frost$core$Object* $tmp696 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp694, $tmp695);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp696)));
org$frostlang$frostc$Type* $tmp697 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp696);
frost$core$Frost$unref$frost$core$Object$Q($tmp696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// line 235
$fn699 $tmp698 = ($fn699) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp700 = $tmp698(param4);
org$frostlang$frostc$ClassDecl* $tmp701 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp700);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
org$frostlang$frostc$ClassDecl* $tmp702 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
*(&local5) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// line 236
org$frostlang$frostc$ClassDecl* $tmp703 = *(&local5);
frost$core$Bit $tmp704 = frost$core$Bit$init$builtin_bit($tmp703 == NULL);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block12; else goto block13;
block12:;
// line 237
org$frostlang$frostc$ClassDecl* $tmp706 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp707 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp708 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 239
org$frostlang$frostc$ClassDecl* $tmp710 = *(&local5);
frost$collections$ListView* $tmp711 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp710);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$collections$ListView* $tmp712 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local6) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// line 242
org$frostlang$frostc$IR$Value* $tmp713 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp715 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp716 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp717 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp718 = *(&local6);
frost$core$Int64 $tmp719 = (frost$core$Int64) {0};
ITable* $tmp720 = $tmp718->$class->itable;
while ($tmp720->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp720 = $tmp720->next;
}
$fn722 $tmp721 = $tmp720->methods[0];
frost$core$Object* $tmp723 = $tmp721($tmp718, $tmp719);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp716, $tmp717, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp723));
$fn725 $tmp724 = ($fn725) $tmp715->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp726 = $tmp724($tmp715, $tmp716);
org$frostlang$frostc$Type* $tmp727 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp713, $tmp714, $tmp726, $tmp727);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
org$frostlang$frostc$IR$Value* $tmp728 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local7) = $tmp713;
frost$core$Frost$unref$frost$core$Object$Q($tmp723);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// line 246
org$frostlang$frostc$IR* $tmp729 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp730 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp731 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp732 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp733 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp734 = (frost$core$Int64) {2};
frost$core$Int64 $tmp735 = *(&local1);
org$frostlang$frostc$Type* $tmp736 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp733, $tmp734, $tmp735, $tmp736);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp730, $tmp731, param1, $tmp732, $tmp733);
$fn738 $tmp737 = ($fn738) $tmp729->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp739 = $tmp737($tmp729, $tmp730);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// line 249
org$frostlang$frostc$IR$Value* $tmp740 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp741 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp742 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp743 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp744 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp745 = *(&local6);
frost$core$Int64 $tmp746 = (frost$core$Int64) {1};
ITable* $tmp747 = $tmp745->$class->itable;
while ($tmp747->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp747 = $tmp747->next;
}
$fn749 $tmp748 = $tmp747->methods[0];
frost$core$Object* $tmp750 = $tmp748($tmp745, $tmp746);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp743, $tmp744, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp750));
$fn752 $tmp751 = ($fn752) $tmp742->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp753 = $tmp751($tmp742, $tmp743);
org$frostlang$frostc$Type* $tmp754 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp740, $tmp741, $tmp753, $tmp754);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
org$frostlang$frostc$IR$Value* $tmp755 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local8) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q($tmp750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// line 253
org$frostlang$frostc$IR$Value* $tmp756 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp757 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp758 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp759 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp760 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp761 = *(&local6);
frost$core$Int64 $tmp762 = (frost$core$Int64) {2};
ITable* $tmp763 = $tmp761->$class->itable;
while ($tmp763->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp763 = $tmp763->next;
}
$fn765 $tmp764 = $tmp763->methods[0];
frost$core$Object* $tmp766 = $tmp764($tmp761, $tmp762);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp759, $tmp760, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp766));
$fn768 $tmp767 = ($fn768) $tmp758->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp769 = $tmp767($tmp758, $tmp759);
org$frostlang$frostc$Type* $tmp770 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp756, $tmp757, $tmp769, $tmp770);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
org$frostlang$frostc$IR$Value* $tmp771 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local9) = $tmp756;
frost$core$Frost$unref$frost$core$Object$Q($tmp766);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// line 255
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 256
org$frostlang$frostc$IR$Value* $tmp772 = *(&local9);
$fn774 $tmp773 = ($fn774) $tmp772->$class->vtable[2];
org$frostlang$frostc$Type* $tmp775 = $tmp773($tmp772);
org$frostlang$frostc$Type* $tmp776 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp777 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp775, $tmp776);
bool $tmp778 = $tmp777.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
if ($tmp778) goto block14; else goto block16;
block14:;
// line 257
org$frostlang$frostc$IR$Value* $tmp779 = *(&local9);
org$frostlang$frostc$Type* $tmp780 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp781 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp779, $tmp780);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
org$frostlang$frostc$IR$Value* $tmp782 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local10) = $tmp781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
goto block15;
block16:;
// line 1
// line 260
org$frostlang$frostc$IR$Value* $tmp783 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
org$frostlang$frostc$IR$Value* $tmp784 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local10) = $tmp783;
goto block15;
block15:;
// line 262
org$frostlang$frostc$IR$Value* $tmp785 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp786 = *(&local9);
$fn788 $tmp787 = ($fn788) $tmp786->$class->vtable[2];
org$frostlang$frostc$Type* $tmp789 = $tmp787($tmp786);
org$frostlang$frostc$Type* $tmp790 = org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp789);
org$frostlang$frostc$IR$Value* $tmp791 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp785, $tmp790);
frost$collections$Array* $tmp792 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp793 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp792, $tmp793);
org$frostlang$frostc$Compiler$TypeContext* $tmp794 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp795 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp794, $tmp795);
org$frostlang$frostc$IR$Value* $tmp796 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp791, &$s797, ((frost$collections$ListView*) $tmp792), $tmp794);
org$frostlang$frostc$Type* $tmp798 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp799 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp796, $tmp798);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$IR$Value* $tmp800 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local11) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// line 264
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 265
org$frostlang$frostc$IR$Value* $tmp801 = *(&local9);
$fn803 $tmp802 = ($fn803) $tmp801->$class->vtable[2];
org$frostlang$frostc$Type* $tmp804 = $tmp802($tmp801);
org$frostlang$frostc$Type* $tmp805 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp806 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp804, $tmp805);
bool $tmp807 = $tmp806.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
if ($tmp807) goto block17; else goto block19;
block17:;
// line 266
org$frostlang$frostc$IR$Value* $tmp808 = *(&local11);
org$frostlang$frostc$Type* $tmp809 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp810 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp808, $tmp809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
org$frostlang$frostc$IR$Value* $tmp811 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local12) = $tmp810;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
goto block18;
block19:;
// line 1
// line 269
org$frostlang$frostc$IR$Value* $tmp812 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$IR$Value* $tmp813 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local12) = $tmp812;
goto block18;
block18:;
// line 273
org$frostlang$frostc$IR$Value* $tmp814 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp815 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp816 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp817 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp818 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp819 = *(&local6);
frost$core$Int64 $tmp820 = (frost$core$Int64) {3};
ITable* $tmp821 = $tmp819->$class->itable;
while ($tmp821->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp821 = $tmp821->next;
}
$fn823 $tmp822 = $tmp821->methods[0];
frost$core$Object* $tmp824 = $tmp822($tmp819, $tmp820);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp817, $tmp818, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp824));
$fn826 $tmp825 = ($fn826) $tmp816->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp827 = $tmp825($tmp816, $tmp817);
org$frostlang$frostc$Type* $tmp828 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp814, $tmp815, $tmp827, $tmp828);
org$frostlang$frostc$IR$Value* $tmp829 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp814);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
org$frostlang$frostc$IR$Value* $tmp830 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local13) = $tmp829;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q($tmp824);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// line 277
org$frostlang$frostc$IR* $tmp831 = *(&local0);
$fn833 $tmp832 = ($fn833) $tmp831->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp834 = $tmp832($tmp831, &$s835);
*(&local14) = $tmp834;
// line 278
org$frostlang$frostc$IR* $tmp836 = *(&local0);
$fn838 $tmp837 = ($fn838) $tmp836->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp839 = $tmp837($tmp836, &$s840);
*(&local15) = $tmp839;
// line 279
org$frostlang$frostc$IR* $tmp841 = *(&local0);
$fn843 $tmp842 = ($fn843) $tmp841->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp844 = $tmp842($tmp841, &$s845);
*(&local16) = $tmp844;
// line 280
org$frostlang$frostc$IR* $tmp846 = *(&local0);
$fn848 $tmp847 = ($fn848) $tmp846->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp849 = $tmp847($tmp846, &$s850);
*(&local17) = $tmp849;
// line 281
org$frostlang$frostc$IR* $tmp851 = *(&local0);
$fn853 $tmp852 = ($fn853) $tmp851->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp854 = $tmp852($tmp851, &$s855);
*(&local18) = $tmp854;
// line 282
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 283
org$frostlang$frostc$Compiler$AutoContext* $tmp856 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp857 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp858 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp859 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp860 = *(&local16);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp857, $tmp858, param2, $tmp859, $tmp860);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp856, param0, $tmp857);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
org$frostlang$frostc$Compiler$AutoContext* $tmp861 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local20) = $tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// line 1
// line 285
org$frostlang$frostc$Compiler$AutoScope* $tmp862 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp862, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
org$frostlang$frostc$Compiler$AutoScope* $tmp863 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local21) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// line 286
org$frostlang$frostc$Type* $tmp864 = *(&local4);
frost$core$String** $tmp865 = &((org$frostlang$frostc$Symbol*) $tmp864)->name;
frost$core$String* $tmp866 = *$tmp865;
frost$core$Bit $tmp867 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp866, &$s868);
bool $tmp869 = $tmp867.value;
if ($tmp869) goto block20; else goto block22;
block20:;
// line 287
org$frostlang$frostc$IR$Value* $tmp870 = *(&local9);
frost$collections$Array* $tmp871 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp872 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp871, $tmp872);
org$frostlang$frostc$ASTNode* $tmp873 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp874 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp875 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp873, $tmp874, param1, $tmp875);
frost$collections$Array$add$frost$collections$Array$T($tmp871, ((frost$core$Object*) $tmp873));
org$frostlang$frostc$Compiler$TypeContext* $tmp876 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp877 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp878 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp876, $tmp877, $tmp878, $tmp879);
org$frostlang$frostc$IR$Value* $tmp880 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp870, &$s881, ((frost$collections$ListView*) $tmp871), $tmp876);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
org$frostlang$frostc$IR$Value* $tmp882 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local22) = $tmp880;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
// line 289
org$frostlang$frostc$IR$Value* $tmp883 = *(&local22);
frost$core$Bit $tmp884 = frost$core$Bit$init$builtin_bit($tmp883 != NULL);
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp886 = (frost$core$Int64) {289};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s887, $tmp886);
abort(); // unreachable
block23:;
// line 290
org$frostlang$frostc$IR$Value* $tmp888 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp889 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
org$frostlang$frostc$IR$Value* $tmp890 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local19) = $tmp889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
org$frostlang$frostc$IR$Value* $tmp891 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block21;
block22:;
// line 1
// line 293
org$frostlang$frostc$Type* $tmp892 = *(&local4);
frost$core$String** $tmp893 = &((org$frostlang$frostc$Symbol*) $tmp892)->name;
frost$core$String* $tmp894 = *$tmp893;
frost$core$Bit $tmp895 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp894, &$s896);
bool $tmp897 = $tmp895.value;
if ($tmp897) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp898 = (frost$core$Int64) {293};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s899, $tmp898);
abort(); // unreachable
block25:;
// line 294
org$frostlang$frostc$IR$Value* $tmp900 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp901 = (frost$core$Int64) {0};
frost$core$Bit $tmp902 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp900, $tmp901, $tmp902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
org$frostlang$frostc$IR$Value* $tmp903 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local19) = $tmp900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
goto block21;
block21:;
// line 296
org$frostlang$frostc$IR* $tmp904 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp905 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp906 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp907 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp908 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp909 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp905, $tmp906, param1, $tmp907, $tmp908, $tmp909);
$fn911 $tmp910 = ($fn911) $tmp904->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp912 = $tmp910($tmp904, $tmp905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// line 297
org$frostlang$frostc$IR* $tmp913 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp914 = *(&local17);
$fn916 $tmp915 = ($fn916) $tmp913->$class->vtable[4];
$tmp915($tmp913, $tmp914);
// line 298
org$frostlang$frostc$IR* $tmp917 = *(&local0);
$fn919 $tmp918 = ($fn919) $tmp917->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp920 = $tmp918($tmp917, &$s921);
*(&local23) = $tmp920;
// line 299
org$frostlang$frostc$IR* $tmp922 = *(&local0);
$fn924 $tmp923 = ($fn924) $tmp922->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp925 = $tmp923($tmp922, &$s926);
*(&local24) = $tmp925;
// line 300
org$frostlang$frostc$IR* $tmp927 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp928 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp929 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp930 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp931 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp932 = *(&local24);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp928, $tmp929, param1, $tmp930, $tmp931, $tmp932);
$fn934 $tmp933 = ($fn934) $tmp927->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp935 = $tmp933($tmp927, $tmp928);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// line 302
org$frostlang$frostc$IR* $tmp936 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp937 = *(&local23);
$fn939 $tmp938 = ($fn939) $tmp936->$class->vtable[4];
$tmp938($tmp936, $tmp937);
// line 303
org$frostlang$frostc$IR$Value* $tmp940 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp941 = *(&local8);
frost$collections$ListView* $tmp942 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp941);
org$frostlang$frostc$Compiler$TypeContext* $tmp943 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp944 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp945 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp946 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp943, $tmp944, $tmp945, $tmp946);
org$frostlang$frostc$IR$Value* $tmp947 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp940, &$s948, $tmp942, $tmp943);
org$frostlang$frostc$IR$Value* $tmp949 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp947);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
org$frostlang$frostc$IR$Value* $tmp950 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
*(&local25) = $tmp949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// line 306
org$frostlang$frostc$IR* $tmp951 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp952 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp953 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp954 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp955 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp956 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp952, $tmp953, param1, $tmp954, $tmp955, $tmp956);
$fn958 $tmp957 = ($fn958) $tmp951->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp959 = $tmp957($tmp951, $tmp952);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// line 308
org$frostlang$frostc$IR* $tmp960 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp961 = *(&local24);
$fn963 $tmp962 = ($fn963) $tmp960->$class->vtable[4];
$tmp962($tmp960, $tmp961);
// line 309
org$frostlang$frostc$IR$Value* $tmp964 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp965 = *(&local8);
frost$collections$ListView* $tmp966 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp965);
org$frostlang$frostc$Compiler$TypeContext* $tmp967 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp968 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp969 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp970 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp967, $tmp968, $tmp969, $tmp970);
org$frostlang$frostc$IR$Value* $tmp971 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp964, &$s972, $tmp966, $tmp967);
org$frostlang$frostc$IR$Value* $tmp973 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp971);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
org$frostlang$frostc$IR$Value* $tmp974 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local26) = $tmp973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// line 312
org$frostlang$frostc$IR* $tmp975 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp976 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp977 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp978 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp979 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp980 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp976, $tmp977, param1, $tmp978, $tmp979, $tmp980);
$fn982 $tmp981 = ($fn982) $tmp975->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp983 = $tmp981($tmp975, $tmp976);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
// line 314
org$frostlang$frostc$IR* $tmp984 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp985 = *(&local18);
$fn987 $tmp986 = ($fn987) $tmp984->$class->vtable[4];
$tmp986($tmp984, $tmp985);
// line 315
org$frostlang$frostc$IR* $tmp988 = *(&local0);
$fn990 $tmp989 = ($fn990) $tmp988->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp991 = $tmp989($tmp988, &$s992);
*(&local27) = $tmp991;
// line 316
org$frostlang$frostc$IR* $tmp993 = *(&local0);
$fn995 $tmp994 = ($fn995) $tmp993->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp996 = $tmp994($tmp993, &$s997);
*(&local28) = $tmp996;
// line 317
org$frostlang$frostc$IR* $tmp998 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp999 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1000 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1001 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1002 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp1003 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp999, $tmp1000, param1, $tmp1001, $tmp1002, $tmp1003);
$fn1005 $tmp1004 = ($fn1005) $tmp998->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1006 = $tmp1004($tmp998, $tmp999);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
// line 319
org$frostlang$frostc$IR* $tmp1007 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1008 = *(&local27);
$fn1010 $tmp1009 = ($fn1010) $tmp1007->$class->vtable[4];
$tmp1009($tmp1007, $tmp1008);
// line 320
org$frostlang$frostc$IR$Value* $tmp1011 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1012 = *(&local8);
frost$collections$ListView* $tmp1013 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1012);
org$frostlang$frostc$Compiler$TypeContext* $tmp1014 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1015 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1016 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1017 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1014, $tmp1015, $tmp1016, $tmp1017);
org$frostlang$frostc$IR$Value* $tmp1018 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1011, &$s1019, $tmp1013, $tmp1014);
org$frostlang$frostc$IR$Value* $tmp1020 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1018);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
org$frostlang$frostc$IR$Value* $tmp1021 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local29) = $tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// line 323
org$frostlang$frostc$IR* $tmp1022 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1023 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1024 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1026 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1027 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1023, $tmp1024, param1, $tmp1025, $tmp1026, $tmp1027);
$fn1029 $tmp1028 = ($fn1029) $tmp1022->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1030 = $tmp1028($tmp1022, $tmp1023);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// line 325
org$frostlang$frostc$IR* $tmp1031 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1032 = *(&local28);
$fn1034 $tmp1033 = ($fn1034) $tmp1031->$class->vtable[4];
$tmp1033($tmp1031, $tmp1032);
// line 326
org$frostlang$frostc$IR$Value* $tmp1035 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1036 = *(&local8);
frost$collections$ListView* $tmp1037 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1036);
org$frostlang$frostc$Compiler$TypeContext* $tmp1038 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1039 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1040 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1041 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1038, $tmp1039, $tmp1040, $tmp1041);
org$frostlang$frostc$IR$Value* $tmp1042 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1035, &$s1043, $tmp1037, $tmp1038);
org$frostlang$frostc$IR$Value* $tmp1044 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1042);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$IR$Value* $tmp1045 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local30) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// line 329
org$frostlang$frostc$IR* $tmp1046 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1047 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1048 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1049 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp1050 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1051 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1047, $tmp1048, param1, $tmp1049, $tmp1050, $tmp1051);
$fn1053 $tmp1052 = ($fn1053) $tmp1046->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1054 = $tmp1052($tmp1046, $tmp1047);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
// line 331
org$frostlang$frostc$IR* $tmp1055 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1056 = *(&local14);
$fn1058 $tmp1057 = ($fn1058) $tmp1055->$class->vtable[4];
$tmp1057($tmp1055, $tmp1056);
// line 332
ITable* $tmp1059 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1059->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
frost$collections$Iterator* $tmp1062 = $tmp1060(((frost$collections$Iterable*) param5));
goto block27;
block27:;
ITable* $tmp1063 = $tmp1062->$class->itable;
while ($tmp1063->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[0];
frost$core$Bit $tmp1066 = $tmp1064($tmp1062);
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block29; else goto block28;
block28:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1068 = $tmp1062->$class->itable;
while ($tmp1068->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1068 = $tmp1068->next;
}
$fn1070 $tmp1069 = $tmp1068->methods[1];
frost$core$Object* $tmp1071 = $tmp1069($tmp1062);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1071)));
org$frostlang$frostc$ASTNode* $tmp1072 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp1071);
// line 333
org$frostlang$frostc$ASTNode* $tmp1073 = *(&local31);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1073);
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
org$frostlang$frostc$ASTNode* $tmp1074 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
org$frostlang$frostc$IR$Value* $tmp1075 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1076 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1077 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1078 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1079 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 336
org$frostlang$frostc$IR* $tmp1080 = *(&local0);
$fn1082 $tmp1081 = ($fn1082) $tmp1080->$class->vtable[5];
frost$core$Bit $tmp1083 = $tmp1081($tmp1080);
frost$core$Bit $tmp1084 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1083);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block30; else goto block31;
block30:;
// line 337
org$frostlang$frostc$IR* $tmp1086 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1087 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1088 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1089 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1087, $tmp1088, param1, $tmp1089);
$fn1091 $tmp1090 = ($fn1091) $tmp1086->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1092 = $tmp1090($tmp1086, $tmp1087);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
goto block31;
block31:;
// line 339
org$frostlang$frostc$IR* $tmp1093 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1094 = *(&local16);
$fn1096 $tmp1095 = ($fn1096) $tmp1093->$class->vtable[4];
$tmp1095($tmp1093, $tmp1094);
// line 340
org$frostlang$frostc$IR* $tmp1097 = *(&local0);
$fn1099 $tmp1098 = ($fn1099) $tmp1097->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1100 = $tmp1098($tmp1097, &$s1101);
*(&local32) = $tmp1100;
// line 342
org$frostlang$frostc$IR$Value* $tmp1102 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1103 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1104 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1105 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1106 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1107 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1108 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1109 = *(&local1);
org$frostlang$frostc$Type* $tmp1110 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1107, $tmp1108, $tmp1109, $tmp1110);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1105, $tmp1106, param1, $tmp1107);
$fn1112 $tmp1111 = ($fn1112) $tmp1104->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1113 = $tmp1111($tmp1104, $tmp1105);
org$frostlang$frostc$Type* $tmp1114 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1102, $tmp1103, $tmp1113, $tmp1114);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
org$frostlang$frostc$IR$Value* $tmp1115 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local33) = $tmp1102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
// line 344
org$frostlang$frostc$IR* $tmp1116 = *(&local0);
$fn1118 $tmp1117 = ($fn1118) $tmp1116->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1119 = $tmp1117($tmp1116, &$s1120);
*(&local34) = $tmp1119;
// line 345
org$frostlang$frostc$IR* $tmp1121 = *(&local0);
$fn1123 $tmp1122 = ($fn1123) $tmp1121->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1124 = $tmp1122($tmp1121, &$s1125);
*(&local35) = $tmp1124;
// line 346
org$frostlang$frostc$IR* $tmp1126 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1127 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1128 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1129 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1130 = *(&local34);
org$frostlang$frostc$IR$Block$ID $tmp1131 = *(&local35);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1127, $tmp1128, param1, $tmp1129, $tmp1130, $tmp1131);
$fn1133 $tmp1132 = ($fn1133) $tmp1126->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1134 = $tmp1132($tmp1126, $tmp1127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// line 350
org$frostlang$frostc$IR* $tmp1135 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1136 = *(&local34);
$fn1138 $tmp1137 = ($fn1138) $tmp1135->$class->vtable[4];
$tmp1137($tmp1135, $tmp1136);
// line 353
org$frostlang$frostc$IR$Value* $tmp1139 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1140 = *(&local33);
frost$collections$ListView* $tmp1141 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1140);
org$frostlang$frostc$Compiler$TypeContext* $tmp1142 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1143 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1142, $tmp1143);
org$frostlang$frostc$IR$Value* $tmp1144 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1139, &$s1145, $tmp1141, $tmp1142);
org$frostlang$frostc$Type* $tmp1146 = *(&local3);
org$frostlang$frostc$Type* $tmp1147 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1146);
org$frostlang$frostc$IR$Value* $tmp1148 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1144, $tmp1147);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
org$frostlang$frostc$IR$Value* $tmp1149 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
*(&local36) = $tmp1148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// line 357
org$frostlang$frostc$IR* $tmp1150 = *(&local0);
$fn1152 $tmp1151 = ($fn1152) $tmp1150->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1153 = $tmp1151($tmp1150, &$s1154);
*(&local37) = $tmp1153;
// line 358
org$frostlang$frostc$IR* $tmp1155 = *(&local0);
$fn1157 $tmp1156 = ($fn1157) $tmp1155->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1158 = $tmp1156($tmp1155, &$s1159);
*(&local38) = $tmp1158;
// line 359
org$frostlang$frostc$IR* $tmp1160 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1161 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1162 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1163 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1164 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1165 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1161, $tmp1162, param1, $tmp1163, $tmp1164, $tmp1165);
$fn1167 $tmp1166 = ($fn1167) $tmp1160->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1168 = $tmp1166($tmp1160, $tmp1161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
// line 363
org$frostlang$frostc$IR* $tmp1169 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1170 = *(&local37);
$fn1172 $tmp1171 = ($fn1172) $tmp1169->$class->vtable[4];
$tmp1171($tmp1169, $tmp1170);
// line 364
org$frostlang$frostc$IR$Value* $tmp1173 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1174 = *(&local10);
frost$collections$ListView* $tmp1175 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1174);
org$frostlang$frostc$Compiler$TypeContext* $tmp1176 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1177 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1178 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1179 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1176, $tmp1177, $tmp1178, $tmp1179);
org$frostlang$frostc$IR$Value* $tmp1180 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1173, &$s1181, $tmp1175, $tmp1176);
org$frostlang$frostc$IR$Value* $tmp1182 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1180);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
org$frostlang$frostc$IR$Value* $tmp1183 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local39) = $tmp1182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
// line 367
org$frostlang$frostc$IR* $tmp1184 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1185 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1186 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1187 = *(&local39);
org$frostlang$frostc$IR$Block$ID $tmp1188 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1189 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1185, $tmp1186, param1, $tmp1187, $tmp1188, $tmp1189);
$fn1191 $tmp1190 = ($fn1191) $tmp1184->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1192 = $tmp1190($tmp1184, $tmp1185);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// line 370
org$frostlang$frostc$IR* $tmp1193 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1194 = *(&local38);
$fn1196 $tmp1195 = ($fn1196) $tmp1193->$class->vtable[4];
$tmp1195($tmp1193, $tmp1194);
// line 371
org$frostlang$frostc$IR$Value* $tmp1197 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1198 = *(&local10);
frost$collections$ListView* $tmp1199 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1198);
org$frostlang$frostc$Compiler$TypeContext* $tmp1200 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1201 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1202 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1203 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1200, $tmp1201, $tmp1202, $tmp1203);
org$frostlang$frostc$IR$Value* $tmp1204 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1197, &$s1205, $tmp1199, $tmp1200);
org$frostlang$frostc$IR$Value* $tmp1206 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1204);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
org$frostlang$frostc$IR$Value* $tmp1207 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
*(&local40) = $tmp1206;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// line 374
org$frostlang$frostc$IR* $tmp1208 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1209 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1210 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1211 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1212 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1213 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1209, $tmp1210, param1, $tmp1211, $tmp1212, $tmp1213);
$fn1215 $tmp1214 = ($fn1215) $tmp1208->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1216 = $tmp1214($tmp1208, $tmp1209);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
// line 378
org$frostlang$frostc$IR* $tmp1217 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1218 = *(&local35);
$fn1220 $tmp1219 = ($fn1220) $tmp1217->$class->vtable[4];
$tmp1219($tmp1217, $tmp1218);
// line 379
org$frostlang$frostc$IR$Value* $tmp1221 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1222 = *(&local8);
frost$collections$ListView* $tmp1223 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1222);
org$frostlang$frostc$Compiler$TypeContext* $tmp1224 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1225 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1224, $tmp1225);
org$frostlang$frostc$IR$Value* $tmp1226 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1221, &$s1227, $tmp1223, $tmp1224);
org$frostlang$frostc$Type* $tmp1228 = *(&local3);
org$frostlang$frostc$Type* $tmp1229 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1228);
org$frostlang$frostc$IR$Value* $tmp1230 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1226, $tmp1229);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
org$frostlang$frostc$IR$Value* $tmp1231 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local41) = $tmp1230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
// line 383
org$frostlang$frostc$IR* $tmp1232 = *(&local0);
$fn1234 $tmp1233 = ($fn1234) $tmp1232->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1235 = $tmp1233($tmp1232, &$s1236);
*(&local42) = $tmp1235;
// line 384
org$frostlang$frostc$IR* $tmp1237 = *(&local0);
$fn1239 $tmp1238 = ($fn1239) $tmp1237->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1240 = $tmp1238($tmp1237, &$s1241);
*(&local43) = $tmp1240;
// line 385
org$frostlang$frostc$IR* $tmp1242 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1243 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1244 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1246 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1247 = *(&local43);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1243, $tmp1244, param1, $tmp1245, $tmp1246, $tmp1247);
$fn1249 $tmp1248 = ($fn1249) $tmp1242->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1250 = $tmp1248($tmp1242, $tmp1243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// line 389
org$frostlang$frostc$IR* $tmp1251 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1252 = *(&local42);
$fn1254 $tmp1253 = ($fn1254) $tmp1251->$class->vtable[4];
$tmp1253($tmp1251, $tmp1252);
// line 390
org$frostlang$frostc$IR$Value* $tmp1255 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1256 = *(&local12);
frost$collections$ListView* $tmp1257 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1256);
org$frostlang$frostc$Compiler$TypeContext* $tmp1258 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1259 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1260 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1261 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1258, $tmp1259, $tmp1260, $tmp1261);
org$frostlang$frostc$IR$Value* $tmp1262 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1255, &$s1263, $tmp1257, $tmp1258);
org$frostlang$frostc$IR$Value* $tmp1264 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1262);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
org$frostlang$frostc$IR$Value* $tmp1265 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local44) = $tmp1264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
// line 393
org$frostlang$frostc$IR* $tmp1266 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1267 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1268 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1269 = *(&local44);
org$frostlang$frostc$IR$Block$ID $tmp1270 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1271 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1267, $tmp1268, param1, $tmp1269, $tmp1270, $tmp1271);
$fn1273 $tmp1272 = ($fn1273) $tmp1266->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1274 = $tmp1272($tmp1266, $tmp1267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// line 397
org$frostlang$frostc$IR* $tmp1275 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1276 = *(&local43);
$fn1278 $tmp1277 = ($fn1278) $tmp1275->$class->vtable[4];
$tmp1277($tmp1275, $tmp1276);
// line 398
org$frostlang$frostc$IR$Value* $tmp1279 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1280 = *(&local12);
frost$collections$ListView* $tmp1281 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1280);
org$frostlang$frostc$Compiler$TypeContext* $tmp1282 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1283 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1284 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1285 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1282, $tmp1283, $tmp1284, $tmp1285);
org$frostlang$frostc$IR$Value* $tmp1286 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1279, &$s1287, $tmp1281, $tmp1282);
org$frostlang$frostc$IR$Value* $tmp1288 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1286);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
org$frostlang$frostc$IR$Value* $tmp1289 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local45) = $tmp1288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
// line 401
org$frostlang$frostc$IR* $tmp1290 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1291 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1292 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1293 = *(&local45);
org$frostlang$frostc$IR$Block$ID $tmp1294 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1295 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1291, $tmp1292, param1, $tmp1293, $tmp1294, $tmp1295);
$fn1297 $tmp1296 = ($fn1297) $tmp1290->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1298 = $tmp1296($tmp1290, $tmp1291);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// line 404
org$frostlang$frostc$IR* $tmp1299 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1300 = *(&local32);
$fn1302 $tmp1301 = ($fn1302) $tmp1299->$class->vtable[4];
$tmp1301($tmp1299, $tmp1300);
// line 405
org$frostlang$frostc$IR$Value* $tmp1303 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1304 = *(&local9);
frost$collections$ListView* $tmp1305 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1304);
org$frostlang$frostc$Compiler$TypeContext* $tmp1306 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1307 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1306, $tmp1307);
org$frostlang$frostc$IR$Value* $tmp1308 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1303, &$s1309, $tmp1305, $tmp1306);
org$frostlang$frostc$Type* $tmp1310 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp1311 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1308, $tmp1310);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
org$frostlang$frostc$IR$Value* $tmp1312 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local46) = $tmp1311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
// line 407
org$frostlang$frostc$IR* $tmp1313 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1314 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1315 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1316 = *(&local46);
org$frostlang$frostc$IR$Value* $tmp1317 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1318 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1319 = *(&local1);
org$frostlang$frostc$Type* $tmp1320 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1317, $tmp1318, $tmp1319, $tmp1320);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1314, $tmp1315, param1, $tmp1316, $tmp1317);
$fn1322 $tmp1321 = ($fn1322) $tmp1313->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1323 = $tmp1321($tmp1313, $tmp1314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// line 408
org$frostlang$frostc$IR* $tmp1324 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1325 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1326 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1327 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1325, $tmp1326, param1, $tmp1327);
$fn1329 $tmp1328 = ($fn1329) $tmp1324->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1330 = $tmp1328($tmp1324, $tmp1325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
// line 410
org$frostlang$frostc$IR* $tmp1331 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1332 = *(&local15);
$fn1334 $tmp1333 = ($fn1334) $tmp1331->$class->vtable[4];
$tmp1333($tmp1331, $tmp1332);
org$frostlang$frostc$IR$Value* $tmp1335 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1336 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1337 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1338 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1339 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1340 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1341 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1342 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1343 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1344 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1345 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1346 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1347 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1348 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1349 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1350 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1351 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1352 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1353 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1354 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1355 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1356 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
// line 417
org$frostlang$frostc$IR** $tmp1357 = &param0->ir;
org$frostlang$frostc$IR* $tmp1358 = *$tmp1357;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
org$frostlang$frostc$IR* $tmp1359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local0) = $tmp1358;
// line 418
$fn1361 $tmp1360 = ($fn1361) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1362 = $tmp1360(param4);
frost$core$Bit $tmp1363 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1362);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1363;
goto block3;
block2:;
$fn1366 $tmp1365 = ($fn1366) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1367 = $tmp1365(param4);
frost$core$Bit $tmp1368 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1367);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local1) = $tmp1368;
goto block3;
block3:;
frost$core$Bit $tmp1369 = *(&local1);
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {418};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1372, $tmp1371);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
// line 419
$fn1374 $tmp1373 = ($fn1374) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1375 = $tmp1373(param4);
frost$core$Bit $tmp1376 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp1375);
frost$core$Bit $tmp1377 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1376);
bool $tmp1378 = $tmp1377.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
if ($tmp1378) goto block6; else goto block7;
block6:;
// line 420
org$frostlang$frostc$IR* $tmp1379 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 422
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 423
$fn1381 $tmp1380 = ($fn1381) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1382 = $tmp1380(param4);
org$frostlang$frostc$Type$Kind* $tmp1383 = &$tmp1382->typeKind;
org$frostlang$frostc$Type$Kind $tmp1384 = *$tmp1383;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1385;
$tmp1385 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1385->value = $tmp1384;
frost$core$Int64 $tmp1386 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1387 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1386);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1388;
$tmp1388 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1388->value = $tmp1387;
ITable* $tmp1389 = ((frost$core$Equatable*) $tmp1385)->$class->itable;
while ($tmp1389->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[0];
frost$core$Bit $tmp1392 = $tmp1390(((frost$core$Equatable*) $tmp1385), ((frost$core$Equatable*) $tmp1388));
bool $tmp1393 = $tmp1392.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1388)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1385)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
if ($tmp1393) goto block8; else goto block10;
block8:;
// line 424
$fn1395 $tmp1394 = ($fn1395) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1396 = $tmp1394(param4);
org$frostlang$frostc$FixedArray** $tmp1397 = &$tmp1396->subtypes;
org$frostlang$frostc$FixedArray* $tmp1398 = *$tmp1397;
frost$core$Int64 $tmp1399 = (frost$core$Int64) {0};
frost$core$Object* $tmp1400 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1398, $tmp1399);
org$frostlang$frostc$Type$Kind* $tmp1401 = &((org$frostlang$frostc$Type*) $tmp1400)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1402 = *$tmp1401;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1403;
$tmp1403 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1403->value = $tmp1402;
frost$core$Int64 $tmp1404 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1405 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1404);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1406;
$tmp1406 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1406->value = $tmp1405;
ITable* $tmp1407 = ((frost$core$Equatable*) $tmp1403)->$class->itable;
while ($tmp1407->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1407 = $tmp1407->next;
}
$fn1409 $tmp1408 = $tmp1407->methods[0];
frost$core$Bit $tmp1410 = $tmp1408(((frost$core$Equatable*) $tmp1403), ((frost$core$Equatable*) $tmp1406));
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1412 = (frost$core$Int64) {424};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1413, $tmp1412);
abort(); // unreachable
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1406)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1403)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1400);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// line 425
$fn1415 $tmp1414 = ($fn1415) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1416 = $tmp1414(param4);
org$frostlang$frostc$FixedArray** $tmp1417 = &$tmp1416->subtypes;
org$frostlang$frostc$FixedArray* $tmp1418 = *$tmp1417;
frost$core$Int64 $tmp1419 = (frost$core$Int64) {0};
frost$core$Object* $tmp1420 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1418, $tmp1419);
org$frostlang$frostc$FixedArray** $tmp1421 = &((org$frostlang$frostc$Type*) $tmp1420)->subtypes;
org$frostlang$frostc$FixedArray* $tmp1422 = *$tmp1421;
frost$core$Int64 $tmp1423 = (frost$core$Int64) {1};
frost$core$Object* $tmp1424 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1422, $tmp1423);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1424)));
org$frostlang$frostc$Type* $tmp1425 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1424);
frost$core$Frost$unref$frost$core$Object$Q($tmp1424);
frost$core$Frost$unref$frost$core$Object$Q($tmp1420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
goto block9;
block10:;
// line 1
// line 428
$fn1427 $tmp1426 = ($fn1427) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1428 = $tmp1426(param4);
org$frostlang$frostc$Type$Kind* $tmp1429 = &$tmp1428->typeKind;
org$frostlang$frostc$Type$Kind $tmp1430 = *$tmp1429;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1431;
$tmp1431 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1431->value = $tmp1430;
frost$core$Int64 $tmp1432 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1433 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1432);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1434;
$tmp1434 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1434->value = $tmp1433;
ITable* $tmp1435 = ((frost$core$Equatable*) $tmp1431)->$class->itable;
while ($tmp1435->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[0];
frost$core$Bit $tmp1438 = $tmp1436(((frost$core$Equatable*) $tmp1431), ((frost$core$Equatable*) $tmp1434));
bool $tmp1439 = $tmp1438.value;
if ($tmp1439) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1440 = (frost$core$Int64) {428};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1441, $tmp1440);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1434)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1431)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// line 429
$fn1443 $tmp1442 = ($fn1443) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1444 = $tmp1442(param4);
org$frostlang$frostc$FixedArray** $tmp1445 = &$tmp1444->subtypes;
org$frostlang$frostc$FixedArray* $tmp1446 = *$tmp1445;
frost$core$Int64 $tmp1447 = (frost$core$Int64) {1};
frost$core$Object* $tmp1448 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1446, $tmp1447);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1448)));
org$frostlang$frostc$Type* $tmp1449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1448);
frost$core$Frost$unref$frost$core$Object$Q($tmp1448);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
goto block9;
block9:;
// line 431
org$frostlang$frostc$Type* $tmp1450 = *(&local2);
frost$core$Bit $tmp1451 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1450);
frost$core$Bit $tmp1452 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1451);
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block15; else goto block16;
block15:;
// line 432
$fn1455 $tmp1454 = ($fn1455) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1456 = $tmp1454(param4);
frost$core$String* $tmp1457 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1458, ((frost$core$Object*) $tmp1456));
frost$core$String* $tmp1459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1457, &$s1460);
frost$core$String* $tmp1461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1462, $tmp1459);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1461);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// line 434
org$frostlang$frostc$Type* $tmp1463 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1464 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block16:;
// line 436
org$frostlang$frostc$Compiler$AutoScope* $tmp1465 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1465, param0);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
org$frostlang$frostc$Compiler$AutoScope* $tmp1466 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local3) = $tmp1465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
// line 437
frost$core$Int64 $tmp1467 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1468 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1467);
org$frostlang$frostc$Type* $tmp1469 = *(&local2);
org$frostlang$frostc$Type* $tmp1470 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1469);
org$frostlang$frostc$Pair* $tmp1471 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1468, ((org$frostlang$frostc$ASTNode*) NULL), $tmp1470);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
org$frostlang$frostc$Pair* $tmp1472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local4) = $tmp1471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
// line 439
org$frostlang$frostc$Pair* $tmp1473 = *(&local4);
frost$core$Bit $tmp1474 = frost$core$Bit$init$builtin_bit($tmp1473 == NULL);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block17; else goto block18;
block17:;
// line 440
org$frostlang$frostc$Pair* $tmp1476 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1477 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1479 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block18:;
// line 442
org$frostlang$frostc$Pair* $tmp1480 = *(&local4);
frost$core$Object** $tmp1481 = &$tmp1480->second;
frost$core$Object* $tmp1482 = *$tmp1481;
frost$core$Bit $tmp1483 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp1482) == NULL);
bool $tmp1484 = $tmp1483.value;
if ($tmp1484) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1485 = (frost$core$Int64) {442};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1486, $tmp1485);
abort(); // unreachable
block19:;
// line 443
org$frostlang$frostc$Pair* $tmp1487 = *(&local4);
frost$core$Object** $tmp1488 = &$tmp1487->first;
frost$core$Object* $tmp1489 = *$tmp1488;
org$frostlang$frostc$Type** $tmp1490 = &((org$frostlang$frostc$Variable*) $tmp1489)->type;
org$frostlang$frostc$Type* $tmp1491 = *$tmp1490;
frost$core$Bit $tmp1492 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1491);
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block21; else goto block22;
block21:;
// line 444
frost$collections$Stack** $tmp1494 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1495 = *$tmp1494;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1496 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1497 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1498 = *(&local4);
frost$core$Object** $tmp1499 = &$tmp1498->first;
frost$core$Object* $tmp1500 = *$tmp1499;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1496, $tmp1497, ((org$frostlang$frostc$Variable*) $tmp1500));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1495, ((frost$core$Object*) $tmp1496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
goto block22;
block22:;
// line 446
$fn1502 $tmp1501 = ($fn1502) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1503 = $tmp1501(param4);
frost$core$Bit $tmp1504 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1503);
bool $tmp1505 = $tmp1504.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
if ($tmp1505) goto block23; else goto block25;
block23:;
// line 447
org$frostlang$frostc$Pair* $tmp1506 = *(&local4);
frost$core$Object** $tmp1507 = &$tmp1506->first;
frost$core$Object* $tmp1508 = *$tmp1507;
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1508), param4, param5);
goto block24;
block25:;
// line 1
// line 450
org$frostlang$frostc$Pair* $tmp1509 = *(&local4);
frost$core$Object** $tmp1510 = &$tmp1509->first;
frost$core$Object* $tmp1511 = *$tmp1510;
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1511), param4, param5);
goto block24;
block24:;
org$frostlang$frostc$Pair* $tmp1512 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1513 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1514 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1515 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
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
// line 458
org$frostlang$frostc$IR** $tmp1516 = &param0->ir;
org$frostlang$frostc$IR* $tmp1517 = *$tmp1516;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
org$frostlang$frostc$IR* $tmp1518 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local0) = $tmp1517;
// line 459
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 460
frost$core$Int64* $tmp1519 = &param3->$rawValue;
frost$core$Int64 $tmp1520 = *$tmp1519;
frost$core$Int64 $tmp1521 = (frost$core$Int64) {47};
frost$core$Bit $tmp1522 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1520, $tmp1521);
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1524 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1525 = *$tmp1524;
*(&local2) = $tmp1525;
frost$core$String** $tmp1526 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1527 = *$tmp1526;
org$frostlang$frostc$ASTNode** $tmp1528 = (org$frostlang$frostc$ASTNode**) (param3->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1529 = *$tmp1528;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
org$frostlang$frostc$ASTNode* $tmp1530 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local3) = $tmp1529;
// line 462
org$frostlang$frostc$Scanner** $tmp1531 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1532 = *$tmp1531;
org$frostlang$frostc$ASTNode* $tmp1533 = *(&local3);
org$frostlang$frostc$Type* $tmp1534 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1532, $tmp1533);
org$frostlang$frostc$Type* $tmp1535 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1534);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
org$frostlang$frostc$Type* $tmp1536 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local4) = $tmp1535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// line 463
org$frostlang$frostc$Type* $tmp1537 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp1538 = &$tmp1537->typeKind;
org$frostlang$frostc$Type$Kind $tmp1539 = *$tmp1538;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1540;
$tmp1540 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1540->value = $tmp1539;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1542 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1541);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1543;
$tmp1543 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1543->value = $tmp1542;
ITable* $tmp1544 = ((frost$core$Equatable*) $tmp1540)->$class->itable;
while ($tmp1544->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1544 = $tmp1544->next;
}
$fn1546 $tmp1545 = $tmp1544->methods[0];
frost$core$Bit $tmp1547 = $tmp1545(((frost$core$Equatable*) $tmp1540), ((frost$core$Equatable*) $tmp1543));
bool $tmp1548 = $tmp1547.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1543)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1540)));
if ($tmp1548) goto block4; else goto block5;
block4:;
// line 464
org$frostlang$frostc$Position $tmp1549 = *(&local2);
org$frostlang$frostc$Type* $tmp1550 = *(&local4);
frost$core$String* $tmp1551 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1552, ((frost$core$Object*) $tmp1550));
frost$core$String* $tmp1553 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1551, &$s1554);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1549, $tmp1553);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// line 465
org$frostlang$frostc$Type* $tmp1555 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1556 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block5:;
// line 467
org$frostlang$frostc$Type* $tmp1559 = *(&local4);
frost$core$Bit $tmp1560 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1559);
frost$core$Bit $tmp1561 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1560);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block6; else goto block7;
block6:;
// line 468
org$frostlang$frostc$Position $tmp1563 = *(&local2);
org$frostlang$frostc$Type* $tmp1564 = *(&local4);
frost$core$String* $tmp1565 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1566, ((frost$core$Object*) $tmp1564));
frost$core$String* $tmp1567 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1565, &$s1568);
frost$core$String* $tmp1569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1570, $tmp1567);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1563, $tmp1569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// line 470
org$frostlang$frostc$Type* $tmp1571 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1572 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1573 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1574 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 472
frost$core$Int64* $tmp1575 = &param4->$rawValue;
frost$core$Int64 $tmp1576 = *$tmp1575;
frost$core$Int64 $tmp1577 = (frost$core$Int64) {35};
frost$core$Bit $tmp1578 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1576, $tmp1577);
bool $tmp1579 = $tmp1578.value;
if ($tmp1579) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp1580 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1581 = *$tmp1580;
org$frostlang$frostc$ASTNode** $tmp1582 = (org$frostlang$frostc$ASTNode**) (param4->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1583 = *$tmp1582;
frost$core$Bit* $tmp1584 = (frost$core$Bit*) (param4->$data + 24);
frost$core$Bit $tmp1585 = *$tmp1584;
org$frostlang$frostc$ASTNode** $tmp1586 = (org$frostlang$frostc$ASTNode**) (param4->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1587 = *$tmp1586;
org$frostlang$frostc$ASTNode** $tmp1588 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1589 = *$tmp1588;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
org$frostlang$frostc$ASTNode* $tmp1590 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
*(&local5) = $tmp1589;
// line 474
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 475
org$frostlang$frostc$ASTNode* $tmp1591 = *(&local5);
frost$core$Bit $tmp1592 = frost$core$Bit$init$builtin_bit($tmp1591 != NULL);
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block11; else goto block13;
block11:;
// line 476
org$frostlang$frostc$Type* $tmp1594 = *(&local4);
org$frostlang$frostc$Type* $tmp1595 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
org$frostlang$frostc$Type* $tmp1596 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local6) = $tmp1595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
goto block12;
block13:;
// line 1
// line 479
org$frostlang$frostc$Type* $tmp1597 = *(&local4);
org$frostlang$frostc$Type* $tmp1598 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1597);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
org$frostlang$frostc$Type* $tmp1599 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local6) = $tmp1598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
goto block12;
block12:;
// line 481
org$frostlang$frostc$Compiler$TypeContext* $tmp1600 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1601 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1602 = *(&local6);
frost$core$Bit $tmp1603 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1600, $tmp1601, $tmp1602, $tmp1603);
org$frostlang$frostc$IR$Value* $tmp1604 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
org$frostlang$frostc$IR$Value* $tmp1605 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
*(&local1) = $tmp1604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
org$frostlang$frostc$Type* $tmp1606 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1607 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
// line 484
frost$core$Int64 $tmp1608 = (frost$core$Int64) {484};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1609, $tmp1608);
abort(); // unreachable
block8:;
org$frostlang$frostc$Type* $tmp1610 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1611 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 489
org$frostlang$frostc$Type* $tmp1612 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
org$frostlang$frostc$Type* $tmp1613 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
*(&local7) = $tmp1612;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1612));
// line 490
org$frostlang$frostc$Compiler$TypeContext* $tmp1614 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1615 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1614, $tmp1615);
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
org$frostlang$frostc$Compiler$TypeContext* $tmp1616 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local8) = $tmp1614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
// line 491
org$frostlang$frostc$Type* $tmp1617 = *(&local7);
frost$core$Bit $tmp1618 = frost$core$Bit$init$builtin_bit($tmp1617 != NULL);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block17; else goto block16;
block17:;
org$frostlang$frostc$Type* $tmp1620 = *(&local7);
frost$core$Bit $tmp1621 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1620);
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block14; else goto block16;
block14:;
// line 492
org$frostlang$frostc$Compiler$TypeContext* $tmp1623 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1624 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1625 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1626 = &$tmp1625->subtypes;
org$frostlang$frostc$FixedArray* $tmp1627 = *$tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {1};
frost$core$Object* $tmp1629 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1627, $tmp1628);
org$frostlang$frostc$Type* $tmp1630 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1629));
org$frostlang$frostc$Type* $tmp1631 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1630);
frost$core$Bit $tmp1632 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1623, $tmp1624, $tmp1631, $tmp1632);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
org$frostlang$frostc$Compiler$TypeContext* $tmp1633 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
*(&local8) = $tmp1623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
frost$core$Frost$unref$frost$core$Object$Q($tmp1629);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
goto block15;
block16:;
// line 495
org$frostlang$frostc$Type* $tmp1634 = *(&local7);
frost$core$Bit $tmp1635 = frost$core$Bit$init$builtin_bit($tmp1634 != NULL);
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Type* $tmp1637 = *(&local7);
frost$core$Bit $tmp1638 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1637);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block18; else goto block19;
block18:;
// line 496
org$frostlang$frostc$Compiler$TypeContext* $tmp1640 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1641 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1642 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1643 = &$tmp1642->subtypes;
org$frostlang$frostc$FixedArray* $tmp1644 = *$tmp1643;
frost$core$Int64 $tmp1645 = (frost$core$Int64) {1};
frost$core$Object* $tmp1646 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1644, $tmp1645);
org$frostlang$frostc$Type* $tmp1647 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1646));
org$frostlang$frostc$Type* $tmp1648 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1649 = &$tmp1648->subtypes;
org$frostlang$frostc$FixedArray* $tmp1650 = *$tmp1649;
frost$core$Int64 $tmp1651 = (frost$core$Int64) {2};
frost$core$Object* $tmp1652 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1650, $tmp1651);
org$frostlang$frostc$Type* $tmp1653 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1647, ((org$frostlang$frostc$Type*) $tmp1652));
frost$core$Bit $tmp1654 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1640, $tmp1641, $tmp1653, $tmp1654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
org$frostlang$frostc$Compiler$TypeContext* $tmp1655 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local8) = $tmp1640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
frost$core$Frost$unref$frost$core$Object$Q($tmp1652);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Frost$unref$frost$core$Object$Q($tmp1646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
goto block19;
block19:;
goto block15;
block15:;
// line 499
org$frostlang$frostc$Compiler$TypeContext* $tmp1656 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1657 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1656);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
org$frostlang$frostc$IR$Value* $tmp1658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local1) = $tmp1657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
org$frostlang$frostc$Compiler$TypeContext* $tmp1659 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp1660 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 502
org$frostlang$frostc$IR$Value* $tmp1661 = *(&local1);
frost$core$Bit $tmp1662 = frost$core$Bit$init$builtin_bit($tmp1661 == NULL);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block21; else goto block22;
block21:;
// line 503
org$frostlang$frostc$IR$Value* $tmp1664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1665 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block22:;
// line 505
org$frostlang$frostc$IR$Value* $tmp1666 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1666, param5);
org$frostlang$frostc$IR$Value* $tmp1667 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
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
// line 512
org$frostlang$frostc$IR** $tmp1669 = &param0->ir;
org$frostlang$frostc$IR* $tmp1670 = *$tmp1669;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
org$frostlang$frostc$IR* $tmp1671 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local0) = $tmp1670;
// line 513
org$frostlang$frostc$IR* $tmp1672 = *(&local0);
$fn1674 $tmp1673 = ($fn1674) $tmp1672->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1675 = $tmp1673($tmp1672, &$s1676);
*(&local1) = $tmp1675;
// line 514
org$frostlang$frostc$IR* $tmp1677 = *(&local0);
$fn1679 $tmp1678 = ($fn1679) $tmp1677->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1680 = $tmp1678($tmp1677, &$s1681);
*(&local2) = $tmp1680;
// line 515
org$frostlang$frostc$IR* $tmp1682 = *(&local0);
$fn1684 $tmp1683 = ($fn1684) $tmp1682->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1685 = $tmp1683($tmp1682, &$s1686);
*(&local3) = $tmp1685;
// line 516
org$frostlang$frostc$Compiler$AutoContext* $tmp1687 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1688 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1689 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1690 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1691 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1688, $tmp1689, param2, $tmp1690, $tmp1691);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1687, param0, $tmp1688);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
org$frostlang$frostc$Compiler$AutoContext* $tmp1692 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local4) = $tmp1687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
// line 517
$fn1694 $tmp1693 = ($fn1694) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1695 = $tmp1693(param4);
org$frostlang$frostc$Type$Kind* $tmp1696 = &$tmp1695->typeKind;
org$frostlang$frostc$Type$Kind $tmp1697 = *$tmp1696;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1698;
$tmp1698 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1698->value = $tmp1697;
frost$core$Int64 $tmp1699 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1700 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1699);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1701;
$tmp1701 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1701->value = $tmp1700;
ITable* $tmp1702 = ((frost$core$Equatable*) $tmp1698)->$class->itable;
while ($tmp1702->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1702 = $tmp1702->next;
}
$fn1704 $tmp1703 = $tmp1702->methods[0];
frost$core$Bit $tmp1705 = $tmp1703(((frost$core$Equatable*) $tmp1698), ((frost$core$Equatable*) $tmp1701));
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block1; else goto block2;
block1:;
$fn1708 $tmp1707 = ($fn1708) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1709 = $tmp1707(param4);
org$frostlang$frostc$FixedArray** $tmp1710 = &$tmp1709->subtypes;
org$frostlang$frostc$FixedArray* $tmp1711 = *$tmp1710;
frost$core$Int64 $tmp1712 = (frost$core$Int64) {0};
frost$core$Object* $tmp1713 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1711, $tmp1712);
org$frostlang$frostc$Type* $tmp1714 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1715 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1713), $tmp1714);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q($tmp1713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local5) = $tmp1715;
goto block3;
block2:;
*(&local5) = $tmp1705;
goto block3;
block3:;
frost$core$Bit $tmp1716 = *(&local5);
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1718 = (frost$core$Int64) {517};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1719, $tmp1718);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1701)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1698)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
// line 519
org$frostlang$frostc$IR* $tmp1720 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1721 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1722 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1723 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1721, $tmp1722, param1, $tmp1723);
$fn1725 $tmp1724 = ($fn1725) $tmp1720->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1726 = $tmp1724($tmp1720, $tmp1721);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// line 520
org$frostlang$frostc$IR* $tmp1727 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1728 = *(&local1);
$fn1730 $tmp1729 = ($fn1730) $tmp1727->$class->vtable[4];
$tmp1729($tmp1727, $tmp1728);
// line 521
frost$collections$Array* $tmp1731 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1731);
org$frostlang$frostc$Compiler$TypeContext* $tmp1732 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1733 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1734 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1735 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1732, $tmp1733, $tmp1734, $tmp1735);
org$frostlang$frostc$IR$Value* $tmp1736 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s1737, ((frost$collections$ListView*) $tmp1731), $tmp1732);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
org$frostlang$frostc$IR$Value* $tmp1738 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local6) = $tmp1736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
// line 523
org$frostlang$frostc$IR$Value* $tmp1739 = *(&local6);
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit($tmp1739 == NULL);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block6; else goto block7;
block6:;
// line 524
org$frostlang$frostc$IR$Value* $tmp1742 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1743 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1744 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 526
org$frostlang$frostc$IR* $tmp1745 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1746 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1747 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1748 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1749 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1748);
org$frostlang$frostc$IR$Block$ID $tmp1750 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1751 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1746, $tmp1747, param1, $tmp1749, $tmp1750, $tmp1751);
$fn1753 $tmp1752 = ($fn1753) $tmp1745->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1754 = $tmp1752($tmp1745, $tmp1746);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
// line 528
org$frostlang$frostc$IR* $tmp1755 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1756 = *(&local2);
$fn1758 $tmp1757 = ($fn1758) $tmp1755->$class->vtable[4];
$tmp1757($tmp1755, $tmp1756);
// line 1
// line 530
org$frostlang$frostc$Compiler$AutoScope* $tmp1759 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1759, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
org$frostlang$frostc$Compiler$AutoScope* $tmp1760 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local7) = $tmp1759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
// line 531
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 533
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1761 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp1761, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1762 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local9) = $tmp1761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
// line 534
frost$core$Int64 $tmp1763 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1764 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1763);
$fn1766 $tmp1765 = ($fn1766) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1767 = $tmp1765(param4);
org$frostlang$frostc$FixedArray** $tmp1768 = &$tmp1767->subtypes;
org$frostlang$frostc$FixedArray* $tmp1769 = *$tmp1768;
frost$core$Int64 $tmp1770 = (frost$core$Int64) {1};
frost$core$Object* $tmp1771 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1769, $tmp1770);
org$frostlang$frostc$Pair* $tmp1772 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1764, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp1771));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
org$frostlang$frostc$Pair* $tmp1773 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local8) = $tmp1772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$Frost$unref$frost$core$Object$Q($tmp1771);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
// line 536
org$frostlang$frostc$Pair* $tmp1774 = *(&local8);
frost$core$Bit $tmp1775 = frost$core$Bit$init$builtin_bit($tmp1774 == NULL);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block8; else goto block9;
block8:;
// line 537
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1777 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Pair* $tmp1778 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1779 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp1780 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1781 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1782 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1783 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 540
org$frostlang$frostc$Pair* $tmp1784 = *(&local8);
frost$core$Object** $tmp1785 = &$tmp1784->first;
frost$core$Object* $tmp1786 = *$tmp1785;
org$frostlang$frostc$Type** $tmp1787 = &((org$frostlang$frostc$Variable*) $tmp1786)->type;
org$frostlang$frostc$Type* $tmp1788 = *$tmp1787;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
org$frostlang$frostc$Type* $tmp1789 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local10) = $tmp1788;
// line 541
org$frostlang$frostc$Type* $tmp1790 = *(&local10);
frost$core$Bit $tmp1791 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1790);
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block10; else goto block11;
block10:;
// line 542
frost$collections$Stack** $tmp1793 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1794 = *$tmp1793;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1795 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1796 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1797 = *(&local8);
frost$core$Object** $tmp1798 = &$tmp1797->first;
frost$core$Object* $tmp1799 = *$tmp1798;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1795, $tmp1796, ((org$frostlang$frostc$Variable*) $tmp1799));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1794, ((frost$core$Object*) $tmp1795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
goto block11;
block11:;
// line 545
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 546
frost$collections$Array* $tmp1800 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1800);
org$frostlang$frostc$Compiler$TypeContext* $tmp1801 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1802 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1803 = *(&local10);
frost$core$Bit $tmp1804 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1801, $tmp1802, $tmp1803, $tmp1804);
org$frostlang$frostc$IR$Value* $tmp1805 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s1806, ((frost$collections$ListView*) $tmp1800), $tmp1801);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
org$frostlang$frostc$IR$Value* $tmp1807 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
*(&local11) = $tmp1805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// line 548
org$frostlang$frostc$IR$Value* $tmp1808 = *(&local11);
frost$core$Bit $tmp1809 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block12; else goto block13;
block12:;
// line 549
org$frostlang$frostc$IR$Value* $tmp1811 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1812 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1812));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1813 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1814 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp1815 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1816 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 551
org$frostlang$frostc$lvalue$VariableLValue* $tmp1818 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Pair* $tmp1819 = *(&local8);
frost$core$Object** $tmp1820 = &$tmp1819->first;
frost$core$Object* $tmp1821 = *$tmp1820;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp1818, param0, param1, ((org$frostlang$frostc$Variable*) $tmp1821));
org$frostlang$frostc$IR$Value* $tmp1822 = *(&local11);
$fn1824 $tmp1823 = ($fn1824) $tmp1818->$class->vtable[4];
$tmp1823($tmp1818, $tmp1822);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
// line 552
ITable* $tmp1825 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1825->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1825 = $tmp1825->next;
}
$fn1827 $tmp1826 = $tmp1825->methods[0];
frost$collections$Iterator* $tmp1828 = $tmp1826(((frost$collections$Iterable*) param5));
goto block14;
block14:;
ITable* $tmp1829 = $tmp1828->$class->itable;
while ($tmp1829->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1829 = $tmp1829->next;
}
$fn1831 $tmp1830 = $tmp1829->methods[0];
frost$core$Bit $tmp1832 = $tmp1830($tmp1828);
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block16; else goto block15;
block15:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1834 = $tmp1828->$class->itable;
while ($tmp1834->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1834 = $tmp1834->next;
}
$fn1836 $tmp1835 = $tmp1834->methods[1];
frost$core$Object* $tmp1837 = $tmp1835($tmp1828);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1837)));
org$frostlang$frostc$ASTNode* $tmp1838 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1837);
// line 553
org$frostlang$frostc$ASTNode* $tmp1839 = *(&local12);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1839);
frost$core$Frost$unref$frost$core$Object$Q($tmp1837);
org$frostlang$frostc$ASTNode* $tmp1840 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
org$frostlang$frostc$IR$Value* $tmp1841 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1842 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1843 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1844 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 556
org$frostlang$frostc$IR* $tmp1845 = *(&local0);
$fn1847 $tmp1846 = ($fn1847) $tmp1845->$class->vtable[5];
frost$core$Bit $tmp1848 = $tmp1846($tmp1845);
frost$core$Bit $tmp1849 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1848);
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block17; else goto block18;
block17:;
// line 557
org$frostlang$frostc$IR* $tmp1851 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1852 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1853 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1854 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1852, $tmp1853, param1, $tmp1854);
$fn1856 $tmp1855 = ($fn1856) $tmp1851->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1857 = $tmp1855($tmp1851, $tmp1852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
goto block18;
block18:;
// line 559
org$frostlang$frostc$IR* $tmp1858 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1859 = *(&local3);
$fn1861 $tmp1860 = ($fn1861) $tmp1858->$class->vtable[4];
$tmp1860($tmp1858, $tmp1859);
org$frostlang$frostc$IR$Value* $tmp1862 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1863 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 565
frost$core$Int64* $tmp1865 = &param4->$rawValue;
frost$core$Int64 $tmp1866 = *$tmp1865;
frost$core$Int64 $tmp1867 = (frost$core$Int64) {35};
frost$core$Bit $tmp1868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1866, $tmp1867);
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block2; else goto block1;
block2:;
// line 569
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 570
return;
block1:;
// line 573
org$frostlang$frostc$IR$Value* $tmp1870 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, param4);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
org$frostlang$frostc$IR$Value* $tmp1871 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local0) = $tmp1870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
// line 574
org$frostlang$frostc$IR$Value* $tmp1872 = *(&local0);
frost$core$Bit $tmp1873 = frost$core$Bit$init$builtin_bit($tmp1872 == NULL);
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block3; else goto block4;
block3:;
// line 575
org$frostlang$frostc$IR$Value* $tmp1875 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block4:;
// line 577
org$frostlang$frostc$IR$Value* $tmp1876 = *(&local0);
$fn1878 $tmp1877 = ($fn1878) $tmp1876->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1879 = $tmp1877($tmp1876);
frost$core$Bit $tmp1880 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1879);
bool $tmp1881 = $tmp1880.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
if ($tmp1881) goto block5; else goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp1882 = *(&local0);
$fn1884 $tmp1883 = ($fn1884) $tmp1882->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1885 = $tmp1883($tmp1882);
frost$core$Bit $tmp1886 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1885);
bool $tmp1887 = $tmp1886.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
if ($tmp1887) goto block5; else goto block7;
block5:;
// line 579
org$frostlang$frostc$IR$Value* $tmp1888 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1888, param5);
goto block6;
block7:;
// line 1
// line 582
org$frostlang$frostc$IR$Value* $tmp1889 = *(&local0);
$fn1891 $tmp1890 = ($fn1891) $tmp1889->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1892 = $tmp1890($tmp1889);
frost$collections$HashSet* $tmp1893 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp1892);
ITable* $tmp1894 = ((frost$collections$Iterable*) $tmp1893)->$class->itable;
while ($tmp1894->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1894 = $tmp1894->next;
}
$fn1896 $tmp1895 = $tmp1894->methods[0];
frost$collections$Iterator* $tmp1897 = $tmp1895(((frost$collections$Iterable*) $tmp1893));
goto block9;
block9:;
ITable* $tmp1898 = $tmp1897->$class->itable;
while ($tmp1898->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1898 = $tmp1898->next;
}
$fn1900 $tmp1899 = $tmp1898->methods[0];
frost$core$Bit $tmp1901 = $tmp1899($tmp1897);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block11; else goto block10;
block10:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1903 = $tmp1897->$class->itable;
while ($tmp1903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1903 = $tmp1903->next;
}
$fn1905 $tmp1904 = $tmp1903->methods[1];
frost$core$Object* $tmp1906 = $tmp1904($tmp1897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1906)));
org$frostlang$frostc$Type* $tmp1907 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1906);
// line 583
org$frostlang$frostc$Type* $tmp1908 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1909 = &$tmp1908->typeKind;
org$frostlang$frostc$Type$Kind $tmp1910 = *$tmp1909;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1911;
$tmp1911 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1911->value = $tmp1910;
frost$core$Int64 $tmp1912 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1913 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1912);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1914;
$tmp1914 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1914->value = $tmp1913;
ITable* $tmp1915 = ((frost$core$Equatable*) $tmp1911)->$class->itable;
while ($tmp1915->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1915 = $tmp1915->next;
}
$fn1917 $tmp1916 = $tmp1915->methods[0];
frost$core$Bit $tmp1918 = $tmp1916(((frost$core$Equatable*) $tmp1911), ((frost$core$Equatable*) $tmp1914));
bool $tmp1919 = $tmp1918.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1914)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1911)));
if ($tmp1919) goto block14; else goto block13;
block14:;
org$frostlang$frostc$Type* $tmp1920 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp1921 = &$tmp1920->subtypes;
org$frostlang$frostc$FixedArray* $tmp1922 = *$tmp1921;
frost$core$Int64 $tmp1923 = (frost$core$Int64) {0};
frost$core$Object* $tmp1924 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1922, $tmp1923);
org$frostlang$frostc$Type* $tmp1925 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1926 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1924), $tmp1925);
bool $tmp1927 = $tmp1926.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
frost$core$Frost$unref$frost$core$Object$Q($tmp1924);
if ($tmp1927) goto block12; else goto block13;
block12:;
// line 584
$fn1929 $tmp1928 = ($fn1929) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1930 = $tmp1928(param4);
org$frostlang$frostc$IR$Value* $tmp1931 = *(&local0);
org$frostlang$frostc$Type* $tmp1932 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp1933 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1930, $tmp1931, $tmp1932);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
org$frostlang$frostc$IR$Value* $tmp1934 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local2) = $tmp1933;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
// line 585
org$frostlang$frostc$IR$Value* $tmp1935 = *(&local2);
frost$core$Bit $tmp1936 = frost$core$Bit$init$builtin_bit($tmp1935 == NULL);
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block15; else goto block16;
block15:;
// line 586
org$frostlang$frostc$IR$Value* $tmp1938 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1938));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$Type* $tmp1939 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
org$frostlang$frostc$IR$Value* $tmp1940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block16:;
// line 588
org$frostlang$frostc$IR$Value* $tmp1941 = *(&local2);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1941, param5);
// line 589
org$frostlang$frostc$IR$Value* $tmp1942 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$Type* $tmp1943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
org$frostlang$frostc$IR$Value* $tmp1944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block13:;
// line 591
org$frostlang$frostc$Type* $tmp1945 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1946 = &$tmp1945->typeKind;
org$frostlang$frostc$Type$Kind $tmp1947 = *$tmp1946;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1948;
$tmp1948 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1948->value = $tmp1947;
frost$core$Int64 $tmp1949 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1950 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1949);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1951;
$tmp1951 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1951->value = $tmp1950;
ITable* $tmp1952 = ((frost$core$Equatable*) $tmp1948)->$class->itable;
while ($tmp1952->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1952 = $tmp1952->next;
}
$fn1954 $tmp1953 = $tmp1952->methods[0];
frost$core$Bit $tmp1955 = $tmp1953(((frost$core$Equatable*) $tmp1948), ((frost$core$Equatable*) $tmp1951));
bool $tmp1956 = $tmp1955.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1951)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1948)));
if ($tmp1956) goto block19; else goto block18;
block19:;
org$frostlang$frostc$Type* $tmp1957 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp1958 = &$tmp1957->subtypes;
org$frostlang$frostc$FixedArray* $tmp1959 = *$tmp1958;
frost$core$Int64 $tmp1960 = (frost$core$Int64) {0};
frost$core$Object* $tmp1961 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1959, $tmp1960);
org$frostlang$frostc$Type* $tmp1962 = org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1963 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1961), $tmp1962);
bool $tmp1964 = $tmp1963.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
frost$core$Frost$unref$frost$core$Object$Q($tmp1961);
if ($tmp1964) goto block17; else goto block18;
block17:;
// line 592
$fn1966 $tmp1965 = ($fn1966) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1967 = $tmp1965(param4);
org$frostlang$frostc$IR$Value* $tmp1968 = *(&local0);
org$frostlang$frostc$Type* $tmp1969 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp1970 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1967, $tmp1968, $tmp1969);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
org$frostlang$frostc$IR$Value* $tmp1971 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local3) = $tmp1970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
// line 593
org$frostlang$frostc$IR$Value* $tmp1972 = *(&local3);
frost$core$Bit $tmp1973 = frost$core$Bit$init$builtin_bit($tmp1972 == NULL);
bool $tmp1974 = $tmp1973.value;
if ($tmp1974) goto block20; else goto block21;
block20:;
// line 594
org$frostlang$frostc$IR$Value* $tmp1975 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$Type* $tmp1976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
org$frostlang$frostc$IR$Value* $tmp1977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block21:;
// line 596
org$frostlang$frostc$IR$Value* $tmp1978 = *(&local3);
frost$collections$Array* $tmp1979 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1979);
org$frostlang$frostc$Compiler$TypeContext* $tmp1980 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1981 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1980, $tmp1981);
org$frostlang$frostc$IR$Value* $tmp1982 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1978, &$s1983, ((frost$collections$ListView*) $tmp1979), $tmp1980);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
org$frostlang$frostc$IR$Value* $tmp1984 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local4) = $tmp1982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
// line 598
org$frostlang$frostc$IR$Value* $tmp1985 = *(&local4);
frost$core$Bit $tmp1986 = frost$core$Bit$init$builtin_bit($tmp1985 != NULL);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1988 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1989, $tmp1988);
abort(); // unreachable
block22:;
// line 599
org$frostlang$frostc$IR$Value* $tmp1990 = *(&local4);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1990, param5);
// line 600
org$frostlang$frostc$IR$Value* $tmp1991 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1992 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$Type* $tmp1993 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
org$frostlang$frostc$IR$Value* $tmp1994 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$Type* $tmp1995 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
// line 603
$fn1997 $tmp1996 = ($fn1997) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1998 = $tmp1996(param4);
org$frostlang$frostc$IR$Value* $tmp1999 = *(&local0);
$fn2001 $tmp2000 = ($fn2001) $tmp1999->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2002 = $tmp2000($tmp1999);
frost$core$String* $tmp2003 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2004, ((frost$core$Object*) $tmp2002));
frost$core$String* $tmp2005 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2003, &$s2006);
frost$core$String* $tmp2007 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2008, $tmp2005);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1998, $tmp2007);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
goto block6;
block6:;
org$frostlang$frostc$IR$Value* $tmp2009 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
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

