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
typedef org$frostlang$frostc$IR$Statement$ID (*$fn227)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn238)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn241)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn244)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn262)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn265)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn281)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn306)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn311)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn316)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn321)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn326)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn344)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn349)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn368)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn373)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn392)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn397)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn400)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn404)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn409)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn419)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn428)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn433)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn436)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn449)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn476)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn481)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn491)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn496)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn515)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn520)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn539)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn544)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn564)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn571)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn576)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn596)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn606)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn612)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn618)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn626)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn652)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn668)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn674)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn682)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn705)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn708)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn721)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn732)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn735)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn748)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn751)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn757)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn771)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn786)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn806)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn809)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn816)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn821)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn826)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn831)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn836)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn894)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn899)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn902)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn907)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn917)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn922)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn941)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn946)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn965)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn970)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn973)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn978)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn988)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn993)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1012)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1017)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1036)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1041)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1044)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1048)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1053)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1065)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1074)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1079)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1082)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1095)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1101)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1106)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1116)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1121)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1135)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1140)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1150)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1155)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1174)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1179)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1198)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1203)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1217)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1222)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1232)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1237)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1256)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1261)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1280)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1285)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1305)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1312)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1317)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1344)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1349)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1357)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1364)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1374)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1378)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1392)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1398)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1410)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1420)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1426)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1438)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1485)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1529)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1657)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1662)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1667)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn1677)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1687)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1691)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1708)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1713)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1736)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1741)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1749)(org$frostlang$frostc$IR$Value*);
typedef void (*$fn1807)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1810)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1814)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1819)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1830)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1839)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1844)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1861)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1867)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1874)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1879)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1883)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1888)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1900)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1912)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn1931)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1943)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1974)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn1978)(org$frostlang$frostc$IR$Value*);

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
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s1002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s1108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s1469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s1537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s1664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s1669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s1702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s1960 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s1966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s1983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

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
// line 103
org$frostlang$frostc$IR* $tmp218 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp219 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp220 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp221 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp222 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp223 = (frost$core$Int64) {2};
frost$core$Int64 $tmp224 = *(&local1);
org$frostlang$frostc$Type* $tmp225 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp222, $tmp223, $tmp224, $tmp225);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp219, $tmp220, param1, $tmp221, $tmp222);
$fn227 $tmp226 = ($fn227) $tmp218->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp228 = $tmp226($tmp218, $tmp219);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// line 106
org$frostlang$frostc$IR$Value* $tmp229 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp230 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp231 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp232 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp233 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp234 = *(&local5);
frost$core$Int64 $tmp235 = (frost$core$Int64) {1};
ITable* $tmp236 = $tmp234->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
frost$core$Object* $tmp239 = $tmp237($tmp234, $tmp235);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp232, $tmp233, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp239));
$fn241 $tmp240 = ($fn241) $tmp231->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp242 = $tmp240($tmp231, $tmp232);
$fn244 $tmp243 = ($fn244) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp245 = $tmp243(param4);
org$frostlang$frostc$FixedArray** $tmp246 = &$tmp245->subtypes;
org$frostlang$frostc$FixedArray* $tmp247 = *$tmp246;
frost$core$Int64 $tmp248 = (frost$core$Int64) {1};
frost$core$Object* $tmp249 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp247, $tmp248);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp229, $tmp230, $tmp242, ((org$frostlang$frostc$Type*) $tmp249));
org$frostlang$frostc$Type* $tmp250 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp251 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp229, $tmp250);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
org$frostlang$frostc$IR$Value* $tmp252 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local7) = $tmp251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q($tmp249);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$core$Frost$unref$frost$core$Object$Q($tmp239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
// line 110
org$frostlang$frostc$IR$Value* $tmp253 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp254 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp255 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp256 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp257 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp258 = *(&local5);
frost$core$Int64 $tmp259 = (frost$core$Int64) {2};
ITable* $tmp260 = $tmp258->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[0];
frost$core$Object* $tmp263 = $tmp261($tmp258, $tmp259);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp256, $tmp257, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp263));
$fn265 $tmp264 = ($fn265) $tmp255->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp266 = $tmp264($tmp255, $tmp256);
org$frostlang$frostc$Type* $tmp267 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp253, $tmp254, $tmp266, $tmp267);
org$frostlang$frostc$IR$Value* $tmp268 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp253);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
org$frostlang$frostc$IR$Value* $tmp269 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local8) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q($tmp263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// line 113
org$frostlang$frostc$ASTNode* $tmp270 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp271 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp272 = (frost$core$UInt64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp270, $tmp271, param1, $tmp272);
org$frostlang$frostc$Compiler$TypeContext* $tmp273 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp274 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp275 = *(&local3);
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp273, $tmp274, $tmp275, $tmp276);
org$frostlang$frostc$IR$Value* $tmp277 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp270, $tmp273);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
org$frostlang$frostc$IR$Value* $tmp278 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local9) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// line 115
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 116
org$frostlang$frostc$IR$Value* $tmp279 = *(&local9);
$fn281 $tmp280 = ($fn281) $tmp279->$class->vtable[2];
org$frostlang$frostc$Type* $tmp282 = $tmp280($tmp279);
org$frostlang$frostc$Type* $tmp283 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp284 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp282, $tmp283);
bool $tmp285 = $tmp284.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
if ($tmp285) goto block12; else goto block14;
block12:;
// line 117
org$frostlang$frostc$IR$Value* $tmp286 = *(&local9);
org$frostlang$frostc$Type* $tmp287 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp288 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp286, $tmp287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
org$frostlang$frostc$IR$Value* $tmp289 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local10) = $tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// line 118
org$frostlang$frostc$IR$Value* $tmp290 = *(&local10);
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit($tmp290 == NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block15; else goto block16;
block15:;
// line 119
org$frostlang$frostc$IR$Value* $tmp293 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp294 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp295 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp296 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp297 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp298 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp299 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp300 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp301 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block16:;
goto block13;
block14:;
// line 1
// line 123
org$frostlang$frostc$IR$Value* $tmp302 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$IR$Value* $tmp303 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local10) = $tmp302;
goto block13;
block13:;
// line 127
org$frostlang$frostc$IR* $tmp304 = *(&local0);
$fn306 $tmp305 = ($fn306) $tmp304->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp307 = $tmp305($tmp304, &$s308);
*(&local11) = $tmp307;
// line 128
org$frostlang$frostc$IR* $tmp309 = *(&local0);
$fn311 $tmp310 = ($fn311) $tmp309->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp312 = $tmp310($tmp309, &$s313);
*(&local12) = $tmp312;
// line 129
org$frostlang$frostc$IR* $tmp314 = *(&local0);
$fn316 $tmp315 = ($fn316) $tmp314->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp317 = $tmp315($tmp314, &$s318);
*(&local13) = $tmp317;
// line 130
org$frostlang$frostc$IR* $tmp319 = *(&local0);
$fn321 $tmp320 = ($fn321) $tmp319->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp322 = $tmp320($tmp319, &$s323);
*(&local14) = $tmp322;
// line 131
org$frostlang$frostc$IR* $tmp324 = *(&local0);
$fn326 $tmp325 = ($fn326) $tmp324->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp327 = $tmp325($tmp324, &$s328);
*(&local15) = $tmp327;
// line 132
org$frostlang$frostc$Compiler$AutoContext* $tmp329 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp330 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp331 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp332 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp333 = *(&local13);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp330, $tmp331, param2, $tmp332, $tmp333);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp329, param0, $tmp330);
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$Compiler$AutoContext* $tmp334 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
*(&local16) = $tmp329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// line 1
// line 134
org$frostlang$frostc$Compiler$AutoScope* $tmp335 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp335, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
org$frostlang$frostc$Compiler$AutoScope* $tmp336 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local17) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// line 135
org$frostlang$frostc$IR* $tmp337 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp338 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp339 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp340 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp341 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp342 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp338, $tmp339, param1, $tmp340, $tmp341, $tmp342);
$fn344 $tmp343 = ($fn344) $tmp337->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp345 = $tmp343($tmp337, $tmp338);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// line 137
org$frostlang$frostc$IR* $tmp346 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp347 = *(&local14);
$fn349 $tmp348 = ($fn349) $tmp346->$class->vtable[4];
$tmp348($tmp346, $tmp347);
// line 138
org$frostlang$frostc$IR$Value* $tmp350 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp351 = *(&local7);
frost$collections$ListView* $tmp352 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp351);
org$frostlang$frostc$Compiler$TypeContext* $tmp353 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp354 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp355 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp356 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp353, $tmp354, $tmp355, $tmp356);
org$frostlang$frostc$IR$Value* $tmp357 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp350, &$s358, $tmp352, $tmp353);
org$frostlang$frostc$IR$Value* $tmp359 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp357);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
org$frostlang$frostc$IR$Value* $tmp360 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local18) = $tmp359;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// line 140
org$frostlang$frostc$IR* $tmp361 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp362 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp363 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp364 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp365 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp366 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp362, $tmp363, param1, $tmp364, $tmp365, $tmp366);
$fn368 $tmp367 = ($fn368) $tmp361->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp369 = $tmp367($tmp361, $tmp362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// line 142
org$frostlang$frostc$IR* $tmp370 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp371 = *(&local15);
$fn373 $tmp372 = ($fn373) $tmp370->$class->vtable[4];
$tmp372($tmp370, $tmp371);
// line 143
org$frostlang$frostc$IR$Value* $tmp374 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp375 = *(&local7);
frost$collections$ListView* $tmp376 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp375);
org$frostlang$frostc$Compiler$TypeContext* $tmp377 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp378 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp379 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp380 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp377, $tmp378, $tmp379, $tmp380);
org$frostlang$frostc$IR$Value* $tmp381 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp374, &$s382, $tmp376, $tmp377);
org$frostlang$frostc$IR$Value* $tmp383 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp381);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
org$frostlang$frostc$IR$Value* $tmp384 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local19) = $tmp383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// line 145
org$frostlang$frostc$IR* $tmp385 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp386 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp387 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp388 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp389 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp390 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp386, $tmp387, param1, $tmp388, $tmp389, $tmp390);
$fn392 $tmp391 = ($fn392) $tmp385->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp393 = $tmp391($tmp385, $tmp386);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// line 147
org$frostlang$frostc$IR* $tmp394 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp395 = *(&local11);
$fn397 $tmp396 = ($fn397) $tmp394->$class->vtable[4];
$tmp396($tmp394, $tmp395);
// line 148
ITable* $tmp398 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[0];
frost$collections$Iterator* $tmp401 = $tmp399(((frost$collections$Iterable*) param5));
goto block17;
block17:;
ITable* $tmp402 = $tmp401->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp402 = $tmp402->next;
}
$fn404 $tmp403 = $tmp402->methods[0];
frost$core$Bit $tmp405 = $tmp403($tmp401);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block19; else goto block18;
block18:;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp407 = $tmp401->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[1];
frost$core$Object* $tmp410 = $tmp408($tmp401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp410)));
org$frostlang$frostc$ASTNode* $tmp411 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local20) = ((org$frostlang$frostc$ASTNode*) $tmp410);
// line 149
org$frostlang$frostc$ASTNode* $tmp412 = *(&local20);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp412);
frost$core$Frost$unref$frost$core$Object$Q($tmp410);
org$frostlang$frostc$ASTNode* $tmp413 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
org$frostlang$frostc$IR$Value* $tmp414 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp415 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp416 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 152
org$frostlang$frostc$IR* $tmp417 = *(&local0);
$fn419 $tmp418 = ($fn419) $tmp417->$class->vtable[5];
frost$core$Bit $tmp420 = $tmp418($tmp417);
frost$core$Bit $tmp421 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block20; else goto block21;
block20:;
// line 153
org$frostlang$frostc$IR* $tmp423 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp424 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp425 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp426 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp424, $tmp425, param1, $tmp426);
$fn428 $tmp427 = ($fn428) $tmp423->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp429 = $tmp427($tmp423, $tmp424);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
goto block21;
block21:;
// line 155
org$frostlang$frostc$IR* $tmp430 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp431 = *(&local13);
$fn433 $tmp432 = ($fn433) $tmp430->$class->vtable[4];
$tmp432($tmp430, $tmp431);
// line 156
org$frostlang$frostc$IR* $tmp434 = *(&local0);
$fn436 $tmp435 = ($fn436) $tmp434->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp437 = $tmp435($tmp434, &$s438);
*(&local21) = $tmp437;
// line 159
org$frostlang$frostc$IR$Value* $tmp439 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp440 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp441 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp442 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp443 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp444 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp445 = (frost$core$Int64) {2};
frost$core$Int64 $tmp446 = *(&local1);
org$frostlang$frostc$Type* $tmp447 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp444, $tmp445, $tmp446, $tmp447);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp442, $tmp443, param1, $tmp444);
$fn449 $tmp448 = ($fn449) $tmp441->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp450 = $tmp448($tmp441, $tmp442);
org$frostlang$frostc$Type* $tmp451 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp439, $tmp440, $tmp450, $tmp451);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
org$frostlang$frostc$IR$Value* $tmp452 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local22) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// line 163
org$frostlang$frostc$IR$Value* $tmp453 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp454 = *(&local22);
frost$collections$ListView* $tmp455 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp454);
org$frostlang$frostc$Compiler$TypeContext* $tmp456 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp457 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp456, $tmp457);
org$frostlang$frostc$IR$Value* $tmp458 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp453, &$s459, $tmp455, $tmp456);
org$frostlang$frostc$Type* $tmp460 = *(&local3);
org$frostlang$frostc$Type* $tmp461 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp460);
org$frostlang$frostc$IR$Value* $tmp462 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp458, $tmp461);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
org$frostlang$frostc$IR$Value* $tmp463 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local23) = $tmp462;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// line 165
org$frostlang$frostc$IR$Value* $tmp464 = *(&local23);
frost$core$Bit $tmp465 = frost$core$Bit$init$builtin_bit($tmp464 != NULL);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp467 = (frost$core$Int64) {165};
org$frostlang$frostc$IR$Value* $tmp468 = *(&local22);
frost$core$String* $tmp469 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s470, ((frost$core$Object*) $tmp468));
frost$core$String* $tmp471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp469, &$s472);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s473, $tmp467, $tmp471);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
abort(); // unreachable
block22:;
// line 167
org$frostlang$frostc$IR* $tmp474 = *(&local0);
$fn476 $tmp475 = ($fn476) $tmp474->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp477 = $tmp475($tmp474, &$s478);
*(&local24) = $tmp477;
// line 168
org$frostlang$frostc$IR* $tmp479 = *(&local0);
$fn481 $tmp480 = ($fn481) $tmp479->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp482 = $tmp480($tmp479, &$s483);
*(&local25) = $tmp482;
// line 169
org$frostlang$frostc$IR* $tmp484 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp485 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp486 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp487 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp488 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp489 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp485, $tmp486, param1, $tmp487, $tmp488, $tmp489);
$fn491 $tmp490 = ($fn491) $tmp484->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp492 = $tmp490($tmp484, $tmp485);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// line 172
org$frostlang$frostc$IR* $tmp493 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp494 = *(&local24);
$fn496 $tmp495 = ($fn496) $tmp493->$class->vtable[4];
$tmp495($tmp493, $tmp494);
// line 173
org$frostlang$frostc$IR$Value* $tmp497 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp498 = *(&local10);
frost$collections$ListView* $tmp499 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp498);
org$frostlang$frostc$Compiler$TypeContext* $tmp500 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp501 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp502 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp500, $tmp501, $tmp502, $tmp503);
org$frostlang$frostc$IR$Value* $tmp504 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp497, &$s505, $tmp499, $tmp500);
org$frostlang$frostc$IR$Value* $tmp506 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp504);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
org$frostlang$frostc$IR$Value* $tmp507 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local26) = $tmp506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// line 175
org$frostlang$frostc$IR* $tmp508 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp509 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp510 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp511 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp512 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp513 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp509, $tmp510, param1, $tmp511, $tmp512, $tmp513);
$fn515 $tmp514 = ($fn515) $tmp508->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp516 = $tmp514($tmp508, $tmp509);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// line 178
org$frostlang$frostc$IR* $tmp517 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp518 = *(&local25);
$fn520 $tmp519 = ($fn520) $tmp517->$class->vtable[4];
$tmp519($tmp517, $tmp518);
// line 179
org$frostlang$frostc$IR$Value* $tmp521 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp522 = *(&local10);
frost$collections$ListView* $tmp523 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp522);
org$frostlang$frostc$Compiler$TypeContext* $tmp524 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp525 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp526 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp527 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp524, $tmp525, $tmp526, $tmp527);
org$frostlang$frostc$IR$Value* $tmp528 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp521, &$s529, $tmp523, $tmp524);
org$frostlang$frostc$IR$Value* $tmp530 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp528);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
org$frostlang$frostc$IR$Value* $tmp531 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local27) = $tmp530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
// line 181
org$frostlang$frostc$IR* $tmp532 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp533 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp534 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp535 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp536 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp537 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp533, $tmp534, param1, $tmp535, $tmp536, $tmp537);
$fn539 $tmp538 = ($fn539) $tmp532->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp540 = $tmp538($tmp532, $tmp533);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// line 183
org$frostlang$frostc$IR* $tmp541 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp542 = *(&local21);
$fn544 $tmp543 = ($fn544) $tmp541->$class->vtable[4];
$tmp543($tmp541, $tmp542);
// line 184
org$frostlang$frostc$IR$Value* $tmp545 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp546 = *(&local9);
frost$collections$ListView* $tmp547 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp546);
org$frostlang$frostc$Compiler$TypeContext* $tmp548 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp549 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp548, $tmp549);
org$frostlang$frostc$IR$Value* $tmp550 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp545, &$s551, $tmp547, $tmp548);
org$frostlang$frostc$Type* $tmp552 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp553 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp550, $tmp552);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
org$frostlang$frostc$IR$Value* $tmp554 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local28) = $tmp553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// line 186
org$frostlang$frostc$IR* $tmp555 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp556 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp557 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp558 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp559 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp560 = (frost$core$Int64) {2};
frost$core$Int64 $tmp561 = *(&local1);
org$frostlang$frostc$Type* $tmp562 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp559, $tmp560, $tmp561, $tmp562);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp556, $tmp557, param1, $tmp558, $tmp559);
$fn564 $tmp563 = ($fn564) $tmp555->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp565 = $tmp563($tmp555, $tmp556);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// line 187
org$frostlang$frostc$IR* $tmp566 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp567 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp568 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp569 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp567, $tmp568, param1, $tmp569);
$fn571 $tmp570 = ($fn571) $tmp566->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp572 = $tmp570($tmp566, $tmp567);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// line 189
org$frostlang$frostc$IR* $tmp573 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp574 = *(&local12);
$fn576 $tmp575 = ($fn576) $tmp573->$class->vtable[4];
$tmp575($tmp573, $tmp574);
org$frostlang$frostc$IR$Value* $tmp577 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp578 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp579 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp580 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp581 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp582 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp583 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp584 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp585 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp586 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp587 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp588 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp589 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp590 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp591 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
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
org$frostlang$frostc$IR** $tmp592 = &param0->ir;
org$frostlang$frostc$IR* $tmp593 = *$tmp592;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
org$frostlang$frostc$IR* $tmp594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local0) = $tmp593;
// line 214
$fn596 $tmp595 = ($fn596) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp597 = $tmp595(param4);
org$frostlang$frostc$Type$Kind* $tmp598 = &$tmp597->typeKind;
org$frostlang$frostc$Type$Kind $tmp599 = *$tmp598;
org$frostlang$frostc$Type$Kind$wrapper* $tmp600;
$tmp600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
frost$core$Int64 $tmp601 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp602 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp601);
org$frostlang$frostc$Type$Kind$wrapper* $tmp603;
$tmp603 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp603->value = $tmp602;
ITable* $tmp604 = ((frost$core$Equatable*) $tmp600)->$class->itable;
while ($tmp604->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp604 = $tmp604->next;
}
$fn606 $tmp605 = $tmp604->methods[0];
frost$core$Bit $tmp607 = $tmp605(((frost$core$Equatable*) $tmp600), ((frost$core$Equatable*) $tmp603));
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp609 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s610, $tmp609);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp603)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// line 215
$fn612 $tmp611 = ($fn612) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp613 = $tmp611(param4);
org$frostlang$frostc$FixedArray** $tmp614 = &$tmp613->subtypes;
org$frostlang$frostc$FixedArray* $tmp615 = *$tmp614;
ITable* $tmp616 = ((frost$collections$CollectionView*) $tmp615)->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
frost$core$Int64 $tmp619 = $tmp617(((frost$collections$CollectionView*) $tmp615));
frost$core$Int64 $tmp620 = (frost$core$Int64) {3};
frost$core$Bit $tmp621 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp619, $tmp620);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp623 = (frost$core$Int64) {215};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s624, $tmp623);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// line 216
$fn626 $tmp625 = ($fn626) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp627 = $tmp625(param4);
org$frostlang$frostc$FixedArray** $tmp628 = &$tmp627->subtypes;
org$frostlang$frostc$FixedArray* $tmp629 = *$tmp628;
frost$core$Int64 $tmp630 = (frost$core$Int64) {0};
frost$core$Object* $tmp631 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp629, $tmp630);
frost$core$String** $tmp632 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp631))->name;
frost$core$String* $tmp633 = *$tmp632;
frost$core$Bit $tmp634 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp633, &$s635);
bool $tmp636 = $tmp634.value;
if ($tmp636) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp637 = (frost$core$Int64) {216};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s638, $tmp637);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// line 217
// line 218
org$frostlang$frostc$Variable$Storage** $tmp639 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp640 = *$tmp639;
frost$core$Int64* $tmp641 = &$tmp640->$rawValue;
frost$core$Int64 $tmp642 = *$tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {0};
frost$core$Bit $tmp644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp642, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp646 = (frost$core$Int64*) ($tmp640->$data + 0);
frost$core$Int64 $tmp647 = *$tmp646;
*(&local2) = $tmp647;
// line 220
frost$core$Int64 $tmp648 = *(&local2);
*(&local1) = $tmp648;
goto block7;
block9:;
// line 223
frost$core$Int64 $tmp649 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s650, $tmp649);
abort(); // unreachable
block7:;
// line 226
$fn652 $tmp651 = ($fn652) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp653 = $tmp651(param4);
org$frostlang$frostc$FixedArray** $tmp654 = &$tmp653->subtypes;
org$frostlang$frostc$FixedArray* $tmp655 = *$tmp654;
frost$core$Int64 $tmp656 = (frost$core$Int64) {1};
frost$core$Object* $tmp657 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp655, $tmp656);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp657)));
org$frostlang$frostc$Type* $tmp658 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp657);
frost$core$Frost$unref$frost$core$Object$Q($tmp657);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// line 227
org$frostlang$frostc$Type* $tmp659 = *(&local3);
org$frostlang$frostc$Type$Kind* $tmp660 = &$tmp659->typeKind;
org$frostlang$frostc$Type$Kind $tmp661 = *$tmp660;
org$frostlang$frostc$Type$Kind$wrapper* $tmp662;
$tmp662 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp662->value = $tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp664 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp663);
org$frostlang$frostc$Type$Kind$wrapper* $tmp665;
$tmp665 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp665->value = $tmp664;
ITable* $tmp666 = ((frost$core$Equatable*) $tmp662)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[1];
frost$core$Bit $tmp669 = $tmp667(((frost$core$Equatable*) $tmp662), ((frost$core$Equatable*) $tmp665));
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp671 = (frost$core$Int64) {227};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s672, $tmp671);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp665)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp662)));
// line 228
$fn674 $tmp673 = ($fn674) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp675 = $tmp673(param4);
org$frostlang$frostc$FixedArray** $tmp676 = &$tmp675->subtypes;
org$frostlang$frostc$FixedArray* $tmp677 = *$tmp676;
frost$core$Int64 $tmp678 = (frost$core$Int64) {2};
frost$core$Object* $tmp679 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp677, $tmp678);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp679)));
org$frostlang$frostc$Type* $tmp680 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp679);
frost$core$Frost$unref$frost$core$Object$Q($tmp679);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// line 229
$fn682 $tmp681 = ($fn682) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp683 = $tmp681(param4);
org$frostlang$frostc$ClassDecl* $tmp684 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp683);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
org$frostlang$frostc$ClassDecl* $tmp685 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local5) = $tmp684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
// line 230
org$frostlang$frostc$ClassDecl* $tmp686 = *(&local5);
frost$core$Bit $tmp687 = frost$core$Bit$init$builtin_bit($tmp686 == NULL);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block12; else goto block13;
block12:;
// line 231
org$frostlang$frostc$ClassDecl* $tmp689 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp690 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp691 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp692 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 233
org$frostlang$frostc$ClassDecl* $tmp693 = *(&local5);
frost$collections$ListView* $tmp694 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp693);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
frost$collections$ListView* $tmp695 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local6) = $tmp694;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// line 236
org$frostlang$frostc$IR$Value* $tmp696 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp697 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp698 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp699 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp700 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp701 = *(&local6);
frost$core$Int64 $tmp702 = (frost$core$Int64) {0};
ITable* $tmp703 = $tmp701->$class->itable;
while ($tmp703->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[0];
frost$core$Object* $tmp706 = $tmp704($tmp701, $tmp702);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp699, $tmp700, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp706));
$fn708 $tmp707 = ($fn708) $tmp698->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp709 = $tmp707($tmp698, $tmp699);
org$frostlang$frostc$Type* $tmp710 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp696, $tmp697, $tmp709, $tmp710);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
org$frostlang$frostc$IR$Value* $tmp711 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local7) = $tmp696;
frost$core$Frost$unref$frost$core$Object$Q($tmp706);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// line 240
org$frostlang$frostc$IR* $tmp712 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp713 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp714 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp715 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp716 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp717 = (frost$core$Int64) {2};
frost$core$Int64 $tmp718 = *(&local1);
org$frostlang$frostc$Type* $tmp719 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp716, $tmp717, $tmp718, $tmp719);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp713, $tmp714, param1, $tmp715, $tmp716);
$fn721 $tmp720 = ($fn721) $tmp712->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp722 = $tmp720($tmp712, $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// line 243
org$frostlang$frostc$IR$Value* $tmp723 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp724 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp725 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp726 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp727 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp728 = *(&local6);
frost$core$Int64 $tmp729 = (frost$core$Int64) {1};
ITable* $tmp730 = $tmp728->$class->itable;
while ($tmp730->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[0];
frost$core$Object* $tmp733 = $tmp731($tmp728, $tmp729);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp726, $tmp727, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp733));
$fn735 $tmp734 = ($fn735) $tmp725->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp736 = $tmp734($tmp725, $tmp726);
org$frostlang$frostc$Type* $tmp737 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp723, $tmp724, $tmp736, $tmp737);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
org$frostlang$frostc$IR$Value* $tmp738 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local8) = $tmp723;
frost$core$Frost$unref$frost$core$Object$Q($tmp733);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// line 247
org$frostlang$frostc$IR$Value* $tmp739 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp740 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp741 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp742 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp743 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp744 = *(&local6);
frost$core$Int64 $tmp745 = (frost$core$Int64) {2};
ITable* $tmp746 = $tmp744->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[0];
frost$core$Object* $tmp749 = $tmp747($tmp744, $tmp745);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp742, $tmp743, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp749));
$fn751 $tmp750 = ($fn751) $tmp741->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp752 = $tmp750($tmp741, $tmp742);
org$frostlang$frostc$Type* $tmp753 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp739, $tmp740, $tmp752, $tmp753);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
org$frostlang$frostc$IR$Value* $tmp754 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local9) = $tmp739;
frost$core$Frost$unref$frost$core$Object$Q($tmp749);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
// line 249
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 250
org$frostlang$frostc$IR$Value* $tmp755 = *(&local9);
$fn757 $tmp756 = ($fn757) $tmp755->$class->vtable[2];
org$frostlang$frostc$Type* $tmp758 = $tmp756($tmp755);
org$frostlang$frostc$Type* $tmp759 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp760 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp758, $tmp759);
bool $tmp761 = $tmp760.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
if ($tmp761) goto block14; else goto block16;
block14:;
// line 251
org$frostlang$frostc$IR$Value* $tmp762 = *(&local9);
org$frostlang$frostc$Type* $tmp763 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp764 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp762, $tmp763);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
org$frostlang$frostc$IR$Value* $tmp765 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local10) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
goto block15;
block16:;
// line 1
// line 254
org$frostlang$frostc$IR$Value* $tmp766 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
org$frostlang$frostc$IR$Value* $tmp767 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local10) = $tmp766;
goto block15;
block15:;
// line 256
org$frostlang$frostc$IR$Value* $tmp768 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp769 = *(&local9);
$fn771 $tmp770 = ($fn771) $tmp769->$class->vtable[2];
org$frostlang$frostc$Type* $tmp772 = $tmp770($tmp769);
org$frostlang$frostc$Type* $tmp773 = org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp772);
org$frostlang$frostc$IR$Value* $tmp774 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp768, $tmp773);
frost$collections$Array* $tmp775 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp776 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp775, $tmp776);
org$frostlang$frostc$Compiler$TypeContext* $tmp777 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp777, $tmp778);
org$frostlang$frostc$IR$Value* $tmp779 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp774, &$s780, ((frost$collections$ListView*) $tmp775), $tmp777);
org$frostlang$frostc$Type* $tmp781 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp782 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp779, $tmp781);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$IR$Value* $tmp783 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local11) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// line 258
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 259
org$frostlang$frostc$IR$Value* $tmp784 = *(&local9);
$fn786 $tmp785 = ($fn786) $tmp784->$class->vtable[2];
org$frostlang$frostc$Type* $tmp787 = $tmp785($tmp784);
org$frostlang$frostc$Type* $tmp788 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp789 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp787, $tmp788);
bool $tmp790 = $tmp789.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
if ($tmp790) goto block17; else goto block19;
block17:;
// line 260
org$frostlang$frostc$IR$Value* $tmp791 = *(&local11);
org$frostlang$frostc$Type* $tmp792 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp793 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp791, $tmp792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
org$frostlang$frostc$IR$Value* $tmp794 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local12) = $tmp793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
goto block18;
block19:;
// line 1
// line 263
org$frostlang$frostc$IR$Value* $tmp795 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
org$frostlang$frostc$IR$Value* $tmp796 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local12) = $tmp795;
goto block18;
block18:;
// line 267
org$frostlang$frostc$IR$Value* $tmp797 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp798 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp799 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp800 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp801 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp802 = *(&local6);
frost$core$Int64 $tmp803 = (frost$core$Int64) {3};
ITable* $tmp804 = $tmp802->$class->itable;
while ($tmp804->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp804 = $tmp804->next;
}
$fn806 $tmp805 = $tmp804->methods[0];
frost$core$Object* $tmp807 = $tmp805($tmp802, $tmp803);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp800, $tmp801, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp807));
$fn809 $tmp808 = ($fn809) $tmp799->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp810 = $tmp808($tmp799, $tmp800);
org$frostlang$frostc$Type* $tmp811 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp797, $tmp798, $tmp810, $tmp811);
org$frostlang$frostc$IR$Value* $tmp812 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp797);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$IR$Value* $tmp813 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local13) = $tmp812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q($tmp807);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// line 271
org$frostlang$frostc$IR* $tmp814 = *(&local0);
$fn816 $tmp815 = ($fn816) $tmp814->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp817 = $tmp815($tmp814, &$s818);
*(&local14) = $tmp817;
// line 272
org$frostlang$frostc$IR* $tmp819 = *(&local0);
$fn821 $tmp820 = ($fn821) $tmp819->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp822 = $tmp820($tmp819, &$s823);
*(&local15) = $tmp822;
// line 273
org$frostlang$frostc$IR* $tmp824 = *(&local0);
$fn826 $tmp825 = ($fn826) $tmp824->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp827 = $tmp825($tmp824, &$s828);
*(&local16) = $tmp827;
// line 274
org$frostlang$frostc$IR* $tmp829 = *(&local0);
$fn831 $tmp830 = ($fn831) $tmp829->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp832 = $tmp830($tmp829, &$s833);
*(&local17) = $tmp832;
// line 275
org$frostlang$frostc$IR* $tmp834 = *(&local0);
$fn836 $tmp835 = ($fn836) $tmp834->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp837 = $tmp835($tmp834, &$s838);
*(&local18) = $tmp837;
// line 276
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 277
org$frostlang$frostc$Compiler$AutoContext* $tmp839 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp840 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp841 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp842 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp843 = *(&local16);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp840, $tmp841, param2, $tmp842, $tmp843);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp839, param0, $tmp840);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
org$frostlang$frostc$Compiler$AutoContext* $tmp844 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local20) = $tmp839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// line 1
// line 279
org$frostlang$frostc$Compiler$AutoScope* $tmp845 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp845, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$Compiler$AutoScope* $tmp846 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local21) = $tmp845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// line 280
org$frostlang$frostc$Type* $tmp847 = *(&local4);
frost$core$String** $tmp848 = &((org$frostlang$frostc$Symbol*) $tmp847)->name;
frost$core$String* $tmp849 = *$tmp848;
frost$core$Bit $tmp850 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp849, &$s851);
bool $tmp852 = $tmp850.value;
if ($tmp852) goto block20; else goto block22;
block20:;
// line 281
org$frostlang$frostc$IR$Value* $tmp853 = *(&local9);
frost$collections$Array* $tmp854 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp855 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp854, $tmp855);
org$frostlang$frostc$ASTNode* $tmp856 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp857 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp858 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp856, $tmp857, param1, $tmp858);
frost$collections$Array$add$frost$collections$Array$T($tmp854, ((frost$core$Object*) $tmp856));
org$frostlang$frostc$Compiler$TypeContext* $tmp859 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp860 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp861 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp862 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp859, $tmp860, $tmp861, $tmp862);
org$frostlang$frostc$IR$Value* $tmp863 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp853, &$s864, ((frost$collections$ListView*) $tmp854), $tmp859);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
org$frostlang$frostc$IR$Value* $tmp865 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local22) = $tmp863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// line 283
org$frostlang$frostc$IR$Value* $tmp866 = *(&local22);
frost$core$Bit $tmp867 = frost$core$Bit$init$builtin_bit($tmp866 != NULL);
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp869 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s870, $tmp869);
abort(); // unreachable
block23:;
// line 284
org$frostlang$frostc$IR$Value* $tmp871 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp872 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
org$frostlang$frostc$IR$Value* $tmp873 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local19) = $tmp872;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
org$frostlang$frostc$IR$Value* $tmp874 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block21;
block22:;
// line 1
// line 287
org$frostlang$frostc$Type* $tmp875 = *(&local4);
frost$core$String** $tmp876 = &((org$frostlang$frostc$Symbol*) $tmp875)->name;
frost$core$String* $tmp877 = *$tmp876;
frost$core$Bit $tmp878 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp877, &$s879);
bool $tmp880 = $tmp878.value;
if ($tmp880) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp881 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s882, $tmp881);
abort(); // unreachable
block25:;
// line 288
org$frostlang$frostc$IR$Value* $tmp883 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp884 = (frost$core$Int64) {0};
frost$core$Bit $tmp885 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp883, $tmp884, $tmp885);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
org$frostlang$frostc$IR$Value* $tmp886 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local19) = $tmp883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
goto block21;
block21:;
// line 290
org$frostlang$frostc$IR* $tmp887 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp888 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp889 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp890 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp891 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp892 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp888, $tmp889, param1, $tmp890, $tmp891, $tmp892);
$fn894 $tmp893 = ($fn894) $tmp887->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp895 = $tmp893($tmp887, $tmp888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// line 291
org$frostlang$frostc$IR* $tmp896 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp897 = *(&local17);
$fn899 $tmp898 = ($fn899) $tmp896->$class->vtable[4];
$tmp898($tmp896, $tmp897);
// line 292
org$frostlang$frostc$IR* $tmp900 = *(&local0);
$fn902 $tmp901 = ($fn902) $tmp900->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp903 = $tmp901($tmp900, &$s904);
*(&local23) = $tmp903;
// line 293
org$frostlang$frostc$IR* $tmp905 = *(&local0);
$fn907 $tmp906 = ($fn907) $tmp905->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp908 = $tmp906($tmp905, &$s909);
*(&local24) = $tmp908;
// line 294
org$frostlang$frostc$IR* $tmp910 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp911 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp912 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp913 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp914 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp915 = *(&local24);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp911, $tmp912, param1, $tmp913, $tmp914, $tmp915);
$fn917 $tmp916 = ($fn917) $tmp910->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp918 = $tmp916($tmp910, $tmp911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// line 296
org$frostlang$frostc$IR* $tmp919 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp920 = *(&local23);
$fn922 $tmp921 = ($fn922) $tmp919->$class->vtable[4];
$tmp921($tmp919, $tmp920);
// line 297
org$frostlang$frostc$IR$Value* $tmp923 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp924 = *(&local8);
frost$collections$ListView* $tmp925 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp924);
org$frostlang$frostc$Compiler$TypeContext* $tmp926 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp927 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp928 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp929 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp926, $tmp927, $tmp928, $tmp929);
org$frostlang$frostc$IR$Value* $tmp930 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp923, &$s931, $tmp925, $tmp926);
org$frostlang$frostc$IR$Value* $tmp932 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp930);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
org$frostlang$frostc$IR$Value* $tmp933 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local25) = $tmp932;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// line 300
org$frostlang$frostc$IR* $tmp934 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp935 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp936 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp937 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp938 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp939 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp935, $tmp936, param1, $tmp937, $tmp938, $tmp939);
$fn941 $tmp940 = ($fn941) $tmp934->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp942 = $tmp940($tmp934, $tmp935);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// line 302
org$frostlang$frostc$IR* $tmp943 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp944 = *(&local24);
$fn946 $tmp945 = ($fn946) $tmp943->$class->vtable[4];
$tmp945($tmp943, $tmp944);
// line 303
org$frostlang$frostc$IR$Value* $tmp947 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp948 = *(&local8);
frost$collections$ListView* $tmp949 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp948);
org$frostlang$frostc$Compiler$TypeContext* $tmp950 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp951 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp952 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp953 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp950, $tmp951, $tmp952, $tmp953);
org$frostlang$frostc$IR$Value* $tmp954 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp947, &$s955, $tmp949, $tmp950);
org$frostlang$frostc$IR$Value* $tmp956 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp954);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
org$frostlang$frostc$IR$Value* $tmp957 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local26) = $tmp956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// line 306
org$frostlang$frostc$IR* $tmp958 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp959 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp960 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp961 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp962 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp963 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp959, $tmp960, param1, $tmp961, $tmp962, $tmp963);
$fn965 $tmp964 = ($fn965) $tmp958->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp966 = $tmp964($tmp958, $tmp959);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// line 308
org$frostlang$frostc$IR* $tmp967 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp968 = *(&local18);
$fn970 $tmp969 = ($fn970) $tmp967->$class->vtable[4];
$tmp969($tmp967, $tmp968);
// line 309
org$frostlang$frostc$IR* $tmp971 = *(&local0);
$fn973 $tmp972 = ($fn973) $tmp971->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp974 = $tmp972($tmp971, &$s975);
*(&local27) = $tmp974;
// line 310
org$frostlang$frostc$IR* $tmp976 = *(&local0);
$fn978 $tmp977 = ($fn978) $tmp976->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp979 = $tmp977($tmp976, &$s980);
*(&local28) = $tmp979;
// line 311
org$frostlang$frostc$IR* $tmp981 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp982 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp983 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp984 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp985 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp986 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp982, $tmp983, param1, $tmp984, $tmp985, $tmp986);
$fn988 $tmp987 = ($fn988) $tmp981->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp989 = $tmp987($tmp981, $tmp982);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
// line 313
org$frostlang$frostc$IR* $tmp990 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp991 = *(&local27);
$fn993 $tmp992 = ($fn993) $tmp990->$class->vtable[4];
$tmp992($tmp990, $tmp991);
// line 314
org$frostlang$frostc$IR$Value* $tmp994 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp995 = *(&local8);
frost$collections$ListView* $tmp996 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp995);
org$frostlang$frostc$Compiler$TypeContext* $tmp997 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp998 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp999 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1000 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp997, $tmp998, $tmp999, $tmp1000);
org$frostlang$frostc$IR$Value* $tmp1001 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp994, &$s1002, $tmp996, $tmp997);
org$frostlang$frostc$IR$Value* $tmp1003 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1001);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
org$frostlang$frostc$IR$Value* $tmp1004 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local29) = $tmp1003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// line 317
org$frostlang$frostc$IR* $tmp1005 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1006 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1007 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1008 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1009 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1010 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1006, $tmp1007, param1, $tmp1008, $tmp1009, $tmp1010);
$fn1012 $tmp1011 = ($fn1012) $tmp1005->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1013 = $tmp1011($tmp1005, $tmp1006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
// line 319
org$frostlang$frostc$IR* $tmp1014 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1015 = *(&local28);
$fn1017 $tmp1016 = ($fn1017) $tmp1014->$class->vtable[4];
$tmp1016($tmp1014, $tmp1015);
// line 320
org$frostlang$frostc$IR$Value* $tmp1018 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1019 = *(&local8);
frost$collections$ListView* $tmp1020 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1019);
org$frostlang$frostc$Compiler$TypeContext* $tmp1021 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1022 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1023 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1024 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1021, $tmp1022, $tmp1023, $tmp1024);
org$frostlang$frostc$IR$Value* $tmp1025 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1018, &$s1026, $tmp1020, $tmp1021);
org$frostlang$frostc$IR$Value* $tmp1027 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1025);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
org$frostlang$frostc$IR$Value* $tmp1028 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
*(&local30) = $tmp1027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// line 323
org$frostlang$frostc$IR* $tmp1029 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1030 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1031 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1032 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp1033 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1034 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1030, $tmp1031, param1, $tmp1032, $tmp1033, $tmp1034);
$fn1036 $tmp1035 = ($fn1036) $tmp1029->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1037 = $tmp1035($tmp1029, $tmp1030);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// line 325
org$frostlang$frostc$IR* $tmp1038 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1039 = *(&local14);
$fn1041 $tmp1040 = ($fn1041) $tmp1038->$class->vtable[4];
$tmp1040($tmp1038, $tmp1039);
// line 326
ITable* $tmp1042 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1042->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1042 = $tmp1042->next;
}
$fn1044 $tmp1043 = $tmp1042->methods[0];
frost$collections$Iterator* $tmp1045 = $tmp1043(((frost$collections$Iterable*) param5));
goto block27;
block27:;
ITable* $tmp1046 = $tmp1045->$class->itable;
while ($tmp1046->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1046 = $tmp1046->next;
}
$fn1048 $tmp1047 = $tmp1046->methods[0];
frost$core$Bit $tmp1049 = $tmp1047($tmp1045);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block29; else goto block28;
block28:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1051 = $tmp1045->$class->itable;
while ($tmp1051->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1051 = $tmp1051->next;
}
$fn1053 $tmp1052 = $tmp1051->methods[1];
frost$core$Object* $tmp1054 = $tmp1052($tmp1045);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1054)));
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp1054);
// line 327
org$frostlang$frostc$ASTNode* $tmp1056 = *(&local31);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1056);
frost$core$Frost$unref$frost$core$Object$Q($tmp1054);
org$frostlang$frostc$ASTNode* $tmp1057 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block27;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
org$frostlang$frostc$IR$Value* $tmp1058 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1059 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1060 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1061 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1062 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 330
org$frostlang$frostc$IR* $tmp1063 = *(&local0);
$fn1065 $tmp1064 = ($fn1065) $tmp1063->$class->vtable[5];
frost$core$Bit $tmp1066 = $tmp1064($tmp1063);
frost$core$Bit $tmp1067 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1066);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block30; else goto block31;
block30:;
// line 331
org$frostlang$frostc$IR* $tmp1069 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1070 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1071 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1072 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1070, $tmp1071, param1, $tmp1072);
$fn1074 $tmp1073 = ($fn1074) $tmp1069->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1075 = $tmp1073($tmp1069, $tmp1070);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
goto block31;
block31:;
// line 333
org$frostlang$frostc$IR* $tmp1076 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1077 = *(&local16);
$fn1079 $tmp1078 = ($fn1079) $tmp1076->$class->vtable[4];
$tmp1078($tmp1076, $tmp1077);
// line 334
org$frostlang$frostc$IR* $tmp1080 = *(&local0);
$fn1082 $tmp1081 = ($fn1082) $tmp1080->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1083 = $tmp1081($tmp1080, &$s1084);
*(&local32) = $tmp1083;
// line 336
org$frostlang$frostc$IR$Value* $tmp1085 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1086 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1087 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1088 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1089 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1090 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1091 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1092 = *(&local1);
org$frostlang$frostc$Type* $tmp1093 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1090, $tmp1091, $tmp1092, $tmp1093);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1088, $tmp1089, param1, $tmp1090);
$fn1095 $tmp1094 = ($fn1095) $tmp1087->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1096 = $tmp1094($tmp1087, $tmp1088);
org$frostlang$frostc$Type* $tmp1097 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1085, $tmp1086, $tmp1096, $tmp1097);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
org$frostlang$frostc$IR$Value* $tmp1098 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local33) = $tmp1085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// line 338
org$frostlang$frostc$IR* $tmp1099 = *(&local0);
$fn1101 $tmp1100 = ($fn1101) $tmp1099->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1102 = $tmp1100($tmp1099, &$s1103);
*(&local34) = $tmp1102;
// line 339
org$frostlang$frostc$IR* $tmp1104 = *(&local0);
$fn1106 $tmp1105 = ($fn1106) $tmp1104->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1107 = $tmp1105($tmp1104, &$s1108);
*(&local35) = $tmp1107;
// line 340
org$frostlang$frostc$IR* $tmp1109 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1110 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1111 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1112 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1113 = *(&local34);
org$frostlang$frostc$IR$Block$ID $tmp1114 = *(&local35);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1110, $tmp1111, param1, $tmp1112, $tmp1113, $tmp1114);
$fn1116 $tmp1115 = ($fn1116) $tmp1109->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1117 = $tmp1115($tmp1109, $tmp1110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
// line 344
org$frostlang$frostc$IR* $tmp1118 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1119 = *(&local34);
$fn1121 $tmp1120 = ($fn1121) $tmp1118->$class->vtable[4];
$tmp1120($tmp1118, $tmp1119);
// line 347
org$frostlang$frostc$IR$Value* $tmp1122 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1123 = *(&local33);
frost$collections$ListView* $tmp1124 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1123);
org$frostlang$frostc$Compiler$TypeContext* $tmp1125 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1126 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1125, $tmp1126);
org$frostlang$frostc$IR$Value* $tmp1127 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1122, &$s1128, $tmp1124, $tmp1125);
org$frostlang$frostc$Type* $tmp1129 = *(&local3);
org$frostlang$frostc$Type* $tmp1130 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1129);
org$frostlang$frostc$IR$Value* $tmp1131 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1127, $tmp1130);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
org$frostlang$frostc$IR$Value* $tmp1132 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local36) = $tmp1131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
// line 351
org$frostlang$frostc$IR* $tmp1133 = *(&local0);
$fn1135 $tmp1134 = ($fn1135) $tmp1133->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1136 = $tmp1134($tmp1133, &$s1137);
*(&local37) = $tmp1136;
// line 352
org$frostlang$frostc$IR* $tmp1138 = *(&local0);
$fn1140 $tmp1139 = ($fn1140) $tmp1138->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1141 = $tmp1139($tmp1138, &$s1142);
*(&local38) = $tmp1141;
// line 353
org$frostlang$frostc$IR* $tmp1143 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1144 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1145 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1146 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1147 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1148 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1144, $tmp1145, param1, $tmp1146, $tmp1147, $tmp1148);
$fn1150 $tmp1149 = ($fn1150) $tmp1143->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1151 = $tmp1149($tmp1143, $tmp1144);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// line 357
org$frostlang$frostc$IR* $tmp1152 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1153 = *(&local37);
$fn1155 $tmp1154 = ($fn1155) $tmp1152->$class->vtable[4];
$tmp1154($tmp1152, $tmp1153);
// line 358
org$frostlang$frostc$IR$Value* $tmp1156 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1157 = *(&local10);
frost$collections$ListView* $tmp1158 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1157);
org$frostlang$frostc$Compiler$TypeContext* $tmp1159 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1160 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1161 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1162 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1159, $tmp1160, $tmp1161, $tmp1162);
org$frostlang$frostc$IR$Value* $tmp1163 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1156, &$s1164, $tmp1158, $tmp1159);
org$frostlang$frostc$IR$Value* $tmp1165 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1163);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
org$frostlang$frostc$IR$Value* $tmp1166 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local39) = $tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
// line 361
org$frostlang$frostc$IR* $tmp1167 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1168 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1169 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1170 = *(&local39);
org$frostlang$frostc$IR$Block$ID $tmp1171 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1172 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1168, $tmp1169, param1, $tmp1170, $tmp1171, $tmp1172);
$fn1174 $tmp1173 = ($fn1174) $tmp1167->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1175 = $tmp1173($tmp1167, $tmp1168);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// line 364
org$frostlang$frostc$IR* $tmp1176 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1177 = *(&local38);
$fn1179 $tmp1178 = ($fn1179) $tmp1176->$class->vtable[4];
$tmp1178($tmp1176, $tmp1177);
// line 365
org$frostlang$frostc$IR$Value* $tmp1180 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1181 = *(&local10);
frost$collections$ListView* $tmp1182 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1181);
org$frostlang$frostc$Compiler$TypeContext* $tmp1183 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1184 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1185 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1186 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1183, $tmp1184, $tmp1185, $tmp1186);
org$frostlang$frostc$IR$Value* $tmp1187 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1180, &$s1188, $tmp1182, $tmp1183);
org$frostlang$frostc$IR$Value* $tmp1189 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1187);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
org$frostlang$frostc$IR$Value* $tmp1190 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
*(&local40) = $tmp1189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
// line 368
org$frostlang$frostc$IR* $tmp1191 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1192 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1193 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1194 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1195 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1196 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1192, $tmp1193, param1, $tmp1194, $tmp1195, $tmp1196);
$fn1198 $tmp1197 = ($fn1198) $tmp1191->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1199 = $tmp1197($tmp1191, $tmp1192);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
// line 372
org$frostlang$frostc$IR* $tmp1200 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1201 = *(&local35);
$fn1203 $tmp1202 = ($fn1203) $tmp1200->$class->vtable[4];
$tmp1202($tmp1200, $tmp1201);
// line 373
org$frostlang$frostc$IR$Value* $tmp1204 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1205 = *(&local8);
frost$collections$ListView* $tmp1206 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1205);
org$frostlang$frostc$Compiler$TypeContext* $tmp1207 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1208 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1207, $tmp1208);
org$frostlang$frostc$IR$Value* $tmp1209 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1204, &$s1210, $tmp1206, $tmp1207);
org$frostlang$frostc$Type* $tmp1211 = *(&local3);
org$frostlang$frostc$Type* $tmp1212 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1211);
org$frostlang$frostc$IR$Value* $tmp1213 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1209, $tmp1212);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
org$frostlang$frostc$IR$Value* $tmp1214 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local41) = $tmp1213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
// line 377
org$frostlang$frostc$IR* $tmp1215 = *(&local0);
$fn1217 $tmp1216 = ($fn1217) $tmp1215->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1218 = $tmp1216($tmp1215, &$s1219);
*(&local42) = $tmp1218;
// line 378
org$frostlang$frostc$IR* $tmp1220 = *(&local0);
$fn1222 $tmp1221 = ($fn1222) $tmp1220->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1223 = $tmp1221($tmp1220, &$s1224);
*(&local43) = $tmp1223;
// line 379
org$frostlang$frostc$IR* $tmp1225 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1226 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1227 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1228 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1229 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1230 = *(&local43);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1226, $tmp1227, param1, $tmp1228, $tmp1229, $tmp1230);
$fn1232 $tmp1231 = ($fn1232) $tmp1225->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1233 = $tmp1231($tmp1225, $tmp1226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
// line 383
org$frostlang$frostc$IR* $tmp1234 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1235 = *(&local42);
$fn1237 $tmp1236 = ($fn1237) $tmp1234->$class->vtable[4];
$tmp1236($tmp1234, $tmp1235);
// line 384
org$frostlang$frostc$IR$Value* $tmp1238 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1239 = *(&local12);
frost$collections$ListView* $tmp1240 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1239);
org$frostlang$frostc$Compiler$TypeContext* $tmp1241 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1242 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1243 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1244 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1241, $tmp1242, $tmp1243, $tmp1244);
org$frostlang$frostc$IR$Value* $tmp1245 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1238, &$s1246, $tmp1240, $tmp1241);
org$frostlang$frostc$IR$Value* $tmp1247 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1245);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
org$frostlang$frostc$IR$Value* $tmp1248 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local44) = $tmp1247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
// line 387
org$frostlang$frostc$IR* $tmp1249 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1250 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1251 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1252 = *(&local44);
org$frostlang$frostc$IR$Block$ID $tmp1253 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1254 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1250, $tmp1251, param1, $tmp1252, $tmp1253, $tmp1254);
$fn1256 $tmp1255 = ($fn1256) $tmp1249->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1257 = $tmp1255($tmp1249, $tmp1250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
// line 391
org$frostlang$frostc$IR* $tmp1258 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1259 = *(&local43);
$fn1261 $tmp1260 = ($fn1261) $tmp1258->$class->vtable[4];
$tmp1260($tmp1258, $tmp1259);
// line 392
org$frostlang$frostc$IR$Value* $tmp1262 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1263 = *(&local12);
frost$collections$ListView* $tmp1264 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1263);
org$frostlang$frostc$Compiler$TypeContext* $tmp1265 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1266 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1267 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1268 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1265, $tmp1266, $tmp1267, $tmp1268);
org$frostlang$frostc$IR$Value* $tmp1269 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1262, &$s1270, $tmp1264, $tmp1265);
org$frostlang$frostc$IR$Value* $tmp1271 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1269);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
org$frostlang$frostc$IR$Value* $tmp1272 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local45) = $tmp1271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
// line 395
org$frostlang$frostc$IR* $tmp1273 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1274 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1275 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1276 = *(&local45);
org$frostlang$frostc$IR$Block$ID $tmp1277 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1278 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1274, $tmp1275, param1, $tmp1276, $tmp1277, $tmp1278);
$fn1280 $tmp1279 = ($fn1280) $tmp1273->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1281 = $tmp1279($tmp1273, $tmp1274);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
// line 398
org$frostlang$frostc$IR* $tmp1282 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1283 = *(&local32);
$fn1285 $tmp1284 = ($fn1285) $tmp1282->$class->vtable[4];
$tmp1284($tmp1282, $tmp1283);
// line 399
org$frostlang$frostc$IR$Value* $tmp1286 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1287 = *(&local9);
frost$collections$ListView* $tmp1288 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1287);
org$frostlang$frostc$Compiler$TypeContext* $tmp1289 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1290 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1289, $tmp1290);
org$frostlang$frostc$IR$Value* $tmp1291 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1286, &$s1292, $tmp1288, $tmp1289);
org$frostlang$frostc$Type* $tmp1293 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp1294 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1291, $tmp1293);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
org$frostlang$frostc$IR$Value* $tmp1295 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local46) = $tmp1294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
// line 401
org$frostlang$frostc$IR* $tmp1296 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1297 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1298 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1299 = *(&local46);
org$frostlang$frostc$IR$Value* $tmp1300 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1301 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1302 = *(&local1);
org$frostlang$frostc$Type* $tmp1303 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1300, $tmp1301, $tmp1302, $tmp1303);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1297, $tmp1298, param1, $tmp1299, $tmp1300);
$fn1305 $tmp1304 = ($fn1305) $tmp1296->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1306 = $tmp1304($tmp1296, $tmp1297);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// line 402
org$frostlang$frostc$IR* $tmp1307 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1308 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1309 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1310 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1308, $tmp1309, param1, $tmp1310);
$fn1312 $tmp1311 = ($fn1312) $tmp1307->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1313 = $tmp1311($tmp1307, $tmp1308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// line 404
org$frostlang$frostc$IR* $tmp1314 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1315 = *(&local15);
$fn1317 $tmp1316 = ($fn1317) $tmp1314->$class->vtable[4];
$tmp1316($tmp1314, $tmp1315);
org$frostlang$frostc$IR$Value* $tmp1318 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1319 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1320 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1321 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1322 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1323 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1325 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1326 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1327 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1328 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1329 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1330 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1331 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1332 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1333 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1334 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1335 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1336 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1337 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1338 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1339 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Value* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$Bit local1;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local3 = NULL;
org$frostlang$frostc$Pair* local4 = NULL;
// line 411
org$frostlang$frostc$IR** $tmp1340 = &param0->ir;
org$frostlang$frostc$IR* $tmp1341 = *$tmp1340;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
org$frostlang$frostc$IR* $tmp1342 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local0) = $tmp1341;
// line 412
$fn1344 $tmp1343 = ($fn1344) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1345 = $tmp1343(param4);
frost$core$Bit $tmp1346 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1345);
bool $tmp1347 = $tmp1346.value;
if ($tmp1347) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1346;
goto block3;
block2:;
$fn1349 $tmp1348 = ($fn1349) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1350 = $tmp1348(param4);
frost$core$Bit $tmp1351 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
*(&local1) = $tmp1351;
goto block3;
block3:;
frost$core$Bit $tmp1352 = *(&local1);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {412};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1355, $tmp1354);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
// line 413
$fn1357 $tmp1356 = ($fn1357) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1358 = $tmp1356(param4);
frost$core$Bit $tmp1359 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp1358);
frost$core$Bit $tmp1360 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1359);
bool $tmp1361 = $tmp1360.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
if ($tmp1361) goto block6; else goto block7;
block6:;
// line 414
org$frostlang$frostc$IR* $tmp1362 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 416
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 417
$fn1364 $tmp1363 = ($fn1364) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1365 = $tmp1363(param4);
org$frostlang$frostc$Type$Kind* $tmp1366 = &$tmp1365->typeKind;
org$frostlang$frostc$Type$Kind $tmp1367 = *$tmp1366;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1368;
$tmp1368 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1368->value = $tmp1367;
frost$core$Int64 $tmp1369 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1370 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1369);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1371;
$tmp1371 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1371->value = $tmp1370;
ITable* $tmp1372 = ((frost$core$Equatable*) $tmp1368)->$class->itable;
while ($tmp1372->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1372 = $tmp1372->next;
}
$fn1374 $tmp1373 = $tmp1372->methods[0];
frost$core$Bit $tmp1375 = $tmp1373(((frost$core$Equatable*) $tmp1368), ((frost$core$Equatable*) $tmp1371));
bool $tmp1376 = $tmp1375.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1371)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1368)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
if ($tmp1376) goto block8; else goto block10;
block8:;
// line 418
$fn1378 $tmp1377 = ($fn1378) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1379 = $tmp1377(param4);
org$frostlang$frostc$FixedArray** $tmp1380 = &$tmp1379->subtypes;
org$frostlang$frostc$FixedArray* $tmp1381 = *$tmp1380;
frost$core$Int64 $tmp1382 = (frost$core$Int64) {0};
frost$core$Object* $tmp1383 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1381, $tmp1382);
org$frostlang$frostc$Type$Kind* $tmp1384 = &((org$frostlang$frostc$Type*) $tmp1383)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1385 = *$tmp1384;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1386;
$tmp1386 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1386->value = $tmp1385;
frost$core$Int64 $tmp1387 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1388 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1387);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1389;
$tmp1389 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1389->value = $tmp1388;
ITable* $tmp1390 = ((frost$core$Equatable*) $tmp1386)->$class->itable;
while ($tmp1390->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1390 = $tmp1390->next;
}
$fn1392 $tmp1391 = $tmp1390->methods[0];
frost$core$Bit $tmp1393 = $tmp1391(((frost$core$Equatable*) $tmp1386), ((frost$core$Equatable*) $tmp1389));
bool $tmp1394 = $tmp1393.value;
if ($tmp1394) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1395 = (frost$core$Int64) {418};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1396, $tmp1395);
abort(); // unreachable
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1389)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1386)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1383);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
// line 419
$fn1398 $tmp1397 = ($fn1398) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1399 = $tmp1397(param4);
org$frostlang$frostc$FixedArray** $tmp1400 = &$tmp1399->subtypes;
org$frostlang$frostc$FixedArray* $tmp1401 = *$tmp1400;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {0};
frost$core$Object* $tmp1403 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1401, $tmp1402);
org$frostlang$frostc$FixedArray** $tmp1404 = &((org$frostlang$frostc$Type*) $tmp1403)->subtypes;
org$frostlang$frostc$FixedArray* $tmp1405 = *$tmp1404;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {1};
frost$core$Object* $tmp1407 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1405, $tmp1406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1407)));
org$frostlang$frostc$Type* $tmp1408 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1407);
frost$core$Frost$unref$frost$core$Object$Q($tmp1407);
frost$core$Frost$unref$frost$core$Object$Q($tmp1403);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
goto block9;
block10:;
// line 1
// line 422
$fn1410 $tmp1409 = ($fn1410) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1411 = $tmp1409(param4);
org$frostlang$frostc$Type$Kind* $tmp1412 = &$tmp1411->typeKind;
org$frostlang$frostc$Type$Kind $tmp1413 = *$tmp1412;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1414;
$tmp1414 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1414->value = $tmp1413;
frost$core$Int64 $tmp1415 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1416 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1415);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1417;
$tmp1417 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1417->value = $tmp1416;
ITable* $tmp1418 = ((frost$core$Equatable*) $tmp1414)->$class->itable;
while ($tmp1418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1418 = $tmp1418->next;
}
$fn1420 $tmp1419 = $tmp1418->methods[0];
frost$core$Bit $tmp1421 = $tmp1419(((frost$core$Equatable*) $tmp1414), ((frost$core$Equatable*) $tmp1417));
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1423 = (frost$core$Int64) {422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1424, $tmp1423);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1414)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
// line 423
$fn1426 $tmp1425 = ($fn1426) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1427 = $tmp1425(param4);
org$frostlang$frostc$FixedArray** $tmp1428 = &$tmp1427->subtypes;
org$frostlang$frostc$FixedArray* $tmp1429 = *$tmp1428;
frost$core$Int64 $tmp1430 = (frost$core$Int64) {1};
frost$core$Object* $tmp1431 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1429, $tmp1430);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1431)));
org$frostlang$frostc$Type* $tmp1432 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1431);
frost$core$Frost$unref$frost$core$Object$Q($tmp1431);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
goto block9;
block9:;
// line 425
org$frostlang$frostc$Type* $tmp1433 = *(&local2);
frost$core$Bit $tmp1434 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1433);
frost$core$Bit $tmp1435 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1434);
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block15; else goto block16;
block15:;
// line 426
$fn1438 $tmp1437 = ($fn1438) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1439 = $tmp1437(param4);
frost$core$String* $tmp1440 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1441, ((frost$core$Object*) $tmp1439));
frost$core$String* $tmp1442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1440, &$s1443);
frost$core$String* $tmp1444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1445, $tmp1442);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// line 428
org$frostlang$frostc$Type* $tmp1446 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1447 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block16:;
// line 430
org$frostlang$frostc$Compiler$AutoScope* $tmp1448 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1448, param0);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
org$frostlang$frostc$Compiler$AutoScope* $tmp1449 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local3) = $tmp1448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// line 431
frost$core$Int64 $tmp1450 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1451 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1450);
org$frostlang$frostc$Type* $tmp1452 = *(&local2);
org$frostlang$frostc$Type* $tmp1453 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1452);
org$frostlang$frostc$Pair* $tmp1454 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1451, ((org$frostlang$frostc$ASTNode*) NULL), $tmp1453);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
org$frostlang$frostc$Pair* $tmp1455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local4) = $tmp1454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// line 433
org$frostlang$frostc$Pair* $tmp1456 = *(&local4);
frost$core$Bit $tmp1457 = frost$core$Bit$init$builtin_bit($tmp1456 == NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block17; else goto block18;
block17:;
// line 434
org$frostlang$frostc$Pair* $tmp1459 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1460 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1461 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1462));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block18:;
// line 436
org$frostlang$frostc$Pair* $tmp1463 = *(&local4);
frost$core$Object** $tmp1464 = &$tmp1463->second;
frost$core$Object* $tmp1465 = *$tmp1464;
frost$core$Bit $tmp1466 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp1465) == NULL);
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1468 = (frost$core$Int64) {436};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1469, $tmp1468);
abort(); // unreachable
block19:;
// line 437
org$frostlang$frostc$Pair* $tmp1470 = *(&local4);
frost$core$Object** $tmp1471 = &$tmp1470->first;
frost$core$Object* $tmp1472 = *$tmp1471;
org$frostlang$frostc$Type** $tmp1473 = &((org$frostlang$frostc$Variable*) $tmp1472)->type;
org$frostlang$frostc$Type* $tmp1474 = *$tmp1473;
frost$core$Bit $tmp1475 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1474);
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block21; else goto block22;
block21:;
// line 438
frost$collections$Stack** $tmp1477 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1478 = *$tmp1477;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1479 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1480 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1481 = *(&local4);
frost$core$Object** $tmp1482 = &$tmp1481->first;
frost$core$Object* $tmp1483 = *$tmp1482;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1479, $tmp1480, ((org$frostlang$frostc$Variable*) $tmp1483));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1478, ((frost$core$Object*) $tmp1479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
goto block22;
block22:;
// line 440
$fn1485 $tmp1484 = ($fn1485) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1486 = $tmp1484(param4);
frost$core$Bit $tmp1487 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1486);
bool $tmp1488 = $tmp1487.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
if ($tmp1488) goto block23; else goto block25;
block23:;
// line 441
org$frostlang$frostc$Pair* $tmp1489 = *(&local4);
frost$core$Object** $tmp1490 = &$tmp1489->first;
frost$core$Object* $tmp1491 = *$tmp1490;
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1491), param4, param5);
goto block24;
block25:;
// line 1
// line 444
org$frostlang$frostc$Pair* $tmp1492 = *(&local4);
frost$core$Object** $tmp1493 = &$tmp1492->first;
frost$core$Object* $tmp1494 = *$tmp1493;
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1494), param4, param5);
goto block24;
block24:;
org$frostlang$frostc$Pair* $tmp1495 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1496 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
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
// line 452
org$frostlang$frostc$IR** $tmp1499 = &param0->ir;
org$frostlang$frostc$IR* $tmp1500 = *$tmp1499;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
org$frostlang$frostc$IR* $tmp1501 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local0) = $tmp1500;
// line 453
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 454
frost$core$Int64* $tmp1502 = &param3->$rawValue;
frost$core$Int64 $tmp1503 = *$tmp1502;
frost$core$Int64 $tmp1504 = (frost$core$Int64) {47};
frost$core$Bit $tmp1505 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1503, $tmp1504);
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1507 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1508 = *$tmp1507;
*(&local2) = $tmp1508;
frost$core$String** $tmp1509 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1510 = *$tmp1509;
org$frostlang$frostc$ASTNode** $tmp1511 = (org$frostlang$frostc$ASTNode**) (param3->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1512 = *$tmp1511;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
org$frostlang$frostc$ASTNode* $tmp1513 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local3) = $tmp1512;
// line 456
org$frostlang$frostc$Scanner** $tmp1514 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1515 = *$tmp1514;
org$frostlang$frostc$ASTNode* $tmp1516 = *(&local3);
org$frostlang$frostc$Type* $tmp1517 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1515, $tmp1516);
org$frostlang$frostc$Type* $tmp1518 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1517);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
org$frostlang$frostc$Type* $tmp1519 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local4) = $tmp1518;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
// line 457
org$frostlang$frostc$Type* $tmp1520 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp1521 = &$tmp1520->typeKind;
org$frostlang$frostc$Type$Kind $tmp1522 = *$tmp1521;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1523;
$tmp1523 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1523->value = $tmp1522;
frost$core$Int64 $tmp1524 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1525 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1524);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1526;
$tmp1526 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1526->value = $tmp1525;
ITable* $tmp1527 = ((frost$core$Equatable*) $tmp1523)->$class->itable;
while ($tmp1527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[0];
frost$core$Bit $tmp1530 = $tmp1528(((frost$core$Equatable*) $tmp1523), ((frost$core$Equatable*) $tmp1526));
bool $tmp1531 = $tmp1530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1526)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1523)));
if ($tmp1531) goto block4; else goto block5;
block4:;
// line 458
org$frostlang$frostc$Position $tmp1532 = *(&local2);
org$frostlang$frostc$Type* $tmp1533 = *(&local4);
frost$core$String* $tmp1534 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1535, ((frost$core$Object*) $tmp1533));
frost$core$String* $tmp1536 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1534, &$s1537);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1532, $tmp1536);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// line 459
org$frostlang$frostc$Type* $tmp1538 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1539 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1540 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1541 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block5:;
// line 461
org$frostlang$frostc$Type* $tmp1542 = *(&local4);
frost$core$Bit $tmp1543 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1542);
frost$core$Bit $tmp1544 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1543);
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block6; else goto block7;
block6:;
// line 462
org$frostlang$frostc$Position $tmp1546 = *(&local2);
org$frostlang$frostc$Type* $tmp1547 = *(&local4);
frost$core$String* $tmp1548 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1549, ((frost$core$Object*) $tmp1547));
frost$core$String* $tmp1550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1548, &$s1551);
frost$core$String* $tmp1552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1553, $tmp1550);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1546, $tmp1552);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1548));
// line 464
org$frostlang$frostc$Type* $tmp1554 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1555 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1556 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1557 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 466
frost$core$Int64* $tmp1558 = &param4->$rawValue;
frost$core$Int64 $tmp1559 = *$tmp1558;
frost$core$Int64 $tmp1560 = (frost$core$Int64) {35};
frost$core$Bit $tmp1561 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1559, $tmp1560);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp1563 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1564 = *$tmp1563;
org$frostlang$frostc$ASTNode** $tmp1565 = (org$frostlang$frostc$ASTNode**) (param4->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1566 = *$tmp1565;
frost$core$Bit* $tmp1567 = (frost$core$Bit*) (param4->$data + 24);
frost$core$Bit $tmp1568 = *$tmp1567;
org$frostlang$frostc$ASTNode** $tmp1569 = (org$frostlang$frostc$ASTNode**) (param4->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1570 = *$tmp1569;
org$frostlang$frostc$ASTNode** $tmp1571 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1572 = *$tmp1571;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
org$frostlang$frostc$ASTNode* $tmp1573 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
*(&local5) = $tmp1572;
// line 468
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 469
org$frostlang$frostc$ASTNode* $tmp1574 = *(&local5);
frost$core$Bit $tmp1575 = frost$core$Bit$init$builtin_bit($tmp1574 != NULL);
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block11; else goto block13;
block11:;
// line 470
org$frostlang$frostc$Type* $tmp1577 = *(&local4);
org$frostlang$frostc$Type* $tmp1578 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1577);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
org$frostlang$frostc$Type* $tmp1579 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local6) = $tmp1578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
goto block12;
block13:;
// line 1
// line 473
org$frostlang$frostc$Type* $tmp1580 = *(&local4);
org$frostlang$frostc$Type* $tmp1581 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
org$frostlang$frostc$Type* $tmp1582 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
*(&local6) = $tmp1581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
goto block12;
block12:;
// line 475
org$frostlang$frostc$Compiler$TypeContext* $tmp1583 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1584 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1585 = *(&local6);
frost$core$Bit $tmp1586 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1583, $tmp1584, $tmp1585, $tmp1586);
org$frostlang$frostc$IR$Value* $tmp1587 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1583);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
org$frostlang$frostc$IR$Value* $tmp1588 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local1) = $tmp1587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
org$frostlang$frostc$Type* $tmp1589 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1590 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
// line 478
frost$core$Int64 $tmp1591 = (frost$core$Int64) {478};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1592, $tmp1591);
abort(); // unreachable
block8:;
org$frostlang$frostc$Type* $tmp1593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1594 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 483
org$frostlang$frostc$Type* $tmp1595 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
org$frostlang$frostc$Type* $tmp1596 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local7) = $tmp1595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
// line 484
org$frostlang$frostc$Compiler$TypeContext* $tmp1597 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1598 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1597, $tmp1598);
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
org$frostlang$frostc$Compiler$TypeContext* $tmp1599 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local8) = $tmp1597;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
// line 485
org$frostlang$frostc$Type* $tmp1600 = *(&local7);
frost$core$Bit $tmp1601 = frost$core$Bit$init$builtin_bit($tmp1600 != NULL);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block17; else goto block16;
block17:;
org$frostlang$frostc$Type* $tmp1603 = *(&local7);
frost$core$Bit $tmp1604 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1603);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block14; else goto block16;
block14:;
// line 486
org$frostlang$frostc$Compiler$TypeContext* $tmp1606 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1607 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1608 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1609 = &$tmp1608->subtypes;
org$frostlang$frostc$FixedArray* $tmp1610 = *$tmp1609;
frost$core$Int64 $tmp1611 = (frost$core$Int64) {1};
frost$core$Object* $tmp1612 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1610, $tmp1611);
org$frostlang$frostc$Type* $tmp1613 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1612));
org$frostlang$frostc$Type* $tmp1614 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1613);
frost$core$Bit $tmp1615 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1606, $tmp1607, $tmp1614, $tmp1615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
org$frostlang$frostc$Compiler$TypeContext* $tmp1616 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
*(&local8) = $tmp1606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$Frost$unref$frost$core$Object$Q($tmp1612);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
goto block15;
block16:;
// line 489
org$frostlang$frostc$Type* $tmp1617 = *(&local7);
frost$core$Bit $tmp1618 = frost$core$Bit$init$builtin_bit($tmp1617 != NULL);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block20; else goto block19;
block20:;
org$frostlang$frostc$Type* $tmp1620 = *(&local7);
frost$core$Bit $tmp1621 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1620);
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block18; else goto block19;
block18:;
// line 490
org$frostlang$frostc$Compiler$TypeContext* $tmp1623 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1624 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1625 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1626 = &$tmp1625->subtypes;
org$frostlang$frostc$FixedArray* $tmp1627 = *$tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {1};
frost$core$Object* $tmp1629 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1627, $tmp1628);
org$frostlang$frostc$Type* $tmp1630 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1629));
org$frostlang$frostc$Type* $tmp1631 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1632 = &$tmp1631->subtypes;
org$frostlang$frostc$FixedArray* $tmp1633 = *$tmp1632;
frost$core$Int64 $tmp1634 = (frost$core$Int64) {2};
frost$core$Object* $tmp1635 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1633, $tmp1634);
org$frostlang$frostc$Type* $tmp1636 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1630, ((org$frostlang$frostc$Type*) $tmp1635));
frost$core$Bit $tmp1637 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1623, $tmp1624, $tmp1636, $tmp1637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
org$frostlang$frostc$Compiler$TypeContext* $tmp1638 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local8) = $tmp1623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$Frost$unref$frost$core$Object$Q($tmp1635);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
frost$core$Frost$unref$frost$core$Object$Q($tmp1629);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
goto block19;
block19:;
goto block15;
block15:;
// line 493
org$frostlang$frostc$Compiler$TypeContext* $tmp1639 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1640 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
org$frostlang$frostc$IR$Value* $tmp1641 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
*(&local1) = $tmp1640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
org$frostlang$frostc$Compiler$TypeContext* $tmp1642 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp1643 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 496
org$frostlang$frostc$IR$Value* $tmp1644 = *(&local1);
frost$core$Bit $tmp1645 = frost$core$Bit$init$builtin_bit($tmp1644 == NULL);
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block21; else goto block22;
block21:;
// line 497
org$frostlang$frostc$IR$Value* $tmp1647 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1648 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block22:;
// line 499
org$frostlang$frostc$IR$Value* $tmp1649 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1649, param5);
org$frostlang$frostc$IR$Value* $tmp1650 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1651 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
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
// line 506
org$frostlang$frostc$IR** $tmp1652 = &param0->ir;
org$frostlang$frostc$IR* $tmp1653 = *$tmp1652;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
org$frostlang$frostc$IR* $tmp1654 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1654));
*(&local0) = $tmp1653;
// line 507
org$frostlang$frostc$IR* $tmp1655 = *(&local0);
$fn1657 $tmp1656 = ($fn1657) $tmp1655->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1658 = $tmp1656($tmp1655, &$s1659);
*(&local1) = $tmp1658;
// line 508
org$frostlang$frostc$IR* $tmp1660 = *(&local0);
$fn1662 $tmp1661 = ($fn1662) $tmp1660->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1663 = $tmp1661($tmp1660, &$s1664);
*(&local2) = $tmp1663;
// line 509
org$frostlang$frostc$IR* $tmp1665 = *(&local0);
$fn1667 $tmp1666 = ($fn1667) $tmp1665->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1668 = $tmp1666($tmp1665, &$s1669);
*(&local3) = $tmp1668;
// line 510
org$frostlang$frostc$Compiler$AutoContext* $tmp1670 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1671 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1672 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1673 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1674 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1671, $tmp1672, param2, $tmp1673, $tmp1674);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1670, param0, $tmp1671);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
org$frostlang$frostc$Compiler$AutoContext* $tmp1675 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
*(&local4) = $tmp1670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// line 511
$fn1677 $tmp1676 = ($fn1677) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1678 = $tmp1676(param4);
org$frostlang$frostc$Type$Kind* $tmp1679 = &$tmp1678->typeKind;
org$frostlang$frostc$Type$Kind $tmp1680 = *$tmp1679;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1681;
$tmp1681 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1681->value = $tmp1680;
frost$core$Int64 $tmp1682 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1683 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1682);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1684;
$tmp1684 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1684->value = $tmp1683;
ITable* $tmp1685 = ((frost$core$Equatable*) $tmp1681)->$class->itable;
while ($tmp1685->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1685 = $tmp1685->next;
}
$fn1687 $tmp1686 = $tmp1685->methods[0];
frost$core$Bit $tmp1688 = $tmp1686(((frost$core$Equatable*) $tmp1681), ((frost$core$Equatable*) $tmp1684));
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block1; else goto block2;
block1:;
$fn1691 $tmp1690 = ($fn1691) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1692 = $tmp1690(param4);
org$frostlang$frostc$FixedArray** $tmp1693 = &$tmp1692->subtypes;
org$frostlang$frostc$FixedArray* $tmp1694 = *$tmp1693;
frost$core$Int64 $tmp1695 = (frost$core$Int64) {0};
frost$core$Object* $tmp1696 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1694, $tmp1695);
org$frostlang$frostc$Type* $tmp1697 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1698 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1696), $tmp1697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
frost$core$Frost$unref$frost$core$Object$Q($tmp1696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local5) = $tmp1698;
goto block3;
block2:;
*(&local5) = $tmp1688;
goto block3;
block3:;
frost$core$Bit $tmp1699 = *(&local5);
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1701 = (frost$core$Int64) {511};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1702, $tmp1701);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1684)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1681)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
// line 513
org$frostlang$frostc$IR* $tmp1703 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1704 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1705 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1706 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1704, $tmp1705, param1, $tmp1706);
$fn1708 $tmp1707 = ($fn1708) $tmp1703->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1709 = $tmp1707($tmp1703, $tmp1704);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
// line 514
org$frostlang$frostc$IR* $tmp1710 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1711 = *(&local1);
$fn1713 $tmp1712 = ($fn1713) $tmp1710->$class->vtable[4];
$tmp1712($tmp1710, $tmp1711);
// line 515
frost$collections$Array* $tmp1714 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1714);
org$frostlang$frostc$Compiler$TypeContext* $tmp1715 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1716 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1717 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1718 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1715, $tmp1716, $tmp1717, $tmp1718);
org$frostlang$frostc$IR$Value* $tmp1719 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s1720, ((frost$collections$ListView*) $tmp1714), $tmp1715);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
org$frostlang$frostc$IR$Value* $tmp1721 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local6) = $tmp1719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
// line 517
org$frostlang$frostc$IR$Value* $tmp1722 = *(&local6);
frost$core$Bit $tmp1723 = frost$core$Bit$init$builtin_bit($tmp1722 == NULL);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block6; else goto block7;
block6:;
// line 518
org$frostlang$frostc$IR$Value* $tmp1725 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1726 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1727 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 520
org$frostlang$frostc$IR* $tmp1728 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1729 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1730 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1731 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1732 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1731);
org$frostlang$frostc$IR$Block$ID $tmp1733 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1734 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1729, $tmp1730, param1, $tmp1732, $tmp1733, $tmp1734);
$fn1736 $tmp1735 = ($fn1736) $tmp1728->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1737 = $tmp1735($tmp1728, $tmp1729);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// line 522
org$frostlang$frostc$IR* $tmp1738 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1739 = *(&local2);
$fn1741 $tmp1740 = ($fn1741) $tmp1738->$class->vtable[4];
$tmp1740($tmp1738, $tmp1739);
// line 1
// line 524
org$frostlang$frostc$Compiler$AutoScope* $tmp1742 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1742, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
org$frostlang$frostc$Compiler$AutoScope* $tmp1743 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
*(&local7) = $tmp1742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
// line 525
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 527
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1744 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp1744, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1745 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local9) = $tmp1744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
// line 528
frost$core$Int64 $tmp1746 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1747 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1746);
$fn1749 $tmp1748 = ($fn1749) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1750 = $tmp1748(param4);
org$frostlang$frostc$FixedArray** $tmp1751 = &$tmp1750->subtypes;
org$frostlang$frostc$FixedArray* $tmp1752 = *$tmp1751;
frost$core$Int64 $tmp1753 = (frost$core$Int64) {1};
frost$core$Object* $tmp1754 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1752, $tmp1753);
org$frostlang$frostc$Pair* $tmp1755 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1747, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp1754));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
org$frostlang$frostc$Pair* $tmp1756 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local8) = $tmp1755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
frost$core$Frost$unref$frost$core$Object$Q($tmp1754);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
// line 530
org$frostlang$frostc$Pair* $tmp1757 = *(&local8);
frost$core$Bit $tmp1758 = frost$core$Bit$init$builtin_bit($tmp1757 == NULL);
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block8; else goto block9;
block8:;
// line 531
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1760 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Pair* $tmp1761 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1762 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp1763 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1764 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1765 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1766 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 534
org$frostlang$frostc$Pair* $tmp1767 = *(&local8);
frost$core$Object** $tmp1768 = &$tmp1767->first;
frost$core$Object* $tmp1769 = *$tmp1768;
org$frostlang$frostc$Type** $tmp1770 = &((org$frostlang$frostc$Variable*) $tmp1769)->type;
org$frostlang$frostc$Type* $tmp1771 = *$tmp1770;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
org$frostlang$frostc$Type* $tmp1772 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local10) = $tmp1771;
// line 535
org$frostlang$frostc$Type* $tmp1773 = *(&local10);
frost$core$Bit $tmp1774 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1773);
bool $tmp1775 = $tmp1774.value;
if ($tmp1775) goto block10; else goto block11;
block10:;
// line 536
frost$collections$Stack** $tmp1776 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1777 = *$tmp1776;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1778 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1779 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1780 = *(&local8);
frost$core$Object** $tmp1781 = &$tmp1780->first;
frost$core$Object* $tmp1782 = *$tmp1781;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1778, $tmp1779, ((org$frostlang$frostc$Variable*) $tmp1782));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1777, ((frost$core$Object*) $tmp1778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
goto block11;
block11:;
// line 539
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 540
frost$collections$Array* $tmp1783 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1783);
org$frostlang$frostc$Compiler$TypeContext* $tmp1784 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1785 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1786 = *(&local10);
frost$core$Bit $tmp1787 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1784, $tmp1785, $tmp1786, $tmp1787);
org$frostlang$frostc$IR$Value* $tmp1788 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s1789, ((frost$collections$ListView*) $tmp1783), $tmp1784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
org$frostlang$frostc$IR$Value* $tmp1790 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local11) = $tmp1788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
// line 542
org$frostlang$frostc$IR$Value* $tmp1791 = *(&local11);
frost$core$Bit $tmp1792 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block12; else goto block13;
block12:;
// line 543
org$frostlang$frostc$IR$Value* $tmp1794 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1795 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1796 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1797 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp1798 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1799 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1800 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 545
org$frostlang$frostc$lvalue$VariableLValue* $tmp1801 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Pair* $tmp1802 = *(&local8);
frost$core$Object** $tmp1803 = &$tmp1802->first;
frost$core$Object* $tmp1804 = *$tmp1803;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp1801, param0, param1, ((org$frostlang$frostc$Variable*) $tmp1804));
org$frostlang$frostc$IR$Value* $tmp1805 = *(&local11);
$fn1807 $tmp1806 = ($fn1807) $tmp1801->$class->vtable[4];
$tmp1806($tmp1801, $tmp1805);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
// line 546
ITable* $tmp1808 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1808->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1808 = $tmp1808->next;
}
$fn1810 $tmp1809 = $tmp1808->methods[0];
frost$collections$Iterator* $tmp1811 = $tmp1809(((frost$collections$Iterable*) param5));
goto block14;
block14:;
ITable* $tmp1812 = $tmp1811->$class->itable;
while ($tmp1812->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1812 = $tmp1812->next;
}
$fn1814 $tmp1813 = $tmp1812->methods[0];
frost$core$Bit $tmp1815 = $tmp1813($tmp1811);
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block16; else goto block15;
block15:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1817 = $tmp1811->$class->itable;
while ($tmp1817->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1817 = $tmp1817->next;
}
$fn1819 $tmp1818 = $tmp1817->methods[1];
frost$core$Object* $tmp1820 = $tmp1818($tmp1811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1820)));
org$frostlang$frostc$ASTNode* $tmp1821 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1820);
// line 547
org$frostlang$frostc$ASTNode* $tmp1822 = *(&local12);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1822);
frost$core$Frost$unref$frost$core$Object$Q($tmp1820);
org$frostlang$frostc$ASTNode* $tmp1823 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
org$frostlang$frostc$IR$Value* $tmp1824 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1825 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1826 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1827 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 550
org$frostlang$frostc$IR* $tmp1828 = *(&local0);
$fn1830 $tmp1829 = ($fn1830) $tmp1828->$class->vtable[5];
frost$core$Bit $tmp1831 = $tmp1829($tmp1828);
frost$core$Bit $tmp1832 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1831);
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block17; else goto block18;
block17:;
// line 551
org$frostlang$frostc$IR* $tmp1834 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1835 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1836 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1837 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1835, $tmp1836, param1, $tmp1837);
$fn1839 $tmp1838 = ($fn1839) $tmp1834->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1840 = $tmp1838($tmp1834, $tmp1835);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
goto block18;
block18:;
// line 553
org$frostlang$frostc$IR* $tmp1841 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1842 = *(&local3);
$fn1844 $tmp1843 = ($fn1844) $tmp1841->$class->vtable[4];
$tmp1843($tmp1841, $tmp1842);
org$frostlang$frostc$IR$Value* $tmp1845 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1846 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$For$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$ASTNode* param4, frost$collections$ListView* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 559
frost$core$Int64* $tmp1848 = &param4->$rawValue;
frost$core$Int64 $tmp1849 = *$tmp1848;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {35};
frost$core$Bit $tmp1851 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1849, $tmp1850);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block2; else goto block1;
block2:;
// line 563
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 564
return;
block1:;
// line 567
org$frostlang$frostc$IR$Value* $tmp1853 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, param4);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
org$frostlang$frostc$IR$Value* $tmp1854 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
*(&local0) = $tmp1853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
// line 568
org$frostlang$frostc$IR$Value* $tmp1855 = *(&local0);
frost$core$Bit $tmp1856 = frost$core$Bit$init$builtin_bit($tmp1855 == NULL);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block3; else goto block4;
block3:;
// line 569
org$frostlang$frostc$IR$Value* $tmp1858 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block4:;
// line 571
org$frostlang$frostc$IR$Value* $tmp1859 = *(&local0);
$fn1861 $tmp1860 = ($fn1861) $tmp1859->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1862 = $tmp1860($tmp1859);
frost$core$Bit $tmp1863 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1862);
bool $tmp1864 = $tmp1863.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
if ($tmp1864) goto block5; else goto block8;
block8:;
org$frostlang$frostc$IR$Value* $tmp1865 = *(&local0);
$fn1867 $tmp1866 = ($fn1867) $tmp1865->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1868 = $tmp1866($tmp1865);
frost$core$Bit $tmp1869 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1868);
bool $tmp1870 = $tmp1869.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
if ($tmp1870) goto block5; else goto block7;
block5:;
// line 573
org$frostlang$frostc$IR$Value* $tmp1871 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1871, param5);
goto block6;
block7:;
// line 1
// line 576
org$frostlang$frostc$IR$Value* $tmp1872 = *(&local0);
$fn1874 $tmp1873 = ($fn1874) $tmp1872->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1875 = $tmp1873($tmp1872);
frost$collections$HashSet* $tmp1876 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp1875);
ITable* $tmp1877 = ((frost$collections$Iterable*) $tmp1876)->$class->itable;
while ($tmp1877->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1877 = $tmp1877->next;
}
$fn1879 $tmp1878 = $tmp1877->methods[0];
frost$collections$Iterator* $tmp1880 = $tmp1878(((frost$collections$Iterable*) $tmp1876));
goto block9;
block9:;
ITable* $tmp1881 = $tmp1880->$class->itable;
while ($tmp1881->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1881 = $tmp1881->next;
}
$fn1883 $tmp1882 = $tmp1881->methods[0];
frost$core$Bit $tmp1884 = $tmp1882($tmp1880);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block11; else goto block10;
block10:;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1886 = $tmp1880->$class->itable;
while ($tmp1886->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1886 = $tmp1886->next;
}
$fn1888 $tmp1887 = $tmp1886->methods[1];
frost$core$Object* $tmp1889 = $tmp1887($tmp1880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1889)));
org$frostlang$frostc$Type* $tmp1890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp1889);
// line 577
org$frostlang$frostc$Type* $tmp1891 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1892 = &$tmp1891->typeKind;
org$frostlang$frostc$Type$Kind $tmp1893 = *$tmp1892;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1894;
$tmp1894 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1894->value = $tmp1893;
frost$core$Int64 $tmp1895 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1896 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1895);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1897;
$tmp1897 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1897->value = $tmp1896;
ITable* $tmp1898 = ((frost$core$Equatable*) $tmp1894)->$class->itable;
while ($tmp1898->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1898 = $tmp1898->next;
}
$fn1900 $tmp1899 = $tmp1898->methods[0];
frost$core$Bit $tmp1901 = $tmp1899(((frost$core$Equatable*) $tmp1894), ((frost$core$Equatable*) $tmp1897));
bool $tmp1902 = $tmp1901.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1897)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1894)));
if ($tmp1902) goto block14; else goto block13;
block14:;
org$frostlang$frostc$Type* $tmp1903 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp1904 = &$tmp1903->subtypes;
org$frostlang$frostc$FixedArray* $tmp1905 = *$tmp1904;
frost$core$Int64 $tmp1906 = (frost$core$Int64) {0};
frost$core$Object* $tmp1907 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1905, $tmp1906);
org$frostlang$frostc$Type* $tmp1908 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1909 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1907), $tmp1908);
bool $tmp1910 = $tmp1909.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
frost$core$Frost$unref$frost$core$Object$Q($tmp1907);
if ($tmp1910) goto block12; else goto block13;
block12:;
// line 578
$fn1912 $tmp1911 = ($fn1912) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1913 = $tmp1911(param4);
org$frostlang$frostc$IR$Value* $tmp1914 = *(&local0);
org$frostlang$frostc$Type* $tmp1915 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp1916 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1913, $tmp1914, $tmp1915);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
org$frostlang$frostc$IR$Value* $tmp1917 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
*(&local2) = $tmp1916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
// line 579
org$frostlang$frostc$IR$Value* $tmp1918 = *(&local2);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1918, param5);
// line 580
org$frostlang$frostc$IR$Value* $tmp1919 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1889);
org$frostlang$frostc$Type* $tmp1920 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
org$frostlang$frostc$IR$Value* $tmp1921 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block13:;
// line 582
org$frostlang$frostc$Type* $tmp1922 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1923 = &$tmp1922->typeKind;
org$frostlang$frostc$Type$Kind $tmp1924 = *$tmp1923;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1925;
$tmp1925 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1925->value = $tmp1924;
frost$core$Int64 $tmp1926 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1927 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1926);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1928;
$tmp1928 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1928->value = $tmp1927;
ITable* $tmp1929 = ((frost$core$Equatable*) $tmp1925)->$class->itable;
while ($tmp1929->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
frost$core$Bit $tmp1932 = $tmp1930(((frost$core$Equatable*) $tmp1925), ((frost$core$Equatable*) $tmp1928));
bool $tmp1933 = $tmp1932.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1928)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1925)));
if ($tmp1933) goto block17; else goto block16;
block17:;
org$frostlang$frostc$Type* $tmp1934 = *(&local1);
org$frostlang$frostc$FixedArray** $tmp1935 = &$tmp1934->subtypes;
org$frostlang$frostc$FixedArray* $tmp1936 = *$tmp1935;
frost$core$Int64 $tmp1937 = (frost$core$Int64) {0};
frost$core$Object* $tmp1938 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1936, $tmp1937);
org$frostlang$frostc$Type* $tmp1939 = org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1940 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1938), $tmp1939);
bool $tmp1941 = $tmp1940.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q($tmp1938);
if ($tmp1941) goto block15; else goto block16;
block15:;
// line 583
$fn1943 $tmp1942 = ($fn1943) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1944 = $tmp1942(param4);
org$frostlang$frostc$IR$Value* $tmp1945 = *(&local0);
org$frostlang$frostc$Type* $tmp1946 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp1947 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1944, $tmp1945, $tmp1946);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
org$frostlang$frostc$IR$Value* $tmp1948 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
*(&local3) = $tmp1947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
// line 584
org$frostlang$frostc$IR$Value* $tmp1949 = *(&local3);
frost$core$Bit $tmp1950 = frost$core$Bit$init$builtin_bit($tmp1949 == NULL);
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block18; else goto block19;
block18:;
// line 585
org$frostlang$frostc$IR$Value* $tmp1952 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1889);
org$frostlang$frostc$Type* $tmp1953 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
org$frostlang$frostc$IR$Value* $tmp1954 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block19:;
// line 587
org$frostlang$frostc$IR$Value* $tmp1955 = *(&local3);
frost$collections$Array* $tmp1956 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1956);
org$frostlang$frostc$Compiler$TypeContext* $tmp1957 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1958 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1957, $tmp1958);
org$frostlang$frostc$IR$Value* $tmp1959 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1955, &$s1960, ((frost$collections$ListView*) $tmp1956), $tmp1957);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$IR$Value* $tmp1961 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
*(&local4) = $tmp1959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
// line 589
org$frostlang$frostc$IR$Value* $tmp1962 = *(&local4);
frost$core$Bit $tmp1963 = frost$core$Bit$init$builtin_bit($tmp1962 != NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp1965 = (frost$core$Int64) {589};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1966, $tmp1965);
abort(); // unreachable
block20:;
// line 590
org$frostlang$frostc$IR$Value* $tmp1967 = *(&local4);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1967, param5);
// line 591
org$frostlang$frostc$IR$Value* $tmp1968 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1969 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1889);
org$frostlang$frostc$Type* $tmp1970 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
org$frostlang$frostc$IR$Value* $tmp1971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block16:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1889);
org$frostlang$frostc$Type* $tmp1972 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
// line 594
$fn1974 $tmp1973 = ($fn1974) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1975 = $tmp1973(param4);
org$frostlang$frostc$IR$Value* $tmp1976 = *(&local0);
$fn1978 $tmp1977 = ($fn1978) $tmp1976->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1979 = $tmp1977($tmp1976);
frost$core$String* $tmp1980 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1981, ((frost$core$Object*) $tmp1979));
frost$core$String* $tmp1982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1980, &$s1983);
frost$core$String* $tmp1984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1985, $tmp1982);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1975, $tmp1984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
goto block6;
block6:;
org$frostlang$frostc$IR$Value* $tmp1986 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
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

