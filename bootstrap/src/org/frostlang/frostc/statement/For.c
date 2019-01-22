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
typedef org$frostlang$frostc$Type* (*$fn118)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn128)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn134)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn140)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn148)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn176)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn185)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn207)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn210)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn213)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn231)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn242)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn245)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn248)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn266)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn269)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn285)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn310)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn315)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn320)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn325)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn330)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn348)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn353)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn372)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn377)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn396)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn401)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn404)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn408)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn413)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn423)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn432)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn437)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn440)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn453)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn480)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn485)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn495)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn500)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn519)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn524)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn543)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn548)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn568)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn575)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn580)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn600)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn610)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn616)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn622)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn630)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn658)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn674)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn680)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn688)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn711)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn714)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn727)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn738)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn741)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn754)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn757)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn763)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn777)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn792)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn812)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn815)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn822)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn827)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn832)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn837)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn842)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn900)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn905)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn908)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn913)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn923)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn928)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn947)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn952)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn971)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn976)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn979)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn984)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn994)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn999)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1018)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1023)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1042)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1047)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn1050)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1054)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1059)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1071)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1080)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1085)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1088)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1101)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1107)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1112)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1122)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1127)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1141)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1146)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1156)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1161)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1180)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1185)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1204)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1209)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1223)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1228)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1238)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1243)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1262)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1267)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1286)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1291)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1311)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1318)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1323)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1350)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1355)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1363)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1370)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1380)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1384)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1398)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1404)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1416)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1426)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1432)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1444)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1491)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1535)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1667)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1672)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1677)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn1687)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1697)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1701)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1718)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1723)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1746)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1751)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1759)(org$frostlang$frostc$IR$Value*);
typedef void (*$fn1817)(org$frostlang$frostc$lvalue$VariableLValue*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1820)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1824)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1829)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1840)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1849)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1854)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$Type* (*$fn1871)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1877)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn1885)(org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn1890)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1894)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1899)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1911)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1924)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn1943)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn1956)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Position (*$fn1987)(org$frostlang$frostc$ASTNode*);
typedef org$frostlang$frostc$Type* (*$fn1991)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 34, -8546630798215305666, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -3824106975113800959, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, 5795829974490230854, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static frost$core$String $s857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 3252805458447941031, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -3508042023517899272, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static frost$core$String $s915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static frost$core$String $s937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s961 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static frost$core$String $s1109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static frost$core$String $s1114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static frost$core$String $s1134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static frost$core$String $s1148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s1225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static frost$core$String $s1252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s1276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s1361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static frost$core$String $s1475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static frost$core$String $s1674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static frost$core$String $s1679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static frost$core$String $s1973 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static frost$core$String $s1979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x6f\x72\x2e\x66\x72\x6f\x73\x74", 9, 1863707176526955600, NULL };
static frost$core$String $s1994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static frost$core$String $s1996 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s1998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

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
if ($tmp40) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Type* $tmp41 = *(&local1);
frost$core$String** $tmp42 = &((org$frostlang$frostc$Symbol*) $tmp41)->name;
frost$core$String* $tmp43 = *$tmp42;
frost$core$Bit $tmp44 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp43, &$s45);
*(&local3) = $tmp44;
goto block11;
block10:;
*(&local3) = $tmp39;
goto block11;
block11:;
frost$core$Bit $tmp46 = *(&local3);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type* $tmp48 = *(&local0);
frost$core$String** $tmp49 = &((org$frostlang$frostc$Symbol*) $tmp48)->name;
frost$core$String* $tmp50 = *$tmp49;
org$frostlang$frostc$Type* $tmp51 = *(&local1);
frost$core$String** $tmp52 = &((org$frostlang$frostc$Symbol*) $tmp51)->name;
frost$core$String* $tmp53 = *$tmp52;
frost$core$Int64 $tmp54 = frost$core$String$get_length$R$frost$core$Int64(&$s55);
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp57 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp54, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp56);
frost$core$String* $tmp58 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp53, $tmp57);
frost$core$Bit $tmp59 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp50, $tmp58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local2) = $tmp59;
goto block14;
block13:;
*(&local2) = $tmp46;
goto block14;
block14:;
frost$core$Bit $tmp60 = *(&local2);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block8;
block7:;
// line 35
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type* $tmp63 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp64 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp62;
block8:;
// line 37
frost$core$String* $tmp65 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s66, ((frost$core$Object*) param2));
frost$core$String* $tmp67 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp65, &$s68);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp67, &$s70);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// line 39
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp72 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp71;
block4:;
// line 41
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(true);
return $tmp74;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 47
org$frostlang$frostc$Type* $tmp75 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp76 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp77 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp75, $tmp76);
bool $tmp78 = $tmp77.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
if ($tmp78) goto block2; else goto block3;
block2:;
// line 48
org$frostlang$frostc$Type* $tmp79 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return $tmp79;
block3:;
org$frostlang$frostc$Type* $tmp80 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp81 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp75, $tmp80);
bool $tmp82 = $tmp81.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
if ($tmp82) goto block4; else goto block5;
block4:;
// line 49
org$frostlang$frostc$Type* $tmp83 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return $tmp83;
block5:;
org$frostlang$frostc$Type* $tmp84 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp85 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp75, $tmp84);
bool $tmp86 = $tmp85.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
if ($tmp86) goto block6; else goto block7;
block6:;
// line 50
org$frostlang$frostc$Type* $tmp87 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return $tmp87;
block7:;
org$frostlang$frostc$Type* $tmp88 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp89 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp75, $tmp88);
bool $tmp90 = $tmp89.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
if ($tmp90) goto block8; else goto block9;
block8:;
// line 51
org$frostlang$frostc$Type* $tmp91 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return $tmp91;
block9:;
// line 52
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
goto block10;
block10:;

}
org$frostlang$frostc$Type* org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0) {

// line 59
org$frostlang$frostc$Type* $tmp92 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp93 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp94 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp92, $tmp93);
bool $tmp95 = $tmp94.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
if ($tmp95) goto block2; else goto block3;
block2:;
// line 60
org$frostlang$frostc$Type* $tmp96 = org$frostlang$frostc$Type$UInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return $tmp96;
block3:;
org$frostlang$frostc$Type* $tmp97 = org$frostlang$frostc$Type$Int16$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp98 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp92, $tmp97);
bool $tmp99 = $tmp98.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
if ($tmp99) goto block4; else goto block5;
block4:;
// line 61
org$frostlang$frostc$Type* $tmp100 = org$frostlang$frostc$Type$UInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return $tmp100;
block5:;
org$frostlang$frostc$Type* $tmp101 = org$frostlang$frostc$Type$Int32$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp102 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp92, $tmp101);
bool $tmp103 = $tmp102.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
if ($tmp103) goto block6; else goto block7;
block6:;
// line 62
org$frostlang$frostc$Type* $tmp104 = org$frostlang$frostc$Type$UInt32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return $tmp104;
block7:;
org$frostlang$frostc$Type* $tmp105 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp106 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp92, $tmp105);
bool $tmp107 = $tmp106.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
if ($tmp107) goto block8; else goto block9;
block8:;
// line 63
org$frostlang$frostc$Type* $tmp108 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return $tmp108;
block9:;
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
return param0;
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
goto block10;
block10:;

}
frost$collections$ListView* org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$IR$Value* param0) {

// line 71
frost$collections$Array* $tmp109 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp110 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp109, $tmp110);
org$frostlang$frostc$ASTNode* $tmp111 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp112 = (frost$core$Int64) {26};
org$frostlang$frostc$Position $tmp113 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp111, $tmp112, $tmp113, param0);
frost$collections$Array$add$frost$collections$Array$T($tmp109, ((frost$core$Object*) $tmp111));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp109)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
return ((frost$collections$ListView*) $tmp109);

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
org$frostlang$frostc$IR** $tmp114 = &param0->ir;
org$frostlang$frostc$IR* $tmp115 = *$tmp114;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
org$frostlang$frostc$IR* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = $tmp115;
// line 79
$fn118 $tmp117 = ($fn118) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp119 = $tmp117(param4);
org$frostlang$frostc$Type$Kind* $tmp120 = &$tmp119->typeKind;
org$frostlang$frostc$Type$Kind $tmp121 = *$tmp120;
org$frostlang$frostc$Type$Kind$wrapper* $tmp122;
$tmp122 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp122->value = $tmp121;
frost$core$Int64 $tmp123 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp124 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp123);
org$frostlang$frostc$Type$Kind$wrapper* $tmp125;
$tmp125 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp125->value = $tmp124;
ITable* $tmp126 = ((frost$core$Equatable*) $tmp122)->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[0];
frost$core$Bit $tmp129 = $tmp127(((frost$core$Equatable*) $tmp122), ((frost$core$Equatable*) $tmp125));
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s132, $tmp131);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp125)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp122)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// line 80
$fn134 $tmp133 = ($fn134) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp135 = $tmp133(param4);
org$frostlang$frostc$FixedArray** $tmp136 = &$tmp135->subtypes;
org$frostlang$frostc$FixedArray* $tmp137 = *$tmp136;
ITable* $tmp138 = ((frost$collections$CollectionView*) $tmp137)->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[0];
frost$core$Int64 $tmp141 = $tmp139(((frost$collections$CollectionView*) $tmp137));
frost$core$Int64 $tmp142 = (frost$core$Int64) {2};
frost$core$Bit $tmp143 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp141, $tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {80};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s146, $tmp145);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// line 81
$fn148 $tmp147 = ($fn148) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp149 = $tmp147(param4);
org$frostlang$frostc$FixedArray** $tmp150 = &$tmp149->subtypes;
org$frostlang$frostc$FixedArray* $tmp151 = *$tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {0};
frost$core$Object* $tmp153 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp151, $tmp152);
frost$core$String** $tmp154 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp153))->name;
frost$core$String* $tmp155 = *$tmp154;
frost$core$Bit $tmp156 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp155, &$s157);
bool $tmp158 = $tmp156.value;
if ($tmp158) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {81};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s160, $tmp159);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// line 82
// line 83
org$frostlang$frostc$Variable$Storage** $tmp161 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp162 = *$tmp161;
frost$core$Int64* $tmp163 = &$tmp162->$rawValue;
frost$core$Int64 $tmp164 = *$tmp163;
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
frost$core$Bit $tmp166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp164, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp168 = (frost$core$Int64*) ($tmp162->$data + 0);
frost$core$Int64 $tmp169 = *$tmp168;
*(&local2) = $tmp169;
// line 85
frost$core$Int64 $tmp170 = *(&local2);
*(&local1) = $tmp170;
goto block7;
block9:;
// line 88
frost$core$Bit $tmp171 = frost$core$Bit$init$builtin_bit(false);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp173 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s174, $tmp173);
abort(); // unreachable
block10:;
goto block7;
block7:;
// line 91
$fn176 $tmp175 = ($fn176) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp177 = $tmp175(param4);
org$frostlang$frostc$FixedArray** $tmp178 = &$tmp177->subtypes;
org$frostlang$frostc$FixedArray* $tmp179 = *$tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {1};
frost$core$Object* $tmp181 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp179, $tmp180);
org$frostlang$frostc$Type* $tmp182 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp181));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$Type* $tmp183 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local3) = $tmp182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// line 92
$fn185 $tmp184 = ($fn185) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp186 = $tmp184(param4);
org$frostlang$frostc$ClassDecl* $tmp187 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp186);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
org$frostlang$frostc$ClassDecl* $tmp188 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local4) = $tmp187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// line 93
org$frostlang$frostc$ClassDecl* $tmp189 = *(&local4);
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit($tmp189 == NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block12; else goto block13;
block12:;
// line 94
org$frostlang$frostc$ClassDecl* $tmp192 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp193 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 96
org$frostlang$frostc$ClassDecl* $tmp195 = *(&local4);
frost$collections$ListView* $tmp196 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp195);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$collections$ListView* $tmp197 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local5) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// line 99
org$frostlang$frostc$IR$Value* $tmp198 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp199 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp200 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp201 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp202 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp203 = *(&local5);
frost$core$Int64 $tmp204 = (frost$core$Int64) {0};
ITable* $tmp205 = $tmp203->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[0];
frost$core$Object* $tmp208 = $tmp206($tmp203, $tmp204);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp201, $tmp202, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp208));
$fn210 $tmp209 = ($fn210) $tmp200->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp211 = $tmp209($tmp200, $tmp201);
$fn213 $tmp212 = ($fn213) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp214 = $tmp212(param4);
org$frostlang$frostc$FixedArray** $tmp215 = &$tmp214->subtypes;
org$frostlang$frostc$FixedArray* $tmp216 = *$tmp215;
frost$core$Int64 $tmp217 = (frost$core$Int64) {1};
frost$core$Object* $tmp218 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp216, $tmp217);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp198, $tmp199, $tmp211, ((org$frostlang$frostc$Type*) $tmp218));
org$frostlang$frostc$Type* $tmp219 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp220 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp198, $tmp219);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
org$frostlang$frostc$IR$Value* $tmp221 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local6) = $tmp220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Frost$unref$frost$core$Object$Q($tmp208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// line 103
org$frostlang$frostc$IR* $tmp222 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp223 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp224 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp225 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp226 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp227 = (frost$core$Int64) {2};
frost$core$Int64 $tmp228 = *(&local1);
org$frostlang$frostc$Type* $tmp229 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp226, $tmp227, $tmp228, $tmp229);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp223, $tmp224, param1, $tmp225, $tmp226);
$fn231 $tmp230 = ($fn231) $tmp222->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp232 = $tmp230($tmp222, $tmp223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// line 106
org$frostlang$frostc$IR$Value* $tmp233 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp234 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp235 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp236 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp237 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp238 = *(&local5);
frost$core$Int64 $tmp239 = (frost$core$Int64) {1};
ITable* $tmp240 = $tmp238->$class->itable;
while ($tmp240->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp240 = $tmp240->next;
}
$fn242 $tmp241 = $tmp240->methods[0];
frost$core$Object* $tmp243 = $tmp241($tmp238, $tmp239);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp236, $tmp237, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp243));
$fn245 $tmp244 = ($fn245) $tmp235->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp246 = $tmp244($tmp235, $tmp236);
$fn248 $tmp247 = ($fn248) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp249 = $tmp247(param4);
org$frostlang$frostc$FixedArray** $tmp250 = &$tmp249->subtypes;
org$frostlang$frostc$FixedArray* $tmp251 = *$tmp250;
frost$core$Int64 $tmp252 = (frost$core$Int64) {1};
frost$core$Object* $tmp253 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp251, $tmp252);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp233, $tmp234, $tmp246, ((org$frostlang$frostc$Type*) $tmp253));
org$frostlang$frostc$Type* $tmp254 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp255 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp233, $tmp254);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
org$frostlang$frostc$IR$Value* $tmp256 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local7) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// line 110
org$frostlang$frostc$IR$Value* $tmp257 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp258 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp259 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp260 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp262 = *(&local5);
frost$core$Int64 $tmp263 = (frost$core$Int64) {2};
ITable* $tmp264 = $tmp262->$class->itable;
while ($tmp264->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp264 = $tmp264->next;
}
$fn266 $tmp265 = $tmp264->methods[0];
frost$core$Object* $tmp267 = $tmp265($tmp262, $tmp263);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp260, $tmp261, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp267));
$fn269 $tmp268 = ($fn269) $tmp259->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp270 = $tmp268($tmp259, $tmp260);
org$frostlang$frostc$Type* $tmp271 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp257, $tmp258, $tmp270, $tmp271);
org$frostlang$frostc$IR$Value* $tmp272 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp257);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$frostc$IR$Value* $tmp273 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local8) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// line 113
org$frostlang$frostc$ASTNode* $tmp274 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp275 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp276 = (frost$core$UInt64) {1};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp274, $tmp275, param1, $tmp276);
org$frostlang$frostc$Compiler$TypeContext* $tmp277 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp278 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp279 = *(&local3);
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp277, $tmp278, $tmp279, $tmp280);
org$frostlang$frostc$IR$Value* $tmp281 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp274, $tmp277);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
org$frostlang$frostc$IR$Value* $tmp282 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local9) = $tmp281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// line 115
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 116
org$frostlang$frostc$IR$Value* $tmp283 = *(&local9);
$fn285 $tmp284 = ($fn285) $tmp283->$class->vtable[2];
org$frostlang$frostc$Type* $tmp286 = $tmp284($tmp283);
org$frostlang$frostc$Type* $tmp287 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp288 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp286, $tmp287);
bool $tmp289 = $tmp288.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
if ($tmp289) goto block14; else goto block16;
block14:;
// line 117
org$frostlang$frostc$IR$Value* $tmp290 = *(&local9);
org$frostlang$frostc$Type* $tmp291 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp292 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp290, $tmp291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
org$frostlang$frostc$IR$Value* $tmp293 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local10) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// line 118
org$frostlang$frostc$IR$Value* $tmp294 = *(&local10);
frost$core$Bit $tmp295 = frost$core$Bit$init$builtin_bit($tmp294 == NULL);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block17; else goto block18;
block17:;
// line 119
org$frostlang$frostc$IR$Value* $tmp297 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp298 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp299 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp300 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp301 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp302 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp303 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp304 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp305 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block18:;
goto block15;
block16:;
// line 1
// line 123
org$frostlang$frostc$IR$Value* $tmp306 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
org$frostlang$frostc$IR$Value* $tmp307 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local10) = $tmp306;
goto block15;
block15:;
// line 127
org$frostlang$frostc$IR* $tmp308 = *(&local0);
$fn310 $tmp309 = ($fn310) $tmp308->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp311 = $tmp309($tmp308, &$s312);
*(&local11) = $tmp311;
// line 128
org$frostlang$frostc$IR* $tmp313 = *(&local0);
$fn315 $tmp314 = ($fn315) $tmp313->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp316 = $tmp314($tmp313, &$s317);
*(&local12) = $tmp316;
// line 129
org$frostlang$frostc$IR* $tmp318 = *(&local0);
$fn320 $tmp319 = ($fn320) $tmp318->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp321 = $tmp319($tmp318, &$s322);
*(&local13) = $tmp321;
// line 130
org$frostlang$frostc$IR* $tmp323 = *(&local0);
$fn325 $tmp324 = ($fn325) $tmp323->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp326 = $tmp324($tmp323, &$s327);
*(&local14) = $tmp326;
// line 131
org$frostlang$frostc$IR* $tmp328 = *(&local0);
$fn330 $tmp329 = ($fn330) $tmp328->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp331 = $tmp329($tmp328, &$s332);
*(&local15) = $tmp331;
// line 132
org$frostlang$frostc$Compiler$AutoContext* $tmp333 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp334 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp336 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp337 = *(&local13);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp334, $tmp335, param2, $tmp336, $tmp337);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp333, param0, $tmp334);
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
org$frostlang$frostc$Compiler$AutoContext* $tmp338 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local16) = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// line 1
// line 134
org$frostlang$frostc$Compiler$AutoScope* $tmp339 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp339, param0);
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
org$frostlang$frostc$Compiler$AutoScope* $tmp340 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local17) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
// line 135
org$frostlang$frostc$IR* $tmp341 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp342 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp343 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp344 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp345 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp346 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp342, $tmp343, param1, $tmp344, $tmp345, $tmp346);
$fn348 $tmp347 = ($fn348) $tmp341->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp349 = $tmp347($tmp341, $tmp342);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// line 137
org$frostlang$frostc$IR* $tmp350 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp351 = *(&local14);
$fn353 $tmp352 = ($fn353) $tmp350->$class->vtable[4];
$tmp352($tmp350, $tmp351);
// line 138
org$frostlang$frostc$IR$Value* $tmp354 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp355 = *(&local7);
frost$collections$ListView* $tmp356 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp355);
org$frostlang$frostc$Compiler$TypeContext* $tmp357 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp358 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp359 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp360 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp357, $tmp358, $tmp359, $tmp360);
org$frostlang$frostc$IR$Value* $tmp361 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp354, &$s362, $tmp356, $tmp357);
org$frostlang$frostc$IR$Value* $tmp363 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp361);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
org$frostlang$frostc$IR$Value* $tmp364 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local18) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// line 140
org$frostlang$frostc$IR* $tmp365 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp366 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp367 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp368 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp369 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp370 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp366, $tmp367, param1, $tmp368, $tmp369, $tmp370);
$fn372 $tmp371 = ($fn372) $tmp365->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp373 = $tmp371($tmp365, $tmp366);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// line 142
org$frostlang$frostc$IR* $tmp374 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp375 = *(&local15);
$fn377 $tmp376 = ($fn377) $tmp374->$class->vtable[4];
$tmp376($tmp374, $tmp375);
// line 143
org$frostlang$frostc$IR$Value* $tmp378 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp379 = *(&local7);
frost$collections$ListView* $tmp380 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp379);
org$frostlang$frostc$Compiler$TypeContext* $tmp381 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp382 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp383 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp384 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp381, $tmp382, $tmp383, $tmp384);
org$frostlang$frostc$IR$Value* $tmp385 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp378, &$s386, $tmp380, $tmp381);
org$frostlang$frostc$IR$Value* $tmp387 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp385);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
org$frostlang$frostc$IR$Value* $tmp388 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local19) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// line 145
org$frostlang$frostc$IR* $tmp389 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp390 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp391 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp392 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp393 = *(&local11);
org$frostlang$frostc$IR$Block$ID $tmp394 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp390, $tmp391, param1, $tmp392, $tmp393, $tmp394);
$fn396 $tmp395 = ($fn396) $tmp389->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp397 = $tmp395($tmp389, $tmp390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// line 147
org$frostlang$frostc$IR* $tmp398 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp399 = *(&local11);
$fn401 $tmp400 = ($fn401) $tmp398->$class->vtable[4];
$tmp400($tmp398, $tmp399);
// line 148
ITable* $tmp402 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp402 = $tmp402->next;
}
$fn404 $tmp403 = $tmp402->methods[0];
frost$collections$Iterator* $tmp405 = $tmp403(((frost$collections$Iterable*) param5));
goto block19;
block19:;
ITable* $tmp406 = $tmp405->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp406 = $tmp406->next;
}
$fn408 $tmp407 = $tmp406->methods[0];
frost$core$Bit $tmp409 = $tmp407($tmp405);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block21; else goto block20;
block20:;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp411 = $tmp405->$class->itable;
while ($tmp411->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp411 = $tmp411->next;
}
$fn413 $tmp412 = $tmp411->methods[1];
frost$core$Object* $tmp414 = $tmp412($tmp405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp414)));
org$frostlang$frostc$ASTNode* $tmp415 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local20) = ((org$frostlang$frostc$ASTNode*) $tmp414);
// line 149
org$frostlang$frostc$ASTNode* $tmp416 = *(&local20);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp416);
frost$core$Frost$unref$frost$core$Object$Q($tmp414);
org$frostlang$frostc$ASTNode* $tmp417 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
org$frostlang$frostc$IR$Value* $tmp418 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp419 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp420 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local17) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 152
org$frostlang$frostc$IR* $tmp421 = *(&local0);
$fn423 $tmp422 = ($fn423) $tmp421->$class->vtable[5];
frost$core$Bit $tmp424 = $tmp422($tmp421);
frost$core$Bit $tmp425 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp424);
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block22; else goto block23;
block22:;
// line 153
org$frostlang$frostc$IR* $tmp427 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp428 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp429 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp430 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp428, $tmp429, param1, $tmp430);
$fn432 $tmp431 = ($fn432) $tmp427->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp433 = $tmp431($tmp427, $tmp428);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
goto block23;
block23:;
// line 155
org$frostlang$frostc$IR* $tmp434 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp435 = *(&local13);
$fn437 $tmp436 = ($fn437) $tmp434->$class->vtable[4];
$tmp436($tmp434, $tmp435);
// line 156
org$frostlang$frostc$IR* $tmp438 = *(&local0);
$fn440 $tmp439 = ($fn440) $tmp438->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp441 = $tmp439($tmp438, &$s442);
*(&local21) = $tmp441;
// line 159
org$frostlang$frostc$IR$Value* $tmp443 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp444 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp445 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp446 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp447 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp448 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp449 = (frost$core$Int64) {2};
frost$core$Int64 $tmp450 = *(&local1);
org$frostlang$frostc$Type* $tmp451 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp448, $tmp449, $tmp450, $tmp451);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp446, $tmp447, param1, $tmp448);
$fn453 $tmp452 = ($fn453) $tmp445->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp454 = $tmp452($tmp445, $tmp446);
org$frostlang$frostc$Type* $tmp455 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp443, $tmp444, $tmp454, $tmp455);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
org$frostlang$frostc$IR$Value* $tmp456 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local22) = $tmp443;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// line 163
org$frostlang$frostc$IR$Value* $tmp457 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp458 = *(&local22);
frost$collections$ListView* $tmp459 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp458);
org$frostlang$frostc$Compiler$TypeContext* $tmp460 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp461 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp460, $tmp461);
org$frostlang$frostc$IR$Value* $tmp462 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp457, &$s463, $tmp459, $tmp460);
org$frostlang$frostc$Type* $tmp464 = *(&local3);
org$frostlang$frostc$Type* $tmp465 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp464);
org$frostlang$frostc$IR$Value* $tmp466 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp462, $tmp465);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$IR$Value* $tmp467 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local23) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// line 165
org$frostlang$frostc$IR$Value* $tmp468 = *(&local23);
frost$core$Bit $tmp469 = frost$core$Bit$init$builtin_bit($tmp468 != NULL);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp471 = (frost$core$Int64) {165};
org$frostlang$frostc$IR$Value* $tmp472 = *(&local22);
frost$core$String* $tmp473 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s474, ((frost$core$Object*) $tmp472));
frost$core$String* $tmp475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp473, &$s476);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s477, $tmp471, $tmp475);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
abort(); // unreachable
block24:;
// line 167
org$frostlang$frostc$IR* $tmp478 = *(&local0);
$fn480 $tmp479 = ($fn480) $tmp478->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp481 = $tmp479($tmp478, &$s482);
*(&local24) = $tmp481;
// line 168
org$frostlang$frostc$IR* $tmp483 = *(&local0);
$fn485 $tmp484 = ($fn485) $tmp483->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp486 = $tmp484($tmp483, &$s487);
*(&local25) = $tmp486;
// line 169
org$frostlang$frostc$IR* $tmp488 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp489 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp490 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp491 = *(&local8);
org$frostlang$frostc$IR$Block$ID $tmp492 = *(&local24);
org$frostlang$frostc$IR$Block$ID $tmp493 = *(&local25);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp489, $tmp490, param1, $tmp491, $tmp492, $tmp493);
$fn495 $tmp494 = ($fn495) $tmp488->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp496 = $tmp494($tmp488, $tmp489);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// line 172
org$frostlang$frostc$IR* $tmp497 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp498 = *(&local24);
$fn500 $tmp499 = ($fn500) $tmp497->$class->vtable[4];
$tmp499($tmp497, $tmp498);
// line 173
org$frostlang$frostc$IR$Value* $tmp501 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp502 = *(&local10);
frost$collections$ListView* $tmp503 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp502);
org$frostlang$frostc$Compiler$TypeContext* $tmp504 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp505 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp506 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp507 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp504, $tmp505, $tmp506, $tmp507);
org$frostlang$frostc$IR$Value* $tmp508 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp501, &$s509, $tmp503, $tmp504);
org$frostlang$frostc$IR$Value* $tmp510 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp508);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
org$frostlang$frostc$IR$Value* $tmp511 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local26) = $tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// line 175
org$frostlang$frostc$IR* $tmp512 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp513 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp514 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp515 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp516 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp517 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp513, $tmp514, param1, $tmp515, $tmp516, $tmp517);
$fn519 $tmp518 = ($fn519) $tmp512->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp520 = $tmp518($tmp512, $tmp513);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// line 178
org$frostlang$frostc$IR* $tmp521 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp522 = *(&local25);
$fn524 $tmp523 = ($fn524) $tmp521->$class->vtable[4];
$tmp523($tmp521, $tmp522);
// line 179
org$frostlang$frostc$IR$Value* $tmp525 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp526 = *(&local10);
frost$collections$ListView* $tmp527 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp526);
org$frostlang$frostc$Compiler$TypeContext* $tmp528 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp529 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp530 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp531 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp528, $tmp529, $tmp530, $tmp531);
org$frostlang$frostc$IR$Value* $tmp532 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp525, &$s533, $tmp527, $tmp528);
org$frostlang$frostc$IR$Value* $tmp534 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp532);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
org$frostlang$frostc$IR$Value* $tmp535 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local27) = $tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// line 181
org$frostlang$frostc$IR* $tmp536 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp537 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp538 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp539 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp540 = *(&local21);
org$frostlang$frostc$IR$Block$ID $tmp541 = *(&local12);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp537, $tmp538, param1, $tmp539, $tmp540, $tmp541);
$fn543 $tmp542 = ($fn543) $tmp536->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp544 = $tmp542($tmp536, $tmp537);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// line 183
org$frostlang$frostc$IR* $tmp545 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp546 = *(&local21);
$fn548 $tmp547 = ($fn548) $tmp545->$class->vtable[4];
$tmp547($tmp545, $tmp546);
// line 184
org$frostlang$frostc$IR$Value* $tmp549 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp550 = *(&local9);
frost$collections$ListView* $tmp551 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp550);
org$frostlang$frostc$Compiler$TypeContext* $tmp552 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp553 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp552, $tmp553);
org$frostlang$frostc$IR$Value* $tmp554 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp549, &$s555, $tmp551, $tmp552);
org$frostlang$frostc$Type* $tmp556 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp557 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp554, $tmp556);
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$IR$Value* $tmp558 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local28) = $tmp557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// line 186
org$frostlang$frostc$IR* $tmp559 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp560 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp561 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp562 = *(&local28);
org$frostlang$frostc$IR$Value* $tmp563 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp564 = (frost$core$Int64) {2};
frost$core$Int64 $tmp565 = *(&local1);
org$frostlang$frostc$Type* $tmp566 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp563, $tmp564, $tmp565, $tmp566);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp560, $tmp561, param1, $tmp562, $tmp563);
$fn568 $tmp567 = ($fn568) $tmp559->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp569 = $tmp567($tmp559, $tmp560);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
// line 187
org$frostlang$frostc$IR* $tmp570 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp571 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp572 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp573 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp571, $tmp572, param1, $tmp573);
$fn575 $tmp574 = ($fn575) $tmp570->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp576 = $tmp574($tmp570, $tmp571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// line 189
org$frostlang$frostc$IR* $tmp577 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp578 = *(&local12);
$fn580 $tmp579 = ($fn580) $tmp577->$class->vtable[4];
$tmp579($tmp577, $tmp578);
org$frostlang$frostc$IR$Value* $tmp581 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp582 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp583 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp584 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp585 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp586 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local16) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp587 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp588 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp589 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp590 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp591 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp592 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp593 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp594 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp595 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
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
org$frostlang$frostc$IR** $tmp596 = &param0->ir;
org$frostlang$frostc$IR* $tmp597 = *$tmp596;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
org$frostlang$frostc$IR* $tmp598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local0) = $tmp597;
// line 214
$fn600 $tmp599 = ($fn600) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp601 = $tmp599(param4);
org$frostlang$frostc$Type$Kind* $tmp602 = &$tmp601->typeKind;
org$frostlang$frostc$Type$Kind $tmp603 = *$tmp602;
org$frostlang$frostc$Type$Kind$wrapper* $tmp604;
$tmp604 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp604->value = $tmp603;
frost$core$Int64 $tmp605 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp606 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp605);
org$frostlang$frostc$Type$Kind$wrapper* $tmp607;
$tmp607 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp607->value = $tmp606;
ITable* $tmp608 = ((frost$core$Equatable*) $tmp604)->$class->itable;
while ($tmp608->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[0];
frost$core$Bit $tmp611 = $tmp609(((frost$core$Equatable*) $tmp604), ((frost$core$Equatable*) $tmp607));
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp613 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s614, $tmp613);
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp607)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp604)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
// line 215
$fn616 $tmp615 = ($fn616) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp617 = $tmp615(param4);
org$frostlang$frostc$FixedArray** $tmp618 = &$tmp617->subtypes;
org$frostlang$frostc$FixedArray* $tmp619 = *$tmp618;
ITable* $tmp620 = ((frost$collections$CollectionView*) $tmp619)->$class->itable;
while ($tmp620->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[0];
frost$core$Int64 $tmp623 = $tmp621(((frost$collections$CollectionView*) $tmp619));
frost$core$Int64 $tmp624 = (frost$core$Int64) {3};
frost$core$Bit $tmp625 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp623, $tmp624);
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp627 = (frost$core$Int64) {215};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s628, $tmp627);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// line 216
$fn630 $tmp629 = ($fn630) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp631 = $tmp629(param4);
org$frostlang$frostc$FixedArray** $tmp632 = &$tmp631->subtypes;
org$frostlang$frostc$FixedArray* $tmp633 = *$tmp632;
frost$core$Int64 $tmp634 = (frost$core$Int64) {0};
frost$core$Object* $tmp635 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp633, $tmp634);
frost$core$String** $tmp636 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp635))->name;
frost$core$String* $tmp637 = *$tmp636;
frost$core$Bit $tmp638 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp637, &$s639);
bool $tmp640 = $tmp638.value;
if ($tmp640) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp641 = (frost$core$Int64) {216};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s642, $tmp641);
abort(); // unreachable
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp635);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// line 217
// line 218
org$frostlang$frostc$Variable$Storage** $tmp643 = &param3->storage;
org$frostlang$frostc$Variable$Storage* $tmp644 = *$tmp643;
frost$core$Int64* $tmp645 = &$tmp644->$rawValue;
frost$core$Int64 $tmp646 = *$tmp645;
frost$core$Int64 $tmp647 = (frost$core$Int64) {0};
frost$core$Bit $tmp648 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp646, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp650 = (frost$core$Int64*) ($tmp644->$data + 0);
frost$core$Int64 $tmp651 = *$tmp650;
*(&local2) = $tmp651;
// line 220
frost$core$Int64 $tmp652 = *(&local2);
*(&local1) = $tmp652;
goto block7;
block9:;
// line 223
frost$core$Bit $tmp653 = frost$core$Bit$init$builtin_bit(false);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp655 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s656, $tmp655);
abort(); // unreachable
block10:;
goto block7;
block7:;
// line 226
$fn658 $tmp657 = ($fn658) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp659 = $tmp657(param4);
org$frostlang$frostc$FixedArray** $tmp660 = &$tmp659->subtypes;
org$frostlang$frostc$FixedArray* $tmp661 = *$tmp660;
frost$core$Int64 $tmp662 = (frost$core$Int64) {1};
frost$core$Object* $tmp663 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp661, $tmp662);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp663)));
org$frostlang$frostc$Type* $tmp664 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp663);
frost$core$Frost$unref$frost$core$Object$Q($tmp663);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// line 227
org$frostlang$frostc$Type* $tmp665 = *(&local3);
org$frostlang$frostc$Type$Kind* $tmp666 = &$tmp665->typeKind;
org$frostlang$frostc$Type$Kind $tmp667 = *$tmp666;
org$frostlang$frostc$Type$Kind$wrapper* $tmp668;
$tmp668 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp668->value = $tmp667;
frost$core$Int64 $tmp669 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp670 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp669);
org$frostlang$frostc$Type$Kind$wrapper* $tmp671;
$tmp671 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp671->value = $tmp670;
ITable* $tmp672 = ((frost$core$Equatable*) $tmp668)->$class->itable;
while ($tmp672->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp672 = $tmp672->next;
}
$fn674 $tmp673 = $tmp672->methods[1];
frost$core$Bit $tmp675 = $tmp673(((frost$core$Equatable*) $tmp668), ((frost$core$Equatable*) $tmp671));
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {227};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s678, $tmp677);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp671)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp668)));
// line 228
$fn680 $tmp679 = ($fn680) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp681 = $tmp679(param4);
org$frostlang$frostc$FixedArray** $tmp682 = &$tmp681->subtypes;
org$frostlang$frostc$FixedArray* $tmp683 = *$tmp682;
frost$core$Int64 $tmp684 = (frost$core$Int64) {2};
frost$core$Object* $tmp685 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp683, $tmp684);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp685)));
org$frostlang$frostc$Type* $tmp686 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp685);
frost$core$Frost$unref$frost$core$Object$Q($tmp685);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// line 229
$fn688 $tmp687 = ($fn688) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp689 = $tmp687(param4);
org$frostlang$frostc$ClassDecl* $tmp690 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp689);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
org$frostlang$frostc$ClassDecl* $tmp691 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local5) = $tmp690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// line 230
org$frostlang$frostc$ClassDecl* $tmp692 = *(&local5);
frost$core$Bit $tmp693 = frost$core$Bit$init$builtin_bit($tmp692 == NULL);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block14; else goto block15;
block14:;
// line 231
org$frostlang$frostc$ClassDecl* $tmp695 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp696 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp697 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp698 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block15:;
// line 233
org$frostlang$frostc$ClassDecl* $tmp699 = *(&local5);
frost$collections$ListView* $tmp700 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(param0, $tmp699);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$collections$ListView* $tmp701 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local6) = $tmp700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// line 236
org$frostlang$frostc$IR$Value* $tmp702 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp703 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp704 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp705 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp706 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp707 = *(&local6);
frost$core$Int64 $tmp708 = (frost$core$Int64) {0};
ITable* $tmp709 = $tmp707->$class->itable;
while ($tmp709->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[0];
frost$core$Object* $tmp712 = $tmp710($tmp707, $tmp708);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp705, $tmp706, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp712));
$fn714 $tmp713 = ($fn714) $tmp704->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp715 = $tmp713($tmp704, $tmp705);
org$frostlang$frostc$Type* $tmp716 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp702, $tmp703, $tmp715, $tmp716);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
org$frostlang$frostc$IR$Value* $tmp717 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
*(&local7) = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q($tmp712);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// line 240
org$frostlang$frostc$IR* $tmp718 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp719 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp720 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp721 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp722 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp723 = (frost$core$Int64) {2};
frost$core$Int64 $tmp724 = *(&local1);
org$frostlang$frostc$Type* $tmp725 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp722, $tmp723, $tmp724, $tmp725);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp719, $tmp720, param1, $tmp721, $tmp722);
$fn727 $tmp726 = ($fn727) $tmp718->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp728 = $tmp726($tmp718, $tmp719);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// line 243
org$frostlang$frostc$IR$Value* $tmp729 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp730 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp731 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp732 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp733 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp734 = *(&local6);
frost$core$Int64 $tmp735 = (frost$core$Int64) {1};
ITable* $tmp736 = $tmp734->$class->itable;
while ($tmp736->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp736 = $tmp736->next;
}
$fn738 $tmp737 = $tmp736->methods[0];
frost$core$Object* $tmp739 = $tmp737($tmp734, $tmp735);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp732, $tmp733, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp739));
$fn741 $tmp740 = ($fn741) $tmp731->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp742 = $tmp740($tmp731, $tmp732);
org$frostlang$frostc$Type* $tmp743 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp729, $tmp730, $tmp742, $tmp743);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
org$frostlang$frostc$IR$Value* $tmp744 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local8) = $tmp729;
frost$core$Frost$unref$frost$core$Object$Q($tmp739);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// line 247
org$frostlang$frostc$IR$Value* $tmp745 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp746 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp747 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp748 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp749 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp750 = *(&local6);
frost$core$Int64 $tmp751 = (frost$core$Int64) {2};
ITable* $tmp752 = $tmp750->$class->itable;
while ($tmp752->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp752 = $tmp752->next;
}
$fn754 $tmp753 = $tmp752->methods[0];
frost$core$Object* $tmp755 = $tmp753($tmp750, $tmp751);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp748, $tmp749, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp755));
$fn757 $tmp756 = ($fn757) $tmp747->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp758 = $tmp756($tmp747, $tmp748);
org$frostlang$frostc$Type* $tmp759 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp745, $tmp746, $tmp758, $tmp759);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
org$frostlang$frostc$IR$Value* $tmp760 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local9) = $tmp745;
frost$core$Frost$unref$frost$core$Object$Q($tmp755);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// line 249
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 250
org$frostlang$frostc$IR$Value* $tmp761 = *(&local9);
$fn763 $tmp762 = ($fn763) $tmp761->$class->vtable[2];
org$frostlang$frostc$Type* $tmp764 = $tmp762($tmp761);
org$frostlang$frostc$Type* $tmp765 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp766 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp764, $tmp765);
bool $tmp767 = $tmp766.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
if ($tmp767) goto block16; else goto block18;
block16:;
// line 251
org$frostlang$frostc$IR$Value* $tmp768 = *(&local9);
org$frostlang$frostc$Type* $tmp769 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp770 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp768, $tmp769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
org$frostlang$frostc$IR$Value* $tmp771 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local10) = $tmp770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
goto block17;
block18:;
// line 1
// line 254
org$frostlang$frostc$IR$Value* $tmp772 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
org$frostlang$frostc$IR$Value* $tmp773 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local10) = $tmp772;
goto block17;
block17:;
// line 256
org$frostlang$frostc$IR$Value* $tmp774 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp775 = *(&local9);
$fn777 $tmp776 = ($fn777) $tmp775->$class->vtable[2];
org$frostlang$frostc$Type* $tmp778 = $tmp776($tmp775);
org$frostlang$frostc$Type* $tmp779 = org$frostlang$frostc$statement$For$signed$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp778);
org$frostlang$frostc$IR$Value* $tmp780 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp774, $tmp779);
frost$collections$Array* $tmp781 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp782 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp781, $tmp782);
org$frostlang$frostc$Compiler$TypeContext* $tmp783 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp784 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp783, $tmp784);
org$frostlang$frostc$IR$Value* $tmp785 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp780, &$s786, ((frost$collections$ListView*) $tmp781), $tmp783);
org$frostlang$frostc$Type* $tmp787 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp788 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp785, $tmp787);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
org$frostlang$frostc$IR$Value* $tmp789 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local11) = $tmp788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// line 258
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 259
org$frostlang$frostc$IR$Value* $tmp790 = *(&local9);
$fn792 $tmp791 = ($fn792) $tmp790->$class->vtable[2];
org$frostlang$frostc$Type* $tmp793 = $tmp791($tmp790);
org$frostlang$frostc$Type* $tmp794 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp795 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp793, $tmp794);
bool $tmp796 = $tmp795.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
if ($tmp796) goto block19; else goto block21;
block19:;
// line 260
org$frostlang$frostc$IR$Value* $tmp797 = *(&local11);
org$frostlang$frostc$Type* $tmp798 = org$frostlang$frostc$Type$UInt64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value* $tmp799 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp797, $tmp798);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$IR$Value* $tmp800 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local12) = $tmp799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
goto block20;
block21:;
// line 1
// line 263
org$frostlang$frostc$IR$Value* $tmp801 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
org$frostlang$frostc$IR$Value* $tmp802 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
*(&local12) = $tmp801;
goto block20;
block20:;
// line 267
org$frostlang$frostc$IR$Value* $tmp803 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp804 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp805 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp806 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp807 = (frost$core$Int64) {10};
frost$collections$ListView* $tmp808 = *(&local6);
frost$core$Int64 $tmp809 = (frost$core$Int64) {3};
ITable* $tmp810 = $tmp808->$class->itable;
while ($tmp810->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[0];
frost$core$Object* $tmp813 = $tmp811($tmp808, $tmp809);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp806, $tmp807, param1, param4, ((org$frostlang$frostc$FieldDecl*) $tmp813));
$fn815 $tmp814 = ($fn815) $tmp805->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp816 = $tmp814($tmp805, $tmp806);
org$frostlang$frostc$Type* $tmp817 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp803, $tmp804, $tmp816, $tmp817);
org$frostlang$frostc$IR$Value* $tmp818 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp803);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
org$frostlang$frostc$IR$Value* $tmp819 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local13) = $tmp818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$core$Frost$unref$frost$core$Object$Q($tmp813);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// line 271
org$frostlang$frostc$IR* $tmp820 = *(&local0);
$fn822 $tmp821 = ($fn822) $tmp820->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp823 = $tmp821($tmp820, &$s824);
*(&local14) = $tmp823;
// line 272
org$frostlang$frostc$IR* $tmp825 = *(&local0);
$fn827 $tmp826 = ($fn827) $tmp825->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp828 = $tmp826($tmp825, &$s829);
*(&local15) = $tmp828;
// line 273
org$frostlang$frostc$IR* $tmp830 = *(&local0);
$fn832 $tmp831 = ($fn832) $tmp830->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp833 = $tmp831($tmp830, &$s834);
*(&local16) = $tmp833;
// line 274
org$frostlang$frostc$IR* $tmp835 = *(&local0);
$fn837 $tmp836 = ($fn837) $tmp835->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp838 = $tmp836($tmp835, &$s839);
*(&local17) = $tmp838;
// line 275
org$frostlang$frostc$IR* $tmp840 = *(&local0);
$fn842 $tmp841 = ($fn842) $tmp840->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp843 = $tmp841($tmp840, &$s844);
*(&local18) = $tmp843;
// line 276
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 277
org$frostlang$frostc$Compiler$AutoContext* $tmp845 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp846 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp847 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp848 = *(&local15);
org$frostlang$frostc$IR$Block$ID $tmp849 = *(&local16);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp846, $tmp847, param2, $tmp848, $tmp849);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp845, param0, $tmp846);
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$Compiler$AutoContext* $tmp850 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local20) = $tmp845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
// line 1
// line 279
org$frostlang$frostc$Compiler$AutoScope* $tmp851 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp851, param0);
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
org$frostlang$frostc$Compiler$AutoScope* $tmp852 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local21) = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// line 280
org$frostlang$frostc$Type* $tmp853 = *(&local4);
frost$core$String** $tmp854 = &((org$frostlang$frostc$Symbol*) $tmp853)->name;
frost$core$String* $tmp855 = *$tmp854;
frost$core$Bit $tmp856 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp855, &$s857);
bool $tmp858 = $tmp856.value;
if ($tmp858) goto block22; else goto block24;
block22:;
// line 281
org$frostlang$frostc$IR$Value* $tmp859 = *(&local9);
frost$collections$Array* $tmp860 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp861 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp860, $tmp861);
org$frostlang$frostc$ASTNode* $tmp862 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp863 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp864 = (frost$core$UInt64) {0};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp862, $tmp863, param1, $tmp864);
frost$collections$Array$add$frost$collections$Array$T($tmp860, ((frost$core$Object*) $tmp862));
org$frostlang$frostc$Compiler$TypeContext* $tmp865 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp866 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp867 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp868 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp865, $tmp866, $tmp867, $tmp868);
org$frostlang$frostc$IR$Value* $tmp869 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp859, &$s870, ((frost$collections$ListView*) $tmp860), $tmp865);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$IR$Value* $tmp871 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local22) = $tmp869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// line 283
org$frostlang$frostc$IR$Value* $tmp872 = *(&local22);
frost$core$Bit $tmp873 = frost$core$Bit$init$builtin_bit($tmp872 != NULL);
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp875 = (frost$core$Int64) {283};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s876, $tmp875);
abort(); // unreachable
block25:;
// line 284
org$frostlang$frostc$IR$Value* $tmp877 = *(&local22);
org$frostlang$frostc$IR$Value* $tmp878 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp877);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
org$frostlang$frostc$IR$Value* $tmp879 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local19) = $tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
org$frostlang$frostc$IR$Value* $tmp880 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block23;
block24:;
// line 1
// line 287
org$frostlang$frostc$Type* $tmp881 = *(&local4);
frost$core$String** $tmp882 = &((org$frostlang$frostc$Symbol*) $tmp881)->name;
frost$core$String* $tmp883 = *$tmp882;
frost$core$Bit $tmp884 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp883, &$s885);
bool $tmp886 = $tmp884.value;
if ($tmp886) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp887 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s888, $tmp887);
abort(); // unreachable
block27:;
// line 288
org$frostlang$frostc$IR$Value* $tmp889 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp890 = (frost$core$Int64) {0};
frost$core$Bit $tmp891 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Bit($tmp889, $tmp890, $tmp891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
org$frostlang$frostc$IR$Value* $tmp892 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local19) = $tmp889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
goto block23;
block23:;
// line 290
org$frostlang$frostc$IR* $tmp893 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp894 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp895 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp896 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp897 = *(&local17);
org$frostlang$frostc$IR$Block$ID $tmp898 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp894, $tmp895, param1, $tmp896, $tmp897, $tmp898);
$fn900 $tmp899 = ($fn900) $tmp893->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp901 = $tmp899($tmp893, $tmp894);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// line 291
org$frostlang$frostc$IR* $tmp902 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp903 = *(&local17);
$fn905 $tmp904 = ($fn905) $tmp902->$class->vtable[4];
$tmp904($tmp902, $tmp903);
// line 292
org$frostlang$frostc$IR* $tmp906 = *(&local0);
$fn908 $tmp907 = ($fn908) $tmp906->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp909 = $tmp907($tmp906, &$s910);
*(&local23) = $tmp909;
// line 293
org$frostlang$frostc$IR* $tmp911 = *(&local0);
$fn913 $tmp912 = ($fn913) $tmp911->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp914 = $tmp912($tmp911, &$s915);
*(&local24) = $tmp914;
// line 294
org$frostlang$frostc$IR* $tmp916 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp917 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp918 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp919 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp920 = *(&local23);
org$frostlang$frostc$IR$Block$ID $tmp921 = *(&local24);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp917, $tmp918, param1, $tmp919, $tmp920, $tmp921);
$fn923 $tmp922 = ($fn923) $tmp916->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp924 = $tmp922($tmp916, $tmp917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// line 296
org$frostlang$frostc$IR* $tmp925 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp926 = *(&local23);
$fn928 $tmp927 = ($fn928) $tmp925->$class->vtable[4];
$tmp927($tmp925, $tmp926);
// line 297
org$frostlang$frostc$IR$Value* $tmp929 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp930 = *(&local8);
frost$collections$ListView* $tmp931 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp930);
org$frostlang$frostc$Compiler$TypeContext* $tmp932 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp933 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp934 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp935 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp932, $tmp933, $tmp934, $tmp935);
org$frostlang$frostc$IR$Value* $tmp936 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp929, &$s937, $tmp931, $tmp932);
org$frostlang$frostc$IR$Value* $tmp938 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp936);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
org$frostlang$frostc$IR$Value* $tmp939 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
*(&local25) = $tmp938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
// line 300
org$frostlang$frostc$IR* $tmp940 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp941 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp942 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp943 = *(&local25);
org$frostlang$frostc$IR$Block$ID $tmp944 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp945 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp941, $tmp942, param1, $tmp943, $tmp944, $tmp945);
$fn947 $tmp946 = ($fn947) $tmp940->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp948 = $tmp946($tmp940, $tmp941);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// line 302
org$frostlang$frostc$IR* $tmp949 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp950 = *(&local24);
$fn952 $tmp951 = ($fn952) $tmp949->$class->vtable[4];
$tmp951($tmp949, $tmp950);
// line 303
org$frostlang$frostc$IR$Value* $tmp953 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp954 = *(&local8);
frost$collections$ListView* $tmp955 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp954);
org$frostlang$frostc$Compiler$TypeContext* $tmp956 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp957 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp958 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp959 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp956, $tmp957, $tmp958, $tmp959);
org$frostlang$frostc$IR$Value* $tmp960 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp953, &$s961, $tmp955, $tmp956);
org$frostlang$frostc$IR$Value* $tmp962 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp960);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
org$frostlang$frostc$IR$Value* $tmp963 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local26) = $tmp962;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// line 306
org$frostlang$frostc$IR* $tmp964 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp965 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp966 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp967 = *(&local26);
org$frostlang$frostc$IR$Block$ID $tmp968 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp969 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp965, $tmp966, param1, $tmp967, $tmp968, $tmp969);
$fn971 $tmp970 = ($fn971) $tmp964->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp972 = $tmp970($tmp964, $tmp965);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
// line 308
org$frostlang$frostc$IR* $tmp973 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp974 = *(&local18);
$fn976 $tmp975 = ($fn976) $tmp973->$class->vtable[4];
$tmp975($tmp973, $tmp974);
// line 309
org$frostlang$frostc$IR* $tmp977 = *(&local0);
$fn979 $tmp978 = ($fn979) $tmp977->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp980 = $tmp978($tmp977, &$s981);
*(&local27) = $tmp980;
// line 310
org$frostlang$frostc$IR* $tmp982 = *(&local0);
$fn984 $tmp983 = ($fn984) $tmp982->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp985 = $tmp983($tmp982, &$s986);
*(&local28) = $tmp985;
// line 311
org$frostlang$frostc$IR* $tmp987 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp988 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp989 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp990 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp991 = *(&local27);
org$frostlang$frostc$IR$Block$ID $tmp992 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp988, $tmp989, param1, $tmp990, $tmp991, $tmp992);
$fn994 $tmp993 = ($fn994) $tmp987->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp995 = $tmp993($tmp987, $tmp988);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// line 313
org$frostlang$frostc$IR* $tmp996 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp997 = *(&local27);
$fn999 $tmp998 = ($fn999) $tmp996->$class->vtable[4];
$tmp998($tmp996, $tmp997);
// line 314
org$frostlang$frostc$IR$Value* $tmp1000 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1001 = *(&local8);
frost$collections$ListView* $tmp1002 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1001);
org$frostlang$frostc$Compiler$TypeContext* $tmp1003 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1004 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1005 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1006 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1003, $tmp1004, $tmp1005, $tmp1006);
org$frostlang$frostc$IR$Value* $tmp1007 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1000, &$s1008, $tmp1002, $tmp1003);
org$frostlang$frostc$IR$Value* $tmp1009 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1007);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
org$frostlang$frostc$IR$Value* $tmp1010 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local29) = $tmp1009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// line 317
org$frostlang$frostc$IR* $tmp1011 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1012 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1013 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1014 = *(&local29);
org$frostlang$frostc$IR$Block$ID $tmp1015 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1016 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1012, $tmp1013, param1, $tmp1014, $tmp1015, $tmp1016);
$fn1018 $tmp1017 = ($fn1018) $tmp1011->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1019 = $tmp1017($tmp1011, $tmp1012);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
// line 319
org$frostlang$frostc$IR* $tmp1020 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1021 = *(&local28);
$fn1023 $tmp1022 = ($fn1023) $tmp1020->$class->vtable[4];
$tmp1022($tmp1020, $tmp1021);
// line 320
org$frostlang$frostc$IR$Value* $tmp1024 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1025 = *(&local8);
frost$collections$ListView* $tmp1026 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1025);
org$frostlang$frostc$Compiler$TypeContext* $tmp1027 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1028 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1029 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1030 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1027, $tmp1028, $tmp1029, $tmp1030);
org$frostlang$frostc$IR$Value* $tmp1031 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1024, &$s1032, $tmp1026, $tmp1027);
org$frostlang$frostc$IR$Value* $tmp1033 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1031);
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$IR$Value* $tmp1034 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local30) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
// line 323
org$frostlang$frostc$IR* $tmp1035 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1036 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1037 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1038 = *(&local30);
org$frostlang$frostc$IR$Block$ID $tmp1039 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp1040 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1036, $tmp1037, param1, $tmp1038, $tmp1039, $tmp1040);
$fn1042 $tmp1041 = ($fn1042) $tmp1035->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1043 = $tmp1041($tmp1035, $tmp1036);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
// line 325
org$frostlang$frostc$IR* $tmp1044 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1045 = *(&local14);
$fn1047 $tmp1046 = ($fn1047) $tmp1044->$class->vtable[4];
$tmp1046($tmp1044, $tmp1045);
// line 326
ITable* $tmp1048 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1048->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1048 = $tmp1048->next;
}
$fn1050 $tmp1049 = $tmp1048->methods[0];
frost$collections$Iterator* $tmp1051 = $tmp1049(((frost$collections$Iterable*) param5));
goto block29;
block29:;
ITable* $tmp1052 = $tmp1051->$class->itable;
while ($tmp1052->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1052 = $tmp1052->next;
}
$fn1054 $tmp1053 = $tmp1052->methods[0];
frost$core$Bit $tmp1055 = $tmp1053($tmp1051);
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block31; else goto block30;
block30:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1057 = $tmp1051->$class->itable;
while ($tmp1057->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1057 = $tmp1057->next;
}
$fn1059 $tmp1058 = $tmp1057->methods[1];
frost$core$Object* $tmp1060 = $tmp1058($tmp1051);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1060)));
org$frostlang$frostc$ASTNode* $tmp1061 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp1060);
// line 327
org$frostlang$frostc$ASTNode* $tmp1062 = *(&local31);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1062);
frost$core$Frost$unref$frost$core$Object$Q($tmp1060);
org$frostlang$frostc$ASTNode* $tmp1063 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
org$frostlang$frostc$IR$Value* $tmp1064 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local30) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1065 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1066 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1067 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1068 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local21) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 330
org$frostlang$frostc$IR* $tmp1069 = *(&local0);
$fn1071 $tmp1070 = ($fn1071) $tmp1069->$class->vtable[5];
frost$core$Bit $tmp1072 = $tmp1070($tmp1069);
frost$core$Bit $tmp1073 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1072);
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block32; else goto block33;
block32:;
// line 331
org$frostlang$frostc$IR* $tmp1075 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1076 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1077 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1078 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1076, $tmp1077, param1, $tmp1078);
$fn1080 $tmp1079 = ($fn1080) $tmp1075->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1081 = $tmp1079($tmp1075, $tmp1076);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
goto block33;
block33:;
// line 333
org$frostlang$frostc$IR* $tmp1082 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1083 = *(&local16);
$fn1085 $tmp1084 = ($fn1085) $tmp1082->$class->vtable[4];
$tmp1084($tmp1082, $tmp1083);
// line 334
org$frostlang$frostc$IR* $tmp1086 = *(&local0);
$fn1088 $tmp1087 = ($fn1088) $tmp1086->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1089 = $tmp1087($tmp1086, &$s1090);
*(&local32) = $tmp1089;
// line 336
org$frostlang$frostc$IR$Value* $tmp1091 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1092 = (frost$core$Int64) {7};
org$frostlang$frostc$IR* $tmp1093 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1094 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1095 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1096 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1097 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1098 = *(&local1);
org$frostlang$frostc$Type* $tmp1099 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1096, $tmp1097, $tmp1098, $tmp1099);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1094, $tmp1095, param1, $tmp1096);
$fn1101 $tmp1100 = ($fn1101) $tmp1093->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1102 = $tmp1100($tmp1093, $tmp1094);
org$frostlang$frostc$Type* $tmp1103 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1091, $tmp1092, $tmp1102, $tmp1103);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
org$frostlang$frostc$IR$Value* $tmp1104 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local33) = $tmp1091;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
// line 338
org$frostlang$frostc$IR* $tmp1105 = *(&local0);
$fn1107 $tmp1106 = ($fn1107) $tmp1105->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1108 = $tmp1106($tmp1105, &$s1109);
*(&local34) = $tmp1108;
// line 339
org$frostlang$frostc$IR* $tmp1110 = *(&local0);
$fn1112 $tmp1111 = ($fn1112) $tmp1110->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1113 = $tmp1111($tmp1110, &$s1114);
*(&local35) = $tmp1113;
// line 340
org$frostlang$frostc$IR* $tmp1115 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1116 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1117 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1118 = *(&local19);
org$frostlang$frostc$IR$Block$ID $tmp1119 = *(&local34);
org$frostlang$frostc$IR$Block$ID $tmp1120 = *(&local35);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1116, $tmp1117, param1, $tmp1118, $tmp1119, $tmp1120);
$fn1122 $tmp1121 = ($fn1122) $tmp1115->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1123 = $tmp1121($tmp1115, $tmp1116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
// line 344
org$frostlang$frostc$IR* $tmp1124 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1125 = *(&local34);
$fn1127 $tmp1126 = ($fn1127) $tmp1124->$class->vtable[4];
$tmp1126($tmp1124, $tmp1125);
// line 347
org$frostlang$frostc$IR$Value* $tmp1128 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1129 = *(&local33);
frost$collections$ListView* $tmp1130 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1129);
org$frostlang$frostc$Compiler$TypeContext* $tmp1131 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1132 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1131, $tmp1132);
org$frostlang$frostc$IR$Value* $tmp1133 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1128, &$s1134, $tmp1130, $tmp1131);
org$frostlang$frostc$Type* $tmp1135 = *(&local3);
org$frostlang$frostc$Type* $tmp1136 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1135);
org$frostlang$frostc$IR$Value* $tmp1137 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1133, $tmp1136);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
org$frostlang$frostc$IR$Value* $tmp1138 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local36) = $tmp1137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
// line 351
org$frostlang$frostc$IR* $tmp1139 = *(&local0);
$fn1141 $tmp1140 = ($fn1141) $tmp1139->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1142 = $tmp1140($tmp1139, &$s1143);
*(&local37) = $tmp1142;
// line 352
org$frostlang$frostc$IR* $tmp1144 = *(&local0);
$fn1146 $tmp1145 = ($fn1146) $tmp1144->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1147 = $tmp1145($tmp1144, &$s1148);
*(&local38) = $tmp1147;
// line 353
org$frostlang$frostc$IR* $tmp1149 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1150 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1151 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1152 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1153 = *(&local37);
org$frostlang$frostc$IR$Block$ID $tmp1154 = *(&local38);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1150, $tmp1151, param1, $tmp1152, $tmp1153, $tmp1154);
$fn1156 $tmp1155 = ($fn1156) $tmp1149->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1157 = $tmp1155($tmp1149, $tmp1150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// line 357
org$frostlang$frostc$IR* $tmp1158 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1159 = *(&local37);
$fn1161 $tmp1160 = ($fn1161) $tmp1158->$class->vtable[4];
$tmp1160($tmp1158, $tmp1159);
// line 358
org$frostlang$frostc$IR$Value* $tmp1162 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1163 = *(&local10);
frost$collections$ListView* $tmp1164 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1163);
org$frostlang$frostc$Compiler$TypeContext* $tmp1165 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1166 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1167 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1168 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1165, $tmp1166, $tmp1167, $tmp1168);
org$frostlang$frostc$IR$Value* $tmp1169 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1162, &$s1170, $tmp1164, $tmp1165);
org$frostlang$frostc$IR$Value* $tmp1171 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1169);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
org$frostlang$frostc$IR$Value* $tmp1172 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local39) = $tmp1171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
// line 361
org$frostlang$frostc$IR* $tmp1173 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1174 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1175 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1176 = *(&local39);
org$frostlang$frostc$IR$Block$ID $tmp1177 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1178 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1174, $tmp1175, param1, $tmp1176, $tmp1177, $tmp1178);
$fn1180 $tmp1179 = ($fn1180) $tmp1173->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1181 = $tmp1179($tmp1173, $tmp1174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
// line 364
org$frostlang$frostc$IR* $tmp1182 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1183 = *(&local38);
$fn1185 $tmp1184 = ($fn1185) $tmp1182->$class->vtable[4];
$tmp1184($tmp1182, $tmp1183);
// line 365
org$frostlang$frostc$IR$Value* $tmp1186 = *(&local36);
org$frostlang$frostc$IR$Value* $tmp1187 = *(&local10);
frost$collections$ListView* $tmp1188 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1187);
org$frostlang$frostc$Compiler$TypeContext* $tmp1189 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1190 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1191 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1192 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1189, $tmp1190, $tmp1191, $tmp1192);
org$frostlang$frostc$IR$Value* $tmp1193 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1186, &$s1194, $tmp1188, $tmp1189);
org$frostlang$frostc$IR$Value* $tmp1195 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1193);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
org$frostlang$frostc$IR$Value* $tmp1196 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local40) = $tmp1195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
// line 368
org$frostlang$frostc$IR* $tmp1197 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1198 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1199 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1200 = *(&local40);
org$frostlang$frostc$IR$Block$ID $tmp1201 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1202 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1198, $tmp1199, param1, $tmp1200, $tmp1201, $tmp1202);
$fn1204 $tmp1203 = ($fn1204) $tmp1197->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1205 = $tmp1203($tmp1197, $tmp1198);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// line 372
org$frostlang$frostc$IR* $tmp1206 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1207 = *(&local35);
$fn1209 $tmp1208 = ($fn1209) $tmp1206->$class->vtable[4];
$tmp1208($tmp1206, $tmp1207);
// line 373
org$frostlang$frostc$IR$Value* $tmp1210 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1211 = *(&local8);
frost$collections$ListView* $tmp1212 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1211);
org$frostlang$frostc$Compiler$TypeContext* $tmp1213 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1214 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1213, $tmp1214);
org$frostlang$frostc$IR$Value* $tmp1215 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1210, &$s1216, $tmp1212, $tmp1213);
org$frostlang$frostc$Type* $tmp1217 = *(&local3);
org$frostlang$frostc$Type* $tmp1218 = org$frostlang$frostc$statement$For$unsigned$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1217);
org$frostlang$frostc$IR$Value* $tmp1219 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1215, $tmp1218);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
org$frostlang$frostc$IR$Value* $tmp1220 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local41) = $tmp1219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
// line 377
org$frostlang$frostc$IR* $tmp1221 = *(&local0);
$fn1223 $tmp1222 = ($fn1223) $tmp1221->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1224 = $tmp1222($tmp1221, &$s1225);
*(&local42) = $tmp1224;
// line 378
org$frostlang$frostc$IR* $tmp1226 = *(&local0);
$fn1228 $tmp1227 = ($fn1228) $tmp1226->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1229 = $tmp1227($tmp1226, &$s1230);
*(&local43) = $tmp1229;
// line 379
org$frostlang$frostc$IR* $tmp1231 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1232 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1233 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1234 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp1235 = *(&local42);
org$frostlang$frostc$IR$Block$ID $tmp1236 = *(&local43);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1232, $tmp1233, param1, $tmp1234, $tmp1235, $tmp1236);
$fn1238 $tmp1237 = ($fn1238) $tmp1231->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1239 = $tmp1237($tmp1231, $tmp1232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
// line 383
org$frostlang$frostc$IR* $tmp1240 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1241 = *(&local42);
$fn1243 $tmp1242 = ($fn1243) $tmp1240->$class->vtable[4];
$tmp1242($tmp1240, $tmp1241);
// line 384
org$frostlang$frostc$IR$Value* $tmp1244 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1245 = *(&local12);
frost$collections$ListView* $tmp1246 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1245);
org$frostlang$frostc$Compiler$TypeContext* $tmp1247 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1248 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1249 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1250 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1247, $tmp1248, $tmp1249, $tmp1250);
org$frostlang$frostc$IR$Value* $tmp1251 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1244, &$s1252, $tmp1246, $tmp1247);
org$frostlang$frostc$IR$Value* $tmp1253 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1251);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
org$frostlang$frostc$IR$Value* $tmp1254 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local44) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
// line 387
org$frostlang$frostc$IR* $tmp1255 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1256 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1258 = *(&local44);
org$frostlang$frostc$IR$Block$ID $tmp1259 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1260 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1256, $tmp1257, param1, $tmp1258, $tmp1259, $tmp1260);
$fn1262 $tmp1261 = ($fn1262) $tmp1255->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1263 = $tmp1261($tmp1255, $tmp1256);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// line 391
org$frostlang$frostc$IR* $tmp1264 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1265 = *(&local43);
$fn1267 $tmp1266 = ($fn1267) $tmp1264->$class->vtable[4];
$tmp1266($tmp1264, $tmp1265);
// line 392
org$frostlang$frostc$IR$Value* $tmp1268 = *(&local41);
org$frostlang$frostc$IR$Value* $tmp1269 = *(&local12);
frost$collections$ListView* $tmp1270 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1269);
org$frostlang$frostc$Compiler$TypeContext* $tmp1271 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1272 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1273 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1274 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1271, $tmp1272, $tmp1273, $tmp1274);
org$frostlang$frostc$IR$Value* $tmp1275 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1268, &$s1276, $tmp1270, $tmp1271);
org$frostlang$frostc$IR$Value* $tmp1277 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1275);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
org$frostlang$frostc$IR$Value* $tmp1278 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local45) = $tmp1277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
// line 395
org$frostlang$frostc$IR* $tmp1279 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1280 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1281 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1282 = *(&local45);
org$frostlang$frostc$IR$Block$ID $tmp1283 = *(&local32);
org$frostlang$frostc$IR$Block$ID $tmp1284 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1280, $tmp1281, param1, $tmp1282, $tmp1283, $tmp1284);
$fn1286 $tmp1285 = ($fn1286) $tmp1279->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1287 = $tmp1285($tmp1279, $tmp1280);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
// line 398
org$frostlang$frostc$IR* $tmp1288 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1289 = *(&local32);
$fn1291 $tmp1290 = ($fn1291) $tmp1288->$class->vtable[4];
$tmp1290($tmp1288, $tmp1289);
// line 399
org$frostlang$frostc$IR$Value* $tmp1292 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp1293 = *(&local9);
frost$collections$ListView* $tmp1294 = org$frostlang$frostc$statement$For$arg$org$frostlang$frostc$IR$Value$R$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT($tmp1293);
org$frostlang$frostc$Compiler$TypeContext* $tmp1295 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1296 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1295, $tmp1296);
org$frostlang$frostc$IR$Value* $tmp1297 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1292, &$s1298, $tmp1294, $tmp1295);
org$frostlang$frostc$Type* $tmp1299 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp1300 = org$frostlang$frostc$Compiler$convert$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1297, $tmp1299);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
org$frostlang$frostc$IR$Value* $tmp1301 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local46) = $tmp1300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
// line 401
org$frostlang$frostc$IR* $tmp1302 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1303 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1304 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1305 = *(&local46);
org$frostlang$frostc$IR$Value* $tmp1306 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1307 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1308 = *(&local1);
org$frostlang$frostc$Type* $tmp1309 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1306, $tmp1307, $tmp1308, $tmp1309);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1303, $tmp1304, param1, $tmp1305, $tmp1306);
$fn1311 $tmp1310 = ($fn1311) $tmp1302->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1312 = $tmp1310($tmp1302, $tmp1303);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
// line 402
org$frostlang$frostc$IR* $tmp1313 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1314 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1315 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1316 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1314, $tmp1315, param1, $tmp1316);
$fn1318 $tmp1317 = ($fn1318) $tmp1313->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1319 = $tmp1317($tmp1313, $tmp1314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// line 404
org$frostlang$frostc$IR* $tmp1320 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1321 = *(&local15);
$fn1323 $tmp1322 = ($fn1323) $tmp1320->$class->vtable[4];
$tmp1322($tmp1320, $tmp1321);
org$frostlang$frostc$IR$Value* $tmp1324 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1325 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1326 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1327 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1328 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1329 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1330 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1331 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1332 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local20) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR$Value* $tmp1333 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1334 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1335 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1336 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1337 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1338 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1339 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1340 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$ListView* $tmp1341 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1342 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp1343 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1344 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1345 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
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
org$frostlang$frostc$IR** $tmp1346 = &param0->ir;
org$frostlang$frostc$IR* $tmp1347 = *$tmp1346;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$IR* $tmp1348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local0) = $tmp1347;
// line 412
$fn1350 $tmp1349 = ($fn1350) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1351 = $tmp1349(param4);
frost$core$Bit $tmp1352 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1351);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1352;
goto block3;
block2:;
$fn1355 $tmp1354 = ($fn1355) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1356 = $tmp1354(param4);
frost$core$Bit $tmp1357 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local1) = $tmp1357;
goto block3;
block3:;
frost$core$Bit $tmp1358 = *(&local1);
bool $tmp1359 = $tmp1358.value;
if ($tmp1359) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1360 = (frost$core$Int64) {412};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1361, $tmp1360);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
// line 413
$fn1363 $tmp1362 = ($fn1363) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1364 = $tmp1362(param4);
frost$core$Bit $tmp1365 = org$frostlang$frostc$statement$For$checkSteppedRangeTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp1364);
frost$core$Bit $tmp1366 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1365);
bool $tmp1367 = $tmp1366.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
if ($tmp1367) goto block6; else goto block7;
block6:;
// line 414
org$frostlang$frostc$IR* $tmp1368 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 416
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 417
$fn1370 $tmp1369 = ($fn1370) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1371 = $tmp1369(param4);
org$frostlang$frostc$Type$Kind* $tmp1372 = &$tmp1371->typeKind;
org$frostlang$frostc$Type$Kind $tmp1373 = *$tmp1372;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1374;
$tmp1374 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1374->value = $tmp1373;
frost$core$Int64 $tmp1375 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1376 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1375);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1377;
$tmp1377 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1377->value = $tmp1376;
ITable* $tmp1378 = ((frost$core$Equatable*) $tmp1374)->$class->itable;
while ($tmp1378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1378 = $tmp1378->next;
}
$fn1380 $tmp1379 = $tmp1378->methods[0];
frost$core$Bit $tmp1381 = $tmp1379(((frost$core$Equatable*) $tmp1374), ((frost$core$Equatable*) $tmp1377));
bool $tmp1382 = $tmp1381.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1377)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1374)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
if ($tmp1382) goto block8; else goto block10;
block8:;
// line 418
$fn1384 $tmp1383 = ($fn1384) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1385 = $tmp1383(param4);
org$frostlang$frostc$FixedArray** $tmp1386 = &$tmp1385->subtypes;
org$frostlang$frostc$FixedArray* $tmp1387 = *$tmp1386;
frost$core$Int64 $tmp1388 = (frost$core$Int64) {0};
frost$core$Object* $tmp1389 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1387, $tmp1388);
org$frostlang$frostc$Type$Kind* $tmp1390 = &((org$frostlang$frostc$Type*) $tmp1389)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1391 = *$tmp1390;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1392;
$tmp1392 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1392->value = $tmp1391;
frost$core$Int64 $tmp1393 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1394 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1393);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1395;
$tmp1395 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1395->value = $tmp1394;
ITable* $tmp1396 = ((frost$core$Equatable*) $tmp1392)->$class->itable;
while ($tmp1396->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1396 = $tmp1396->next;
}
$fn1398 $tmp1397 = $tmp1396->methods[0];
frost$core$Bit $tmp1399 = $tmp1397(((frost$core$Equatable*) $tmp1392), ((frost$core$Equatable*) $tmp1395));
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1401 = (frost$core$Int64) {418};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1402, $tmp1401);
abort(); // unreachable
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1395)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1392)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1389);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
// line 419
$fn1404 $tmp1403 = ($fn1404) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1405 = $tmp1403(param4);
org$frostlang$frostc$FixedArray** $tmp1406 = &$tmp1405->subtypes;
org$frostlang$frostc$FixedArray* $tmp1407 = *$tmp1406;
frost$core$Int64 $tmp1408 = (frost$core$Int64) {0};
frost$core$Object* $tmp1409 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1407, $tmp1408);
org$frostlang$frostc$FixedArray** $tmp1410 = &((org$frostlang$frostc$Type*) $tmp1409)->subtypes;
org$frostlang$frostc$FixedArray* $tmp1411 = *$tmp1410;
frost$core$Int64 $tmp1412 = (frost$core$Int64) {1};
frost$core$Object* $tmp1413 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1411, $tmp1412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1413)));
org$frostlang$frostc$Type* $tmp1414 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1413);
frost$core$Frost$unref$frost$core$Object$Q($tmp1413);
frost$core$Frost$unref$frost$core$Object$Q($tmp1409);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
goto block9;
block10:;
// line 1
// line 422
$fn1416 $tmp1415 = ($fn1416) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1417 = $tmp1415(param4);
org$frostlang$frostc$Type$Kind* $tmp1418 = &$tmp1417->typeKind;
org$frostlang$frostc$Type$Kind $tmp1419 = *$tmp1418;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1420;
$tmp1420 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1420->value = $tmp1419;
frost$core$Int64 $tmp1421 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1422 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1421);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1423;
$tmp1423 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1423->value = $tmp1422;
ITable* $tmp1424 = ((frost$core$Equatable*) $tmp1420)->$class->itable;
while ($tmp1424->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1424 = $tmp1424->next;
}
$fn1426 $tmp1425 = $tmp1424->methods[0];
frost$core$Bit $tmp1427 = $tmp1425(((frost$core$Equatable*) $tmp1420), ((frost$core$Equatable*) $tmp1423));
bool $tmp1428 = $tmp1427.value;
if ($tmp1428) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp1429 = (frost$core$Int64) {422};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1430, $tmp1429);
abort(); // unreachable
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1423)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1420)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// line 423
$fn1432 $tmp1431 = ($fn1432) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1433 = $tmp1431(param4);
org$frostlang$frostc$FixedArray** $tmp1434 = &$tmp1433->subtypes;
org$frostlang$frostc$FixedArray* $tmp1435 = *$tmp1434;
frost$core$Int64 $tmp1436 = (frost$core$Int64) {1};
frost$core$Object* $tmp1437 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1435, $tmp1436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1437)));
org$frostlang$frostc$Type* $tmp1438 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1437);
frost$core$Frost$unref$frost$core$Object$Q($tmp1437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
goto block9;
block9:;
// line 425
org$frostlang$frostc$Type* $tmp1439 = *(&local2);
frost$core$Bit $tmp1440 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1439);
frost$core$Bit $tmp1441 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1440);
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block15; else goto block16;
block15:;
// line 426
$fn1444 $tmp1443 = ($fn1444) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1445 = $tmp1443(param4);
frost$core$String* $tmp1446 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1447, ((frost$core$Object*) $tmp1445));
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1446, &$s1449);
frost$core$String* $tmp1450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1451, $tmp1448);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1450);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
// line 428
org$frostlang$frostc$Type* $tmp1452 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1453 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block16:;
// line 430
org$frostlang$frostc$Compiler$AutoScope* $tmp1454 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1454, param0);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
org$frostlang$frostc$Compiler$AutoScope* $tmp1455 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local3) = $tmp1454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// line 431
frost$core$Int64 $tmp1456 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1457 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1456);
org$frostlang$frostc$Type* $tmp1458 = *(&local2);
org$frostlang$frostc$Type* $tmp1459 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1458);
org$frostlang$frostc$Pair* $tmp1460 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1457, ((org$frostlang$frostc$ASTNode*) NULL), $tmp1459);
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
org$frostlang$frostc$Pair* $tmp1461 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local4) = $tmp1460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
// line 433
org$frostlang$frostc$Pair* $tmp1462 = *(&local4);
frost$core$Bit $tmp1463 = frost$core$Bit$init$builtin_bit($tmp1462 == NULL);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block17; else goto block18;
block17:;
// line 434
org$frostlang$frostc$Pair* $tmp1465 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1466 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block18:;
// line 436
org$frostlang$frostc$Pair* $tmp1469 = *(&local4);
frost$core$Object** $tmp1470 = &$tmp1469->second;
frost$core$Object* $tmp1471 = *$tmp1470;
frost$core$Bit $tmp1472 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp1471) == NULL);
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1474 = (frost$core$Int64) {436};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1475, $tmp1474);
abort(); // unreachable
block19:;
// line 437
org$frostlang$frostc$Pair* $tmp1476 = *(&local4);
frost$core$Object** $tmp1477 = &$tmp1476->first;
frost$core$Object* $tmp1478 = *$tmp1477;
org$frostlang$frostc$Type** $tmp1479 = &((org$frostlang$frostc$Variable*) $tmp1478)->type;
org$frostlang$frostc$Type* $tmp1480 = *$tmp1479;
frost$core$Bit $tmp1481 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1480);
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block21; else goto block22;
block21:;
// line 438
frost$collections$Stack** $tmp1483 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1484 = *$tmp1483;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1485 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1486 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1487 = *(&local4);
frost$core$Object** $tmp1488 = &$tmp1487->first;
frost$core$Object* $tmp1489 = *$tmp1488;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1485, $tmp1486, ((org$frostlang$frostc$Variable*) $tmp1489));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1484, ((frost$core$Object*) $tmp1485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
goto block22;
block22:;
// line 440
$fn1491 $tmp1490 = ($fn1491) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1492 = $tmp1490(param4);
frost$core$Bit $tmp1493 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1492);
bool $tmp1494 = $tmp1493.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
if ($tmp1494) goto block23; else goto block25;
block23:;
// line 441
org$frostlang$frostc$Pair* $tmp1495 = *(&local4);
frost$core$Object** $tmp1496 = &$tmp1495->first;
frost$core$Object* $tmp1497 = *$tmp1496;
org$frostlang$frostc$statement$For$compileSimpleRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1497), param4, param5);
goto block24;
block25:;
// line 1
// line 444
org$frostlang$frostc$Pair* $tmp1498 = *(&local4);
frost$core$Object** $tmp1499 = &$tmp1498->first;
frost$core$Object* $tmp1500 = *$tmp1499;
org$frostlang$frostc$statement$For$compileSteppedRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, ((org$frostlang$frostc$Variable*) $tmp1500), param4, param5);
goto block24;
block24:;
org$frostlang$frostc$Pair* $tmp1501 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1502 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Type* $tmp1503 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1504 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
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
// line 452
org$frostlang$frostc$IR** $tmp1505 = &param0->ir;
org$frostlang$frostc$IR* $tmp1506 = *$tmp1505;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
org$frostlang$frostc$IR* $tmp1507 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local0) = $tmp1506;
// line 453
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 454
frost$core$Int64* $tmp1508 = &param3->$rawValue;
frost$core$Int64 $tmp1509 = *$tmp1508;
frost$core$Int64 $tmp1510 = (frost$core$Int64) {47};
frost$core$Bit $tmp1511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1509, $tmp1510);
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1513 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1514 = *$tmp1513;
*(&local2) = $tmp1514;
frost$core$String** $tmp1515 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1516 = *$tmp1515;
org$frostlang$frostc$ASTNode** $tmp1517 = (org$frostlang$frostc$ASTNode**) (param3->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1518 = *$tmp1517;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
org$frostlang$frostc$ASTNode* $tmp1519 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local3) = $tmp1518;
// line 456
org$frostlang$frostc$Scanner** $tmp1520 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp1521 = *$tmp1520;
org$frostlang$frostc$ASTNode* $tmp1522 = *(&local3);
org$frostlang$frostc$Type* $tmp1523 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp1521, $tmp1522);
org$frostlang$frostc$Type* $tmp1524 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp1523);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
org$frostlang$frostc$Type* $tmp1525 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local4) = $tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// line 457
org$frostlang$frostc$Type* $tmp1526 = *(&local4);
org$frostlang$frostc$Type$Kind* $tmp1527 = &$tmp1526->typeKind;
org$frostlang$frostc$Type$Kind $tmp1528 = *$tmp1527;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1529;
$tmp1529 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1529->value = $tmp1528;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1531 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1530);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1532;
$tmp1532 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1532->value = $tmp1531;
ITable* $tmp1533 = ((frost$core$Equatable*) $tmp1529)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Bit $tmp1536 = $tmp1534(((frost$core$Equatable*) $tmp1529), ((frost$core$Equatable*) $tmp1532));
bool $tmp1537 = $tmp1536.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1532)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1529)));
if ($tmp1537) goto block4; else goto block5;
block4:;
// line 458
org$frostlang$frostc$Position $tmp1538 = *(&local2);
org$frostlang$frostc$Type* $tmp1539 = *(&local4);
frost$core$String* $tmp1540 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1541, ((frost$core$Object*) $tmp1539));
frost$core$String* $tmp1542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1540, &$s1543);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1538, $tmp1542);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
// line 459
org$frostlang$frostc$Type* $tmp1544 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1545 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1546 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1547 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1547));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block5:;
// line 461
org$frostlang$frostc$Type* $tmp1548 = *(&local4);
frost$core$Bit $tmp1549 = org$frostlang$frostc$Type$get_isNumeric$R$frost$core$Bit($tmp1548);
frost$core$Bit $tmp1550 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1549);
bool $tmp1551 = $tmp1550.value;
if ($tmp1551) goto block6; else goto block7;
block6:;
// line 462
org$frostlang$frostc$Position $tmp1552 = *(&local2);
org$frostlang$frostc$Type* $tmp1553 = *(&local4);
frost$core$String* $tmp1554 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1555, ((frost$core$Object*) $tmp1553));
frost$core$String* $tmp1556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1554, &$s1557);
frost$core$String* $tmp1558 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1559, $tmp1556);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1552, $tmp1558);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
// line 464
org$frostlang$frostc$Type* $tmp1560 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1561 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$IR$Value* $tmp1562 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1563 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 466
frost$core$Int64* $tmp1564 = &param4->$rawValue;
frost$core$Int64 $tmp1565 = *$tmp1564;
frost$core$Int64 $tmp1566 = (frost$core$Int64) {35};
frost$core$Bit $tmp1567 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1565, $tmp1566);
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp1569 = (org$frostlang$frostc$Position*) (param4->$data + 0);
org$frostlang$frostc$Position $tmp1570 = *$tmp1569;
org$frostlang$frostc$ASTNode** $tmp1571 = (org$frostlang$frostc$ASTNode**) (param4->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1572 = *$tmp1571;
frost$core$Bit* $tmp1573 = (frost$core$Bit*) (param4->$data + 24);
frost$core$Bit $tmp1574 = *$tmp1573;
org$frostlang$frostc$ASTNode** $tmp1575 = (org$frostlang$frostc$ASTNode**) (param4->$data + 25);
org$frostlang$frostc$ASTNode* $tmp1576 = *$tmp1575;
org$frostlang$frostc$ASTNode** $tmp1577 = (org$frostlang$frostc$ASTNode**) (param4->$data + 33);
org$frostlang$frostc$ASTNode* $tmp1578 = *$tmp1577;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local5) = $tmp1578;
// line 468
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 469
org$frostlang$frostc$ASTNode* $tmp1580 = *(&local5);
frost$core$Bit $tmp1581 = frost$core$Bit$init$builtin_bit($tmp1580 != NULL);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block11; else goto block13;
block11:;
// line 470
org$frostlang$frostc$Type* $tmp1583 = *(&local4);
org$frostlang$frostc$Type* $tmp1584 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1583);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
org$frostlang$frostc$Type* $tmp1585 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local6) = $tmp1584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
goto block12;
block13:;
// line 1
// line 473
org$frostlang$frostc$Type* $tmp1586 = *(&local4);
org$frostlang$frostc$Type* $tmp1587 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
org$frostlang$frostc$Type* $tmp1588 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
*(&local6) = $tmp1587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
goto block12;
block12:;
// line 475
org$frostlang$frostc$Compiler$TypeContext* $tmp1589 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1590 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1591 = *(&local6);
frost$core$Bit $tmp1592 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1589, $tmp1590, $tmp1591, $tmp1592);
org$frostlang$frostc$IR$Value* $tmp1593 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1589);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
org$frostlang$frostc$IR$Value* $tmp1594 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
*(&local1) = $tmp1593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
org$frostlang$frostc$Type* $tmp1595 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1596 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
// line 478
frost$core$Bit $tmp1597 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp1599 = (frost$core$Int64) {478};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1600, $tmp1599);
abort(); // unreachable
block14:;
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp1601 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp1602 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
// line 483
org$frostlang$frostc$Type* $tmp1603 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param4);
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
org$frostlang$frostc$Type* $tmp1604 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local7) = $tmp1603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
// line 484
org$frostlang$frostc$Compiler$TypeContext* $tmp1605 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1606 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1605, $tmp1606);
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
org$frostlang$frostc$Compiler$TypeContext* $tmp1607 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local8) = $tmp1605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
// line 485
org$frostlang$frostc$Type* $tmp1608 = *(&local7);
frost$core$Bit $tmp1609 = frost$core$Bit$init$builtin_bit($tmp1608 != NULL);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Type* $tmp1611 = *(&local7);
frost$core$Bit $tmp1612 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1611);
*(&local9) = $tmp1612;
goto block20;
block19:;
*(&local9) = $tmp1609;
goto block20;
block20:;
frost$core$Bit $tmp1613 = *(&local9);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block16; else goto block21;
block16:;
// line 486
org$frostlang$frostc$Compiler$TypeContext* $tmp1615 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1616 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1617 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1618 = &$tmp1617->subtypes;
org$frostlang$frostc$FixedArray* $tmp1619 = *$tmp1618;
frost$core$Int64 $tmp1620 = (frost$core$Int64) {1};
frost$core$Object* $tmp1621 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1619, $tmp1620);
org$frostlang$frostc$Type* $tmp1622 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1621));
org$frostlang$frostc$Type* $tmp1623 = org$frostlang$frostc$Type$RangeOf$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1622);
frost$core$Bit $tmp1624 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1615, $tmp1616, $tmp1623, $tmp1624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
org$frostlang$frostc$Compiler$TypeContext* $tmp1625 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local8) = $tmp1615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1622));
frost$core$Frost$unref$frost$core$Object$Q($tmp1621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1615));
goto block17;
block21:;
// line 489
org$frostlang$frostc$Type* $tmp1626 = *(&local7);
frost$core$Bit $tmp1627 = frost$core$Bit$init$builtin_bit($tmp1626 != NULL);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Type* $tmp1629 = *(&local7);
frost$core$Bit $tmp1630 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1629);
*(&local10) = $tmp1630;
goto block26;
block25:;
*(&local10) = $tmp1627;
goto block26;
block26:;
frost$core$Bit $tmp1631 = *(&local10);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block22; else goto block23;
block22:;
// line 490
org$frostlang$frostc$Compiler$TypeContext* $tmp1633 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1634 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1635 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1636 = &$tmp1635->subtypes;
org$frostlang$frostc$FixedArray* $tmp1637 = *$tmp1636;
frost$core$Int64 $tmp1638 = (frost$core$Int64) {1};
frost$core$Object* $tmp1639 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1637, $tmp1638);
org$frostlang$frostc$Type* $tmp1640 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1639));
org$frostlang$frostc$Type* $tmp1641 = *(&local7);
org$frostlang$frostc$FixedArray** $tmp1642 = &$tmp1641->subtypes;
org$frostlang$frostc$FixedArray* $tmp1643 = *$tmp1642;
frost$core$Int64 $tmp1644 = (frost$core$Int64) {2};
frost$core$Object* $tmp1645 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1643, $tmp1644);
org$frostlang$frostc$Type* $tmp1646 = org$frostlang$frostc$Type$SteppedRangeOf$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1640, ((org$frostlang$frostc$Type*) $tmp1645));
frost$core$Bit $tmp1647 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1633, $tmp1634, $tmp1646, $tmp1647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
org$frostlang$frostc$Compiler$TypeContext* $tmp1648 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local8) = $tmp1633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
frost$core$Frost$unref$frost$core$Object$Q($tmp1645);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q($tmp1639);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
goto block23;
block23:;
goto block17;
block17:;
// line 493
org$frostlang$frostc$Compiler$TypeContext* $tmp1649 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp1650 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp1649);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
org$frostlang$frostc$IR$Value* $tmp1651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local1) = $tmp1650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
org$frostlang$frostc$Compiler$TypeContext* $tmp1652 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
*(&local8) = ((org$frostlang$frostc$Compiler$TypeContext*) NULL);
org$frostlang$frostc$Type* $tmp1653 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 496
org$frostlang$frostc$IR$Value* $tmp1654 = *(&local1);
frost$core$Bit $tmp1655 = frost$core$Bit$init$builtin_bit($tmp1654 == NULL);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block27; else goto block28;
block27:;
// line 497
org$frostlang$frostc$IR$Value* $tmp1657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1658 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block28:;
// line 499
org$frostlang$frostc$IR$Value* $tmp1659 = *(&local1);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1659, param5);
org$frostlang$frostc$IR$Value* $tmp1660 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp1661 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
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
org$frostlang$frostc$IR** $tmp1662 = &param0->ir;
org$frostlang$frostc$IR* $tmp1663 = *$tmp1662;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
org$frostlang$frostc$IR* $tmp1664 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local0) = $tmp1663;
// line 507
org$frostlang$frostc$IR* $tmp1665 = *(&local0);
$fn1667 $tmp1666 = ($fn1667) $tmp1665->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1668 = $tmp1666($tmp1665, &$s1669);
*(&local1) = $tmp1668;
// line 508
org$frostlang$frostc$IR* $tmp1670 = *(&local0);
$fn1672 $tmp1671 = ($fn1672) $tmp1670->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1673 = $tmp1671($tmp1670, &$s1674);
*(&local2) = $tmp1673;
// line 509
org$frostlang$frostc$IR* $tmp1675 = *(&local0);
$fn1677 $tmp1676 = ($fn1677) $tmp1675->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1678 = $tmp1676($tmp1675, &$s1679);
*(&local3) = $tmp1678;
// line 510
org$frostlang$frostc$Compiler$AutoContext* $tmp1680 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1681 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1682 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp1683 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1684 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1681, $tmp1682, param2, $tmp1683, $tmp1684);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp1680, param0, $tmp1681);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
org$frostlang$frostc$Compiler$AutoContext* $tmp1685 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local4) = $tmp1680;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
// line 511
$fn1687 $tmp1686 = ($fn1687) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1688 = $tmp1686(param4);
org$frostlang$frostc$Type$Kind* $tmp1689 = &$tmp1688->typeKind;
org$frostlang$frostc$Type$Kind $tmp1690 = *$tmp1689;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1691;
$tmp1691 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1691->value = $tmp1690;
frost$core$Int64 $tmp1692 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1693 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1692);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1694;
$tmp1694 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1694->value = $tmp1693;
ITable* $tmp1695 = ((frost$core$Equatable*) $tmp1691)->$class->itable;
while ($tmp1695->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1695 = $tmp1695->next;
}
$fn1697 $tmp1696 = $tmp1695->methods[0];
frost$core$Bit $tmp1698 = $tmp1696(((frost$core$Equatable*) $tmp1691), ((frost$core$Equatable*) $tmp1694));
bool $tmp1699 = $tmp1698.value;
if ($tmp1699) goto block1; else goto block2;
block1:;
$fn1701 $tmp1700 = ($fn1701) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1702 = $tmp1700(param4);
org$frostlang$frostc$FixedArray** $tmp1703 = &$tmp1702->subtypes;
org$frostlang$frostc$FixedArray* $tmp1704 = *$tmp1703;
frost$core$Int64 $tmp1705 = (frost$core$Int64) {0};
frost$core$Object* $tmp1706 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1704, $tmp1705);
org$frostlang$frostc$Type* $tmp1707 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1708 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1706), $tmp1707);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q($tmp1706);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local5) = $tmp1708;
goto block3;
block2:;
*(&local5) = $tmp1698;
goto block3;
block3:;
frost$core$Bit $tmp1709 = *(&local5);
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1711 = (frost$core$Int64) {511};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1712, $tmp1711);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1694)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1691)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
// line 513
org$frostlang$frostc$IR* $tmp1713 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1714 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1715 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1716 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1714, $tmp1715, param1, $tmp1716);
$fn1718 $tmp1717 = ($fn1718) $tmp1713->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1719 = $tmp1717($tmp1713, $tmp1714);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
// line 514
org$frostlang$frostc$IR* $tmp1720 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1721 = *(&local1);
$fn1723 $tmp1722 = ($fn1723) $tmp1720->$class->vtable[4];
$tmp1722($tmp1720, $tmp1721);
// line 515
frost$collections$Array* $tmp1724 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1724);
org$frostlang$frostc$Compiler$TypeContext* $tmp1725 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1726 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1727 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1728 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1725, $tmp1726, $tmp1727, $tmp1728);
org$frostlang$frostc$IR$Value* $tmp1729 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s1730, ((frost$collections$ListView*) $tmp1724), $tmp1725);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
org$frostlang$frostc$IR$Value* $tmp1731 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local6) = $tmp1729;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
// line 517
org$frostlang$frostc$IR$Value* $tmp1732 = *(&local6);
frost$core$Bit $tmp1733 = frost$core$Bit$init$builtin_bit($tmp1732 == NULL);
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block6; else goto block7;
block6:;
// line 518
org$frostlang$frostc$IR$Value* $tmp1735 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1736 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 520
org$frostlang$frostc$IR* $tmp1738 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1739 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1740 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1741 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp1742 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp1741);
org$frostlang$frostc$IR$Block$ID $tmp1743 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp1744 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1739, $tmp1740, param1, $tmp1742, $tmp1743, $tmp1744);
$fn1746 $tmp1745 = ($fn1746) $tmp1738->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1747 = $tmp1745($tmp1738, $tmp1739);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// line 522
org$frostlang$frostc$IR* $tmp1748 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1749 = *(&local2);
$fn1751 $tmp1750 = ($fn1751) $tmp1748->$class->vtable[4];
$tmp1750($tmp1748, $tmp1749);
// line 1
// line 524
org$frostlang$frostc$Compiler$AutoScope* $tmp1752 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp1752, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
org$frostlang$frostc$Compiler$AutoScope* $tmp1753 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local7) = $tmp1752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
// line 525
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
// line 1
// line 527
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1754 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp1754, param0);
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1755 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local9) = $tmp1754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
// line 528
frost$core$Int64 $tmp1756 = (frost$core$Int64) {1};
org$frostlang$frostc$Variable$Kind $tmp1757 = org$frostlang$frostc$Variable$Kind$init$frost$core$Int64($tmp1756);
$fn1759 $tmp1758 = ($fn1759) param4->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1760 = $tmp1758(param4);
org$frostlang$frostc$FixedArray** $tmp1761 = &$tmp1760->subtypes;
org$frostlang$frostc$FixedArray* $tmp1762 = *$tmp1761;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {1};
frost$core$Object* $tmp1764 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1762, $tmp1763);
org$frostlang$frostc$Pair* $tmp1765 = org$frostlang$frostc$Compiler$compileTarget$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Variable$Kind$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$Type$Q$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Variable$Corg$frostlang$frostc$IR$Value$Q$GT$Q(param0, param3, $tmp1757, ((org$frostlang$frostc$ASTNode*) NULL), ((org$frostlang$frostc$Type*) $tmp1764));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
org$frostlang$frostc$Pair* $tmp1766 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
*(&local8) = $tmp1765;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
frost$core$Frost$unref$frost$core$Object$Q($tmp1764);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
// line 530
org$frostlang$frostc$Pair* $tmp1767 = *(&local8);
frost$core$Bit $tmp1768 = frost$core$Bit$init$builtin_bit($tmp1767 == NULL);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block8; else goto block9;
block8:;
// line 531
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1770 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$Pair* $tmp1771 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1772 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp1773 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1774 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1775 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block9:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp1776 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local9) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 534
org$frostlang$frostc$Pair* $tmp1777 = *(&local8);
frost$core$Object** $tmp1778 = &$tmp1777->first;
frost$core$Object* $tmp1779 = *$tmp1778;
org$frostlang$frostc$Type** $tmp1780 = &((org$frostlang$frostc$Variable*) $tmp1779)->type;
org$frostlang$frostc$Type* $tmp1781 = *$tmp1780;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
org$frostlang$frostc$Type* $tmp1782 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local10) = $tmp1781;
// line 535
org$frostlang$frostc$Type* $tmp1783 = *(&local10);
frost$core$Bit $tmp1784 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1783);
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block10; else goto block11;
block10:;
// line 536
frost$collections$Stack** $tmp1786 = &param0->enclosingContexts;
frost$collections$Stack* $tmp1787 = *$tmp1786;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp1788 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp1789 = (frost$core$Int64) {2};
org$frostlang$frostc$Pair* $tmp1790 = *(&local8);
frost$core$Object** $tmp1791 = &$tmp1790->first;
frost$core$Object* $tmp1792 = *$tmp1791;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable($tmp1788, $tmp1789, ((org$frostlang$frostc$Variable*) $tmp1792));
frost$collections$Stack$push$frost$collections$Stack$T($tmp1787, ((frost$core$Object*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
goto block11;
block11:;
// line 539
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 540
frost$collections$Array* $tmp1793 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1793);
org$frostlang$frostc$Compiler$TypeContext* $tmp1794 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1795 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1796 = *(&local10);
frost$core$Bit $tmp1797 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1794, $tmp1795, $tmp1796, $tmp1797);
org$frostlang$frostc$IR$Value* $tmp1798 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param4, &$s1799, ((frost$collections$ListView*) $tmp1793), $tmp1794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
org$frostlang$frostc$IR$Value* $tmp1800 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local11) = $tmp1798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
// line 542
org$frostlang$frostc$IR$Value* $tmp1801 = *(&local11);
frost$core$Bit $tmp1802 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block12; else goto block13;
block12:;
// line 543
org$frostlang$frostc$IR$Value* $tmp1804 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1805 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1806 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1807 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$IR$Value* $tmp1808 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1809 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1810 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block13:;
// line 545
org$frostlang$frostc$lvalue$VariableLValue* $tmp1811 = (org$frostlang$frostc$lvalue$VariableLValue*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$lvalue$VariableLValue$class);
org$frostlang$frostc$Pair* $tmp1812 = *(&local8);
frost$core$Object** $tmp1813 = &$tmp1812->first;
frost$core$Object* $tmp1814 = *$tmp1813;
org$frostlang$frostc$lvalue$VariableLValue$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Variable($tmp1811, param0, param1, ((org$frostlang$frostc$Variable*) $tmp1814));
org$frostlang$frostc$IR$Value* $tmp1815 = *(&local11);
$fn1817 $tmp1816 = ($fn1817) $tmp1811->$class->vtable[4];
$tmp1816($tmp1811, $tmp1815);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1811));
// line 546
ITable* $tmp1818 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp1818->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1818 = $tmp1818->next;
}
$fn1820 $tmp1819 = $tmp1818->methods[0];
frost$collections$Iterator* $tmp1821 = $tmp1819(((frost$collections$Iterable*) param5));
goto block14;
block14:;
ITable* $tmp1822 = $tmp1821->$class->itable;
while ($tmp1822->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1822 = $tmp1822->next;
}
$fn1824 $tmp1823 = $tmp1822->methods[0];
frost$core$Bit $tmp1825 = $tmp1823($tmp1821);
bool $tmp1826 = $tmp1825.value;
if ($tmp1826) goto block16; else goto block15;
block15:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1827 = $tmp1821->$class->itable;
while ($tmp1827->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1827 = $tmp1827->next;
}
$fn1829 $tmp1828 = $tmp1827->methods[1];
frost$core$Object* $tmp1830 = $tmp1828($tmp1821);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1830)));
org$frostlang$frostc$ASTNode* $tmp1831 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1830);
// line 547
org$frostlang$frostc$ASTNode* $tmp1832 = *(&local12);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp1832);
frost$core$Frost$unref$frost$core$Object$Q($tmp1830);
org$frostlang$frostc$ASTNode* $tmp1833 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
org$frostlang$frostc$IR$Value* $tmp1834 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1835 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1836 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Compiler$AutoScope* $tmp1837 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 550
org$frostlang$frostc$IR* $tmp1838 = *(&local0);
$fn1840 $tmp1839 = ($fn1840) $tmp1838->$class->vtable[5];
frost$core$Bit $tmp1841 = $tmp1839($tmp1838);
frost$core$Bit $tmp1842 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1841);
bool $tmp1843 = $tmp1842.value;
if ($tmp1843) goto block17; else goto block18;
block17:;
// line 551
org$frostlang$frostc$IR* $tmp1844 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1845 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1846 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1847 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1845, $tmp1846, param1, $tmp1847);
$fn1849 $tmp1848 = ($fn1849) $tmp1844->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1850 = $tmp1848($tmp1844, $tmp1845);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
goto block18;
block18:;
// line 553
org$frostlang$frostc$IR* $tmp1851 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1852 = *(&local3);
$fn1854 $tmp1853 = ($fn1854) $tmp1851->$class->vtable[4];
$tmp1853($tmp1851, $tmp1852);
org$frostlang$frostc$IR$Value* $tmp1855 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp1856 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
org$frostlang$frostc$IR* $tmp1857 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
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
// line 559
frost$core$Int64* $tmp1858 = &param4->$rawValue;
frost$core$Int64 $tmp1859 = *$tmp1858;
frost$core$Int64 $tmp1860 = (frost$core$Int64) {35};
frost$core$Bit $tmp1861 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1859, $tmp1860);
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block2; else goto block1;
block2:;
// line 563
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 564
return;
block1:;
// line 567
org$frostlang$frostc$IR$Value* $tmp1863 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, param4);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
org$frostlang$frostc$IR$Value* $tmp1864 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local0) = $tmp1863;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
// line 568
org$frostlang$frostc$IR$Value* $tmp1865 = *(&local0);
frost$core$Bit $tmp1866 = frost$core$Bit$init$builtin_bit($tmp1865 == NULL);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block3; else goto block4;
block3:;
// line 569
org$frostlang$frostc$IR$Value* $tmp1868 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block4:;
// line 571
org$frostlang$frostc$IR$Value* $tmp1869 = *(&local0);
$fn1871 $tmp1870 = ($fn1871) $tmp1869->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1872 = $tmp1870($tmp1869);
frost$core$Bit $tmp1873 = org$frostlang$frostc$Type$get_isRange$R$frost$core$Bit($tmp1872);
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1873;
goto block9;
block8:;
org$frostlang$frostc$IR$Value* $tmp1875 = *(&local0);
$fn1877 $tmp1876 = ($fn1877) $tmp1875->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1878 = $tmp1876($tmp1875);
frost$core$Bit $tmp1879 = org$frostlang$frostc$Type$get_isSteppedRange$R$frost$core$Bit($tmp1878);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
*(&local1) = $tmp1879;
goto block9;
block9:;
frost$core$Bit $tmp1880 = *(&local1);
bool $tmp1881 = $tmp1880.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
if ($tmp1881) goto block5; else goto block10;
block5:;
// line 573
org$frostlang$frostc$IR$Value* $tmp1882 = *(&local0);
org$frostlang$frostc$statement$For$compileRangeFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1882, param5);
goto block6;
block10:;
// line 1
// line 576
org$frostlang$frostc$IR$Value* $tmp1883 = *(&local0);
$fn1885 $tmp1884 = ($fn1885) $tmp1883->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1886 = $tmp1884($tmp1883);
frost$collections$HashSet* $tmp1887 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(param0, $tmp1886);
ITable* $tmp1888 = ((frost$collections$Iterable*) $tmp1887)->$class->itable;
while ($tmp1888->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1888 = $tmp1888->next;
}
$fn1890 $tmp1889 = $tmp1888->methods[0];
frost$collections$Iterator* $tmp1891 = $tmp1889(((frost$collections$Iterable*) $tmp1887));
goto block11;
block11:;
ITable* $tmp1892 = $tmp1891->$class->itable;
while ($tmp1892->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1892 = $tmp1892->next;
}
$fn1894 $tmp1893 = $tmp1892->methods[0];
frost$core$Bit $tmp1895 = $tmp1893($tmp1891);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block13; else goto block12;
block12:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1897 = $tmp1891->$class->itable;
while ($tmp1897->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1897 = $tmp1897->next;
}
$fn1899 $tmp1898 = $tmp1897->methods[1];
frost$core$Object* $tmp1900 = $tmp1898($tmp1891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1900)));
org$frostlang$frostc$Type* $tmp1901 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp1900);
// line 577
org$frostlang$frostc$Type* $tmp1902 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp1903 = &$tmp1902->typeKind;
org$frostlang$frostc$Type$Kind $tmp1904 = *$tmp1903;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1905;
$tmp1905 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1905->value = $tmp1904;
frost$core$Int64 $tmp1906 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1907 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1906);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1908;
$tmp1908 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1908->value = $tmp1907;
ITable* $tmp1909 = ((frost$core$Equatable*) $tmp1905)->$class->itable;
while ($tmp1909->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1909 = $tmp1909->next;
}
$fn1911 $tmp1910 = $tmp1909->methods[0];
frost$core$Bit $tmp1912 = $tmp1910(((frost$core$Equatable*) $tmp1905), ((frost$core$Equatable*) $tmp1908));
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Type* $tmp1914 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp1915 = &$tmp1914->subtypes;
org$frostlang$frostc$FixedArray* $tmp1916 = *$tmp1915;
frost$core$Int64 $tmp1917 = (frost$core$Int64) {0};
frost$core$Object* $tmp1918 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1916, $tmp1917);
org$frostlang$frostc$Type* $tmp1919 = org$frostlang$frostc$Type$Iterator$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1920 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1918), $tmp1919);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q($tmp1918);
*(&local3) = $tmp1920;
goto block18;
block17:;
*(&local3) = $tmp1912;
goto block18;
block18:;
frost$core$Bit $tmp1921 = *(&local3);
bool $tmp1922 = $tmp1921.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1908)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1905)));
if ($tmp1922) goto block14; else goto block15;
block14:;
// line 578
$fn1924 $tmp1923 = ($fn1924) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1925 = $tmp1923(param4);
org$frostlang$frostc$IR$Value* $tmp1926 = *(&local0);
org$frostlang$frostc$Type* $tmp1927 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1928 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1925, $tmp1926, $tmp1927);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$IR$Value* $tmp1929 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local4) = $tmp1928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
// line 579
org$frostlang$frostc$IR$Value* $tmp1930 = *(&local4);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1930, param5);
// line 580
org$frostlang$frostc$IR$Value* $tmp1931 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1900);
org$frostlang$frostc$Type* $tmp1932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
org$frostlang$frostc$IR$Value* $tmp1933 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block15:;
// line 582
org$frostlang$frostc$Type* $tmp1934 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp1935 = &$tmp1934->typeKind;
org$frostlang$frostc$Type$Kind $tmp1936 = *$tmp1935;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1937;
$tmp1937 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1937->value = $tmp1936;
frost$core$Int64 $tmp1938 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp1939 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1938);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1940;
$tmp1940 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1940->value = $tmp1939;
ITable* $tmp1941 = ((frost$core$Equatable*) $tmp1937)->$class->itable;
while ($tmp1941->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1941 = $tmp1941->next;
}
$fn1943 $tmp1942 = $tmp1941->methods[0];
frost$core$Bit $tmp1944 = $tmp1942(((frost$core$Equatable*) $tmp1937), ((frost$core$Equatable*) $tmp1940));
bool $tmp1945 = $tmp1944.value;
if ($tmp1945) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Type* $tmp1946 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp1947 = &$tmp1946->subtypes;
org$frostlang$frostc$FixedArray* $tmp1948 = *$tmp1947;
frost$core$Int64 $tmp1949 = (frost$core$Int64) {0};
frost$core$Object* $tmp1950 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1948, $tmp1949);
org$frostlang$frostc$Type* $tmp1951 = org$frostlang$frostc$Type$Iterable$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1952 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1950), $tmp1951);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
frost$core$Frost$unref$frost$core$Object$Q($tmp1950);
*(&local5) = $tmp1952;
goto block23;
block22:;
*(&local5) = $tmp1944;
goto block23;
block23:;
frost$core$Bit $tmp1953 = *(&local5);
bool $tmp1954 = $tmp1953.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1940)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1937)));
if ($tmp1954) goto block19; else goto block20;
block19:;
// line 583
$fn1956 $tmp1955 = ($fn1956) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1957 = $tmp1955(param4);
org$frostlang$frostc$IR$Value* $tmp1958 = *(&local0);
org$frostlang$frostc$Type* $tmp1959 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1960 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp1957, $tmp1958, $tmp1959);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
org$frostlang$frostc$IR$Value* $tmp1961 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
*(&local6) = $tmp1960;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
// line 584
org$frostlang$frostc$IR$Value* $tmp1962 = *(&local6);
frost$core$Bit $tmp1963 = frost$core$Bit$init$builtin_bit($tmp1962 == NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block24; else goto block25;
block24:;
// line 585
org$frostlang$frostc$IR$Value* $tmp1965 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1900);
org$frostlang$frostc$Type* $tmp1966 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
org$frostlang$frostc$IR$Value* $tmp1967 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block25:;
// line 587
org$frostlang$frostc$IR$Value* $tmp1968 = *(&local6);
frost$collections$Array* $tmp1969 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1969);
org$frostlang$frostc$Compiler$TypeContext* $tmp1970 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1971 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp1970, $tmp1971);
org$frostlang$frostc$IR$Value* $tmp1972 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1968, &$s1973, ((frost$collections$ListView*) $tmp1969), $tmp1970);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
org$frostlang$frostc$IR$Value* $tmp1974 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local7) = $tmp1972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
// line 589
org$frostlang$frostc$IR$Value* $tmp1975 = *(&local7);
frost$core$Bit $tmp1976 = frost$core$Bit$init$builtin_bit($tmp1975 != NULL);
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1978 = (frost$core$Int64) {589};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1979, $tmp1978);
abort(); // unreachable
block26:;
// line 590
org$frostlang$frostc$IR$Value* $tmp1980 = *(&local7);
org$frostlang$frostc$statement$For$compileIteratorFor$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT(param0, param1, param2, param3, $tmp1980, param5);
// line 591
org$frostlang$frostc$IR$Value* $tmp1981 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp1982 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1900);
org$frostlang$frostc$Type* $tmp1983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
org$frostlang$frostc$IR$Value* $tmp1984 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return;
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1900);
org$frostlang$frostc$Type* $tmp1985 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
// line 594
$fn1987 $tmp1986 = ($fn1987) param4->$class->vtable[2];
org$frostlang$frostc$Position $tmp1988 = $tmp1986(param4);
org$frostlang$frostc$IR$Value* $tmp1989 = *(&local0);
$fn1991 $tmp1990 = ($fn1991) $tmp1989->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1992 = $tmp1990($tmp1989);
frost$core$String* $tmp1993 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1994, ((frost$core$Object*) $tmp1992));
frost$core$String* $tmp1995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1993, &$s1996);
frost$core$String* $tmp1997 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1998, $tmp1995);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp1988, $tmp1997);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
goto block6;
block6:;
org$frostlang$frostc$IR$Value* $tmp1999 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
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

