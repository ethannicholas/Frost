#include "org/frostlang/frostc/Scanner.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Weak.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Char32.h"
#include "frost/core/Int32.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Annotations/Expression.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/Variable/Kind.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/io/File.h"
#include "frost/collections/MapView.h"
#include "org/frostlang/frostc/Alias.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/collections/Stack.h"
#include "frost/collections/List.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/HashMap.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/collections/Key.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"


static frost$core$String $s1;
org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Scanner$cleanup, org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type, org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64, org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q, org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q, org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String, org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT} };

typedef frost$collections$Iterator* (*$fn129)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn138)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn150)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn232)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn236)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn241)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn257)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn302)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn307)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn311)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn316)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn461)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn463)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn490)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn492)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn519)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn521)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn548)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn550)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn577)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn579)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn683)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn687)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn692)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn763)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn820)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn824)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn829)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn907)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn911)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn916)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn949)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn953)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn958)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1027)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1031)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1036)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1098)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1102)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1107)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1148)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1152)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1157)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1200)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1204)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1209)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1241)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1245)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1250)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1267)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1271)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1276)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1395)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1399)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1404)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1432)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1436)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1441)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1455)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1459)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1464)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1496)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1500)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1505)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1550)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1554)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1559)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1609)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1642)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1646)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1651)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn1696)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1710)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1714)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1719)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1760)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1791)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2059)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2063)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2068)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2081)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2097)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2136)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2140)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2145)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2190)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2208)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2214)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2218)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2223)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2254)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2301)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2305)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2310)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2344)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2371)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2375)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2380)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2392)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2407)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2420)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2434)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2444)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2478)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2487)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2498)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2531)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2540)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2553)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2557)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2562)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2570)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2616)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2620)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2625)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2637)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2667)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2754)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2758)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2763)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2893)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2925)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2929)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2934)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3123)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3138)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3174)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3228)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 28, 5772521929446391734, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static frost$core$String $s1525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1768 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1812 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2031 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2054 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s2911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s2913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2915 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s3008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3186 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };

