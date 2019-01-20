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
typedef org$frostlang$frostc$Position (*$fn262)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn312)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn317)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn321)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn326)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn471)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn473)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn515)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn517)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn559)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn561)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn603)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn605)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn647)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn649)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn773)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn777)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn782)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn858)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn915)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn919)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn924)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1002)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1006)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1011)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1044)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1048)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1053)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1127)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1131)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1136)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1198)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1202)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1207)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1248)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1252)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1257)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1305)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1309)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1314)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1346)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1350)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1355)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1377)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1381)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1386)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1506)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1510)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1515)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1543)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1547)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1552)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1566)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1570)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1575)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1607)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1611)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1616)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1666)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1670)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1675)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1730)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1768)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1772)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1777)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn1832)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1846)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1850)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1855)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1901)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1937)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2255)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2259)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2264)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2277)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2293)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2342)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2346)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2351)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2401)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2419)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2430)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2434)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2439)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2470)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2517)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2521)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2526)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2560)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2587)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2591)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2596)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2608)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2623)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2636)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2650)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2660)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2694)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2703)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2714)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2747)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2756)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2769)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2773)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2778)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2786)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2832)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2836)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2841)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2853)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2888)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3010)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3014)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3019)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3159)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3191)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3195)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3200)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3454)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3479)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3520)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3574)(org$frostlang$frostc$ASTNode*);

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
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -5660819477936753254, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static frost$core$String $s1636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -4969590453849429027, NULL };
static frost$core$String $s1703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1759 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 135, -5799500546547409163, NULL };
static frost$core$String $s1882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1917 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, -4207800433812468905, NULL };
static frost$core$String $s1958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s2047 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2048 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s2055 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s2113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s2219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2251 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2388 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2730 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2850 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2896 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2935 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2954 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2978 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2987 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2988 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s3002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s3004 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s3046 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3056 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s3114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s3177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s3261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s3273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s3352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3380 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s3448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3474 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3505 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3579 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 181, -4455204424448464455, NULL };

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
// unreffing REF($1:frost.core.Weak<org.frostlang.frostc.Compiler>)
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
// unreffing REF($34:org.frostlang.frostc.Type)
frost$core$String* $tmp28 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing name
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
// unreffing REF($50:org.frostlang.frostc.Type)
frost$core$String* $tmp33 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing name
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
// unreffing REF($66:org.frostlang.frostc.Type)
frost$core$String* $tmp38 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing name
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
// unreffing REF($82:org.frostlang.frostc.Type)
frost$core$String* $tmp43 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing name
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
// unreffing REF($98:org.frostlang.frostc.Type)
frost$core$String* $tmp48 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing name
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
// unreffing REF($114:org.frostlang.frostc.Type)
frost$core$String* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing name
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
// unreffing REF($130:org.frostlang.frostc.Type)
frost$core$String* $tmp58 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing name
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
// unreffing REF($146:org.frostlang.frostc.Type)
frost$core$String* $tmp63 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing name
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
// unreffing REF($162:org.frostlang.frostc.Type)
frost$core$String* $tmp68 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing name
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
// unreffing REF($178:org.frostlang.frostc.Type)
frost$core$String* $tmp73 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing name
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
// unreffing REF($194:org.frostlang.frostc.Type)
frost$core$String* $tmp78 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing name
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
// unreffing REF($208:org.frostlang.frostc.Type)
frost$core$String* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing name
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
// unreffing REF($248:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($242:frost.collections.Array<org.frostlang.frostc.Type>)
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
// unreffing REF($274:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
// unreffing REF($269:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($265:org.frostlang.frostc.Type)
frost$collections$Array* $tmp111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing subtypes
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing base
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
// unreffing REF($330:frost.collections.Array<org.frostlang.frostc.Type>)
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
// unreffing REF($371:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp139);
// unreffing REF($359:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp144 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing arg
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block32;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($348:frost.collections.Iterator<frost.collections.Iterable.T>)
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
// unreffing REF($399:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($390:org.frostlang.frostc.Type)
frost$collections$Array* $tmp154 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing finalArgs
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp155 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing args
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp156 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing base
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
// unreffing t
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp176 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing type
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
// unreffing REF($479:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing REF($478:frost.core.String)
abort(); // unreachable
block39:;
org$frostlang$frostc$IR$Value* $tmp186 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing type
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
frost$core$Int64 $tmp205 = (frost$core$Int64) {15};
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
frost$core$Int64 $tmp210 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp215 = (frost$core$Int64) {17};
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
frost$core$Int64 $tmp220 = (frost$core$Int64) {18};
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
// unreffing REF($571:frost.collections.Array<org.frostlang.frostc.Type>)
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
// unreffing REF($612:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
// unreffing REF($600:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp247 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing p
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($589:frost.collections.Iterator<frost.collections.Iterable.T>)
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
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251 != NULL);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s255, $tmp254, &$s256);
abort(); // unreachable
block60:;
org$frostlang$frostc$Type* $tmp257 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
org$frostlang$frostc$Type* $tmp258 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local19) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($648:org.frostlang.frostc.Type)
goto block58;
block59:;
// line 1
// line 91
org$frostlang$frostc$Type* $tmp259 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
org$frostlang$frostc$Type* $tmp260 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local19) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($661:org.frostlang.frostc.Type)
goto block58;
block58:;
// line 93
$fn262 $tmp261 = ($fn262) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp263 = $tmp261(param1);
org$frostlang$frostc$Type$Kind $tmp264 = *(&local16);
frost$collections$Array* $tmp265 = *(&local17);
org$frostlang$frostc$FixedArray* $tmp266 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp265);
org$frostlang$frostc$Type* $tmp267 = *(&local19);
frost$core$Int64 $tmp268 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp269 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp263, $tmp264, ((frost$collections$ListView*) $tmp266), $tmp267, $tmp268);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($683:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($678:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
org$frostlang$frostc$Type* $tmp270 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing returnType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp271 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing parameters
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp272 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing rawReturnType
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp273 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing rawParameters
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp269;
block42:;
// line 97
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(false);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {97};
frost$core$String* $tmp277 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s278, ((frost$core$Object*) param1));
frost$core$String* $tmp279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp277, &$s280);
frost$core$Int64* $tmp281 = &param1->$rawValue;
frost$core$Int64 $tmp282 = *$tmp281;
frost$core$Int64$wrapper* $tmp283;
$tmp283 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp283->value = $tmp282;
frost$core$String* $tmp284 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp279, ((frost$core$Object*) $tmp283));
frost$core$String* $tmp285 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp284, &$s286);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s287, $tmp276, $tmp285);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($725:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($724:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($723:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($720:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
// unreffing REF($719:frost.core.String)
abort(); // unreachable
block62:;
goto block1;
block1:;
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit(false);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp290 = (frost$core$Int64) {24};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s291, $tmp290, &$s292);
abort(); // unreachable
block64:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// line 103
frost$core$Int64 $tmp293 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param2, param3);
frost$core$Int64 $tmp294 = (frost$core$Int64) {0};
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 != $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block1; else goto block2;
block1:;
// line 104
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s300);
goto block2;
block2:;
// line 106
frost$core$Int64 $tmp301 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(param2, param3);
return $tmp301;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 113
frost$core$Bit $tmp302 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block1; else goto block2;
block1:;
// line 114
frost$core$Bit $tmp304 = frost$core$Bit$init$builtin_bit(true);
return $tmp304;
block2:;
// line 116
frost$core$String* $tmp305 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s306, param2);
frost$core$String* $tmp307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp305, &$s308);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp307);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing REF($9:frost.core.String)
// line 117
frost$core$Bit $tmp309 = frost$core$Bit$init$builtin_bit(false);
return $tmp309;

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
// line 110
frost$core$Int64 $tmp310 = (frost$core$Int64) {0};
*(&local0) = $tmp310;
// line 111
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp311 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local1) = ((frost$collections$Array*) NULL);
// line 112
frost$core$Method* $tmp313 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp313, ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
// line 112
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Method* $tmp314 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local2) = $tmp313;
// line 119
ITable* $tmp315 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp315->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
frost$collections$Iterator* $tmp318 = $tmp316(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp319 = $tmp318->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
frost$core$Bit $tmp322 = $tmp320($tmp318);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp324 = $tmp318->$class->itable;
while ($tmp324->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
frost$core$Object* $tmp327 = $tmp325($tmp318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp327)));
org$frostlang$frostc$ASTNode* $tmp328 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp327);
// line 120
org$frostlang$frostc$ASTNode* $tmp329 = *(&local3);
frost$core$Int64* $tmp330 = &$tmp329->$rawValue;
frost$core$Int64 $tmp331 = *$tmp330;
frost$core$Int64 $tmp332 = (frost$core$Int64) {0};
frost$core$Bit $tmp333 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp331, $tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp335 = (org$frostlang$frostc$Position*) ($tmp329->$data + 0);
org$frostlang$frostc$Position $tmp336 = *$tmp335;
*(&local4) = $tmp336;
frost$core$String** $tmp337 = (frost$core$String**) ($tmp329->$data + 16);
frost$core$String* $tmp338 = *$tmp337;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$String* $tmp339 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local5) = $tmp338;
frost$core$String** $tmp340 = (frost$core$String**) ($tmp329->$data + 24);
frost$core$String* $tmp341 = *$tmp340;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$String* $tmp342 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local6) = $tmp341;
org$frostlang$frostc$ASTNode** $tmp343 = (org$frostlang$frostc$ASTNode**) ($tmp329->$data + 32);
org$frostlang$frostc$ASTNode* $tmp344 = *$tmp343;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
org$frostlang$frostc$ASTNode* $tmp345 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local7) = $tmp344;
// line 122
org$frostlang$frostc$ASTNode* $tmp346 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlang$frostc$ASTNode* $tmp347 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local8) = $tmp346;
// line 123
frost$core$String* $tmp348 = *(&local5);
frost$core$Bit $tmp349 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s350);
bool $tmp351 = $tmp349.value;
if ($tmp351) goto block8; else goto block9;
block8:;
// line 125
org$frostlang$frostc$Position $tmp352 = *(&local4);
frost$core$Int64 $tmp353 = *(&local0);
frost$core$Int64 $tmp354 = (frost$core$Int64) {2};
frost$core$Int64 $tmp355 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp352, $tmp353, $tmp354);
*(&local0) = $tmp355;
goto block7;
block9:;
frost$core$Bit $tmp356 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s357);
bool $tmp358 = $tmp356.value;
if ($tmp358) goto block10; else goto block11;
block10:;
// line 128
org$frostlang$frostc$Position $tmp359 = *(&local4);
frost$core$Int64 $tmp360 = *(&local0);
frost$core$Int64 $tmp361 = (frost$core$Int64) {4};
frost$core$Int64 $tmp362 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp359, $tmp360, $tmp361);
*(&local0) = $tmp362;
goto block7;
block11:;
frost$core$Bit $tmp363 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s364);
bool $tmp365 = $tmp363.value;
if ($tmp365) goto block12; else goto block13;
block12:;
// line 131
org$frostlang$frostc$Position $tmp366 = *(&local4);
frost$core$Int64 $tmp367 = *(&local0);
frost$core$Int64 $tmp368 = (frost$core$Int64) {8};
frost$core$Int64 $tmp369 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp366, $tmp367, $tmp368);
*(&local0) = $tmp369;
goto block7;
block13:;
frost$core$Bit $tmp370 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s371);
bool $tmp372 = $tmp370.value;
if ($tmp372) goto block14; else goto block15;
block14:;
// line 134
org$frostlang$frostc$Position $tmp373 = *(&local4);
frost$core$Int64 $tmp374 = *(&local0);
frost$core$Int64 $tmp375 = (frost$core$Int64) {16};
frost$core$Int64 $tmp376 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp373, $tmp374, $tmp375);
*(&local0) = $tmp376;
goto block7;
block15:;
frost$core$Bit $tmp377 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s378);
bool $tmp379 = $tmp377.value;
if ($tmp379) goto block16; else goto block17;
block16:;
// line 137
org$frostlang$frostc$Position $tmp380 = *(&local4);
frost$core$Int64 $tmp381 = *(&local0);
frost$core$Int64 $tmp382 = (frost$core$Int64) {32};
frost$core$Int64 $tmp383 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp380, $tmp381, $tmp382);
*(&local0) = $tmp383;
goto block7;
block17:;
frost$core$Bit $tmp384 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s385);
bool $tmp386 = $tmp384.value;
if ($tmp386) goto block18; else goto block19;
block18:;
// line 140
org$frostlang$frostc$Position $tmp387 = *(&local4);
frost$core$Int64 $tmp388 = *(&local0);
frost$core$Int64 $tmp389 = (frost$core$Int64) {64};
frost$core$Int64 $tmp390 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp387, $tmp388, $tmp389);
*(&local0) = $tmp390;
goto block7;
block19:;
frost$core$Bit $tmp391 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s392);
bool $tmp393 = $tmp391.value;
if ($tmp393) goto block20; else goto block21;
block20:;
// line 143
org$frostlang$frostc$Position $tmp394 = *(&local4);
frost$core$Int64 $tmp395 = *(&local0);
frost$core$Int64 $tmp396 = (frost$core$Int64) {128};
frost$core$Int64 $tmp397 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp394, $tmp395, $tmp396);
*(&local0) = $tmp397;
goto block7;
block21:;
frost$core$Bit $tmp398 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s399);
bool $tmp400 = $tmp398.value;
if ($tmp400) goto block22; else goto block23;
block22:;
// line 146
org$frostlang$frostc$Position $tmp401 = *(&local4);
frost$core$Int64 $tmp402 = *(&local0);
frost$core$Int64 $tmp403 = (frost$core$Int64) {256};
frost$core$Int64 $tmp404 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp401, $tmp402, $tmp403);
*(&local0) = $tmp404;
goto block7;
block23:;
frost$core$Bit $tmp405 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s406);
bool $tmp407 = $tmp405.value;
if ($tmp407) goto block24; else goto block25;
block24:;
// line 149
org$frostlang$frostc$Position $tmp408 = *(&local4);
frost$core$Int64 $tmp409 = *(&local0);
frost$core$Int64 $tmp410 = (frost$core$Int64) {512};
frost$core$Int64 $tmp411 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp408, $tmp409, $tmp410);
*(&local0) = $tmp411;
goto block7;
block25:;
frost$core$Bit $tmp412 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s413);
bool $tmp414 = $tmp412.value;
if ($tmp414) goto block26; else goto block27;
block26:;
// line 152
org$frostlang$frostc$Position $tmp415 = *(&local4);
frost$core$Int64 $tmp416 = *(&local0);
frost$core$Int64 $tmp417 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp418 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp415, $tmp416, $tmp417);
*(&local0) = $tmp418;
goto block7;
block27:;
frost$core$Bit $tmp419 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s420);
bool $tmp421 = $tmp419.value;
if ($tmp421) goto block28; else goto block29;
block28:;
// line 155
org$frostlang$frostc$Position $tmp422 = *(&local4);
frost$core$Int64 $tmp423 = *(&local0);
frost$core$Int64 $tmp424 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp425 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp422, $tmp423, $tmp424);
*(&local0) = $tmp425;
goto block7;
block29:;
frost$core$Bit $tmp426 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s427);
bool $tmp428 = $tmp426.value;
if ($tmp428) goto block30; else goto block31;
block30:;
// line 158
org$frostlang$frostc$Position $tmp429 = *(&local4);
frost$core$Int64 $tmp430 = *(&local0);
frost$core$Int64 $tmp431 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp432 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp429, $tmp430, $tmp431);
*(&local0) = $tmp432;
goto block7;
block31:;
frost$core$Bit $tmp433 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s434);
bool $tmp435 = $tmp433.value;
if ($tmp435) goto block32; else goto block33;
block32:;
// line 161
org$frostlang$frostc$Position $tmp436 = *(&local4);
frost$core$Int64 $tmp437 = *(&local0);
frost$core$Int64 $tmp438 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp439 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp436, $tmp437, $tmp438);
*(&local0) = $tmp439;
goto block7;
block33:;
frost$core$Bit $tmp440 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s441);
bool $tmp442 = $tmp440.value;
if ($tmp442) goto block34; else goto block35;
block34:;
// line 164
org$frostlang$frostc$Position $tmp443 = *(&local4);
frost$core$Int64 $tmp444 = *(&local0);
frost$core$Int64 $tmp445 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp446 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp443, $tmp444, $tmp445);
*(&local0) = $tmp446;
goto block7;
block35:;
frost$core$Bit $tmp447 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s448);
bool $tmp449 = $tmp447.value;
if ($tmp449) goto block36; else goto block37;
block36:;
// line 167
org$frostlang$frostc$Position $tmp450 = *(&local4);
frost$core$Int64 $tmp451 = *(&local0);
frost$core$Int64 $tmp452 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp453 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp450, $tmp451, $tmp452);
*(&local0) = $tmp453;
goto block7;
block37:;
frost$core$Bit $tmp454 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s455);
bool $tmp456 = $tmp454.value;
if ($tmp456) goto block38; else goto block39;
block38:;
// line 170
frost$collections$Array* $tmp457 = *(&local1);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457 == NULL);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block40; else goto block41;
block40:;
// line 171
frost$collections$Array* $tmp460 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$collections$Array* $tmp461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local1) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// unreffing REF($256:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block41;
block41:;
// line 173
frost$core$Method* $tmp462 = *(&local2);
org$frostlang$frostc$Position $tmp463 = *(&local4);
frost$core$String* $tmp464 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp465 = *(&local8);
frost$core$Int8** $tmp466 = &$tmp462->pointer;
frost$core$Int8* $tmp467 = *$tmp466;
frost$core$Immutable** $tmp468 = &$tmp462->target;
frost$core$Immutable* $tmp469 = *$tmp468;
bool $tmp470 = $tmp469 != ((frost$core$Immutable*) NULL);
if ($tmp470) goto block44; else goto block45;
block45:;
frost$core$Bit $tmp472 = (($fn471) $tmp467)(param0, $tmp463, $tmp464, $tmp465);
*(&local9) = $tmp472;
goto block46;
block44:;
frost$core$Bit $tmp474 = (($fn473) $tmp467)($tmp469, param0, $tmp463, $tmp464, $tmp465);
*(&local9) = $tmp474;
goto block46;
block46:;
frost$core$Bit $tmp475 = *(&local9);
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block42; else goto block43;
block42:;
// line 174
frost$collections$Array* $tmp477 = *(&local1);
frost$core$Bit $tmp478 = frost$core$Bit$init$builtin_bit($tmp477 != NULL);
bool $tmp479 = $tmp478.value;
if ($tmp479) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp480 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s481, $tmp480, &$s482);
abort(); // unreachable
block47:;
org$frostlang$frostc$Annotations$Expression* $tmp483 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp484 = (frost$core$Int64) {0};
frost$core$String* $tmp485 = *(&local6);
frost$core$Bit $tmp486 = frost$core$Bit$init$builtin_bit($tmp485 != NULL);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp488 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s489, $tmp488, &$s490);
abort(); // unreachable
block49:;
org$frostlang$frostc$ASTNode* $tmp491 = *(&local8);
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit($tmp491 != NULL);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp494 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s495, $tmp494, &$s496);
abort(); // unreachable
block51:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp483, $tmp484, $tmp485, $tmp491);
frost$collections$Array$add$frost$collections$Array$T($tmp477, ((frost$core$Object*) $tmp483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing REF($303:org.frostlang.frostc.Annotations.Expression)
// line 175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp497 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block43:;
goto block7;
block39:;
frost$core$Bit $tmp498 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s499);
bool $tmp500 = $tmp498.value;
if ($tmp500) goto block53; else goto block54;
block53:;
// line 179
frost$collections$Array* $tmp501 = *(&local1);
frost$core$Bit $tmp502 = frost$core$Bit$init$builtin_bit($tmp501 == NULL);
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block55; else goto block56;
block55:;
// line 180
frost$collections$Array* $tmp504 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp504);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$collections$Array* $tmp505 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local1) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// unreffing REF($348:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block56;
block56:;
// line 182
frost$core$Method* $tmp506 = *(&local2);
org$frostlang$frostc$Position $tmp507 = *(&local4);
frost$core$String* $tmp508 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp509 = *(&local8);
frost$core$Int8** $tmp510 = &$tmp506->pointer;
frost$core$Int8* $tmp511 = *$tmp510;
frost$core$Immutable** $tmp512 = &$tmp506->target;
frost$core$Immutable* $tmp513 = *$tmp512;
bool $tmp514 = $tmp513 != ((frost$core$Immutable*) NULL);
if ($tmp514) goto block59; else goto block60;
block60:;
frost$core$Bit $tmp516 = (($fn515) $tmp511)(param0, $tmp507, $tmp508, $tmp509);
*(&local10) = $tmp516;
goto block61;
block59:;
frost$core$Bit $tmp518 = (($fn517) $tmp511)($tmp513, param0, $tmp507, $tmp508, $tmp509);
*(&local10) = $tmp518;
goto block61;
block61:;
frost$core$Bit $tmp519 = *(&local10);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block57; else goto block58;
block57:;
// line 183
frost$collections$Array* $tmp521 = *(&local1);
frost$core$Bit $tmp522 = frost$core$Bit$init$builtin_bit($tmp521 != NULL);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {183};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s525, $tmp524, &$s526);
abort(); // unreachable
block62:;
org$frostlang$frostc$Annotations$Expression* $tmp527 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp528 = (frost$core$Int64) {1};
frost$core$String* $tmp529 = *(&local6);
frost$core$Bit $tmp530 = frost$core$Bit$init$builtin_bit($tmp529 != NULL);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {183};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s533, $tmp532, &$s534);
abort(); // unreachable
block64:;
org$frostlang$frostc$ASTNode* $tmp535 = *(&local8);
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit($tmp535 != NULL);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {183};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s539, $tmp538, &$s540);
abort(); // unreachable
block66:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp527, $tmp528, $tmp529, $tmp535);
frost$collections$Array$add$frost$collections$Array$T($tmp521, ((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// unreffing REF($395:org.frostlang.frostc.Annotations.Expression)
// line 184
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp541 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block58;
block58:;
goto block7;
block54:;
frost$core$Bit $tmp542 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s543);
bool $tmp544 = $tmp542.value;
if ($tmp544) goto block68; else goto block69;
block68:;
// line 188
frost$collections$Array* $tmp545 = *(&local1);
frost$core$Bit $tmp546 = frost$core$Bit$init$builtin_bit($tmp545 == NULL);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block70; else goto block71;
block70:;
// line 189
frost$collections$Array* $tmp548 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$collections$Array* $tmp549 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local1) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing REF($440:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block71;
block71:;
// line 191
frost$core$Method* $tmp550 = *(&local2);
org$frostlang$frostc$Position $tmp551 = *(&local4);
frost$core$String* $tmp552 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp553 = *(&local8);
frost$core$Int8** $tmp554 = &$tmp550->pointer;
frost$core$Int8* $tmp555 = *$tmp554;
frost$core$Immutable** $tmp556 = &$tmp550->target;
frost$core$Immutable* $tmp557 = *$tmp556;
bool $tmp558 = $tmp557 != ((frost$core$Immutable*) NULL);
if ($tmp558) goto block74; else goto block75;
block75:;
frost$core$Bit $tmp560 = (($fn559) $tmp555)(param0, $tmp551, $tmp552, $tmp553);
*(&local11) = $tmp560;
goto block76;
block74:;
frost$core$Bit $tmp562 = (($fn561) $tmp555)($tmp557, param0, $tmp551, $tmp552, $tmp553);
*(&local11) = $tmp562;
goto block76;
block76:;
frost$core$Bit $tmp563 = *(&local11);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block72; else goto block73;
block72:;
// line 192
frost$collections$Array* $tmp565 = *(&local1);
frost$core$Bit $tmp566 = frost$core$Bit$init$builtin_bit($tmp565 != NULL);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {192};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s569, $tmp568, &$s570);
abort(); // unreachable
block77:;
org$frostlang$frostc$Annotations$Expression* $tmp571 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp572 = (frost$core$Int64) {2};
frost$core$String* $tmp573 = *(&local6);
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit($tmp573 != NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp576 = (frost$core$Int64) {192};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s577, $tmp576, &$s578);
abort(); // unreachable
block79:;
org$frostlang$frostc$ASTNode* $tmp579 = *(&local8);
frost$core$Bit $tmp580 = frost$core$Bit$init$builtin_bit($tmp579 != NULL);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp582 = (frost$core$Int64) {192};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s583, $tmp582, &$s584);
abort(); // unreachable
block81:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp571, $tmp572, $tmp573, $tmp579);
frost$collections$Array$add$frost$collections$Array$T($tmp565, ((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing REF($487:org.frostlang.frostc.Annotations.Expression)
// line 193
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp585 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block73;
block73:;
goto block7;
block69:;
frost$core$Bit $tmp586 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s587);
bool $tmp588 = $tmp586.value;
if ($tmp588) goto block83; else goto block84;
block83:;
// line 197
frost$collections$Array* $tmp589 = *(&local1);
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit($tmp589 == NULL);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block85; else goto block86;
block85:;
// line 198
frost$collections$Array* $tmp592 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$collections$Array* $tmp593 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local1) = $tmp592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
// unreffing REF($532:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block86;
block86:;
// line 200
frost$core$Method* $tmp594 = *(&local2);
org$frostlang$frostc$Position $tmp595 = *(&local4);
frost$core$String* $tmp596 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp597 = *(&local8);
frost$core$Int8** $tmp598 = &$tmp594->pointer;
frost$core$Int8* $tmp599 = *$tmp598;
frost$core$Immutable** $tmp600 = &$tmp594->target;
frost$core$Immutable* $tmp601 = *$tmp600;
bool $tmp602 = $tmp601 != ((frost$core$Immutable*) NULL);
if ($tmp602) goto block89; else goto block90;
block90:;
frost$core$Bit $tmp604 = (($fn603) $tmp599)(param0, $tmp595, $tmp596, $tmp597);
*(&local12) = $tmp604;
goto block91;
block89:;
frost$core$Bit $tmp606 = (($fn605) $tmp599)($tmp601, param0, $tmp595, $tmp596, $tmp597);
*(&local12) = $tmp606;
goto block91;
block91:;
frost$core$Bit $tmp607 = *(&local12);
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block87; else goto block88;
block87:;
// line 201
frost$collections$Array* $tmp609 = *(&local1);
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit($tmp609 != NULL);
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {201};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s613, $tmp612, &$s614);
abort(); // unreachable
block92:;
org$frostlang$frostc$Annotations$Expression* $tmp615 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp616 = (frost$core$Int64) {3};
frost$core$String* $tmp617 = *(&local6);
frost$core$Bit $tmp618 = frost$core$Bit$init$builtin_bit($tmp617 != NULL);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {201};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s621, $tmp620, &$s622);
abort(); // unreachable
block94:;
org$frostlang$frostc$ASTNode* $tmp623 = *(&local8);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623 != NULL);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp626 = (frost$core$Int64) {201};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s627, $tmp626, &$s628);
abort(); // unreachable
block96:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp615, $tmp616, $tmp617, $tmp623);
frost$collections$Array$add$frost$collections$Array$T($tmp609, ((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($579:org.frostlang.frostc.Annotations.Expression)
// line 202
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp629 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block88;
block88:;
goto block7;
block84:;
frost$core$Bit $tmp630 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp348, &$s631);
bool $tmp632 = $tmp630.value;
if ($tmp632) goto block98; else goto block99;
block98:;
// line 206
frost$collections$Array* $tmp633 = *(&local1);
frost$core$Bit $tmp634 = frost$core$Bit$init$builtin_bit($tmp633 == NULL);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block100; else goto block101;
block100:;
// line 207
frost$collections$Array* $tmp636 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp636);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$collections$Array* $tmp637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local1) = $tmp636;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing REF($624:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block101;
block101:;
// line 209
frost$core$Method* $tmp638 = *(&local2);
org$frostlang$frostc$Position $tmp639 = *(&local4);
frost$core$String* $tmp640 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp641 = *(&local8);
frost$core$Int8** $tmp642 = &$tmp638->pointer;
frost$core$Int8* $tmp643 = *$tmp642;
frost$core$Immutable** $tmp644 = &$tmp638->target;
frost$core$Immutable* $tmp645 = *$tmp644;
bool $tmp646 = $tmp645 != ((frost$core$Immutable*) NULL);
if ($tmp646) goto block104; else goto block105;
block105:;
frost$core$Bit $tmp648 = (($fn647) $tmp643)(param0, $tmp639, $tmp640, $tmp641);
*(&local13) = $tmp648;
goto block106;
block104:;
frost$core$Bit $tmp650 = (($fn649) $tmp643)($tmp645, param0, $tmp639, $tmp640, $tmp641);
*(&local13) = $tmp650;
goto block106;
block106:;
frost$core$Bit $tmp651 = *(&local13);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block102; else goto block103;
block102:;
// line 210
frost$collections$Array* $tmp653 = *(&local1);
frost$core$Bit $tmp654 = frost$core$Bit$init$builtin_bit($tmp653 != NULL);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {210};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s657, $tmp656, &$s658);
abort(); // unreachable
block107:;
org$frostlang$frostc$Annotations$Expression* $tmp659 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp660 = (frost$core$Int64) {4};
frost$core$String* $tmp661 = *(&local6);
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit($tmp661 != NULL);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {210};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block109:;
org$frostlang$frostc$ASTNode* $tmp667 = *(&local8);
frost$core$Bit $tmp668 = frost$core$Bit$init$builtin_bit($tmp667 != NULL);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {210};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s671, $tmp670, &$s672);
abort(); // unreachable
block111:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp659, $tmp660, $tmp661, $tmp667);
frost$collections$Array$add$frost$collections$Array$T($tmp653, ((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($671:org.frostlang.frostc.Annotations.Expression)
// line 211
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp673 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block103;
block103:;
goto block7;
block99:;
// line 215
org$frostlang$frostc$Position $tmp674 = *(&local4);
frost$core$String* $tmp675 = *(&local5);
frost$core$String* $tmp676 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s677, $tmp675);
frost$core$String* $tmp678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp676, &$s679);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp674, $tmp678);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing REF($710:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing REF($709:frost.core.String)
goto block7;
block7:;
// line 218
org$frostlang$frostc$ASTNode* $tmp680 = *(&local8);
frost$core$Bit $tmp681 = frost$core$Bit$init$builtin_bit($tmp680 != NULL);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block113; else goto block114;
block113:;
// line 219
org$frostlang$frostc$Position $tmp683 = *(&local4);
frost$core$String* $tmp684 = *(&local5);
frost$core$String* $tmp685 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s686, $tmp684);
frost$core$String* $tmp687 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp685, &$s688);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp683, $tmp687);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
// unreffing REF($729:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
// unreffing REF($728:frost.core.String)
goto block114;
block114:;
org$frostlang$frostc$ASTNode* $tmp689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
// unreffing expr
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp690 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing rawExpr
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp691 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing exprText
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp692 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing text
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 223
frost$core$Bit $tmp693 = frost$core$Bit$init$builtin_bit(false);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block115; else goto block116;
block116:;
frost$core$Int64 $tmp695 = (frost$core$Int64) {223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s696, $tmp695);
abort(); // unreachable
block115:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
// unreffing REF($39:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp697 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing c
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($28:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 227
org$frostlang$frostc$Annotations* $tmp698 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp699 = *(&local0);
frost$collections$Array* $tmp700 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp698, $tmp699, ((frost$collections$ListView*) $tmp700));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing REF($780:org.frostlang.frostc.Annotations)
frost$core$Method* $tmp701 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing checkExpression
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($13:frost.core.Method)
frost$collections$Array* $tmp702 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp698;

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
// line 232
*(&local0) = ((frost$core$String*) NULL);
// line 234
frost$core$Bit $tmp703 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block1; else goto block3;
block1:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp705 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 238
frost$core$Bit $tmp706 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {238};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s709, $tmp708, &$s710);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp711 = &param3->$rawValue;
frost$core$Int64 $tmp712 = *$tmp711;
frost$core$Int64 $tmp713 = (frost$core$Int64) {40};
frost$core$Bit $tmp714 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp712, $tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp716 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp717 = *$tmp716;
*(&local1) = $tmp717;
frost$core$String** $tmp718 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp719 = *$tmp718;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$String* $tmp720 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local2) = $tmp719;
// line 240
frost$core$String* $tmp721 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$String* $tmp722 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local0) = $tmp721;
frost$core$String* $tmp723 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 243
frost$core$Bit $tmp724 = frost$core$Bit$init$builtin_bit(false);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp726 = (frost$core$Int64) {243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s727, $tmp726);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 247
org$frostlang$frostc$Annotations* $tmp728 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
org$frostlang$frostc$Annotations* $tmp729 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local3) = $tmp728;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($68:org.frostlang.frostc.Annotations)
// line 248
// line 249
frost$core$Int64* $tmp730 = &param5->$rawValue;
frost$core$Int64 $tmp731 = *$tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {51};
frost$core$Bit $tmp733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp731, $tmp732);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp735 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp736 = *$tmp735;
org$frostlang$frostc$Variable$Kind* $tmp737 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp738 = *$tmp737;
*(&local5) = $tmp738;
org$frostlang$frostc$FixedArray** $tmp739 = (org$frostlang$frostc$FixedArray**) (param5->$data + 24);
org$frostlang$frostc$FixedArray* $tmp740 = *$tmp739;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
org$frostlang$frostc$FixedArray* $tmp741 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local6) = $tmp740;
// line 251
org$frostlang$frostc$Variable$Kind $tmp742 = *(&local5);
frost$core$Int64 $tmp743 = $tmp742.$rawValue;
frost$core$Int64 $tmp744 = (frost$core$Int64) {0};
frost$core$Bit $tmp745 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp743, $tmp744);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block15; else goto block16;
block15:;
// line 253
frost$core$Int64 $tmp747 = (frost$core$Int64) {0};
org$frostlang$frostc$FieldDecl$Kind $tmp748 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp747);
*(&local4) = $tmp748;
goto block14;
block16:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {1};
frost$core$Bit $tmp750 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp743, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block17; else goto block18;
block17:;
// line 256
frost$core$Int64 $tmp752 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp753 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp752);
*(&local4) = $tmp753;
goto block14;
block18:;
frost$core$Int64 $tmp754 = (frost$core$Int64) {2};
frost$core$Bit $tmp755 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp743, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block19; else goto block20;
block19:;
// line 259
frost$core$Int64 $tmp757 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp758 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp757);
*(&local4) = $tmp758;
// line 260
org$frostlang$frostc$Annotations* $tmp759 = *(&local3);
frost$core$Int64* $tmp760 = &$tmp759->flags;
frost$core$Int64 $tmp761 = *$tmp760;
frost$core$Int64 $tmp762 = (frost$core$Int64) {16};
frost$core$Int64 $tmp763 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp761, $tmp762);
frost$core$Int64* $tmp764 = &$tmp759->flags;
*$tmp764 = $tmp763;
goto block14;
block20:;
frost$core$Int64 $tmp765 = (frost$core$Int64) {3};
frost$core$Bit $tmp766 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp743, $tmp765);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block21; else goto block14;
block21:;
// line 263
frost$core$Int64 $tmp768 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp769 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp768);
*(&local4) = $tmp769;
goto block14;
block14:;
// line 266
org$frostlang$frostc$FixedArray* $tmp770 = *(&local6);
ITable* $tmp771 = ((frost$collections$Iterable*) $tmp770)->$class->itable;
while ($tmp771->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp771 = $tmp771->next;
}
$fn773 $tmp772 = $tmp771->methods[0];
frost$collections$Iterator* $tmp774 = $tmp772(((frost$collections$Iterable*) $tmp770));
goto block22;
block22:;
ITable* $tmp775 = $tmp774->$class->itable;
while ($tmp775->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp775 = $tmp775->next;
}
$fn777 $tmp776 = $tmp775->methods[0];
frost$core$Bit $tmp778 = $tmp776($tmp774);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block24; else goto block23;
block23:;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp780 = $tmp774->$class->itable;
while ($tmp780->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp780 = $tmp780->next;
}
$fn782 $tmp781 = $tmp780->methods[1];
frost$core$Object* $tmp783 = $tmp781($tmp774);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp783)));
org$frostlang$frostc$ASTNode* $tmp784 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local7) = ((org$frostlang$frostc$ASTNode*) $tmp783);
// line 267
org$frostlang$frostc$ASTNode* $tmp785 = *(&local7);
frost$core$Int64* $tmp786 = &$tmp785->$rawValue;
frost$core$Int64 $tmp787 = *$tmp786;
frost$core$Int64 $tmp788 = (frost$core$Int64) {14};
frost$core$Bit $tmp789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp787, $tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp791 = (org$frostlang$frostc$Position*) ($tmp785->$data + 0);
org$frostlang$frostc$Position $tmp792 = *$tmp791;
*(&local8) = $tmp792;
org$frostlang$frostc$ASTNode** $tmp793 = (org$frostlang$frostc$ASTNode**) ($tmp785->$data + 16);
org$frostlang$frostc$ASTNode* $tmp794 = *$tmp793;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
org$frostlang$frostc$ASTNode* $tmp795 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local9) = $tmp794;
org$frostlang$frostc$ASTNode** $tmp796 = (org$frostlang$frostc$ASTNode**) ($tmp785->$data + 24);
org$frostlang$frostc$ASTNode* $tmp797 = *$tmp796;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
org$frostlang$frostc$ASTNode* $tmp798 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local10) = $tmp797;
// line 269
*(&local11) = ((frost$core$String*) NULL);
// line 270
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 271
org$frostlang$frostc$ASTNode* $tmp799 = *(&local9);
frost$core$Int64* $tmp800 = &$tmp799->$rawValue;
frost$core$Int64 $tmp801 = *$tmp800;
frost$core$Int64 $tmp802 = (frost$core$Int64) {22};
frost$core$Bit $tmp803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp801, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp805 = (org$frostlang$frostc$Position*) ($tmp799->$data + 0);
org$frostlang$frostc$Position $tmp806 = *$tmp805;
frost$core$String** $tmp807 = (frost$core$String**) ($tmp799->$data + 16);
frost$core$String* $tmp808 = *$tmp807;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$String* $tmp809 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local13) = $tmp808;
// line 273
frost$core$String* $tmp810 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$String* $tmp811 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local11) = $tmp810;
// line 274
org$frostlang$frostc$Type* $tmp812 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
org$frostlang$frostc$Type* $tmp813 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local12) = $tmp812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing REF($233:org.frostlang.frostc.Type)
frost$core$String* $tmp814 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing id
*(&local13) = ((frost$core$String*) NULL);
goto block28;
block30:;
frost$core$Int64 $tmp815 = (frost$core$Int64) {47};
frost$core$Bit $tmp816 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp801, $tmp815);
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp818 = (org$frostlang$frostc$Position*) ($tmp799->$data + 0);
org$frostlang$frostc$Position $tmp819 = *$tmp818;
frost$core$String** $tmp820 = (frost$core$String**) ($tmp799->$data + 16);
frost$core$String* $tmp821 = *$tmp820;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
frost$core$String* $tmp822 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local14) = $tmp821;
org$frostlang$frostc$ASTNode** $tmp823 = (org$frostlang$frostc$ASTNode**) ($tmp799->$data + 24);
org$frostlang$frostc$ASTNode* $tmp824 = *$tmp823;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
org$frostlang$frostc$ASTNode* $tmp825 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local15) = $tmp824;
// line 277
frost$core$String* $tmp826 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$String* $tmp827 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local11) = $tmp826;
// line 278
org$frostlang$frostc$ASTNode* $tmp828 = *(&local15);
frost$core$Bit $tmp829 = frost$core$Bit$init$builtin_bit($tmp828 != NULL);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp831 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s832, $tmp831, &$s833);
abort(); // unreachable
block33:;
org$frostlang$frostc$Type* $tmp834 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp828);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
org$frostlang$frostc$Type* $tmp835 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local12) = $tmp834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($291:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp836 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing idType
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp837 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing id
*(&local14) = ((frost$core$String*) NULL);
goto block28;
block32:;
// line 281
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit(false);
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp840 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s841, $tmp840);
abort(); // unreachable
block35:;
goto block28;
block28:;
// line 284
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 285
org$frostlang$frostc$ASTNode* $tmp842 = *(&local10);
frost$core$Bit $tmp843 = frost$core$Bit$init$builtin_bit($tmp842 == NULL);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Annotations* $tmp845 = *(&local3);
frost$core$Bit $tmp846 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp845);
*(&local18) = $tmp846;
goto block41;
block40:;
*(&local18) = $tmp843;
goto block41;
block41:;
frost$core$Bit $tmp847 = *(&local18);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Type* $tmp849 = *(&local12);
org$frostlang$frostc$Type$Kind* $tmp850 = &$tmp849->typeKind;
org$frostlang$frostc$Type$Kind $tmp851 = *$tmp850;
org$frostlang$frostc$Type$Kind$wrapper* $tmp852;
$tmp852 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp852->value = $tmp851;
frost$core$Int64 $tmp853 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp854 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp853);
org$frostlang$frostc$Type$Kind$wrapper* $tmp855;
$tmp855 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp855->value = $tmp854;
ITable* $tmp856 = ((frost$core$Equatable*) $tmp852)->$class->itable;
while ($tmp856->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp856 = $tmp856->next;
}
$fn858 $tmp857 = $tmp856->methods[0];
frost$core$Bit $tmp859 = $tmp857(((frost$core$Equatable*) $tmp852), ((frost$core$Equatable*) $tmp855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp855)));
// unreffing REF($344:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp852)));
// unreffing REF($340:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local17) = $tmp859;
goto block44;
block43:;
*(&local17) = $tmp847;
goto block44;
block44:;
frost$core$Bit $tmp860 = *(&local17);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block37; else goto block45;
block37:;
// line 287
org$frostlang$frostc$ASTNode* $tmp862 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp863 = (frost$core$Int64) {31};
org$frostlang$frostc$Position $tmp864 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp862, $tmp863, $tmp864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
org$frostlang$frostc$ASTNode* $tmp865 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local16) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing REF($361:org.frostlang.frostc.ASTNode)
goto block38;
block45:;
// line 1
// line 290
org$frostlang$frostc$ASTNode* $tmp866 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
org$frostlang$frostc$ASTNode* $tmp867 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local16) = $tmp866;
goto block38;
block38:;
// line 292
org$frostlang$frostc$FieldDecl* $tmp868 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp869 = *(&local8);
frost$core$String* $tmp870 = *(&local0);
org$frostlang$frostc$Annotations* $tmp871 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp872 = *(&local4);
frost$core$String* $tmp873 = *(&local11);
org$frostlang$frostc$Type* $tmp874 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp875 = *(&local16);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp868, param1, $tmp869, $tmp870, $tmp871, $tmp872, $tmp873, $tmp874, $tmp875);
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
org$frostlang$frostc$FieldDecl* $tmp876 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local19) = $tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing REF($387:org.frostlang.frostc.FieldDecl)
// line 294
org$frostlang$frostc$SymbolTable** $tmp877 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp878 = *$tmp877;
org$frostlang$frostc$FieldDecl* $tmp879 = *(&local19);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp878, ((org$frostlang$frostc$Symbol*) $tmp879));
// line 295
frost$collections$Array** $tmp880 = &param1->fields;
frost$collections$Array* $tmp881 = *$tmp880;
org$frostlang$frostc$FieldDecl* $tmp882 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp881, ((frost$core$Object*) $tmp882));
org$frostlang$frostc$FieldDecl* $tmp883 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing field
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp884 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing value
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp885 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing type
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp886 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp887 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
// unreffing rawValue
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp888 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// unreffing target
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
// line 298
frost$core$Bit $tmp889 = frost$core$Bit$init$builtin_bit(false);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp891 = (frost$core$Int64) {298};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s892, $tmp891);
abort(); // unreachable
block46:;
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp783);
// unreffing REF($164:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp893 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing decl
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing REF($153:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$FixedArray* $tmp894 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing decls
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block13:;
// line 304
frost$core$Bit $tmp895 = frost$core$Bit$init$builtin_bit(false);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp897 = (frost$core$Int64) {304};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s898, $tmp897);
abort(); // unreachable
block48:;
goto block11;
block11:;
org$frostlang$frostc$Annotations* $tmp899 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing annotations
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp900 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing doccomment
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
// line 311
frost$core$Int64* $tmp901 = &param1->$rawValue;
frost$core$Int64 $tmp902 = *$tmp901;
frost$core$Int64 $tmp903 = (frost$core$Int64) {1};
frost$core$Bit $tmp904 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp903);
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp906 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp907 = *$tmp906;
org$frostlang$frostc$FixedArray** $tmp908 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp909 = *$tmp908;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
org$frostlang$frostc$FixedArray* $tmp910 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local0) = $tmp909;
// line 313
frost$core$Int64 $tmp911 = (frost$core$Int64) {0};
*(&local1) = $tmp911;
// line 314
org$frostlang$frostc$FixedArray* $tmp912 = *(&local0);
ITable* $tmp913 = ((frost$collections$Iterable*) $tmp912)->$class->itable;
while ($tmp913->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp913 = $tmp913->next;
}
$fn915 $tmp914 = $tmp913->methods[0];
frost$collections$Iterator* $tmp916 = $tmp914(((frost$collections$Iterable*) $tmp912));
goto block4;
block4:;
ITable* $tmp917 = $tmp916->$class->itable;
while ($tmp917->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp917 = $tmp917->next;
}
$fn919 $tmp918 = $tmp917->methods[0];
frost$core$Bit $tmp920 = $tmp918($tmp916);
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block6; else goto block5;
block5:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp922 = $tmp916->$class->itable;
while ($tmp922->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp922 = $tmp922->next;
}
$fn924 $tmp923 = $tmp922->methods[1];
frost$core$Object* $tmp925 = $tmp923($tmp916);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp925)));
org$frostlang$frostc$ASTNode* $tmp926 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp925);
// line 315
frost$core$Int64 $tmp927 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp928 = *(&local2);
frost$core$Int64 $tmp929 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp928);
int64_t $tmp930 = $tmp927.value;
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930 + $tmp931;
frost$core$Int64 $tmp933 = (frost$core$Int64) {$tmp932};
*(&local1) = $tmp933;
frost$core$Frost$unref$frost$core$Object$Q($tmp925);
// unreffing REF($37:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp934 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
// unreffing e
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
// unreffing REF($26:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 317
frost$core$Int64 $tmp935 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp936 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing elements
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp935;
block3:;
frost$core$Int64 $tmp937 = (frost$core$Int64) {2};
frost$core$Bit $tmp938 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp940 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp941 = *$tmp940;
org$frostlang$frostc$ASTNode** $tmp942 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp943 = *$tmp942;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
org$frostlang$frostc$ASTNode* $tmp944 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local3) = $tmp943;
org$frostlang$frostc$ASTNode** $tmp945 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp946 = *$tmp945;
// line 320
org$frostlang$frostc$ASTNode* $tmp947 = *(&local3);
frost$core$Int64 $tmp948 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp947);
org$frostlang$frostc$ASTNode* $tmp949 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp948;
block8:;
frost$core$Int64 $tmp950 = (frost$core$Int64) {3};
frost$core$Bit $tmp951 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp950);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block9; else goto block10;
block9:;
// line 323
frost$core$Int64 $tmp953 = (frost$core$Int64) {0};
return $tmp953;
block10:;
frost$core$Int64 $tmp954 = (frost$core$Int64) {4};
frost$core$Bit $tmp955 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp954);
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block11; else goto block12;
block11:;
// line 326
frost$core$Int64 $tmp957 = (frost$core$Int64) {0};
return $tmp957;
block12:;
frost$core$Int64 $tmp958 = (frost$core$Int64) {5};
frost$core$Bit $tmp959 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp961 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp962 = *$tmp961;
org$frostlang$frostc$ASTNode** $tmp963 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp964 = *$tmp963;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
org$frostlang$frostc$ASTNode* $tmp965 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local4) = $tmp964;
org$frostlang$frostc$expression$Binary$Operator* $tmp966 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp967 = *$tmp966;
org$frostlang$frostc$ASTNode** $tmp968 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp969 = *$tmp968;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
org$frostlang$frostc$ASTNode* $tmp970 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
*(&local5) = $tmp969;
// line 329
frost$core$Int64 $tmp971 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp972 = *(&local4);
frost$core$Int64 $tmp973 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp972);
int64_t $tmp974 = $tmp971.value;
int64_t $tmp975 = $tmp973.value;
int64_t $tmp976 = $tmp974 + $tmp975;
frost$core$Int64 $tmp977 = (frost$core$Int64) {$tmp976};
org$frostlang$frostc$ASTNode* $tmp978 = *(&local5);
frost$core$Int64 $tmp979 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp978);
int64_t $tmp980 = $tmp977.value;
int64_t $tmp981 = $tmp979.value;
int64_t $tmp982 = $tmp980 + $tmp981;
frost$core$Int64 $tmp983 = (frost$core$Int64) {$tmp982};
org$frostlang$frostc$ASTNode* $tmp984 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
// unreffing right
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp985 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing left
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp983;
block14:;
frost$core$Int64 $tmp986 = (frost$core$Int64) {6};
frost$core$Bit $tmp987 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp986);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block15; else goto block16;
block15:;
// line 332
frost$core$Int64 $tmp989 = (frost$core$Int64) {1};
return $tmp989;
block16:;
frost$core$Int64 $tmp990 = (frost$core$Int64) {7};
frost$core$Bit $tmp991 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp990);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp993 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp994 = *$tmp993;
org$frostlang$frostc$FixedArray** $tmp995 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp996 = *$tmp995;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
org$frostlang$frostc$FixedArray* $tmp997 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local6) = $tmp996;
// line 335
frost$core$Int64 $tmp998 = (frost$core$Int64) {0};
*(&local7) = $tmp998;
// line 336
org$frostlang$frostc$FixedArray* $tmp999 = *(&local6);
ITable* $tmp1000 = ((frost$collections$Iterable*) $tmp999)->$class->itable;
while ($tmp1000->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[0];
frost$collections$Iterator* $tmp1003 = $tmp1001(((frost$collections$Iterable*) $tmp999));
goto block19;
block19:;
ITable* $tmp1004 = $tmp1003->$class->itable;
while ($tmp1004->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1004 = $tmp1004->next;
}
$fn1006 $tmp1005 = $tmp1004->methods[0];
frost$core$Bit $tmp1007 = $tmp1005($tmp1003);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1009 = $tmp1003->$class->itable;
while ($tmp1009->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1009 = $tmp1009->next;
}
$fn1011 $tmp1010 = $tmp1009->methods[1];
frost$core$Object* $tmp1012 = $tmp1010($tmp1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1012)));
org$frostlang$frostc$ASTNode* $tmp1013 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1012);
// line 337
frost$core$Int64 $tmp1014 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp1015 = *(&local8);
frost$core$Int64 $tmp1016 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1015);
int64_t $tmp1017 = $tmp1014.value;
int64_t $tmp1018 = $tmp1016.value;
int64_t $tmp1019 = $tmp1017 + $tmp1018;
frost$core$Int64 $tmp1020 = (frost$core$Int64) {$tmp1019};
*(&local7) = $tmp1020;
frost$core$Frost$unref$frost$core$Object$Q($tmp1012);
// unreffing REF($206:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1021 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
// unreffing s
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($195:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 339
frost$core$Int64 $tmp1022 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1023 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
// unreffing statements
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1022;
block18:;
frost$core$Int64 $tmp1024 = (frost$core$Int64) {8};
frost$core$Bit $tmp1025 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1024);
bool $tmp1026 = $tmp1025.value;
if ($tmp1026) goto block22; else goto block23;
block22:;
// line 342
frost$core$Int64 $tmp1027 = (frost$core$Int64) {1};
return $tmp1027;
block23:;
frost$core$Int64 $tmp1028 = (frost$core$Int64) {9};
frost$core$Bit $tmp1029 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1028);
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp1031 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1032 = *$tmp1031;
org$frostlang$frostc$ASTNode** $tmp1033 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1034 = *$tmp1033;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
org$frostlang$frostc$ASTNode* $tmp1035 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local9) = $tmp1034;
org$frostlang$frostc$FixedArray** $tmp1036 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1037 = *$tmp1036;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
org$frostlang$frostc$FixedArray* $tmp1038 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local10) = $tmp1037;
// line 345
org$frostlang$frostc$ASTNode* $tmp1039 = *(&local9);
frost$core$Int64 $tmp1040 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1039);
*(&local11) = $tmp1040;
// line 346
org$frostlang$frostc$FixedArray* $tmp1041 = *(&local10);
ITable* $tmp1042 = ((frost$collections$Iterable*) $tmp1041)->$class->itable;
while ($tmp1042->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1042 = $tmp1042->next;
}
$fn1044 $tmp1043 = $tmp1042->methods[0];
frost$collections$Iterator* $tmp1045 = $tmp1043(((frost$collections$Iterable*) $tmp1041));
goto block26;
block26:;
ITable* $tmp1046 = $tmp1045->$class->itable;
while ($tmp1046->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1046 = $tmp1046->next;
}
$fn1048 $tmp1047 = $tmp1046->methods[0];
frost$core$Bit $tmp1049 = $tmp1047($tmp1045);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1051 = $tmp1045->$class->itable;
while ($tmp1051->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1051 = $tmp1051->next;
}
$fn1053 $tmp1052 = $tmp1051->methods[1];
frost$core$Object* $tmp1054 = $tmp1052($tmp1045);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1054)));
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1054);
// line 347
frost$core$Int64 $tmp1056 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1057 = *(&local12);
frost$core$Int64 $tmp1058 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1057);
int64_t $tmp1059 = $tmp1056.value;
int64_t $tmp1060 = $tmp1058.value;
int64_t $tmp1061 = $tmp1059 + $tmp1060;
frost$core$Int64 $tmp1062 = (frost$core$Int64) {$tmp1061};
*(&local11) = $tmp1062;
frost$core$Frost$unref$frost$core$Object$Q($tmp1054);
// unreffing REF($294:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1063 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// unreffing a
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// unreffing REF($283:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 349
frost$core$Int64 $tmp1064 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1065 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing args
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1066 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
// unreffing target
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1064;
block25:;
frost$core$Int64 $tmp1067 = (frost$core$Int64) {11};
frost$core$Bit $tmp1068 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1067);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp1070 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1071 = *$tmp1070;
org$frostlang$frostc$ASTNode** $tmp1072 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1073 = *$tmp1072;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlang$frostc$ASTNode* $tmp1074 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local13) = $tmp1073;
org$frostlang$frostc$ChoiceCase** $tmp1075 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp1076 = *$tmp1075;
frost$core$Int64* $tmp1077 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp1078 = *$tmp1077;
// line 352
org$frostlang$frostc$ASTNode* $tmp1079 = *(&local13);
frost$core$Int64 $tmp1080 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1079);
org$frostlang$frostc$ASTNode* $tmp1081 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
// unreffing base
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1080;
block30:;
frost$core$Int64 $tmp1082 = (frost$core$Int64) {13};
frost$core$Bit $tmp1083 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1082);
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block31; else goto block32;
block31:;
// line 355
frost$core$Int64 $tmp1085 = (frost$core$Int64) {1};
return $tmp1085;
block32:;
frost$core$Int64 $tmp1086 = (frost$core$Int64) {14};
frost$core$Bit $tmp1087 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1086);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp1089 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1090 = *$tmp1089;
org$frostlang$frostc$ASTNode** $tmp1091 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1092 = *$tmp1091;
org$frostlang$frostc$ASTNode** $tmp1093 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1094 = *$tmp1093;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
org$frostlang$frostc$ASTNode* $tmp1095 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local14) = $tmp1094;
// line 358
org$frostlang$frostc$ASTNode* $tmp1096 = *(&local14);
frost$core$Bit $tmp1097 = frost$core$Bit$init$builtin_bit($tmp1096 == NULL);
bool $tmp1098 = $tmp1097.value;
if ($tmp1098) goto block35; else goto block36;
block35:;
// line 359
frost$core$Int64 $tmp1099 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// unreffing value
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1099;
block36:;
// line 361
org$frostlang$frostc$ASTNode* $tmp1101 = *(&local14);
frost$core$Bit $tmp1102 = frost$core$Bit$init$builtin_bit($tmp1101 != NULL);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1104 = (frost$core$Int64) {361};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1105, $tmp1104, &$s1106);
abort(); // unreachable
block37:;
frost$core$Int64 $tmp1107 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1101);
org$frostlang$frostc$ASTNode* $tmp1108 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
// unreffing value
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1107;
block34:;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {15};
frost$core$Bit $tmp1110 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1109);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp1112 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1113 = *$tmp1112;
frost$core$String** $tmp1114 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1115 = *$tmp1114;
org$frostlang$frostc$FixedArray** $tmp1116 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1117 = *$tmp1116;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
org$frostlang$frostc$FixedArray* $tmp1118 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local15) = $tmp1117;
org$frostlang$frostc$ASTNode** $tmp1119 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1120 = *$tmp1119;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
org$frostlang$frostc$ASTNode* $tmp1121 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
*(&local16) = $tmp1120;
// line 364
org$frostlang$frostc$ASTNode* $tmp1122 = *(&local16);
frost$core$Int64 $tmp1123 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1122);
*(&local17) = $tmp1123;
// line 365
org$frostlang$frostc$FixedArray* $tmp1124 = *(&local15);
ITable* $tmp1125 = ((frost$collections$Iterable*) $tmp1124)->$class->itable;
while ($tmp1125->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1125 = $tmp1125->next;
}
$fn1127 $tmp1126 = $tmp1125->methods[0];
frost$collections$Iterator* $tmp1128 = $tmp1126(((frost$collections$Iterable*) $tmp1124));
goto block41;
block41:;
ITable* $tmp1129 = $tmp1128->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
frost$core$Bit $tmp1132 = $tmp1130($tmp1128);
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block43; else goto block42;
block42:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1134 = $tmp1128->$class->itable;
while ($tmp1134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1134 = $tmp1134->next;
}
$fn1136 $tmp1135 = $tmp1134->methods[1];
frost$core$Object* $tmp1137 = $tmp1135($tmp1128);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1137)));
org$frostlang$frostc$ASTNode* $tmp1138 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1137);
// line 366
frost$core$Int64 $tmp1139 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1140 = *(&local18);
frost$core$Int64 $tmp1141 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1140);
int64_t $tmp1142 = $tmp1139.value;
int64_t $tmp1143 = $tmp1141.value;
int64_t $tmp1144 = $tmp1142 + $tmp1143;
frost$core$Int64 $tmp1145 = (frost$core$Int64) {$tmp1144};
*(&local17) = $tmp1145;
frost$core$Frost$unref$frost$core$Object$Q($tmp1137);
// unreffing REF($465:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1146 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
// unreffing s
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// unreffing REF($454:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 368
frost$core$Int64 $tmp1147 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1148 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
// unreffing test
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1149 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing statements
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1147;
block40:;
frost$core$Int64 $tmp1150 = (frost$core$Int64) {16};
frost$core$Bit $tmp1151 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1150);
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1153 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1154 = *$tmp1153;
org$frostlang$frostc$ASTNode** $tmp1155 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1156 = *$tmp1155;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
org$frostlang$frostc$ASTNode* $tmp1157 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local19) = $tmp1156;
frost$core$String** $tmp1158 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1159 = *$tmp1158;
// line 371
org$frostlang$frostc$ASTNode* $tmp1160 = *(&local19);
frost$core$Int64 $tmp1161 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1160);
org$frostlang$frostc$ASTNode* $tmp1162 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
// unreffing base
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1161;
block45:;
frost$core$Int64 $tmp1163 = (frost$core$Int64) {17};
frost$core$Bit $tmp1164 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1163);
bool $tmp1165 = $tmp1164.value;
if ($tmp1165) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1166 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1167 = *$tmp1166;
org$frostlang$frostc$ASTNode** $tmp1168 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1169 = *$tmp1168;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
org$frostlang$frostc$ASTNode* $tmp1170 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local20) = $tmp1169;
frost$core$String** $tmp1171 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1172 = *$tmp1171;
org$frostlang$frostc$FixedArray** $tmp1173 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1174 = *$tmp1173;
// line 374
org$frostlang$frostc$ASTNode* $tmp1175 = *(&local20);
frost$core$Int64 $tmp1176 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1175);
org$frostlang$frostc$ASTNode* $tmp1177 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
// unreffing base
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1176;
block47:;
frost$core$Int64 $tmp1178 = (frost$core$Int64) {20};
frost$core$Bit $tmp1179 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp1181 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1182 = *$tmp1181;
frost$core$String** $tmp1183 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1184 = *$tmp1183;
org$frostlang$frostc$ASTNode** $tmp1185 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1186 = *$tmp1185;
org$frostlang$frostc$ASTNode** $tmp1187 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1188 = *$tmp1187;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1188));
org$frostlang$frostc$ASTNode* $tmp1189 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local21) = $tmp1188;
org$frostlang$frostc$FixedArray** $tmp1190 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1191 = *$tmp1190;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$FixedArray* $tmp1192 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local22) = $tmp1191;
// line 377
org$frostlang$frostc$ASTNode* $tmp1193 = *(&local21);
frost$core$Int64 $tmp1194 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1193);
*(&local23) = $tmp1194;
// line 378
org$frostlang$frostc$FixedArray* $tmp1195 = *(&local22);
ITable* $tmp1196 = ((frost$collections$Iterable*) $tmp1195)->$class->itable;
while ($tmp1196->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1196 = $tmp1196->next;
}
$fn1198 $tmp1197 = $tmp1196->methods[0];
frost$collections$Iterator* $tmp1199 = $tmp1197(((frost$collections$Iterable*) $tmp1195));
goto block50;
block50:;
ITable* $tmp1200 = $tmp1199->$class->itable;
while ($tmp1200->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[0];
frost$core$Bit $tmp1203 = $tmp1201($tmp1199);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block52; else goto block51;
block51:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1205 = $tmp1199->$class->itable;
while ($tmp1205->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1205 = $tmp1205->next;
}
$fn1207 $tmp1206 = $tmp1205->methods[1];
frost$core$Object* $tmp1208 = $tmp1206($tmp1199);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1208)));
org$frostlang$frostc$ASTNode* $tmp1209 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1208);
// line 379
frost$core$Int64 $tmp1210 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1211 = *(&local24);
frost$core$Int64 $tmp1212 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1211);
int64_t $tmp1213 = $tmp1210.value;
int64_t $tmp1214 = $tmp1212.value;
int64_t $tmp1215 = $tmp1213 + $tmp1214;
frost$core$Int64 $tmp1216 = (frost$core$Int64) {$tmp1215};
*(&local23) = $tmp1216;
frost$core$Frost$unref$frost$core$Object$Q($tmp1208);
// unreffing REF($609:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1217 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
// unreffing s
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
// unreffing REF($598:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 381
frost$core$Int64 $tmp1218 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1219 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
// unreffing statements
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1220 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
// unreffing list
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1218;
block49:;
frost$core$Int64 $tmp1221 = (frost$core$Int64) {21};
frost$core$Bit $tmp1222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1221);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block53; else goto block54;
block53:;
// line 384
frost$core$Int64 $tmp1224 = (frost$core$Int64) {0};
return $tmp1224;
block54:;
frost$core$Int64 $tmp1225 = (frost$core$Int64) {22};
frost$core$Bit $tmp1226 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1225);
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block55; else goto block56;
block55:;
// line 387
frost$core$Int64 $tmp1228 = (frost$core$Int64) {1};
return $tmp1228;
block56:;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {24};
frost$core$Bit $tmp1230 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1229);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Position* $tmp1232 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1233 = *$tmp1232;
org$frostlang$frostc$ASTNode** $tmp1234 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1235 = *$tmp1234;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
org$frostlang$frostc$ASTNode* $tmp1236 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local25) = $tmp1235;
org$frostlang$frostc$FixedArray** $tmp1237 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1238 = *$tmp1237;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
org$frostlang$frostc$FixedArray* $tmp1239 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local26) = $tmp1238;
org$frostlang$frostc$ASTNode** $tmp1240 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1241 = *$tmp1240;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
org$frostlang$frostc$ASTNode* $tmp1242 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local27) = $tmp1241;
// line 390
org$frostlang$frostc$ASTNode* $tmp1243 = *(&local25);
frost$core$Int64 $tmp1244 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1243);
*(&local28) = $tmp1244;
// line 391
org$frostlang$frostc$FixedArray* $tmp1245 = *(&local26);
ITable* $tmp1246 = ((frost$collections$Iterable*) $tmp1245)->$class->itable;
while ($tmp1246->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1246 = $tmp1246->next;
}
$fn1248 $tmp1247 = $tmp1246->methods[0];
frost$collections$Iterator* $tmp1249 = $tmp1247(((frost$collections$Iterable*) $tmp1245));
goto block59;
block59:;
ITable* $tmp1250 = $tmp1249->$class->itable;
while ($tmp1250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1250 = $tmp1250->next;
}
$fn1252 $tmp1251 = $tmp1250->methods[0];
frost$core$Bit $tmp1253 = $tmp1251($tmp1249);
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block61; else goto block60;
block60:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1255 = $tmp1249->$class->itable;
while ($tmp1255->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1255 = $tmp1255->next;
}
$fn1257 $tmp1256 = $tmp1255->methods[1];
frost$core$Object* $tmp1258 = $tmp1256($tmp1249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1258)));
org$frostlang$frostc$ASTNode* $tmp1259 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1258);
// line 392
frost$core$Int64 $tmp1260 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1261 = *(&local29);
frost$core$Int64 $tmp1262 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1261);
int64_t $tmp1263 = $tmp1260.value;
int64_t $tmp1264 = $tmp1262.value;
int64_t $tmp1265 = $tmp1263 + $tmp1264;
frost$core$Int64 $tmp1266 = (frost$core$Int64) {$tmp1265};
*(&local28) = $tmp1266;
frost$core$Frost$unref$frost$core$Object$Q($tmp1258);
// unreffing REF($718:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1267 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
// unreffing s
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block59;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1249));
// unreffing REF($707:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 394
org$frostlang$frostc$ASTNode* $tmp1268 = *(&local27);
frost$core$Bit $tmp1269 = frost$core$Bit$init$builtin_bit($tmp1268 != NULL);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block62; else goto block63;
block62:;
// line 395
frost$core$Int64 $tmp1271 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1272 = *(&local27);
frost$core$Bit $tmp1273 = frost$core$Bit$init$builtin_bit($tmp1272 != NULL);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1275 = (frost$core$Int64) {395};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1276, $tmp1275, &$s1277);
abort(); // unreachable
block64:;
frost$core$Int64 $tmp1278 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1272);
int64_t $tmp1279 = $tmp1271.value;
int64_t $tmp1280 = $tmp1278.value;
int64_t $tmp1281 = $tmp1279 + $tmp1280;
frost$core$Int64 $tmp1282 = (frost$core$Int64) {$tmp1281};
*(&local28) = $tmp1282;
goto block63;
block63:;
// line 397
frost$core$Int64 $tmp1283 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1284 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
// unreffing ifFalse
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1285 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
// unreffing ifTrue
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1286 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing test
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1283;
block58:;
frost$core$Int64 $tmp1287 = (frost$core$Int64) {25};
frost$core$Bit $tmp1288 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1287);
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block66; else goto block67;
block66:;
// line 400
frost$core$Int64 $tmp1290 = (frost$core$Int64) {1};
return $tmp1290;
block67:;
frost$core$Int64 $tmp1291 = (frost$core$Int64) {27};
frost$core$Bit $tmp1292 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1291);
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp1294 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1295 = *$tmp1294;
frost$core$String** $tmp1296 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1297 = *$tmp1296;
org$frostlang$frostc$FixedArray** $tmp1298 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1299 = *$tmp1298;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
org$frostlang$frostc$FixedArray* $tmp1300 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local30) = $tmp1299;
// line 403
frost$core$Int64 $tmp1301 = (frost$core$Int64) {0};
*(&local31) = $tmp1301;
// line 404
org$frostlang$frostc$FixedArray* $tmp1302 = *(&local30);
ITable* $tmp1303 = ((frost$collections$Iterable*) $tmp1302)->$class->itable;
while ($tmp1303->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1303 = $tmp1303->next;
}
$fn1305 $tmp1304 = $tmp1303->methods[0];
frost$collections$Iterator* $tmp1306 = $tmp1304(((frost$collections$Iterable*) $tmp1302));
goto block70;
block70:;
ITable* $tmp1307 = $tmp1306->$class->itable;
while ($tmp1307->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1307 = $tmp1307->next;
}
$fn1309 $tmp1308 = $tmp1307->methods[0];
frost$core$Bit $tmp1310 = $tmp1308($tmp1306);
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block72; else goto block71;
block71:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1312 = $tmp1306->$class->itable;
while ($tmp1312->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1312 = $tmp1312->next;
}
$fn1314 $tmp1313 = $tmp1312->methods[1];
frost$core$Object* $tmp1315 = $tmp1313($tmp1306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1315)));
org$frostlang$frostc$ASTNode* $tmp1316 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1315);
// line 405
frost$core$Int64 $tmp1317 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1318 = *(&local32);
frost$core$Int64 $tmp1319 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1318);
int64_t $tmp1320 = $tmp1317.value;
int64_t $tmp1321 = $tmp1319.value;
int64_t $tmp1322 = $tmp1320 + $tmp1321;
frost$core$Int64 $tmp1323 = (frost$core$Int64) {$tmp1322};
*(&local31) = $tmp1323;
frost$core$Frost$unref$frost$core$Object$Q($tmp1315);
// unreffing REF($832:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1324 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
// unreffing s
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
// unreffing REF($821:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 407
frost$core$Int64 $tmp1325 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1326 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing statements
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1325;
block69:;
frost$core$Int64 $tmp1327 = (frost$core$Int64) {28};
frost$core$Bit $tmp1328 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1327);
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1330 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1331 = *$tmp1330;
org$frostlang$frostc$ASTNode** $tmp1332 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1333 = *$tmp1332;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
org$frostlang$frostc$ASTNode* $tmp1334 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local33) = $tmp1333;
org$frostlang$frostc$FixedArray** $tmp1335 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1336 = *$tmp1335;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$FixedArray* $tmp1337 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local34) = $tmp1336;
org$frostlang$frostc$FixedArray** $tmp1338 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1339 = *$tmp1338;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
org$frostlang$frostc$FixedArray* $tmp1340 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local35) = $tmp1339;
// line 410
org$frostlang$frostc$ASTNode* $tmp1341 = *(&local33);
frost$core$Int64 $tmp1342 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1341);
*(&local36) = $tmp1342;
// line 411
org$frostlang$frostc$FixedArray* $tmp1343 = *(&local34);
ITable* $tmp1344 = ((frost$collections$Iterable*) $tmp1343)->$class->itable;
while ($tmp1344->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1344 = $tmp1344->next;
}
$fn1346 $tmp1345 = $tmp1344->methods[0];
frost$collections$Iterator* $tmp1347 = $tmp1345(((frost$collections$Iterable*) $tmp1343));
goto block75;
block75:;
ITable* $tmp1348 = $tmp1347->$class->itable;
while ($tmp1348->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1348 = $tmp1348->next;
}
$fn1350 $tmp1349 = $tmp1348->methods[0];
frost$core$Bit $tmp1351 = $tmp1349($tmp1347);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block77; else goto block76;
block76:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1353 = $tmp1347->$class->itable;
while ($tmp1353->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1353 = $tmp1353->next;
}
$fn1355 $tmp1354 = $tmp1353->methods[1];
frost$core$Object* $tmp1356 = $tmp1354($tmp1347);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1356)));
org$frostlang$frostc$ASTNode* $tmp1357 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1356);
// line 412
frost$core$Int64 $tmp1358 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1359 = *(&local37);
frost$core$Int64 $tmp1360 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1359);
int64_t $tmp1361 = $tmp1358.value;
int64_t $tmp1362 = $tmp1360.value;
int64_t $tmp1363 = $tmp1361 + $tmp1362;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {$tmp1363};
*(&local36) = $tmp1364;
frost$core$Frost$unref$frost$core$Object$Q($tmp1356);
// unreffing REF($922:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1365 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
// unreffing w
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block75;
block77:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// unreffing REF($911:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 414
org$frostlang$frostc$FixedArray* $tmp1366 = *(&local35);
frost$core$Bit $tmp1367 = frost$core$Bit$init$builtin_bit($tmp1366 != NULL);
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block78; else goto block79;
block78:;
// line 415
org$frostlang$frostc$FixedArray* $tmp1369 = *(&local35);
frost$core$Bit $tmp1370 = frost$core$Bit$init$builtin_bit($tmp1369 != NULL);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp1372 = (frost$core$Int64) {415};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1373, $tmp1372, &$s1374);
abort(); // unreachable
block80:;
ITable* $tmp1375 = ((frost$collections$Iterable*) $tmp1369)->$class->itable;
while ($tmp1375->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1375 = $tmp1375->next;
}
$fn1377 $tmp1376 = $tmp1375->methods[0];
frost$collections$Iterator* $tmp1378 = $tmp1376(((frost$collections$Iterable*) $tmp1369));
goto block82;
block82:;
ITable* $tmp1379 = $tmp1378->$class->itable;
while ($tmp1379->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1379 = $tmp1379->next;
}
$fn1381 $tmp1380 = $tmp1379->methods[0];
frost$core$Bit $tmp1382 = $tmp1380($tmp1378);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block84; else goto block83;
block83:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1384 = $tmp1378->$class->itable;
while ($tmp1384->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[1];
frost$core$Object* $tmp1387 = $tmp1385($tmp1378);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1387)));
org$frostlang$frostc$ASTNode* $tmp1388 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1387);
// line 416
frost$core$Int64 $tmp1389 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1390 = *(&local38);
frost$core$Int64 $tmp1391 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1390);
int64_t $tmp1392 = $tmp1389.value;
int64_t $tmp1393 = $tmp1391.value;
int64_t $tmp1394 = $tmp1392 + $tmp1393;
frost$core$Int64 $tmp1395 = (frost$core$Int64) {$tmp1394};
*(&local36) = $tmp1395;
frost$core$Frost$unref$frost$core$Object$Q($tmp1387);
// unreffing REF($980:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1396 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
// unreffing s
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
// unreffing REF($969:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block79;
block79:;
// line 419
frost$core$Int64 $tmp1397 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1398 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// unreffing other
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1399 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
// unreffing whens
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1400 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing value
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1397;
block74:;
frost$core$Int64 $tmp1401 = (frost$core$Int64) {29};
frost$core$Bit $tmp1402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1401);
bool $tmp1403 = $tmp1402.value;
if ($tmp1403) goto block85; else goto block86;
block85:;
// line 422
frost$core$Int64 $tmp1404 = (frost$core$Int64) {10};
return $tmp1404;
block86:;
frost$core$Int64 $tmp1405 = (frost$core$Int64) {31};
frost$core$Bit $tmp1406 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1405);
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block87; else goto block88;
block87:;
// line 425
frost$core$Int64 $tmp1408 = (frost$core$Int64) {1};
return $tmp1408;
block88:;
frost$core$Int64 $tmp1409 = (frost$core$Int64) {32};
frost$core$Bit $tmp1410 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1409);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block89; else goto block90;
block89:;
// line 428
frost$core$Int64 $tmp1412 = (frost$core$Int64) {0};
return $tmp1412;
block90:;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {35};
frost$core$Bit $tmp1414 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1413);
bool $tmp1415 = $tmp1414.value;
if ($tmp1415) goto block91; else goto block92;
block91:;
// line 431
frost$core$Int64 $tmp1416 = (frost$core$Int64) {1};
return $tmp1416;
block92:;
frost$core$Int64 $tmp1417 = (frost$core$Int64) {36};
frost$core$Bit $tmp1418 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1417);
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block93; else goto block94;
block93:;
// line 434
frost$core$Int64 $tmp1420 = (frost$core$Int64) {1};
return $tmp1420;
block94:;
frost$core$Int64 $tmp1421 = (frost$core$Int64) {37};
frost$core$Bit $tmp1422 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1421);
bool $tmp1423 = $tmp1422.value;
if ($tmp1423) goto block95; else goto block96;
block95:;
// line 437
frost$core$Int64 $tmp1424 = (frost$core$Int64) {1};
return $tmp1424;
block96:;
frost$core$Int64 $tmp1425 = (frost$core$Int64) {38};
frost$core$Bit $tmp1426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1425);
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block97; else goto block98;
block97:;
org$frostlang$frostc$Position* $tmp1428 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1429 = *$tmp1428;
org$frostlang$frostc$ASTNode** $tmp1430 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1431 = *$tmp1430;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
org$frostlang$frostc$ASTNode* $tmp1432 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local39) = $tmp1431;
// line 440
org$frostlang$frostc$ASTNode* $tmp1433 = *(&local39);
frost$core$Bit $tmp1434 = frost$core$Bit$init$builtin_bit($tmp1433 == NULL);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block99; else goto block100;
block99:;
// line 441
frost$core$Int64 $tmp1436 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1437 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
// unreffing value
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1436;
block100:;
// line 443
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local39);
frost$core$Bit $tmp1439 = frost$core$Bit$init$builtin_bit($tmp1438 != NULL);
bool $tmp1440 = $tmp1439.value;
if ($tmp1440) goto block101; else goto block102;
block102:;
frost$core$Int64 $tmp1441 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1442, $tmp1441, &$s1443);
abort(); // unreachable
block101:;
frost$core$Int64 $tmp1444 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1438);
org$frostlang$frostc$ASTNode* $tmp1445 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1445));
// unreffing value
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1444;
block98:;
frost$core$Int64 $tmp1446 = (frost$core$Int64) {39};
frost$core$Bit $tmp1447 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1446);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block103; else goto block104;
block103:;
// line 446
frost$core$Int64 $tmp1449 = (frost$core$Int64) {1};
return $tmp1449;
block104:;
frost$core$Int64 $tmp1450 = (frost$core$Int64) {40};
frost$core$Bit $tmp1451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1450);
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block105; else goto block106;
block105:;
// line 449
frost$core$Int64 $tmp1453 = (frost$core$Int64) {1};
return $tmp1453;
block106:;
frost$core$Int64 $tmp1454 = (frost$core$Int64) {41};
frost$core$Bit $tmp1455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1454);
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block107; else goto block108;
block107:;
// line 452
frost$core$Int64 $tmp1457 = (frost$core$Int64) {1};
return $tmp1457;
block108:;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {42};
frost$core$Bit $tmp1459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1458);
bool $tmp1460 = $tmp1459.value;
if ($tmp1460) goto block109; else goto block110;
block109:;
// line 455
frost$core$Int64 $tmp1461 = (frost$core$Int64) {10};
return $tmp1461;
block110:;
frost$core$Int64 $tmp1462 = (frost$core$Int64) {45};
frost$core$Bit $tmp1463 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1462);
bool $tmp1464 = $tmp1463.value;
if ($tmp1464) goto block111; else goto block112;
block111:;
// line 458
frost$core$Int64 $tmp1465 = (frost$core$Int64) {0};
return $tmp1465;
block112:;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {46};
frost$core$Bit $tmp1467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1466);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block113; else goto block114;
block113:;
// line 461
frost$core$Int64 $tmp1469 = (frost$core$Int64) {10};
return $tmp1469;
block114:;
frost$core$Int64 $tmp1470 = (frost$core$Int64) {48};
frost$core$Bit $tmp1471 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1470);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block115; else goto block116;
block115:;
org$frostlang$frostc$Position* $tmp1473 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1474 = *$tmp1473;
org$frostlang$frostc$expression$Unary$Operator* $tmp1475 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp1476 = *$tmp1475;
org$frostlang$frostc$ASTNode** $tmp1477 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1478 = *$tmp1477;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1478));
org$frostlang$frostc$ASTNode* $tmp1479 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local40) = $tmp1478;
// line 464
frost$core$Int64 $tmp1480 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1481 = *(&local40);
frost$core$Int64 $tmp1482 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1481);
int64_t $tmp1483 = $tmp1480.value;
int64_t $tmp1484 = $tmp1482.value;
int64_t $tmp1485 = $tmp1483 + $tmp1484;
frost$core$Int64 $tmp1486 = (frost$core$Int64) {$tmp1485};
org$frostlang$frostc$ASTNode* $tmp1487 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// unreffing base
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1486;
block116:;
frost$core$Int64 $tmp1488 = (frost$core$Int64) {49};
frost$core$Bit $tmp1489 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1488);
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block117; else goto block118;
block117:;
// line 467
frost$core$Int64 $tmp1491 = (frost$core$Int64) {10};
return $tmp1491;
block118:;
frost$core$Int64 $tmp1492 = (frost$core$Int64) {51};
frost$core$Bit $tmp1493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1492);
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1495 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1496 = *$tmp1495;
org$frostlang$frostc$Variable$Kind* $tmp1497 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp1498 = *$tmp1497;
org$frostlang$frostc$FixedArray** $tmp1499 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1500 = *$tmp1499;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
org$frostlang$frostc$FixedArray* $tmp1501 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local41) = $tmp1500;
// line 470
frost$core$Int64 $tmp1502 = (frost$core$Int64) {0};
*(&local42) = $tmp1502;
// line 471
org$frostlang$frostc$FixedArray* $tmp1503 = *(&local41);
ITable* $tmp1504 = ((frost$collections$Iterable*) $tmp1503)->$class->itable;
while ($tmp1504->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1504 = $tmp1504->next;
}
$fn1506 $tmp1505 = $tmp1504->methods[0];
frost$collections$Iterator* $tmp1507 = $tmp1505(((frost$collections$Iterable*) $tmp1503));
goto block121;
block121:;
ITable* $tmp1508 = $tmp1507->$class->itable;
while ($tmp1508->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1508 = $tmp1508->next;
}
$fn1510 $tmp1509 = $tmp1508->methods[0];
frost$core$Bit $tmp1511 = $tmp1509($tmp1507);
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block123; else goto block122;
block122:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1513 = $tmp1507->$class->itable;
while ($tmp1513->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1513 = $tmp1513->next;
}
$fn1515 $tmp1514 = $tmp1513->methods[1];
frost$core$Object* $tmp1516 = $tmp1514($tmp1507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1516)));
org$frostlang$frostc$ASTNode* $tmp1517 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1516);
// line 472
frost$core$Int64 $tmp1518 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1519 = *(&local43);
frost$core$Int64 $tmp1520 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1519);
int64_t $tmp1521 = $tmp1518.value;
int64_t $tmp1522 = $tmp1520.value;
int64_t $tmp1523 = $tmp1521 + $tmp1522;
frost$core$Int64 $tmp1524 = (frost$core$Int64) {$tmp1523};
*(&local42) = $tmp1524;
frost$core$Frost$unref$frost$core$Object$Q($tmp1516);
// unreffing REF($1232:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1525 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// unreffing decl
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block121;
block123:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
// unreffing REF($1221:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 474
frost$core$Int64 $tmp1526 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1527 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
// unreffing decls
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1526;
block120:;
frost$core$Int64 $tmp1528 = (frost$core$Int64) {52};
frost$core$Bit $tmp1529 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1528);
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block124; else goto block125;
block124:;
org$frostlang$frostc$Position* $tmp1531 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1532 = *$tmp1531;
org$frostlang$frostc$FixedArray** $tmp1533 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1534 = *$tmp1533;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
org$frostlang$frostc$FixedArray* $tmp1535 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local44) = $tmp1534;
org$frostlang$frostc$FixedArray** $tmp1536 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1537 = *$tmp1536;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
org$frostlang$frostc$FixedArray* $tmp1538 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local45) = $tmp1537;
// line 477
frost$core$Int64 $tmp1539 = (frost$core$Int64) {0};
*(&local46) = $tmp1539;
// line 478
org$frostlang$frostc$FixedArray* $tmp1540 = *(&local44);
ITable* $tmp1541 = ((frost$collections$Iterable*) $tmp1540)->$class->itable;
while ($tmp1541->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1541 = $tmp1541->next;
}
$fn1543 $tmp1542 = $tmp1541->methods[0];
frost$collections$Iterator* $tmp1544 = $tmp1542(((frost$collections$Iterable*) $tmp1540));
goto block126;
block126:;
ITable* $tmp1545 = $tmp1544->$class->itable;
while ($tmp1545->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1545 = $tmp1545->next;
}
$fn1547 $tmp1546 = $tmp1545->methods[0];
frost$core$Bit $tmp1548 = $tmp1546($tmp1544);
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block128; else goto block127;
block127:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1550 = $tmp1544->$class->itable;
while ($tmp1550->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1550 = $tmp1550->next;
}
$fn1552 $tmp1551 = $tmp1550->methods[1];
frost$core$Object* $tmp1553 = $tmp1551($tmp1544);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1553)));
org$frostlang$frostc$ASTNode* $tmp1554 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1553);
// line 479
frost$core$Int64 $tmp1555 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1556 = *(&local47);
frost$core$Int64 $tmp1557 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1556);
int64_t $tmp1558 = $tmp1555.value;
int64_t $tmp1559 = $tmp1557.value;
int64_t $tmp1560 = $tmp1558 + $tmp1559;
frost$core$Int64 $tmp1561 = (frost$core$Int64) {$tmp1560};
*(&local46) = $tmp1561;
frost$core$Frost$unref$frost$core$Object$Q($tmp1553);
// unreffing REF($1312:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1562 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
// unreffing test
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block126;
block128:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
// unreffing REF($1301:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 481
org$frostlang$frostc$FixedArray* $tmp1563 = *(&local45);
ITable* $tmp1564 = ((frost$collections$Iterable*) $tmp1563)->$class->itable;
while ($tmp1564->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
frost$collections$Iterator* $tmp1567 = $tmp1565(((frost$collections$Iterable*) $tmp1563));
goto block129;
block129:;
ITable* $tmp1568 = $tmp1567->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$core$Bit $tmp1571 = $tmp1569($tmp1567);
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block131; else goto block130;
block130:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1573 = $tmp1567->$class->itable;
while ($tmp1573->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1573 = $tmp1573->next;
}
$fn1575 $tmp1574 = $tmp1573->methods[1];
frost$core$Object* $tmp1576 = $tmp1574($tmp1567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1576)));
org$frostlang$frostc$ASTNode* $tmp1577 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1576);
// line 482
frost$core$Int64 $tmp1578 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local48);
frost$core$Int64 $tmp1580 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1579);
int64_t $tmp1581 = $tmp1578.value;
int64_t $tmp1582 = $tmp1580.value;
int64_t $tmp1583 = $tmp1581 + $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {$tmp1583};
*(&local46) = $tmp1584;
frost$core$Frost$unref$frost$core$Object$Q($tmp1576);
// unreffing REF($1357:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1585 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
// unreffing s
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block129;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
// unreffing REF($1346:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 484
frost$core$Int64 $tmp1586 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1587 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1587));
// unreffing statements
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1588 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1588));
// unreffing tests
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1586;
block125:;
frost$core$Int64 $tmp1589 = (frost$core$Int64) {53};
frost$core$Bit $tmp1590 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp902, $tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block132; else goto block133;
block132:;
org$frostlang$frostc$Position* $tmp1592 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1593 = *$tmp1592;
frost$core$String** $tmp1594 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1595 = *$tmp1594;
org$frostlang$frostc$ASTNode** $tmp1596 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1597 = *$tmp1596;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
org$frostlang$frostc$ASTNode* $tmp1598 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local49) = $tmp1597;
org$frostlang$frostc$FixedArray** $tmp1599 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1600 = *$tmp1599;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
org$frostlang$frostc$FixedArray* $tmp1601 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local50) = $tmp1600;
// line 487
org$frostlang$frostc$ASTNode* $tmp1602 = *(&local49);
frost$core$Int64 $tmp1603 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1602);
*(&local51) = $tmp1603;
// line 488
org$frostlang$frostc$FixedArray* $tmp1604 = *(&local50);
ITable* $tmp1605 = ((frost$collections$Iterable*) $tmp1604)->$class->itable;
while ($tmp1605->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1605 = $tmp1605->next;
}
$fn1607 $tmp1606 = $tmp1605->methods[0];
frost$collections$Iterator* $tmp1608 = $tmp1606(((frost$collections$Iterable*) $tmp1604));
goto block134;
block134:;
ITable* $tmp1609 = $tmp1608->$class->itable;
while ($tmp1609->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1609 = $tmp1609->next;
}
$fn1611 $tmp1610 = $tmp1609->methods[0];
frost$core$Bit $tmp1612 = $tmp1610($tmp1608);
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block136; else goto block135;
block135:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1614 = $tmp1608->$class->itable;
while ($tmp1614->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1614 = $tmp1614->next;
}
$fn1616 $tmp1615 = $tmp1614->methods[1];
frost$core$Object* $tmp1617 = $tmp1615($tmp1608);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1617)));
org$frostlang$frostc$ASTNode* $tmp1618 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1617);
// line 489
frost$core$Int64 $tmp1619 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1620 = *(&local52);
frost$core$Int64 $tmp1621 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1620);
int64_t $tmp1622 = $tmp1619.value;
int64_t $tmp1623 = $tmp1621.value;
int64_t $tmp1624 = $tmp1622 + $tmp1623;
frost$core$Int64 $tmp1625 = (frost$core$Int64) {$tmp1624};
*(&local51) = $tmp1625;
frost$core$Frost$unref$frost$core$Object$Q($tmp1617);
// unreffing REF($1445:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1626 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
// unreffing s
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block134;
block136:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
// unreffing REF($1434:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 491
frost$core$Int64 $tmp1627 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1628 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
// unreffing statements
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1629 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
// unreffing test
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1627;
block133:;
// line 494
frost$core$Bit $tmp1630 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block137; else goto block138;
block138:;
frost$core$Int64 $tmp1632 = (frost$core$Int64) {494};
frost$core$String* $tmp1633 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1634, ((frost$core$Object*) param1));
frost$core$String* $tmp1635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1633, &$s1636);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1637, $tmp1632, $tmp1635);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
// unreffing REF($1494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// unreffing REF($1493:frost.core.String)
abort(); // unreachable
block137:;
goto block1;
block1:;
frost$core$Bit $tmp1638 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block139; else goto block140;
block140:;
frost$core$Int64 $tmp1640 = (frost$core$Int64) {309};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1641, $tmp1640, &$s1642);
abort(); // unreachable
block139:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 500
frost$core$Weak** $tmp1643 = &param0->compiler;
frost$core$Weak* $tmp1644 = *$tmp1643;
frost$core$Object* $tmp1645 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1644);
org$frostlang$frostc$Compiler$Settings** $tmp1646 = &((org$frostlang$frostc$Compiler*) $tmp1645)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1647 = *$tmp1646;
frost$core$Int64* $tmp1648 = &$tmp1647->optimizationLevel;
frost$core$Int64 $tmp1649 = *$tmp1648;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {0};
int64_t $tmp1651 = $tmp1649.value;
int64_t $tmp1652 = $tmp1650.value;
bool $tmp1653 = $tmp1651 > $tmp1652;
frost$core$Bit $tmp1654 = (frost$core$Bit) {$tmp1653};
bool $tmp1655 = $tmp1654.value;
if ($tmp1655) goto block3; else goto block4;
block3:;
frost$core$Bit $tmp1656 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1657 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1656);
*(&local1) = $tmp1657;
goto block5;
block4:;
*(&local1) = $tmp1654;
goto block5;
block5:;
frost$core$Bit $tmp1658 = *(&local1);
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp1660 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
*(&local0) = $tmp1660;
goto block8;
block7:;
*(&local0) = $tmp1658;
goto block8;
block8:;
frost$core$Bit $tmp1661 = *(&local0);
bool $tmp1662 = $tmp1661.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1645);
// unreffing REF($4:frost.core.Weak.T)
if ($tmp1662) goto block1; else goto block2;
block1:;
// line 502
frost$core$Int64 $tmp1663 = (frost$core$Int64) {0};
*(&local2) = $tmp1663;
// line 503
ITable* $tmp1664 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1664->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1664 = $tmp1664->next;
}
$fn1666 $tmp1665 = $tmp1664->methods[0];
frost$collections$Iterator* $tmp1667 = $tmp1665(((frost$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1668 = $tmp1667->$class->itable;
while ($tmp1668->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1668 = $tmp1668->next;
}
$fn1670 $tmp1669 = $tmp1668->methods[0];
frost$core$Bit $tmp1671 = $tmp1669($tmp1667);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block11; else goto block10;
block10:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1673 = $tmp1667->$class->itable;
while ($tmp1673->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1673 = $tmp1673->next;
}
$fn1675 $tmp1674 = $tmp1673->methods[1];
frost$core$Object* $tmp1676 = $tmp1674($tmp1667);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1676)));
org$frostlang$frostc$ASTNode* $tmp1677 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1676);
// line 504
frost$core$Int64 $tmp1678 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1679 = *(&local3);
frost$core$Int64 $tmp1680 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1679);
int64_t $tmp1681 = $tmp1678.value;
int64_t $tmp1682 = $tmp1680.value;
int64_t $tmp1683 = $tmp1681 + $tmp1682;
frost$core$Int64 $tmp1684 = (frost$core$Int64) {$tmp1683};
*(&local2) = $tmp1684;
// line 505
frost$core$Int64 $tmp1685 = *(&local2);
frost$core$Int64 $tmp1686 = (frost$core$Int64) {10};
int64_t $tmp1687 = $tmp1685.value;
int64_t $tmp1688 = $tmp1686.value;
bool $tmp1689 = $tmp1687 > $tmp1688;
frost$core$Bit $tmp1690 = (frost$core$Bit) {$tmp1689};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block12; else goto block13;
block12:;
// line 506
frost$core$Bit $tmp1692 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1676);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1693 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
// unreffing s
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp1692;
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1676);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1694 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
// unreffing s
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 509
frost$core$Bit $tmp1695 = frost$core$Bit$init$builtin_bit(true);
return $tmp1695;
block2:;
// line 511
frost$core$Bit $tmp1696 = frost$core$Bit$init$builtin_bit(false);
return $tmp1696;

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
// line 518
*(&local0) = ((frost$core$String*) NULL);
// line 520
frost$core$Bit $tmp1697 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block1; else goto block3;
block1:;
// line 521
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1699 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1699));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 524
frost$core$Bit $tmp1700 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1702 = (frost$core$Int64) {524};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1703, $tmp1702, &$s1704);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp1705 = &param3->$rawValue;
frost$core$Int64 $tmp1706 = *$tmp1705;
frost$core$Int64 $tmp1707 = (frost$core$Int64) {40};
frost$core$Bit $tmp1708 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1706, $tmp1707);
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp1710 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1711 = *$tmp1710;
*(&local1) = $tmp1711;
frost$core$String** $tmp1712 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1713 = *$tmp1712;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
frost$core$String* $tmp1714 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local2) = $tmp1713;
// line 526
frost$core$String* $tmp1715 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$String* $tmp1716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local0) = $tmp1715;
frost$core$String* $tmp1717 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 529
frost$core$Bit $tmp1718 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1719 = $tmp1718.value;
if ($tmp1719) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1720 = (frost$core$Int64) {529};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1721, $tmp1720);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 533
org$frostlang$frostc$Annotations* $tmp1722 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
org$frostlang$frostc$Annotations* $tmp1723 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local3) = $tmp1722;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
// unreffing REF($68:org.frostlang.frostc.Annotations)
// line 534
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1724;
$tmp1724 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1724->value = param5;
frost$core$Int64 $tmp1725 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1726 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1725);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1727;
$tmp1727 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1727->value = $tmp1726;
ITable* $tmp1728 = ((frost$core$Equatable*) $tmp1724)->$class->itable;
while ($tmp1728->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1728 = $tmp1728->next;
}
$fn1730 $tmp1729 = $tmp1728->methods[1];
frost$core$Bit $tmp1731 = $tmp1729(((frost$core$Equatable*) $tmp1724), ((frost$core$Equatable*) $tmp1727));
bool $tmp1732 = $tmp1731.value;
if ($tmp1732) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Annotations** $tmp1733 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1734 = *$tmp1733;
frost$core$Bit $tmp1735 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1734);
*(&local5) = $tmp1735;
goto block15;
block14:;
*(&local5) = $tmp1731;
goto block15;
block15:;
frost$core$Bit $tmp1736 = *(&local5);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block16; else goto block17;
block16:;
*(&local4) = $tmp1736;
goto block18;
block17:;
org$frostlang$frostc$Annotations* $tmp1738 = *(&local3);
frost$core$Bit $tmp1739 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1738);
*(&local4) = $tmp1739;
goto block18;
block18:;
frost$core$Bit $tmp1740 = *(&local4);
bool $tmp1741 = $tmp1740.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1727)));
// unreffing REF($84:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1724)));
// unreffing REF($80:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1741) goto block11; else goto block12;
block11:;
// line 535
org$frostlang$frostc$Annotations* $tmp1742 = *(&local3);
frost$core$Int64* $tmp1743 = &$tmp1742->flags;
frost$core$Int64 $tmp1744 = *$tmp1743;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1746 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1744, $tmp1745);
frost$core$Int64* $tmp1747 = &$tmp1742->flags;
*$tmp1747 = $tmp1746;
goto block12;
block12:;
// line 537
*(&local6) = ((frost$collections$Array*) NULL);
// line 538
frost$core$Bit $tmp1748 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block19; else goto block21;
block19:;
// line 539
frost$collections$Array* $tmp1750 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
frost$collections$Array* $tmp1751 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local6) = $tmp1750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
// unreffing REF($131:frost.collections.Array<org.frostlang.frostc.MethodDecl.GenericParameter>)
// line 540
frost$core$String** $tmp1752 = &param1->name;
frost$core$String* $tmp1753 = *$tmp1752;
frost$core$String* $tmp1754 = frost$core$String$get_asString$R$frost$core$String($tmp1753);
frost$core$String* $tmp1755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1754, &$s1756);
frost$core$String* $tmp1757 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1755, param6);
frost$core$String* $tmp1758 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1757, &$s1759);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
frost$core$String* $tmp1760 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local7) = $tmp1758;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
// unreffing REF($150:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
// unreffing REF($149:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
// unreffing REF($147:frost.core.String)
// line 541
frost$core$Bit $tmp1761 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1763 = (frost$core$Int64) {541};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1764, $tmp1763, &$s1765);
abort(); // unreachable
block22:;
ITable* $tmp1766 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1766->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1766 = $tmp1766->next;
}
$fn1768 $tmp1767 = $tmp1766->methods[0];
frost$collections$Iterator* $tmp1769 = $tmp1767(((frost$collections$Iterable*) param7));
goto block24;
block24:;
ITable* $tmp1770 = $tmp1769->$class->itable;
while ($tmp1770->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1770 = $tmp1770->next;
}
$fn1772 $tmp1771 = $tmp1770->methods[0];
frost$core$Bit $tmp1773 = $tmp1771($tmp1769);
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block26; else goto block25;
block25:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1775 = $tmp1769->$class->itable;
while ($tmp1775->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1775 = $tmp1775->next;
}
$fn1777 $tmp1776 = $tmp1775->methods[1];
frost$core$Object* $tmp1778 = $tmp1776($tmp1769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1778)));
org$frostlang$frostc$ASTNode* $tmp1779 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1778);
// line 542
*(&local9) = ((frost$core$String*) NULL);
// line 543
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 544
org$frostlang$frostc$ASTNode* $tmp1780 = *(&local8);
frost$core$Int64* $tmp1781 = &$tmp1780->$rawValue;
frost$core$Int64 $tmp1782 = *$tmp1781;
frost$core$Int64 $tmp1783 = (frost$core$Int64) {22};
frost$core$Bit $tmp1784 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1782, $tmp1783);
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp1786 = (org$frostlang$frostc$Position*) ($tmp1780->$data + 0);
org$frostlang$frostc$Position $tmp1787 = *$tmp1786;
frost$core$String** $tmp1788 = (frost$core$String**) ($tmp1780->$data + 16);
frost$core$String* $tmp1789 = *$tmp1788;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
frost$core$String* $tmp1790 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local11) = $tmp1789;
// line 546
frost$core$String* $tmp1791 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
frost$core$String* $tmp1792 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local9) = $tmp1791;
// line 547
org$frostlang$frostc$Type* $tmp1793 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
org$frostlang$frostc$Type* $tmp1794 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local10) = $tmp1793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
// unreffing REF($232:org.frostlang.frostc.Type)
frost$core$String* $tmp1795 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
// unreffing id
*(&local11) = ((frost$core$String*) NULL);
goto block27;
block29:;
frost$core$Int64 $tmp1796 = (frost$core$Int64) {47};
frost$core$Bit $tmp1797 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1782, $tmp1796);
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp1799 = (org$frostlang$frostc$Position*) ($tmp1780->$data + 0);
org$frostlang$frostc$Position $tmp1800 = *$tmp1799;
frost$core$String** $tmp1801 = (frost$core$String**) ($tmp1780->$data + 16);
frost$core$String* $tmp1802 = *$tmp1801;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
frost$core$String* $tmp1803 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local12) = $tmp1802;
org$frostlang$frostc$ASTNode** $tmp1804 = (org$frostlang$frostc$ASTNode**) ($tmp1780->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1805 = *$tmp1804;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
org$frostlang$frostc$ASTNode* $tmp1806 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
*(&local13) = $tmp1805;
// line 550
frost$core$String* $tmp1807 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$String* $tmp1808 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local9) = $tmp1807;
// line 551
org$frostlang$frostc$ASTNode* $tmp1809 = *(&local13);
frost$core$Bit $tmp1810 = frost$core$Bit$init$builtin_bit($tmp1809 != NULL);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp1812 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1813, $tmp1812, &$s1814);
abort(); // unreachable
block32:;
org$frostlang$frostc$Type* $tmp1815 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
org$frostlang$frostc$Type* $tmp1816 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
*(&local10) = $tmp1815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
// unreffing REF($290:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp1817 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
// unreffing type
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1818 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
// unreffing id
*(&local12) = ((frost$core$String*) NULL);
goto block27;
block31:;
// line 554
frost$core$Bit $tmp1819 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp1821 = (frost$core$Int64) {554};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1822, $tmp1821);
abort(); // unreachable
block34:;
goto block27;
block27:;
// line 557
frost$collections$Array* $tmp1823 = *(&local6);
frost$core$Bit $tmp1824 = frost$core$Bit$init$builtin_bit($tmp1823 != NULL);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1826 = (frost$core$Int64) {557};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1827, $tmp1826, &$s1828);
abort(); // unreachable
block36:;
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp1829 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp1830 = *(&local8);
$fn1832 $tmp1831 = ($fn1832) $tmp1830->$class->vtable[2];
org$frostlang$frostc$Position $tmp1833 = $tmp1831($tmp1830);
frost$core$String* $tmp1834 = *(&local7);
frost$core$String* $tmp1835 = *(&local9);
org$frostlang$frostc$Type* $tmp1836 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp1829, $tmp1833, $tmp1834, $tmp1835, $tmp1836);
frost$collections$Array$add$frost$collections$Array$T($tmp1823, ((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
// unreffing REF($329:org.frostlang.frostc.MethodDecl.GenericParameter)
org$frostlang$frostc$Type* $tmp1837 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
// unreffing bound
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1838 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
// unreffing parameterName
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1778);
// unreffing REF($192:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1839 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
// unreffing p
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
// unreffing REF($181:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp1840 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
// unreffing fullName
*(&local7) = ((frost$core$String*) NULL);
goto block20;
block21:;
// line 1
// line 562
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1841 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local6) = ((frost$collections$Array*) NULL);
goto block20;
block20:;
// line 564
frost$collections$Array* $tmp1842 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1842);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
frost$collections$Array* $tmp1843 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
*(&local14) = $tmp1842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
// unreffing REF($380:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 565
ITable* $tmp1844 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1844->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1844 = $tmp1844->next;
}
$fn1846 $tmp1845 = $tmp1844->methods[0];
frost$collections$Iterator* $tmp1847 = $tmp1845(((frost$collections$Iterable*) param8));
goto block38;
block38:;
ITable* $tmp1848 = $tmp1847->$class->itable;
while ($tmp1848->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1848 = $tmp1848->next;
}
$fn1850 $tmp1849 = $tmp1848->methods[0];
frost$core$Bit $tmp1851 = $tmp1849($tmp1847);
bool $tmp1852 = $tmp1851.value;
if ($tmp1852) goto block40; else goto block39;
block39:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1853 = $tmp1847->$class->itable;
while ($tmp1853->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1853 = $tmp1853->next;
}
$fn1855 $tmp1854 = $tmp1853->methods[1];
frost$core$Object* $tmp1856 = $tmp1854($tmp1847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1856)));
org$frostlang$frostc$ASTNode* $tmp1857 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1856);
// line 566
org$frostlang$frostc$ASTNode* $tmp1858 = *(&local15);
frost$core$Int64* $tmp1859 = &$tmp1858->$rawValue;
frost$core$Int64 $tmp1860 = *$tmp1859;
frost$core$Int64 $tmp1861 = (frost$core$Int64) {34};
frost$core$Bit $tmp1862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1860, $tmp1861);
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1864 = (org$frostlang$frostc$Position*) ($tmp1858->$data + 0);
org$frostlang$frostc$Position $tmp1865 = *$tmp1864;
frost$core$String** $tmp1866 = (frost$core$String**) ($tmp1858->$data + 16);
frost$core$String* $tmp1867 = *$tmp1866;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$String* $tmp1868 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local16) = $tmp1867;
org$frostlang$frostc$ASTNode** $tmp1869 = (org$frostlang$frostc$ASTNode**) ($tmp1858->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1870 = *$tmp1869;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
org$frostlang$frostc$ASTNode* $tmp1871 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local17) = $tmp1870;
// line 568
frost$collections$Array* $tmp1872 = *(&local14);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1873 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1874 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1875 = *(&local17);
org$frostlang$frostc$Type* $tmp1876 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1875);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1873, $tmp1874, $tmp1876);
frost$collections$Array$add$frost$collections$Array$T($tmp1872, ((frost$core$Object*) $tmp1873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
// unreffing REF($450:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
// unreffing REF($447:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$ASTNode* $tmp1877 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
// unreffing type
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1878 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
// unreffing name
*(&local16) = ((frost$core$String*) NULL);
goto block41;
block43:;
// line 571
frost$core$Bit $tmp1879 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1880 = $tmp1879.value;
if ($tmp1880) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp1881 = (frost$core$Int64) {571};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1882, $tmp1881);
abort(); // unreachable
block44:;
goto block41;
block41:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1856);
// unreffing REF($408:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1883 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
// unreffing p
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// unreffing REF($397:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 575
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// line 576
frost$core$Bit $tmp1884 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block46; else goto block48;
block46:;
// line 577
frost$core$Bit $tmp1886 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1887 = $tmp1886.value;
if ($tmp1887) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1888 = (frost$core$Int64) {577};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1889, $tmp1888, &$s1890);
abort(); // unreachable
block49:;
org$frostlang$frostc$Type* $tmp1891 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
org$frostlang$frostc$Type* $tmp1892 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local18) = $tmp1891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// unreffing REF($507:org.frostlang.frostc.Type)
goto block47;
block48:;
// line 1
// line 580
org$frostlang$frostc$Type* $tmp1893 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
org$frostlang$frostc$Type* $tmp1894 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
*(&local18) = $tmp1893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
// unreffing REF($520:org.frostlang.frostc.Type)
goto block47;
block47:;
// line 582
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1895;
$tmp1895 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1895->value = param5;
frost$core$Int64 $tmp1896 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1897 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1896);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1898;
$tmp1898 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1898->value = $tmp1897;
ITable* $tmp1899 = ((frost$core$Equatable*) $tmp1895)->$class->itable;
while ($tmp1899->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1899 = $tmp1899->next;
}
$fn1901 $tmp1900 = $tmp1899->methods[0];
frost$core$Bit $tmp1902 = $tmp1900(((frost$core$Equatable*) $tmp1895), ((frost$core$Equatable*) $tmp1898));
bool $tmp1903 = $tmp1902.value;
if ($tmp1903) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Type* $tmp1904 = *(&local18);
org$frostlang$frostc$Type* $tmp1905 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1906 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1904, $tmp1905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// unreffing REF($542:org.frostlang.frostc.Type)
*(&local19) = $tmp1906;
goto block55;
block54:;
*(&local19) = $tmp1902;
goto block55;
block55:;
frost$core$Bit $tmp1907 = *(&local19);
bool $tmp1908 = $tmp1907.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1898)));
// unreffing REF($536:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1895)));
// unreffing REF($532:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1908) goto block51; else goto block52;
block51:;
// line 583
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1909);
goto block52;
block52:;
// line 585
frost$core$Bit $tmp1910 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Annotations* $tmp1912 = *(&local3);
frost$core$Bit $tmp1913 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1915 = (frost$core$Int64) {585};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1916, $tmp1915, &$s1917);
abort(); // unreachable
block61:;
frost$core$Bit $tmp1918 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1912, ((frost$collections$ListView*) param10));
*(&local20) = $tmp1918;
goto block60;
block59:;
*(&local20) = $tmp1910;
goto block60;
block60:;
frost$core$Bit $tmp1919 = *(&local20);
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block56; else goto block57;
block56:;
// line 586
org$frostlang$frostc$Annotations* $tmp1921 = *(&local3);
frost$core$Int64* $tmp1922 = &$tmp1921->flags;
frost$core$Int64 $tmp1923 = *$tmp1922;
frost$core$Int64 $tmp1924 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1925 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1923, $tmp1924);
frost$core$Int64* $tmp1926 = &$tmp1921->flags;
*$tmp1926 = $tmp1925;
goto block57;
block57:;
// line 588
frost$core$Bit $tmp1927 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block65; else goto block66;
block65:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1929 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1930 = *$tmp1929;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1931;
$tmp1931 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1931->value = $tmp1930;
frost$core$Int64 $tmp1932 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp1933 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1932);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1934;
$tmp1934 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1934->value = $tmp1933;
ITable* $tmp1935 = ((frost$core$Equatable*) $tmp1931)->$class->itable;
while ($tmp1935->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1935 = $tmp1935->next;
}
$fn1937 $tmp1936 = $tmp1935->methods[0];
frost$core$Bit $tmp1938 = $tmp1936(((frost$core$Equatable*) $tmp1931), ((frost$core$Equatable*) $tmp1934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1934)));
// unreffing REF($605:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1931)));
// unreffing REF($601:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local22) = $tmp1938;
goto block67;
block66:;
*(&local22) = $tmp1927;
goto block67;
block67:;
frost$core$Bit $tmp1939 = *(&local22);
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Annotations** $tmp1941 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1942 = *$tmp1941;
frost$core$Bit $tmp1943 = org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit($tmp1942);
frost$core$Bit $tmp1944 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1943);
*(&local21) = $tmp1944;
goto block70;
block69:;
*(&local21) = $tmp1939;
goto block70;
block70:;
frost$core$Bit $tmp1945 = *(&local21);
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block63; else goto block64;
block63:;
// line 590
org$frostlang$frostc$Annotations* $tmp1947 = *(&local3);
frost$core$Int64* $tmp1948 = &$tmp1947->flags;
frost$core$Int64 $tmp1949 = *$tmp1948;
frost$core$Int64 $tmp1950 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1951 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1949, $tmp1950);
frost$core$Int64 $tmp1952 = (frost$core$Int64) {0};
int64_t $tmp1953 = $tmp1951.value;
int64_t $tmp1954 = $tmp1952.value;
bool $tmp1955 = $tmp1953 != $tmp1954;
frost$core$Bit $tmp1956 = (frost$core$Bit) {$tmp1955};
bool $tmp1957 = $tmp1956.value;
if ($tmp1957) goto block71; else goto block72;
block71:;
// line 591
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1958);
goto block72;
block72:;
// line 594
org$frostlang$frostc$Annotations* $tmp1959 = *(&local3);
frost$core$Int64* $tmp1960 = &$tmp1959->flags;
frost$core$Int64 $tmp1961 = *$tmp1960;
frost$core$Int64 $tmp1962 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1963 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1961, $tmp1962);
frost$core$Int64* $tmp1964 = &$tmp1959->flags;
*$tmp1964 = $tmp1963;
goto block64;
block64:;
// line 596
org$frostlang$frostc$MethodDecl* $tmp1965 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp1966 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1967 = *(&local3);
frost$collections$Array* $tmp1968 = *(&local6);
frost$collections$Array* $tmp1969 = *(&local14);
org$frostlang$frostc$Type* $tmp1970 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1965, param1, param2, $tmp1966, $tmp1967, param5, param6, $tmp1968, $tmp1969, $tmp1970, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
// unreffing REF($658:org.frostlang.frostc.MethodDecl)
org$frostlang$frostc$Type* $tmp1971 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
// unreffing returnType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1972 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
// unreffing parameters
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1973 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// unreffing generics
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp1974 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
// unreffing annotations
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1975 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
// unreffing doccomment
*(&local0) = ((frost$core$String*) NULL);
return $tmp1965;

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
// line 601
frost$core$Int64* $tmp1976 = &param2->$rawValue;
frost$core$Int64 $tmp1977 = *$tmp1976;
frost$core$Int64 $tmp1978 = (frost$core$Int64) {18};
frost$core$Bit $tmp1979 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1977, $tmp1978);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1981 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1982 = *$tmp1981;
*(&local0) = $tmp1982;
org$frostlang$frostc$ASTNode** $tmp1983 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1984 = *$tmp1983;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
org$frostlang$frostc$ASTNode* $tmp1985 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local1) = $tmp1984;
org$frostlang$frostc$FixedArray** $tmp1986 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1987 = *$tmp1986;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
org$frostlang$frostc$FixedArray* $tmp1988 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local2) = $tmp1987;
org$frostlang$frostc$ASTNode** $tmp1989 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1990 = *$tmp1989;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
org$frostlang$frostc$ASTNode* $tmp1991 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local3) = $tmp1990;
// line 603
org$frostlang$frostc$Position $tmp1992 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1993 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1994 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1995 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp1992, $tmp1993, $tmp1994, $tmp1995);
org$frostlang$frostc$ASTNode* $tmp1996 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
// unreffing varDecl
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1997 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
// unreffing annotations
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1998 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
// unreffing dc
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1999 = (frost$core$Int64) {29};
frost$core$Bit $tmp2000 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1977, $tmp1999);
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp2002 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2003 = *$tmp2002;
*(&local4) = $tmp2003;
org$frostlang$frostc$ASTNode** $tmp2004 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2005 = *$tmp2004;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
org$frostlang$frostc$ASTNode* $tmp2006 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local5) = $tmp2005;
org$frostlang$frostc$FixedArray** $tmp2007 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2008 = *$tmp2007;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
org$frostlang$frostc$FixedArray* $tmp2009 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local6) = $tmp2008;
org$frostlang$frostc$MethodDecl$Kind* $tmp2010 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2011 = *$tmp2010;
*(&local7) = $tmp2011;
frost$core$String** $tmp2012 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp2013 = *$tmp2012;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$String* $tmp2014 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local8) = $tmp2013;
org$frostlang$frostc$FixedArray** $tmp2015 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2016 = *$tmp2015;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
org$frostlang$frostc$FixedArray* $tmp2017 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
*(&local9) = $tmp2016;
org$frostlang$frostc$FixedArray** $tmp2018 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2019 = *$tmp2018;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
org$frostlang$frostc$FixedArray* $tmp2020 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local10) = $tmp2019;
org$frostlang$frostc$ASTNode** $tmp2021 = (org$frostlang$frostc$ASTNode**) (param2->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2022 = *$tmp2021;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
org$frostlang$frostc$ASTNode* $tmp2023 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
*(&local11) = $tmp2022;
org$frostlang$frostc$FixedArray** $tmp2024 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2025 = *$tmp2024;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
org$frostlang$frostc$FixedArray* $tmp2026 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
*(&local12) = $tmp2025;
// line 607
org$frostlang$frostc$Position $tmp2027 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2028 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2029 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp2030 = *(&local7);
frost$core$String* $tmp2031 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2032 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp2033 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2034 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2035 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp2036 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp2027, $tmp2028, $tmp2029, $tmp2030, $tmp2031, $tmp2032, $tmp2033, $tmp2034, $tmp2035);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
org$frostlang$frostc$MethodDecl* $tmp2037 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local13) = $tmp2036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
// unreffing REF($142:org.frostlang.frostc.MethodDecl?)
// line 609
org$frostlang$frostc$MethodDecl* $tmp2038 = *(&local13);
frost$core$Bit $tmp2039 = frost$core$Bit$init$builtin_bit($tmp2038 != NULL);
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block6; else goto block7;
block6:;
// line 610
org$frostlang$frostc$SymbolTable** $tmp2041 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2042 = *$tmp2041;
org$frostlang$frostc$MethodDecl* $tmp2043 = *(&local13);
frost$core$Bit $tmp2044 = frost$core$Bit$init$builtin_bit($tmp2043 != NULL);
bool $tmp2045 = $tmp2044.value;
if ($tmp2045) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2046 = (frost$core$Int64) {610};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2047, $tmp2046, &$s2048);
abort(); // unreachable
block8:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2042, ((org$frostlang$frostc$Symbol*) $tmp2043));
// line 611
frost$collections$Array** $tmp2049 = &param1->methods;
frost$collections$Array* $tmp2050 = *$tmp2049;
org$frostlang$frostc$MethodDecl* $tmp2051 = *(&local13);
frost$core$Bit $tmp2052 = frost$core$Bit$init$builtin_bit($tmp2051 != NULL);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2054 = (frost$core$Int64) {611};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2055, $tmp2054, &$s2056);
abort(); // unreachable
block10:;
frost$collections$Array$add$frost$collections$Array$T($tmp2050, ((frost$core$Object*) $tmp2051));
goto block7;
block7:;
org$frostlang$frostc$MethodDecl* $tmp2057 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2058 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
// unreffing statements
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2059 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
// unreffing returnType
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2060 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
// unreffing parameters
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2061 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
// unreffing generics
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2062 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// unreffing name
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2063 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
// unreffing annotations
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2064 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
// unreffing dc
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp2065 = (frost$core$Int64) {12};
frost$core$Bit $tmp2066 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1977, $tmp2065);
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp2068 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2069 = *$tmp2068;
*(&local14) = $tmp2069;
org$frostlang$frostc$ASTNode** $tmp2070 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2071 = *$tmp2070;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
org$frostlang$frostc$ASTNode* $tmp2072 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
*(&local15) = $tmp2071;
org$frostlang$frostc$FixedArray** $tmp2073 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2074 = *$tmp2073;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
org$frostlang$frostc$FixedArray* $tmp2075 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local16) = $tmp2074;
org$frostlang$frostc$ClassDecl$Kind* $tmp2076 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2077 = *$tmp2076;
*(&local17) = $tmp2077;
frost$core$String** $tmp2078 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp2079 = *$tmp2078;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
frost$core$String* $tmp2080 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
*(&local18) = $tmp2079;
org$frostlang$frostc$FixedArray** $tmp2081 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2082 = *$tmp2081;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
org$frostlang$frostc$FixedArray* $tmp2083 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local19) = $tmp2082;
org$frostlang$frostc$FixedArray** $tmp2084 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2085 = *$tmp2084;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
org$frostlang$frostc$FixedArray* $tmp2086 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local20) = $tmp2085;
org$frostlang$frostc$FixedArray** $tmp2087 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2088 = *$tmp2087;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
org$frostlang$frostc$FixedArray* $tmp2089 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
*(&local21) = $tmp2088;
// line 616
frost$io$File** $tmp2090 = &param1->source;
frost$io$File* $tmp2091 = *$tmp2090;
frost$collections$MapView** $tmp2092 = &param1->aliases;
frost$collections$MapView* $tmp2093 = *$tmp2092;
frost$core$String** $tmp2094 = &param1->name;
frost$core$String* $tmp2095 = *$tmp2094;
org$frostlang$frostc$Position $tmp2096 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2097 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2098 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2099 = *(&local17);
frost$core$String* $tmp2100 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2101 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2102 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2103 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2104 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2091, $tmp2093, $tmp2095, $tmp2096, $tmp2097, $tmp2098, $tmp2099, $tmp2100, $tmp2101, $tmp2102, $tmp2103);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
org$frostlang$frostc$ClassDecl* $tmp2105 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local22) = $tmp2104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
// unreffing REF($308:org.frostlang.frostc.ClassDecl?)
// line 618
org$frostlang$frostc$ClassDecl* $tmp2106 = *(&local22);
frost$core$Bit $tmp2107 = frost$core$Bit$init$builtin_bit($tmp2106 != NULL);
bool $tmp2108 = $tmp2107.value;
if ($tmp2108) goto block14; else goto block15;
block14:;
// line 619
org$frostlang$frostc$ClassDecl* $tmp2109 = *(&local22);
frost$core$Bit $tmp2110 = frost$core$Bit$init$builtin_bit($tmp2109 != NULL);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {619};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2113, $tmp2112, &$s2114);
abort(); // unreachable
block16:;
frost$core$Weak* $tmp2115 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2115, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Weak** $tmp2116 = &$tmp2109->owner;
frost$core$Weak* $tmp2117 = *$tmp2116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
frost$core$Weak** $tmp2118 = &$tmp2109->owner;
*$tmp2118 = $tmp2115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// unreffing REF($336:frost.core.Weak<org.frostlang.frostc.ClassDecl?>)
// line 620
frost$collections$Array** $tmp2119 = &param1->classes;
frost$collections$Array* $tmp2120 = *$tmp2119;
org$frostlang$frostc$ClassDecl* $tmp2121 = *(&local22);
frost$core$Bit $tmp2122 = frost$core$Bit$init$builtin_bit($tmp2121 != NULL);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2124 = (frost$core$Int64) {620};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2125, $tmp2124, &$s2126);
abort(); // unreachable
block18:;
frost$collections$Array$add$frost$collections$Array$T($tmp2120, ((frost$core$Object*) $tmp2121));
// line 621
org$frostlang$frostc$ClassDecl* $tmp2127 = *(&local22);
frost$core$Bit $tmp2128 = frost$core$Bit$init$builtin_bit($tmp2127 != NULL);
bool $tmp2129 = $tmp2128.value;
if ($tmp2129) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2130 = (frost$core$Int64) {621};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2131, $tmp2130, &$s2132);
abort(); // unreachable
block20:;
frost$core$String** $tmp2133 = &$tmp2127->name;
frost$core$String* $tmp2134 = *$tmp2133;
frost$core$String** $tmp2135 = &param1->name;
frost$core$String* $tmp2136 = *$tmp2135;
frost$core$String* $tmp2137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2136, &$s2138);
frost$core$Bit $tmp2139 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2134, $tmp2137);
bool $tmp2140 = $tmp2139.value;
if ($tmp2140) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2141 = (frost$core$Int64) {621};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2142, $tmp2141);
abort(); // unreachable
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
// unreffing REF($380:frost.core.String)
// line 622
org$frostlang$frostc$SymbolTable** $tmp2143 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2144 = *$tmp2143;
org$frostlang$frostc$Alias* $tmp2145 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2146 = *(&local22);
frost$core$Bit $tmp2147 = frost$core$Bit$init$builtin_bit($tmp2146 != NULL);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2149 = (frost$core$Int64) {622};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2150, $tmp2149, &$s2151);
abort(); // unreachable
block24:;
frost$core$String** $tmp2152 = &$tmp2146->name;
frost$core$String* $tmp2153 = *$tmp2152;
frost$core$String** $tmp2154 = &param1->name;
frost$core$String* $tmp2155 = *$tmp2154;
frost$core$Int64 $tmp2156 = frost$core$String$get_length$R$frost$core$Int64($tmp2155);
frost$core$Int64 $tmp2157 = (frost$core$Int64) {1};
int64_t $tmp2158 = $tmp2156.value;
int64_t $tmp2159 = $tmp2157.value;
int64_t $tmp2160 = $tmp2158 + $tmp2159;
frost$core$Int64 $tmp2161 = (frost$core$Int64) {$tmp2160};
frost$core$Bit $tmp2162 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2163 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2161, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2162);
frost$core$String* $tmp2164 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2153, $tmp2163);
org$frostlang$frostc$ClassDecl* $tmp2165 = *(&local22);
frost$core$Bit $tmp2166 = frost$core$Bit$init$builtin_bit($tmp2165 != NULL);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2168 = (frost$core$Int64) {622};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2169, $tmp2168, &$s2170);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type** $tmp2171 = &$tmp2165->type;
org$frostlang$frostc$Type* $tmp2172 = *$tmp2171;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2145, $tmp2164, $tmp2172);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2144, ((org$frostlang$frostc$Symbol*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// unreffing REF($416:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
// unreffing REF($393:org.frostlang.frostc.Alias)
// line 623
org$frostlang$frostc$ClassDecl* $tmp2173 = *(&local22);
frost$core$Bit $tmp2174 = frost$core$Bit$init$builtin_bit($tmp2173 != NULL);
bool $tmp2175 = $tmp2174.value;
if ($tmp2175) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2176 = (frost$core$Int64) {623};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2177, $tmp2176, &$s2178);
abort(); // unreachable
block28:;
org$frostlang$frostc$SymbolTable** $tmp2179 = &$tmp2173->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2180 = *$tmp2179;
org$frostlang$frostc$Alias* $tmp2181 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
frost$core$String* $tmp2182 = org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
org$frostlang$frostc$Type** $tmp2183 = &param1->type;
org$frostlang$frostc$Type* $tmp2184 = *$tmp2183;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2181, $tmp2182, $tmp2184);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2180, ((org$frostlang$frostc$Symbol*) $tmp2181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
// unreffing REF($449:org.frostlang.frostc.Alias)
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2185 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// unreffing inner
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2186 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// unreffing members
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2187 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
// unreffing supertypes
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2188 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
// unreffing generics
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2189 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing name
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2190 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// unreffing annotations
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2191 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
// unreffing dc
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2192 = (frost$core$Int64) {10};
frost$core$Bit $tmp2193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1977, $tmp2192);
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2195 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2196 = *$tmp2195;
*(&local23) = $tmp2196;
org$frostlang$frostc$ASTNode** $tmp2197 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2198 = *$tmp2197;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
org$frostlang$frostc$ASTNode* $tmp2199 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
*(&local24) = $tmp2198;
frost$core$String** $tmp2200 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp2201 = *$tmp2200;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
frost$core$String* $tmp2202 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local25) = $tmp2201;
org$frostlang$frostc$FixedArray** $tmp2203 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2204 = *$tmp2203;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
org$frostlang$frostc$FixedArray* $tmp2205 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local26) = $tmp2204;
// line 627
org$frostlang$frostc$Position $tmp2206 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2207 = *(&local24);
frost$core$String* $tmp2208 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp2209 = *(&local26);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2206, $tmp2207, $tmp2208, $tmp2209);
org$frostlang$frostc$FixedArray* $tmp2210 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
// unreffing fields
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2211 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
// unreffing name
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2212 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// unreffing dc
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
// line 630
frost$core$Bit $tmp2213 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2214 = $tmp2213.value;
if ($tmp2214) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp2215 = (frost$core$Int64) {630};
frost$core$String* $tmp2216 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2217, ((frost$core$Object*) param2));
frost$core$String* $tmp2218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2216, &$s2219);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2220, $tmp2215, $tmp2218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// unreffing REF($562:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
// unreffing REF($561:frost.core.String)
abort(); // unreachable
block32:;
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
// line 637
*(&local0) = ((frost$core$String*) NULL);
// line 639
frost$core$Bit $tmp2221 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2222 = $tmp2221.value;
if ($tmp2222) goto block1; else goto block3;
block1:;
// line 640
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 643
frost$core$Bit $tmp2224 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2226 = (frost$core$Int64) {643};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2227, $tmp2226, &$s2228);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp2229 = &param3->$rawValue;
frost$core$Int64 $tmp2230 = *$tmp2229;
frost$core$Int64 $tmp2231 = (frost$core$Int64) {40};
frost$core$Bit $tmp2232 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2230, $tmp2231);
bool $tmp2233 = $tmp2232.value;
if ($tmp2233) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2234 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2235 = *$tmp2234;
*(&local1) = $tmp2235;
frost$core$String** $tmp2236 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp2237 = *$tmp2236;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
frost$core$String* $tmp2238 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
*(&local2) = $tmp2237;
// line 645
frost$core$String* $tmp2239 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$core$String* $tmp2240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
*(&local0) = $tmp2239;
frost$core$String* $tmp2241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 648
frost$core$Bit $tmp2242 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2243 = $tmp2242.value;
if ($tmp2243) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2244 = (frost$core$Int64) {648};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2245, $tmp2244);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 652
frost$collections$Array* $tmp2246 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2246);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$collections$Array* $tmp2247 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local3) = $tmp2246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
// unreffing REF($68:frost.collections.Array<org.frostlang.frostc.Type>)
// line 653
frost$core$Bit $tmp2248 = frost$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2249 = $tmp2248.value;
if ($tmp2249) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2250 = (frost$core$Int64) {653};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2251, $tmp2250, &$s2252);
abort(); // unreachable
block11:;
ITable* $tmp2253 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2253->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2253 = $tmp2253->next;
}
$fn2255 $tmp2254 = $tmp2253->methods[0];
frost$collections$Iterator* $tmp2256 = $tmp2254(((frost$collections$Iterable*) param5));
goto block13;
block13:;
ITable* $tmp2257 = $tmp2256->$class->itable;
while ($tmp2257->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2257 = $tmp2257->next;
}
$fn2259 $tmp2258 = $tmp2257->methods[0];
frost$core$Bit $tmp2260 = $tmp2258($tmp2256);
bool $tmp2261 = $tmp2260.value;
if ($tmp2261) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2262 = $tmp2256->$class->itable;
while ($tmp2262->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2262 = $tmp2262->next;
}
$fn2264 $tmp2263 = $tmp2262->methods[1];
frost$core$Object* $tmp2265 = $tmp2263($tmp2256);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2265)));
org$frostlang$frostc$ASTNode* $tmp2266 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2265);
// line 654
frost$collections$Array* $tmp2267 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2268 = *(&local4);
org$frostlang$frostc$Type* $tmp2269 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2268);
frost$collections$Array$add$frost$collections$Array$T($tmp2267, ((frost$core$Object*) $tmp2269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
// unreffing REF($115:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2265);
// unreffing REF($103:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
// unreffing t
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
// unreffing REF($92:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 656
org$frostlang$frostc$ChoiceCase* $tmp2271 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2272 = *(&local0);
frost$collections$Array** $tmp2273 = &param1->choiceCases;
frost$collections$Array* $tmp2274 = *$tmp2273;
ITable* $tmp2275 = ((frost$collections$CollectionView*) $tmp2274)->$class->itable;
while ($tmp2275->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2275 = $tmp2275->next;
}
$fn2277 $tmp2276 = $tmp2275->methods[0];
frost$core$Int64 $tmp2278 = $tmp2276(((frost$collections$CollectionView*) $tmp2274));
frost$collections$Array* $tmp2279 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2271, param1, param2, param4, $tmp2272, $tmp2278, ((frost$collections$ListView*) $tmp2279));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
org$frostlang$frostc$ChoiceCase* $tmp2280 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local5) = $tmp2271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
// unreffing REF($134:org.frostlang.frostc.ChoiceCase)
// line 658
frost$collections$Array** $tmp2281 = &param1->choiceCases;
frost$collections$Array* $tmp2282 = *$tmp2281;
org$frostlang$frostc$ChoiceCase* $tmp2283 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2282, ((frost$core$Object*) $tmp2283));
// line 659
org$frostlang$frostc$SymbolTable** $tmp2284 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2285 = *$tmp2284;
org$frostlang$frostc$ChoiceCase* $tmp2286 = *(&local5);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2285, ((org$frostlang$frostc$Symbol*) $tmp2286));
org$frostlang$frostc$ChoiceCase* $tmp2287 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
// unreffing entry
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2288 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
// unreffing fields
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2289 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
// unreffing doccomment
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
// line 666
*(&local0) = ((frost$core$String*) NULL);
// line 667
ITable* $tmp2291 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2291->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2291 = $tmp2291->next;
}
$fn2293 $tmp2292 = $tmp2291->methods[1];
frost$core$Bit $tmp2294 = $tmp2292(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2290));
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block1; else goto block3;
block1:;
// line 668
frost$core$String* $tmp2296 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2296, &$s2298);
frost$core$String* $tmp2299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2297, param8);
frost$core$String* $tmp2300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2299, &$s2301);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$String* $tmp2302 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local0) = $tmp2300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
// unreffing REF($11:frost.core.String)
goto block2;
block3:;
// line 1
// line 671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
*(&local0) = param8;
goto block2;
block2:;
// line 673
*(&local1) = ((frost$core$String*) NULL);
// line 675
frost$core$Bit $tmp2304 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block4; else goto block6;
block4:;
// line 676
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2306 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 679
frost$core$Bit $tmp2307 = frost$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2309 = (frost$core$Int64) {679};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2310, $tmp2309, &$s2311);
abort(); // unreachable
block7:;
frost$core$Int64* $tmp2312 = &param5->$rawValue;
frost$core$Int64 $tmp2313 = *$tmp2312;
frost$core$Int64 $tmp2314 = (frost$core$Int64) {40};
frost$core$Bit $tmp2315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2313, $tmp2314);
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2317 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2318 = *$tmp2317;
*(&local2) = $tmp2318;
frost$core$String** $tmp2319 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2320 = *$tmp2319;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$String* $tmp2321 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local3) = $tmp2320;
// line 681
frost$core$String* $tmp2322 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$String* $tmp2323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
*(&local1) = $tmp2322;
frost$core$String* $tmp2324 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block9;
block11:;
// line 684
frost$core$Bit $tmp2325 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2326 = $tmp2325.value;
if ($tmp2326) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2327 = (frost$core$Int64) {684};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2328, $tmp2327);
abort(); // unreachable
block12:;
goto block9;
block9:;
goto block5;
block5:;
// line 688
org$frostlang$frostc$Annotations* $tmp2329 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
org$frostlang$frostc$Annotations* $tmp2330 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local4) = $tmp2329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
// unreffing REF($111:org.frostlang.frostc.Annotations)
// line 689
frost$collections$Array* $tmp2331 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2331);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
frost$collections$Array* $tmp2332 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local5) = $tmp2331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
// unreffing REF($123:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
// line 690
frost$core$Bit $tmp2333 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block14; else goto block15;
block14:;
// line 691
frost$core$Bit $tmp2335 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2337 = (frost$core$Int64) {691};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2338, $tmp2337, &$s2339);
abort(); // unreachable
block16:;
ITable* $tmp2340 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2340->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2340 = $tmp2340->next;
}
$fn2342 $tmp2341 = $tmp2340->methods[0];
frost$collections$Iterator* $tmp2343 = $tmp2341(((frost$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp2344 = $tmp2343->$class->itable;
while ($tmp2344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2344 = $tmp2344->next;
}
$fn2346 $tmp2345 = $tmp2344->methods[0];
frost$core$Bit $tmp2347 = $tmp2345($tmp2343);
bool $tmp2348 = $tmp2347.value;
if ($tmp2348) goto block20; else goto block19;
block19:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2349 = $tmp2343->$class->itable;
while ($tmp2349->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2349 = $tmp2349->next;
}
$fn2351 $tmp2350 = $tmp2349->methods[1];
frost$core$Object* $tmp2352 = $tmp2350($tmp2343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2352)));
org$frostlang$frostc$ASTNode* $tmp2353 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2352);
// line 692
*(&local7) = ((frost$core$String*) NULL);
// line 693
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 694
org$frostlang$frostc$ASTNode* $tmp2354 = *(&local6);
frost$core$Int64* $tmp2355 = &$tmp2354->$rawValue;
frost$core$Int64 $tmp2356 = *$tmp2355;
frost$core$Int64 $tmp2357 = (frost$core$Int64) {22};
frost$core$Bit $tmp2358 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2356, $tmp2357);
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2360 = (org$frostlang$frostc$Position*) ($tmp2354->$data + 0);
org$frostlang$frostc$Position $tmp2361 = *$tmp2360;
frost$core$String** $tmp2362 = (frost$core$String**) ($tmp2354->$data + 16);
frost$core$String* $tmp2363 = *$tmp2362;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
frost$core$String* $tmp2364 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
*(&local9) = $tmp2363;
// line 696
frost$core$String* $tmp2365 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
frost$core$String* $tmp2366 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
*(&local7) = $tmp2365;
// line 697
org$frostlang$frostc$Type* $tmp2367 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
org$frostlang$frostc$Type* $tmp2368 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
*(&local8) = $tmp2367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
// unreffing REF($203:org.frostlang.frostc.Type)
frost$core$String* $tmp2369 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
// unreffing id
*(&local9) = ((frost$core$String*) NULL);
goto block21;
block23:;
frost$core$Int64 $tmp2370 = (frost$core$Int64) {47};
frost$core$Bit $tmp2371 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2356, $tmp2370);
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2373 = (org$frostlang$frostc$Position*) ($tmp2354->$data + 0);
org$frostlang$frostc$Position $tmp2374 = *$tmp2373;
frost$core$String** $tmp2375 = (frost$core$String**) ($tmp2354->$data + 16);
frost$core$String* $tmp2376 = *$tmp2375;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$String* $tmp2377 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local10) = $tmp2376;
org$frostlang$frostc$ASTNode** $tmp2378 = (org$frostlang$frostc$ASTNode**) ($tmp2354->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2379 = *$tmp2378;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
org$frostlang$frostc$ASTNode* $tmp2380 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local11) = $tmp2379;
// line 700
frost$core$String* $tmp2381 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
frost$core$String* $tmp2382 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
*(&local7) = $tmp2381;
// line 701
org$frostlang$frostc$ASTNode* $tmp2383 = *(&local11);
frost$core$Bit $tmp2384 = frost$core$Bit$init$builtin_bit($tmp2383 != NULL);
bool $tmp2385 = $tmp2384.value;
if ($tmp2385) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2386 = (frost$core$Int64) {701};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2387, $tmp2386, &$s2388);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type* $tmp2389 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2383);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
org$frostlang$frostc$Type* $tmp2390 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local8) = $tmp2389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2389));
// unreffing REF($261:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp2391 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
// unreffing type
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2392 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
// unreffing id
*(&local10) = ((frost$core$String*) NULL);
goto block21;
block25:;
// line 704
frost$core$Bit $tmp2393 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2394 = $tmp2393.value;
if ($tmp2394) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2395 = (frost$core$Int64) {704};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2396, $tmp2395);
abort(); // unreachable
block28:;
goto block21;
block21:;
// line 707
frost$collections$Array* $tmp2397 = *(&local5);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2398 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2399 = *(&local6);
$fn2401 $tmp2400 = ($fn2401) $tmp2399->$class->vtable[2];
org$frostlang$frostc$Position $tmp2402 = $tmp2400($tmp2399);
frost$core$String* $tmp2403 = *(&local0);
frost$core$String* $tmp2404 = *(&local7);
org$frostlang$frostc$Type* $tmp2405 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2398, $tmp2402, $tmp2403, $tmp2404, $tmp2405);
frost$collections$Array$add$frost$collections$Array$T($tmp2397, ((frost$core$Object*) $tmp2398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing REF($293:org.frostlang.frostc.ClassDecl.GenericParameter)
org$frostlang$frostc$Type* $tmp2406 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
// unreffing bound
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2407 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
// unreffing name
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2352);
// unreffing REF($163:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2408 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
// unreffing p
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
// unreffing REF($152:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block15;
block15:;
// line 710
frost$collections$Array* $tmp2409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2409);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$collections$Array* $tmp2410 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local12) = $tmp2409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
// unreffing REF($330:frost.collections.Array<org.frostlang.frostc.Type>)
// line 711
frost$core$Bit $tmp2411 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block30; else goto block31;
block30:;
// line 712
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2413;
$tmp2413 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2413->value = param7;
frost$core$Int64 $tmp2414 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2415 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2414);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2416;
$tmp2416 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2416->value = $tmp2415;
ITable* $tmp2417 = ((frost$core$Equatable*) $tmp2413)->$class->itable;
while ($tmp2417->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2417 = $tmp2417->next;
}
$fn2419 $tmp2418 = $tmp2417->methods[0];
frost$core$Bit $tmp2420 = $tmp2418(((frost$core$Equatable*) $tmp2413), ((frost$core$Equatable*) $tmp2416));
bool $tmp2421 = $tmp2420.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2416)));
// unreffing REF($353:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2413)));
// unreffing REF($349:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2421) goto block32; else goto block33;
block32:;
// line 713
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2422);
goto block33;
block33:;
// line 715
frost$core$Bit $tmp2423 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2425 = (frost$core$Int64) {715};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2426, $tmp2425, &$s2427);
abort(); // unreachable
block34:;
ITable* $tmp2428 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2428->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[0];
frost$collections$Iterator* $tmp2431 = $tmp2429(((frost$collections$Iterable*) param10));
goto block36;
block36:;
ITable* $tmp2432 = $tmp2431->$class->itable;
while ($tmp2432->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2432 = $tmp2432->next;
}
$fn2434 $tmp2433 = $tmp2432->methods[0];
frost$core$Bit $tmp2435 = $tmp2433($tmp2431);
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block38; else goto block37;
block37:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2437 = $tmp2431->$class->itable;
while ($tmp2437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2437 = $tmp2437->next;
}
$fn2439 $tmp2438 = $tmp2437->methods[1];
frost$core$Object* $tmp2440 = $tmp2438($tmp2431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2440)));
org$frostlang$frostc$ASTNode* $tmp2441 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp2440);
// line 716
frost$collections$Array* $tmp2442 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2443 = *(&local13);
org$frostlang$frostc$Type* $tmp2444 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2443);
frost$collections$Array$add$frost$collections$Array$T($tmp2442, ((frost$core$Object*) $tmp2444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
// unreffing REF($401:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2440);
// unreffing REF($389:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2445 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
// unreffing s
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
// unreffing REF($378:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block31;
block31:;
// line 719
org$frostlang$frostc$ClassDecl* $tmp2446 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2447 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2448 = *(&local4);
frost$core$String* $tmp2449 = *(&local0);
frost$collections$Array* $tmp2450 = *(&local12);
frost$collections$Array* $tmp2451 = *(&local5);
frost$core$Weak** $tmp2452 = &param0->compiler;
frost$core$Weak* $tmp2453 = *$tmp2452;
frost$core$Object* $tmp2454 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2453);
org$frostlang$frostc$SymbolTable** $tmp2455 = &((org$frostlang$frostc$Compiler*) $tmp2454)->root;
org$frostlang$frostc$SymbolTable* $tmp2456 = *$tmp2455;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2446, param1, param4, param2, $tmp2447, $tmp2448, param7, $tmp2449, ((frost$collections$ListView*) $tmp2450), $tmp2451, $tmp2456);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
org$frostlang$frostc$ClassDecl* $tmp2457 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local14) = $tmp2446;
frost$core$Frost$unref$frost$core$Object$Q($tmp2454);
// unreffing REF($431:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
// unreffing REF($421:org.frostlang.frostc.ClassDecl)
// line 721
frost$core$Weak** $tmp2458 = &param0->compiler;
frost$core$Weak* $tmp2459 = *$tmp2458;
frost$core$Object* $tmp2460 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2459);
frost$collections$Stack** $tmp2461 = &((org$frostlang$frostc$Compiler*) $tmp2460)->currentClass;
frost$collections$Stack* $tmp2462 = *$tmp2461;
org$frostlang$frostc$ClassDecl* $tmp2463 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2462, ((frost$core$Object*) $tmp2463));
frost$core$Frost$unref$frost$core$Object$Q($tmp2460);
// unreffing REF($453:frost.core.Weak.T)
// line 722
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2464;
$tmp2464 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2464->value = param7;
frost$core$Int64 $tmp2465 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2466 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2465);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2467;
$tmp2467 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2467->value = $tmp2466;
ITable* $tmp2468 = ((frost$core$Equatable*) $tmp2464)->$class->itable;
while ($tmp2468->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2468 = $tmp2468->next;
}
$fn2470 $tmp2469 = $tmp2468->methods[0];
frost$core$Bit $tmp2471 = $tmp2469(((frost$core$Equatable*) $tmp2464), ((frost$core$Equatable*) $tmp2467));
bool $tmp2472 = $tmp2471.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2467)));
// unreffing REF($469:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2464)));
// unreffing REF($465:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2472) goto block39; else goto block40;
block39:;
// line 723
org$frostlang$frostc$FieldDecl* $tmp2473 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2474 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2475 = *(&local14);
org$frostlang$frostc$Position* $tmp2476 = &$tmp2475->position;
org$frostlang$frostc$Position $tmp2477 = *$tmp2476;
org$frostlang$frostc$Annotations* $tmp2478 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2479 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2478, $tmp2479);
frost$core$Int64 $tmp2480 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2481 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2480);
org$frostlang$frostc$Type* $tmp2482 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2473, $tmp2474, $tmp2477, ((frost$core$String*) NULL), $tmp2478, $tmp2481, &$s2483, $tmp2482, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
org$frostlang$frostc$FieldDecl* $tmp2484 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local15) = $tmp2473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
// unreffing REF($491:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
// unreffing REF($486:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
// unreffing REF($481:org.frostlang.frostc.FieldDecl)
// line 726
org$frostlang$frostc$ClassDecl* $tmp2485 = *(&local14);
frost$collections$Array** $tmp2486 = &$tmp2485->fields;
frost$collections$Array* $tmp2487 = *$tmp2486;
org$frostlang$frostc$FieldDecl* $tmp2488 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2487, ((frost$core$Object*) $tmp2488));
// line 727
org$frostlang$frostc$ClassDecl* $tmp2489 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2490 = &$tmp2489->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2491 = *$tmp2490;
org$frostlang$frostc$FieldDecl* $tmp2492 = *(&local15);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2491, ((org$frostlang$frostc$Symbol*) $tmp2492));
// line 728
org$frostlang$frostc$FieldDecl* $tmp2493 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2494 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2495 = *(&local14);
org$frostlang$frostc$Position* $tmp2496 = &$tmp2495->position;
org$frostlang$frostc$Position $tmp2497 = *$tmp2496;
org$frostlang$frostc$Annotations* $tmp2498 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2499 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2498, $tmp2499);
frost$core$Int64 $tmp2500 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2501 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2500);
org$frostlang$frostc$Type* $tmp2502 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2493, $tmp2494, $tmp2497, ((frost$core$String*) NULL), $tmp2498, $tmp2501, &$s2503, $tmp2502, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
org$frostlang$frostc$FieldDecl* $tmp2504 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local16) = $tmp2493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
// unreffing REF($535:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
// unreffing REF($530:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
// unreffing REF($525:org.frostlang.frostc.FieldDecl)
// line 731
org$frostlang$frostc$ClassDecl* $tmp2505 = *(&local14);
frost$collections$Array** $tmp2506 = &$tmp2505->fields;
frost$collections$Array* $tmp2507 = *$tmp2506;
org$frostlang$frostc$FieldDecl* $tmp2508 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2507, ((frost$core$Object*) $tmp2508));
// line 732
org$frostlang$frostc$ClassDecl* $tmp2509 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2510 = &$tmp2509->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2511 = *$tmp2510;
org$frostlang$frostc$FieldDecl* $tmp2512 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2511, ((org$frostlang$frostc$Symbol*) $tmp2512));
org$frostlang$frostc$FieldDecl* $tmp2513 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
// unreffing data
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2514 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
// unreffing rawValue
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block40;
block40:;
// line 734
ITable* $tmp2515 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2515->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2515 = $tmp2515->next;
}
$fn2517 $tmp2516 = $tmp2515->methods[0];
frost$collections$Iterator* $tmp2518 = $tmp2516(((frost$collections$Iterable*) param11));
goto block41;
block41:;
ITable* $tmp2519 = $tmp2518->$class->itable;
while ($tmp2519->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2519 = $tmp2519->next;
}
$fn2521 $tmp2520 = $tmp2519->methods[0];
frost$core$Bit $tmp2522 = $tmp2520($tmp2518);
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block43; else goto block42;
block42:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2524 = $tmp2518->$class->itable;
while ($tmp2524->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2524 = $tmp2524->next;
}
$fn2526 $tmp2525 = $tmp2524->methods[1];
frost$core$Object* $tmp2527 = $tmp2525($tmp2518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2527)));
org$frostlang$frostc$ASTNode* $tmp2528 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2527);
// line 735
org$frostlang$frostc$ASTNode* $tmp2529 = *(&local17);
frost$core$Int64* $tmp2530 = &$tmp2529->$rawValue;
frost$core$Int64 $tmp2531 = *$tmp2530;
frost$core$Int64 $tmp2532 = (frost$core$Int64) {29};
frost$core$Bit $tmp2533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2531, $tmp2532);
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Position* $tmp2535 = (org$frostlang$frostc$Position*) ($tmp2529->$data + 0);
org$frostlang$frostc$Position $tmp2536 = *$tmp2535;
*(&local18) = $tmp2536;
org$frostlang$frostc$ASTNode** $tmp2537 = (org$frostlang$frostc$ASTNode**) ($tmp2529->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2538 = *$tmp2537;
org$frostlang$frostc$FixedArray** $tmp2539 = (org$frostlang$frostc$FixedArray**) ($tmp2529->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2540 = *$tmp2539;
org$frostlang$frostc$MethodDecl$Kind* $tmp2541 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2529->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2542 = *$tmp2541;
*(&local19) = $tmp2542;
frost$core$String** $tmp2543 = (frost$core$String**) ($tmp2529->$data + 40);
frost$core$String* $tmp2544 = *$tmp2543;
org$frostlang$frostc$FixedArray** $tmp2545 = (org$frostlang$frostc$FixedArray**) ($tmp2529->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2546 = *$tmp2545;
org$frostlang$frostc$FixedArray** $tmp2547 = (org$frostlang$frostc$FixedArray**) ($tmp2529->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2548 = *$tmp2547;
org$frostlang$frostc$ASTNode** $tmp2549 = (org$frostlang$frostc$ASTNode**) ($tmp2529->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2550 = *$tmp2549;
org$frostlang$frostc$FixedArray** $tmp2551 = (org$frostlang$frostc$FixedArray**) ($tmp2529->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2552 = *$tmp2551;
// line 737
org$frostlang$frostc$MethodDecl$Kind $tmp2553 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2554;
$tmp2554 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2554->value = $tmp2553;
frost$core$Int64 $tmp2555 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2556 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2555);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2557;
$tmp2557 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2557->value = $tmp2556;
ITable* $tmp2558 = ((frost$core$Equatable*) $tmp2554)->$class->itable;
while ($tmp2558->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2558 = $tmp2558->next;
}
$fn2560 $tmp2559 = $tmp2558->methods[0];
frost$core$Bit $tmp2561 = $tmp2559(((frost$core$Equatable*) $tmp2554), ((frost$core$Equatable*) $tmp2557));
bool $tmp2562 = $tmp2561.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2557)));
// unreffing REF($636:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2554)));
// unreffing REF($632:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp2562) goto block47; else goto block48;
block47:;
// line 738
frost$core$Int64 $tmp2563 = param7.$rawValue;
frost$core$Int64 $tmp2564 = (frost$core$Int64) {0};
frost$core$Bit $tmp2565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2563, $tmp2564);
bool $tmp2566 = $tmp2565.value;
if ($tmp2566) goto block50; else goto block51;
block50:;
goto block49;
block51:;
frost$core$Int64 $tmp2567 = (frost$core$Int64) {1};
frost$core$Bit $tmp2568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2563, $tmp2567);
bool $tmp2569 = $tmp2568.value;
if ($tmp2569) goto block52; else goto block53;
block52:;
// line 743
org$frostlang$frostc$Position $tmp2570 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2570, &$s2571);
goto block49;
block53:;
frost$core$Int64 $tmp2572 = (frost$core$Int64) {2};
frost$core$Bit $tmp2573 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2563, $tmp2572);
bool $tmp2574 = $tmp2573.value;
if ($tmp2574) goto block54; else goto block49;
block54:;
// line 746
org$frostlang$frostc$Position $tmp2575 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2575, &$s2576);
goto block49;
block49:;
goto block48;
block48:;
goto block44;
block46:;
goto block44;
block44:;
// line 755
org$frostlang$frostc$ClassDecl* $tmp2577 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2578 = *(&local17);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp2577, $tmp2578);
frost$core$Frost$unref$frost$core$Object$Q($tmp2527);
// unreffing REF($594:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2579 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
// unreffing m
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
// unreffing REF($583:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 757
frost$core$Bit $tmp2580 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2580;
// line 758
frost$core$Bit $tmp2581 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2581;
// line 759
org$frostlang$frostc$ClassDecl* $tmp2582 = *(&local14);
frost$collections$Array** $tmp2583 = &$tmp2582->methods;
frost$collections$Array* $tmp2584 = *$tmp2583;
ITable* $tmp2585 = ((frost$collections$Iterable*) $tmp2584)->$class->itable;
while ($tmp2585->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2585 = $tmp2585->next;
}
$fn2587 $tmp2586 = $tmp2585->methods[0];
frost$collections$Iterator* $tmp2588 = $tmp2586(((frost$collections$Iterable*) $tmp2584));
goto block55;
block55:;
ITable* $tmp2589 = $tmp2588->$class->itable;
while ($tmp2589->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2589 = $tmp2589->next;
}
$fn2591 $tmp2590 = $tmp2589->methods[0];
frost$core$Bit $tmp2592 = $tmp2590($tmp2588);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block57; else goto block56;
block56:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2594 = $tmp2588->$class->itable;
while ($tmp2594->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2594 = $tmp2594->next;
}
$fn2596 $tmp2595 = $tmp2594->methods[1];
frost$core$Object* $tmp2597 = $tmp2595($tmp2588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2597)));
org$frostlang$frostc$MethodDecl* $tmp2598 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp2597);
// line 760
org$frostlang$frostc$MethodDecl* $tmp2599 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind* $tmp2600 = &$tmp2599->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2601 = *$tmp2600;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2602;
$tmp2602 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2602->value = $tmp2601;
frost$core$Int64 $tmp2603 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2604 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2603);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2605;
$tmp2605 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2605->value = $tmp2604;
ITable* $tmp2606 = ((frost$core$Equatable*) $tmp2602)->$class->itable;
while ($tmp2606->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2606 = $tmp2606->next;
}
$fn2608 $tmp2607 = $tmp2606->methods[0];
frost$core$Bit $tmp2609 = $tmp2607(((frost$core$Equatable*) $tmp2602), ((frost$core$Equatable*) $tmp2605));
bool $tmp2610 = $tmp2609.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2605)));
// unreffing REF($729:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2602)));
// unreffing REF($725:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp2610) goto block58; else goto block59;
block58:;
// line 761
frost$core$Bit $tmp2611 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2611;
goto block59;
block59:;
// line 763
org$frostlang$frostc$MethodDecl* $tmp2612 = *(&local22);
frost$core$String** $tmp2613 = &((org$frostlang$frostc$Symbol*) $tmp2612)->name;
frost$core$String* $tmp2614 = *$tmp2613;
frost$core$Bit $tmp2615 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2614, &$s2616);
bool $tmp2617 = $tmp2615.value;
if ($tmp2617) goto block62; else goto block63;
block62:;
org$frostlang$frostc$MethodDecl* $tmp2618 = *(&local22);
frost$collections$Array** $tmp2619 = &$tmp2618->parameters;
frost$collections$Array* $tmp2620 = *$tmp2619;
ITable* $tmp2621 = ((frost$collections$CollectionView*) $tmp2620)->$class->itable;
while ($tmp2621->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2621 = $tmp2621->next;
}
$fn2623 $tmp2622 = $tmp2621->methods[0];
frost$core$Int64 $tmp2624 = $tmp2622(((frost$collections$CollectionView*) $tmp2620));
frost$core$Int64 $tmp2625 = (frost$core$Int64) {0};
frost$core$Bit $tmp2626 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2624, $tmp2625);
*(&local23) = $tmp2626;
goto block64;
block63:;
*(&local23) = $tmp2615;
goto block64;
block64:;
frost$core$Bit $tmp2627 = *(&local23);
bool $tmp2628 = $tmp2627.value;
if ($tmp2628) goto block60; else goto block61;
block60:;
// line 764
frost$core$Bit $tmp2629 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2629;
// line 765
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2630;
$tmp2630 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2630->value = param7;
frost$core$Int64 $tmp2631 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2632 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2631);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2633;
$tmp2633 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2633->value = $tmp2632;
ITable* $tmp2634 = ((frost$core$Equatable*) $tmp2630)->$class->itable;
while ($tmp2634->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2634 = $tmp2634->next;
}
$fn2636 $tmp2635 = $tmp2634->methods[0];
frost$core$Bit $tmp2637 = $tmp2635(((frost$core$Equatable*) $tmp2630), ((frost$core$Equatable*) $tmp2633));
bool $tmp2638 = $tmp2637.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2633)));
// unreffing REF($775:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2630)));
// unreffing REF($771:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2638) goto block65; else goto block66;
block65:;
// line 766
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2639);
goto block66;
block66:;
goto block61;
block61:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2597);
// unreffing REF($713:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp2640 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
// unreffing m
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block55;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
// unreffing REF($702:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 770
frost$core$Bit $tmp2641 = *(&local20);
frost$core$Bit $tmp2642 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2641);
bool $tmp2643 = $tmp2642.value;
if ($tmp2643) goto block69; else goto block70;
block69:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2644;
$tmp2644 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2644->value = param7;
frost$core$Int64 $tmp2645 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2646 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2645);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2647;
$tmp2647 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2647->value = $tmp2646;
ITable* $tmp2648 = ((frost$core$Equatable*) $tmp2644)->$class->itable;
while ($tmp2648->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2648 = $tmp2648->next;
}
$fn2650 $tmp2649 = $tmp2648->methods[0];
frost$core$Bit $tmp2651 = $tmp2649(((frost$core$Equatable*) $tmp2644), ((frost$core$Equatable*) $tmp2647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2647)));
// unreffing REF($811:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2644)));
// unreffing REF($807:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local25) = $tmp2651;
goto block71;
block70:;
*(&local25) = $tmp2642;
goto block71;
block71:;
frost$core$Bit $tmp2652 = *(&local25);
bool $tmp2653 = $tmp2652.value;
if ($tmp2653) goto block72; else goto block73;
block72:;
org$frostlang$frostc$ClassDecl* $tmp2654 = *(&local14);
frost$core$String** $tmp2655 = &$tmp2654->name;
frost$core$String* $tmp2656 = *$tmp2655;
ITable* $tmp2658 = ((frost$core$Equatable*) $tmp2656)->$class->itable;
while ($tmp2658->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2658 = $tmp2658->next;
}
$fn2660 $tmp2659 = $tmp2658->methods[1];
frost$core$Bit $tmp2661 = $tmp2659(((frost$core$Equatable*) $tmp2656), ((frost$core$Equatable*) &$s2657));
*(&local24) = $tmp2661;
goto block74;
block73:;
*(&local24) = $tmp2652;
goto block74;
block74:;
frost$core$Bit $tmp2662 = *(&local24);
bool $tmp2663 = $tmp2662.value;
if ($tmp2663) goto block67; else goto block68;
block67:;
// line 771
org$frostlang$frostc$MethodDecl* $tmp2664 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2665 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2666 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2667 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2666, $tmp2667);
frost$core$Int64 $tmp2668 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2669 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2668);
frost$collections$Array* $tmp2670 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2671 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2670, $tmp2671);
org$frostlang$frostc$Type* $tmp2672 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2673 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2673);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2664, $tmp2665, param4, ((frost$core$String*) NULL), $tmp2666, $tmp2669, &$s2674, ((frost$collections$Array*) NULL), $tmp2670, $tmp2672, $tmp2673);
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
org$frostlang$frostc$MethodDecl* $tmp2675 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
*(&local26) = $tmp2664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
// unreffing REF($855:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
// unreffing REF($854:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
// unreffing REF($850:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
// unreffing REF($845:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// unreffing REF($843:org.frostlang.frostc.MethodDecl)
// line 774
org$frostlang$frostc$ClassDecl* $tmp2676 = *(&local14);
frost$collections$Array** $tmp2677 = &$tmp2676->methods;
frost$collections$Array* $tmp2678 = *$tmp2677;
org$frostlang$frostc$MethodDecl* $tmp2679 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2678, ((frost$core$Object*) $tmp2679));
// line 775
org$frostlang$frostc$ClassDecl* $tmp2680 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2681 = &$tmp2680->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2682 = *$tmp2681;
org$frostlang$frostc$MethodDecl* $tmp2683 = *(&local26);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2682, ((org$frostlang$frostc$Symbol*) $tmp2683));
org$frostlang$frostc$MethodDecl* $tmp2684 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// unreffing defaultInit
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block68;
block68:;
// line 777
frost$core$Bit $tmp2685 = *(&local21);
frost$core$Bit $tmp2686 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block77; else goto block78;
block77:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2688;
$tmp2688 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2688->value = param7;
frost$core$Int64 $tmp2689 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2690 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2689);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2691;
$tmp2691 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2691->value = $tmp2690;
ITable* $tmp2692 = ((frost$core$Equatable*) $tmp2688)->$class->itable;
while ($tmp2692->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2692 = $tmp2692->next;
}
$fn2694 $tmp2693 = $tmp2692->methods[0];
frost$core$Bit $tmp2695 = $tmp2693(((frost$core$Equatable*) $tmp2688), ((frost$core$Equatable*) $tmp2691));
bool $tmp2696 = $tmp2695.value;
if ($tmp2696) goto block80; else goto block81;
block80:;
*(&local29) = $tmp2695;
goto block82;
block81:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2697;
$tmp2697 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2697->value = param7;
frost$core$Int64 $tmp2698 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2699 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2698);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2700;
$tmp2700 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2700->value = $tmp2699;
ITable* $tmp2701 = ((frost$core$Equatable*) $tmp2697)->$class->itable;
while ($tmp2701->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2701 = $tmp2701->next;
}
$fn2703 $tmp2702 = $tmp2701->methods[0];
frost$core$Bit $tmp2704 = $tmp2702(((frost$core$Equatable*) $tmp2697), ((frost$core$Equatable*) $tmp2700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2700)));
// unreffing REF($923:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2697)));
// unreffing REF($919:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local29) = $tmp2704;
goto block82;
block82:;
frost$core$Bit $tmp2705 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2691)));
// unreffing REF($912:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2688)));
// unreffing REF($908:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local28) = $tmp2705;
goto block79;
block78:;
*(&local28) = $tmp2686;
goto block79;
block79:;
frost$core$Bit $tmp2706 = *(&local28);
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block83; else goto block84;
block83:;
org$frostlang$frostc$ClassDecl* $tmp2708 = *(&local14);
frost$core$String** $tmp2709 = &$tmp2708->name;
frost$core$String* $tmp2710 = *$tmp2709;
ITable* $tmp2712 = ((frost$core$Equatable*) $tmp2710)->$class->itable;
while ($tmp2712->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2712 = $tmp2712->next;
}
$fn2714 $tmp2713 = $tmp2712->methods[1];
frost$core$Bit $tmp2715 = $tmp2713(((frost$core$Equatable*) $tmp2710), ((frost$core$Equatable*) &$s2711));
*(&local27) = $tmp2715;
goto block85;
block84:;
*(&local27) = $tmp2706;
goto block85;
block85:;
frost$core$Bit $tmp2716 = *(&local27);
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block75; else goto block76;
block75:;
// line 779
org$frostlang$frostc$MethodDecl* $tmp2718 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2719 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2720 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2721 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2722 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2723 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2721, $tmp2722);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2720, $tmp2723);
frost$core$Int64 $tmp2724 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2725 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2724);
frost$collections$Array* $tmp2726 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2727 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2726, $tmp2727);
org$frostlang$frostc$Type* $tmp2728 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2729 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2729);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2718, $tmp2719, param4, ((frost$core$String*) NULL), $tmp2720, $tmp2725, &$s2730, ((frost$collections$Array*) NULL), $tmp2726, $tmp2728, $tmp2729);
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
org$frostlang$frostc$MethodDecl* $tmp2731 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local30) = $tmp2718;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// unreffing REF($978:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
// unreffing REF($977:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// unreffing REF($973:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
// unreffing REF($966:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
// unreffing REF($964:org.frostlang.frostc.MethodDecl)
// line 782
org$frostlang$frostc$ClassDecl* $tmp2732 = *(&local14);
frost$collections$Array** $tmp2733 = &$tmp2732->methods;
frost$collections$Array* $tmp2734 = *$tmp2733;
org$frostlang$frostc$MethodDecl* $tmp2735 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp2734, ((frost$core$Object*) $tmp2735));
// line 783
org$frostlang$frostc$ClassDecl* $tmp2736 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2737 = &$tmp2736->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2738 = *$tmp2737;
org$frostlang$frostc$MethodDecl* $tmp2739 = *(&local30);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2738, ((org$frostlang$frostc$Symbol*) $tmp2739));
org$frostlang$frostc$MethodDecl* $tmp2740 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
// unreffing defaultCleanup
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block76;
block76:;
// line 785
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2741;
$tmp2741 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2741->value = param7;
frost$core$Int64 $tmp2742 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2743 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2742);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2744;
$tmp2744 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2744->value = $tmp2743;
ITable* $tmp2745 = ((frost$core$Equatable*) $tmp2741)->$class->itable;
while ($tmp2745->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2745 = $tmp2745->next;
}
$fn2747 $tmp2746 = $tmp2745->methods[0];
frost$core$Bit $tmp2748 = $tmp2746(((frost$core$Equatable*) $tmp2741), ((frost$core$Equatable*) $tmp2744));
bool $tmp2749 = $tmp2748.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2744)));
// unreffing REF($1031:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2741)));
// unreffing REF($1027:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2749) goto block86; else goto block87;
block86:;
// line 786
frost$core$Bit $tmp2750 = frost$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2750;
// line 787
org$frostlang$frostc$ClassDecl* $tmp2751 = *(&local14);
frost$collections$Array** $tmp2752 = &$tmp2751->choiceCases;
frost$collections$Array* $tmp2753 = *$tmp2752;
ITable* $tmp2754 = ((frost$collections$CollectionView*) $tmp2753)->$class->itable;
while ($tmp2754->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2754 = $tmp2754->next;
}
$fn2756 $tmp2755 = $tmp2754->methods[0];
frost$core$Int64 $tmp2757 = $tmp2755(((frost$collections$CollectionView*) $tmp2753));
frost$core$Int64 $tmp2758 = (frost$core$Int64) {0};
int64_t $tmp2759 = $tmp2757.value;
int64_t $tmp2760 = $tmp2758.value;
bool $tmp2761 = $tmp2759 > $tmp2760;
frost$core$Bit $tmp2762 = (frost$core$Bit) {$tmp2761};
bool $tmp2763 = $tmp2762.value;
if ($tmp2763) goto block88; else goto block90;
block88:;
// line 788
org$frostlang$frostc$ClassDecl* $tmp2764 = *(&local14);
frost$collections$Array** $tmp2765 = &$tmp2764->choiceCases;
frost$collections$Array* $tmp2766 = *$tmp2765;
ITable* $tmp2767 = ((frost$collections$Iterable*) $tmp2766)->$class->itable;
while ($tmp2767->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2767 = $tmp2767->next;
}
$fn2769 $tmp2768 = $tmp2767->methods[0];
frost$collections$Iterator* $tmp2770 = $tmp2768(((frost$collections$Iterable*) $tmp2766));
goto block91;
block91:;
ITable* $tmp2771 = $tmp2770->$class->itable;
while ($tmp2771->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2771 = $tmp2771->next;
}
$fn2773 $tmp2772 = $tmp2771->methods[0];
frost$core$Bit $tmp2774 = $tmp2772($tmp2770);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block93; else goto block92;
block92:;
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp2776 = $tmp2770->$class->itable;
while ($tmp2776->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2776 = $tmp2776->next;
}
$fn2778 $tmp2777 = $tmp2776->methods[1];
frost$core$Object* $tmp2779 = $tmp2777($tmp2770);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp2779)));
org$frostlang$frostc$ChoiceCase* $tmp2780 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) $tmp2779);
// line 789
org$frostlang$frostc$ChoiceCase* $tmp2781 = *(&local32);
frost$collections$Array** $tmp2782 = &$tmp2781->fields;
frost$collections$Array* $tmp2783 = *$tmp2782;
ITable* $tmp2784 = ((frost$collections$CollectionView*) $tmp2783)->$class->itable;
while ($tmp2784->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2784 = $tmp2784->next;
}
$fn2786 $tmp2785 = $tmp2784->methods[0];
frost$core$Int64 $tmp2787 = $tmp2785(((frost$collections$CollectionView*) $tmp2783));
frost$core$Int64 $tmp2788 = (frost$core$Int64) {0};
int64_t $tmp2789 = $tmp2787.value;
int64_t $tmp2790 = $tmp2788.value;
bool $tmp2791 = $tmp2789 > $tmp2790;
frost$core$Bit $tmp2792 = (frost$core$Bit) {$tmp2791};
bool $tmp2793 = $tmp2792.value;
if ($tmp2793) goto block94; else goto block95;
block94:;
// line 790
frost$core$Bit $tmp2794 = frost$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2794;
// line 791
frost$core$Frost$unref$frost$core$Object$Q($tmp2779);
// unreffing REF($1077:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp2795 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
// unreffing e
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2779);
// unreffing REF($1077:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp2796 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
// unreffing e
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
// unreffing REF($1066:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block89;
block90:;
// line 1
// line 796
org$frostlang$frostc$ClassDecl* $tmp2797 = *(&local14);
org$frostlang$frostc$Position* $tmp2798 = &$tmp2797->position;
org$frostlang$frostc$Position $tmp2799 = *$tmp2798;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2799, &$s2800);
// line 797
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2801 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
// unreffing result
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2802 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2803 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2804 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
// unreffing annotations
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2805 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2806 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block89:;
// line 799
frost$core$Bit $tmp2807 = *(&local31);
frost$core$Bit $tmp2808 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2807);
bool $tmp2809 = $tmp2808.value;
if ($tmp2809) goto block96; else goto block97;
block96:;
// line 800
org$frostlang$frostc$ClassDecl* $tmp2810 = *(&local14);
org$frostlang$frostc$Type* $tmp2811 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$Type** $tmp2812 = &$tmp2810->rawSuper;
org$frostlang$frostc$Type* $tmp2813 = *$tmp2812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
org$frostlang$frostc$Type** $tmp2814 = &$tmp2810->rawSuper;
*$tmp2814 = $tmp2811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// unreffing REF($1172:org.frostlang.frostc.Type)
goto block97;
block97:;
goto block87;
block87:;
// line 803
frost$core$Weak** $tmp2815 = &param0->compiler;
frost$core$Weak* $tmp2816 = *$tmp2815;
frost$core$Object* $tmp2817 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2816);
frost$collections$Stack** $tmp2818 = &((org$frostlang$frostc$Compiler*) $tmp2817)->currentClass;
frost$collections$Stack* $tmp2819 = *$tmp2818;
frost$core$Object* $tmp2820 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2819);
frost$core$Frost$unref$frost$core$Object$Q($tmp2820);
// unreffing REF($1196:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp2817);
// unreffing REF($1191:frost.core.Weak.T)
// line 804
org$frostlang$frostc$ClassDecl* $tmp2821 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
org$frostlang$frostc$ClassDecl* $tmp2822 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
// unreffing result
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2823 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2824 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2825 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
// unreffing annotations
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2827 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return $tmp2821;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 808
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 809
frost$collections$Array** $tmp2828 = &param1->classes;
frost$collections$Array* $tmp2829 = *$tmp2828;
ITable* $tmp2830 = ((frost$collections$Iterable*) $tmp2829)->$class->itable;
while ($tmp2830->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2830 = $tmp2830->next;
}
$fn2832 $tmp2831 = $tmp2830->methods[0];
frost$collections$Iterator* $tmp2833 = $tmp2831(((frost$collections$Iterable*) $tmp2829));
goto block1;
block1:;
ITable* $tmp2834 = $tmp2833->$class->itable;
while ($tmp2834->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2834 = $tmp2834->next;
}
$fn2836 $tmp2835 = $tmp2834->methods[0];
frost$core$Bit $tmp2837 = $tmp2835($tmp2833);
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp2839 = $tmp2833->$class->itable;
while ($tmp2839->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2839 = $tmp2839->next;
}
$fn2841 $tmp2840 = $tmp2839->methods[1];
frost$core$Object* $tmp2842 = $tmp2840($tmp2833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2842)));
org$frostlang$frostc$ClassDecl* $tmp2843 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2842);
// line 810
org$frostlang$frostc$ClassDecl* $tmp2844 = *(&local0);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2844, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2842);
// unreffing REF($21:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp2845 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
// unreffing inner
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
// unreffing REF($10:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 816
org$frostlang$frostc$ClassDecl** $tmp2846 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2847 = *$tmp2846;
frost$core$Bit $tmp2848 = frost$core$Bit$init$builtin_bit($tmp2847 == NULL);
bool $tmp2849 = $tmp2848.value;
if ($tmp2849) goto block1; else goto block2;
block1:;
// line 817
*(&local0) = ((frost$core$String*) NULL);
// line 818
ITable* $tmp2851 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2851->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2851 = $tmp2851->next;
}
$fn2853 $tmp2852 = $tmp2851->methods[1];
frost$core$Bit $tmp2854 = $tmp2852(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2850));
bool $tmp2855 = $tmp2854.value;
if ($tmp2855) goto block3; else goto block5;
block3:;
// line 819
frost$core$String* $tmp2856 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2857 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2856, &$s2858);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
frost$core$String* $tmp2859 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2859));
*(&local0) = $tmp2857;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
// unreffing REF($18:frost.core.String)
goto block4;
block5:;
// line 1
// line 822
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2860));
frost$core$String* $tmp2861 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
*(&local0) = &$s2862;
goto block4;
block4:;
// line 824
org$frostlang$frostc$ClassDecl* $tmp2863 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp2864 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2865 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp2865);
frost$core$Int64 $tmp2866 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2867 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2866);
frost$core$String* $tmp2868 = *(&local0);
frost$collections$Array* $tmp2869 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2869);
frost$collections$Array* $tmp2870 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2870);
frost$core$Weak** $tmp2871 = &param0->compiler;
frost$core$Weak* $tmp2872 = *$tmp2871;
frost$core$Object* $tmp2873 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2872);
org$frostlang$frostc$SymbolTable** $tmp2874 = &((org$frostlang$frostc$Compiler*) $tmp2873)->root;
org$frostlang$frostc$SymbolTable* $tmp2875 = *$tmp2874;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2863, param1, $tmp2864, param2, ((frost$core$String*) NULL), $tmp2865, $tmp2867, $tmp2868, ((frost$collections$ListView*) $tmp2869), $tmp2870, $tmp2875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
org$frostlang$frostc$ClassDecl** $tmp2876 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2877 = *$tmp2876;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
org$frostlang$frostc$ClassDecl** $tmp2878 = &param0->bareCodeClass;
*$tmp2878 = $tmp2863;
frost$core$Frost$unref$frost$core$Object$Q($tmp2873);
// unreffing REF($60:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
// unreffing REF($54:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
// unreffing REF($50:frost.collections.Array<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// unreffing REF($45:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// unreffing REF($43:org.frostlang.frostc.ClassDecl)
// line 827
org$frostlang$frostc$ClassDecl** $tmp2879 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2880 = *$tmp2879;
frost$core$Bit $tmp2881 = frost$core$Bit$init$builtin_bit($tmp2880 != NULL);
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {827};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2884, $tmp2883, &$s2885);
abort(); // unreachable
block6:;
ITable* $tmp2886 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2886->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2886 = $tmp2886->next;
}
$fn2888 $tmp2887 = $tmp2886->methods[0];
$tmp2887(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2880));
// line 828
org$frostlang$frostc$MethodDecl* $tmp2889 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2890 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2891 = *$tmp2890;
frost$core$Bit $tmp2892 = frost$core$Bit$init$builtin_bit($tmp2891 != NULL);
bool $tmp2893 = $tmp2892.value;
if ($tmp2893) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2894 = (frost$core$Int64) {828};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2895, $tmp2894, &$s2896);
abort(); // unreachable
block8:;
org$frostlang$frostc$Position $tmp2897 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2898 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2899 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2898, $tmp2899);
frost$core$Int64 $tmp2900 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2901 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2900);
frost$collections$Array* $tmp2902 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2903 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2902, $tmp2903);
org$frostlang$frostc$Type* $tmp2904 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2905 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2905);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2889, $tmp2891, $tmp2897, ((frost$core$String*) NULL), $tmp2898, $tmp2901, &$s2906, ((frost$collections$Array*) NULL), $tmp2902, $tmp2904, $tmp2905);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
org$frostlang$frostc$MethodDecl* $tmp2907 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local1) = $tmp2889;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
// unreffing REF($127:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
// unreffing REF($126:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
// unreffing REF($122:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
// unreffing REF($117:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
// unreffing REF($105:org.frostlang.frostc.MethodDecl)
// line 831
org$frostlang$frostc$ClassDecl** $tmp2908 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2909 = *$tmp2908;
frost$core$Bit $tmp2910 = frost$core$Bit$init$builtin_bit($tmp2909 != NULL);
bool $tmp2911 = $tmp2910.value;
if ($tmp2911) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2912 = (frost$core$Int64) {831};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2913, $tmp2912, &$s2914);
abort(); // unreachable
block10:;
frost$collections$Array** $tmp2915 = &$tmp2909->methods;
frost$collections$Array* $tmp2916 = *$tmp2915;
org$frostlang$frostc$MethodDecl* $tmp2917 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2916, ((frost$core$Object*) $tmp2917));
// line 832
org$frostlang$frostc$ClassDecl** $tmp2918 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2919 = *$tmp2918;
frost$core$Bit $tmp2920 = frost$core$Bit$init$builtin_bit($tmp2919 != NULL);
bool $tmp2921 = $tmp2920.value;
if ($tmp2921) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2922 = (frost$core$Int64) {832};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2923, $tmp2922, &$s2924);
abort(); // unreachable
block12:;
org$frostlang$frostc$SymbolTable** $tmp2925 = &$tmp2919->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2926 = *$tmp2925;
org$frostlang$frostc$MethodDecl* $tmp2927 = *(&local1);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2926, ((org$frostlang$frostc$Symbol*) $tmp2927));
// line 833
org$frostlang$frostc$MethodDecl* $tmp2928 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2929 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2930 = *$tmp2929;
frost$core$Bit $tmp2931 = frost$core$Bit$init$builtin_bit($tmp2930 != NULL);
bool $tmp2932 = $tmp2931.value;
if ($tmp2932) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp2933 = (frost$core$Int64) {833};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2934, $tmp2933, &$s2935);
abort(); // unreachable
block14:;
org$frostlang$frostc$Position $tmp2936 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2937 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2938 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2939 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2940 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2938, $tmp2939);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2937, $tmp2940);
frost$core$Int64 $tmp2941 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2942 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2941);
frost$collections$Array* $tmp2943 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2944 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2943, $tmp2944);
org$frostlang$frostc$Type* $tmp2945 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2946 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2946);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2928, $tmp2930, $tmp2936, ((frost$core$String*) NULL), $tmp2937, $tmp2942, &$s2947, ((frost$collections$Array*) NULL), $tmp2943, $tmp2945, $tmp2946);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
org$frostlang$frostc$MethodDecl* $tmp2948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local2) = $tmp2928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
// unreffing REF($212:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
// unreffing REF($211:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// unreffing REF($207:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
// unreffing REF($200:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// unreffing REF($188:org.frostlang.frostc.MethodDecl)
// line 836
org$frostlang$frostc$ClassDecl** $tmp2949 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2950 = *$tmp2949;
frost$core$Bit $tmp2951 = frost$core$Bit$init$builtin_bit($tmp2950 != NULL);
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2953 = (frost$core$Int64) {836};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2954, $tmp2953, &$s2955);
abort(); // unreachable
block16:;
frost$collections$Array** $tmp2956 = &$tmp2950->methods;
frost$collections$Array* $tmp2957 = *$tmp2956;
org$frostlang$frostc$MethodDecl* $tmp2958 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2957, ((frost$core$Object*) $tmp2958));
// line 837
org$frostlang$frostc$ClassDecl** $tmp2959 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2960 = *$tmp2959;
frost$core$Bit $tmp2961 = frost$core$Bit$init$builtin_bit($tmp2960 != NULL);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2963 = (frost$core$Int64) {837};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2964, $tmp2963, &$s2965);
abort(); // unreachable
block18:;
org$frostlang$frostc$SymbolTable** $tmp2966 = &$tmp2960->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2967 = *$tmp2966;
org$frostlang$frostc$MethodDecl* $tmp2968 = *(&local2);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2967, ((org$frostlang$frostc$Symbol*) $tmp2968));
org$frostlang$frostc$MethodDecl* $tmp2969 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
// unreffing defaultCleanup
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2970 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
// unreffing defaultInit
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2971 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2972 = &param0->source;
frost$io$File* $tmp2973 = *$tmp2972;
frost$core$Bit $tmp2974 = frost$core$Bit$init$builtin_bit($tmp2973 != NULL);
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2976 = (frost$core$Int64) {842};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2977, $tmp2976, &$s2978);
abort(); // unreachable
block1:;
// line 843
frost$core$Weak** $tmp2979 = &param0->compiler;
frost$core$Weak* $tmp2980 = *$tmp2979;
frost$core$Object* $tmp2981 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2980);
frost$io$File** $tmp2982 = &param0->source;
frost$io$File* $tmp2983 = *$tmp2982;
frost$core$Bit $tmp2984 = frost$core$Bit$init$builtin_bit($tmp2983 != NULL);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp2986 = (frost$core$Int64) {843};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2987, $tmp2986, &$s2988);
abort(); // unreachable
block3:;
org$frostlang$frostc$Compiler$error$frost$io$File$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2981), $tmp2983, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2981);
// unreffing REF($13:frost.core.Weak.T)
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
// line 847
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2989 = &param0->source;
frost$io$File* $tmp2990 = *$tmp2989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
frost$io$File** $tmp2991 = &param0->source;
*$tmp2991 = param1;
// line 848
frost$core$Int64* $tmp2992 = &param2->$rawValue;
frost$core$Int64 $tmp2993 = *$tmp2992;
frost$core$Int64 $tmp2994 = (frost$core$Int64) {19};
frost$core$Bit $tmp2995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2993, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block2; else goto block3;
block2:;
org$frostlang$frostc$FixedArray** $tmp2997 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2998 = *$tmp2997;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
org$frostlang$frostc$FixedArray* $tmp2999 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local0) = $tmp2998;
// line 850
frost$collections$Array* $tmp3000 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3000);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
frost$collections$Array* $tmp3001 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
*(&local1) = $tmp3000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
// unreffing REF($27:frost.collections.Array<org.frostlang.frostc.ClassDecl>)
// line 851
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3002));
frost$core$String* $tmp3003 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3003));
*(&local2) = &$s3004;
// line 852
frost$collections$HashMap* $tmp3005 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp3005);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
frost$collections$HashMap* $tmp3006 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
*(&local3) = $tmp3005;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
// unreffing REF($49:frost.collections.HashMap<frost.core.String, frost.core.String>)
// line 853
org$frostlang$frostc$FixedArray* $tmp3007 = *(&local0);
ITable* $tmp3008 = ((frost$collections$Iterable*) $tmp3007)->$class->itable;
while ($tmp3008->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3008 = $tmp3008->next;
}
$fn3010 $tmp3009 = $tmp3008->methods[0];
frost$collections$Iterator* $tmp3011 = $tmp3009(((frost$collections$Iterable*) $tmp3007));
goto block4;
block4:;
ITable* $tmp3012 = $tmp3011->$class->itable;
while ($tmp3012->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3012 = $tmp3012->next;
}
$fn3014 $tmp3013 = $tmp3012->methods[0];
frost$core$Bit $tmp3015 = $tmp3013($tmp3011);
bool $tmp3016 = $tmp3015.value;
if ($tmp3016) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3017 = $tmp3011->$class->itable;
while ($tmp3017->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3017 = $tmp3017->next;
}
$fn3019 $tmp3018 = $tmp3017->methods[1];
frost$core$Object* $tmp3020 = $tmp3018($tmp3011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3020)));
org$frostlang$frostc$ASTNode* $tmp3021 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp3020);
// line 854
org$frostlang$frostc$ASTNode* $tmp3022 = *(&local4);
frost$core$Int64* $tmp3023 = &$tmp3022->$rawValue;
frost$core$Int64 $tmp3024 = *$tmp3023;
frost$core$Int64 $tmp3025 = (frost$core$Int64) {33};
frost$core$Bit $tmp3026 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3024, $tmp3025);
bool $tmp3027 = $tmp3026.value;
if ($tmp3027) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3028 = (org$frostlang$frostc$Position*) ($tmp3022->$data + 0);
org$frostlang$frostc$Position $tmp3029 = *$tmp3028;
frost$core$String** $tmp3030 = (frost$core$String**) ($tmp3022->$data + 16);
frost$core$String* $tmp3031 = *$tmp3030;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
frost$core$String* $tmp3032 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
*(&local5) = $tmp3031;
// line 856
frost$core$String* $tmp3033 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
frost$core$String* $tmp3034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local2) = $tmp3033;
frost$core$String* $tmp3035 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp3036 = (frost$core$Int64) {50};
frost$core$Bit $tmp3037 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3024, $tmp3036);
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp3039 = (org$frostlang$frostc$Position*) ($tmp3022->$data + 0);
org$frostlang$frostc$Position $tmp3040 = *$tmp3039;
frost$core$String** $tmp3041 = (frost$core$String**) ($tmp3022->$data + 16);
frost$core$String* $tmp3042 = *$tmp3041;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
frost$core$String* $tmp3043 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local6) = $tmp3042;
// line 859
frost$core$String* $tmp3044 = *(&local6);
frost$core$String$Index$nullable $tmp3045 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp3044, &$s3046);
*(&local7) = $tmp3045;
// line 860
*(&local8) = ((frost$core$String*) NULL);
// line 861
frost$core$String$Index$nullable $tmp3047 = *(&local7);
frost$core$Bit $tmp3048 = frost$core$Bit$init$builtin_bit($tmp3047.nonnull);
bool $tmp3049 = $tmp3048.value;
if ($tmp3049) goto block12; else goto block14;
block12:;
// line 862
frost$core$String* $tmp3050 = *(&local6);
frost$core$String* $tmp3051 = *(&local6);
frost$core$String$Index$nullable $tmp3052 = *(&local7);
frost$core$Bit $tmp3053 = frost$core$Bit$init$builtin_bit($tmp3052.nonnull);
bool $tmp3054 = $tmp3053.value;
if ($tmp3054) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp3055 = (frost$core$Int64) {862};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3056, $tmp3055, &$s3057);
abort(); // unreachable
block15:;
frost$core$String$Index $tmp3058 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp3051, ((frost$core$String$Index) $tmp3052.value));
frost$core$Bit $tmp3059 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3060 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3058, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3059);
frost$core$String* $tmp3061 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp3050, $tmp3060);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
frost$core$String* $tmp3062 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local8) = $tmp3061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
// unreffing REF($162:frost.core.String)
goto block13;
block14:;
// line 1
// line 865
frost$core$String* $tmp3063 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
frost$core$String* $tmp3064 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
*(&local8) = $tmp3063;
goto block13;
block13:;
// line 867
frost$collections$HashMap* $tmp3065 = *(&local3);
frost$core$String* $tmp3066 = *(&local8);
frost$core$String* $tmp3067 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3065, ((frost$collections$Key*) $tmp3066), ((frost$core$Object*) $tmp3067));
frost$core$String* $tmp3068 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
// unreffing alias
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp3069 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
// unreffing fullName
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block11:;
frost$core$Int64 $tmp3070 = (frost$core$Int64) {12};
frost$core$Bit $tmp3071 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3024, $tmp3070);
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp3073 = (org$frostlang$frostc$Position*) ($tmp3022->$data + 0);
org$frostlang$frostc$Position $tmp3074 = *$tmp3073;
*(&local9) = $tmp3074;
org$frostlang$frostc$ASTNode** $tmp3075 = (org$frostlang$frostc$ASTNode**) ($tmp3022->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3076 = *$tmp3075;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
org$frostlang$frostc$ASTNode* $tmp3077 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
*(&local10) = $tmp3076;
org$frostlang$frostc$FixedArray** $tmp3078 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3079 = *$tmp3078;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
org$frostlang$frostc$FixedArray* $tmp3080 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
*(&local11) = $tmp3079;
org$frostlang$frostc$ClassDecl$Kind* $tmp3081 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp3022->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp3082 = *$tmp3081;
*(&local12) = $tmp3082;
frost$core$String** $tmp3083 = (frost$core$String**) ($tmp3022->$data + 40);
frost$core$String* $tmp3084 = *$tmp3083;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
frost$core$String* $tmp3085 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
*(&local13) = $tmp3084;
org$frostlang$frostc$FixedArray** $tmp3086 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3087 = *$tmp3086;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
org$frostlang$frostc$FixedArray* $tmp3088 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
*(&local14) = $tmp3087;
org$frostlang$frostc$FixedArray** $tmp3089 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3090 = *$tmp3089;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
org$frostlang$frostc$FixedArray* $tmp3091 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local15) = $tmp3090;
org$frostlang$frostc$FixedArray** $tmp3092 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3093 = *$tmp3092;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
org$frostlang$frostc$FixedArray* $tmp3094 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local16) = $tmp3093;
// line 871
frost$collections$HashMap* $tmp3095 = *(&local3);
frost$core$String* $tmp3096 = *(&local2);
org$frostlang$frostc$Position $tmp3097 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3098 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3099 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3100 = *(&local12);
frost$core$String* $tmp3101 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3102 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3103 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3104 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3105 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3095), $tmp3096, $tmp3097, $tmp3098, $tmp3099, $tmp3100, $tmp3101, $tmp3102, $tmp3103, $tmp3104);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
org$frostlang$frostc$ClassDecl* $tmp3106 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local17) = $tmp3105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// unreffing REF($278:org.frostlang.frostc.ClassDecl?)
// line 873
org$frostlang$frostc$ClassDecl* $tmp3107 = *(&local17);
frost$core$Bit $tmp3108 = frost$core$Bit$init$builtin_bit($tmp3107 != NULL);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block19; else goto block20;
block19:;
// line 874
org$frostlang$frostc$ClassDecl* $tmp3110 = *(&local17);
frost$core$Bit $tmp3111 = frost$core$Bit$init$builtin_bit($tmp3110 != NULL);
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3113 = (frost$core$Int64) {874};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3114, $tmp3113, &$s3115);
abort(); // unreachable
block21:;
frost$collections$Array* $tmp3116 = *(&local1);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3110, $tmp3116);
goto block20;
block20:;
org$frostlang$frostc$ClassDecl* $tmp3117 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
// unreffing cl
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3118 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
// unreffing members
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3119 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
// unreffing supertypes
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3120 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
// unreffing generics
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3121 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
// unreffing name
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3122 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
// unreffing annotations
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3123 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
// unreffing dc
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block18:;
frost$core$Int64 $tmp3124 = (frost$core$Int64) {29};
frost$core$Bit $tmp3125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3024, $tmp3124);
bool $tmp3126 = $tmp3125.value;
if ($tmp3126) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp3127 = (org$frostlang$frostc$Position*) ($tmp3022->$data + 0);
org$frostlang$frostc$Position $tmp3128 = *$tmp3127;
*(&local18) = $tmp3128;
org$frostlang$frostc$ASTNode** $tmp3129 = (org$frostlang$frostc$ASTNode**) ($tmp3022->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3130 = *$tmp3129;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
org$frostlang$frostc$ASTNode* $tmp3131 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
*(&local19) = $tmp3130;
org$frostlang$frostc$FixedArray** $tmp3132 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3133 = *$tmp3132;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
org$frostlang$frostc$FixedArray* $tmp3134 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
*(&local20) = $tmp3133;
org$frostlang$frostc$MethodDecl$Kind* $tmp3135 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3022->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp3136 = *$tmp3135;
*(&local21) = $tmp3136;
frost$core$String** $tmp3137 = (frost$core$String**) ($tmp3022->$data + 40);
frost$core$String* $tmp3138 = *$tmp3137;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$String* $tmp3139 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3139));
*(&local22) = $tmp3138;
org$frostlang$frostc$FixedArray** $tmp3140 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3141 = *$tmp3140;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
org$frostlang$frostc$FixedArray* $tmp3142 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
*(&local23) = $tmp3141;
org$frostlang$frostc$FixedArray** $tmp3143 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3144 = *$tmp3143;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
org$frostlang$frostc$FixedArray* $tmp3145 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
*(&local24) = $tmp3144;
org$frostlang$frostc$ASTNode** $tmp3146 = (org$frostlang$frostc$ASTNode**) ($tmp3022->$data + 64);
org$frostlang$frostc$ASTNode* $tmp3147 = *$tmp3146;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
org$frostlang$frostc$ASTNode* $tmp3148 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local25) = $tmp3147;
org$frostlang$frostc$FixedArray** $tmp3149 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3150 = *$tmp3149;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
org$frostlang$frostc$FixedArray* $tmp3151 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
*(&local26) = $tmp3150;
// line 879
org$frostlang$frostc$MethodDecl$Kind $tmp3152 = *(&local21);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3153;
$tmp3153 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3153->value = $tmp3152;
frost$core$Int64 $tmp3154 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3155 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3154);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3156;
$tmp3156 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3156->value = $tmp3155;
ITable* $tmp3157 = ((frost$core$Equatable*) $tmp3153)->$class->itable;
while ($tmp3157->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3157 = $tmp3157->next;
}
$fn3159 $tmp3158 = $tmp3157->methods[0];
frost$core$Bit $tmp3160 = $tmp3158(((frost$core$Equatable*) $tmp3153), ((frost$core$Equatable*) $tmp3156));
bool $tmp3161 = $tmp3160.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3156)));
// unreffing REF($423:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3153)));
// unreffing REF($419:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp3161) goto block25; else goto block26;
block25:;
// line 880
org$frostlang$frostc$Position $tmp3162 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3162, &$s3163);
// line 881
org$frostlang$frostc$FixedArray* $tmp3164 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
// unreffing statements
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3165 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
// unreffing rawReturnType
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3166 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
// unreffing parameters
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3167 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
// unreffing generics
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3168 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3169 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
// unreffing annotations
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3170 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
// unreffing dc
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3020);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3171 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3171));
// unreffing e
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block26:;
// line 883
frost$collections$HashMap* $tmp3172 = *(&local3);
frost$core$String* $tmp3173 = *(&local2);
frost$collections$Array* $tmp3174 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3172), $tmp3173, ((frost$collections$List*) $tmp3174));
// line 884
*(&local27) = ((frost$core$String*) NULL);
// line 885
frost$core$String* $tmp3175 = *(&local22);
frost$core$Bit $tmp3176 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3175, &$s3177);
bool $tmp3178 = $tmp3176.value;
if ($tmp3178) goto block27; else goto block29;
block27:;
// line 886
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3179));
frost$core$String* $tmp3180 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
*(&local27) = &$s3181;
// line 887
frost$collections$Array* $tmp3182 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3182);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
frost$collections$Array* $tmp3183 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
*(&local28) = $tmp3182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
// unreffing REF($504:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 888
frost$collections$Array* $tmp3184 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3184);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$collections$Array* $tmp3185 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local29) = $tmp3184;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
// unreffing REF($518:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 889
frost$collections$Array* $tmp3186 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3186);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
frost$collections$Array* $tmp3187 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local30) = $tmp3186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
// unreffing REF($532:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 890
org$frostlang$frostc$FixedArray* $tmp3188 = *(&local24);
ITable* $tmp3189 = ((frost$collections$Iterable*) $tmp3188)->$class->itable;
while ($tmp3189->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3189 = $tmp3189->next;
}
$fn3191 $tmp3190 = $tmp3189->methods[0];
frost$collections$Iterator* $tmp3192 = $tmp3190(((frost$collections$Iterable*) $tmp3188));
goto block30;
block30:;
ITable* $tmp3193 = $tmp3192->$class->itable;
while ($tmp3193->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3193 = $tmp3193->next;
}
$fn3195 $tmp3194 = $tmp3193->methods[0];
frost$core$Bit $tmp3196 = $tmp3194($tmp3192);
bool $tmp3197 = $tmp3196.value;
if ($tmp3197) goto block32; else goto block31;
block31:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3198 = $tmp3192->$class->itable;
while ($tmp3198->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3198 = $tmp3198->next;
}
$fn3200 $tmp3199 = $tmp3198->methods[1];
frost$core$Object* $tmp3201 = $tmp3199($tmp3192);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3201)));
org$frostlang$frostc$ASTNode* $tmp3202 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp3201);
// line 891
org$frostlang$frostc$ASTNode* $tmp3203 = *(&local31);
frost$core$Int64* $tmp3204 = &$tmp3203->$rawValue;
frost$core$Int64 $tmp3205 = *$tmp3204;
frost$core$Int64 $tmp3206 = (frost$core$Int64) {34};
frost$core$Bit $tmp3207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3205, $tmp3206);
bool $tmp3208 = $tmp3207.value;
if ($tmp3208) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp3209 = (org$frostlang$frostc$Position*) ($tmp3203->$data + 0);
org$frostlang$frostc$Position $tmp3210 = *$tmp3209;
*(&local32) = $tmp3210;
frost$core$String** $tmp3211 = (frost$core$String**) ($tmp3203->$data + 16);
frost$core$String* $tmp3212 = *$tmp3211;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
frost$core$String* $tmp3213 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
*(&local33) = $tmp3212;
org$frostlang$frostc$ASTNode** $tmp3214 = (org$frostlang$frostc$ASTNode**) ($tmp3203->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3215 = *$tmp3214;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3215));
org$frostlang$frostc$ASTNode* $tmp3216 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
*(&local34) = $tmp3215;
// line 893
frost$collections$Array* $tmp3217 = *(&local28);
org$frostlang$frostc$MethodDecl$Parameter* $tmp3218 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp3219 = *(&local33);
org$frostlang$frostc$ASTNode* $tmp3220 = *(&local34);
org$frostlang$frostc$Type* $tmp3221 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3220);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp3218, $tmp3219, $tmp3221);
frost$collections$Array$add$frost$collections$Array$T($tmp3217, ((frost$core$Object*) $tmp3218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
// unreffing REF($604:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
// unreffing REF($601:org.frostlang.frostc.MethodDecl.Parameter)
// line 895
frost$collections$Array* $tmp3222 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp3223 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3224 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3225 = *(&local32);
frost$core$String* $tmp3226 = *(&local33);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3223, $tmp3224, $tmp3225, $tmp3226);
frost$collections$Array$add$frost$collections$Array$T($tmp3222, ((frost$core$Object*) $tmp3223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
// unreffing REF($617:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$ASTNode* $tmp3227 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
// unreffing type
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3228 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
// unreffing name
*(&local33) = ((frost$core$String*) NULL);
goto block33;
block35:;
// line 898
frost$core$Bit $tmp3229 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3230 = $tmp3229.value;
if ($tmp3230) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3231 = (frost$core$Int64) {898};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3232, $tmp3231);
abort(); // unreachable
block36:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3201);
// unreffing REF($561:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3233 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3233));
// unreffing p
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
// unreffing REF($550:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 902
org$frostlang$frostc$ASTNode* $tmp3234 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3235 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3236 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3237 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3238 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3239 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3237, $tmp3238, $tmp3239, &$s3240);
org$frostlang$frostc$FixedArray* $tmp3241 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3241);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3234, $tmp3235, $tmp3236, $tmp3237, $tmp3241);
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
org$frostlang$frostc$ASTNode* $tmp3242 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
*(&local35) = $tmp3234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
// unreffing REF($666:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
// unreffing REF($662:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
// unreffing REF($659:org.frostlang.frostc.ASTNode)
// line 905
frost$collections$Array* $tmp3243 = *(&local29);
org$frostlang$frostc$ASTNode* $tmp3244 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3245 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3246 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3247 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3248 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp3249 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3250 = *(&local35);
frost$core$String* $tmp3251 = *(&local27);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp3247, $tmp3248, $tmp3249, $tmp3250, $tmp3251);
frost$collections$Array* $tmp3252 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp3253 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3252);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3244, $tmp3245, $tmp3246, $tmp3247, $tmp3253);
frost$collections$Array$add$frost$collections$Array$T($tmp3243, ((frost$core$Object*) $tmp3244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
// unreffing REF($700:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
// unreffing REF($692:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3244));
// unreffing REF($689:org.frostlang.frostc.ASTNode)
// line 908
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// line 909
org$frostlang$frostc$ASTNode* $tmp3254 = *(&local25);
frost$core$Bit $tmp3255 = frost$core$Bit$init$builtin_bit($tmp3254 != NULL);
bool $tmp3256 = $tmp3255.value;
if ($tmp3256) goto block38; else goto block40;
block38:;
// line 910
org$frostlang$frostc$ASTNode* $tmp3257 = *(&local25);
frost$core$Bit $tmp3258 = frost$core$Bit$init$builtin_bit($tmp3257 != NULL);
bool $tmp3259 = $tmp3258.value;
if ($tmp3259) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp3260 = (frost$core$Int64) {910};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3261, $tmp3260, &$s3262);
abort(); // unreachable
block41:;
org$frostlang$frostc$Type* $tmp3263 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3257);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
org$frostlang$frostc$Type* $tmp3264 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
*(&local36) = $tmp3263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
// unreffing REF($732:org.frostlang.frostc.Type)
goto block39;
block40:;
// line 1
// line 913
org$frostlang$frostc$Type* $tmp3265 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
org$frostlang$frostc$Type* $tmp3266 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local36) = $tmp3265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
// unreffing REF($745:org.frostlang.frostc.Type)
goto block39;
block39:;
// line 915
org$frostlang$frostc$MethodDecl* $tmp3267 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3268 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3269 = *$tmp3268;
frost$core$Bit $tmp3270 = frost$core$Bit$init$builtin_bit($tmp3269 != NULL);
bool $tmp3271 = $tmp3270.value;
if ($tmp3271) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp3272 = (frost$core$Int64) {915};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3273, $tmp3272, &$s3274);
abort(); // unreachable
block43:;
org$frostlang$frostc$Position $tmp3275 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp3276 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3277 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3276, $tmp3277);
frost$core$Int64 $tmp3278 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp3279 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3278);
frost$collections$Array* $tmp3280 = *(&local28);
org$frostlang$frostc$Type* $tmp3281 = *(&local36);
frost$collections$Array* $tmp3282 = *(&local29);
org$frostlang$frostc$FixedArray* $tmp3283 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3282);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3267, $tmp3269, $tmp3275, ((frost$core$String*) NULL), $tmp3276, $tmp3279, &$s3284, ((frost$collections$Array*) NULL), $tmp3280, $tmp3281, $tmp3283);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
org$frostlang$frostc$MethodDecl* $tmp3285 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3285));
*(&local37) = $tmp3267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3283));
// unreffing REF($778:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
// unreffing REF($769:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
// unreffing REF($757:org.frostlang.frostc.MethodDecl)
// line 919
org$frostlang$frostc$ClassDecl** $tmp3286 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3287 = *$tmp3286;
frost$core$Bit $tmp3288 = frost$core$Bit$init$builtin_bit($tmp3287 != NULL);
bool $tmp3289 = $tmp3288.value;
if ($tmp3289) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp3290 = (frost$core$Int64) {919};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3291, $tmp3290, &$s3292);
abort(); // unreachable
block45:;
frost$collections$Array** $tmp3293 = &$tmp3287->methods;
frost$collections$Array* $tmp3294 = *$tmp3293;
org$frostlang$frostc$MethodDecl* $tmp3295 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp3294, ((frost$core$Object*) $tmp3295));
org$frostlang$frostc$MethodDecl* $tmp3296 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3296));
// unreffing bareMain
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp3297 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3297));
// unreffing returnType
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3298 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
// unreffing bareConstruct
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3299 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
// unreffing mainArguments
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3300 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
// unreffing mainStatements
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3301 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
// unreffing mainParameters
*(&local28) = ((frost$collections$Array*) NULL);
goto block28;
block29:;
// line 1
// line 922
frost$core$String* $tmp3302 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
frost$core$String* $tmp3303 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
*(&local27) = $tmp3302;
goto block28;
block28:;
// line 924
frost$core$Weak** $tmp3304 = &param0->compiler;
frost$core$Weak* $tmp3305 = *$tmp3304;
frost$core$Object* $tmp3306 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3305);
frost$collections$Stack** $tmp3307 = &((org$frostlang$frostc$Compiler*) $tmp3306)->currentClass;
frost$collections$Stack* $tmp3308 = *$tmp3307;
org$frostlang$frostc$ClassDecl** $tmp3309 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3310 = *$tmp3309;
frost$core$Bit $tmp3311 = frost$core$Bit$init$builtin_bit($tmp3310 != NULL);
bool $tmp3312 = $tmp3311.value;
if ($tmp3312) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp3313 = (frost$core$Int64) {924};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3314, $tmp3313, &$s3315);
abort(); // unreachable
block47:;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3308, ((frost$core$Object*) $tmp3310));
frost$core$Frost$unref$frost$core$Object$Q($tmp3306);
// unreffing REF($860:frost.core.Weak.T)
// line 925
org$frostlang$frostc$ClassDecl** $tmp3316 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3317 = *$tmp3316;
frost$core$Bit $tmp3318 = frost$core$Bit$init$builtin_bit($tmp3317 != NULL);
bool $tmp3319 = $tmp3318.value;
if ($tmp3319) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp3320 = (frost$core$Int64) {925};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3321, $tmp3320, &$s3322);
abort(); // unreachable
block49:;
org$frostlang$frostc$Position $tmp3323 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3324 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp3325 = *(&local20);
org$frostlang$frostc$MethodDecl$Kind $tmp3326 = *(&local21);
frost$core$String* $tmp3327 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp3328 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp3329 = *(&local24);
org$frostlang$frostc$ASTNode* $tmp3330 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp3331 = *(&local26);
org$frostlang$frostc$MethodDecl* $tmp3332 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp3317, $tmp3323, $tmp3324, $tmp3325, $tmp3326, $tmp3327, $tmp3328, $tmp3329, $tmp3330, $tmp3331);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
org$frostlang$frostc$MethodDecl* $tmp3333 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
*(&local38) = $tmp3332;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
// unreffing REF($900:org.frostlang.frostc.MethodDecl?)
// line 927
org$frostlang$frostc$MethodDecl* $tmp3334 = *(&local38);
frost$core$Bit $tmp3335 = frost$core$Bit$init$builtin_bit($tmp3334 != NULL);
bool $tmp3336 = $tmp3335.value;
if ($tmp3336) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp3337 = (frost$core$Int64) {927};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3338, $tmp3337, &$s3339);
abort(); // unreachable
block53:;
org$frostlang$frostc$Annotations** $tmp3340 = &$tmp3334->annotations;
org$frostlang$frostc$Annotations* $tmp3341 = *$tmp3340;
frost$core$Bit $tmp3342 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3341);
bool $tmp3343 = $tmp3342.value;
if ($tmp3343) goto block51; else goto block52;
block51:;
// line 928
org$frostlang$frostc$MethodDecl* $tmp3344 = *(&local38);
frost$core$Bit $tmp3345 = frost$core$Bit$init$builtin_bit($tmp3344 != NULL);
bool $tmp3346 = $tmp3345.value;
if ($tmp3346) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp3347 = (frost$core$Int64) {928};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3348, $tmp3347, &$s3349);
abort(); // unreachable
block55:;
org$frostlang$frostc$Position* $tmp3350 = &((org$frostlang$frostc$Symbol*) $tmp3344)->position;
org$frostlang$frostc$Position $tmp3351 = *$tmp3350;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3351, &$s3352);
// line 930
org$frostlang$frostc$MethodDecl* $tmp3353 = *(&local38);
frost$core$Bit $tmp3354 = frost$core$Bit$init$builtin_bit($tmp3353 != NULL);
bool $tmp3355 = $tmp3354.value;
if ($tmp3355) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp3356 = (frost$core$Int64) {930};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3357, $tmp3356, &$s3358);
abort(); // unreachable
block57:;
org$frostlang$frostc$Annotations** $tmp3359 = &$tmp3353->annotations;
org$frostlang$frostc$Annotations* $tmp3360 = *$tmp3359;
frost$core$Int64* $tmp3361 = &$tmp3360->flags;
frost$core$Int64 $tmp3362 = *$tmp3361;
frost$core$Int64 $tmp3363 = (frost$core$Int64) {16};
frost$core$Int64 $tmp3364 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp3363);
frost$core$Int64 $tmp3365 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp3362, $tmp3364);
frost$core$Int64* $tmp3366 = &$tmp3360->flags;
*$tmp3366 = $tmp3365;
goto block52;
block52:;
// line 932
frost$core$Weak** $tmp3367 = &param0->compiler;
frost$core$Weak* $tmp3368 = *$tmp3367;
frost$core$Object* $tmp3369 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3368);
frost$collections$Stack** $tmp3370 = &((org$frostlang$frostc$Compiler*) $tmp3369)->currentClass;
frost$collections$Stack* $tmp3371 = *$tmp3370;
frost$core$Int64 $tmp3372 = (frost$core$Int64) {0};
frost$core$Object* $tmp3373 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3371, $tmp3372);
org$frostlang$frostc$ClassDecl** $tmp3374 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3375 = *$tmp3374;
bool $tmp3376 = ((org$frostlang$frostc$ClassDecl*) $tmp3373) == $tmp3375;
frost$core$Bit $tmp3377 = frost$core$Bit$init$builtin_bit($tmp3376);
bool $tmp3378 = $tmp3377.value;
if ($tmp3378) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp3379 = (frost$core$Int64) {932};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3380, $tmp3379);
abort(); // unreachable
block59:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3373);
// unreffing REF($969:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3369);
// unreffing REF($963:frost.core.Weak.T)
// line 933
frost$core$Weak** $tmp3381 = &param0->compiler;
frost$core$Weak* $tmp3382 = *$tmp3381;
frost$core$Object* $tmp3383 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3382);
frost$collections$Stack** $tmp3384 = &((org$frostlang$frostc$Compiler*) $tmp3383)->currentClass;
frost$collections$Stack* $tmp3385 = *$tmp3384;
frost$core$Object* $tmp3386 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3385);
frost$core$Frost$unref$frost$core$Object$Q($tmp3386);
// unreffing REF($995:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3383);
// unreffing REF($990:frost.core.Weak.T)
// line 934
org$frostlang$frostc$ClassDecl** $tmp3387 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3388 = *$tmp3387;
frost$core$Bit $tmp3389 = frost$core$Bit$init$builtin_bit($tmp3388 != NULL);
bool $tmp3390 = $tmp3389.value;
if ($tmp3390) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp3391 = (frost$core$Int64) {934};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3392, $tmp3391, &$s3393);
abort(); // unreachable
block61:;
frost$collections$Array** $tmp3394 = &$tmp3388->methods;
frost$collections$Array* $tmp3395 = *$tmp3394;
org$frostlang$frostc$MethodDecl* $tmp3396 = *(&local38);
frost$core$Bit $tmp3397 = frost$core$Bit$init$builtin_bit($tmp3396 != NULL);
bool $tmp3398 = $tmp3397.value;
if ($tmp3398) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp3399 = (frost$core$Int64) {934};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3400, $tmp3399, &$s3401);
abort(); // unreachable
block63:;
frost$collections$Array$add$frost$collections$Array$T($tmp3395, ((frost$core$Object*) $tmp3396));
// line 935
org$frostlang$frostc$ClassDecl** $tmp3402 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3403 = *$tmp3402;
frost$core$Bit $tmp3404 = frost$core$Bit$init$builtin_bit($tmp3403 != NULL);
bool $tmp3405 = $tmp3404.value;
if ($tmp3405) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp3406 = (frost$core$Int64) {935};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3407, $tmp3406, &$s3408);
abort(); // unreachable
block65:;
org$frostlang$frostc$SymbolTable** $tmp3409 = &$tmp3403->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3410 = *$tmp3409;
org$frostlang$frostc$MethodDecl* $tmp3411 = *(&local38);
frost$core$Bit $tmp3412 = frost$core$Bit$init$builtin_bit($tmp3411 != NULL);
bool $tmp3413 = $tmp3412.value;
if ($tmp3413) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp3414 = (frost$core$Int64) {935};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3415, $tmp3414, &$s3416);
abort(); // unreachable
block67:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp3410, ((org$frostlang$frostc$Symbol*) $tmp3411));
org$frostlang$frostc$MethodDecl* $tmp3417 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
// unreffing m
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3418 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
// unreffing name
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3419 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
// unreffing statements
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3420 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
// unreffing rawReturnType
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3421 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
// unreffing parameters
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3422 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
// unreffing generics
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3423 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3424 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
// unreffing annotations
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3425 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
// unreffing dc
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block24:;
frost$core$Int64 $tmp3426 = (frost$core$Int64) {18};
frost$core$Bit $tmp3427 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3024, $tmp3426);
bool $tmp3428 = $tmp3427.value;
if ($tmp3428) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Position* $tmp3429 = (org$frostlang$frostc$Position*) ($tmp3022->$data + 0);
org$frostlang$frostc$Position $tmp3430 = *$tmp3429;
*(&local39) = $tmp3430;
org$frostlang$frostc$ASTNode** $tmp3431 = (org$frostlang$frostc$ASTNode**) ($tmp3022->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3432 = *$tmp3431;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
org$frostlang$frostc$ASTNode* $tmp3433 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
*(&local40) = $tmp3432;
org$frostlang$frostc$FixedArray** $tmp3434 = (org$frostlang$frostc$FixedArray**) ($tmp3022->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3435 = *$tmp3434;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
org$frostlang$frostc$FixedArray* $tmp3436 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
*(&local41) = $tmp3435;
org$frostlang$frostc$ASTNode** $tmp3437 = (org$frostlang$frostc$ASTNode**) ($tmp3022->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3438 = *$tmp3437;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
org$frostlang$frostc$ASTNode* $tmp3439 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
*(&local42) = $tmp3438;
// line 938
frost$collections$HashMap* $tmp3440 = *(&local3);
frost$core$String* $tmp3441 = *(&local2);
frost$collections$Array* $tmp3442 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3440), $tmp3441, ((frost$collections$List*) $tmp3442));
// line 939
org$frostlang$frostc$ClassDecl** $tmp3443 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3444 = *$tmp3443;
frost$core$Bit $tmp3445 = frost$core$Bit$init$builtin_bit($tmp3444 != NULL);
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp3447 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3448, $tmp3447, &$s3449);
abort(); // unreachable
block71:;
frost$collections$Array** $tmp3450 = &$tmp3444->fields;
frost$collections$Array* $tmp3451 = *$tmp3450;
ITable* $tmp3452 = ((frost$collections$CollectionView*) $tmp3451)->$class->itable;
while ($tmp3452->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3452 = $tmp3452->next;
}
$fn3454 $tmp3453 = $tmp3452->methods[0];
frost$core$Int64 $tmp3455 = $tmp3453(((frost$collections$CollectionView*) $tmp3451));
*(&local43) = $tmp3455;
// line 940
org$frostlang$frostc$ClassDecl** $tmp3456 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3457 = *$tmp3456;
frost$core$Bit $tmp3458 = frost$core$Bit$init$builtin_bit($tmp3457 != NULL);
bool $tmp3459 = $tmp3458.value;
if ($tmp3459) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp3460 = (frost$core$Int64) {940};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3461, $tmp3460, &$s3462);
abort(); // unreachable
block73:;
org$frostlang$frostc$Position $tmp3463 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp3464 = *(&local40);
org$frostlang$frostc$FixedArray* $tmp3465 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp3466 = *(&local42);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp3457, $tmp3463, $tmp3464, $tmp3465, $tmp3466);
// line 941
frost$core$Int64 $tmp3467 = *(&local43);
org$frostlang$frostc$ClassDecl** $tmp3468 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3469 = *$tmp3468;
frost$core$Bit $tmp3470 = frost$core$Bit$init$builtin_bit($tmp3469 != NULL);
bool $tmp3471 = $tmp3470.value;
if ($tmp3471) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp3472 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3473, $tmp3472, &$s3474);
abort(); // unreachable
block75:;
frost$collections$Array** $tmp3475 = &$tmp3469->fields;
frost$collections$Array* $tmp3476 = *$tmp3475;
ITable* $tmp3477 = ((frost$collections$CollectionView*) $tmp3476)->$class->itable;
while ($tmp3477->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3477 = $tmp3477->next;
}
$fn3479 $tmp3478 = $tmp3477->methods[0];
frost$core$Int64 $tmp3480 = $tmp3478(((frost$collections$CollectionView*) $tmp3476));
frost$core$Bit $tmp3481 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3482 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3467, $tmp3480, $tmp3481);
frost$core$Int64 $tmp3483 = $tmp3482.min;
*(&local44) = $tmp3483;
frost$core$Int64 $tmp3484 = $tmp3482.max;
frost$core$Bit $tmp3485 = $tmp3482.inclusive;
bool $tmp3486 = $tmp3485.value;
frost$core$Int64 $tmp3487 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3488 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3487);
if ($tmp3486) goto block80; else goto block81;
block80:;
int64_t $tmp3489 = $tmp3483.value;
int64_t $tmp3490 = $tmp3484.value;
bool $tmp3491 = $tmp3489 <= $tmp3490;
frost$core$Bit $tmp3492 = (frost$core$Bit) {$tmp3491};
bool $tmp3493 = $tmp3492.value;
if ($tmp3493) goto block77; else goto block78;
block81:;
int64_t $tmp3494 = $tmp3483.value;
int64_t $tmp3495 = $tmp3484.value;
bool $tmp3496 = $tmp3494 < $tmp3495;
frost$core$Bit $tmp3497 = (frost$core$Bit) {$tmp3496};
bool $tmp3498 = $tmp3497.value;
if ($tmp3498) goto block77; else goto block78;
block77:;
// line 942
org$frostlang$frostc$ClassDecl** $tmp3499 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3500 = *$tmp3499;
frost$core$Bit $tmp3501 = frost$core$Bit$init$builtin_bit($tmp3500 != NULL);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp3503 = (frost$core$Int64) {942};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3504, $tmp3503, &$s3505);
abort(); // unreachable
block82:;
frost$collections$Array** $tmp3506 = &$tmp3500->fields;
frost$collections$Array* $tmp3507 = *$tmp3506;
frost$core$Int64 $tmp3508 = *(&local44);
frost$core$Object* $tmp3509 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3507, $tmp3508);
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp3509)));
org$frostlang$frostc$FieldDecl* $tmp3510 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) $tmp3509);
frost$core$Frost$unref$frost$core$Object$Q($tmp3509);
// unreffing REF($1225:frost.collections.Array.T)
// line 943
org$frostlang$frostc$FieldDecl* $tmp3511 = *(&local45);
org$frostlang$frostc$FieldDecl$Kind* $tmp3512 = &$tmp3511->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp3513 = *$tmp3512;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3514;
$tmp3514 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3514->value = $tmp3513;
frost$core$Int64 $tmp3515 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp3516 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3515);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3517;
$tmp3517 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3517->value = $tmp3516;
ITable* $tmp3518 = ((frost$core$Equatable*) $tmp3514)->$class->itable;
while ($tmp3518->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3518 = $tmp3518->next;
}
$fn3520 $tmp3519 = $tmp3518->methods[1];
frost$core$Bit $tmp3521 = $tmp3519(((frost$core$Equatable*) $tmp3514), ((frost$core$Equatable*) $tmp3517));
bool $tmp3522 = $tmp3521.value;
if ($tmp3522) goto block86; else goto block87;
block86:;
org$frostlang$frostc$FieldDecl* $tmp3523 = *(&local45);
org$frostlang$frostc$Annotations** $tmp3524 = &$tmp3523->annotations;
org$frostlang$frostc$Annotations* $tmp3525 = *$tmp3524;
frost$core$Bit $tmp3526 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3525);
*(&local46) = $tmp3526;
goto block88;
block87:;
*(&local46) = $tmp3521;
goto block88;
block88:;
frost$core$Bit $tmp3527 = *(&local46);
bool $tmp3528 = $tmp3527.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3517)));
// unreffing REF($1245:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3514)));
// unreffing REF($1241:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp3528) goto block84; else goto block85;
block84:;
// line 945
org$frostlang$frostc$FieldDecl* $tmp3529 = *(&local45);
org$frostlang$frostc$Position* $tmp3530 = &((org$frostlang$frostc$Symbol*) $tmp3529)->position;
org$frostlang$frostc$Position $tmp3531 = *$tmp3530;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3531, &$s3532);
goto block85;
block85:;
org$frostlang$frostc$FieldDecl* $tmp3533 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
// unreffing f
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block79;
block79:;
frost$core$Int64 $tmp3534 = *(&local44);
int64_t $tmp3535 = $tmp3484.value;
int64_t $tmp3536 = $tmp3534.value;
int64_t $tmp3537 = $tmp3535 - $tmp3536;
frost$core$Int64 $tmp3538 = (frost$core$Int64) {$tmp3537};
frost$core$UInt64 $tmp3539 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3538);
if ($tmp3486) goto block90; else goto block91;
block90:;
uint64_t $tmp3540 = $tmp3539.value;
uint64_t $tmp3541 = $tmp3488.value;
bool $tmp3542 = $tmp3540 >= $tmp3541;
frost$core$Bit $tmp3543 = (frost$core$Bit) {$tmp3542};
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block89; else goto block78;
block91:;
uint64_t $tmp3545 = $tmp3539.value;
uint64_t $tmp3546 = $tmp3488.value;
bool $tmp3547 = $tmp3545 > $tmp3546;
frost$core$Bit $tmp3548 = (frost$core$Bit) {$tmp3547};
bool $tmp3549 = $tmp3548.value;
if ($tmp3549) goto block89; else goto block78;
block89:;
int64_t $tmp3550 = $tmp3534.value;
int64_t $tmp3551 = $tmp3487.value;
int64_t $tmp3552 = $tmp3550 + $tmp3551;
frost$core$Int64 $tmp3553 = (frost$core$Int64) {$tmp3552};
*(&local44) = $tmp3553;
goto block77;
block78:;
org$frostlang$frostc$ASTNode* $tmp3554 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3554));
// unreffing varDecl
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3555 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
// unreffing annotations
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3556 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
// unreffing dc
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block70:;
// line 951
frost$core$Bit $tmp3557 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3558 = $tmp3557.value;
if ($tmp3558) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp3559 = (frost$core$Int64) {951};
org$frostlang$frostc$ASTNode* $tmp3560 = *(&local4);
frost$core$String* $tmp3561 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3562, ((frost$core$Object*) $tmp3560));
frost$core$String* $tmp3563 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3561, &$s3564);
org$frostlang$frostc$ASTNode* $tmp3565 = *(&local4);
frost$core$Int64* $tmp3566 = &$tmp3565->$rawValue;
frost$core$Int64 $tmp3567 = *$tmp3566;
frost$core$Int64$wrapper* $tmp3568;
$tmp3568 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3568->value = $tmp3567;
frost$core$String* $tmp3569 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3563, ((frost$core$Object*) $tmp3568));
frost$core$String* $tmp3570 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3569, &$s3571);
org$frostlang$frostc$ASTNode* $tmp3572 = *(&local4);
$fn3574 $tmp3573 = ($fn3574) $tmp3572->$class->vtable[2];
org$frostlang$frostc$Position $tmp3575 = $tmp3573($tmp3572);
org$frostlang$frostc$Position$wrapper* $tmp3576;
$tmp3576 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp3576->value = $tmp3575;
frost$core$String* $tmp3577 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3570, ((frost$core$Object*) $tmp3576));
frost$core$String* $tmp3578 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3577, &$s3579);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3580, $tmp3559, $tmp3578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
// unreffing REF($1341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
// unreffing REF($1340:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
// unreffing REF($1339:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
// unreffing REF($1335:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3569));
// unreffing REF($1334:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3568));
// unreffing REF($1333:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3563));
// unreffing REF($1329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3561));
// unreffing REF($1328:frost.core.String)
abort(); // unreachable
block92:;
goto block7;
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3020);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
// unreffing e
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
// unreffing REF($67:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 955
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3582 = &param0->source;
frost$io$File* $tmp3583 = *$tmp3582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3583));
frost$io$File** $tmp3584 = &param0->source;
*$tmp3584 = ((frost$io$File*) NULL);
// line 956
frost$collections$Array* $tmp3585 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3585)));
frost$collections$HashMap* $tmp3586 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
// unreffing aliases
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3587 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
// unreffing currentPackage
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3588 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp3589 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
// unreffing entries
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3585);
block3:;
// line 959
frost$core$Bit $tmp3590 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp3592 = (frost$core$Int64) {959};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3593, $tmp3592);
abort(); // unreachable
block94:;
goto block1;
block1:;
frost$core$Bit $tmp3594 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3595 = $tmp3594.value;
if ($tmp3595) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp3596 = (frost$core$Int64) {846};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3597, $tmp3596, &$s3598);
abort(); // unreachable
block96:;
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3599 = &param0->compiler;
frost$core$Weak* $tmp3600 = *$tmp3599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3600));
org$frostlang$frostc$ClassDecl** $tmp3601 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3602 = *$tmp3601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3602));
frost$io$File** $tmp3603 = &param0->source;
frost$io$File* $tmp3604 = *$tmp3603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
return;

}