void org$frostlang$frostc$Scanner$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Compiler* param1) {

// line 21
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->compiler;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->compiler;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$Position local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Position local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$Position local5;
frost$core$String* local6 = NULL;
org$frostlang$frostc$FixedArray* local7 = NULL;
frost$collections$Array* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Position local12;
org$frostlang$frostc$parser$Token$Kind local13;
org$frostlang$frostc$FixedArray* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Type$Kind local16;
frost$collections$Array* local17 = NULL;
org$frostlang$frostc$ASTNode* local18 = NULL;
org$frostlang$frostc$Type* local19 = NULL;
// line 25
frost$core$Int64* $tmp6 = &param1->$rawValue;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {45};
frost$core$Bit $tmp9 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp8);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp11 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp12 = *$tmp11;
*(&local0) = $tmp12;
frost$core$String** $tmp13 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp14 = *$tmp13;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp14;
// line 27
frost$core$String* $tmp16 = *(&local1);
frost$core$Int64 $tmp17 = (frost$core$Int64) {0};
frost$core$Char32 $tmp18 = frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32($tmp16, $tmp17);
frost$core$Int32 $tmp19 = (frost$core$Int32) {98};
frost$core$Char32 $tmp20 = frost$core$Char32$init$frost$core$Int32($tmp19);
frost$core$Bit $tmp21 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp18, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block4; else goto block5;
block4:;
// line 28
frost$core$String* $tmp23 = *(&local1);
frost$core$Bit $tmp24 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s25);
bool $tmp26 = $tmp24.value;
if ($tmp26) goto block7; else goto block8;
block7:;
// line 29
org$frostlang$frostc$Type* $tmp27 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$String* $tmp28 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local1) = ((frost$core$String*) NULL);
return $tmp27;
block8:;
frost$core$Bit $tmp29 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s30);
bool $tmp31 = $tmp29.value;
if ($tmp31) goto block9; else goto block10;
block9:;
// line 30
org$frostlang$frostc$Type* $tmp32 = org$frostlang$frostc$Type$BuiltinInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$String* $tmp33 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local1) = ((frost$core$String*) NULL);
return $tmp32;
block10:;
frost$core$Bit $tmp34 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s35);
bool $tmp36 = $tmp34.value;
if ($tmp36) goto block11; else goto block12;
block11:;
// line 31
org$frostlang$frostc$Type* $tmp37 = org$frostlang$frostc$Type$BuiltinInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$String* $tmp38 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local1) = ((frost$core$String*) NULL);
return $tmp37;
block12:;
frost$core$Bit $tmp39 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s40);
bool $tmp41 = $tmp39.value;
if ($tmp41) goto block13; else goto block14;
block13:;
// line 32
org$frostlang$frostc$Type* $tmp42 = org$frostlang$frostc$Type$BuiltinInt32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$String* $tmp43 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local1) = ((frost$core$String*) NULL);
return $tmp42;
block14:;
frost$core$Bit $tmp44 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s45);
bool $tmp46 = $tmp44.value;
if ($tmp46) goto block15; else goto block16;
block15:;
// line 33
org$frostlang$frostc$Type* $tmp47 = org$frostlang$frostc$Type$BuiltinInt64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$String* $tmp48 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
*(&local1) = ((frost$core$String*) NULL);
return $tmp47;
block16:;
frost$core$Bit $tmp49 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s50);
bool $tmp51 = $tmp49.value;
if ($tmp51) goto block17; else goto block18;
block17:;
// line 34
org$frostlang$frostc$Type* $tmp52 = org$frostlang$frostc$Type$BuiltinUInt8$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$String* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local1) = ((frost$core$String*) NULL);
return $tmp52;
block18:;
frost$core$Bit $tmp54 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s55);
bool $tmp56 = $tmp54.value;
if ($tmp56) goto block19; else goto block20;
block19:;
// line 35
org$frostlang$frostc$Type* $tmp57 = org$frostlang$frostc$Type$BuiltinUInt16$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$String* $tmp58 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local1) = ((frost$core$String*) NULL);
return $tmp57;
block20:;
frost$core$Bit $tmp59 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s60);
bool $tmp61 = $tmp59.value;
if ($tmp61) goto block21; else goto block22;
block21:;
// line 36
org$frostlang$frostc$Type* $tmp62 = org$frostlang$frostc$Type$BuiltinUInt32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$core$String* $tmp63 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local1) = ((frost$core$String*) NULL);
return $tmp62;
block22:;
frost$core$Bit $tmp64 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s65);
bool $tmp66 = $tmp64.value;
if ($tmp66) goto block23; else goto block24;
block23:;
// line 37
org$frostlang$frostc$Type* $tmp67 = org$frostlang$frostc$Type$BuiltinUInt64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$String* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local1) = ((frost$core$String*) NULL);
return $tmp67;
block24:;
frost$core$Bit $tmp69 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s70);
bool $tmp71 = $tmp69.value;
if ($tmp71) goto block25; else goto block26;
block25:;
// line 38
org$frostlang$frostc$Type* $tmp72 = org$frostlang$frostc$Type$BuiltinFloat32$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$String* $tmp73 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local1) = ((frost$core$String*) NULL);
return $tmp72;
block26:;
frost$core$Bit $tmp74 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp23, &$s75);
bool $tmp76 = $tmp74.value;
if ($tmp76) goto block27; else goto block6;
block27:;
// line 39
org$frostlang$frostc$Type* $tmp77 = org$frostlang$frostc$Type$BuiltinFloat64$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
frost$core$String* $tmp78 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local1) = ((frost$core$String*) NULL);
return $tmp77;
block6:;
goto block5;
block5:;
// line 42
org$frostlang$frostc$Type* $tmp79 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp80 = *(&local1);
frost$core$Int64 $tmp81 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp82 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp81);
org$frostlang$frostc$Position $tmp83 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp79, $tmp80, $tmp82, $tmp83);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$String* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local1) = ((frost$core$String*) NULL);
return $tmp79;
block3:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {32};
frost$core$Bit $tmp86 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp88 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp89 = *$tmp88;
*(&local2) = $tmp89;
org$frostlang$frostc$ASTNode** $tmp90 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp91 = *$tmp90;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
org$frostlang$frostc$ASTNode* $tmp92 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local3) = $tmp91;
// line 45
frost$collections$Array* $tmp93 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp94 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp93, $tmp94);
org$frostlang$frostc$ASTNode* $tmp95 = *(&local3);
org$frostlang$frostc$Type* $tmp96 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp95);
frost$collections$Array$add$frost$collections$Array$T($tmp93, ((frost$core$Object*) $tmp96));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$Array* $tmp97 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local4) = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// line 46
org$frostlang$frostc$Type* $tmp98 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$collections$Array* $tmp99 = *(&local4);
frost$core$Int64 $tmp100 = (frost$core$Int64) {0};
frost$core$Object* $tmp101 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp99, $tmp100);
frost$core$String** $tmp102 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp101))->name;
frost$core$String* $tmp103 = *$tmp102;
frost$core$String* $tmp104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp103, &$s105);
frost$core$Int64 $tmp106 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp107 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp106);
org$frostlang$frostc$Position $tmp108 = *(&local2);
frost$collections$Array* $tmp109 = *(&local4);
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp98, $tmp104, $tmp107, $tmp108, ((frost$collections$ListView*) $tmp109), $tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$collections$Array* $tmp111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp98;
block29:;
frost$core$Int64 $tmp113 = (frost$core$Int64) {21};
frost$core$Bit $tmp114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp113);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp116 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp117 = *$tmp116;
*(&local5) = $tmp117;
frost$core$String** $tmp118 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp119 = *$tmp118;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$String* $tmp120 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local6) = $tmp119;
org$frostlang$frostc$FixedArray** $tmp121 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp122 = *$tmp121;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$FixedArray* $tmp123 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local7) = $tmp122;
// line 49
frost$collections$Array* $tmp124 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp124);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$collections$Array* $tmp125 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local8) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// line 50
org$frostlang$frostc$FixedArray* $tmp126 = *(&local7);
ITable* $tmp127 = ((frost$collections$Iterable*) $tmp126)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[0];
frost$collections$Iterator* $tmp130 = $tmp128(((frost$collections$Iterable*) $tmp126));
goto block32;
block32:;
ITable* $tmp131 = $tmp130->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[0];
frost$core$Bit $tmp134 = $tmp132($tmp130);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block34; else goto block33;
block33:;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp136 = $tmp130->$class->itable;
while ($tmp136->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[1];
frost$core$Object* $tmp139 = $tmp137($tmp130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp139)));
org$frostlang$frostc$ASTNode* $tmp140 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local9) = ((org$frostlang$frostc$ASTNode*) $tmp139);
// line 51
frost$collections$Array* $tmp141 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp142 = *(&local9);
org$frostlang$frostc$Type* $tmp143 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp142);
frost$collections$Array$add$frost$collections$Array$T($tmp141, ((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
org$frostlang$frostc$ASTNode* $tmp144 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block32;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// line 53
org$frostlang$frostc$Type* $tmp145 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp146 = *(&local6);
frost$core$Int64 $tmp147 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp148 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp147);
$fn150 $tmp149 = ($fn150) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp151 = $tmp149(param1);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp145, $tmp146, $tmp148, $tmp151);
frost$collections$Array* $tmp152 = *(&local8);
org$frostlang$frostc$Type* $tmp153 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp145, ((frost$collections$ListView*) $tmp152));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$collections$Array* $tmp154 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp155 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp156 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local6) = ((frost$core$String*) NULL);
return $tmp153;
block31:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {26};
frost$core$Bit $tmp158 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp157);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp160 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp161 = *$tmp160;
org$frostlang$frostc$IR$Value** $tmp162 = (org$frostlang$frostc$IR$Value**) (param1->$data + 16);
org$frostlang$frostc$IR$Value* $tmp163 = *$tmp162;
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$IR$Value* $tmp164 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local10) = $tmp163;
// line 56
org$frostlang$frostc$IR$Value* $tmp165 = *(&local10);
frost$core$Int64* $tmp166 = &$tmp165->$rawValue;
frost$core$Int64 $tmp167 = *$tmp166;
frost$core$Int64 $tmp168 = (frost$core$Int64) {14};
frost$core$Bit $tmp169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp167, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block38; else goto block37;
block38:;
org$frostlang$frostc$Type** $tmp171 = (org$frostlang$frostc$Type**) ($tmp165->$data + 0);
org$frostlang$frostc$Type* $tmp172 = *$tmp171;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$Type* $tmp173 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local11) = $tmp172;
// line 58
org$frostlang$frostc$Type* $tmp174 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
org$frostlang$frostc$Type* $tmp175 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp176 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp174;
block37:;
// line 61
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit(false);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {61};
org$frostlang$frostc$IR$Value* $tmp180 = *(&local10);
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s182, ((frost$core$Object*) $tmp180));
frost$core$String* $tmp183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp181, &$s184);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s185, $tmp179, $tmp183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
abort(); // unreachable
block39:;
org$frostlang$frostc$IR$Value* $tmp186 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int64 $tmp187 = (frost$core$Int64) {30};
frost$core$Bit $tmp188 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp187);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp190 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp191 = *$tmp190;
*(&local12) = $tmp191;
org$frostlang$frostc$parser$Token$Kind* $tmp192 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp193 = *$tmp192;
*(&local13) = $tmp193;
org$frostlang$frostc$FixedArray** $tmp194 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp195 = *$tmp194;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
org$frostlang$frostc$FixedArray* $tmp196 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local14) = $tmp195;
org$frostlang$frostc$ASTNode** $tmp197 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp198 = *$tmp197;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
org$frostlang$frostc$ASTNode* $tmp199 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local15) = $tmp198;
// line 64
// line 65
org$frostlang$frostc$parser$Token$Kind $tmp200 = *(&local13);
frost$core$Int64 $tmp201 = $tmp200.$rawValue;
frost$core$Int64 $tmp202 = (frost$core$Int64) {94};
frost$core$Bit $tmp203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp201, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block44; else goto block45;
block44:;
// line 67
frost$core$Int64 $tmp205 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp206 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp205);
*(&local16) = $tmp206;
goto block43;
block45:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {95};
frost$core$Bit $tmp208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp201, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block46; else goto block47;
block46:;
// line 70
frost$core$Int64 $tmp210 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp211 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp210);
*(&local16) = $tmp211;
goto block43;
block47:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {96};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp201, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block48; else goto block49;
block48:;
// line 73
frost$core$Int64 $tmp215 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp216 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp215);
*(&local16) = $tmp216;
goto block43;
block49:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {97};
frost$core$Bit $tmp218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp201, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block50; else goto block51;
block50:;
// line 76
frost$core$Int64 $tmp220 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp221 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp220);
*(&local16) = $tmp221;
goto block43;
block51:;
// line 79
frost$core$Bit $tmp222 = frost$core$Bit$init$builtin_bit(false);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block52; else goto block53;
block53:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s225, $tmp224, &$s226);
abort(); // unreachable
block52:;
goto block43;
block43:;
// line 82
frost$collections$Array* $tmp227 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp227);
*(&local17) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$collections$Array* $tmp228 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local17) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// line 83
org$frostlang$frostc$FixedArray* $tmp229 = *(&local14);
ITable* $tmp230 = ((frost$collections$Iterable*) $tmp229)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$collections$Iterator* $tmp233 = $tmp231(((frost$collections$Iterable*) $tmp229));
goto block54;
block54:;
ITable* $tmp234 = $tmp233->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235($tmp233);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block56; else goto block55;
block55:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp239 = $tmp233->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
frost$core$Object* $tmp242 = $tmp240($tmp233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp242)));
org$frostlang$frostc$ASTNode* $tmp243 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp242);
// line 84
frost$collections$Array* $tmp244 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp245 = *(&local18);
org$frostlang$frostc$Type* $tmp246 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp245);
frost$collections$Array$add$frost$collections$Array$T($tmp244, ((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
org$frostlang$frostc$ASTNode* $tmp247 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// line 86
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
// line 87
org$frostlang$frostc$ASTNode* $tmp248 = *(&local15);
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block57; else goto block59;
block57:;
// line 88
org$frostlang$frostc$ASTNode* $tmp251 = *(&local15);
org$frostlang$frostc$Type* $tmp252 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
org$frostlang$frostc$Type* $tmp253 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local19) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
goto block58;
block59:;
// line 1
// line 91
org$frostlang$frostc$Type* $tmp254 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
org$frostlang$frostc$Type* $tmp255 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local19) = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
goto block58;
block58:;
// line 93
$fn257 $tmp256 = ($fn257) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp258 = $tmp256(param1);
org$frostlang$frostc$Type$Kind $tmp259 = *(&local16);
frost$collections$Array* $tmp260 = *(&local17);
org$frostlang$frostc$FixedArray* $tmp261 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp260);
org$frostlang$frostc$Type* $tmp262 = *(&local19);
frost$core$Int64 $tmp263 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp264 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp258, $tmp259, ((frost$collections$ListView*) $tmp261), $tmp262, $tmp263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
org$frostlang$frostc$Type* $tmp265 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp266 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp267 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp268 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp264;
block42:;
// line 97
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit(false);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp271 = (frost$core$Int64) {97};
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s273, ((frost$core$Object*) param1));
frost$core$String* $tmp274 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp272, &$s275);
frost$core$Int64* $tmp276 = &param1->$rawValue;
frost$core$Int64 $tmp277 = *$tmp276;
frost$core$Int64$wrapper* $tmp278;
$tmp278 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp278->value = $tmp277;
frost$core$String* $tmp279 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp274, ((frost$core$Object*) $tmp278));
frost$core$String* $tmp280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp279, &$s281);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s282, $tmp271, $tmp280);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
abort(); // unreachable
block60:;
goto block1;
block1:;
// line 100
goto block62;
block62:;
goto block62;
block63:;
goto block64;
block64:;

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// line 104
frost$core$Int64 $tmp283 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param2, param3);
frost$core$Int64 $tmp284 = (frost$core$Int64) {0};
int64_t $tmp285 = $tmp283.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 != $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block1; else goto block2;
block1:;
// line 105
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s290);
goto block2;
block2:;
// line 107
frost$core$Int64 $tmp291 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(param2, param3);
return $tmp291;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 114
frost$core$Bit $tmp292 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block1; else goto block2;
block1:;
// line 115
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit(true);
return $tmp294;
block2:;
// line 117
frost$core$String* $tmp295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s296, param2);
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp295, &$s298);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp297);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// line 118
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit(false);
return $tmp299;

}
org$frostlang$frostc$Annotations* org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int64 local0;
frost$collections$Array* local1 = NULL;
frost$core$Method* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Position local4;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlang$frostc$ASTNode* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$Bit local9;
frost$core$Bit local10;
frost$core$Bit local11;
frost$core$Bit local12;
frost$core$Bit local13;
// line 111
frost$core$Int64 $tmp300 = (frost$core$Int64) {0};
*(&local0) = $tmp300;
// line 112
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp301 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
*(&local1) = ((frost$collections$Array*) NULL);
// line 113
frost$core$Method* $tmp303 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp303, ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
// line 113
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Method* $tmp304 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local2) = $tmp303;
// line 120
ITable* $tmp305 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp305 = $tmp305->next;
}
$fn307 $tmp306 = $tmp305->methods[0];
frost$collections$Iterator* $tmp308 = $tmp306(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp309 = $tmp308->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[0];
frost$core$Bit $tmp312 = $tmp310($tmp308);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp314 = $tmp308->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[1];
frost$core$Object* $tmp317 = $tmp315($tmp308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp317)));
org$frostlang$frostc$ASTNode* $tmp318 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp317);
// line 121
org$frostlang$frostc$ASTNode* $tmp319 = *(&local3);
frost$core$Int64* $tmp320 = &$tmp319->$rawValue;
frost$core$Int64 $tmp321 = *$tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {0};
frost$core$Bit $tmp323 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp321, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp325 = (org$frostlang$frostc$Position*) ($tmp319->$data + 0);
org$frostlang$frostc$Position $tmp326 = *$tmp325;
*(&local4) = $tmp326;
frost$core$String** $tmp327 = (frost$core$String**) ($tmp319->$data + 16);
frost$core$String* $tmp328 = *$tmp327;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$String* $tmp329 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local5) = $tmp328;
frost$core$String** $tmp330 = (frost$core$String**) ($tmp319->$data + 24);
frost$core$String* $tmp331 = *$tmp330;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$String* $tmp332 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local6) = $tmp331;
org$frostlang$frostc$ASTNode** $tmp333 = (org$frostlang$frostc$ASTNode**) ($tmp319->$data + 32);
org$frostlang$frostc$ASTNode* $tmp334 = *$tmp333;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
org$frostlang$frostc$ASTNode* $tmp335 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local7) = $tmp334;
// line 123
org$frostlang$frostc$ASTNode* $tmp336 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
org$frostlang$frostc$ASTNode* $tmp337 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local8) = $tmp336;
// line 124
frost$core$String* $tmp338 = *(&local5);
frost$core$Bit $tmp339 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s340);
bool $tmp341 = $tmp339.value;
if ($tmp341) goto block8; else goto block9;
block8:;
// line 126
org$frostlang$frostc$Position $tmp342 = *(&local4);
frost$core$Int64 $tmp343 = *(&local0);
frost$core$Int64 $tmp344 = (frost$core$Int64) {2};
frost$core$Int64 $tmp345 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp342, $tmp343, $tmp344);
*(&local0) = $tmp345;
goto block7;
block9:;
frost$core$Bit $tmp346 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s347);
bool $tmp348 = $tmp346.value;
if ($tmp348) goto block10; else goto block11;
block10:;
// line 129
org$frostlang$frostc$Position $tmp349 = *(&local4);
frost$core$Int64 $tmp350 = *(&local0);
frost$core$Int64 $tmp351 = (frost$core$Int64) {4};
frost$core$Int64 $tmp352 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp349, $tmp350, $tmp351);
*(&local0) = $tmp352;
goto block7;
block11:;
frost$core$Bit $tmp353 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s354);
bool $tmp355 = $tmp353.value;
if ($tmp355) goto block12; else goto block13;
block12:;
// line 132
org$frostlang$frostc$Position $tmp356 = *(&local4);
frost$core$Int64 $tmp357 = *(&local0);
frost$core$Int64 $tmp358 = (frost$core$Int64) {8};
frost$core$Int64 $tmp359 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp356, $tmp357, $tmp358);
*(&local0) = $tmp359;
goto block7;
block13:;
frost$core$Bit $tmp360 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s361);
bool $tmp362 = $tmp360.value;
if ($tmp362) goto block14; else goto block15;
block14:;
// line 135
org$frostlang$frostc$Position $tmp363 = *(&local4);
frost$core$Int64 $tmp364 = *(&local0);
frost$core$Int64 $tmp365 = (frost$core$Int64) {16};
frost$core$Int64 $tmp366 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp363, $tmp364, $tmp365);
*(&local0) = $tmp366;
goto block7;
block15:;
frost$core$Bit $tmp367 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s368);
bool $tmp369 = $tmp367.value;
if ($tmp369) goto block16; else goto block17;
block16:;
// line 138
org$frostlang$frostc$Position $tmp370 = *(&local4);
frost$core$Int64 $tmp371 = *(&local0);
frost$core$Int64 $tmp372 = (frost$core$Int64) {32};
frost$core$Int64 $tmp373 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp370, $tmp371, $tmp372);
*(&local0) = $tmp373;
goto block7;
block17:;
frost$core$Bit $tmp374 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s375);
bool $tmp376 = $tmp374.value;
if ($tmp376) goto block18; else goto block19;
block18:;
// line 141
org$frostlang$frostc$Position $tmp377 = *(&local4);
frost$core$Int64 $tmp378 = *(&local0);
frost$core$Int64 $tmp379 = (frost$core$Int64) {64};
frost$core$Int64 $tmp380 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp377, $tmp378, $tmp379);
*(&local0) = $tmp380;
goto block7;
block19:;
frost$core$Bit $tmp381 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s382);
bool $tmp383 = $tmp381.value;
if ($tmp383) goto block20; else goto block21;
block20:;
// line 144
org$frostlang$frostc$Position $tmp384 = *(&local4);
frost$core$Int64 $tmp385 = *(&local0);
frost$core$Int64 $tmp386 = (frost$core$Int64) {128};
frost$core$Int64 $tmp387 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp384, $tmp385, $tmp386);
*(&local0) = $tmp387;
goto block7;
block21:;
frost$core$Bit $tmp388 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s389);
bool $tmp390 = $tmp388.value;
if ($tmp390) goto block22; else goto block23;
block22:;
// line 147
org$frostlang$frostc$Position $tmp391 = *(&local4);
frost$core$Int64 $tmp392 = *(&local0);
frost$core$Int64 $tmp393 = (frost$core$Int64) {256};
frost$core$Int64 $tmp394 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp391, $tmp392, $tmp393);
*(&local0) = $tmp394;
goto block7;
block23:;
frost$core$Bit $tmp395 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s396);
bool $tmp397 = $tmp395.value;
if ($tmp397) goto block24; else goto block25;
block24:;
// line 150
org$frostlang$frostc$Position $tmp398 = *(&local4);
frost$core$Int64 $tmp399 = *(&local0);
frost$core$Int64 $tmp400 = (frost$core$Int64) {512};
frost$core$Int64 $tmp401 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp398, $tmp399, $tmp400);
*(&local0) = $tmp401;
goto block7;
block25:;
frost$core$Bit $tmp402 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s403);
bool $tmp404 = $tmp402.value;
if ($tmp404) goto block26; else goto block27;
block26:;
// line 153
org$frostlang$frostc$Position $tmp405 = *(&local4);
frost$core$Int64 $tmp406 = *(&local0);
frost$core$Int64 $tmp407 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp408 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp405, $tmp406, $tmp407);
*(&local0) = $tmp408;
goto block7;
block27:;
frost$core$Bit $tmp409 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s410);
bool $tmp411 = $tmp409.value;
if ($tmp411) goto block28; else goto block29;
block28:;
// line 156
org$frostlang$frostc$Position $tmp412 = *(&local4);
frost$core$Int64 $tmp413 = *(&local0);
frost$core$Int64 $tmp414 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp415 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp412, $tmp413, $tmp414);
*(&local0) = $tmp415;
goto block7;
block29:;
frost$core$Bit $tmp416 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s417);
bool $tmp418 = $tmp416.value;
if ($tmp418) goto block30; else goto block31;
block30:;
// line 159
org$frostlang$frostc$Position $tmp419 = *(&local4);
frost$core$Int64 $tmp420 = *(&local0);
frost$core$Int64 $tmp421 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp422 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp419, $tmp420, $tmp421);
*(&local0) = $tmp422;
goto block7;
block31:;
frost$core$Bit $tmp423 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s424);
bool $tmp425 = $tmp423.value;
if ($tmp425) goto block32; else goto block33;
block32:;
// line 162
org$frostlang$frostc$Position $tmp426 = *(&local4);
frost$core$Int64 $tmp427 = *(&local0);
frost$core$Int64 $tmp428 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp429 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp426, $tmp427, $tmp428);
*(&local0) = $tmp429;
goto block7;
block33:;
frost$core$Bit $tmp430 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s431);
bool $tmp432 = $tmp430.value;
if ($tmp432) goto block34; else goto block35;
block34:;
// line 165
org$frostlang$frostc$Position $tmp433 = *(&local4);
frost$core$Int64 $tmp434 = *(&local0);
frost$core$Int64 $tmp435 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp436 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp433, $tmp434, $tmp435);
*(&local0) = $tmp436;
goto block7;
block35:;
frost$core$Bit $tmp437 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s438);
bool $tmp439 = $tmp437.value;
if ($tmp439) goto block36; else goto block37;
block36:;
// line 168
org$frostlang$frostc$Position $tmp440 = *(&local4);
frost$core$Int64 $tmp441 = *(&local0);
frost$core$Int64 $tmp442 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp443 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp440, $tmp441, $tmp442);
*(&local0) = $tmp443;
goto block7;
block37:;
frost$core$Bit $tmp444 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s445);
bool $tmp446 = $tmp444.value;
if ($tmp446) goto block38; else goto block39;
block38:;
// line 171
frost$collections$Array* $tmp447 = *(&local1);
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit($tmp447 == NULL);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block40; else goto block41;
block40:;
// line 172
frost$collections$Array* $tmp450 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$collections$Array* $tmp451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local1) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
goto block41;
block41:;
// line 174
frost$core$Method* $tmp452 = *(&local2);
org$frostlang$frostc$Position $tmp453 = *(&local4);
frost$core$String* $tmp454 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp455 = *(&local8);
frost$core$Int8** $tmp456 = &$tmp452->pointer;
frost$core$Int8* $tmp457 = *$tmp456;
frost$core$Immutable** $tmp458 = &$tmp452->target;
frost$core$Immutable* $tmp459 = *$tmp458;
bool $tmp460 = $tmp459 != ((frost$core$Immutable*) NULL);
if ($tmp460) goto block44; else goto block45;
block45:;
frost$core$Bit $tmp462 = (($fn461) $tmp457)(param0, $tmp453, $tmp454, $tmp455);
*(&local9) = $tmp462;
goto block46;
block44:;
frost$core$Bit $tmp464 = (($fn463) $tmp457)($tmp459, param0, $tmp453, $tmp454, $tmp455);
*(&local9) = $tmp464;
goto block46;
block46:;
frost$core$Bit $tmp465 = *(&local9);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block42; else goto block43;
block42:;
// line 175
frost$collections$Array* $tmp467 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp468 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp469 = (frost$core$Int64) {0};
frost$core$String* $tmp470 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp471 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp468, $tmp469, $tmp470, $tmp471);
frost$collections$Array$add$frost$collections$Array$T($tmp467, ((frost$core$Object*) $tmp468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp472 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block43:;
goto block7;
block39:;
frost$core$Bit $tmp473 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s474);
bool $tmp475 = $tmp473.value;
if ($tmp475) goto block47; else goto block48;
block47:;
// line 180
frost$collections$Array* $tmp476 = *(&local1);
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit($tmp476 == NULL);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block49; else goto block50;
block49:;
// line 181
frost$collections$Array* $tmp479 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$collections$Array* $tmp480 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local1) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
goto block50;
block50:;
// line 183
frost$core$Method* $tmp481 = *(&local2);
org$frostlang$frostc$Position $tmp482 = *(&local4);
frost$core$String* $tmp483 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp484 = *(&local8);
frost$core$Int8** $tmp485 = &$tmp481->pointer;
frost$core$Int8* $tmp486 = *$tmp485;
frost$core$Immutable** $tmp487 = &$tmp481->target;
frost$core$Immutable* $tmp488 = *$tmp487;
bool $tmp489 = $tmp488 != ((frost$core$Immutable*) NULL);
if ($tmp489) goto block53; else goto block54;
block54:;
frost$core$Bit $tmp491 = (($fn490) $tmp486)(param0, $tmp482, $tmp483, $tmp484);
*(&local10) = $tmp491;
goto block55;
block53:;
frost$core$Bit $tmp493 = (($fn492) $tmp486)($tmp488, param0, $tmp482, $tmp483, $tmp484);
*(&local10) = $tmp493;
goto block55;
block55:;
frost$core$Bit $tmp494 = *(&local10);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block51; else goto block52;
block51:;
// line 184
frost$collections$Array* $tmp496 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp497 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp498 = (frost$core$Int64) {1};
frost$core$String* $tmp499 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp500 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp497, $tmp498, $tmp499, $tmp500);
frost$collections$Array$add$frost$collections$Array$T($tmp496, ((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp501 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block52:;
goto block7;
block48:;
frost$core$Bit $tmp502 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s503);
bool $tmp504 = $tmp502.value;
if ($tmp504) goto block56; else goto block57;
block56:;
// line 189
frost$collections$Array* $tmp505 = *(&local1);
frost$core$Bit $tmp506 = frost$core$Bit$init$builtin_bit($tmp505 == NULL);
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block58; else goto block59;
block58:;
// line 190
frost$collections$Array* $tmp508 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$collections$Array* $tmp509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local1) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
goto block59;
block59:;
// line 192
frost$core$Method* $tmp510 = *(&local2);
org$frostlang$frostc$Position $tmp511 = *(&local4);
frost$core$String* $tmp512 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp513 = *(&local8);
frost$core$Int8** $tmp514 = &$tmp510->pointer;
frost$core$Int8* $tmp515 = *$tmp514;
frost$core$Immutable** $tmp516 = &$tmp510->target;
frost$core$Immutable* $tmp517 = *$tmp516;
bool $tmp518 = $tmp517 != ((frost$core$Immutable*) NULL);
if ($tmp518) goto block62; else goto block63;
block63:;
frost$core$Bit $tmp520 = (($fn519) $tmp515)(param0, $tmp511, $tmp512, $tmp513);
*(&local11) = $tmp520;
goto block64;
block62:;
frost$core$Bit $tmp522 = (($fn521) $tmp515)($tmp517, param0, $tmp511, $tmp512, $tmp513);
*(&local11) = $tmp522;
goto block64;
block64:;
frost$core$Bit $tmp523 = *(&local11);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block60; else goto block61;
block60:;
// line 193
frost$collections$Array* $tmp525 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp526 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp527 = (frost$core$Int64) {2};
frost$core$String* $tmp528 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp529 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp526, $tmp527, $tmp528, $tmp529);
frost$collections$Array$add$frost$collections$Array$T($tmp525, ((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
// line 194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp530 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block61;
block61:;
goto block7;
block57:;
frost$core$Bit $tmp531 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block65; else goto block66;
block65:;
// line 198
frost$collections$Array* $tmp534 = *(&local1);
frost$core$Bit $tmp535 = frost$core$Bit$init$builtin_bit($tmp534 == NULL);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block67; else goto block68;
block67:;
// line 199
frost$collections$Array* $tmp537 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp537);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
frost$collections$Array* $tmp538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local1) = $tmp537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
goto block68;
block68:;
// line 201
frost$core$Method* $tmp539 = *(&local2);
org$frostlang$frostc$Position $tmp540 = *(&local4);
frost$core$String* $tmp541 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp542 = *(&local8);
frost$core$Int8** $tmp543 = &$tmp539->pointer;
frost$core$Int8* $tmp544 = *$tmp543;
frost$core$Immutable** $tmp545 = &$tmp539->target;
frost$core$Immutable* $tmp546 = *$tmp545;
bool $tmp547 = $tmp546 != ((frost$core$Immutable*) NULL);
if ($tmp547) goto block71; else goto block72;
block72:;
frost$core$Bit $tmp549 = (($fn548) $tmp544)(param0, $tmp540, $tmp541, $tmp542);
*(&local12) = $tmp549;
goto block73;
block71:;
frost$core$Bit $tmp551 = (($fn550) $tmp544)($tmp546, param0, $tmp540, $tmp541, $tmp542);
*(&local12) = $tmp551;
goto block73;
block73:;
frost$core$Bit $tmp552 = *(&local12);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block69; else goto block70;
block69:;
// line 202
frost$collections$Array* $tmp554 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp555 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp556 = (frost$core$Int64) {3};
frost$core$String* $tmp557 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp558 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp555, $tmp556, $tmp557, $tmp558);
frost$collections$Array$add$frost$collections$Array$T($tmp554, ((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// line 203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp559 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block70:;
goto block7;
block66:;
frost$core$Bit $tmp560 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp338, &$s561);
bool $tmp562 = $tmp560.value;
if ($tmp562) goto block74; else goto block75;
block74:;
// line 207
frost$collections$Array* $tmp563 = *(&local1);
frost$core$Bit $tmp564 = frost$core$Bit$init$builtin_bit($tmp563 == NULL);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block76; else goto block77;
block76:;
// line 208
frost$collections$Array* $tmp566 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$collections$Array* $tmp567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local1) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
goto block77;
block77:;
// line 210
frost$core$Method* $tmp568 = *(&local2);
org$frostlang$frostc$Position $tmp569 = *(&local4);
frost$core$String* $tmp570 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp571 = *(&local8);
frost$core$Int8** $tmp572 = &$tmp568->pointer;
frost$core$Int8* $tmp573 = *$tmp572;
frost$core$Immutable** $tmp574 = &$tmp568->target;
frost$core$Immutable* $tmp575 = *$tmp574;
bool $tmp576 = $tmp575 != ((frost$core$Immutable*) NULL);
if ($tmp576) goto block80; else goto block81;
block81:;
frost$core$Bit $tmp578 = (($fn577) $tmp573)(param0, $tmp569, $tmp570, $tmp571);
*(&local13) = $tmp578;
goto block82;
block80:;
frost$core$Bit $tmp580 = (($fn579) $tmp573)($tmp575, param0, $tmp569, $tmp570, $tmp571);
*(&local13) = $tmp580;
goto block82;
block82:;
frost$core$Bit $tmp581 = *(&local13);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block78; else goto block79;
block78:;
// line 211
frost$collections$Array* $tmp583 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp584 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp585 = (frost$core$Int64) {4};
frost$core$String* $tmp586 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp587 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp584, $tmp585, $tmp586, $tmp587);
frost$collections$Array$add$frost$collections$Array$T($tmp583, ((frost$core$Object*) $tmp584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// line 212
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp588 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block79;
block79:;
goto block7;
block75:;
// line 216
org$frostlang$frostc$Position $tmp589 = *(&local4);
frost$core$String* $tmp590 = *(&local5);
frost$core$String* $tmp591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s592, $tmp590);
frost$core$String* $tmp593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp591, &$s594);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp589, $tmp593);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
goto block7;
block7:;
// line 219
org$frostlang$frostc$ASTNode* $tmp595 = *(&local8);
frost$core$Bit $tmp596 = frost$core$Bit$init$builtin_bit($tmp595 != NULL);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block83; else goto block84;
block83:;
// line 220
org$frostlang$frostc$Position $tmp598 = *(&local4);
frost$core$String* $tmp599 = *(&local5);
frost$core$String* $tmp600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s601, $tmp599);
frost$core$String* $tmp602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp600, &$s603);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp598, $tmp602);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
goto block84;
block84:;
org$frostlang$frostc$ASTNode* $tmp604 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp605 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp606 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp607 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 224
frost$core$Bit $tmp608 = frost$core$Bit$init$builtin_bit(false);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s611, $tmp610);
abort(); // unreachable
block85:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp317);
org$frostlang$frostc$ASTNode* $tmp612 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// line 228
org$frostlang$frostc$Annotations* $tmp613 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp614 = *(&local0);
frost$collections$Array* $tmp615 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp613, $tmp614, ((frost$collections$ListView*) $tmp615));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Method* $tmp616 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$collections$Array* $tmp617 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp613;

}
void org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Annotations* local3 = NULL;
org$frostlang$frostc$FieldDecl$Kind local4;
org$frostlang$frostc$Variable$Kind local5;
org$frostlang$frostc$FixedArray* local6 = NULL;
org$frostlang$frostc$ASTNode* local7 = NULL;
org$frostlang$frostc$Position local8;
org$frostlang$frostc$ASTNode* local9 = NULL;
org$frostlang$frostc$ASTNode* local10 = NULL;
frost$core$String* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$core$Bit local17;
frost$core$Bit local18;
org$frostlang$frostc$FieldDecl* local19 = NULL;
// line 233
*(&local0) = ((frost$core$String*) NULL);
// line 235
frost$core$Bit $tmp618 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block1; else goto block3;
block1:;
// line 236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp620 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 239
frost$core$Int64* $tmp621 = &param3->$rawValue;
frost$core$Int64 $tmp622 = *$tmp621;
frost$core$Int64 $tmp623 = (frost$core$Int64) {40};
frost$core$Bit $tmp624 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp622, $tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp626 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp627 = *$tmp626;
*(&local1) = $tmp627;
frost$core$String** $tmp628 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp629 = *$tmp628;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$String* $tmp630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local2) = $tmp629;
// line 241
frost$core$String* $tmp631 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$String* $tmp632 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local0) = $tmp631;
frost$core$String* $tmp633 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 244
frost$core$Bit $tmp634 = frost$core$Bit$init$builtin_bit(false);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp636 = (frost$core$Int64) {244};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s637, $tmp636);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 248
org$frostlang$frostc$Annotations* $tmp638 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
org$frostlang$frostc$Annotations* $tmp639 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local3) = $tmp638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
// line 249
// line 250
frost$core$Int64* $tmp640 = &param5->$rawValue;
frost$core$Int64 $tmp641 = *$tmp640;
frost$core$Int64 $tmp642 = (frost$core$Int64) {52};
frost$core$Bit $tmp643 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp641, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp645 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp646 = *$tmp645;
org$frostlang$frostc$Variable$Kind* $tmp647 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp648 = *$tmp647;
*(&local5) = $tmp648;
org$frostlang$frostc$FixedArray** $tmp649 = (org$frostlang$frostc$FixedArray**) (param5->$data + 24);
org$frostlang$frostc$FixedArray* $tmp650 = *$tmp649;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
org$frostlang$frostc$FixedArray* $tmp651 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local6) = $tmp650;
// line 252
org$frostlang$frostc$Variable$Kind $tmp652 = *(&local5);
frost$core$Int64 $tmp653 = $tmp652.$rawValue;
frost$core$Int64 $tmp654 = (frost$core$Int64) {0};
frost$core$Bit $tmp655 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp653, $tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block13; else goto block14;
block13:;
// line 254
frost$core$Int64 $tmp657 = (frost$core$Int64) {0};
org$frostlang$frostc$FieldDecl$Kind $tmp658 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp657);
*(&local4) = $tmp658;
goto block12;
block14:;
frost$core$Int64 $tmp659 = (frost$core$Int64) {1};
frost$core$Bit $tmp660 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp653, $tmp659);
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block15; else goto block16;
block15:;
// line 257
frost$core$Int64 $tmp662 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp663 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp662);
*(&local4) = $tmp663;
goto block12;
block16:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {2};
frost$core$Bit $tmp665 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp653, $tmp664);
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block17; else goto block18;
block17:;
// line 260
frost$core$Int64 $tmp667 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp668 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp667);
*(&local4) = $tmp668;
// line 261
org$frostlang$frostc$Annotations* $tmp669 = *(&local3);
frost$core$Int64* $tmp670 = &$tmp669->flags;
frost$core$Int64 $tmp671 = *$tmp670;
frost$core$Int64 $tmp672 = (frost$core$Int64) {16};
frost$core$Int64 $tmp673 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp671, $tmp672);
frost$core$Int64* $tmp674 = &$tmp669->flags;
*$tmp674 = $tmp673;
goto block12;
block18:;
frost$core$Int64 $tmp675 = (frost$core$Int64) {3};
frost$core$Bit $tmp676 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp653, $tmp675);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block19; else goto block12;
block19:;
// line 264
frost$core$Int64 $tmp678 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp679 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp678);
*(&local4) = $tmp679;
goto block12;
block12:;
// line 267
org$frostlang$frostc$FixedArray* $tmp680 = *(&local6);
ITable* $tmp681 = ((frost$collections$Iterable*) $tmp680)->$class->itable;
while ($tmp681->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[0];
frost$collections$Iterator* $tmp684 = $tmp682(((frost$collections$Iterable*) $tmp680));
goto block20;
block20:;
ITable* $tmp685 = $tmp684->$class->itable;
while ($tmp685->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp685 = $tmp685->next;
}
$fn687 $tmp686 = $tmp685->methods[0];
frost$core$Bit $tmp688 = $tmp686($tmp684);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block22; else goto block21;
block21:;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp690 = $tmp684->$class->itable;
while ($tmp690->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp690 = $tmp690->next;
}
$fn692 $tmp691 = $tmp690->methods[1];
frost$core$Object* $tmp693 = $tmp691($tmp684);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp693)));
org$frostlang$frostc$ASTNode* $tmp694 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local7) = ((org$frostlang$frostc$ASTNode*) $tmp693);
// line 268
org$frostlang$frostc$ASTNode* $tmp695 = *(&local7);
frost$core$Int64* $tmp696 = &$tmp695->$rawValue;
frost$core$Int64 $tmp697 = *$tmp696;
frost$core$Int64 $tmp698 = (frost$core$Int64) {14};
frost$core$Bit $tmp699 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp697, $tmp698);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp701 = (org$frostlang$frostc$Position*) ($tmp695->$data + 0);
org$frostlang$frostc$Position $tmp702 = *$tmp701;
*(&local8) = $tmp702;
org$frostlang$frostc$ASTNode** $tmp703 = (org$frostlang$frostc$ASTNode**) ($tmp695->$data + 16);
org$frostlang$frostc$ASTNode* $tmp704 = *$tmp703;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
org$frostlang$frostc$ASTNode* $tmp705 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local9) = $tmp704;
org$frostlang$frostc$ASTNode** $tmp706 = (org$frostlang$frostc$ASTNode**) ($tmp695->$data + 24);
org$frostlang$frostc$ASTNode* $tmp707 = *$tmp706;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
org$frostlang$frostc$ASTNode* $tmp708 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local10) = $tmp707;
// line 270
*(&local11) = ((frost$core$String*) NULL);
// line 271
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 272
org$frostlang$frostc$ASTNode* $tmp709 = *(&local9);
frost$core$Int64* $tmp710 = &$tmp709->$rawValue;
frost$core$Int64 $tmp711 = *$tmp710;
frost$core$Int64 $tmp712 = (frost$core$Int64) {22};
frost$core$Bit $tmp713 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp711, $tmp712);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp715 = (org$frostlang$frostc$Position*) ($tmp709->$data + 0);
org$frostlang$frostc$Position $tmp716 = *$tmp715;
frost$core$String** $tmp717 = (frost$core$String**) ($tmp709->$data + 16);
frost$core$String* $tmp718 = *$tmp717;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
frost$core$String* $tmp719 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local13) = $tmp718;
// line 274
frost$core$String* $tmp720 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$String* $tmp721 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local11) = $tmp720;
// line 275
org$frostlang$frostc$Type* $tmp722 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
org$frostlang$frostc$Type* $tmp723 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local12) = $tmp722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$String* $tmp724 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local13) = ((frost$core$String*) NULL);
goto block26;
block28:;
frost$core$Int64 $tmp725 = (frost$core$Int64) {47};
frost$core$Bit $tmp726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp711, $tmp725);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp728 = (org$frostlang$frostc$Position*) ($tmp709->$data + 0);
org$frostlang$frostc$Position $tmp729 = *$tmp728;
frost$core$String** $tmp730 = (frost$core$String**) ($tmp709->$data + 16);
frost$core$String* $tmp731 = *$tmp730;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$String* $tmp732 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local14) = $tmp731;
org$frostlang$frostc$ASTNode** $tmp733 = (org$frostlang$frostc$ASTNode**) ($tmp709->$data + 24);
org$frostlang$frostc$ASTNode* $tmp734 = *$tmp733;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$ASTNode* $tmp735 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local15) = $tmp734;
// line 278
frost$core$String* $tmp736 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$String* $tmp737 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
*(&local11) = $tmp736;
// line 279
org$frostlang$frostc$ASTNode* $tmp738 = *(&local15);
org$frostlang$frostc$Type* $tmp739 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp738);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
org$frostlang$frostc$Type* $tmp740 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local12) = $tmp739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
org$frostlang$frostc$ASTNode* $tmp741 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp742 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local14) = ((frost$core$String*) NULL);
goto block26;
block30:;
// line 282
frost$core$Bit $tmp743 = frost$core$Bit$init$builtin_bit(false);
bool $tmp744 = $tmp743.value;
if ($tmp744) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp745 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s746, $tmp745);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 285
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 286
org$frostlang$frostc$ASTNode* $tmp747 = *(&local10);
frost$core$Bit $tmp748 = frost$core$Bit$init$builtin_bit($tmp747 == NULL);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Annotations* $tmp750 = *(&local3);
frost$core$Bit $tmp751 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp750);
*(&local18) = $tmp751;
goto block37;
block36:;
*(&local18) = $tmp748;
goto block37;
block37:;
frost$core$Bit $tmp752 = *(&local18);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Type* $tmp754 = *(&local12);
org$frostlang$frostc$Type$Kind* $tmp755 = &$tmp754->typeKind;
org$frostlang$frostc$Type$Kind $tmp756 = *$tmp755;
org$frostlang$frostc$Type$Kind$wrapper* $tmp757;
$tmp757 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp757->value = $tmp756;
frost$core$Int64 $tmp758 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp759 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp758);
org$frostlang$frostc$Type$Kind$wrapper* $tmp760;
$tmp760 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp760->value = $tmp759;
ITable* $tmp761 = ((frost$core$Equatable*) $tmp757)->$class->itable;
while ($tmp761->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[0];
frost$core$Bit $tmp764 = $tmp762(((frost$core$Equatable*) $tmp757), ((frost$core$Equatable*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp760)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp757)));
*(&local17) = $tmp764;
goto block40;
block39:;
*(&local17) = $tmp752;
goto block40;
block40:;
frost$core$Bit $tmp765 = *(&local17);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block33; else goto block41;
block33:;
// line 288
org$frostlang$frostc$ASTNode* $tmp767 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp768 = (frost$core$Int64) {31};
org$frostlang$frostc$Position $tmp769 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp767, $tmp768, $tmp769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
org$frostlang$frostc$ASTNode* $tmp770 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local16) = $tmp767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
goto block34;
block41:;
// line 1
// line 291
org$frostlang$frostc$ASTNode* $tmp771 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
org$frostlang$frostc$ASTNode* $tmp772 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local16) = $tmp771;
goto block34;
block34:;
// line 293
org$frostlang$frostc$FieldDecl* $tmp773 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp774 = *(&local8);
frost$core$String* $tmp775 = *(&local0);
org$frostlang$frostc$Annotations* $tmp776 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp777 = *(&local4);
frost$core$String* $tmp778 = *(&local11);
org$frostlang$frostc$Type* $tmp779 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp780 = *(&local16);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp773, param1, $tmp774, $tmp775, $tmp776, $tmp777, $tmp778, $tmp779, $tmp780);
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
org$frostlang$frostc$FieldDecl* $tmp781 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local19) = $tmp773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// line 295
org$frostlang$frostc$SymbolTable** $tmp782 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp783 = *$tmp782;
org$frostlang$frostc$FieldDecl* $tmp784 = *(&local19);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp783, ((org$frostlang$frostc$Symbol*) $tmp784));
// line 296
frost$collections$Array** $tmp785 = &param1->fields;
frost$collections$Array* $tmp786 = *$tmp785;
org$frostlang$frostc$FieldDecl* $tmp787 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp786, ((frost$core$Object*) $tmp787));
org$frostlang$frostc$FieldDecl* $tmp788 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp789 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp790 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp791 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp792 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp793 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block23;
block25:;
// line 299
frost$core$Bit $tmp794 = frost$core$Bit$init$builtin_bit(false);
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp796 = (frost$core$Int64) {299};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s797, $tmp796);
abort(); // unreachable
block42:;
goto block23;
block23:;
frost$core$Frost$unref$frost$core$Object$Q($tmp693);
org$frostlang$frostc$ASTNode* $tmp798 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
org$frostlang$frostc$FixedArray* $tmp799 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block9;
block11:;
// line 305
frost$core$Bit $tmp800 = frost$core$Bit$init$builtin_bit(false);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp802 = (frost$core$Int64) {305};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s803, $tmp802);
abort(); // unreachable
block44:;
goto block9;
block9:;
org$frostlang$frostc$Annotations* $tmp804 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp805 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Int64 org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$FixedArray* local0 = NULL;
frost$core$Int64 local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
frost$core$Int64 local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
org$frostlang$frostc$FixedArray* local10 = NULL;
frost$core$Int64 local11;
org$frostlang$frostc$ASTNode* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$FixedArray* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$core$Int64 local17;
org$frostlang$frostc$ASTNode* local18 = NULL;
org$frostlang$frostc$ASTNode* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
org$frostlang$frostc$ASTNode* local21 = NULL;
org$frostlang$frostc$FixedArray* local22 = NULL;
frost$core$Int64 local23;
org$frostlang$frostc$ASTNode* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$ASTNode* local27 = NULL;
frost$core$Int64 local28;
org$frostlang$frostc$ASTNode* local29 = NULL;
org$frostlang$frostc$FixedArray* local30 = NULL;
frost$core$Int64 local31;
org$frostlang$frostc$ASTNode* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
org$frostlang$frostc$FixedArray* local34 = NULL;
org$frostlang$frostc$FixedArray* local35 = NULL;
frost$core$Int64 local36;
org$frostlang$frostc$ASTNode* local37 = NULL;
org$frostlang$frostc$ASTNode* local38 = NULL;
org$frostlang$frostc$ASTNode* local39 = NULL;
org$frostlang$frostc$ASTNode* local40 = NULL;
org$frostlang$frostc$FixedArray* local41 = NULL;
frost$core$Int64 local42;
org$frostlang$frostc$ASTNode* local43 = NULL;
org$frostlang$frostc$FixedArray* local44 = NULL;
org$frostlang$frostc$FixedArray* local45 = NULL;
frost$core$Int64 local46;
org$frostlang$frostc$ASTNode* local47 = NULL;
org$frostlang$frostc$ASTNode* local48 = NULL;
org$frostlang$frostc$ASTNode* local49 = NULL;
org$frostlang$frostc$FixedArray* local50 = NULL;
frost$core$Int64 local51;
org$frostlang$frostc$ASTNode* local52 = NULL;
// line 312
frost$core$Int64* $tmp806 = &param1->$rawValue;
frost$core$Int64 $tmp807 = *$tmp806;
frost$core$Int64 $tmp808 = (frost$core$Int64) {1};
frost$core$Bit $tmp809 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp811 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp812 = *$tmp811;
org$frostlang$frostc$FixedArray** $tmp813 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp814 = *$tmp813;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlang$frostc$FixedArray* $tmp815 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local0) = $tmp814;
// line 314
frost$core$Int64 $tmp816 = (frost$core$Int64) {0};
*(&local1) = $tmp816;
// line 315
org$frostlang$frostc$FixedArray* $tmp817 = *(&local0);
ITable* $tmp818 = ((frost$collections$Iterable*) $tmp817)->$class->itable;
while ($tmp818->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp818 = $tmp818->next;
}
$fn820 $tmp819 = $tmp818->methods[0];
frost$collections$Iterator* $tmp821 = $tmp819(((frost$collections$Iterable*) $tmp817));
goto block4;
block4:;
ITable* $tmp822 = $tmp821->$class->itable;
while ($tmp822->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp822 = $tmp822->next;
}
$fn824 $tmp823 = $tmp822->methods[0];
frost$core$Bit $tmp825 = $tmp823($tmp821);
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block6; else goto block5;
block5:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp827 = $tmp821->$class->itable;
while ($tmp827->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp827 = $tmp827->next;
}
$fn829 $tmp828 = $tmp827->methods[1];
frost$core$Object* $tmp830 = $tmp828($tmp821);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp830)));
org$frostlang$frostc$ASTNode* $tmp831 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp830);
// line 316
frost$core$Int64 $tmp832 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp833 = *(&local2);
frost$core$Int64 $tmp834 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp833);
int64_t $tmp835 = $tmp832.value;
int64_t $tmp836 = $tmp834.value;
int64_t $tmp837 = $tmp835 + $tmp836;
frost$core$Int64 $tmp838 = (frost$core$Int64) {$tmp837};
*(&local1) = $tmp838;
frost$core$Frost$unref$frost$core$Object$Q($tmp830);
org$frostlang$frostc$ASTNode* $tmp839 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// line 318
frost$core$Int64 $tmp840 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp841 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp840;
block3:;
frost$core$Int64 $tmp842 = (frost$core$Int64) {2};
frost$core$Bit $tmp843 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp842);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp845 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp846 = *$tmp845;
org$frostlang$frostc$ASTNode** $tmp847 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp848 = *$tmp847;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
org$frostlang$frostc$ASTNode* $tmp849 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
*(&local3) = $tmp848;
org$frostlang$frostc$ASTNode** $tmp850 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp851 = *$tmp850;
// line 321
org$frostlang$frostc$ASTNode* $tmp852 = *(&local3);
frost$core$Int64 $tmp853 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp852);
org$frostlang$frostc$ASTNode* $tmp854 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp853;
block8:;
frost$core$Int64 $tmp855 = (frost$core$Int64) {3};
frost$core$Bit $tmp856 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp855);
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block9; else goto block10;
block9:;
// line 324
frost$core$Int64 $tmp858 = (frost$core$Int64) {0};
return $tmp858;
block10:;
frost$core$Int64 $tmp859 = (frost$core$Int64) {4};
frost$core$Bit $tmp860 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp859);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block11; else goto block12;
block11:;
// line 327
frost$core$Int64 $tmp862 = (frost$core$Int64) {0};
return $tmp862;
block12:;
frost$core$Int64 $tmp863 = (frost$core$Int64) {5};
frost$core$Bit $tmp864 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp863);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp866 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp867 = *$tmp866;
org$frostlang$frostc$ASTNode** $tmp868 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp869 = *$tmp868;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
org$frostlang$frostc$ASTNode* $tmp870 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local4) = $tmp869;
org$frostlang$frostc$expression$Binary$Operator* $tmp871 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp872 = *$tmp871;
org$frostlang$frostc$ASTNode** $tmp873 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp874 = *$tmp873;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
org$frostlang$frostc$ASTNode* $tmp875 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local5) = $tmp874;
// line 330
frost$core$Int64 $tmp876 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp877 = *(&local4);
frost$core$Int64 $tmp878 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp877);
int64_t $tmp879 = $tmp876.value;
int64_t $tmp880 = $tmp878.value;
int64_t $tmp881 = $tmp879 + $tmp880;
frost$core$Int64 $tmp882 = (frost$core$Int64) {$tmp881};
org$frostlang$frostc$ASTNode* $tmp883 = *(&local5);
frost$core$Int64 $tmp884 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp883);
int64_t $tmp885 = $tmp882.value;
int64_t $tmp886 = $tmp884.value;
int64_t $tmp887 = $tmp885 + $tmp886;
frost$core$Int64 $tmp888 = (frost$core$Int64) {$tmp887};
org$frostlang$frostc$ASTNode* $tmp889 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp890 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp888;
block14:;
frost$core$Int64 $tmp891 = (frost$core$Int64) {6};
frost$core$Bit $tmp892 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp891);
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block15; else goto block16;
block15:;
// line 333
frost$core$Int64 $tmp894 = (frost$core$Int64) {1};
return $tmp894;
block16:;
frost$core$Int64 $tmp895 = (frost$core$Int64) {7};
frost$core$Bit $tmp896 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp895);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp898 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp899 = *$tmp898;
org$frostlang$frostc$FixedArray** $tmp900 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp901 = *$tmp900;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
org$frostlang$frostc$FixedArray* $tmp902 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
*(&local6) = $tmp901;
// line 336
frost$core$Int64 $tmp903 = (frost$core$Int64) {0};
*(&local7) = $tmp903;
// line 337
org$frostlang$frostc$FixedArray* $tmp904 = *(&local6);
ITable* $tmp905 = ((frost$collections$Iterable*) $tmp904)->$class->itable;
while ($tmp905->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp905 = $tmp905->next;
}
$fn907 $tmp906 = $tmp905->methods[0];
frost$collections$Iterator* $tmp908 = $tmp906(((frost$collections$Iterable*) $tmp904));
goto block19;
block19:;
ITable* $tmp909 = $tmp908->$class->itable;
while ($tmp909->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp909 = $tmp909->next;
}
$fn911 $tmp910 = $tmp909->methods[0];
frost$core$Bit $tmp912 = $tmp910($tmp908);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp914 = $tmp908->$class->itable;
while ($tmp914->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[1];
frost$core$Object* $tmp917 = $tmp915($tmp908);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp917)));
org$frostlang$frostc$ASTNode* $tmp918 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp917);
// line 338
frost$core$Int64 $tmp919 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp920 = *(&local8);
frost$core$Int64 $tmp921 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp920);
int64_t $tmp922 = $tmp919.value;
int64_t $tmp923 = $tmp921.value;
int64_t $tmp924 = $tmp922 + $tmp923;
frost$core$Int64 $tmp925 = (frost$core$Int64) {$tmp924};
*(&local7) = $tmp925;
frost$core$Frost$unref$frost$core$Object$Q($tmp917);
org$frostlang$frostc$ASTNode* $tmp926 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// line 340
frost$core$Int64 $tmp927 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp928 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp927;
block18:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {8};
frost$core$Bit $tmp930 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp929);
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block22; else goto block23;
block22:;
// line 343
frost$core$Int64 $tmp932 = (frost$core$Int64) {1};
return $tmp932;
block23:;
frost$core$Int64 $tmp933 = (frost$core$Int64) {9};
frost$core$Bit $tmp934 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp933);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp936 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp937 = *$tmp936;
org$frostlang$frostc$ASTNode** $tmp938 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp939 = *$tmp938;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp939));
org$frostlang$frostc$ASTNode* $tmp940 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local9) = $tmp939;
org$frostlang$frostc$FixedArray** $tmp941 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp942 = *$tmp941;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
org$frostlang$frostc$FixedArray* $tmp943 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local10) = $tmp942;
// line 346
org$frostlang$frostc$ASTNode* $tmp944 = *(&local9);
frost$core$Int64 $tmp945 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp944);
*(&local11) = $tmp945;
// line 347
org$frostlang$frostc$FixedArray* $tmp946 = *(&local10);
ITable* $tmp947 = ((frost$collections$Iterable*) $tmp946)->$class->itable;
while ($tmp947->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp947 = $tmp947->next;
}
$fn949 $tmp948 = $tmp947->methods[0];
frost$collections$Iterator* $tmp950 = $tmp948(((frost$collections$Iterable*) $tmp946));
goto block26;
block26:;
ITable* $tmp951 = $tmp950->$class->itable;
while ($tmp951->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp951 = $tmp951->next;
}
$fn953 $tmp952 = $tmp951->methods[0];
frost$core$Bit $tmp954 = $tmp952($tmp950);
bool $tmp955 = $tmp954.value;
if ($tmp955) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp956 = $tmp950->$class->itable;
while ($tmp956->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp956 = $tmp956->next;
}
$fn958 $tmp957 = $tmp956->methods[1];
frost$core$Object* $tmp959 = $tmp957($tmp950);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp959)));
org$frostlang$frostc$ASTNode* $tmp960 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp959);
// line 348
frost$core$Int64 $tmp961 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp962 = *(&local12);
frost$core$Int64 $tmp963 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp962);
int64_t $tmp964 = $tmp961.value;
int64_t $tmp965 = $tmp963.value;
int64_t $tmp966 = $tmp964 + $tmp965;
frost$core$Int64 $tmp967 = (frost$core$Int64) {$tmp966};
*(&local11) = $tmp967;
frost$core$Frost$unref$frost$core$Object$Q($tmp959);
org$frostlang$frostc$ASTNode* $tmp968 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// line 350
frost$core$Int64 $tmp969 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp970 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp971 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp969;
block25:;
frost$core$Int64 $tmp972 = (frost$core$Int64) {11};
frost$core$Bit $tmp973 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp972);
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp975 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp976 = *$tmp975;
org$frostlang$frostc$ASTNode** $tmp977 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp978 = *$tmp977;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
org$frostlang$frostc$ASTNode* $tmp979 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local13) = $tmp978;
org$frostlang$frostc$ChoiceCase** $tmp980 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp981 = *$tmp980;
frost$core$Int64* $tmp982 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp983 = *$tmp982;
// line 353
org$frostlang$frostc$ASTNode* $tmp984 = *(&local13);
frost$core$Int64 $tmp985 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp984);
org$frostlang$frostc$ASTNode* $tmp986 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp985;
block30:;
frost$core$Int64 $tmp987 = (frost$core$Int64) {13};
frost$core$Bit $tmp988 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp987);
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block31; else goto block32;
block31:;
// line 356
frost$core$Int64 $tmp990 = (frost$core$Int64) {1};
return $tmp990;
block32:;
frost$core$Int64 $tmp991 = (frost$core$Int64) {14};
frost$core$Bit $tmp992 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp991);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp994 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp995 = *$tmp994;
org$frostlang$frostc$ASTNode** $tmp996 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp997 = *$tmp996;
org$frostlang$frostc$ASTNode** $tmp998 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp999 = *$tmp998;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
org$frostlang$frostc$ASTNode* $tmp1000 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local14) = $tmp999;
// line 359
org$frostlang$frostc$ASTNode* $tmp1001 = *(&local14);
frost$core$Bit $tmp1002 = frost$core$Bit$init$builtin_bit($tmp1001 == NULL);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block35; else goto block36;
block35:;
// line 360
frost$core$Int64 $tmp1004 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1005 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1004;
block36:;
// line 362
org$frostlang$frostc$ASTNode* $tmp1006 = *(&local14);
frost$core$Int64 $tmp1007 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1006);
org$frostlang$frostc$ASTNode* $tmp1008 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1007;
block34:;
frost$core$Int64 $tmp1009 = (frost$core$Int64) {15};
frost$core$Bit $tmp1010 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1009);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp1012 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1013 = *$tmp1012;
frost$core$String** $tmp1014 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1015 = *$tmp1014;
org$frostlang$frostc$FixedArray** $tmp1016 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1017 = *$tmp1016;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
org$frostlang$frostc$FixedArray* $tmp1018 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local15) = $tmp1017;
org$frostlang$frostc$ASTNode** $tmp1019 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1020 = *$tmp1019;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
org$frostlang$frostc$ASTNode* $tmp1021 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local16) = $tmp1020;
// line 365
org$frostlang$frostc$ASTNode* $tmp1022 = *(&local16);
frost$core$Int64 $tmp1023 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1022);
*(&local17) = $tmp1023;
// line 366
org$frostlang$frostc$FixedArray* $tmp1024 = *(&local15);
ITable* $tmp1025 = ((frost$collections$Iterable*) $tmp1024)->$class->itable;
while ($tmp1025->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[0];
frost$collections$Iterator* $tmp1028 = $tmp1026(((frost$collections$Iterable*) $tmp1024));
goto block39;
block39:;
ITable* $tmp1029 = $tmp1028->$class->itable;
while ($tmp1029->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1029 = $tmp1029->next;
}
$fn1031 $tmp1030 = $tmp1029->methods[0];
frost$core$Bit $tmp1032 = $tmp1030($tmp1028);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block41; else goto block40;
block40:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1034 = $tmp1028->$class->itable;
while ($tmp1034->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1034 = $tmp1034->next;
}
$fn1036 $tmp1035 = $tmp1034->methods[1];
frost$core$Object* $tmp1037 = $tmp1035($tmp1028);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1037)));
org$frostlang$frostc$ASTNode* $tmp1038 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1037);
// line 367
frost$core$Int64 $tmp1039 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1040 = *(&local18);
frost$core$Int64 $tmp1041 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1040);
int64_t $tmp1042 = $tmp1039.value;
int64_t $tmp1043 = $tmp1041.value;
int64_t $tmp1044 = $tmp1042 + $tmp1043;
frost$core$Int64 $tmp1045 = (frost$core$Int64) {$tmp1044};
*(&local17) = $tmp1045;
frost$core$Frost$unref$frost$core$Object$Q($tmp1037);
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// line 369
frost$core$Int64 $tmp1047 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1048 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1049 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1047;
block38:;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {16};
frost$core$Bit $tmp1051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1050);
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1053 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1054 = *$tmp1053;
org$frostlang$frostc$ASTNode** $tmp1055 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1056 = *$tmp1055;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
org$frostlang$frostc$ASTNode* $tmp1057 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
*(&local19) = $tmp1056;
frost$core$String** $tmp1058 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1059 = *$tmp1058;
// line 372
org$frostlang$frostc$ASTNode* $tmp1060 = *(&local19);
frost$core$Int64 $tmp1061 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1060);
org$frostlang$frostc$ASTNode* $tmp1062 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1061;
block43:;
frost$core$Int64 $tmp1063 = (frost$core$Int64) {17};
frost$core$Bit $tmp1064 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1063);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1066 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1067 = *$tmp1066;
org$frostlang$frostc$ASTNode** $tmp1068 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1069 = *$tmp1068;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
org$frostlang$frostc$ASTNode* $tmp1070 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local20) = $tmp1069;
frost$core$String** $tmp1071 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1072 = *$tmp1071;
org$frostlang$frostc$FixedArray** $tmp1073 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1074 = *$tmp1073;
// line 375
org$frostlang$frostc$ASTNode* $tmp1075 = *(&local20);
frost$core$Int64 $tmp1076 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1075);
org$frostlang$frostc$ASTNode* $tmp1077 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1076;
block45:;
frost$core$Int64 $tmp1078 = (frost$core$Int64) {20};
frost$core$Bit $tmp1079 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1078);
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1081 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1082 = *$tmp1081;
frost$core$String** $tmp1083 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1084 = *$tmp1083;
org$frostlang$frostc$ASTNode** $tmp1085 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1086 = *$tmp1085;
org$frostlang$frostc$ASTNode** $tmp1087 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1088 = *$tmp1087;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
org$frostlang$frostc$ASTNode* $tmp1089 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local21) = $tmp1088;
org$frostlang$frostc$FixedArray** $tmp1090 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1091 = *$tmp1090;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
org$frostlang$frostc$FixedArray* $tmp1092 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local22) = $tmp1091;
// line 378
org$frostlang$frostc$ASTNode* $tmp1093 = *(&local21);
frost$core$Int64 $tmp1094 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1093);
*(&local23) = $tmp1094;
// line 379
org$frostlang$frostc$FixedArray* $tmp1095 = *(&local22);
ITable* $tmp1096 = ((frost$collections$Iterable*) $tmp1095)->$class->itable;
while ($tmp1096->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1096 = $tmp1096->next;
}
$fn1098 $tmp1097 = $tmp1096->methods[0];
frost$collections$Iterator* $tmp1099 = $tmp1097(((frost$collections$Iterable*) $tmp1095));
goto block48;
block48:;
ITable* $tmp1100 = $tmp1099->$class->itable;
while ($tmp1100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1100 = $tmp1100->next;
}
$fn1102 $tmp1101 = $tmp1100->methods[0];
frost$core$Bit $tmp1103 = $tmp1101($tmp1099);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block50; else goto block49;
block49:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1105 = $tmp1099->$class->itable;
while ($tmp1105->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[1];
frost$core$Object* $tmp1108 = $tmp1106($tmp1099);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1108)));
org$frostlang$frostc$ASTNode* $tmp1109 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1108);
// line 380
frost$core$Int64 $tmp1110 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1111 = *(&local24);
frost$core$Int64 $tmp1112 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1111);
int64_t $tmp1113 = $tmp1110.value;
int64_t $tmp1114 = $tmp1112.value;
int64_t $tmp1115 = $tmp1113 + $tmp1114;
frost$core$Int64 $tmp1116 = (frost$core$Int64) {$tmp1115};
*(&local23) = $tmp1116;
frost$core$Frost$unref$frost$core$Object$Q($tmp1108);
org$frostlang$frostc$ASTNode* $tmp1117 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// line 382
frost$core$Int64 $tmp1118 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1119 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1120 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1118;
block47:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {21};
frost$core$Bit $tmp1122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1121);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block51; else goto block52;
block51:;
// line 385
frost$core$Int64 $tmp1124 = (frost$core$Int64) {0};
return $tmp1124;
block52:;
frost$core$Int64 $tmp1125 = (frost$core$Int64) {22};
frost$core$Bit $tmp1126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1125);
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block53; else goto block54;
block53:;
// line 388
frost$core$Int64 $tmp1128 = (frost$core$Int64) {1};
return $tmp1128;
block54:;
frost$core$Int64 $tmp1129 = (frost$core$Int64) {24};
frost$core$Bit $tmp1130 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1129);
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1132 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1133 = *$tmp1132;
org$frostlang$frostc$ASTNode** $tmp1134 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1135 = *$tmp1134;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$ASTNode* $tmp1136 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local25) = $tmp1135;
org$frostlang$frostc$FixedArray** $tmp1137 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1138 = *$tmp1137;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlang$frostc$FixedArray* $tmp1139 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local26) = $tmp1138;
org$frostlang$frostc$ASTNode** $tmp1140 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1141 = *$tmp1140;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local27) = $tmp1141;
// line 391
org$frostlang$frostc$ASTNode* $tmp1143 = *(&local25);
frost$core$Int64 $tmp1144 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1143);
*(&local28) = $tmp1144;
// line 392
org$frostlang$frostc$FixedArray* $tmp1145 = *(&local26);
ITable* $tmp1146 = ((frost$collections$Iterable*) $tmp1145)->$class->itable;
while ($tmp1146->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1146 = $tmp1146->next;
}
$fn1148 $tmp1147 = $tmp1146->methods[0];
frost$collections$Iterator* $tmp1149 = $tmp1147(((frost$collections$Iterable*) $tmp1145));
goto block57;
block57:;
ITable* $tmp1150 = $tmp1149->$class->itable;
while ($tmp1150->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1150 = $tmp1150->next;
}
$fn1152 $tmp1151 = $tmp1150->methods[0];
frost$core$Bit $tmp1153 = $tmp1151($tmp1149);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block59; else goto block58;
block58:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1155 = $tmp1149->$class->itable;
while ($tmp1155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1155 = $tmp1155->next;
}
$fn1157 $tmp1156 = $tmp1155->methods[1];
frost$core$Object* $tmp1158 = $tmp1156($tmp1149);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1158)));
org$frostlang$frostc$ASTNode* $tmp1159 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1158);
// line 393
frost$core$Int64 $tmp1160 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1161 = *(&local29);
frost$core$Int64 $tmp1162 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1161);
int64_t $tmp1163 = $tmp1160.value;
int64_t $tmp1164 = $tmp1162.value;
int64_t $tmp1165 = $tmp1163 + $tmp1164;
frost$core$Int64 $tmp1166 = (frost$core$Int64) {$tmp1165};
*(&local28) = $tmp1166;
frost$core$Frost$unref$frost$core$Object$Q($tmp1158);
org$frostlang$frostc$ASTNode* $tmp1167 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// line 395
org$frostlang$frostc$ASTNode* $tmp1168 = *(&local27);
frost$core$Bit $tmp1169 = frost$core$Bit$init$builtin_bit($tmp1168 != NULL);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block60; else goto block61;
block60:;
// line 396
frost$core$Int64 $tmp1171 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1172 = *(&local27);
frost$core$Int64 $tmp1173 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1172);
int64_t $tmp1174 = $tmp1171.value;
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174 + $tmp1175;
frost$core$Int64 $tmp1177 = (frost$core$Int64) {$tmp1176};
*(&local28) = $tmp1177;
goto block61;
block61:;
// line 398
frost$core$Int64 $tmp1178 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1179 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1180 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1181 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1178;
block56:;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {25};
frost$core$Bit $tmp1183 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1182);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block62; else goto block63;
block62:;
// line 401
frost$core$Int64 $tmp1185 = (frost$core$Int64) {1};
return $tmp1185;
block63:;
frost$core$Int64 $tmp1186 = (frost$core$Int64) {27};
frost$core$Bit $tmp1187 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1186);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp1189 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1190 = *$tmp1189;
frost$core$String** $tmp1191 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1192 = *$tmp1191;
org$frostlang$frostc$FixedArray** $tmp1193 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1194 = *$tmp1193;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
org$frostlang$frostc$FixedArray* $tmp1195 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local30) = $tmp1194;
// line 404
frost$core$Int64 $tmp1196 = (frost$core$Int64) {0};
*(&local31) = $tmp1196;
// line 405
org$frostlang$frostc$FixedArray* $tmp1197 = *(&local30);
ITable* $tmp1198 = ((frost$collections$Iterable*) $tmp1197)->$class->itable;
while ($tmp1198->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1198 = $tmp1198->next;
}
$fn1200 $tmp1199 = $tmp1198->methods[0];
frost$collections$Iterator* $tmp1201 = $tmp1199(((frost$collections$Iterable*) $tmp1197));
goto block66;
block66:;
ITable* $tmp1202 = $tmp1201->$class->itable;
while ($tmp1202->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1202 = $tmp1202->next;
}
$fn1204 $tmp1203 = $tmp1202->methods[0];
frost$core$Bit $tmp1205 = $tmp1203($tmp1201);
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block68; else goto block67;
block67:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1207 = $tmp1201->$class->itable;
while ($tmp1207->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1207 = $tmp1207->next;
}
$fn1209 $tmp1208 = $tmp1207->methods[1];
frost$core$Object* $tmp1210 = $tmp1208($tmp1201);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1210)));
org$frostlang$frostc$ASTNode* $tmp1211 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1210);
// line 406
frost$core$Int64 $tmp1212 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1213 = *(&local32);
frost$core$Int64 $tmp1214 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1213);
int64_t $tmp1215 = $tmp1212.value;
int64_t $tmp1216 = $tmp1214.value;
int64_t $tmp1217 = $tmp1215 + $tmp1216;
frost$core$Int64 $tmp1218 = (frost$core$Int64) {$tmp1217};
*(&local31) = $tmp1218;
frost$core$Frost$unref$frost$core$Object$Q($tmp1210);
org$frostlang$frostc$ASTNode* $tmp1219 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
// line 408
frost$core$Int64 $tmp1220 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1221 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1220;
block65:;
frost$core$Int64 $tmp1222 = (frost$core$Int64) {28};
frost$core$Bit $tmp1223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1222);
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Position* $tmp1225 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1226 = *$tmp1225;
org$frostlang$frostc$ASTNode** $tmp1227 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1228 = *$tmp1227;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local33) = $tmp1228;
org$frostlang$frostc$FixedArray** $tmp1230 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1231 = *$tmp1230;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
org$frostlang$frostc$FixedArray* $tmp1232 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local34) = $tmp1231;
org$frostlang$frostc$FixedArray** $tmp1233 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1234 = *$tmp1233;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
org$frostlang$frostc$FixedArray* $tmp1235 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local35) = $tmp1234;
// line 411
org$frostlang$frostc$ASTNode* $tmp1236 = *(&local33);
frost$core$Int64 $tmp1237 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1236);
*(&local36) = $tmp1237;
// line 412
org$frostlang$frostc$FixedArray* $tmp1238 = *(&local34);
ITable* $tmp1239 = ((frost$collections$Iterable*) $tmp1238)->$class->itable;
while ($tmp1239->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1239 = $tmp1239->next;
}
$fn1241 $tmp1240 = $tmp1239->methods[0];
frost$collections$Iterator* $tmp1242 = $tmp1240(((frost$collections$Iterable*) $tmp1238));
goto block71;
block71:;
ITable* $tmp1243 = $tmp1242->$class->itable;
while ($tmp1243->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1243 = $tmp1243->next;
}
$fn1245 $tmp1244 = $tmp1243->methods[0];
frost$core$Bit $tmp1246 = $tmp1244($tmp1242);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block73; else goto block72;
block72:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1248 = $tmp1242->$class->itable;
while ($tmp1248->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1248 = $tmp1248->next;
}
$fn1250 $tmp1249 = $tmp1248->methods[1];
frost$core$Object* $tmp1251 = $tmp1249($tmp1242);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1251)));
org$frostlang$frostc$ASTNode* $tmp1252 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1251);
// line 413
frost$core$Int64 $tmp1253 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local37);
frost$core$Int64 $tmp1255 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1254);
int64_t $tmp1256 = $tmp1253.value;
int64_t $tmp1257 = $tmp1255.value;
int64_t $tmp1258 = $tmp1256 + $tmp1257;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {$tmp1258};
*(&local36) = $tmp1259;
frost$core$Frost$unref$frost$core$Object$Q($tmp1251);
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// line 415
org$frostlang$frostc$FixedArray* $tmp1261 = *(&local35);
frost$core$Bit $tmp1262 = frost$core$Bit$init$builtin_bit($tmp1261 != NULL);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block74; else goto block75;
block74:;
// line 416
org$frostlang$frostc$FixedArray* $tmp1264 = *(&local35);
ITable* $tmp1265 = ((frost$collections$Iterable*) $tmp1264)->$class->itable;
while ($tmp1265->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1265 = $tmp1265->next;
}
$fn1267 $tmp1266 = $tmp1265->methods[0];
frost$collections$Iterator* $tmp1268 = $tmp1266(((frost$collections$Iterable*) $tmp1264));
goto block76;
block76:;
ITable* $tmp1269 = $tmp1268->$class->itable;
while ($tmp1269->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1269 = $tmp1269->next;
}
$fn1271 $tmp1270 = $tmp1269->methods[0];
frost$core$Bit $tmp1272 = $tmp1270($tmp1268);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block78; else goto block77;
block77:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1274 = $tmp1268->$class->itable;
while ($tmp1274->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[1];
frost$core$Object* $tmp1277 = $tmp1275($tmp1268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1277)));
org$frostlang$frostc$ASTNode* $tmp1278 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1277);
// line 417
frost$core$Int64 $tmp1279 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1280 = *(&local38);
frost$core$Int64 $tmp1281 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1280);
int64_t $tmp1282 = $tmp1279.value;
int64_t $tmp1283 = $tmp1281.value;
int64_t $tmp1284 = $tmp1282 + $tmp1283;
frost$core$Int64 $tmp1285 = (frost$core$Int64) {$tmp1284};
*(&local36) = $tmp1285;
frost$core$Frost$unref$frost$core$Object$Q($tmp1277);
org$frostlang$frostc$ASTNode* $tmp1286 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
goto block75;
block75:;
// line 420
frost$core$Int64 $tmp1287 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1288 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1289 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1290 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1287;
block70:;
frost$core$Int64 $tmp1291 = (frost$core$Int64) {29};
frost$core$Bit $tmp1292 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1291);
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block79; else goto block80;
block79:;
// line 423
frost$core$Int64 $tmp1294 = (frost$core$Int64) {10};
return $tmp1294;
block80:;
frost$core$Int64 $tmp1295 = (frost$core$Int64) {31};
frost$core$Bit $tmp1296 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1295);
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block81; else goto block82;
block81:;
// line 426
frost$core$Int64 $tmp1298 = (frost$core$Int64) {1};
return $tmp1298;
block82:;
frost$core$Int64 $tmp1299 = (frost$core$Int64) {32};
frost$core$Bit $tmp1300 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1299);
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block83; else goto block84;
block83:;
// line 429
frost$core$Int64 $tmp1302 = (frost$core$Int64) {0};
return $tmp1302;
block84:;
frost$core$Int64 $tmp1303 = (frost$core$Int64) {35};
frost$core$Bit $tmp1304 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1303);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block85; else goto block86;
block85:;
// line 432
frost$core$Int64 $tmp1306 = (frost$core$Int64) {1};
return $tmp1306;
block86:;
frost$core$Int64 $tmp1307 = (frost$core$Int64) {36};
frost$core$Bit $tmp1308 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1307);
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block87; else goto block88;
block87:;
// line 435
frost$core$Int64 $tmp1310 = (frost$core$Int64) {1};
return $tmp1310;
block88:;
frost$core$Int64 $tmp1311 = (frost$core$Int64) {37};
frost$core$Bit $tmp1312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1311);
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block89; else goto block90;
block89:;
// line 438
frost$core$Int64 $tmp1314 = (frost$core$Int64) {1};
return $tmp1314;
block90:;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {38};
frost$core$Bit $tmp1316 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1315);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp1318 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1319 = *$tmp1318;
org$frostlang$frostc$ASTNode** $tmp1320 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1321 = *$tmp1320;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
org$frostlang$frostc$ASTNode* $tmp1322 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local39) = $tmp1321;
// line 441
org$frostlang$frostc$ASTNode* $tmp1323 = *(&local39);
frost$core$Bit $tmp1324 = frost$core$Bit$init$builtin_bit($tmp1323 == NULL);
bool $tmp1325 = $tmp1324.value;
if ($tmp1325) goto block93; else goto block94;
block93:;
// line 442
frost$core$Int64 $tmp1326 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1327 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1326;
block94:;
// line 444
org$frostlang$frostc$ASTNode* $tmp1328 = *(&local39);
frost$core$Int64 $tmp1329 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1328);
org$frostlang$frostc$ASTNode* $tmp1330 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1329;
block92:;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {39};
frost$core$Bit $tmp1332 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1331);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block95; else goto block96;
block95:;
// line 447
frost$core$Int64 $tmp1334 = (frost$core$Int64) {1};
return $tmp1334;
block96:;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {40};
frost$core$Bit $tmp1336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1335);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block97; else goto block98;
block97:;
// line 450
frost$core$Int64 $tmp1338 = (frost$core$Int64) {1};
return $tmp1338;
block98:;
frost$core$Int64 $tmp1339 = (frost$core$Int64) {41};
frost$core$Bit $tmp1340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1339);
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block99; else goto block100;
block99:;
// line 453
frost$core$Int64 $tmp1342 = (frost$core$Int64) {1};
return $tmp1342;
block100:;
frost$core$Int64 $tmp1343 = (frost$core$Int64) {42};
frost$core$Bit $tmp1344 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1343);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block101; else goto block102;
block101:;
// line 456
frost$core$Int64 $tmp1346 = (frost$core$Int64) {10};
return $tmp1346;
block102:;
frost$core$Int64 $tmp1347 = (frost$core$Int64) {45};
frost$core$Bit $tmp1348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1347);
bool $tmp1349 = $tmp1348.value;
if ($tmp1349) goto block103; else goto block104;
block103:;
// line 459
frost$core$Int64 $tmp1350 = (frost$core$Int64) {0};
return $tmp1350;
block104:;
frost$core$Int64 $tmp1351 = (frost$core$Int64) {46};
frost$core$Bit $tmp1352 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1351);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block105; else goto block106;
block105:;
// line 462
frost$core$Int64 $tmp1354 = (frost$core$Int64) {10};
return $tmp1354;
block106:;
frost$core$Int64 $tmp1355 = (frost$core$Int64) {48};
frost$core$Bit $tmp1356 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1355);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp1358 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1359 = *$tmp1358;
org$frostlang$frostc$expression$Unary$Operator* $tmp1360 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp1361 = *$tmp1360;
org$frostlang$frostc$ASTNode** $tmp1362 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1363 = *$tmp1362;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
org$frostlang$frostc$ASTNode* $tmp1364 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local40) = $tmp1363;
// line 465
frost$core$Int64 $tmp1365 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1366 = *(&local40);
frost$core$Int64 $tmp1367 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1366);
int64_t $tmp1368 = $tmp1365.value;
int64_t $tmp1369 = $tmp1367.value;
int64_t $tmp1370 = $tmp1368 + $tmp1369;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {$tmp1370};
org$frostlang$frostc$ASTNode* $tmp1372 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1371;
block108:;
frost$core$Int64 $tmp1373 = (frost$core$Int64) {49};
frost$core$Bit $tmp1374 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1373);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block109; else goto block110;
block109:;
// line 468
frost$core$Int64 $tmp1376 = (frost$core$Int64) {0};
return $tmp1376;
block110:;
frost$core$Int64 $tmp1377 = (frost$core$Int64) {50};
frost$core$Bit $tmp1378 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1377);
bool $tmp1379 = $tmp1378.value;
if ($tmp1379) goto block111; else goto block112;
block111:;
// line 471
frost$core$Int64 $tmp1380 = (frost$core$Int64) {10};
return $tmp1380;
block112:;
frost$core$Int64 $tmp1381 = (frost$core$Int64) {52};
frost$core$Bit $tmp1382 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1381);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp1384 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1385 = *$tmp1384;
org$frostlang$frostc$Variable$Kind* $tmp1386 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp1387 = *$tmp1386;
org$frostlang$frostc$FixedArray** $tmp1388 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1389 = *$tmp1388;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
org$frostlang$frostc$FixedArray* $tmp1390 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local41) = $tmp1389;
// line 474
frost$core$Int64 $tmp1391 = (frost$core$Int64) {0};
*(&local42) = $tmp1391;
// line 475
org$frostlang$frostc$FixedArray* $tmp1392 = *(&local41);
ITable* $tmp1393 = ((frost$collections$Iterable*) $tmp1392)->$class->itable;
while ($tmp1393->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1393 = $tmp1393->next;
}
$fn1395 $tmp1394 = $tmp1393->methods[0];
frost$collections$Iterator* $tmp1396 = $tmp1394(((frost$collections$Iterable*) $tmp1392));
goto block115;
block115:;
ITable* $tmp1397 = $tmp1396->$class->itable;
while ($tmp1397->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1397 = $tmp1397->next;
}
$fn1399 $tmp1398 = $tmp1397->methods[0];
frost$core$Bit $tmp1400 = $tmp1398($tmp1396);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block117; else goto block116;
block116:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1402 = $tmp1396->$class->itable;
while ($tmp1402->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1402 = $tmp1402->next;
}
$fn1404 $tmp1403 = $tmp1402->methods[1];
frost$core$Object* $tmp1405 = $tmp1403($tmp1396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1405)));
org$frostlang$frostc$ASTNode* $tmp1406 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1405);
// line 476
frost$core$Int64 $tmp1407 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1408 = *(&local43);
frost$core$Int64 $tmp1409 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1408);
int64_t $tmp1410 = $tmp1407.value;
int64_t $tmp1411 = $tmp1409.value;
int64_t $tmp1412 = $tmp1410 + $tmp1411;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {$tmp1412};
*(&local42) = $tmp1413;
frost$core$Frost$unref$frost$core$Object$Q($tmp1405);
org$frostlang$frostc$ASTNode* $tmp1414 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block115;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// line 478
frost$core$Int64 $tmp1415 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1416 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1415;
block114:;
frost$core$Int64 $tmp1417 = (frost$core$Int64) {53};
frost$core$Bit $tmp1418 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1417);
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block118; else goto block119;
block118:;
org$frostlang$frostc$Position* $tmp1420 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1421 = *$tmp1420;
org$frostlang$frostc$FixedArray** $tmp1422 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1423 = *$tmp1422;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
org$frostlang$frostc$FixedArray* $tmp1424 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local44) = $tmp1423;
org$frostlang$frostc$FixedArray** $tmp1425 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1426 = *$tmp1425;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
org$frostlang$frostc$FixedArray* $tmp1427 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local45) = $tmp1426;
// line 481
frost$core$Int64 $tmp1428 = (frost$core$Int64) {0};
*(&local46) = $tmp1428;
// line 482
org$frostlang$frostc$FixedArray* $tmp1429 = *(&local44);
ITable* $tmp1430 = ((frost$collections$Iterable*) $tmp1429)->$class->itable;
while ($tmp1430->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[0];
frost$collections$Iterator* $tmp1433 = $tmp1431(((frost$collections$Iterable*) $tmp1429));
goto block120;
block120:;
ITable* $tmp1434 = $tmp1433->$class->itable;
while ($tmp1434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[0];
frost$core$Bit $tmp1437 = $tmp1435($tmp1433);
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block122; else goto block121;
block121:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1439 = $tmp1433->$class->itable;
while ($tmp1439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1439 = $tmp1439->next;
}
$fn1441 $tmp1440 = $tmp1439->methods[1];
frost$core$Object* $tmp1442 = $tmp1440($tmp1433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1442)));
org$frostlang$frostc$ASTNode* $tmp1443 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1442);
// line 483
frost$core$Int64 $tmp1444 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1445 = *(&local47);
frost$core$Int64 $tmp1446 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1445);
int64_t $tmp1447 = $tmp1444.value;
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447 + $tmp1448;
frost$core$Int64 $tmp1450 = (frost$core$Int64) {$tmp1449};
*(&local46) = $tmp1450;
frost$core$Frost$unref$frost$core$Object$Q($tmp1442);
org$frostlang$frostc$ASTNode* $tmp1451 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block120;
block122:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// line 485
org$frostlang$frostc$FixedArray* $tmp1452 = *(&local45);
ITable* $tmp1453 = ((frost$collections$Iterable*) $tmp1452)->$class->itable;
while ($tmp1453->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1453 = $tmp1453->next;
}
$fn1455 $tmp1454 = $tmp1453->methods[0];
frost$collections$Iterator* $tmp1456 = $tmp1454(((frost$collections$Iterable*) $tmp1452));
goto block123;
block123:;
ITable* $tmp1457 = $tmp1456->$class->itable;
while ($tmp1457->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1457 = $tmp1457->next;
}
$fn1459 $tmp1458 = $tmp1457->methods[0];
frost$core$Bit $tmp1460 = $tmp1458($tmp1456);
bool $tmp1461 = $tmp1460.value;
if ($tmp1461) goto block125; else goto block124;
block124:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1462 = $tmp1456->$class->itable;
while ($tmp1462->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1462 = $tmp1462->next;
}
$fn1464 $tmp1463 = $tmp1462->methods[1];
frost$core$Object* $tmp1465 = $tmp1463($tmp1456);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1465)));
org$frostlang$frostc$ASTNode* $tmp1466 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1465);
// line 486
frost$core$Int64 $tmp1467 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1468 = *(&local48);
frost$core$Int64 $tmp1469 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1468);
int64_t $tmp1470 = $tmp1467.value;
int64_t $tmp1471 = $tmp1469.value;
int64_t $tmp1472 = $tmp1470 + $tmp1471;
frost$core$Int64 $tmp1473 = (frost$core$Int64) {$tmp1472};
*(&local46) = $tmp1473;
frost$core$Frost$unref$frost$core$Object$Q($tmp1465);
org$frostlang$frostc$ASTNode* $tmp1474 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// line 488
frost$core$Int64 $tmp1475 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1476 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1477 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1475;
block119:;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {54};
frost$core$Bit $tmp1479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp807, $tmp1478);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp1481 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1482 = *$tmp1481;
frost$core$String** $tmp1483 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1484 = *$tmp1483;
org$frostlang$frostc$ASTNode** $tmp1485 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1486 = *$tmp1485;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1486));
org$frostlang$frostc$ASTNode* $tmp1487 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local49) = $tmp1486;
org$frostlang$frostc$FixedArray** $tmp1488 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1489 = *$tmp1488;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
org$frostlang$frostc$FixedArray* $tmp1490 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local50) = $tmp1489;
// line 491
org$frostlang$frostc$ASTNode* $tmp1491 = *(&local49);
frost$core$Int64 $tmp1492 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1491);
*(&local51) = $tmp1492;
// line 492
org$frostlang$frostc$FixedArray* $tmp1493 = *(&local50);
ITable* $tmp1494 = ((frost$collections$Iterable*) $tmp1493)->$class->itable;
while ($tmp1494->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1494 = $tmp1494->next;
}
$fn1496 $tmp1495 = $tmp1494->methods[0];
frost$collections$Iterator* $tmp1497 = $tmp1495(((frost$collections$Iterable*) $tmp1493));
goto block128;
block128:;
ITable* $tmp1498 = $tmp1497->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[0];
frost$core$Bit $tmp1501 = $tmp1499($tmp1497);
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block130; else goto block129;
block129:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1503 = $tmp1497->$class->itable;
while ($tmp1503->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1503 = $tmp1503->next;
}
$fn1505 $tmp1504 = $tmp1503->methods[1];
frost$core$Object* $tmp1506 = $tmp1504($tmp1497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1506)));
org$frostlang$frostc$ASTNode* $tmp1507 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1506);
// line 493
frost$core$Int64 $tmp1508 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1509 = *(&local52);
frost$core$Int64 $tmp1510 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1509);
int64_t $tmp1511 = $tmp1508.value;
int64_t $tmp1512 = $tmp1510.value;
int64_t $tmp1513 = $tmp1511 + $tmp1512;
frost$core$Int64 $tmp1514 = (frost$core$Int64) {$tmp1513};
*(&local51) = $tmp1514;
frost$core$Frost$unref$frost$core$Object$Q($tmp1506);
org$frostlang$frostc$ASTNode* $tmp1515 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block128;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
// line 495
frost$core$Int64 $tmp1516 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1517 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1518 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1516;
block127:;
// line 498
frost$core$Bit $tmp1519 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block131; else goto block132;
block132:;
frost$core$Int64 $tmp1521 = (frost$core$Int64) {498};
frost$core$String* $tmp1522 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1523, ((frost$core$Object*) param1));
frost$core$String* $tmp1524 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1522, &$s1525);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1526, $tmp1521, $tmp1524);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
abort(); // unreachable
block131:;
// line 499
goto block133;
block133:;
goto block133;
block134:;
goto block1;
block1:;
goto block135;
block135:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 505
frost$core$Weak** $tmp1527 = &param0->compiler;
frost$core$Weak* $tmp1528 = *$tmp1527;
frost$core$Object* $tmp1529 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1528);
org$frostlang$frostc$Compiler$Settings** $tmp1530 = &((org$frostlang$frostc$Compiler*) $tmp1529)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1531 = *$tmp1530;
frost$core$Int64* $tmp1532 = &$tmp1531->optimizationLevel;
frost$core$Int64 $tmp1533 = *$tmp1532;
frost$core$Int64 $tmp1534 = (frost$core$Int64) {0};
int64_t $tmp1535 = $tmp1533.value;
int64_t $tmp1536 = $tmp1534.value;
bool $tmp1537 = $tmp1535 > $tmp1536;
frost$core$Bit $tmp1538 = (frost$core$Bit) {$tmp1537};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block3; else goto block4;
block3:;
frost$core$Bit $tmp1540 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1541 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1540);
*(&local1) = $tmp1541;
goto block5;
block4:;
*(&local1) = $tmp1538;
goto block5;
block5:;
frost$core$Bit $tmp1542 = *(&local1);
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp1544 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
*(&local0) = $tmp1544;
goto block8;
block7:;
*(&local0) = $tmp1542;
goto block8;
block8:;
frost$core$Bit $tmp1545 = *(&local0);
bool $tmp1546 = $tmp1545.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1529);
if ($tmp1546) goto block1; else goto block2;
block1:;
// line 507
frost$core$Int64 $tmp1547 = (frost$core$Int64) {0};
*(&local2) = $tmp1547;
// line 508
ITable* $tmp1548 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1548->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1548 = $tmp1548->next;
}
$fn1550 $tmp1549 = $tmp1548->methods[0];
frost$collections$Iterator* $tmp1551 = $tmp1549(((frost$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1552 = $tmp1551->$class->itable;
while ($tmp1552->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1552 = $tmp1552->next;
}
$fn1554 $tmp1553 = $tmp1552->methods[0];
frost$core$Bit $tmp1555 = $tmp1553($tmp1551);
bool $tmp1556 = $tmp1555.value;
if ($tmp1556) goto block11; else goto block10;
block10:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1557 = $tmp1551->$class->itable;
while ($tmp1557->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1557 = $tmp1557->next;
}
$fn1559 $tmp1558 = $tmp1557->methods[1];
frost$core$Object* $tmp1560 = $tmp1558($tmp1551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1560)));
org$frostlang$frostc$ASTNode* $tmp1561 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1560);
// line 509
frost$core$Int64 $tmp1562 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1563 = *(&local3);
frost$core$Int64 $tmp1564 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1563);
int64_t $tmp1565 = $tmp1562.value;
int64_t $tmp1566 = $tmp1564.value;
int64_t $tmp1567 = $tmp1565 + $tmp1566;
frost$core$Int64 $tmp1568 = (frost$core$Int64) {$tmp1567};
*(&local2) = $tmp1568;
// line 510
frost$core$Int64 $tmp1569 = *(&local2);
frost$core$Int64 $tmp1570 = (frost$core$Int64) {10};
int64_t $tmp1571 = $tmp1569.value;
int64_t $tmp1572 = $tmp1570.value;
bool $tmp1573 = $tmp1571 > $tmp1572;
frost$core$Bit $tmp1574 = (frost$core$Bit) {$tmp1573};
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block12; else goto block13;
block12:;
// line 511
frost$core$Bit $tmp1576 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1560);
org$frostlang$frostc$ASTNode* $tmp1577 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
return $tmp1576;
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1560);
org$frostlang$frostc$ASTNode* $tmp1578 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
// line 514
frost$core$Bit $tmp1579 = frost$core$Bit$init$builtin_bit(true);
return $tmp1579;
block2:;
// line 516
frost$core$Bit $tmp1580 = frost$core$Bit$init$builtin_bit(false);
return $tmp1580;

}
org$frostlang$frostc$MethodDecl* org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Annotations* local3 = NULL;
frost$core$Bit local4;
frost$core$Bit local5;
frost$collections$Array* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
frost$core$String* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
frost$collections$Array* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
frost$core$String* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
org$frostlang$frostc$Type* local18 = NULL;
frost$core$Bit local19;
frost$core$Bit local20;
frost$core$Bit local21;
frost$core$Bit local22;
// line 523
*(&local0) = ((frost$core$String*) NULL);
// line 525
frost$core$Bit $tmp1581 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block1; else goto block3;
block1:;
// line 526
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1583 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 529
frost$core$Int64* $tmp1584 = &param3->$rawValue;
frost$core$Int64 $tmp1585 = *$tmp1584;
frost$core$Int64 $tmp1586 = (frost$core$Int64) {40};
frost$core$Bit $tmp1587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1585, $tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1589 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1590 = *$tmp1589;
*(&local1) = $tmp1590;
frost$core$String** $tmp1591 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1592 = *$tmp1591;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1592));
frost$core$String* $tmp1593 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local2) = $tmp1592;
// line 531
frost$core$String* $tmp1594 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
frost$core$String* $tmp1595 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
*(&local0) = $tmp1594;
frost$core$String* $tmp1596 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 534
frost$core$Bit $tmp1597 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1599 = (frost$core$Int64) {534};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1600, $tmp1599);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 538
org$frostlang$frostc$Annotations* $tmp1601 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
org$frostlang$frostc$Annotations* $tmp1602 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local3) = $tmp1601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
// line 539
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1603;
$tmp1603 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1603->value = param5;
frost$core$Int64 $tmp1604 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1605 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1604);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1606;
$tmp1606 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1606->value = $tmp1605;
ITable* $tmp1607 = ((frost$core$Equatable*) $tmp1603)->$class->itable;
while ($tmp1607->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1607 = $tmp1607->next;
}
$fn1609 $tmp1608 = $tmp1607->methods[1];
frost$core$Bit $tmp1610 = $tmp1608(((frost$core$Equatable*) $tmp1603), ((frost$core$Equatable*) $tmp1606));
bool $tmp1611 = $tmp1610.value;
if ($tmp1611) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Annotations** $tmp1612 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1613 = *$tmp1612;
frost$core$Bit $tmp1614 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1613);
*(&local5) = $tmp1614;
goto block13;
block12:;
*(&local5) = $tmp1610;
goto block13;
block13:;
frost$core$Bit $tmp1615 = *(&local5);
bool $tmp1616 = $tmp1615.value;
if ($tmp1616) goto block14; else goto block15;
block14:;
*(&local4) = $tmp1615;
goto block16;
block15:;
org$frostlang$frostc$Annotations* $tmp1617 = *(&local3);
frost$core$Bit $tmp1618 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1617);
*(&local4) = $tmp1618;
goto block16;
block16:;
frost$core$Bit $tmp1619 = *(&local4);
bool $tmp1620 = $tmp1619.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1606)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1603)));
if ($tmp1620) goto block9; else goto block10;
block9:;
// line 540
org$frostlang$frostc$Annotations* $tmp1621 = *(&local3);
frost$core$Int64* $tmp1622 = &$tmp1621->flags;
frost$core$Int64 $tmp1623 = *$tmp1622;
frost$core$Int64 $tmp1624 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1625 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1623, $tmp1624);
frost$core$Int64* $tmp1626 = &$tmp1621->flags;
*$tmp1626 = $tmp1625;
goto block10;
block10:;
// line 542
*(&local6) = ((frost$collections$Array*) NULL);
// line 543
frost$core$Bit $tmp1627 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block17; else goto block19;
block17:;
// line 544
frost$collections$Array* $tmp1629 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
frost$collections$Array* $tmp1630 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
*(&local6) = $tmp1629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
// line 545
frost$core$String** $tmp1631 = &param1->name;
frost$core$String* $tmp1632 = *$tmp1631;
frost$core$String* $tmp1633 = frost$core$String$get_asString$R$frost$core$String($tmp1632);
frost$core$String* $tmp1634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1633, &$s1635);
frost$core$String* $tmp1636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1634, param6);
frost$core$String* $tmp1637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1636, &$s1638);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
frost$core$String* $tmp1639 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local7) = $tmp1637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// line 546
ITable* $tmp1640 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1640->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[0];
frost$collections$Iterator* $tmp1643 = $tmp1641(((frost$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1644 = $tmp1643->$class->itable;
while ($tmp1644->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1644 = $tmp1644->next;
}
$fn1646 $tmp1645 = $tmp1644->methods[0];
frost$core$Bit $tmp1647 = $tmp1645($tmp1643);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block22; else goto block21;
block21:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1649 = $tmp1643->$class->itable;
while ($tmp1649->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[1];
frost$core$Object* $tmp1652 = $tmp1650($tmp1643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1652)));
org$frostlang$frostc$ASTNode* $tmp1653 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1652);
// line 547
*(&local9) = ((frost$core$String*) NULL);
// line 548
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 549
org$frostlang$frostc$ASTNode* $tmp1654 = *(&local8);
frost$core$Int64* $tmp1655 = &$tmp1654->$rawValue;
frost$core$Int64 $tmp1656 = *$tmp1655;
frost$core$Int64 $tmp1657 = (frost$core$Int64) {22};
frost$core$Bit $tmp1658 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1656, $tmp1657);
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp1660 = (org$frostlang$frostc$Position*) ($tmp1654->$data + 0);
org$frostlang$frostc$Position $tmp1661 = *$tmp1660;
frost$core$String** $tmp1662 = (frost$core$String**) ($tmp1654->$data + 16);
frost$core$String* $tmp1663 = *$tmp1662;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
frost$core$String* $tmp1664 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local11) = $tmp1663;
// line 551
frost$core$String* $tmp1665 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
frost$core$String* $tmp1666 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local9) = $tmp1665;
// line 552
org$frostlang$frostc$Type* $tmp1667 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
org$frostlang$frostc$Type* $tmp1668 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local10) = $tmp1667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
frost$core$String* $tmp1669 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
*(&local11) = ((frost$core$String*) NULL);
goto block23;
block25:;
frost$core$Int64 $tmp1670 = (frost$core$Int64) {47};
frost$core$Bit $tmp1671 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1656, $tmp1670);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp1673 = (org$frostlang$frostc$Position*) ($tmp1654->$data + 0);
org$frostlang$frostc$Position $tmp1674 = *$tmp1673;
frost$core$String** $tmp1675 = (frost$core$String**) ($tmp1654->$data + 16);
frost$core$String* $tmp1676 = *$tmp1675;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
frost$core$String* $tmp1677 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local12) = $tmp1676;
org$frostlang$frostc$ASTNode** $tmp1678 = (org$frostlang$frostc$ASTNode**) ($tmp1654->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1679 = *$tmp1678;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
org$frostlang$frostc$ASTNode* $tmp1680 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local13) = $tmp1679;
// line 555
frost$core$String* $tmp1681 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
frost$core$String* $tmp1682 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
*(&local9) = $tmp1681;
// line 556
org$frostlang$frostc$ASTNode* $tmp1683 = *(&local13);
org$frostlang$frostc$Type* $tmp1684 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1683);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
org$frostlang$frostc$Type* $tmp1685 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
*(&local10) = $tmp1684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
org$frostlang$frostc$ASTNode* $tmp1686 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1687 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local12) = ((frost$core$String*) NULL);
goto block23;
block27:;
// line 559
frost$core$Bit $tmp1688 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp1690 = (frost$core$Int64) {559};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1691, $tmp1690);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 562
frost$collections$Array* $tmp1692 = *(&local6);
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp1693 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp1694 = *(&local8);
$fn1696 $tmp1695 = ($fn1696) $tmp1694->$class->vtable[2];
org$frostlang$frostc$Position $tmp1697 = $tmp1695($tmp1694);
frost$core$String* $tmp1698 = *(&local7);
frost$core$String* $tmp1699 = *(&local9);
org$frostlang$frostc$Type* $tmp1700 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp1693, $tmp1697, $tmp1698, $tmp1699, $tmp1700);
frost$collections$Array$add$frost$collections$Array$T($tmp1692, ((frost$core$Object*) $tmp1693));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
org$frostlang$frostc$Type* $tmp1701 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1702 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1652);
org$frostlang$frostc$ASTNode* $tmp1703 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$String* $tmp1704 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local7) = ((frost$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 567
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1705 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local6) = ((frost$collections$Array*) NULL);
goto block18;
block18:;
// line 569
frost$collections$Array* $tmp1706 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1706);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
frost$collections$Array* $tmp1707 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local14) = $tmp1706;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
// line 570
ITable* $tmp1708 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1708->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1708 = $tmp1708->next;
}
$fn1710 $tmp1709 = $tmp1708->methods[0];
frost$collections$Iterator* $tmp1711 = $tmp1709(((frost$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1712 = $tmp1711->$class->itable;
while ($tmp1712->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1712 = $tmp1712->next;
}
$fn1714 $tmp1713 = $tmp1712->methods[0];
frost$core$Bit $tmp1715 = $tmp1713($tmp1711);
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block32; else goto block31;
block31:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1717 = $tmp1711->$class->itable;
while ($tmp1717->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1717 = $tmp1717->next;
}
$fn1719 $tmp1718 = $tmp1717->methods[1];
frost$core$Object* $tmp1720 = $tmp1718($tmp1711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1720)));
org$frostlang$frostc$ASTNode* $tmp1721 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1720);
// line 571
org$frostlang$frostc$ASTNode* $tmp1722 = *(&local15);
frost$core$Int64* $tmp1723 = &$tmp1722->$rawValue;
frost$core$Int64 $tmp1724 = *$tmp1723;
frost$core$Int64 $tmp1725 = (frost$core$Int64) {34};
frost$core$Bit $tmp1726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1724, $tmp1725);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp1728 = (org$frostlang$frostc$Position*) ($tmp1722->$data + 0);
org$frostlang$frostc$Position $tmp1729 = *$tmp1728;
frost$core$String** $tmp1730 = (frost$core$String**) ($tmp1722->$data + 16);
frost$core$String* $tmp1731 = *$tmp1730;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
frost$core$String* $tmp1732 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local16) = $tmp1731;
org$frostlang$frostc$ASTNode** $tmp1733 = (org$frostlang$frostc$ASTNode**) ($tmp1722->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1734 = *$tmp1733;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
org$frostlang$frostc$ASTNode* $tmp1735 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local17) = $tmp1734;
// line 573
frost$collections$Array* $tmp1736 = *(&local14);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1737 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1738 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1739 = *(&local17);
org$frostlang$frostc$Type* $tmp1740 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1739);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1737, $tmp1738, $tmp1740);
frost$collections$Array$add$frost$collections$Array$T($tmp1736, ((frost$core$Object*) $tmp1737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
org$frostlang$frostc$ASTNode* $tmp1741 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1742 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local16) = ((frost$core$String*) NULL);
goto block33;
block35:;
// line 576
frost$core$Bit $tmp1743 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {576};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1746, $tmp1745);
abort(); // unreachable
block36:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1720);
org$frostlang$frostc$ASTNode* $tmp1747 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
// line 580
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// line 581
frost$core$Bit $tmp1748 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block38; else goto block40;
block38:;
// line 582
org$frostlang$frostc$Type* $tmp1750 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
org$frostlang$frostc$Type* $tmp1751 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local18) = $tmp1750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
goto block39;
block40:;
// line 1
// line 585
org$frostlang$frostc$Type* $tmp1752 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
org$frostlang$frostc$Type* $tmp1753 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local18) = $tmp1752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
goto block39;
block39:;
// line 587
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1754;
$tmp1754 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1754->value = param5;
frost$core$Int64 $tmp1755 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1756 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1755);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1757;
$tmp1757 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1757->value = $tmp1756;
ITable* $tmp1758 = ((frost$core$Equatable*) $tmp1754)->$class->itable;
while ($tmp1758->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1758 = $tmp1758->next;
}
$fn1760 $tmp1759 = $tmp1758->methods[0];
frost$core$Bit $tmp1761 = $tmp1759(((frost$core$Equatable*) $tmp1754), ((frost$core$Equatable*) $tmp1757));
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block43; else goto block44;
block43:;
org$frostlang$frostc$Type* $tmp1763 = *(&local18);
org$frostlang$frostc$Type* $tmp1764 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1765 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1763, $tmp1764);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
*(&local19) = $tmp1765;
goto block45;
block44:;
*(&local19) = $tmp1761;
goto block45;
block45:;
frost$core$Bit $tmp1766 = *(&local19);
bool $tmp1767 = $tmp1766.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1757)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1754)));
if ($tmp1767) goto block41; else goto block42;
block41:;
// line 588
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1768);
goto block42;
block42:;
// line 590
frost$core$Bit $tmp1769 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Annotations* $tmp1771 = *(&local3);
frost$core$Bit $tmp1772 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1771, ((frost$collections$ListView*) param10));
*(&local20) = $tmp1772;
goto block50;
block49:;
*(&local20) = $tmp1769;
goto block50;
block50:;
frost$core$Bit $tmp1773 = *(&local20);
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block46; else goto block47;
block46:;
// line 591
org$frostlang$frostc$Annotations* $tmp1775 = *(&local3);
frost$core$Int64* $tmp1776 = &$tmp1775->flags;
frost$core$Int64 $tmp1777 = *$tmp1776;
frost$core$Int64 $tmp1778 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1779 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1777, $tmp1778);
frost$core$Int64* $tmp1780 = &$tmp1775->flags;
*$tmp1780 = $tmp1779;
goto block47;
block47:;
// line 593
frost$core$Bit $tmp1781 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block53; else goto block54;
block53:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1783 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1784 = *$tmp1783;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1785;
$tmp1785 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1785->value = $tmp1784;
frost$core$Int64 $tmp1786 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp1787 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1786);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1788;
$tmp1788 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1788->value = $tmp1787;
ITable* $tmp1789 = ((frost$core$Equatable*) $tmp1785)->$class->itable;
while ($tmp1789->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1789 = $tmp1789->next;
}
$fn1791 $tmp1790 = $tmp1789->methods[0];
frost$core$Bit $tmp1792 = $tmp1790(((frost$core$Equatable*) $tmp1785), ((frost$core$Equatable*) $tmp1788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1788)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1785)));
*(&local22) = $tmp1792;
goto block55;
block54:;
*(&local22) = $tmp1781;
goto block55;
block55:;
frost$core$Bit $tmp1793 = *(&local22);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Annotations** $tmp1795 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1796 = *$tmp1795;
frost$core$Bit $tmp1797 = org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit($tmp1796);
frost$core$Bit $tmp1798 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1797);
*(&local21) = $tmp1798;
goto block58;
block57:;
*(&local21) = $tmp1793;
goto block58;
block58:;
frost$core$Bit $tmp1799 = *(&local21);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block51; else goto block52;
block51:;
// line 595
org$frostlang$frostc$Annotations* $tmp1801 = *(&local3);
frost$core$Int64* $tmp1802 = &$tmp1801->flags;
frost$core$Int64 $tmp1803 = *$tmp1802;
frost$core$Int64 $tmp1804 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1805 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1803, $tmp1804);
frost$core$Int64 $tmp1806 = (frost$core$Int64) {0};
int64_t $tmp1807 = $tmp1805.value;
int64_t $tmp1808 = $tmp1806.value;
bool $tmp1809 = $tmp1807 != $tmp1808;
frost$core$Bit $tmp1810 = (frost$core$Bit) {$tmp1809};
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block59; else goto block60;
block59:;
// line 596
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1812);
goto block60;
block60:;
// line 599
org$frostlang$frostc$Annotations* $tmp1813 = *(&local3);
frost$core$Int64* $tmp1814 = &$tmp1813->flags;
frost$core$Int64 $tmp1815 = *$tmp1814;
frost$core$Int64 $tmp1816 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1817 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1815, $tmp1816);
frost$core$Int64* $tmp1818 = &$tmp1813->flags;
*$tmp1818 = $tmp1817;
goto block52;
block52:;
// line 601
org$frostlang$frostc$MethodDecl* $tmp1819 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp1820 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1821 = *(&local3);
frost$collections$Array* $tmp1822 = *(&local6);
frost$collections$Array* $tmp1823 = *(&local14);
org$frostlang$frostc$Type* $tmp1824 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1819, param1, param2, $tmp1820, $tmp1821, param5, param6, $tmp1822, $tmp1823, $tmp1824, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
org$frostlang$frostc$Type* $tmp1825 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1826 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1827 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp1828 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1829 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1819;

}
void org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$Position local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$FixedArray* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$Position local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
org$frostlang$frostc$MethodDecl$Kind local7;
frost$core$String* local8 = NULL;
org$frostlang$frostc$FixedArray* local9 = NULL;
org$frostlang$frostc$FixedArray* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
org$frostlang$frostc$FixedArray* local12 = NULL;
org$frostlang$frostc$MethodDecl* local13 = NULL;
org$frostlang$frostc$Position local14;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$FixedArray* local16 = NULL;
org$frostlang$frostc$ClassDecl$Kind local17;
frost$core$String* local18 = NULL;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$ClassDecl* local22 = NULL;
org$frostlang$frostc$Position local23;
org$frostlang$frostc$ASTNode* local24 = NULL;
frost$core$String* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
// line 606
frost$core$Int64* $tmp1830 = &param2->$rawValue;
frost$core$Int64 $tmp1831 = *$tmp1830;
frost$core$Int64 $tmp1832 = (frost$core$Int64) {18};
frost$core$Bit $tmp1833 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1831, $tmp1832);
bool $tmp1834 = $tmp1833.value;
if ($tmp1834) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1835 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1836 = *$tmp1835;
*(&local0) = $tmp1836;
org$frostlang$frostc$ASTNode** $tmp1837 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1838 = *$tmp1837;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
org$frostlang$frostc$ASTNode* $tmp1839 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
*(&local1) = $tmp1838;
org$frostlang$frostc$FixedArray** $tmp1840 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1841 = *$tmp1840;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
org$frostlang$frostc$FixedArray* $tmp1842 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
*(&local2) = $tmp1841;
org$frostlang$frostc$ASTNode** $tmp1843 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1844 = *$tmp1843;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
org$frostlang$frostc$ASTNode* $tmp1845 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1845));
*(&local3) = $tmp1844;
// line 608
org$frostlang$frostc$Position $tmp1846 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1847 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1848 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1849 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp1846, $tmp1847, $tmp1848, $tmp1849);
org$frostlang$frostc$ASTNode* $tmp1850 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1851 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1852 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1853 = (frost$core$Int64) {29};
frost$core$Bit $tmp1854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1831, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1856 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1857 = *$tmp1856;
*(&local4) = $tmp1857;
org$frostlang$frostc$ASTNode** $tmp1858 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1859 = *$tmp1858;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
org$frostlang$frostc$ASTNode* $tmp1860 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
*(&local5) = $tmp1859;
org$frostlang$frostc$FixedArray** $tmp1861 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1862 = *$tmp1861;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
org$frostlang$frostc$FixedArray* $tmp1863 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
*(&local6) = $tmp1862;
org$frostlang$frostc$MethodDecl$Kind* $tmp1864 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1865 = *$tmp1864;
*(&local7) = $tmp1865;
frost$core$String** $tmp1866 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1867 = *$tmp1866;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$String* $tmp1868 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local8) = $tmp1867;
org$frostlang$frostc$FixedArray** $tmp1869 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1870 = *$tmp1869;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
org$frostlang$frostc$FixedArray* $tmp1871 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local9) = $tmp1870;
org$frostlang$frostc$FixedArray** $tmp1872 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1873 = *$tmp1872;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
org$frostlang$frostc$FixedArray* $tmp1874 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
*(&local10) = $tmp1873;
org$frostlang$frostc$ASTNode** $tmp1875 = (org$frostlang$frostc$ASTNode**) (param2->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1876 = *$tmp1875;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
org$frostlang$frostc$ASTNode* $tmp1877 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
*(&local11) = $tmp1876;
org$frostlang$frostc$FixedArray** $tmp1878 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1879 = *$tmp1878;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
org$frostlang$frostc$FixedArray* $tmp1880 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local12) = $tmp1879;
// line 612
org$frostlang$frostc$Position $tmp1881 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1882 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1883 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp1884 = *(&local7);
frost$core$String* $tmp1885 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1886 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1887 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp1888 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1889 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp1890 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp1881, $tmp1882, $tmp1883, $tmp1884, $tmp1885, $tmp1886, $tmp1887, $tmp1888, $tmp1889);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
org$frostlang$frostc$MethodDecl* $tmp1891 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
*(&local13) = $tmp1890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
// line 614
org$frostlang$frostc$MethodDecl* $tmp1892 = *(&local13);
frost$core$Bit $tmp1893 = frost$core$Bit$init$builtin_bit($tmp1892 != NULL);
bool $tmp1894 = $tmp1893.value;
if ($tmp1894) goto block6; else goto block7;
block6:;
// line 615
org$frostlang$frostc$SymbolTable** $tmp1895 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1896 = *$tmp1895;
org$frostlang$frostc$MethodDecl* $tmp1897 = *(&local13);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1896, ((org$frostlang$frostc$Symbol*) $tmp1897));
// line 616
frost$collections$Array** $tmp1898 = &param1->methods;
frost$collections$Array* $tmp1899 = *$tmp1898;
org$frostlang$frostc$MethodDecl* $tmp1900 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp1899, ((frost$core$Object*) $tmp1900));
goto block7;
block7:;
org$frostlang$frostc$MethodDecl* $tmp1901 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1902 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1903 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1904 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1905 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1906 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1907 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1908 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp1909 = (frost$core$Int64) {12};
frost$core$Bit $tmp1910 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1831, $tmp1909);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1912 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1913 = *$tmp1912;
*(&local14) = $tmp1913;
org$frostlang$frostc$ASTNode** $tmp1914 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1915 = *$tmp1914;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
org$frostlang$frostc$ASTNode* $tmp1916 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local15) = $tmp1915;
org$frostlang$frostc$FixedArray** $tmp1917 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1918 = *$tmp1917;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
org$frostlang$frostc$FixedArray* $tmp1919 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
*(&local16) = $tmp1918;
org$frostlang$frostc$ClassDecl$Kind* $tmp1920 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp1921 = *$tmp1920;
*(&local17) = $tmp1921;
frost$core$String** $tmp1922 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1923 = *$tmp1922;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
frost$core$String* $tmp1924 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
*(&local18) = $tmp1923;
org$frostlang$frostc$FixedArray** $tmp1925 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1926 = *$tmp1925;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
org$frostlang$frostc$FixedArray* $tmp1927 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
*(&local19) = $tmp1926;
org$frostlang$frostc$FixedArray** $tmp1928 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1929 = *$tmp1928;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
org$frostlang$frostc$FixedArray* $tmp1930 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
*(&local20) = $tmp1929;
org$frostlang$frostc$FixedArray** $tmp1931 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp1932 = *$tmp1931;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
org$frostlang$frostc$FixedArray* $tmp1933 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local21) = $tmp1932;
// line 621
frost$io$File** $tmp1934 = &param1->source;
frost$io$File* $tmp1935 = *$tmp1934;
frost$collections$MapView** $tmp1936 = &param1->aliases;
frost$collections$MapView* $tmp1937 = *$tmp1936;
frost$core$String** $tmp1938 = &param1->name;
frost$core$String* $tmp1939 = *$tmp1938;
org$frostlang$frostc$Position $tmp1940 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp1941 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1942 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp1943 = *(&local17);
frost$core$String* $tmp1944 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp1945 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp1946 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp1947 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp1948 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1935, $tmp1937, $tmp1939, $tmp1940, $tmp1941, $tmp1942, $tmp1943, $tmp1944, $tmp1945, $tmp1946, $tmp1947);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
org$frostlang$frostc$ClassDecl* $tmp1949 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
*(&local22) = $tmp1948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
// line 623
org$frostlang$frostc$ClassDecl* $tmp1950 = *(&local22);
frost$core$Bit $tmp1951 = frost$core$Bit$init$builtin_bit($tmp1950 != NULL);
bool $tmp1952 = $tmp1951.value;
if ($tmp1952) goto block10; else goto block11;
block10:;
// line 624
org$frostlang$frostc$ClassDecl* $tmp1953 = *(&local22);
frost$core$Weak* $tmp1954 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp1954, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$core$Weak** $tmp1955 = &$tmp1953->owner;
frost$core$Weak* $tmp1956 = *$tmp1955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
frost$core$Weak** $tmp1957 = &$tmp1953->owner;
*$tmp1957 = $tmp1954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
// line 625
frost$collections$Array** $tmp1958 = &param1->classes;
frost$collections$Array* $tmp1959 = *$tmp1958;
org$frostlang$frostc$ClassDecl* $tmp1960 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp1959, ((frost$core$Object*) $tmp1960));
// line 626
org$frostlang$frostc$ClassDecl* $tmp1961 = *(&local22);
frost$core$String** $tmp1962 = &$tmp1961->name;
frost$core$String* $tmp1963 = *$tmp1962;
frost$core$String** $tmp1964 = &param1->name;
frost$core$String* $tmp1965 = *$tmp1964;
frost$core$String* $tmp1966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1965, &$s1967);
frost$core$Bit $tmp1968 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1963, $tmp1966);
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {626};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1971, $tmp1970);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// line 627
org$frostlang$frostc$SymbolTable** $tmp1972 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1973 = *$tmp1972;
org$frostlang$frostc$Alias* $tmp1974 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp1975 = *(&local22);
frost$core$String** $tmp1976 = &$tmp1975->name;
frost$core$String* $tmp1977 = *$tmp1976;
frost$core$String** $tmp1978 = &param1->name;
frost$core$String* $tmp1979 = *$tmp1978;
frost$core$Int64 $tmp1980 = frost$core$String$get_length$R$frost$core$Int64($tmp1979);
frost$core$Int64 $tmp1981 = (frost$core$Int64) {1};
int64_t $tmp1982 = $tmp1980.value;
int64_t $tmp1983 = $tmp1981.value;
int64_t $tmp1984 = $tmp1982 + $tmp1983;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {$tmp1984};
frost$core$Bit $tmp1986 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1987 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1985, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1986);
frost$core$String* $tmp1988 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1977, $tmp1987);
org$frostlang$frostc$ClassDecl* $tmp1989 = *(&local22);
org$frostlang$frostc$Type** $tmp1990 = &$tmp1989->type;
org$frostlang$frostc$Type* $tmp1991 = *$tmp1990;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp1974, $tmp1988, $tmp1991);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1973, ((org$frostlang$frostc$Symbol*) $tmp1974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
// line 628
org$frostlang$frostc$ClassDecl* $tmp1992 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp1993 = &$tmp1992->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1994 = *$tmp1993;
org$frostlang$frostc$Alias* $tmp1995 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
frost$core$String* $tmp1996 = org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
org$frostlang$frostc$Type** $tmp1997 = &param1->type;
org$frostlang$frostc$Type* $tmp1998 = *$tmp1997;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp1995, $tmp1996, $tmp1998);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1994, ((org$frostlang$frostc$Symbol*) $tmp1995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp1999 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2000 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2001 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2002 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2003 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2004 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2004));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2005 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2006 = (frost$core$Int64) {10};
frost$core$Bit $tmp2007 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1831, $tmp2006);
bool $tmp2008 = $tmp2007.value;
if ($tmp2008) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2009 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2010 = *$tmp2009;
*(&local23) = $tmp2010;
org$frostlang$frostc$ASTNode** $tmp2011 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2012 = *$tmp2011;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
org$frostlang$frostc$ASTNode* $tmp2013 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
*(&local24) = $tmp2012;
frost$core$String** $tmp2014 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp2015 = *$tmp2014;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
frost$core$String* $tmp2016 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
*(&local25) = $tmp2015;
org$frostlang$frostc$FixedArray** $tmp2017 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2018 = *$tmp2017;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
org$frostlang$frostc$FixedArray* $tmp2019 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local26) = $tmp2018;
// line 632
org$frostlang$frostc$Position $tmp2020 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2021 = *(&local24);
frost$core$String* $tmp2022 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp2023 = *(&local26);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2020, $tmp2021, $tmp2022, $tmp2023);
org$frostlang$frostc$FixedArray* $tmp2024 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2025 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2026 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block15:;
// line 635
frost$core$Bit $tmp2027 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2029 = (frost$core$Int64) {635};
frost$core$String* $tmp2030 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2031, ((frost$core$Object*) param2));
frost$core$String* $tmp2032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2030, &$s2033);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2034, $tmp2029, $tmp2032);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
abort(); // unreachable
block16:;
goto block1;
block1:;
return;

}
void org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, frost$core$String* param4, org$frostlang$frostc$FixedArray* param5) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ChoiceCase* local5 = NULL;
// line 642
*(&local0) = ((frost$core$String*) NULL);
// line 644
frost$core$Bit $tmp2035 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block1; else goto block3;
block1:;
// line 645
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2037 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 648
frost$core$Int64* $tmp2038 = &param3->$rawValue;
frost$core$Int64 $tmp2039 = *$tmp2038;
frost$core$Int64 $tmp2040 = (frost$core$Int64) {40};
frost$core$Bit $tmp2041 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2039, $tmp2040);
bool $tmp2042 = $tmp2041.value;
if ($tmp2042) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2043 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2044 = *$tmp2043;
*(&local1) = $tmp2044;
frost$core$String** $tmp2045 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp2046 = *$tmp2045;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
frost$core$String* $tmp2047 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local2) = $tmp2046;
// line 650
frost$core$String* $tmp2048 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
frost$core$String* $tmp2049 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
*(&local0) = $tmp2048;
frost$core$String* $tmp2050 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 653
frost$core$Bit $tmp2051 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2052 = $tmp2051.value;
if ($tmp2052) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2053 = (frost$core$Int64) {653};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2054, $tmp2053);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 657
frost$collections$Array* $tmp2055 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2055);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
frost$collections$Array* $tmp2056 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local3) = $tmp2055;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
// line 658
ITable* $tmp2057 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2057->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2057 = $tmp2057->next;
}
$fn2059 $tmp2058 = $tmp2057->methods[0];
frost$collections$Iterator* $tmp2060 = $tmp2058(((frost$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp2061 = $tmp2060->$class->itable;
while ($tmp2061->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2061 = $tmp2061->next;
}
$fn2063 $tmp2062 = $tmp2061->methods[0];
frost$core$Bit $tmp2064 = $tmp2062($tmp2060);
bool $tmp2065 = $tmp2064.value;
if ($tmp2065) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2066 = $tmp2060->$class->itable;
while ($tmp2066->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[1];
frost$core$Object* $tmp2069 = $tmp2067($tmp2060);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2069)));
org$frostlang$frostc$ASTNode* $tmp2070 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2069);
// line 659
frost$collections$Array* $tmp2071 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2072 = *(&local4);
org$frostlang$frostc$Type* $tmp2073 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2072);
frost$collections$Array$add$frost$collections$Array$T($tmp2071, ((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
frost$core$Frost$unref$frost$core$Object$Q($tmp2069);
org$frostlang$frostc$ASTNode* $tmp2074 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// line 661
org$frostlang$frostc$ChoiceCase* $tmp2075 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2076 = *(&local0);
frost$collections$Array** $tmp2077 = &param1->choiceCases;
frost$collections$Array* $tmp2078 = *$tmp2077;
ITable* $tmp2079 = ((frost$collections$CollectionView*) $tmp2078)->$class->itable;
while ($tmp2079->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2079 = $tmp2079->next;
}
$fn2081 $tmp2080 = $tmp2079->methods[0];
frost$core$Int64 $tmp2082 = $tmp2080(((frost$collections$CollectionView*) $tmp2078));
frost$collections$Array* $tmp2083 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2075, param1, param2, param4, $tmp2076, $tmp2082, ((frost$collections$ListView*) $tmp2083));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
org$frostlang$frostc$ChoiceCase* $tmp2084 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local5) = $tmp2075;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// line 663
frost$collections$Array** $tmp2085 = &param1->choiceCases;
frost$collections$Array* $tmp2086 = *$tmp2085;
org$frostlang$frostc$ChoiceCase* $tmp2087 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2086, ((frost$core$Object*) $tmp2087));
// line 664
org$frostlang$frostc$SymbolTable** $tmp2088 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2089 = *$tmp2088;
org$frostlang$frostc$ChoiceCase* $tmp2090 = *(&local5);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2089, ((org$frostlang$frostc$Symbol*) $tmp2090));
org$frostlang$frostc$ChoiceCase* $tmp2091 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2092 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2093 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
*(&local0) = ((frost$core$String*) NULL);
return;

}
org$frostlang$frostc$ClassDecl* org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, org$frostlang$frostc$Position param4, org$frostlang$frostc$ASTNode* param5, org$frostlang$frostc$FixedArray* param6, org$frostlang$frostc$ClassDecl$Kind param7, frost$core$String* param8, org$frostlang$frostc$FixedArray* param9, org$frostlang$frostc$FixedArray* param10, org$frostlang$frostc$FixedArray* param11) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Position local2;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Annotations* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
frost$core$String* local9 = NULL;
frost$core$String* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$ClassDecl* local14 = NULL;
org$frostlang$frostc$FieldDecl* local15 = NULL;
org$frostlang$frostc$FieldDecl* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$MethodDecl$Kind local19;
frost$core$Bit local20;
frost$core$Bit local21;
org$frostlang$frostc$MethodDecl* local22 = NULL;
frost$core$Bit local23;
frost$core$Bit local24;
frost$core$Bit local25;
org$frostlang$frostc$MethodDecl* local26 = NULL;
frost$core$Bit local27;
frost$core$Bit local28;
frost$core$Bit local29;
org$frostlang$frostc$MethodDecl* local30 = NULL;
frost$core$Bit local31;
org$frostlang$frostc$ChoiceCase* local32 = NULL;
// line 671
*(&local0) = ((frost$core$String*) NULL);
// line 672
ITable* $tmp2095 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2095->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2095 = $tmp2095->next;
}
$fn2097 $tmp2096 = $tmp2095->methods[1];
frost$core$Bit $tmp2098 = $tmp2096(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2094));
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block1; else goto block3;
block1:;
// line 673
frost$core$String* $tmp2100 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2100, &$s2102);
frost$core$String* $tmp2103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2101, param8);
frost$core$String* $tmp2104 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2103, &$s2105);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
frost$core$String* $tmp2106 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
*(&local0) = $tmp2104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2100));
goto block2;
block3:;
// line 1
// line 676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local0) = param8;
goto block2;
block2:;
// line 678
*(&local1) = ((frost$core$String*) NULL);
// line 680
frost$core$Bit $tmp2108 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block4; else goto block6;
block4:;
// line 681
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2110 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 684
frost$core$Int64* $tmp2111 = &param5->$rawValue;
frost$core$Int64 $tmp2112 = *$tmp2111;
frost$core$Int64 $tmp2113 = (frost$core$Int64) {40};
frost$core$Bit $tmp2114 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2112, $tmp2113);
bool $tmp2115 = $tmp2114.value;
if ($tmp2115) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2116 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2117 = *$tmp2116;
*(&local2) = $tmp2117;
frost$core$String** $tmp2118 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2119 = *$tmp2118;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$String* $tmp2120 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local3) = $tmp2119;
// line 686
frost$core$String* $tmp2121 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$String* $tmp2122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local1) = $tmp2121;
frost$core$String* $tmp2123 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local3) = ((frost$core$String*) NULL);
goto block7;
block9:;
// line 689
frost$core$Bit $tmp2124 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2126 = (frost$core$Int64) {689};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2127, $tmp2126);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 693
org$frostlang$frostc$Annotations* $tmp2128 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Annotations* $tmp2129 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local4) = $tmp2128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
// line 694
frost$collections$Array* $tmp2130 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2130);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
frost$collections$Array* $tmp2131 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local5) = $tmp2130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
// line 695
frost$core$Bit $tmp2132 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2133 = $tmp2132.value;
if ($tmp2133) goto block12; else goto block13;
block12:;
// line 696
ITable* $tmp2134 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2134->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2134 = $tmp2134->next;
}
$fn2136 $tmp2135 = $tmp2134->methods[0];
frost$collections$Iterator* $tmp2137 = $tmp2135(((frost$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2138 = $tmp2137->$class->itable;
while ($tmp2138->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2138 = $tmp2138->next;
}
$fn2140 $tmp2139 = $tmp2138->methods[0];
frost$core$Bit $tmp2141 = $tmp2139($tmp2137);
bool $tmp2142 = $tmp2141.value;
if ($tmp2142) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2143 = $tmp2137->$class->itable;
while ($tmp2143->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2143 = $tmp2143->next;
}
$fn2145 $tmp2144 = $tmp2143->methods[1];
frost$core$Object* $tmp2146 = $tmp2144($tmp2137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2146)));
org$frostlang$frostc$ASTNode* $tmp2147 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2146);
// line 697
*(&local7) = ((frost$core$String*) NULL);
// line 698
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 699
org$frostlang$frostc$ASTNode* $tmp2148 = *(&local6);
frost$core$Int64* $tmp2149 = &$tmp2148->$rawValue;
frost$core$Int64 $tmp2150 = *$tmp2149;
frost$core$Int64 $tmp2151 = (frost$core$Int64) {22};
frost$core$Bit $tmp2152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2150, $tmp2151);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2154 = (org$frostlang$frostc$Position*) ($tmp2148->$data + 0);
org$frostlang$frostc$Position $tmp2155 = *$tmp2154;
frost$core$String** $tmp2156 = (frost$core$String**) ($tmp2148->$data + 16);
frost$core$String* $tmp2157 = *$tmp2156;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$String* $tmp2158 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local9) = $tmp2157;
// line 701
frost$core$String* $tmp2159 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$String* $tmp2160 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
*(&local7) = $tmp2159;
// line 702
org$frostlang$frostc$Type* $tmp2161 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
org$frostlang$frostc$Type* $tmp2162 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local8) = $tmp2161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$core$String* $tmp2163 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp2164 = (frost$core$Int64) {47};
frost$core$Bit $tmp2165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2150, $tmp2164);
bool $tmp2166 = $tmp2165.value;
if ($tmp2166) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp2167 = (org$frostlang$frostc$Position*) ($tmp2148->$data + 0);
org$frostlang$frostc$Position $tmp2168 = *$tmp2167;
frost$core$String** $tmp2169 = (frost$core$String**) ($tmp2148->$data + 16);
frost$core$String* $tmp2170 = *$tmp2169;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$core$String* $tmp2171 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local10) = $tmp2170;
org$frostlang$frostc$ASTNode** $tmp2172 = (org$frostlang$frostc$ASTNode**) ($tmp2148->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2173 = *$tmp2172;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
org$frostlang$frostc$ASTNode* $tmp2174 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local11) = $tmp2173;
// line 705
frost$core$String* $tmp2175 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
frost$core$String* $tmp2176 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
*(&local7) = $tmp2175;
// line 706
org$frostlang$frostc$ASTNode* $tmp2177 = *(&local11);
org$frostlang$frostc$Type* $tmp2178 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
org$frostlang$frostc$Type* $tmp2179 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local8) = $tmp2178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
org$frostlang$frostc$ASTNode* $tmp2180 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2181 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block21:;
// line 709
frost$core$Bit $tmp2182 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2183 = $tmp2182.value;
if ($tmp2183) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2184 = (frost$core$Int64) {709};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2185, $tmp2184);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 712
frost$collections$Array* $tmp2186 = *(&local5);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2187 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2188 = *(&local6);
$fn2190 $tmp2189 = ($fn2190) $tmp2188->$class->vtable[2];
org$frostlang$frostc$Position $tmp2191 = $tmp2189($tmp2188);
frost$core$String* $tmp2192 = *(&local0);
frost$core$String* $tmp2193 = *(&local7);
org$frostlang$frostc$Type* $tmp2194 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2187, $tmp2191, $tmp2192, $tmp2193, $tmp2194);
frost$collections$Array$add$frost$collections$Array$T($tmp2186, ((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
org$frostlang$frostc$Type* $tmp2195 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2196 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2146);
org$frostlang$frostc$ASTNode* $tmp2197 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
goto block13;
block13:;
// line 715
frost$collections$Array* $tmp2198 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2198);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
frost$collections$Array* $tmp2199 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
*(&local12) = $tmp2198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// line 716
frost$core$Bit $tmp2200 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2201 = $tmp2200.value;
if ($tmp2201) goto block24; else goto block25;
block24:;
// line 717
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2202;
$tmp2202 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2202->value = param7;
frost$core$Int64 $tmp2203 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2204 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2203);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2205;
$tmp2205 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2205->value = $tmp2204;
ITable* $tmp2206 = ((frost$core$Equatable*) $tmp2202)->$class->itable;
while ($tmp2206->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2206 = $tmp2206->next;
}
$fn2208 $tmp2207 = $tmp2206->methods[0];
frost$core$Bit $tmp2209 = $tmp2207(((frost$core$Equatable*) $tmp2202), ((frost$core$Equatable*) $tmp2205));
bool $tmp2210 = $tmp2209.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2205)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2202)));
if ($tmp2210) goto block26; else goto block27;
block26:;
// line 718
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2211);
goto block27;
block27:;
// line 720
ITable* $tmp2212 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2212->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2212 = $tmp2212->next;
}
$fn2214 $tmp2213 = $tmp2212->methods[0];
frost$collections$Iterator* $tmp2215 = $tmp2213(((frost$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2216 = $tmp2215->$class->itable;
while ($tmp2216->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2216 = $tmp2216->next;
}
$fn2218 $tmp2217 = $tmp2216->methods[0];
frost$core$Bit $tmp2219 = $tmp2217($tmp2215);
bool $tmp2220 = $tmp2219.value;
if ($tmp2220) goto block30; else goto block29;
block29:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2221 = $tmp2215->$class->itable;
while ($tmp2221->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2221 = $tmp2221->next;
}
$fn2223 $tmp2222 = $tmp2221->methods[1];
frost$core$Object* $tmp2224 = $tmp2222($tmp2215);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2224)));
org$frostlang$frostc$ASTNode* $tmp2225 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp2224);
// line 721
frost$collections$Array* $tmp2226 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2227 = *(&local13);
org$frostlang$frostc$Type* $tmp2228 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2227);
frost$collections$Array$add$frost$collections$Array$T($tmp2226, ((frost$core$Object*) $tmp2228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
frost$core$Frost$unref$frost$core$Object$Q($tmp2224);
org$frostlang$frostc$ASTNode* $tmp2229 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
goto block25;
block25:;
// line 724
org$frostlang$frostc$ClassDecl* $tmp2230 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2231 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2232 = *(&local4);
frost$core$String* $tmp2233 = *(&local0);
frost$collections$Array* $tmp2234 = *(&local12);
frost$collections$Array* $tmp2235 = *(&local5);
frost$core$Weak** $tmp2236 = &param0->compiler;
frost$core$Weak* $tmp2237 = *$tmp2236;
frost$core$Object* $tmp2238 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2237);
org$frostlang$frostc$SymbolTable** $tmp2239 = &((org$frostlang$frostc$Compiler*) $tmp2238)->root;
org$frostlang$frostc$SymbolTable* $tmp2240 = *$tmp2239;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2230, param1, param4, param2, $tmp2231, $tmp2232, param7, $tmp2233, ((frost$collections$ListView*) $tmp2234), $tmp2235, $tmp2240);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
org$frostlang$frostc$ClassDecl* $tmp2241 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
*(&local14) = $tmp2230;
frost$core$Frost$unref$frost$core$Object$Q($tmp2238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2230));
// line 726
frost$core$Weak** $tmp2242 = &param0->compiler;
frost$core$Weak* $tmp2243 = *$tmp2242;
frost$core$Object* $tmp2244 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2243);
frost$collections$Stack** $tmp2245 = &((org$frostlang$frostc$Compiler*) $tmp2244)->currentClass;
frost$collections$Stack* $tmp2246 = *$tmp2245;
org$frostlang$frostc$ClassDecl* $tmp2247 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2246, ((frost$core$Object*) $tmp2247));
frost$core$Frost$unref$frost$core$Object$Q($tmp2244);
// line 727
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2248;
$tmp2248 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2248->value = param7;
frost$core$Int64 $tmp2249 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2250 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2249);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2251;
$tmp2251 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2251->value = $tmp2250;
ITable* $tmp2252 = ((frost$core$Equatable*) $tmp2248)->$class->itable;
while ($tmp2252->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2252 = $tmp2252->next;
}
$fn2254 $tmp2253 = $tmp2252->methods[0];
frost$core$Bit $tmp2255 = $tmp2253(((frost$core$Equatable*) $tmp2248), ((frost$core$Equatable*) $tmp2251));
bool $tmp2256 = $tmp2255.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2251)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2248)));
if ($tmp2256) goto block31; else goto block32;
block31:;
// line 728
org$frostlang$frostc$FieldDecl* $tmp2257 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2258 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2259 = *(&local14);
org$frostlang$frostc$Position* $tmp2260 = &$tmp2259->position;
org$frostlang$frostc$Position $tmp2261 = *$tmp2260;
org$frostlang$frostc$Annotations* $tmp2262 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2263 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2262, $tmp2263);
frost$core$Int64 $tmp2264 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2265 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2264);
org$frostlang$frostc$Type* $tmp2266 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2257, $tmp2258, $tmp2261, ((frost$core$String*) NULL), $tmp2262, $tmp2265, &$s2267, $tmp2266, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
org$frostlang$frostc$FieldDecl* $tmp2268 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local15) = $tmp2257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
// line 731
org$frostlang$frostc$ClassDecl* $tmp2269 = *(&local14);
frost$collections$Array** $tmp2270 = &$tmp2269->fields;
frost$collections$Array* $tmp2271 = *$tmp2270;
org$frostlang$frostc$FieldDecl* $tmp2272 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2271, ((frost$core$Object*) $tmp2272));
// line 732
org$frostlang$frostc$ClassDecl* $tmp2273 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2274 = &$tmp2273->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2275 = *$tmp2274;
org$frostlang$frostc$FieldDecl* $tmp2276 = *(&local15);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2275, ((org$frostlang$frostc$Symbol*) $tmp2276));
// line 733
org$frostlang$frostc$FieldDecl* $tmp2277 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2278 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2279 = *(&local14);
org$frostlang$frostc$Position* $tmp2280 = &$tmp2279->position;
org$frostlang$frostc$Position $tmp2281 = *$tmp2280;
org$frostlang$frostc$Annotations* $tmp2282 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2283 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2282, $tmp2283);
frost$core$Int64 $tmp2284 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2285 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2284);
org$frostlang$frostc$Type* $tmp2286 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2277, $tmp2278, $tmp2281, ((frost$core$String*) NULL), $tmp2282, $tmp2285, &$s2287, $tmp2286, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
org$frostlang$frostc$FieldDecl* $tmp2288 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local16) = $tmp2277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
// line 736
org$frostlang$frostc$ClassDecl* $tmp2289 = *(&local14);
frost$collections$Array** $tmp2290 = &$tmp2289->fields;
frost$collections$Array* $tmp2291 = *$tmp2290;
org$frostlang$frostc$FieldDecl* $tmp2292 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2291, ((frost$core$Object*) $tmp2292));
// line 737
org$frostlang$frostc$ClassDecl* $tmp2293 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2294 = &$tmp2293->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2295 = *$tmp2294;
org$frostlang$frostc$FieldDecl* $tmp2296 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2295, ((org$frostlang$frostc$Symbol*) $tmp2296));
org$frostlang$frostc$FieldDecl* $tmp2297 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2298 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block32;
block32:;
// line 739
ITable* $tmp2299 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2299->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2299 = $tmp2299->next;
}
$fn2301 $tmp2300 = $tmp2299->methods[0];
frost$collections$Iterator* $tmp2302 = $tmp2300(((frost$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2303 = $tmp2302->$class->itable;
while ($tmp2303->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2303 = $tmp2303->next;
}
$fn2305 $tmp2304 = $tmp2303->methods[0];
frost$core$Bit $tmp2306 = $tmp2304($tmp2302);
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block35; else goto block34;
block34:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2308 = $tmp2302->$class->itable;
while ($tmp2308->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2308 = $tmp2308->next;
}
$fn2310 $tmp2309 = $tmp2308->methods[1];
frost$core$Object* $tmp2311 = $tmp2309($tmp2302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2311)));
org$frostlang$frostc$ASTNode* $tmp2312 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2311);
// line 740
org$frostlang$frostc$ASTNode* $tmp2313 = *(&local17);
frost$core$Int64* $tmp2314 = &$tmp2313->$rawValue;
frost$core$Int64 $tmp2315 = *$tmp2314;
frost$core$Int64 $tmp2316 = (frost$core$Int64) {29};
frost$core$Bit $tmp2317 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2315, $tmp2316);
bool $tmp2318 = $tmp2317.value;
if ($tmp2318) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp2319 = (org$frostlang$frostc$Position*) ($tmp2313->$data + 0);
org$frostlang$frostc$Position $tmp2320 = *$tmp2319;
*(&local18) = $tmp2320;
org$frostlang$frostc$ASTNode** $tmp2321 = (org$frostlang$frostc$ASTNode**) ($tmp2313->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2322 = *$tmp2321;
org$frostlang$frostc$FixedArray** $tmp2323 = (org$frostlang$frostc$FixedArray**) ($tmp2313->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2324 = *$tmp2323;
org$frostlang$frostc$MethodDecl$Kind* $tmp2325 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2313->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2326 = *$tmp2325;
*(&local19) = $tmp2326;
frost$core$String** $tmp2327 = (frost$core$String**) ($tmp2313->$data + 40);
frost$core$String* $tmp2328 = *$tmp2327;
org$frostlang$frostc$FixedArray** $tmp2329 = (org$frostlang$frostc$FixedArray**) ($tmp2313->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2330 = *$tmp2329;
org$frostlang$frostc$FixedArray** $tmp2331 = (org$frostlang$frostc$FixedArray**) ($tmp2313->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2332 = *$tmp2331;
org$frostlang$frostc$ASTNode** $tmp2333 = (org$frostlang$frostc$ASTNode**) ($tmp2313->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2334 = *$tmp2333;
org$frostlang$frostc$FixedArray** $tmp2335 = (org$frostlang$frostc$FixedArray**) ($tmp2313->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2336 = *$tmp2335;
// line 742
org$frostlang$frostc$MethodDecl$Kind $tmp2337 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2338;
$tmp2338 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2338->value = $tmp2337;
frost$core$Int64 $tmp2339 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2340 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2339);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2341;
$tmp2341 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2341->value = $tmp2340;
ITable* $tmp2342 = ((frost$core$Equatable*) $tmp2338)->$class->itable;
while ($tmp2342->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2342 = $tmp2342->next;
}
$fn2344 $tmp2343 = $tmp2342->methods[0];
frost$core$Bit $tmp2345 = $tmp2343(((frost$core$Equatable*) $tmp2338), ((frost$core$Equatable*) $tmp2341));
bool $tmp2346 = $tmp2345.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2341)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2338)));
if ($tmp2346) goto block39; else goto block40;
block39:;
// line 743
frost$core$Int64 $tmp2347 = param7.$rawValue;
frost$core$Int64 $tmp2348 = (frost$core$Int64) {0};
frost$core$Bit $tmp2349 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2347, $tmp2348);
bool $tmp2350 = $tmp2349.value;
if ($tmp2350) goto block42; else goto block43;
block42:;
goto block41;
block43:;
frost$core$Int64 $tmp2351 = (frost$core$Int64) {1};
frost$core$Bit $tmp2352 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2347, $tmp2351);
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block44; else goto block45;
block44:;
// line 748
org$frostlang$frostc$Position $tmp2354 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2354, &$s2355);
goto block41;
block45:;
frost$core$Int64 $tmp2356 = (frost$core$Int64) {2};
frost$core$Bit $tmp2357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2347, $tmp2356);
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block46; else goto block41;
block46:;
// line 751
org$frostlang$frostc$Position $tmp2359 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2359, &$s2360);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 760
org$frostlang$frostc$ClassDecl* $tmp2361 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2362 = *(&local17);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp2361, $tmp2362);
frost$core$Frost$unref$frost$core$Object$Q($tmp2311);
org$frostlang$frostc$ASTNode* $tmp2363 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
// line 762
frost$core$Bit $tmp2364 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2364;
// line 763
frost$core$Bit $tmp2365 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2365;
// line 764
org$frostlang$frostc$ClassDecl* $tmp2366 = *(&local14);
frost$collections$Array** $tmp2367 = &$tmp2366->methods;
frost$collections$Array* $tmp2368 = *$tmp2367;
ITable* $tmp2369 = ((frost$collections$Iterable*) $tmp2368)->$class->itable;
while ($tmp2369->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2369 = $tmp2369->next;
}
$fn2371 $tmp2370 = $tmp2369->methods[0];
frost$collections$Iterator* $tmp2372 = $tmp2370(((frost$collections$Iterable*) $tmp2368));
goto block47;
block47:;
ITable* $tmp2373 = $tmp2372->$class->itable;
while ($tmp2373->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2373 = $tmp2373->next;
}
$fn2375 $tmp2374 = $tmp2373->methods[0];
frost$core$Bit $tmp2376 = $tmp2374($tmp2372);
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block49; else goto block48;
block48:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2378 = $tmp2372->$class->itable;
while ($tmp2378->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2378 = $tmp2378->next;
}
$fn2380 $tmp2379 = $tmp2378->methods[1];
frost$core$Object* $tmp2381 = $tmp2379($tmp2372);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2381)));
org$frostlang$frostc$MethodDecl* $tmp2382 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp2381);
// line 765
org$frostlang$frostc$MethodDecl* $tmp2383 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind* $tmp2384 = &$tmp2383->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2385 = *$tmp2384;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2386;
$tmp2386 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2386->value = $tmp2385;
frost$core$Int64 $tmp2387 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2388 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2387);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2389;
$tmp2389 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2389->value = $tmp2388;
ITable* $tmp2390 = ((frost$core$Equatable*) $tmp2386)->$class->itable;
while ($tmp2390->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2390 = $tmp2390->next;
}
$fn2392 $tmp2391 = $tmp2390->methods[0];
frost$core$Bit $tmp2393 = $tmp2391(((frost$core$Equatable*) $tmp2386), ((frost$core$Equatable*) $tmp2389));
bool $tmp2394 = $tmp2393.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2389)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2386)));
if ($tmp2394) goto block50; else goto block51;
block50:;
// line 766
frost$core$Bit $tmp2395 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2395;
goto block51;
block51:;
// line 768
org$frostlang$frostc$MethodDecl* $tmp2396 = *(&local22);
frost$core$String** $tmp2397 = &((org$frostlang$frostc$Symbol*) $tmp2396)->name;
frost$core$String* $tmp2398 = *$tmp2397;
frost$core$Bit $tmp2399 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2398, &$s2400);
bool $tmp2401 = $tmp2399.value;
if ($tmp2401) goto block54; else goto block55;
block54:;
org$frostlang$frostc$MethodDecl* $tmp2402 = *(&local22);
frost$collections$Array** $tmp2403 = &$tmp2402->parameters;
frost$collections$Array* $tmp2404 = *$tmp2403;
ITable* $tmp2405 = ((frost$collections$CollectionView*) $tmp2404)->$class->itable;
while ($tmp2405->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2405 = $tmp2405->next;
}
$fn2407 $tmp2406 = $tmp2405->methods[0];
frost$core$Int64 $tmp2408 = $tmp2406(((frost$collections$CollectionView*) $tmp2404));
frost$core$Int64 $tmp2409 = (frost$core$Int64) {0};
frost$core$Bit $tmp2410 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2408, $tmp2409);
*(&local23) = $tmp2410;
goto block56;
block55:;
*(&local23) = $tmp2399;
goto block56;
block56:;
frost$core$Bit $tmp2411 = *(&local23);
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block52; else goto block53;
block52:;
// line 769
frost$core$Bit $tmp2413 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2413;
// line 770
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2414;
$tmp2414 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2414->value = param7;
frost$core$Int64 $tmp2415 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2416 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2415);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2417;
$tmp2417 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2417->value = $tmp2416;
ITable* $tmp2418 = ((frost$core$Equatable*) $tmp2414)->$class->itable;
while ($tmp2418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2418 = $tmp2418->next;
}
$fn2420 $tmp2419 = $tmp2418->methods[0];
frost$core$Bit $tmp2421 = $tmp2419(((frost$core$Equatable*) $tmp2414), ((frost$core$Equatable*) $tmp2417));
bool $tmp2422 = $tmp2421.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2414)));
if ($tmp2422) goto block57; else goto block58;
block57:;
// line 771
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2423);
goto block58;
block58:;
goto block53;
block53:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2381);
org$frostlang$frostc$MethodDecl* $tmp2424 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
// line 775
frost$core$Bit $tmp2425 = *(&local20);
frost$core$Bit $tmp2426 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2425);
bool $tmp2427 = $tmp2426.value;
if ($tmp2427) goto block61; else goto block62;
block61:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2428;
$tmp2428 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2428->value = param7;
frost$core$Int64 $tmp2429 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2430 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2429);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2431;
$tmp2431 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2431->value = $tmp2430;
ITable* $tmp2432 = ((frost$core$Equatable*) $tmp2428)->$class->itable;
while ($tmp2432->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2432 = $tmp2432->next;
}
$fn2434 $tmp2433 = $tmp2432->methods[0];
frost$core$Bit $tmp2435 = $tmp2433(((frost$core$Equatable*) $tmp2428), ((frost$core$Equatable*) $tmp2431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2431)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2428)));
*(&local25) = $tmp2435;
goto block63;
block62:;
*(&local25) = $tmp2426;
goto block63;
block63:;
frost$core$Bit $tmp2436 = *(&local25);
bool $tmp2437 = $tmp2436.value;
if ($tmp2437) goto block64; else goto block65;
block64:;
org$frostlang$frostc$ClassDecl* $tmp2438 = *(&local14);
frost$core$String** $tmp2439 = &$tmp2438->name;
frost$core$String* $tmp2440 = *$tmp2439;
ITable* $tmp2442 = ((frost$core$Equatable*) $tmp2440)->$class->itable;
while ($tmp2442->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2442 = $tmp2442->next;
}
$fn2444 $tmp2443 = $tmp2442->methods[1];
frost$core$Bit $tmp2445 = $tmp2443(((frost$core$Equatable*) $tmp2440), ((frost$core$Equatable*) &$s2441));
*(&local24) = $tmp2445;
goto block66;
block65:;
*(&local24) = $tmp2436;
goto block66;
block66:;
frost$core$Bit $tmp2446 = *(&local24);
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block59; else goto block60;
block59:;
// line 776
org$frostlang$frostc$MethodDecl* $tmp2448 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2449 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2450 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2451 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2450, $tmp2451);
frost$core$Int64 $tmp2452 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2453 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2452);
frost$collections$Array* $tmp2454 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2455 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2454, $tmp2455);
org$frostlang$frostc$Type* $tmp2456 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2457 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2457);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2448, $tmp2449, param4, ((frost$core$String*) NULL), $tmp2450, $tmp2453, &$s2458, ((frost$collections$Array*) NULL), $tmp2454, $tmp2456, $tmp2457);
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
org$frostlang$frostc$MethodDecl* $tmp2459 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local26) = $tmp2448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
// line 779
org$frostlang$frostc$ClassDecl* $tmp2460 = *(&local14);
frost$collections$Array** $tmp2461 = &$tmp2460->methods;
frost$collections$Array* $tmp2462 = *$tmp2461;
org$frostlang$frostc$MethodDecl* $tmp2463 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2462, ((frost$core$Object*) $tmp2463));
// line 780
org$frostlang$frostc$ClassDecl* $tmp2464 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2465 = &$tmp2464->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2466 = *$tmp2465;
org$frostlang$frostc$MethodDecl* $tmp2467 = *(&local26);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2466, ((org$frostlang$frostc$Symbol*) $tmp2467));
org$frostlang$frostc$MethodDecl* $tmp2468 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block60;
block60:;
// line 782
frost$core$Bit $tmp2469 = *(&local21);
frost$core$Bit $tmp2470 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2469);
bool $tmp2471 = $tmp2470.value;
if ($tmp2471) goto block69; else goto block70;
block69:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2472;
$tmp2472 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2472->value = param7;
frost$core$Int64 $tmp2473 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2474 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2473);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2475;
$tmp2475 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2475->value = $tmp2474;
ITable* $tmp2476 = ((frost$core$Equatable*) $tmp2472)->$class->itable;
while ($tmp2476->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2476 = $tmp2476->next;
}
$fn2478 $tmp2477 = $tmp2476->methods[0];
frost$core$Bit $tmp2479 = $tmp2477(((frost$core$Equatable*) $tmp2472), ((frost$core$Equatable*) $tmp2475));
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block72; else goto block73;
block72:;
*(&local29) = $tmp2479;
goto block74;
block73:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2481;
$tmp2481 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2481->value = param7;
frost$core$Int64 $tmp2482 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2483 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2482);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2484;
$tmp2484 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2484->value = $tmp2483;
ITable* $tmp2485 = ((frost$core$Equatable*) $tmp2481)->$class->itable;
while ($tmp2485->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2485 = $tmp2485->next;
}
$fn2487 $tmp2486 = $tmp2485->methods[0];
frost$core$Bit $tmp2488 = $tmp2486(((frost$core$Equatable*) $tmp2481), ((frost$core$Equatable*) $tmp2484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2484)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2481)));
*(&local29) = $tmp2488;
goto block74;
block74:;
frost$core$Bit $tmp2489 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2475)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2472)));
*(&local28) = $tmp2489;
goto block71;
block70:;
*(&local28) = $tmp2470;
goto block71;
block71:;
frost$core$Bit $tmp2490 = *(&local28);
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block75; else goto block76;
block75:;
org$frostlang$frostc$ClassDecl* $tmp2492 = *(&local14);
frost$core$String** $tmp2493 = &$tmp2492->name;
frost$core$String* $tmp2494 = *$tmp2493;
ITable* $tmp2496 = ((frost$core$Equatable*) $tmp2494)->$class->itable;
while ($tmp2496->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2496 = $tmp2496->next;
}
$fn2498 $tmp2497 = $tmp2496->methods[1];
frost$core$Bit $tmp2499 = $tmp2497(((frost$core$Equatable*) $tmp2494), ((frost$core$Equatable*) &$s2495));
*(&local27) = $tmp2499;
goto block77;
block76:;
*(&local27) = $tmp2490;
goto block77;
block77:;
frost$core$Bit $tmp2500 = *(&local27);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block67; else goto block68;
block67:;
// line 784
org$frostlang$frostc$MethodDecl* $tmp2502 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2503 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2504 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2505 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2506 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2507 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2505, $tmp2506);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2504, $tmp2507);
frost$core$Int64 $tmp2508 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2509 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2508);
frost$collections$Array* $tmp2510 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2511 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2510, $tmp2511);
org$frostlang$frostc$Type* $tmp2512 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2513 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2513);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2502, $tmp2503, param4, ((frost$core$String*) NULL), $tmp2504, $tmp2509, &$s2514, ((frost$collections$Array*) NULL), $tmp2510, $tmp2512, $tmp2513);
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
org$frostlang$frostc$MethodDecl* $tmp2515 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local30) = $tmp2502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
// line 787
org$frostlang$frostc$ClassDecl* $tmp2516 = *(&local14);
frost$collections$Array** $tmp2517 = &$tmp2516->methods;
frost$collections$Array* $tmp2518 = *$tmp2517;
org$frostlang$frostc$MethodDecl* $tmp2519 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp2518, ((frost$core$Object*) $tmp2519));
// line 788
org$frostlang$frostc$ClassDecl* $tmp2520 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2521 = &$tmp2520->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2522 = *$tmp2521;
org$frostlang$frostc$MethodDecl* $tmp2523 = *(&local30);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2522, ((org$frostlang$frostc$Symbol*) $tmp2523));
org$frostlang$frostc$MethodDecl* $tmp2524 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block68;
block68:;
// line 790
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2525;
$tmp2525 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2525->value = param7;
frost$core$Int64 $tmp2526 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2527 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2526);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2528;
$tmp2528 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2528->value = $tmp2527;
ITable* $tmp2529 = ((frost$core$Equatable*) $tmp2525)->$class->itable;
while ($tmp2529->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2529 = $tmp2529->next;
}
$fn2531 $tmp2530 = $tmp2529->methods[0];
frost$core$Bit $tmp2532 = $tmp2530(((frost$core$Equatable*) $tmp2525), ((frost$core$Equatable*) $tmp2528));
bool $tmp2533 = $tmp2532.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2528)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2525)));
if ($tmp2533) goto block78; else goto block79;
block78:;
// line 791
frost$core$Bit $tmp2534 = frost$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2534;
// line 792
org$frostlang$frostc$ClassDecl* $tmp2535 = *(&local14);
frost$collections$Array** $tmp2536 = &$tmp2535->choiceCases;
frost$collections$Array* $tmp2537 = *$tmp2536;
ITable* $tmp2538 = ((frost$collections$CollectionView*) $tmp2537)->$class->itable;
while ($tmp2538->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2538 = $tmp2538->next;
}
$fn2540 $tmp2539 = $tmp2538->methods[0];
frost$core$Int64 $tmp2541 = $tmp2539(((frost$collections$CollectionView*) $tmp2537));
frost$core$Int64 $tmp2542 = (frost$core$Int64) {0};
int64_t $tmp2543 = $tmp2541.value;
int64_t $tmp2544 = $tmp2542.value;
bool $tmp2545 = $tmp2543 > $tmp2544;
frost$core$Bit $tmp2546 = (frost$core$Bit) {$tmp2545};
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block80; else goto block82;
block80:;
// line 793
org$frostlang$frostc$ClassDecl* $tmp2548 = *(&local14);
frost$collections$Array** $tmp2549 = &$tmp2548->choiceCases;
frost$collections$Array* $tmp2550 = *$tmp2549;
ITable* $tmp2551 = ((frost$collections$Iterable*) $tmp2550)->$class->itable;
while ($tmp2551->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2551 = $tmp2551->next;
}
$fn2553 $tmp2552 = $tmp2551->methods[0];
frost$collections$Iterator* $tmp2554 = $tmp2552(((frost$collections$Iterable*) $tmp2550));
goto block83;
block83:;
ITable* $tmp2555 = $tmp2554->$class->itable;
while ($tmp2555->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2555 = $tmp2555->next;
}
$fn2557 $tmp2556 = $tmp2555->methods[0];
frost$core$Bit $tmp2558 = $tmp2556($tmp2554);
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block85; else goto block84;
block84:;
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp2560 = $tmp2554->$class->itable;
while ($tmp2560->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2560 = $tmp2560->next;
}
$fn2562 $tmp2561 = $tmp2560->methods[1];
frost$core$Object* $tmp2563 = $tmp2561($tmp2554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp2563)));
org$frostlang$frostc$ChoiceCase* $tmp2564 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) $tmp2563);
// line 794
org$frostlang$frostc$ChoiceCase* $tmp2565 = *(&local32);
frost$collections$Array** $tmp2566 = &$tmp2565->fields;
frost$collections$Array* $tmp2567 = *$tmp2566;
ITable* $tmp2568 = ((frost$collections$CollectionView*) $tmp2567)->$class->itable;
while ($tmp2568->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2568 = $tmp2568->next;
}
$fn2570 $tmp2569 = $tmp2568->methods[0];
frost$core$Int64 $tmp2571 = $tmp2569(((frost$collections$CollectionView*) $tmp2567));
frost$core$Int64 $tmp2572 = (frost$core$Int64) {0};
int64_t $tmp2573 = $tmp2571.value;
int64_t $tmp2574 = $tmp2572.value;
bool $tmp2575 = $tmp2573 > $tmp2574;
frost$core$Bit $tmp2576 = (frost$core$Bit) {$tmp2575};
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block86; else goto block87;
block86:;
// line 795
frost$core$Bit $tmp2578 = frost$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2578;
// line 796
frost$core$Frost$unref$frost$core$Object$Q($tmp2563);
org$frostlang$frostc$ChoiceCase* $tmp2579 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block85;
block87:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2563);
org$frostlang$frostc$ChoiceCase* $tmp2580 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block83;
block85:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
goto block81;
block82:;
// line 1
// line 801
org$frostlang$frostc$ClassDecl* $tmp2581 = *(&local14);
org$frostlang$frostc$Position* $tmp2582 = &$tmp2581->position;
org$frostlang$frostc$Position $tmp2583 = *$tmp2582;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2583, &$s2584);
// line 802
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2585 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2586 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2587 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2588 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2589 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2590 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block81:;
// line 804
frost$core$Bit $tmp2591 = *(&local31);
frost$core$Bit $tmp2592 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2591);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block88; else goto block89;
block88:;
// line 805
org$frostlang$frostc$ClassDecl* $tmp2594 = *(&local14);
org$frostlang$frostc$Type* $tmp2595 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
org$frostlang$frostc$Type** $tmp2596 = &$tmp2594->rawSuper;
org$frostlang$frostc$Type* $tmp2597 = *$tmp2596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
org$frostlang$frostc$Type** $tmp2598 = &$tmp2594->rawSuper;
*$tmp2598 = $tmp2595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
goto block89;
block89:;
goto block79;
block79:;
// line 808
frost$core$Weak** $tmp2599 = &param0->compiler;
frost$core$Weak* $tmp2600 = *$tmp2599;
frost$core$Object* $tmp2601 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2600);
frost$collections$Stack** $tmp2602 = &((org$frostlang$frostc$Compiler*) $tmp2601)->currentClass;
frost$collections$Stack* $tmp2603 = *$tmp2602;
frost$core$Object* $tmp2604 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2603);
frost$core$Frost$unref$frost$core$Object$Q($tmp2604);
frost$core$Frost$unref$frost$core$Object$Q($tmp2601);
// line 809
org$frostlang$frostc$ClassDecl* $tmp2605 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
org$frostlang$frostc$ClassDecl* $tmp2606 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2607 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2608 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2609 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2610 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2605;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 813
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 814
frost$collections$Array** $tmp2612 = &param1->classes;
frost$collections$Array* $tmp2613 = *$tmp2612;
ITable* $tmp2614 = ((frost$collections$Iterable*) $tmp2613)->$class->itable;
while ($tmp2614->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2614 = $tmp2614->next;
}
$fn2616 $tmp2615 = $tmp2614->methods[0];
frost$collections$Iterator* $tmp2617 = $tmp2615(((frost$collections$Iterable*) $tmp2613));
goto block1;
block1:;
ITable* $tmp2618 = $tmp2617->$class->itable;
while ($tmp2618->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2618 = $tmp2618->next;
}
$fn2620 $tmp2619 = $tmp2618->methods[0];
frost$core$Bit $tmp2621 = $tmp2619($tmp2617);
bool $tmp2622 = $tmp2621.value;
if ($tmp2622) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp2623 = $tmp2617->$class->itable;
while ($tmp2623->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2623 = $tmp2623->next;
}
$fn2625 $tmp2624 = $tmp2623->methods[1];
frost$core$Object* $tmp2626 = $tmp2624($tmp2617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2626)));
org$frostlang$frostc$ClassDecl* $tmp2627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2626);
// line 815
org$frostlang$frostc$ClassDecl* $tmp2628 = *(&local0);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2628, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2626);
org$frostlang$frostc$ClassDecl* $tmp2629 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 821
org$frostlang$frostc$ClassDecl** $tmp2630 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2631 = *$tmp2630;
frost$core$Bit $tmp2632 = frost$core$Bit$init$builtin_bit($tmp2631 == NULL);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block1; else goto block2;
block1:;
// line 822
*(&local0) = ((frost$core$String*) NULL);
// line 823
ITable* $tmp2635 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2635->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2635 = $tmp2635->next;
}
$fn2637 $tmp2636 = $tmp2635->methods[1];
frost$core$Bit $tmp2638 = $tmp2636(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2634));
bool $tmp2639 = $tmp2638.value;
if ($tmp2639) goto block3; else goto block5;
block3:;
// line 824
frost$core$String* $tmp2640 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2640, &$s2642);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
frost$core$String* $tmp2643 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local0) = $tmp2641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
goto block4;
block5:;
// line 1
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2644));
frost$core$String* $tmp2645 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local0) = &$s2646;
goto block4;
block4:;
// line 829
org$frostlang$frostc$ClassDecl* $tmp2647 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp2648 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2649 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp2649);
frost$core$Int64 $tmp2650 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2651 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2650);
frost$core$String* $tmp2652 = *(&local0);
frost$collections$Array* $tmp2653 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2653);
frost$collections$Array* $tmp2654 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2654);
frost$core$Weak** $tmp2655 = &param0->compiler;
frost$core$Weak* $tmp2656 = *$tmp2655;
frost$core$Object* $tmp2657 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2656);
org$frostlang$frostc$SymbolTable** $tmp2658 = &((org$frostlang$frostc$Compiler*) $tmp2657)->root;
org$frostlang$frostc$SymbolTable* $tmp2659 = *$tmp2658;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2647, param1, $tmp2648, param2, ((frost$core$String*) NULL), $tmp2649, $tmp2651, $tmp2652, ((frost$collections$ListView*) $tmp2653), $tmp2654, $tmp2659);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
org$frostlang$frostc$ClassDecl** $tmp2660 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2661 = *$tmp2660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
org$frostlang$frostc$ClassDecl** $tmp2662 = &param0->bareCodeClass;
*$tmp2662 = $tmp2647;
frost$core$Frost$unref$frost$core$Object$Q($tmp2657);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
// line 832
org$frostlang$frostc$ClassDecl** $tmp2663 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2664 = *$tmp2663;
ITable* $tmp2665 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2665->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2665 = $tmp2665->next;
}
$fn2667 $tmp2666 = $tmp2665->methods[0];
$tmp2666(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2664));
// line 833
org$frostlang$frostc$MethodDecl* $tmp2668 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2669 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2670 = *$tmp2669;
org$frostlang$frostc$Position $tmp2671 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2672 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2673 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2672, $tmp2673);
frost$core$Int64 $tmp2674 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2675 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2674);
frost$collections$Array* $tmp2676 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2677 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2676, $tmp2677);
org$frostlang$frostc$Type* $tmp2678 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2679 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2679);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2668, $tmp2670, $tmp2671, ((frost$core$String*) NULL), $tmp2672, $tmp2675, &$s2680, ((frost$collections$Array*) NULL), $tmp2676, $tmp2678, $tmp2679);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
org$frostlang$frostc$MethodDecl* $tmp2681 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
*(&local1) = $tmp2668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
// line 836
org$frostlang$frostc$ClassDecl** $tmp2682 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2683 = *$tmp2682;
frost$collections$Array** $tmp2684 = &$tmp2683->methods;
frost$collections$Array* $tmp2685 = *$tmp2684;
org$frostlang$frostc$MethodDecl* $tmp2686 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2685, ((frost$core$Object*) $tmp2686));
// line 837
org$frostlang$frostc$ClassDecl** $tmp2687 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2688 = *$tmp2687;
org$frostlang$frostc$SymbolTable** $tmp2689 = &$tmp2688->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2690 = *$tmp2689;
org$frostlang$frostc$MethodDecl* $tmp2691 = *(&local1);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2690, ((org$frostlang$frostc$Symbol*) $tmp2691));
// line 838
org$frostlang$frostc$MethodDecl* $tmp2692 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2693 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2694 = *$tmp2693;
org$frostlang$frostc$Position $tmp2695 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2696 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2697 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2698 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2699 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2697, $tmp2698);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2696, $tmp2699);
frost$core$Int64 $tmp2700 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2701 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2700);
frost$collections$Array* $tmp2702 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2703 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2702, $tmp2703);
org$frostlang$frostc$Type* $tmp2704 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2705 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2705);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2692, $tmp2694, $tmp2695, ((frost$core$String*) NULL), $tmp2696, $tmp2701, &$s2706, ((frost$collections$Array*) NULL), $tmp2702, $tmp2704, $tmp2705);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
org$frostlang$frostc$MethodDecl* $tmp2707 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local2) = $tmp2692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
// line 841
org$frostlang$frostc$ClassDecl** $tmp2708 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2709 = *$tmp2708;
frost$collections$Array** $tmp2710 = &$tmp2709->methods;
frost$collections$Array* $tmp2711 = *$tmp2710;
org$frostlang$frostc$MethodDecl* $tmp2712 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2711, ((frost$core$Object*) $tmp2712));
// line 842
org$frostlang$frostc$ClassDecl** $tmp2713 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2714 = *$tmp2713;
org$frostlang$frostc$SymbolTable** $tmp2715 = &$tmp2714->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2716 = *$tmp2715;
org$frostlang$frostc$MethodDecl* $tmp2717 = *(&local2);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2716, ((org$frostlang$frostc$Symbol*) $tmp2717));
org$frostlang$frostc$MethodDecl* $tmp2718 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2719 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2720 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2721 = &param0->source;
frost$io$File* $tmp2722 = *$tmp2721;
frost$core$Bit $tmp2723 = frost$core$Bit$init$builtin_bit($tmp2722 != NULL);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2725 = (frost$core$Int64) {847};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2726, $tmp2725, &$s2727);
abort(); // unreachable
block1:;
// line 848
frost$core$Weak** $tmp2728 = &param0->compiler;
frost$core$Weak* $tmp2729 = *$tmp2728;
frost$core$Object* $tmp2730 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2729);
frost$io$File** $tmp2731 = &param0->source;
frost$io$File* $tmp2732 = *$tmp2731;
org$frostlang$frostc$Compiler$error$frost$io$File$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2730), $tmp2732, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2730);
return;

}
frost$collections$ListView* org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$FixedArray* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$collections$HashMap* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String$Index$nullable local7;
frost$core$String* local8 = NULL;
org$frostlang$frostc$Position local9;
org$frostlang$frostc$ASTNode* local10 = NULL;
org$frostlang$frostc$FixedArray* local11 = NULL;
org$frostlang$frostc$ClassDecl$Kind local12;
frost$core$String* local13 = NULL;
org$frostlang$frostc$FixedArray* local14 = NULL;
org$frostlang$frostc$FixedArray* local15 = NULL;
org$frostlang$frostc$FixedArray* local16 = NULL;
org$frostlang$frostc$ClassDecl* local17 = NULL;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$ASTNode* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$MethodDecl$Kind local21;
frost$core$String* local22 = NULL;
org$frostlang$frostc$FixedArray* local23 = NULL;
org$frostlang$frostc$FixedArray* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
frost$core$String* local27 = NULL;
frost$collections$Array* local28 = NULL;
frost$collections$Array* local29 = NULL;
frost$collections$Array* local30 = NULL;
org$frostlang$frostc$ASTNode* local31 = NULL;
org$frostlang$frostc$Position local32;
frost$core$String* local33 = NULL;
org$frostlang$frostc$ASTNode* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
org$frostlang$frostc$Type* local36 = NULL;
org$frostlang$frostc$MethodDecl* local37 = NULL;
org$frostlang$frostc$MethodDecl* local38 = NULL;
org$frostlang$frostc$Position local39;
org$frostlang$frostc$ASTNode* local40 = NULL;
org$frostlang$frostc$FixedArray* local41 = NULL;
org$frostlang$frostc$ASTNode* local42 = NULL;
frost$core$Int64 local43;
frost$core$Int64 local44;
org$frostlang$frostc$FieldDecl* local45 = NULL;
frost$core$Bit local46;
// line 852
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2733 = &param0->source;
frost$io$File* $tmp2734 = *$tmp2733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
frost$io$File** $tmp2735 = &param0->source;
*$tmp2735 = param1;
// line 853
frost$core$Int64* $tmp2736 = &param2->$rawValue;
frost$core$Int64 $tmp2737 = *$tmp2736;
frost$core$Int64 $tmp2738 = (frost$core$Int64) {19};
frost$core$Bit $tmp2739 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2737, $tmp2738);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block2; else goto block3;
block2:;
org$frostlang$frostc$FixedArray** $tmp2741 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2742 = *$tmp2741;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
org$frostlang$frostc$FixedArray* $tmp2743 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
*(&local0) = $tmp2742;
// line 855
frost$collections$Array* $tmp2744 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2744);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
frost$collections$Array* $tmp2745 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local1) = $tmp2744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
// line 856
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2746));
frost$core$String* $tmp2747 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local2) = &$s2748;
// line 857
frost$collections$HashMap* $tmp2749 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2749);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
frost$collections$HashMap* $tmp2750 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local3) = $tmp2749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
// line 858
org$frostlang$frostc$FixedArray* $tmp2751 = *(&local0);
ITable* $tmp2752 = ((frost$collections$Iterable*) $tmp2751)->$class->itable;
while ($tmp2752->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2752 = $tmp2752->next;
}
$fn2754 $tmp2753 = $tmp2752->methods[0];
frost$collections$Iterator* $tmp2755 = $tmp2753(((frost$collections$Iterable*) $tmp2751));
goto block4;
block4:;
ITable* $tmp2756 = $tmp2755->$class->itable;
while ($tmp2756->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2756 = $tmp2756->next;
}
$fn2758 $tmp2757 = $tmp2756->methods[0];
frost$core$Bit $tmp2759 = $tmp2757($tmp2755);
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2761 = $tmp2755->$class->itable;
while ($tmp2761->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2761 = $tmp2761->next;
}
$fn2763 $tmp2762 = $tmp2761->methods[1];
frost$core$Object* $tmp2764 = $tmp2762($tmp2755);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2764)));
org$frostlang$frostc$ASTNode* $tmp2765 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2764);
// line 859
org$frostlang$frostc$ASTNode* $tmp2766 = *(&local4);
frost$core$Int64* $tmp2767 = &$tmp2766->$rawValue;
frost$core$Int64 $tmp2768 = *$tmp2767;
frost$core$Int64 $tmp2769 = (frost$core$Int64) {33};
frost$core$Bit $tmp2770 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2768, $tmp2769);
bool $tmp2771 = $tmp2770.value;
if ($tmp2771) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2772 = (org$frostlang$frostc$Position*) ($tmp2766->$data + 0);
org$frostlang$frostc$Position $tmp2773 = *$tmp2772;
frost$core$String** $tmp2774 = (frost$core$String**) ($tmp2766->$data + 16);
frost$core$String* $tmp2775 = *$tmp2774;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$core$String* $tmp2776 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
*(&local5) = $tmp2775;
// line 861
frost$core$String* $tmp2777 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
frost$core$String* $tmp2778 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
*(&local2) = $tmp2777;
frost$core$String* $tmp2779 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp2780 = (frost$core$Int64) {51};
frost$core$Bit $tmp2781 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2768, $tmp2780);
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2783 = (org$frostlang$frostc$Position*) ($tmp2766->$data + 0);
org$frostlang$frostc$Position $tmp2784 = *$tmp2783;
frost$core$String** $tmp2785 = (frost$core$String**) ($tmp2766->$data + 16);
frost$core$String* $tmp2786 = *$tmp2785;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
frost$core$String* $tmp2787 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2787));
*(&local6) = $tmp2786;
// line 864
frost$core$String* $tmp2788 = *(&local6);
frost$core$String$Index$nullable $tmp2789 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp2788, &$s2790);
*(&local7) = $tmp2789;
// line 865
*(&local8) = ((frost$core$String*) NULL);
// line 866
frost$core$String$Index$nullable $tmp2791 = *(&local7);
frost$core$Bit $tmp2792 = frost$core$Bit$init$builtin_bit($tmp2791.nonnull);
bool $tmp2793 = $tmp2792.value;
if ($tmp2793) goto block12; else goto block14;
block12:;
// line 867
frost$core$String* $tmp2794 = *(&local6);
frost$core$String* $tmp2795 = *(&local6);
frost$core$String$Index$nullable $tmp2796 = *(&local7);
frost$core$String$Index $tmp2797 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2795, ((frost$core$String$Index) $tmp2796.value));
frost$core$Bit $tmp2798 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2799 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2797, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2798);
frost$core$String* $tmp2800 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2794, $tmp2799);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
frost$core$String* $tmp2801 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local8) = $tmp2800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
goto block13;
block14:;
// line 1
// line 870
frost$core$String* $tmp2802 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
frost$core$String* $tmp2803 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local8) = $tmp2802;
goto block13;
block13:;
// line 872
frost$collections$HashMap* $tmp2804 = *(&local3);
frost$core$String* $tmp2805 = *(&local8);
frost$core$String* $tmp2806 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2804, ((frost$collections$Key*) $tmp2805), ((frost$core$Object*) $tmp2806));
frost$core$String* $tmp2807 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp2808 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block11:;
frost$core$Int64 $tmp2809 = (frost$core$Int64) {12};
frost$core$Bit $tmp2810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2768, $tmp2809);
bool $tmp2811 = $tmp2810.value;
if ($tmp2811) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Position* $tmp2812 = (org$frostlang$frostc$Position*) ($tmp2766->$data + 0);
org$frostlang$frostc$Position $tmp2813 = *$tmp2812;
*(&local9) = $tmp2813;
org$frostlang$frostc$ASTNode** $tmp2814 = (org$frostlang$frostc$ASTNode**) ($tmp2766->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2815 = *$tmp2814;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
org$frostlang$frostc$ASTNode* $tmp2816 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local10) = $tmp2815;
org$frostlang$frostc$FixedArray** $tmp2817 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2818 = *$tmp2817;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
org$frostlang$frostc$FixedArray* $tmp2819 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
*(&local11) = $tmp2818;
org$frostlang$frostc$ClassDecl$Kind* $tmp2820 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp2766->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2821 = *$tmp2820;
*(&local12) = $tmp2821;
frost$core$String** $tmp2822 = (frost$core$String**) ($tmp2766->$data + 40);
frost$core$String* $tmp2823 = *$tmp2822;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$String* $tmp2824 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local13) = $tmp2823;
org$frostlang$frostc$FixedArray** $tmp2825 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2826 = *$tmp2825;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
org$frostlang$frostc$FixedArray* $tmp2827 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local14) = $tmp2826;
org$frostlang$frostc$FixedArray** $tmp2828 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2829 = *$tmp2828;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
org$frostlang$frostc$FixedArray* $tmp2830 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local15) = $tmp2829;
org$frostlang$frostc$FixedArray** $tmp2831 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2832 = *$tmp2831;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
org$frostlang$frostc$FixedArray* $tmp2833 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local16) = $tmp2832;
// line 876
frost$collections$HashMap* $tmp2834 = *(&local3);
frost$core$String* $tmp2835 = *(&local2);
org$frostlang$frostc$Position $tmp2836 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp2837 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2838 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp2839 = *(&local12);
frost$core$String* $tmp2840 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp2841 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2842 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2843 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp2844 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp2834), $tmp2835, $tmp2836, $tmp2837, $tmp2838, $tmp2839, $tmp2840, $tmp2841, $tmp2842, $tmp2843);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
org$frostlang$frostc$ClassDecl* $tmp2845 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local17) = $tmp2844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
// line 878
org$frostlang$frostc$ClassDecl* $tmp2846 = *(&local17);
frost$core$Bit $tmp2847 = frost$core$Bit$init$builtin_bit($tmp2846 != NULL);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block17; else goto block18;
block17:;
// line 879
org$frostlang$frostc$ClassDecl* $tmp2849 = *(&local17);
frost$collections$Array* $tmp2850 = *(&local1);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2849, $tmp2850);
goto block18;
block18:;
org$frostlang$frostc$ClassDecl* $tmp2851 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2852 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2853 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2854 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2855 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2856 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2857 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block16:;
frost$core$Int64 $tmp2858 = (frost$core$Int64) {29};
frost$core$Bit $tmp2859 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2768, $tmp2858);
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp2861 = (org$frostlang$frostc$Position*) ($tmp2766->$data + 0);
org$frostlang$frostc$Position $tmp2862 = *$tmp2861;
*(&local18) = $tmp2862;
org$frostlang$frostc$ASTNode** $tmp2863 = (org$frostlang$frostc$ASTNode**) ($tmp2766->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2864 = *$tmp2863;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
org$frostlang$frostc$ASTNode* $tmp2865 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
*(&local19) = $tmp2864;
org$frostlang$frostc$FixedArray** $tmp2866 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2867 = *$tmp2866;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
org$frostlang$frostc$FixedArray* $tmp2868 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
*(&local20) = $tmp2867;
org$frostlang$frostc$MethodDecl$Kind* $tmp2869 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2766->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2870 = *$tmp2869;
*(&local21) = $tmp2870;
frost$core$String** $tmp2871 = (frost$core$String**) ($tmp2766->$data + 40);
frost$core$String* $tmp2872 = *$tmp2871;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
frost$core$String* $tmp2873 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
*(&local22) = $tmp2872;
org$frostlang$frostc$FixedArray** $tmp2874 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2875 = *$tmp2874;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
org$frostlang$frostc$FixedArray* $tmp2876 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2876));
*(&local23) = $tmp2875;
org$frostlang$frostc$FixedArray** $tmp2877 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2878 = *$tmp2877;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
org$frostlang$frostc$FixedArray* $tmp2879 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local24) = $tmp2878;
org$frostlang$frostc$ASTNode** $tmp2880 = (org$frostlang$frostc$ASTNode**) ($tmp2766->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2881 = *$tmp2880;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
org$frostlang$frostc$ASTNode* $tmp2882 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
*(&local25) = $tmp2881;
org$frostlang$frostc$FixedArray** $tmp2883 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2884 = *$tmp2883;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
org$frostlang$frostc$FixedArray* $tmp2885 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
*(&local26) = $tmp2884;
// line 884
org$frostlang$frostc$MethodDecl$Kind $tmp2886 = *(&local21);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2887;
$tmp2887 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2887->value = $tmp2886;
frost$core$Int64 $tmp2888 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2889 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2888);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2890;
$tmp2890 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2890->value = $tmp2889;
ITable* $tmp2891 = ((frost$core$Equatable*) $tmp2887)->$class->itable;
while ($tmp2891->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2891 = $tmp2891->next;
}
$fn2893 $tmp2892 = $tmp2891->methods[0];
frost$core$Bit $tmp2894 = $tmp2892(((frost$core$Equatable*) $tmp2887), ((frost$core$Equatable*) $tmp2890));
bool $tmp2895 = $tmp2894.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2890)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2887)));
if ($tmp2895) goto block21; else goto block22;
block21:;
// line 885
org$frostlang$frostc$Position $tmp2896 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2896, &$s2897);
// line 886
org$frostlang$frostc$FixedArray* $tmp2898 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2899 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2900 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2901 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2902 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2903 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2904 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2764);
org$frostlang$frostc$ASTNode* $tmp2905 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block22:;
// line 888
frost$collections$HashMap* $tmp2906 = *(&local3);
frost$core$String* $tmp2907 = *(&local2);
frost$collections$Array* $tmp2908 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp2906), $tmp2907, ((frost$collections$List*) $tmp2908));
// line 889
*(&local27) = ((frost$core$String*) NULL);
// line 890
frost$core$String* $tmp2909 = *(&local22);
frost$core$Bit $tmp2910 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2909, &$s2911);
bool $tmp2912 = $tmp2910.value;
if ($tmp2912) goto block23; else goto block25;
block23:;
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2913));
frost$core$String* $tmp2914 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local27) = &$s2915;
// line 892
frost$collections$Array* $tmp2916 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2916);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
frost$collections$Array* $tmp2917 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local28) = $tmp2916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
// line 893
frost$collections$Array* $tmp2918 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2918);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
frost$collections$Array* $tmp2919 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
*(&local29) = $tmp2918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
// line 894
frost$collections$Array* $tmp2920 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2920);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
frost$collections$Array* $tmp2921 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
*(&local30) = $tmp2920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
// line 895
org$frostlang$frostc$FixedArray* $tmp2922 = *(&local24);
ITable* $tmp2923 = ((frost$collections$Iterable*) $tmp2922)->$class->itable;
while ($tmp2923->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2923 = $tmp2923->next;
}
$fn2925 $tmp2924 = $tmp2923->methods[0];
frost$collections$Iterator* $tmp2926 = $tmp2924(((frost$collections$Iterable*) $tmp2922));
goto block26;
block26:;
ITable* $tmp2927 = $tmp2926->$class->itable;
while ($tmp2927->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2927 = $tmp2927->next;
}
$fn2929 $tmp2928 = $tmp2927->methods[0];
frost$core$Bit $tmp2930 = $tmp2928($tmp2926);
bool $tmp2931 = $tmp2930.value;
if ($tmp2931) goto block28; else goto block27;
block27:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2932 = $tmp2926->$class->itable;
while ($tmp2932->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2932 = $tmp2932->next;
}
$fn2934 $tmp2933 = $tmp2932->methods[1];
frost$core$Object* $tmp2935 = $tmp2933($tmp2926);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2935)));
org$frostlang$frostc$ASTNode* $tmp2936 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp2935);
// line 896
org$frostlang$frostc$ASTNode* $tmp2937 = *(&local31);
frost$core$Int64* $tmp2938 = &$tmp2937->$rawValue;
frost$core$Int64 $tmp2939 = *$tmp2938;
frost$core$Int64 $tmp2940 = (frost$core$Int64) {34};
frost$core$Bit $tmp2941 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2939, $tmp2940);
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2943 = (org$frostlang$frostc$Position*) ($tmp2937->$data + 0);
org$frostlang$frostc$Position $tmp2944 = *$tmp2943;
*(&local32) = $tmp2944;
frost$core$String** $tmp2945 = (frost$core$String**) ($tmp2937->$data + 16);
frost$core$String* $tmp2946 = *$tmp2945;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
frost$core$String* $tmp2947 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local33) = $tmp2946;
org$frostlang$frostc$ASTNode** $tmp2948 = (org$frostlang$frostc$ASTNode**) ($tmp2937->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2949 = *$tmp2948;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
org$frostlang$frostc$ASTNode* $tmp2950 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local34) = $tmp2949;
// line 898
frost$collections$Array* $tmp2951 = *(&local28);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2952 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2953 = *(&local33);
org$frostlang$frostc$ASTNode* $tmp2954 = *(&local34);
org$frostlang$frostc$Type* $tmp2955 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2954);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2952, $tmp2953, $tmp2955);
frost$collections$Array$add$frost$collections$Array$T($tmp2951, ((frost$core$Object*) $tmp2952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
// line 900
frost$collections$Array* $tmp2956 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp2957 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2958 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp2959 = *(&local32);
frost$core$String* $tmp2960 = *(&local33);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2957, $tmp2958, $tmp2959, $tmp2960);
frost$collections$Array$add$frost$collections$Array$T($tmp2956, ((frost$core$Object*) $tmp2957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
org$frostlang$frostc$ASTNode* $tmp2961 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2962 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
*(&local33) = ((frost$core$String*) NULL);
goto block29;
block31:;
// line 903
frost$core$Bit $tmp2963 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2964 = $tmp2963.value;
if ($tmp2964) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp2965 = (frost$core$Int64) {903};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2966, $tmp2965);
abort(); // unreachable
block32:;
goto block29;
block29:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2935);
org$frostlang$frostc$ASTNode* $tmp2967 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
// line 907
org$frostlang$frostc$ASTNode* $tmp2968 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2969 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp2970 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2971 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2972 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp2973 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2971, $tmp2972, $tmp2973, &$s2974);
org$frostlang$frostc$FixedArray* $tmp2975 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2975);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2968, $tmp2969, $tmp2970, $tmp2971, $tmp2975);
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
org$frostlang$frostc$ASTNode* $tmp2976 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
*(&local35) = $tmp2968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
// line 910
frost$collections$Array* $tmp2977 = *(&local29);
org$frostlang$frostc$ASTNode* $tmp2978 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2979 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp2980 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2981 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2982 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp2983 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2984 = *(&local35);
frost$core$String* $tmp2985 = *(&local27);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2981, $tmp2982, $tmp2983, $tmp2984, $tmp2985);
frost$collections$Array* $tmp2986 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp2987 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2986);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2978, $tmp2979, $tmp2980, $tmp2981, $tmp2987);
frost$collections$Array$add$frost$collections$Array$T($tmp2977, ((frost$core$Object*) $tmp2978));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
// line 913
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// line 914
org$frostlang$frostc$ASTNode* $tmp2988 = *(&local25);
frost$core$Bit $tmp2989 = frost$core$Bit$init$builtin_bit($tmp2988 != NULL);
bool $tmp2990 = $tmp2989.value;
if ($tmp2990) goto block34; else goto block36;
block34:;
// line 915
org$frostlang$frostc$ASTNode* $tmp2991 = *(&local25);
org$frostlang$frostc$Type* $tmp2992 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2991);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
org$frostlang$frostc$Type* $tmp2993 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
*(&local36) = $tmp2992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
goto block35;
block36:;
// line 1
// line 918
org$frostlang$frostc$Type* $tmp2994 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
org$frostlang$frostc$Type* $tmp2995 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local36) = $tmp2994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
goto block35;
block35:;
// line 920
org$frostlang$frostc$MethodDecl* $tmp2996 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2997 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2998 = *$tmp2997;
org$frostlang$frostc$Position $tmp2999 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp3000 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3001 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3000, $tmp3001);
frost$core$Int64 $tmp3002 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp3003 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3002);
frost$collections$Array* $tmp3004 = *(&local28);
org$frostlang$frostc$Type* $tmp3005 = *(&local36);
frost$collections$Array* $tmp3006 = *(&local29);
org$frostlang$frostc$FixedArray* $tmp3007 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3006);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2996, $tmp2998, $tmp2999, ((frost$core$String*) NULL), $tmp3000, $tmp3003, &$s3008, ((frost$collections$Array*) NULL), $tmp3004, $tmp3005, $tmp3007);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
org$frostlang$frostc$MethodDecl* $tmp3009 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
*(&local37) = $tmp2996;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
// line 924
org$frostlang$frostc$ClassDecl** $tmp3010 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3011 = *$tmp3010;
frost$collections$Array** $tmp3012 = &$tmp3011->methods;
frost$collections$Array* $tmp3013 = *$tmp3012;
org$frostlang$frostc$MethodDecl* $tmp3014 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp3013, ((frost$core$Object*) $tmp3014));
org$frostlang$frostc$MethodDecl* $tmp3015 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp3016 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3017 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3018 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3019 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3020 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
*(&local28) = ((frost$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 927
frost$core$String* $tmp3021 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$String* $tmp3022 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
*(&local27) = $tmp3021;
goto block24;
block24:;
// line 929
frost$core$Weak** $tmp3023 = &param0->compiler;
frost$core$Weak* $tmp3024 = *$tmp3023;
frost$core$Object* $tmp3025 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3024);
frost$collections$Stack** $tmp3026 = &((org$frostlang$frostc$Compiler*) $tmp3025)->currentClass;
frost$collections$Stack* $tmp3027 = *$tmp3026;
org$frostlang$frostc$ClassDecl** $tmp3028 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3029 = *$tmp3028;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3027, ((frost$core$Object*) $tmp3029));
frost$core$Frost$unref$frost$core$Object$Q($tmp3025);
// line 930
org$frostlang$frostc$ClassDecl** $tmp3030 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3031 = *$tmp3030;
org$frostlang$frostc$Position $tmp3032 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3033 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp3034 = *(&local20);
org$frostlang$frostc$MethodDecl$Kind $tmp3035 = *(&local21);
frost$core$String* $tmp3036 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp3037 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp3038 = *(&local24);
org$frostlang$frostc$ASTNode* $tmp3039 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp3040 = *(&local26);
org$frostlang$frostc$MethodDecl* $tmp3041 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp3031, $tmp3032, $tmp3033, $tmp3034, $tmp3035, $tmp3036, $tmp3037, $tmp3038, $tmp3039, $tmp3040);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
org$frostlang$frostc$MethodDecl* $tmp3042 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local38) = $tmp3041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// line 932
org$frostlang$frostc$MethodDecl* $tmp3043 = *(&local38);
org$frostlang$frostc$Annotations** $tmp3044 = &$tmp3043->annotations;
org$frostlang$frostc$Annotations* $tmp3045 = *$tmp3044;
frost$core$Bit $tmp3046 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3045);
bool $tmp3047 = $tmp3046.value;
if ($tmp3047) goto block37; else goto block38;
block37:;
// line 933
org$frostlang$frostc$MethodDecl* $tmp3048 = *(&local38);
org$frostlang$frostc$Position* $tmp3049 = &((org$frostlang$frostc$Symbol*) $tmp3048)->position;
org$frostlang$frostc$Position $tmp3050 = *$tmp3049;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3050, &$s3051);
// line 935
org$frostlang$frostc$MethodDecl* $tmp3052 = *(&local38);
org$frostlang$frostc$Annotations** $tmp3053 = &$tmp3052->annotations;
org$frostlang$frostc$Annotations* $tmp3054 = *$tmp3053;
frost$core$Int64* $tmp3055 = &$tmp3054->flags;
frost$core$Int64 $tmp3056 = *$tmp3055;
frost$core$Int64 $tmp3057 = (frost$core$Int64) {16};
frost$core$Int64 $tmp3058 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp3057);
frost$core$Int64 $tmp3059 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp3056, $tmp3058);
frost$core$Int64* $tmp3060 = &$tmp3054->flags;
*$tmp3060 = $tmp3059;
goto block38;
block38:;
// line 937
frost$core$Weak** $tmp3061 = &param0->compiler;
frost$core$Weak* $tmp3062 = *$tmp3061;
frost$core$Object* $tmp3063 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3062);
frost$collections$Stack** $tmp3064 = &((org$frostlang$frostc$Compiler*) $tmp3063)->currentClass;
frost$collections$Stack* $tmp3065 = *$tmp3064;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {0};
frost$core$Object* $tmp3067 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3065, $tmp3066);
org$frostlang$frostc$ClassDecl** $tmp3068 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3069 = *$tmp3068;
bool $tmp3070 = ((org$frostlang$frostc$ClassDecl*) $tmp3067) == $tmp3069;
frost$core$Bit $tmp3071 = frost$core$Bit$init$builtin_bit($tmp3070);
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp3073 = (frost$core$Int64) {937};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3074, $tmp3073);
abort(); // unreachable
block39:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3067);
frost$core$Frost$unref$frost$core$Object$Q($tmp3063);
// line 938
frost$core$Weak** $tmp3075 = &param0->compiler;
frost$core$Weak* $tmp3076 = *$tmp3075;
frost$core$Object* $tmp3077 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3076);
frost$collections$Stack** $tmp3078 = &((org$frostlang$frostc$Compiler*) $tmp3077)->currentClass;
frost$collections$Stack* $tmp3079 = *$tmp3078;
frost$core$Object* $tmp3080 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3079);
frost$core$Frost$unref$frost$core$Object$Q($tmp3080);
frost$core$Frost$unref$frost$core$Object$Q($tmp3077);
// line 939
org$frostlang$frostc$ClassDecl** $tmp3081 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3082 = *$tmp3081;
frost$collections$Array** $tmp3083 = &$tmp3082->methods;
frost$collections$Array* $tmp3084 = *$tmp3083;
org$frostlang$frostc$MethodDecl* $tmp3085 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp3084, ((frost$core$Object*) $tmp3085));
// line 940
org$frostlang$frostc$ClassDecl** $tmp3086 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3087 = *$tmp3086;
org$frostlang$frostc$SymbolTable** $tmp3088 = &$tmp3087->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3089 = *$tmp3088;
org$frostlang$frostc$MethodDecl* $tmp3090 = *(&local38);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp3089, ((org$frostlang$frostc$Symbol*) $tmp3090));
org$frostlang$frostc$MethodDecl* $tmp3091 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3092 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3093 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3094 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3095 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3095));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3096 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3097 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3098 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3099 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block20:;
frost$core$Int64 $tmp3100 = (frost$core$Int64) {18};
frost$core$Bit $tmp3101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2768, $tmp3100);
bool $tmp3102 = $tmp3101.value;
if ($tmp3102) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Position* $tmp3103 = (org$frostlang$frostc$Position*) ($tmp2766->$data + 0);
org$frostlang$frostc$Position $tmp3104 = *$tmp3103;
*(&local39) = $tmp3104;
org$frostlang$frostc$ASTNode** $tmp3105 = (org$frostlang$frostc$ASTNode**) ($tmp2766->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3106 = *$tmp3105;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
org$frostlang$frostc$ASTNode* $tmp3107 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
*(&local40) = $tmp3106;
org$frostlang$frostc$FixedArray** $tmp3108 = (org$frostlang$frostc$FixedArray**) ($tmp2766->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3109 = *$tmp3108;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
org$frostlang$frostc$FixedArray* $tmp3110 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
*(&local41) = $tmp3109;
org$frostlang$frostc$ASTNode** $tmp3111 = (org$frostlang$frostc$ASTNode**) ($tmp2766->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3112 = *$tmp3111;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
org$frostlang$frostc$ASTNode* $tmp3113 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
*(&local42) = $tmp3112;
// line 943
frost$collections$HashMap* $tmp3114 = *(&local3);
frost$core$String* $tmp3115 = *(&local2);
frost$collections$Array* $tmp3116 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3114), $tmp3115, ((frost$collections$List*) $tmp3116));
// line 944
org$frostlang$frostc$ClassDecl** $tmp3117 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3118 = *$tmp3117;
frost$collections$Array** $tmp3119 = &$tmp3118->fields;
frost$collections$Array* $tmp3120 = *$tmp3119;
ITable* $tmp3121 = ((frost$collections$CollectionView*) $tmp3120)->$class->itable;
while ($tmp3121->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3121 = $tmp3121->next;
}
$fn3123 $tmp3122 = $tmp3121->methods[0];
frost$core$Int64 $tmp3124 = $tmp3122(((frost$collections$CollectionView*) $tmp3120));
*(&local43) = $tmp3124;
// line 945
org$frostlang$frostc$ClassDecl** $tmp3125 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3126 = *$tmp3125;
org$frostlang$frostc$Position $tmp3127 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp3128 = *(&local40);
org$frostlang$frostc$FixedArray* $tmp3129 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp3130 = *(&local42);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp3126, $tmp3127, $tmp3128, $tmp3129, $tmp3130);
// line 946
frost$core$Int64 $tmp3131 = *(&local43);
org$frostlang$frostc$ClassDecl** $tmp3132 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3133 = *$tmp3132;
frost$collections$Array** $tmp3134 = &$tmp3133->fields;
frost$collections$Array* $tmp3135 = *$tmp3134;
ITable* $tmp3136 = ((frost$collections$CollectionView*) $tmp3135)->$class->itable;
while ($tmp3136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3136 = $tmp3136->next;
}
$fn3138 $tmp3137 = $tmp3136->methods[0];
frost$core$Int64 $tmp3139 = $tmp3137(((frost$collections$CollectionView*) $tmp3135));
frost$core$Bit $tmp3140 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3141 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3131, $tmp3139, $tmp3140);
frost$core$Int64 $tmp3142 = $tmp3141.min;
*(&local44) = $tmp3142;
frost$core$Int64 $tmp3143 = $tmp3141.max;
frost$core$Bit $tmp3144 = $tmp3141.inclusive;
bool $tmp3145 = $tmp3144.value;
frost$core$Int64 $tmp3146 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3147 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3146);
if ($tmp3145) goto block46; else goto block47;
block46:;
int64_t $tmp3148 = $tmp3142.value;
int64_t $tmp3149 = $tmp3143.value;
bool $tmp3150 = $tmp3148 <= $tmp3149;
frost$core$Bit $tmp3151 = (frost$core$Bit) {$tmp3150};
bool $tmp3152 = $tmp3151.value;
if ($tmp3152) goto block43; else goto block44;
block47:;
int64_t $tmp3153 = $tmp3142.value;
int64_t $tmp3154 = $tmp3143.value;
bool $tmp3155 = $tmp3153 < $tmp3154;
frost$core$Bit $tmp3156 = (frost$core$Bit) {$tmp3155};
bool $tmp3157 = $tmp3156.value;
if ($tmp3157) goto block43; else goto block44;
block43:;
// line 947
org$frostlang$frostc$ClassDecl** $tmp3158 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3159 = *$tmp3158;
frost$collections$Array** $tmp3160 = &$tmp3159->fields;
frost$collections$Array* $tmp3161 = *$tmp3160;
frost$core$Int64 $tmp3162 = *(&local44);
frost$core$Object* $tmp3163 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3161, $tmp3162);
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp3163)));
org$frostlang$frostc$FieldDecl* $tmp3164 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) $tmp3163);
frost$core$Frost$unref$frost$core$Object$Q($tmp3163);
// line 948
org$frostlang$frostc$FieldDecl* $tmp3165 = *(&local45);
org$frostlang$frostc$FieldDecl$Kind* $tmp3166 = &$tmp3165->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp3167 = *$tmp3166;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3168;
$tmp3168 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3168->value = $tmp3167;
frost$core$Int64 $tmp3169 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp3170 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3169);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3171;
$tmp3171 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3171->value = $tmp3170;
ITable* $tmp3172 = ((frost$core$Equatable*) $tmp3168)->$class->itable;
while ($tmp3172->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3172 = $tmp3172->next;
}
$fn3174 $tmp3173 = $tmp3172->methods[1];
frost$core$Bit $tmp3175 = $tmp3173(((frost$core$Equatable*) $tmp3168), ((frost$core$Equatable*) $tmp3171));
bool $tmp3176 = $tmp3175.value;
if ($tmp3176) goto block50; else goto block51;
block50:;
org$frostlang$frostc$FieldDecl* $tmp3177 = *(&local45);
org$frostlang$frostc$Annotations** $tmp3178 = &$tmp3177->annotations;
org$frostlang$frostc$Annotations* $tmp3179 = *$tmp3178;
frost$core$Bit $tmp3180 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3179);
*(&local46) = $tmp3180;
goto block52;
block51:;
*(&local46) = $tmp3175;
goto block52;
block52:;
frost$core$Bit $tmp3181 = *(&local46);
bool $tmp3182 = $tmp3181.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3171)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3168)));
if ($tmp3182) goto block48; else goto block49;
block48:;
// line 950
org$frostlang$frostc$FieldDecl* $tmp3183 = *(&local45);
org$frostlang$frostc$Position* $tmp3184 = &((org$frostlang$frostc$Symbol*) $tmp3183)->position;
org$frostlang$frostc$Position $tmp3185 = *$tmp3184;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3185, &$s3186);
goto block49;
block49:;
org$frostlang$frostc$FieldDecl* $tmp3187 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block45;
block45:;
frost$core$Int64 $tmp3188 = *(&local44);
int64_t $tmp3189 = $tmp3143.value;
int64_t $tmp3190 = $tmp3188.value;
int64_t $tmp3191 = $tmp3189 - $tmp3190;
frost$core$Int64 $tmp3192 = (frost$core$Int64) {$tmp3191};
frost$core$UInt64 $tmp3193 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3192);
if ($tmp3145) goto block54; else goto block55;
block54:;
uint64_t $tmp3194 = $tmp3193.value;
uint64_t $tmp3195 = $tmp3147.value;
bool $tmp3196 = $tmp3194 >= $tmp3195;
frost$core$Bit $tmp3197 = (frost$core$Bit) {$tmp3196};
bool $tmp3198 = $tmp3197.value;
if ($tmp3198) goto block53; else goto block44;
block55:;
uint64_t $tmp3199 = $tmp3193.value;
uint64_t $tmp3200 = $tmp3147.value;
bool $tmp3201 = $tmp3199 > $tmp3200;
frost$core$Bit $tmp3202 = (frost$core$Bit) {$tmp3201};
bool $tmp3203 = $tmp3202.value;
if ($tmp3203) goto block53; else goto block44;
block53:;
int64_t $tmp3204 = $tmp3188.value;
int64_t $tmp3205 = $tmp3146.value;
int64_t $tmp3206 = $tmp3204 + $tmp3205;
frost$core$Int64 $tmp3207 = (frost$core$Int64) {$tmp3206};
*(&local44) = $tmp3207;
goto block43;
block44:;
org$frostlang$frostc$ASTNode* $tmp3208 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3209 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3210 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block42:;
// line 956
frost$core$Bit $tmp3211 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3212 = $tmp3211.value;
if ($tmp3212) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp3213 = (frost$core$Int64) {956};
org$frostlang$frostc$ASTNode* $tmp3214 = *(&local4);
frost$core$String* $tmp3215 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3216, ((frost$core$Object*) $tmp3214));
frost$core$String* $tmp3217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3215, &$s3218);
org$frostlang$frostc$ASTNode* $tmp3219 = *(&local4);
frost$core$Int64* $tmp3220 = &$tmp3219->$rawValue;
frost$core$Int64 $tmp3221 = *$tmp3220;
frost$core$Int64$wrapper* $tmp3222;
$tmp3222 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3222->value = $tmp3221;
frost$core$String* $tmp3223 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3217, ((frost$core$Object*) $tmp3222));
frost$core$String* $tmp3224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3223, &$s3225);
org$frostlang$frostc$ASTNode* $tmp3226 = *(&local4);
$fn3228 $tmp3227 = ($fn3228) $tmp3226->$class->vtable[2];
org$frostlang$frostc$Position $tmp3229 = $tmp3227($tmp3226);
org$frostlang$frostc$Position$wrapper* $tmp3230;
$tmp3230 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp3230->value = $tmp3229;
frost$core$String* $tmp3231 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3224, ((frost$core$Object*) $tmp3230));
frost$core$String* $tmp3232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3231, &$s3233);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3234, $tmp3213, $tmp3232);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
abort(); // unreachable
block56:;
goto block7;
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2764);
org$frostlang$frostc$ASTNode* $tmp3235 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
// line 960
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3236 = &param0->source;
frost$io$File* $tmp3237 = *$tmp3236;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
frost$io$File** $tmp3238 = &param0->source;
*$tmp3238 = ((frost$io$File*) NULL);
// line 961
frost$collections$Array* $tmp3239 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3239)));
frost$collections$HashMap* $tmp3240 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp3243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3243));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3239);
block3:;
// line 964
frost$core$Bit $tmp3244 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3245 = $tmp3244.value;
if ($tmp3245) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp3246 = (frost$core$Int64) {964};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3247, $tmp3246);
abort(); // unreachable
block58:;
goto block1;
block1:;
// line 967
goto block60;
block60:;
goto block60;
block61:;
goto block62;
block62:;

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3248 = &param0->compiler;
frost$core$Weak* $tmp3249 = *$tmp3248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3249));
org$frostlang$frostc$ClassDecl** $tmp3250 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3251 = *$tmp3250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3251));
frost$io$File** $tmp3252 = &param0->source;
frost$io$File* $tmp3253 = *$tmp3252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
return;

}

