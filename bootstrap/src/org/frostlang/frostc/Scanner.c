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
typedef frost$collections$Iterator* (*$fn227)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn231)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn236)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn252)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn297)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn302)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn306)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn311)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn456)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn458)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn485)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn487)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn514)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn516)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn543)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn545)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn572)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn574)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn674)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn678)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn683)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn751)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn803)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn807)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn812)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn890)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn894)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn899)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn932)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn936)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn941)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1010)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1014)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1019)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1081)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1085)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1090)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1131)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1135)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1140)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1183)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1187)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1192)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1224)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1228)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1233)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1250)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1254)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1259)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1378)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1382)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1387)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1415)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1419)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1424)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1438)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1442)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1447)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1479)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1483)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1488)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1525)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1529)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1534)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1582)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1613)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1617)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1622)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn1665)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1679)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1683)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1688)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1727)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1756)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2018)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2022)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2027)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2040)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2056)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2093)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2097)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2102)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2145)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2163)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2169)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2173)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2178)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2209)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2256)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2260)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2265)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2326)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2330)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2335)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2347)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2362)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2374)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2388)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2397)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2430)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2439)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2448)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2480)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2489)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2502)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2506)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2511)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2519)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2565)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2569)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2574)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2586)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2616)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2703)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2707)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2712)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2842)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2874)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2878)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2883)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3070)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3085)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3121)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3172)(org$frostlang$frostc$ASTNode*);

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
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s1930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1992 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s1994 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1995 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2064 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2084 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s2860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s2862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2913 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s2955 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s2998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3177 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };

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
frost$core$Int64 $tmp177 = (frost$core$Int64) {61};
org$frostlang$frostc$IR$Value* $tmp178 = *(&local10);
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s180, ((frost$core$Object*) $tmp178));
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp179, &$s182);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s183, $tmp177, $tmp181);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
abort(); // unreachable
block36:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {30};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp187 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp188 = *$tmp187;
*(&local12) = $tmp188;
org$frostlang$frostc$parser$Token$Kind* $tmp189 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp190 = *$tmp189;
*(&local13) = $tmp190;
org$frostlang$frostc$FixedArray** $tmp191 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp192 = *$tmp191;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
org$frostlang$frostc$FixedArray* $tmp193 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local14) = $tmp192;
org$frostlang$frostc$ASTNode** $tmp194 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp195 = *$tmp194;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
org$frostlang$frostc$ASTNode* $tmp196 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local15) = $tmp195;
// line 64
// line 65
org$frostlang$frostc$parser$Token$Kind $tmp197 = *(&local13);
frost$core$Int64 $tmp198 = $tmp197.$rawValue;
frost$core$Int64 $tmp199 = (frost$core$Int64) {94};
frost$core$Bit $tmp200 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block42; else goto block43;
block42:;
// line 67
frost$core$Int64 $tmp202 = (frost$core$Int64) {14};
org$frostlang$frostc$Type$Kind $tmp203 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp202);
*(&local16) = $tmp203;
goto block41;
block43:;
frost$core$Int64 $tmp204 = (frost$core$Int64) {95};
frost$core$Bit $tmp205 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block44; else goto block45;
block44:;
// line 70
frost$core$Int64 $tmp207 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp208 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp207);
*(&local16) = $tmp208;
goto block41;
block45:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {96};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block46; else goto block47;
block46:;
// line 73
frost$core$Int64 $tmp212 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp213 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp212);
*(&local16) = $tmp213;
goto block41;
block47:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {97};
frost$core$Bit $tmp215 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp198, $tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block48; else goto block49;
block48:;
// line 76
frost$core$Int64 $tmp217 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp218 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp217);
*(&local16) = $tmp218;
goto block41;
block49:;
// line 79
frost$core$Int64 $tmp219 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s220, $tmp219, &$s221);
abort(); // unreachable
block41:;
// line 82
frost$collections$Array* $tmp222 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp222);
*(&local17) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$collections$Array* $tmp223 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local17) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// line 83
org$frostlang$frostc$FixedArray* $tmp224 = *(&local14);
ITable* $tmp225 = ((frost$collections$Iterable*) $tmp224)->$class->itable;
while ($tmp225->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp225 = $tmp225->next;
}
$fn227 $tmp226 = $tmp225->methods[0];
frost$collections$Iterator* $tmp228 = $tmp226(((frost$collections$Iterable*) $tmp224));
goto block50;
block50:;
ITable* $tmp229 = $tmp228->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
frost$core$Bit $tmp232 = $tmp230($tmp228);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block52; else goto block51;
block51:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp234 = $tmp228->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[1];
frost$core$Object* $tmp237 = $tmp235($tmp228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp237)));
org$frostlang$frostc$ASTNode* $tmp238 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp237);
// line 84
frost$collections$Array* $tmp239 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp240 = *(&local18);
org$frostlang$frostc$Type* $tmp241 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp240);
frost$collections$Array$add$frost$collections$Array$T($tmp239, ((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q($tmp237);
org$frostlang$frostc$ASTNode* $tmp242 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// line 86
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
// line 87
org$frostlang$frostc$ASTNode* $tmp243 = *(&local15);
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 != NULL);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block53; else goto block55;
block53:;
// line 88
org$frostlang$frostc$ASTNode* $tmp246 = *(&local15);
org$frostlang$frostc$Type* $tmp247 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp246);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
org$frostlang$frostc$Type* $tmp248 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local19) = $tmp247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
goto block54;
block55:;
// line 1
// line 91
org$frostlang$frostc$Type* $tmp249 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
org$frostlang$frostc$Type* $tmp250 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local19) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
goto block54;
block54:;
// line 93
$fn252 $tmp251 = ($fn252) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp253 = $tmp251(param1);
org$frostlang$frostc$Type$Kind $tmp254 = *(&local16);
frost$collections$Array* $tmp255 = *(&local17);
org$frostlang$frostc$FixedArray* $tmp256 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp255);
org$frostlang$frostc$Type* $tmp257 = *(&local19);
frost$core$Int64 $tmp258 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp259 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp253, $tmp254, ((frost$collections$ListView*) $tmp256), $tmp257, $tmp258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
org$frostlang$frostc$Type* $tmp260 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp261 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp262 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp263 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp259;
block40:;
// line 97
frost$core$Int64 $tmp264 = (frost$core$Int64) {97};
frost$core$String* $tmp265 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s266, ((frost$core$Object*) param1));
frost$core$String* $tmp267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp265, &$s268);
frost$core$Int64* $tmp269 = &param1->$rawValue;
frost$core$Int64 $tmp270 = *$tmp269;
frost$core$Int64$wrapper* $tmp271;
$tmp271 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp271->value = $tmp270;
frost$core$String* $tmp272 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp267, ((frost$core$Object*) $tmp271));
frost$core$String* $tmp273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp272, &$s274);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s275, $tmp264, $tmp273);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
abort(); // unreachable
block1:;
// line 100
frost$core$Int64 $tmp276 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s277, $tmp276);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// line 104
frost$core$Int64 $tmp278 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param2, param3);
frost$core$Int64 $tmp279 = (frost$core$Int64) {0};
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279.value;
bool $tmp282 = $tmp280 != $tmp281;
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 105
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s285);
goto block2;
block2:;
// line 107
frost$core$Int64 $tmp286 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(param2, param3);
return $tmp286;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 114
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block1; else goto block2;
block1:;
// line 115
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(true);
return $tmp289;
block2:;
// line 117
frost$core$String* $tmp290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s291, param2);
frost$core$String* $tmp292 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp290, &$s293);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp292);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// line 118
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit(false);
return $tmp294;

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
frost$core$Int64 $tmp295 = (frost$core$Int64) {0};
*(&local0) = $tmp295;
// line 112
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp296 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local1) = ((frost$collections$Array*) NULL);
// line 113
frost$core$Method* $tmp298 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp298, ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
// line 113
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Method* $tmp299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local2) = $tmp298;
// line 120
ITable* $tmp300 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp300 = $tmp300->next;
}
$fn302 $tmp301 = $tmp300->methods[0];
frost$collections$Iterator* $tmp303 = $tmp301(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp304 = $tmp303->$class->itable;
while ($tmp304->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
frost$core$Bit $tmp307 = $tmp305($tmp303);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp309 = $tmp303->$class->itable;
while ($tmp309->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp309 = $tmp309->next;
}
$fn311 $tmp310 = $tmp309->methods[1];
frost$core$Object* $tmp312 = $tmp310($tmp303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp312)));
org$frostlang$frostc$ASTNode* $tmp313 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp312);
// line 121
org$frostlang$frostc$ASTNode* $tmp314 = *(&local3);
frost$core$Int64* $tmp315 = &$tmp314->$rawValue;
frost$core$Int64 $tmp316 = *$tmp315;
frost$core$Int64 $tmp317 = (frost$core$Int64) {0};
frost$core$Bit $tmp318 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp316, $tmp317);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp320 = (org$frostlang$frostc$Position*) ($tmp314->$data + 0);
org$frostlang$frostc$Position $tmp321 = *$tmp320;
*(&local4) = $tmp321;
frost$core$String** $tmp322 = (frost$core$String**) ($tmp314->$data + 16);
frost$core$String* $tmp323 = *$tmp322;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
frost$core$String* $tmp324 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local5) = $tmp323;
frost$core$String** $tmp325 = (frost$core$String**) ($tmp314->$data + 24);
frost$core$String* $tmp326 = *$tmp325;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
frost$core$String* $tmp327 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
*(&local6) = $tmp326;
org$frostlang$frostc$ASTNode** $tmp328 = (org$frostlang$frostc$ASTNode**) ($tmp314->$data + 32);
org$frostlang$frostc$ASTNode* $tmp329 = *$tmp328;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
org$frostlang$frostc$ASTNode* $tmp330 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local7) = $tmp329;
// line 123
org$frostlang$frostc$ASTNode* $tmp331 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$ASTNode* $tmp332 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local8) = $tmp331;
// line 124
frost$core$String* $tmp333 = *(&local5);
frost$core$Bit $tmp334 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s335);
bool $tmp336 = $tmp334.value;
if ($tmp336) goto block8; else goto block9;
block8:;
// line 126
org$frostlang$frostc$Position $tmp337 = *(&local4);
frost$core$Int64 $tmp338 = *(&local0);
frost$core$Int64 $tmp339 = (frost$core$Int64) {2};
frost$core$Int64 $tmp340 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp337, $tmp338, $tmp339);
*(&local0) = $tmp340;
goto block7;
block9:;
frost$core$Bit $tmp341 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s342);
bool $tmp343 = $tmp341.value;
if ($tmp343) goto block10; else goto block11;
block10:;
// line 129
org$frostlang$frostc$Position $tmp344 = *(&local4);
frost$core$Int64 $tmp345 = *(&local0);
frost$core$Int64 $tmp346 = (frost$core$Int64) {4};
frost$core$Int64 $tmp347 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp344, $tmp345, $tmp346);
*(&local0) = $tmp347;
goto block7;
block11:;
frost$core$Bit $tmp348 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s349);
bool $tmp350 = $tmp348.value;
if ($tmp350) goto block12; else goto block13;
block12:;
// line 132
org$frostlang$frostc$Position $tmp351 = *(&local4);
frost$core$Int64 $tmp352 = *(&local0);
frost$core$Int64 $tmp353 = (frost$core$Int64) {8};
frost$core$Int64 $tmp354 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp351, $tmp352, $tmp353);
*(&local0) = $tmp354;
goto block7;
block13:;
frost$core$Bit $tmp355 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s356);
bool $tmp357 = $tmp355.value;
if ($tmp357) goto block14; else goto block15;
block14:;
// line 135
org$frostlang$frostc$Position $tmp358 = *(&local4);
frost$core$Int64 $tmp359 = *(&local0);
frost$core$Int64 $tmp360 = (frost$core$Int64) {16};
frost$core$Int64 $tmp361 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp358, $tmp359, $tmp360);
*(&local0) = $tmp361;
goto block7;
block15:;
frost$core$Bit $tmp362 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s363);
bool $tmp364 = $tmp362.value;
if ($tmp364) goto block16; else goto block17;
block16:;
// line 138
org$frostlang$frostc$Position $tmp365 = *(&local4);
frost$core$Int64 $tmp366 = *(&local0);
frost$core$Int64 $tmp367 = (frost$core$Int64) {32};
frost$core$Int64 $tmp368 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp365, $tmp366, $tmp367);
*(&local0) = $tmp368;
goto block7;
block17:;
frost$core$Bit $tmp369 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s370);
bool $tmp371 = $tmp369.value;
if ($tmp371) goto block18; else goto block19;
block18:;
// line 141
org$frostlang$frostc$Position $tmp372 = *(&local4);
frost$core$Int64 $tmp373 = *(&local0);
frost$core$Int64 $tmp374 = (frost$core$Int64) {64};
frost$core$Int64 $tmp375 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp372, $tmp373, $tmp374);
*(&local0) = $tmp375;
goto block7;
block19:;
frost$core$Bit $tmp376 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s377);
bool $tmp378 = $tmp376.value;
if ($tmp378) goto block20; else goto block21;
block20:;
// line 144
org$frostlang$frostc$Position $tmp379 = *(&local4);
frost$core$Int64 $tmp380 = *(&local0);
frost$core$Int64 $tmp381 = (frost$core$Int64) {128};
frost$core$Int64 $tmp382 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp379, $tmp380, $tmp381);
*(&local0) = $tmp382;
goto block7;
block21:;
frost$core$Bit $tmp383 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s384);
bool $tmp385 = $tmp383.value;
if ($tmp385) goto block22; else goto block23;
block22:;
// line 147
org$frostlang$frostc$Position $tmp386 = *(&local4);
frost$core$Int64 $tmp387 = *(&local0);
frost$core$Int64 $tmp388 = (frost$core$Int64) {256};
frost$core$Int64 $tmp389 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp386, $tmp387, $tmp388);
*(&local0) = $tmp389;
goto block7;
block23:;
frost$core$Bit $tmp390 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s391);
bool $tmp392 = $tmp390.value;
if ($tmp392) goto block24; else goto block25;
block24:;
// line 150
org$frostlang$frostc$Position $tmp393 = *(&local4);
frost$core$Int64 $tmp394 = *(&local0);
frost$core$Int64 $tmp395 = (frost$core$Int64) {512};
frost$core$Int64 $tmp396 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp393, $tmp394, $tmp395);
*(&local0) = $tmp396;
goto block7;
block25:;
frost$core$Bit $tmp397 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s398);
bool $tmp399 = $tmp397.value;
if ($tmp399) goto block26; else goto block27;
block26:;
// line 153
org$frostlang$frostc$Position $tmp400 = *(&local4);
frost$core$Int64 $tmp401 = *(&local0);
frost$core$Int64 $tmp402 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp403 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp400, $tmp401, $tmp402);
*(&local0) = $tmp403;
goto block7;
block27:;
frost$core$Bit $tmp404 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s405);
bool $tmp406 = $tmp404.value;
if ($tmp406) goto block28; else goto block29;
block28:;
// line 156
org$frostlang$frostc$Position $tmp407 = *(&local4);
frost$core$Int64 $tmp408 = *(&local0);
frost$core$Int64 $tmp409 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp410 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp407, $tmp408, $tmp409);
*(&local0) = $tmp410;
goto block7;
block29:;
frost$core$Bit $tmp411 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s412);
bool $tmp413 = $tmp411.value;
if ($tmp413) goto block30; else goto block31;
block30:;
// line 159
org$frostlang$frostc$Position $tmp414 = *(&local4);
frost$core$Int64 $tmp415 = *(&local0);
frost$core$Int64 $tmp416 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp417 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp414, $tmp415, $tmp416);
*(&local0) = $tmp417;
goto block7;
block31:;
frost$core$Bit $tmp418 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s419);
bool $tmp420 = $tmp418.value;
if ($tmp420) goto block32; else goto block33;
block32:;
// line 162
org$frostlang$frostc$Position $tmp421 = *(&local4);
frost$core$Int64 $tmp422 = *(&local0);
frost$core$Int64 $tmp423 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp424 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp421, $tmp422, $tmp423);
*(&local0) = $tmp424;
goto block7;
block33:;
frost$core$Bit $tmp425 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s426);
bool $tmp427 = $tmp425.value;
if ($tmp427) goto block34; else goto block35;
block34:;
// line 165
org$frostlang$frostc$Position $tmp428 = *(&local4);
frost$core$Int64 $tmp429 = *(&local0);
frost$core$Int64 $tmp430 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp431 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp428, $tmp429, $tmp430);
*(&local0) = $tmp431;
goto block7;
block35:;
frost$core$Bit $tmp432 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s433);
bool $tmp434 = $tmp432.value;
if ($tmp434) goto block36; else goto block37;
block36:;
// line 168
org$frostlang$frostc$Position $tmp435 = *(&local4);
frost$core$Int64 $tmp436 = *(&local0);
frost$core$Int64 $tmp437 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp438 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp435, $tmp436, $tmp437);
*(&local0) = $tmp438;
goto block7;
block37:;
frost$core$Bit $tmp439 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s440);
bool $tmp441 = $tmp439.value;
if ($tmp441) goto block38; else goto block39;
block38:;
// line 171
frost$collections$Array* $tmp442 = *(&local1);
frost$core$Bit $tmp443 = frost$core$Bit$init$builtin_bit($tmp442 == NULL);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block40; else goto block41;
block40:;
// line 172
frost$collections$Array* $tmp445 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp445);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$collections$Array* $tmp446 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local1) = $tmp445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
goto block41;
block41:;
// line 174
frost$core$Method* $tmp447 = *(&local2);
org$frostlang$frostc$Position $tmp448 = *(&local4);
frost$core$String* $tmp449 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp450 = *(&local8);
frost$core$Int8** $tmp451 = &$tmp447->pointer;
frost$core$Int8* $tmp452 = *$tmp451;
frost$core$Immutable** $tmp453 = &$tmp447->target;
frost$core$Immutable* $tmp454 = *$tmp453;
bool $tmp455 = $tmp454 != ((frost$core$Immutable*) NULL);
if ($tmp455) goto block44; else goto block45;
block45:;
frost$core$Bit $tmp457 = (($fn456) $tmp452)(param0, $tmp448, $tmp449, $tmp450);
*(&local9) = $tmp457;
goto block46;
block44:;
frost$core$Bit $tmp459 = (($fn458) $tmp452)($tmp454, param0, $tmp448, $tmp449, $tmp450);
*(&local9) = $tmp459;
goto block46;
block46:;
frost$core$Bit $tmp460 = *(&local9);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block42; else goto block43;
block42:;
// line 175
frost$collections$Array* $tmp462 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp463 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp464 = (frost$core$Int64) {0};
frost$core$String* $tmp465 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp466 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp463, $tmp464, $tmp465, $tmp466);
frost$collections$Array$add$frost$collections$Array$T($tmp462, ((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp467 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block43:;
goto block7;
block39:;
frost$core$Bit $tmp468 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s469);
bool $tmp470 = $tmp468.value;
if ($tmp470) goto block47; else goto block48;
block47:;
// line 180
frost$collections$Array* $tmp471 = *(&local1);
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit($tmp471 == NULL);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block49; else goto block50;
block49:;
// line 181
frost$collections$Array* $tmp474 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$collections$Array* $tmp475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local1) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
goto block50;
block50:;
// line 183
frost$core$Method* $tmp476 = *(&local2);
org$frostlang$frostc$Position $tmp477 = *(&local4);
frost$core$String* $tmp478 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp479 = *(&local8);
frost$core$Int8** $tmp480 = &$tmp476->pointer;
frost$core$Int8* $tmp481 = *$tmp480;
frost$core$Immutable** $tmp482 = &$tmp476->target;
frost$core$Immutable* $tmp483 = *$tmp482;
bool $tmp484 = $tmp483 != ((frost$core$Immutable*) NULL);
if ($tmp484) goto block53; else goto block54;
block54:;
frost$core$Bit $tmp486 = (($fn485) $tmp481)(param0, $tmp477, $tmp478, $tmp479);
*(&local10) = $tmp486;
goto block55;
block53:;
frost$core$Bit $tmp488 = (($fn487) $tmp481)($tmp483, param0, $tmp477, $tmp478, $tmp479);
*(&local10) = $tmp488;
goto block55;
block55:;
frost$core$Bit $tmp489 = *(&local10);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block51; else goto block52;
block51:;
// line 184
frost$collections$Array* $tmp491 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp492 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp493 = (frost$core$Int64) {1};
frost$core$String* $tmp494 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp495 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp492, $tmp493, $tmp494, $tmp495);
frost$collections$Array$add$frost$collections$Array$T($tmp491, ((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp496 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block52:;
goto block7;
block48:;
frost$core$Bit $tmp497 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s498);
bool $tmp499 = $tmp497.value;
if ($tmp499) goto block56; else goto block57;
block56:;
// line 189
frost$collections$Array* $tmp500 = *(&local1);
frost$core$Bit $tmp501 = frost$core$Bit$init$builtin_bit($tmp500 == NULL);
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block58; else goto block59;
block58:;
// line 190
frost$collections$Array* $tmp503 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp503);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$collections$Array* $tmp504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local1) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
goto block59;
block59:;
// line 192
frost$core$Method* $tmp505 = *(&local2);
org$frostlang$frostc$Position $tmp506 = *(&local4);
frost$core$String* $tmp507 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp508 = *(&local8);
frost$core$Int8** $tmp509 = &$tmp505->pointer;
frost$core$Int8* $tmp510 = *$tmp509;
frost$core$Immutable** $tmp511 = &$tmp505->target;
frost$core$Immutable* $tmp512 = *$tmp511;
bool $tmp513 = $tmp512 != ((frost$core$Immutable*) NULL);
if ($tmp513) goto block62; else goto block63;
block63:;
frost$core$Bit $tmp515 = (($fn514) $tmp510)(param0, $tmp506, $tmp507, $tmp508);
*(&local11) = $tmp515;
goto block64;
block62:;
frost$core$Bit $tmp517 = (($fn516) $tmp510)($tmp512, param0, $tmp506, $tmp507, $tmp508);
*(&local11) = $tmp517;
goto block64;
block64:;
frost$core$Bit $tmp518 = *(&local11);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block60; else goto block61;
block60:;
// line 193
frost$collections$Array* $tmp520 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp521 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp522 = (frost$core$Int64) {2};
frost$core$String* $tmp523 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp524 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp521, $tmp522, $tmp523, $tmp524);
frost$collections$Array$add$frost$collections$Array$T($tmp520, ((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// line 194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp525 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block61;
block61:;
goto block7;
block57:;
frost$core$Bit $tmp526 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s527);
bool $tmp528 = $tmp526.value;
if ($tmp528) goto block65; else goto block66;
block65:;
// line 198
frost$collections$Array* $tmp529 = *(&local1);
frost$core$Bit $tmp530 = frost$core$Bit$init$builtin_bit($tmp529 == NULL);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block67; else goto block68;
block67:;
// line 199
frost$collections$Array* $tmp532 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$collections$Array* $tmp533 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local1) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
goto block68;
block68:;
// line 201
frost$core$Method* $tmp534 = *(&local2);
org$frostlang$frostc$Position $tmp535 = *(&local4);
frost$core$String* $tmp536 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp537 = *(&local8);
frost$core$Int8** $tmp538 = &$tmp534->pointer;
frost$core$Int8* $tmp539 = *$tmp538;
frost$core$Immutable** $tmp540 = &$tmp534->target;
frost$core$Immutable* $tmp541 = *$tmp540;
bool $tmp542 = $tmp541 != ((frost$core$Immutable*) NULL);
if ($tmp542) goto block71; else goto block72;
block72:;
frost$core$Bit $tmp544 = (($fn543) $tmp539)(param0, $tmp535, $tmp536, $tmp537);
*(&local12) = $tmp544;
goto block73;
block71:;
frost$core$Bit $tmp546 = (($fn545) $tmp539)($tmp541, param0, $tmp535, $tmp536, $tmp537);
*(&local12) = $tmp546;
goto block73;
block73:;
frost$core$Bit $tmp547 = *(&local12);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block69; else goto block70;
block69:;
// line 202
frost$collections$Array* $tmp549 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp550 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp551 = (frost$core$Int64) {3};
frost$core$String* $tmp552 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp553 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp550, $tmp551, $tmp552, $tmp553);
frost$collections$Array$add$frost$collections$Array$T($tmp549, ((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// line 203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp554 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block70:;
goto block7;
block66:;
frost$core$Bit $tmp555 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp333, &$s556);
bool $tmp557 = $tmp555.value;
if ($tmp557) goto block74; else goto block75;
block74:;
// line 207
frost$collections$Array* $tmp558 = *(&local1);
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558 == NULL);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block76; else goto block77;
block76:;
// line 208
frost$collections$Array* $tmp561 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp561);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$collections$Array* $tmp562 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local1) = $tmp561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
goto block77;
block77:;
// line 210
frost$core$Method* $tmp563 = *(&local2);
org$frostlang$frostc$Position $tmp564 = *(&local4);
frost$core$String* $tmp565 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp566 = *(&local8);
frost$core$Int8** $tmp567 = &$tmp563->pointer;
frost$core$Int8* $tmp568 = *$tmp567;
frost$core$Immutable** $tmp569 = &$tmp563->target;
frost$core$Immutable* $tmp570 = *$tmp569;
bool $tmp571 = $tmp570 != ((frost$core$Immutable*) NULL);
if ($tmp571) goto block80; else goto block81;
block81:;
frost$core$Bit $tmp573 = (($fn572) $tmp568)(param0, $tmp564, $tmp565, $tmp566);
*(&local13) = $tmp573;
goto block82;
block80:;
frost$core$Bit $tmp575 = (($fn574) $tmp568)($tmp570, param0, $tmp564, $tmp565, $tmp566);
*(&local13) = $tmp575;
goto block82;
block82:;
frost$core$Bit $tmp576 = *(&local13);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block78; else goto block79;
block78:;
// line 211
frost$collections$Array* $tmp578 = *(&local1);
org$frostlang$frostc$Annotations$Expression* $tmp579 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp580 = (frost$core$Int64) {4};
frost$core$String* $tmp581 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp582 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp579, $tmp580, $tmp581, $tmp582);
frost$collections$Array$add$frost$collections$Array$T($tmp578, ((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
// line 212
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp583 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block79;
block79:;
goto block7;
block75:;
// line 216
org$frostlang$frostc$Position $tmp584 = *(&local4);
frost$core$String* $tmp585 = *(&local5);
frost$core$String* $tmp586 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s587, $tmp585);
frost$core$String* $tmp588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp586, &$s589);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp584, $tmp588);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
goto block7;
block7:;
// line 219
org$frostlang$frostc$ASTNode* $tmp590 = *(&local8);
frost$core$Bit $tmp591 = frost$core$Bit$init$builtin_bit($tmp590 != NULL);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block83; else goto block84;
block83:;
// line 220
org$frostlang$frostc$Position $tmp593 = *(&local4);
frost$core$String* $tmp594 = *(&local5);
frost$core$String* $tmp595 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s596, $tmp594);
frost$core$String* $tmp597 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp595, &$s598);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp593, $tmp597);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
goto block84;
block84:;
org$frostlang$frostc$ASTNode* $tmp599 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp600 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp601 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp602 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 224
frost$core$Int64 $tmp603 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s604, $tmp603);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp312);
org$frostlang$frostc$ASTNode* $tmp605 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// line 228
org$frostlang$frostc$Annotations* $tmp606 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp607 = *(&local0);
frost$collections$Array* $tmp608 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp606, $tmp607, ((frost$collections$ListView*) $tmp608));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Method* $tmp609 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$collections$Array* $tmp610 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp606;

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
org$frostlang$frostc$FieldDecl* local17 = NULL;
// line 233
*(&local0) = ((frost$core$String*) NULL);
// line 235
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block1; else goto block3;
block1:;
// line 236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp613 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 239
frost$core$Int64* $tmp614 = &param3->$rawValue;
frost$core$Int64 $tmp615 = *$tmp614;
frost$core$Int64 $tmp616 = (frost$core$Int64) {40};
frost$core$Bit $tmp617 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp615, $tmp616);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp619 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp620 = *$tmp619;
*(&local1) = $tmp620;
frost$core$String** $tmp621 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp622 = *$tmp621;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
frost$core$String* $tmp623 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local2) = $tmp622;
// line 241
frost$core$String* $tmp624 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$String* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local0) = $tmp624;
frost$core$String* $tmp626 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 244
frost$core$Int64 $tmp627 = (frost$core$Int64) {244};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s628, $tmp627);
abort(); // unreachable
block4:;
goto block2;
block2:;
// line 248
org$frostlang$frostc$Annotations* $tmp629 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
org$frostlang$frostc$Annotations* $tmp630 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local3) = $tmp629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// line 249
// line 250
frost$core$Int64* $tmp631 = &param5->$rawValue;
frost$core$Int64 $tmp632 = *$tmp631;
frost$core$Int64 $tmp633 = (frost$core$Int64) {52};
frost$core$Bit $tmp634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp636 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp637 = *$tmp636;
org$frostlang$frostc$Variable$Kind* $tmp638 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp639 = *$tmp638;
*(&local5) = $tmp639;
org$frostlang$frostc$FixedArray** $tmp640 = (org$frostlang$frostc$FixedArray**) (param5->$data + 24);
org$frostlang$frostc$FixedArray* $tmp641 = *$tmp640;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
org$frostlang$frostc$FixedArray* $tmp642 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local6) = $tmp641;
// line 252
org$frostlang$frostc$Variable$Kind $tmp643 = *(&local5);
frost$core$Int64 $tmp644 = $tmp643.$rawValue;
frost$core$Int64 $tmp645 = (frost$core$Int64) {0};
frost$core$Bit $tmp646 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp644, $tmp645);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block11; else goto block12;
block11:;
// line 254
frost$core$Int64 $tmp648 = (frost$core$Int64) {0};
org$frostlang$frostc$FieldDecl$Kind $tmp649 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp648);
*(&local4) = $tmp649;
goto block10;
block12:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {1};
frost$core$Bit $tmp651 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp644, $tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block13; else goto block14;
block13:;
// line 257
frost$core$Int64 $tmp653 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp654 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp653);
*(&local4) = $tmp654;
goto block10;
block14:;
frost$core$Int64 $tmp655 = (frost$core$Int64) {2};
frost$core$Bit $tmp656 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp644, $tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block15; else goto block16;
block15:;
// line 260
frost$core$Int64 $tmp658 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp659 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp658);
*(&local4) = $tmp659;
// line 261
org$frostlang$frostc$Annotations* $tmp660 = *(&local3);
frost$core$Int64* $tmp661 = &$tmp660->flags;
frost$core$Int64 $tmp662 = *$tmp661;
frost$core$Int64 $tmp663 = (frost$core$Int64) {16};
frost$core$Int64 $tmp664 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp662, $tmp663);
frost$core$Int64* $tmp665 = &$tmp660->flags;
*$tmp665 = $tmp664;
goto block10;
block16:;
frost$core$Int64 $tmp666 = (frost$core$Int64) {3};
frost$core$Bit $tmp667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp644, $tmp666);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block17; else goto block10;
block17:;
// line 264
frost$core$Int64 $tmp669 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp670 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp669);
*(&local4) = $tmp670;
goto block10;
block10:;
// line 267
org$frostlang$frostc$FixedArray* $tmp671 = *(&local6);
ITable* $tmp672 = ((frost$collections$Iterable*) $tmp671)->$class->itable;
while ($tmp672->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp672 = $tmp672->next;
}
$fn674 $tmp673 = $tmp672->methods[0];
frost$collections$Iterator* $tmp675 = $tmp673(((frost$collections$Iterable*) $tmp671));
goto block18;
block18:;
ITable* $tmp676 = $tmp675->$class->itable;
while ($tmp676->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp676 = $tmp676->next;
}
$fn678 $tmp677 = $tmp676->methods[0];
frost$core$Bit $tmp679 = $tmp677($tmp675);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block20; else goto block19;
block19:;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp681 = $tmp675->$class->itable;
while ($tmp681->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp681 = $tmp681->next;
}
$fn683 $tmp682 = $tmp681->methods[1];
frost$core$Object* $tmp684 = $tmp682($tmp675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp684)));
org$frostlang$frostc$ASTNode* $tmp685 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local7) = ((org$frostlang$frostc$ASTNode*) $tmp684);
// line 268
org$frostlang$frostc$ASTNode* $tmp686 = *(&local7);
frost$core$Int64* $tmp687 = &$tmp686->$rawValue;
frost$core$Int64 $tmp688 = *$tmp687;
frost$core$Int64 $tmp689 = (frost$core$Int64) {14};
frost$core$Bit $tmp690 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp688, $tmp689);
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp692 = (org$frostlang$frostc$Position*) ($tmp686->$data + 0);
org$frostlang$frostc$Position $tmp693 = *$tmp692;
*(&local8) = $tmp693;
org$frostlang$frostc$ASTNode** $tmp694 = (org$frostlang$frostc$ASTNode**) ($tmp686->$data + 16);
org$frostlang$frostc$ASTNode* $tmp695 = *$tmp694;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
org$frostlang$frostc$ASTNode* $tmp696 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local9) = $tmp695;
org$frostlang$frostc$ASTNode** $tmp697 = (org$frostlang$frostc$ASTNode**) ($tmp686->$data + 24);
org$frostlang$frostc$ASTNode* $tmp698 = *$tmp697;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
org$frostlang$frostc$ASTNode* $tmp699 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local10) = $tmp698;
// line 270
*(&local11) = ((frost$core$String*) NULL);
// line 271
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 272
org$frostlang$frostc$ASTNode* $tmp700 = *(&local9);
frost$core$Int64* $tmp701 = &$tmp700->$rawValue;
frost$core$Int64 $tmp702 = *$tmp701;
frost$core$Int64 $tmp703 = (frost$core$Int64) {22};
frost$core$Bit $tmp704 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp702, $tmp703);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp706 = (org$frostlang$frostc$Position*) ($tmp700->$data + 0);
org$frostlang$frostc$Position $tmp707 = *$tmp706;
frost$core$String** $tmp708 = (frost$core$String**) ($tmp700->$data + 16);
frost$core$String* $tmp709 = *$tmp708;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$String* $tmp710 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local13) = $tmp709;
// line 274
frost$core$String* $tmp711 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$String* $tmp712 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local11) = $tmp711;
// line 275
org$frostlang$frostc$Type* $tmp713 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
org$frostlang$frostc$Type* $tmp714 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local12) = $tmp713;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$String* $tmp715 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local13) = ((frost$core$String*) NULL);
goto block24;
block26:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {47};
frost$core$Bit $tmp717 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp702, $tmp716);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp719 = (org$frostlang$frostc$Position*) ($tmp700->$data + 0);
org$frostlang$frostc$Position $tmp720 = *$tmp719;
frost$core$String** $tmp721 = (frost$core$String**) ($tmp700->$data + 16);
frost$core$String* $tmp722 = *$tmp721;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$String* $tmp723 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local14) = $tmp722;
org$frostlang$frostc$ASTNode** $tmp724 = (org$frostlang$frostc$ASTNode**) ($tmp700->$data + 24);
org$frostlang$frostc$ASTNode* $tmp725 = *$tmp724;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
org$frostlang$frostc$ASTNode* $tmp726 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local15) = $tmp725;
// line 278
frost$core$String* $tmp727 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
frost$core$String* $tmp728 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local11) = $tmp727;
// line 279
org$frostlang$frostc$ASTNode* $tmp729 = *(&local15);
org$frostlang$frostc$Type* $tmp730 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp729);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
org$frostlang$frostc$Type* $tmp731 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local12) = $tmp730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
org$frostlang$frostc$ASTNode* $tmp732 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp733 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local14) = ((frost$core$String*) NULL);
goto block24;
block28:;
// line 282
frost$core$Int64 $tmp734 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s735, $tmp734);
abort(); // unreachable
block24:;
// line 285
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 286
org$frostlang$frostc$ASTNode* $tmp736 = *(&local10);
frost$core$Bit $tmp737 = frost$core$Bit$init$builtin_bit($tmp736 == NULL);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block33; else goto block31;
block33:;
org$frostlang$frostc$Annotations* $tmp739 = *(&local3);
frost$core$Bit $tmp740 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp739);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Type* $tmp742 = *(&local12);
org$frostlang$frostc$Type$Kind* $tmp743 = &$tmp742->typeKind;
org$frostlang$frostc$Type$Kind $tmp744 = *$tmp743;
org$frostlang$frostc$Type$Kind$wrapper* $tmp745;
$tmp745 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp745->value = $tmp744;
frost$core$Int64 $tmp746 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp747 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp746);
org$frostlang$frostc$Type$Kind$wrapper* $tmp748;
$tmp748 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp748->value = $tmp747;
ITable* $tmp749 = ((frost$core$Equatable*) $tmp745)->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$core$Bit $tmp752 = $tmp750(((frost$core$Equatable*) $tmp745), ((frost$core$Equatable*) $tmp748));
bool $tmp753 = $tmp752.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp748)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp745)));
if ($tmp753) goto block29; else goto block31;
block29:;
// line 288
org$frostlang$frostc$ASTNode* $tmp754 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp755 = (frost$core$Int64) {31};
org$frostlang$frostc$Position $tmp756 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp754, $tmp755, $tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
org$frostlang$frostc$ASTNode* $tmp757 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local16) = $tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
goto block30;
block31:;
// line 1
// line 291
org$frostlang$frostc$ASTNode* $tmp758 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
org$frostlang$frostc$ASTNode* $tmp759 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local16) = $tmp758;
goto block30;
block30:;
// line 293
org$frostlang$frostc$FieldDecl* $tmp760 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp761 = *(&local8);
frost$core$String* $tmp762 = *(&local0);
org$frostlang$frostc$Annotations* $tmp763 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp764 = *(&local4);
frost$core$String* $tmp765 = *(&local11);
org$frostlang$frostc$Type* $tmp766 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp767 = *(&local16);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp760, param1, $tmp761, $tmp762, $tmp763, $tmp764, $tmp765, $tmp766, $tmp767);
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
org$frostlang$frostc$FieldDecl* $tmp768 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local17) = $tmp760;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// line 295
org$frostlang$frostc$SymbolTable** $tmp769 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp770 = *$tmp769;
org$frostlang$frostc$FieldDecl* $tmp771 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp770, ((org$frostlang$frostc$Symbol*) $tmp771));
// line 296
frost$collections$Array** $tmp772 = &param1->fields;
frost$collections$Array* $tmp773 = *$tmp772;
org$frostlang$frostc$FieldDecl* $tmp774 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp773, ((frost$core$Object*) $tmp774));
org$frostlang$frostc$FieldDecl* $tmp775 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp776 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp777 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp778 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp779 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp780 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 299
frost$core$Int64 $tmp781 = (frost$core$Int64) {299};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s782, $tmp781);
abort(); // unreachable
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp684);
org$frostlang$frostc$ASTNode* $tmp783 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
org$frostlang$frostc$FixedArray* $tmp784 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block7;
block9:;
// line 305
frost$core$Int64 $tmp785 = (frost$core$Int64) {305};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s786, $tmp785);
abort(); // unreachable
block7:;
org$frostlang$frostc$Annotations* $tmp787 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp788 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
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
frost$core$Int64* $tmp789 = &param1->$rawValue;
frost$core$Int64 $tmp790 = *$tmp789;
frost$core$Int64 $tmp791 = (frost$core$Int64) {1};
frost$core$Bit $tmp792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp791);
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp794 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp795 = *$tmp794;
org$frostlang$frostc$FixedArray** $tmp796 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp797 = *$tmp796;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
org$frostlang$frostc$FixedArray* $tmp798 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
*(&local0) = $tmp797;
// line 314
frost$core$Int64 $tmp799 = (frost$core$Int64) {0};
*(&local1) = $tmp799;
// line 315
org$frostlang$frostc$FixedArray* $tmp800 = *(&local0);
ITable* $tmp801 = ((frost$collections$Iterable*) $tmp800)->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
frost$collections$Iterator* $tmp804 = $tmp802(((frost$collections$Iterable*) $tmp800));
goto block4;
block4:;
ITable* $tmp805 = $tmp804->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
frost$core$Bit $tmp808 = $tmp806($tmp804);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block6; else goto block5;
block5:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp810 = $tmp804->$class->itable;
while ($tmp810->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[1];
frost$core$Object* $tmp813 = $tmp811($tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp813)));
org$frostlang$frostc$ASTNode* $tmp814 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp813);
// line 316
frost$core$Int64 $tmp815 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp816 = *(&local2);
frost$core$Int64 $tmp817 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp816);
int64_t $tmp818 = $tmp815.value;
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818 + $tmp819;
frost$core$Int64 $tmp821 = (frost$core$Int64) {$tmp820};
*(&local1) = $tmp821;
frost$core$Frost$unref$frost$core$Object$Q($tmp813);
org$frostlang$frostc$ASTNode* $tmp822 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// line 318
frost$core$Int64 $tmp823 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp824 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp823;
block3:;
frost$core$Int64 $tmp825 = (frost$core$Int64) {2};
frost$core$Bit $tmp826 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp825);
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp828 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp829 = *$tmp828;
org$frostlang$frostc$ASTNode** $tmp830 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp831 = *$tmp830;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
org$frostlang$frostc$ASTNode* $tmp832 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local3) = $tmp831;
org$frostlang$frostc$ASTNode** $tmp833 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp834 = *$tmp833;
// line 321
org$frostlang$frostc$ASTNode* $tmp835 = *(&local3);
frost$core$Int64 $tmp836 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp835);
org$frostlang$frostc$ASTNode* $tmp837 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp836;
block8:;
frost$core$Int64 $tmp838 = (frost$core$Int64) {3};
frost$core$Bit $tmp839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block9; else goto block10;
block9:;
// line 324
frost$core$Int64 $tmp841 = (frost$core$Int64) {0};
return $tmp841;
block10:;
frost$core$Int64 $tmp842 = (frost$core$Int64) {4};
frost$core$Bit $tmp843 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp842);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block11; else goto block12;
block11:;
// line 327
frost$core$Int64 $tmp845 = (frost$core$Int64) {0};
return $tmp845;
block12:;
frost$core$Int64 $tmp846 = (frost$core$Int64) {5};
frost$core$Bit $tmp847 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp846);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp849 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp850 = *$tmp849;
org$frostlang$frostc$ASTNode** $tmp851 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp852 = *$tmp851;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
org$frostlang$frostc$ASTNode* $tmp853 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local4) = $tmp852;
org$frostlang$frostc$expression$Binary$Operator* $tmp854 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp855 = *$tmp854;
org$frostlang$frostc$ASTNode** $tmp856 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp857 = *$tmp856;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
org$frostlang$frostc$ASTNode* $tmp858 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local5) = $tmp857;
// line 330
frost$core$Int64 $tmp859 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp860 = *(&local4);
frost$core$Int64 $tmp861 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp860);
int64_t $tmp862 = $tmp859.value;
int64_t $tmp863 = $tmp861.value;
int64_t $tmp864 = $tmp862 + $tmp863;
frost$core$Int64 $tmp865 = (frost$core$Int64) {$tmp864};
org$frostlang$frostc$ASTNode* $tmp866 = *(&local5);
frost$core$Int64 $tmp867 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp866);
int64_t $tmp868 = $tmp865.value;
int64_t $tmp869 = $tmp867.value;
int64_t $tmp870 = $tmp868 + $tmp869;
frost$core$Int64 $tmp871 = (frost$core$Int64) {$tmp870};
org$frostlang$frostc$ASTNode* $tmp872 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp873 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp871;
block14:;
frost$core$Int64 $tmp874 = (frost$core$Int64) {6};
frost$core$Bit $tmp875 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp874);
bool $tmp876 = $tmp875.value;
if ($tmp876) goto block15; else goto block16;
block15:;
// line 333
frost$core$Int64 $tmp877 = (frost$core$Int64) {1};
return $tmp877;
block16:;
frost$core$Int64 $tmp878 = (frost$core$Int64) {7};
frost$core$Bit $tmp879 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp878);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp881 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp882 = *$tmp881;
org$frostlang$frostc$FixedArray** $tmp883 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp884 = *$tmp883;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
org$frostlang$frostc$FixedArray* $tmp885 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local6) = $tmp884;
// line 336
frost$core$Int64 $tmp886 = (frost$core$Int64) {0};
*(&local7) = $tmp886;
// line 337
org$frostlang$frostc$FixedArray* $tmp887 = *(&local6);
ITable* $tmp888 = ((frost$collections$Iterable*) $tmp887)->$class->itable;
while ($tmp888->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp888 = $tmp888->next;
}
$fn890 $tmp889 = $tmp888->methods[0];
frost$collections$Iterator* $tmp891 = $tmp889(((frost$collections$Iterable*) $tmp887));
goto block19;
block19:;
ITable* $tmp892 = $tmp891->$class->itable;
while ($tmp892->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp892 = $tmp892->next;
}
$fn894 $tmp893 = $tmp892->methods[0];
frost$core$Bit $tmp895 = $tmp893($tmp891);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp897 = $tmp891->$class->itable;
while ($tmp897->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp897 = $tmp897->next;
}
$fn899 $tmp898 = $tmp897->methods[1];
frost$core$Object* $tmp900 = $tmp898($tmp891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp900)));
org$frostlang$frostc$ASTNode* $tmp901 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp900);
// line 338
frost$core$Int64 $tmp902 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp903 = *(&local8);
frost$core$Int64 $tmp904 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp903);
int64_t $tmp905 = $tmp902.value;
int64_t $tmp906 = $tmp904.value;
int64_t $tmp907 = $tmp905 + $tmp906;
frost$core$Int64 $tmp908 = (frost$core$Int64) {$tmp907};
*(&local7) = $tmp908;
frost$core$Frost$unref$frost$core$Object$Q($tmp900);
org$frostlang$frostc$ASTNode* $tmp909 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// line 340
frost$core$Int64 $tmp910 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp911 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp910;
block18:;
frost$core$Int64 $tmp912 = (frost$core$Int64) {8};
frost$core$Bit $tmp913 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp912);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block22; else goto block23;
block22:;
// line 343
frost$core$Int64 $tmp915 = (frost$core$Int64) {1};
return $tmp915;
block23:;
frost$core$Int64 $tmp916 = (frost$core$Int64) {9};
frost$core$Bit $tmp917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp916);
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp919 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp920 = *$tmp919;
org$frostlang$frostc$ASTNode** $tmp921 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp922 = *$tmp921;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
org$frostlang$frostc$ASTNode* $tmp923 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local9) = $tmp922;
org$frostlang$frostc$FixedArray** $tmp924 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp925 = *$tmp924;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
org$frostlang$frostc$FixedArray* $tmp926 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local10) = $tmp925;
// line 346
org$frostlang$frostc$ASTNode* $tmp927 = *(&local9);
frost$core$Int64 $tmp928 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp927);
*(&local11) = $tmp928;
// line 347
org$frostlang$frostc$FixedArray* $tmp929 = *(&local10);
ITable* $tmp930 = ((frost$collections$Iterable*) $tmp929)->$class->itable;
while ($tmp930->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[0];
frost$collections$Iterator* $tmp933 = $tmp931(((frost$collections$Iterable*) $tmp929));
goto block26;
block26:;
ITable* $tmp934 = $tmp933->$class->itable;
while ($tmp934->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp934 = $tmp934->next;
}
$fn936 $tmp935 = $tmp934->methods[0];
frost$core$Bit $tmp937 = $tmp935($tmp933);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp939 = $tmp933->$class->itable;
while ($tmp939->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
frost$core$Object* $tmp942 = $tmp940($tmp933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp942)));
org$frostlang$frostc$ASTNode* $tmp943 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp942);
// line 348
frost$core$Int64 $tmp944 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp945 = *(&local12);
frost$core$Int64 $tmp946 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp945);
int64_t $tmp947 = $tmp944.value;
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947 + $tmp948;
frost$core$Int64 $tmp950 = (frost$core$Int64) {$tmp949};
*(&local11) = $tmp950;
frost$core$Frost$unref$frost$core$Object$Q($tmp942);
org$frostlang$frostc$ASTNode* $tmp951 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// line 350
frost$core$Int64 $tmp952 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp953 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp954 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp952;
block25:;
frost$core$Int64 $tmp955 = (frost$core$Int64) {11};
frost$core$Bit $tmp956 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp955);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp958 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp959 = *$tmp958;
org$frostlang$frostc$ASTNode** $tmp960 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp961 = *$tmp960;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
org$frostlang$frostc$ASTNode* $tmp962 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local13) = $tmp961;
org$frostlang$frostc$ChoiceCase** $tmp963 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp964 = *$tmp963;
frost$core$Int64* $tmp965 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp966 = *$tmp965;
// line 353
org$frostlang$frostc$ASTNode* $tmp967 = *(&local13);
frost$core$Int64 $tmp968 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp967);
org$frostlang$frostc$ASTNode* $tmp969 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp968;
block30:;
frost$core$Int64 $tmp970 = (frost$core$Int64) {13};
frost$core$Bit $tmp971 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp970);
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block31; else goto block32;
block31:;
// line 356
frost$core$Int64 $tmp973 = (frost$core$Int64) {1};
return $tmp973;
block32:;
frost$core$Int64 $tmp974 = (frost$core$Int64) {14};
frost$core$Bit $tmp975 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp974);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp977 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp978 = *$tmp977;
org$frostlang$frostc$ASTNode** $tmp979 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp980 = *$tmp979;
org$frostlang$frostc$ASTNode** $tmp981 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp982 = *$tmp981;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
org$frostlang$frostc$ASTNode* $tmp983 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local14) = $tmp982;
// line 359
org$frostlang$frostc$ASTNode* $tmp984 = *(&local14);
frost$core$Bit $tmp985 = frost$core$Bit$init$builtin_bit($tmp984 == NULL);
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block35; else goto block36;
block35:;
// line 360
frost$core$Int64 $tmp987 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp988 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp987;
block36:;
// line 362
org$frostlang$frostc$ASTNode* $tmp989 = *(&local14);
frost$core$Int64 $tmp990 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp989);
org$frostlang$frostc$ASTNode* $tmp991 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp990;
block34:;
frost$core$Int64 $tmp992 = (frost$core$Int64) {15};
frost$core$Bit $tmp993 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp992);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp995 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp996 = *$tmp995;
frost$core$String** $tmp997 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp998 = *$tmp997;
org$frostlang$frostc$FixedArray** $tmp999 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1000 = *$tmp999;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
org$frostlang$frostc$FixedArray* $tmp1001 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local15) = $tmp1000;
org$frostlang$frostc$ASTNode** $tmp1002 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1003 = *$tmp1002;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
org$frostlang$frostc$ASTNode* $tmp1004 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local16) = $tmp1003;
// line 365
org$frostlang$frostc$ASTNode* $tmp1005 = *(&local16);
frost$core$Int64 $tmp1006 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1005);
*(&local17) = $tmp1006;
// line 366
org$frostlang$frostc$FixedArray* $tmp1007 = *(&local15);
ITable* $tmp1008 = ((frost$collections$Iterable*) $tmp1007)->$class->itable;
while ($tmp1008->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1008 = $tmp1008->next;
}
$fn1010 $tmp1009 = $tmp1008->methods[0];
frost$collections$Iterator* $tmp1011 = $tmp1009(((frost$collections$Iterable*) $tmp1007));
goto block39;
block39:;
ITable* $tmp1012 = $tmp1011->$class->itable;
while ($tmp1012->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1012 = $tmp1012->next;
}
$fn1014 $tmp1013 = $tmp1012->methods[0];
frost$core$Bit $tmp1015 = $tmp1013($tmp1011);
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block41; else goto block40;
block40:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1017 = $tmp1011->$class->itable;
while ($tmp1017->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1017 = $tmp1017->next;
}
$fn1019 $tmp1018 = $tmp1017->methods[1];
frost$core$Object* $tmp1020 = $tmp1018($tmp1011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1020)));
org$frostlang$frostc$ASTNode* $tmp1021 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1020);
// line 367
frost$core$Int64 $tmp1022 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1023 = *(&local18);
frost$core$Int64 $tmp1024 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1023);
int64_t $tmp1025 = $tmp1022.value;
int64_t $tmp1026 = $tmp1024.value;
int64_t $tmp1027 = $tmp1025 + $tmp1026;
frost$core$Int64 $tmp1028 = (frost$core$Int64) {$tmp1027};
*(&local17) = $tmp1028;
frost$core$Frost$unref$frost$core$Object$Q($tmp1020);
org$frostlang$frostc$ASTNode* $tmp1029 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// line 369
frost$core$Int64 $tmp1030 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1031 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1032 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1032));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1030;
block38:;
frost$core$Int64 $tmp1033 = (frost$core$Int64) {16};
frost$core$Bit $tmp1034 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1033);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1036 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1037 = *$tmp1036;
org$frostlang$frostc$ASTNode** $tmp1038 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1039 = *$tmp1038;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
org$frostlang$frostc$ASTNode* $tmp1040 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local19) = $tmp1039;
frost$core$String** $tmp1041 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1042 = *$tmp1041;
// line 372
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local19);
frost$core$Int64 $tmp1044 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1043);
org$frostlang$frostc$ASTNode* $tmp1045 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1044;
block43:;
frost$core$Int64 $tmp1046 = (frost$core$Int64) {17};
frost$core$Bit $tmp1047 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1046);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1049 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1050 = *$tmp1049;
org$frostlang$frostc$ASTNode** $tmp1051 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1052 = *$tmp1051;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
org$frostlang$frostc$ASTNode* $tmp1053 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local20) = $tmp1052;
frost$core$String** $tmp1054 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1055 = *$tmp1054;
org$frostlang$frostc$FixedArray** $tmp1056 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1057 = *$tmp1056;
// line 375
org$frostlang$frostc$ASTNode* $tmp1058 = *(&local20);
frost$core$Int64 $tmp1059 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1058);
org$frostlang$frostc$ASTNode* $tmp1060 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1059;
block45:;
frost$core$Int64 $tmp1061 = (frost$core$Int64) {20};
frost$core$Bit $tmp1062 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1061);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1064 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1065 = *$tmp1064;
frost$core$String** $tmp1066 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1067 = *$tmp1066;
org$frostlang$frostc$ASTNode** $tmp1068 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1069 = *$tmp1068;
org$frostlang$frostc$ASTNode** $tmp1070 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1071 = *$tmp1070;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
org$frostlang$frostc$ASTNode* $tmp1072 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local21) = $tmp1071;
org$frostlang$frostc$FixedArray** $tmp1073 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1074 = *$tmp1073;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
org$frostlang$frostc$FixedArray* $tmp1075 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local22) = $tmp1074;
// line 378
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local21);
frost$core$Int64 $tmp1077 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1076);
*(&local23) = $tmp1077;
// line 379
org$frostlang$frostc$FixedArray* $tmp1078 = *(&local22);
ITable* $tmp1079 = ((frost$collections$Iterable*) $tmp1078)->$class->itable;
while ($tmp1079->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1079 = $tmp1079->next;
}
$fn1081 $tmp1080 = $tmp1079->methods[0];
frost$collections$Iterator* $tmp1082 = $tmp1080(((frost$collections$Iterable*) $tmp1078));
goto block48;
block48:;
ITable* $tmp1083 = $tmp1082->$class->itable;
while ($tmp1083->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
frost$core$Bit $tmp1086 = $tmp1084($tmp1082);
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block50; else goto block49;
block49:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1088 = $tmp1082->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[1];
frost$core$Object* $tmp1091 = $tmp1089($tmp1082);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1091)));
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1091);
// line 380
frost$core$Int64 $tmp1093 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1094 = *(&local24);
frost$core$Int64 $tmp1095 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1094);
int64_t $tmp1096 = $tmp1093.value;
int64_t $tmp1097 = $tmp1095.value;
int64_t $tmp1098 = $tmp1096 + $tmp1097;
frost$core$Int64 $tmp1099 = (frost$core$Int64) {$tmp1098};
*(&local23) = $tmp1099;
frost$core$Frost$unref$frost$core$Object$Q($tmp1091);
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// line 382
frost$core$Int64 $tmp1101 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1102 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1103 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1101;
block47:;
frost$core$Int64 $tmp1104 = (frost$core$Int64) {21};
frost$core$Bit $tmp1105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1104);
bool $tmp1106 = $tmp1105.value;
if ($tmp1106) goto block51; else goto block52;
block51:;
// line 385
frost$core$Int64 $tmp1107 = (frost$core$Int64) {0};
return $tmp1107;
block52:;
frost$core$Int64 $tmp1108 = (frost$core$Int64) {22};
frost$core$Bit $tmp1109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1108);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block53; else goto block54;
block53:;
// line 388
frost$core$Int64 $tmp1111 = (frost$core$Int64) {1};
return $tmp1111;
block54:;
frost$core$Int64 $tmp1112 = (frost$core$Int64) {24};
frost$core$Bit $tmp1113 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1112);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1115 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1116 = *$tmp1115;
org$frostlang$frostc$ASTNode** $tmp1117 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1118 = *$tmp1117;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
org$frostlang$frostc$ASTNode* $tmp1119 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local25) = $tmp1118;
org$frostlang$frostc$FixedArray** $tmp1120 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1121 = *$tmp1120;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
org$frostlang$frostc$FixedArray* $tmp1122 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
*(&local26) = $tmp1121;
org$frostlang$frostc$ASTNode** $tmp1123 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1124 = *$tmp1123;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1124));
org$frostlang$frostc$ASTNode* $tmp1125 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local27) = $tmp1124;
// line 391
org$frostlang$frostc$ASTNode* $tmp1126 = *(&local25);
frost$core$Int64 $tmp1127 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1126);
*(&local28) = $tmp1127;
// line 392
org$frostlang$frostc$FixedArray* $tmp1128 = *(&local26);
ITable* $tmp1129 = ((frost$collections$Iterable*) $tmp1128)->$class->itable;
while ($tmp1129->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
frost$collections$Iterator* $tmp1132 = $tmp1130(((frost$collections$Iterable*) $tmp1128));
goto block57;
block57:;
ITable* $tmp1133 = $tmp1132->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
frost$core$Bit $tmp1136 = $tmp1134($tmp1132);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block59; else goto block58;
block58:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1138 = $tmp1132->$class->itable;
while ($tmp1138->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[1];
frost$core$Object* $tmp1141 = $tmp1139($tmp1132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1141)));
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1141);
// line 393
frost$core$Int64 $tmp1143 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1144 = *(&local29);
frost$core$Int64 $tmp1145 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1144);
int64_t $tmp1146 = $tmp1143.value;
int64_t $tmp1147 = $tmp1145.value;
int64_t $tmp1148 = $tmp1146 + $tmp1147;
frost$core$Int64 $tmp1149 = (frost$core$Int64) {$tmp1148};
*(&local28) = $tmp1149;
frost$core$Frost$unref$frost$core$Object$Q($tmp1141);
org$frostlang$frostc$ASTNode* $tmp1150 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// line 395
org$frostlang$frostc$ASTNode* $tmp1151 = *(&local27);
frost$core$Bit $tmp1152 = frost$core$Bit$init$builtin_bit($tmp1151 != NULL);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block60; else goto block61;
block60:;
// line 396
frost$core$Int64 $tmp1154 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1155 = *(&local27);
frost$core$Int64 $tmp1156 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1155);
int64_t $tmp1157 = $tmp1154.value;
int64_t $tmp1158 = $tmp1156.value;
int64_t $tmp1159 = $tmp1157 + $tmp1158;
frost$core$Int64 $tmp1160 = (frost$core$Int64) {$tmp1159};
*(&local28) = $tmp1160;
goto block61;
block61:;
// line 398
frost$core$Int64 $tmp1161 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1162 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1163 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1164 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1161;
block56:;
frost$core$Int64 $tmp1165 = (frost$core$Int64) {25};
frost$core$Bit $tmp1166 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1165);
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block62; else goto block63;
block62:;
// line 401
frost$core$Int64 $tmp1168 = (frost$core$Int64) {1};
return $tmp1168;
block63:;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {27};
frost$core$Bit $tmp1170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp1172 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1173 = *$tmp1172;
frost$core$String** $tmp1174 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1175 = *$tmp1174;
org$frostlang$frostc$FixedArray** $tmp1176 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1177 = *$tmp1176;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
org$frostlang$frostc$FixedArray* $tmp1178 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local30) = $tmp1177;
// line 404
frost$core$Int64 $tmp1179 = (frost$core$Int64) {0};
*(&local31) = $tmp1179;
// line 405
org$frostlang$frostc$FixedArray* $tmp1180 = *(&local30);
ITable* $tmp1181 = ((frost$collections$Iterable*) $tmp1180)->$class->itable;
while ($tmp1181->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1181 = $tmp1181->next;
}
$fn1183 $tmp1182 = $tmp1181->methods[0];
frost$collections$Iterator* $tmp1184 = $tmp1182(((frost$collections$Iterable*) $tmp1180));
goto block66;
block66:;
ITable* $tmp1185 = $tmp1184->$class->itable;
while ($tmp1185->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1185 = $tmp1185->next;
}
$fn1187 $tmp1186 = $tmp1185->methods[0];
frost$core$Bit $tmp1188 = $tmp1186($tmp1184);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block68; else goto block67;
block67:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1190 = $tmp1184->$class->itable;
while ($tmp1190->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1190 = $tmp1190->next;
}
$fn1192 $tmp1191 = $tmp1190->methods[1];
frost$core$Object* $tmp1193 = $tmp1191($tmp1184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1193)));
org$frostlang$frostc$ASTNode* $tmp1194 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1193);
// line 406
frost$core$Int64 $tmp1195 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1196 = *(&local32);
frost$core$Int64 $tmp1197 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1196);
int64_t $tmp1198 = $tmp1195.value;
int64_t $tmp1199 = $tmp1197.value;
int64_t $tmp1200 = $tmp1198 + $tmp1199;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {$tmp1200};
*(&local31) = $tmp1201;
frost$core$Frost$unref$frost$core$Object$Q($tmp1193);
org$frostlang$frostc$ASTNode* $tmp1202 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
// line 408
frost$core$Int64 $tmp1203 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1204 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1203;
block65:;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {28};
frost$core$Bit $tmp1206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1205);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Position* $tmp1208 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1209 = *$tmp1208;
org$frostlang$frostc$ASTNode** $tmp1210 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1211 = *$tmp1210;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
org$frostlang$frostc$ASTNode* $tmp1212 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local33) = $tmp1211;
org$frostlang$frostc$FixedArray** $tmp1213 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1214 = *$tmp1213;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
org$frostlang$frostc$FixedArray* $tmp1215 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
*(&local34) = $tmp1214;
org$frostlang$frostc$FixedArray** $tmp1216 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1217 = *$tmp1216;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
org$frostlang$frostc$FixedArray* $tmp1218 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local35) = $tmp1217;
// line 411
org$frostlang$frostc$ASTNode* $tmp1219 = *(&local33);
frost$core$Int64 $tmp1220 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1219);
*(&local36) = $tmp1220;
// line 412
org$frostlang$frostc$FixedArray* $tmp1221 = *(&local34);
ITable* $tmp1222 = ((frost$collections$Iterable*) $tmp1221)->$class->itable;
while ($tmp1222->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1222 = $tmp1222->next;
}
$fn1224 $tmp1223 = $tmp1222->methods[0];
frost$collections$Iterator* $tmp1225 = $tmp1223(((frost$collections$Iterable*) $tmp1221));
goto block71;
block71:;
ITable* $tmp1226 = $tmp1225->$class->itable;
while ($tmp1226->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1226 = $tmp1226->next;
}
$fn1228 $tmp1227 = $tmp1226->methods[0];
frost$core$Bit $tmp1229 = $tmp1227($tmp1225);
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block73; else goto block72;
block72:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1231 = $tmp1225->$class->itable;
while ($tmp1231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1231 = $tmp1231->next;
}
$fn1233 $tmp1232 = $tmp1231->methods[1];
frost$core$Object* $tmp1234 = $tmp1232($tmp1225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1234)));
org$frostlang$frostc$ASTNode* $tmp1235 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1234);
// line 413
frost$core$Int64 $tmp1236 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1237 = *(&local37);
frost$core$Int64 $tmp1238 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1237);
int64_t $tmp1239 = $tmp1236.value;
int64_t $tmp1240 = $tmp1238.value;
int64_t $tmp1241 = $tmp1239 + $tmp1240;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {$tmp1241};
*(&local36) = $tmp1242;
frost$core$Frost$unref$frost$core$Object$Q($tmp1234);
org$frostlang$frostc$ASTNode* $tmp1243 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// line 415
org$frostlang$frostc$FixedArray* $tmp1244 = *(&local35);
frost$core$Bit $tmp1245 = frost$core$Bit$init$builtin_bit($tmp1244 != NULL);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block74; else goto block75;
block74:;
// line 416
org$frostlang$frostc$FixedArray* $tmp1247 = *(&local35);
ITable* $tmp1248 = ((frost$collections$Iterable*) $tmp1247)->$class->itable;
while ($tmp1248->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1248 = $tmp1248->next;
}
$fn1250 $tmp1249 = $tmp1248->methods[0];
frost$collections$Iterator* $tmp1251 = $tmp1249(((frost$collections$Iterable*) $tmp1247));
goto block76;
block76:;
ITable* $tmp1252 = $tmp1251->$class->itable;
while ($tmp1252->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1252 = $tmp1252->next;
}
$fn1254 $tmp1253 = $tmp1252->methods[0];
frost$core$Bit $tmp1255 = $tmp1253($tmp1251);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block78; else goto block77;
block77:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1257 = $tmp1251->$class->itable;
while ($tmp1257->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1257 = $tmp1257->next;
}
$fn1259 $tmp1258 = $tmp1257->methods[1];
frost$core$Object* $tmp1260 = $tmp1258($tmp1251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1260)));
org$frostlang$frostc$ASTNode* $tmp1261 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1260);
// line 417
frost$core$Int64 $tmp1262 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1263 = *(&local38);
frost$core$Int64 $tmp1264 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1263);
int64_t $tmp1265 = $tmp1262.value;
int64_t $tmp1266 = $tmp1264.value;
int64_t $tmp1267 = $tmp1265 + $tmp1266;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {$tmp1267};
*(&local36) = $tmp1268;
frost$core$Frost$unref$frost$core$Object$Q($tmp1260);
org$frostlang$frostc$ASTNode* $tmp1269 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
goto block75;
block75:;
// line 420
frost$core$Int64 $tmp1270 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1271 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1272 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1273 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1270;
block70:;
frost$core$Int64 $tmp1274 = (frost$core$Int64) {29};
frost$core$Bit $tmp1275 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1274);
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block79; else goto block80;
block79:;
// line 423
frost$core$Int64 $tmp1277 = (frost$core$Int64) {10};
return $tmp1277;
block80:;
frost$core$Int64 $tmp1278 = (frost$core$Int64) {31};
frost$core$Bit $tmp1279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1278);
bool $tmp1280 = $tmp1279.value;
if ($tmp1280) goto block81; else goto block82;
block81:;
// line 426
frost$core$Int64 $tmp1281 = (frost$core$Int64) {1};
return $tmp1281;
block82:;
frost$core$Int64 $tmp1282 = (frost$core$Int64) {32};
frost$core$Bit $tmp1283 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1282);
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block83; else goto block84;
block83:;
// line 429
frost$core$Int64 $tmp1285 = (frost$core$Int64) {0};
return $tmp1285;
block84:;
frost$core$Int64 $tmp1286 = (frost$core$Int64) {35};
frost$core$Bit $tmp1287 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1286);
bool $tmp1288 = $tmp1287.value;
if ($tmp1288) goto block85; else goto block86;
block85:;
// line 432
frost$core$Int64 $tmp1289 = (frost$core$Int64) {1};
return $tmp1289;
block86:;
frost$core$Int64 $tmp1290 = (frost$core$Int64) {36};
frost$core$Bit $tmp1291 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1290);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block87; else goto block88;
block87:;
// line 435
frost$core$Int64 $tmp1293 = (frost$core$Int64) {1};
return $tmp1293;
block88:;
frost$core$Int64 $tmp1294 = (frost$core$Int64) {37};
frost$core$Bit $tmp1295 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1294);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block89; else goto block90;
block89:;
// line 438
frost$core$Int64 $tmp1297 = (frost$core$Int64) {1};
return $tmp1297;
block90:;
frost$core$Int64 $tmp1298 = (frost$core$Int64) {38};
frost$core$Bit $tmp1299 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1298);
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp1301 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1302 = *$tmp1301;
org$frostlang$frostc$ASTNode** $tmp1303 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1304 = *$tmp1303;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
org$frostlang$frostc$ASTNode* $tmp1305 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local39) = $tmp1304;
// line 441
org$frostlang$frostc$ASTNode* $tmp1306 = *(&local39);
frost$core$Bit $tmp1307 = frost$core$Bit$init$builtin_bit($tmp1306 == NULL);
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block93; else goto block94;
block93:;
// line 442
frost$core$Int64 $tmp1309 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1309;
block94:;
// line 444
org$frostlang$frostc$ASTNode* $tmp1311 = *(&local39);
frost$core$Int64 $tmp1312 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1311);
org$frostlang$frostc$ASTNode* $tmp1313 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1312;
block92:;
frost$core$Int64 $tmp1314 = (frost$core$Int64) {39};
frost$core$Bit $tmp1315 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1314);
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block95; else goto block96;
block95:;
// line 447
frost$core$Int64 $tmp1317 = (frost$core$Int64) {1};
return $tmp1317;
block96:;
frost$core$Int64 $tmp1318 = (frost$core$Int64) {40};
frost$core$Bit $tmp1319 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1318);
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block97; else goto block98;
block97:;
// line 450
frost$core$Int64 $tmp1321 = (frost$core$Int64) {1};
return $tmp1321;
block98:;
frost$core$Int64 $tmp1322 = (frost$core$Int64) {41};
frost$core$Bit $tmp1323 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1322);
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block99; else goto block100;
block99:;
// line 453
frost$core$Int64 $tmp1325 = (frost$core$Int64) {1};
return $tmp1325;
block100:;
frost$core$Int64 $tmp1326 = (frost$core$Int64) {42};
frost$core$Bit $tmp1327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1326);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block101; else goto block102;
block101:;
// line 456
frost$core$Int64 $tmp1329 = (frost$core$Int64) {10};
return $tmp1329;
block102:;
frost$core$Int64 $tmp1330 = (frost$core$Int64) {45};
frost$core$Bit $tmp1331 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1330);
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block103; else goto block104;
block103:;
// line 459
frost$core$Int64 $tmp1333 = (frost$core$Int64) {0};
return $tmp1333;
block104:;
frost$core$Int64 $tmp1334 = (frost$core$Int64) {46};
frost$core$Bit $tmp1335 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1334);
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block105; else goto block106;
block105:;
// line 462
frost$core$Int64 $tmp1337 = (frost$core$Int64) {10};
return $tmp1337;
block106:;
frost$core$Int64 $tmp1338 = (frost$core$Int64) {48};
frost$core$Bit $tmp1339 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1338);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp1341 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1342 = *$tmp1341;
org$frostlang$frostc$expression$Unary$Operator* $tmp1343 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp1344 = *$tmp1343;
org$frostlang$frostc$ASTNode** $tmp1345 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1346 = *$tmp1345;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
org$frostlang$frostc$ASTNode* $tmp1347 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
*(&local40) = $tmp1346;
// line 465
frost$core$Int64 $tmp1348 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1349 = *(&local40);
frost$core$Int64 $tmp1350 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1349);
int64_t $tmp1351 = $tmp1348.value;
int64_t $tmp1352 = $tmp1350.value;
int64_t $tmp1353 = $tmp1351 + $tmp1352;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {$tmp1353};
org$frostlang$frostc$ASTNode* $tmp1355 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1354;
block108:;
frost$core$Int64 $tmp1356 = (frost$core$Int64) {49};
frost$core$Bit $tmp1357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1356);
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block109; else goto block110;
block109:;
// line 468
frost$core$Int64 $tmp1359 = (frost$core$Int64) {0};
return $tmp1359;
block110:;
frost$core$Int64 $tmp1360 = (frost$core$Int64) {50};
frost$core$Bit $tmp1361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1360);
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block111; else goto block112;
block111:;
// line 471
frost$core$Int64 $tmp1363 = (frost$core$Int64) {10};
return $tmp1363;
block112:;
frost$core$Int64 $tmp1364 = (frost$core$Int64) {52};
frost$core$Bit $tmp1365 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1364);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp1367 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1368 = *$tmp1367;
org$frostlang$frostc$Variable$Kind* $tmp1369 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp1370 = *$tmp1369;
org$frostlang$frostc$FixedArray** $tmp1371 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1372 = *$tmp1371;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
org$frostlang$frostc$FixedArray* $tmp1373 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local41) = $tmp1372;
// line 474
frost$core$Int64 $tmp1374 = (frost$core$Int64) {0};
*(&local42) = $tmp1374;
// line 475
org$frostlang$frostc$FixedArray* $tmp1375 = *(&local41);
ITable* $tmp1376 = ((frost$collections$Iterable*) $tmp1375)->$class->itable;
while ($tmp1376->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1376 = $tmp1376->next;
}
$fn1378 $tmp1377 = $tmp1376->methods[0];
frost$collections$Iterator* $tmp1379 = $tmp1377(((frost$collections$Iterable*) $tmp1375));
goto block115;
block115:;
ITable* $tmp1380 = $tmp1379->$class->itable;
while ($tmp1380->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[0];
frost$core$Bit $tmp1383 = $tmp1381($tmp1379);
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block117; else goto block116;
block116:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1385 = $tmp1379->$class->itable;
while ($tmp1385->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1385 = $tmp1385->next;
}
$fn1387 $tmp1386 = $tmp1385->methods[1];
frost$core$Object* $tmp1388 = $tmp1386($tmp1379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1388)));
org$frostlang$frostc$ASTNode* $tmp1389 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1388);
// line 476
frost$core$Int64 $tmp1390 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1391 = *(&local43);
frost$core$Int64 $tmp1392 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1391);
int64_t $tmp1393 = $tmp1390.value;
int64_t $tmp1394 = $tmp1392.value;
int64_t $tmp1395 = $tmp1393 + $tmp1394;
frost$core$Int64 $tmp1396 = (frost$core$Int64) {$tmp1395};
*(&local42) = $tmp1396;
frost$core$Frost$unref$frost$core$Object$Q($tmp1388);
org$frostlang$frostc$ASTNode* $tmp1397 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block115;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
// line 478
frost$core$Int64 $tmp1398 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1399 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1398;
block114:;
frost$core$Int64 $tmp1400 = (frost$core$Int64) {53};
frost$core$Bit $tmp1401 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1400);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block118; else goto block119;
block118:;
org$frostlang$frostc$Position* $tmp1403 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1404 = *$tmp1403;
org$frostlang$frostc$FixedArray** $tmp1405 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1406 = *$tmp1405;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
org$frostlang$frostc$FixedArray* $tmp1407 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local44) = $tmp1406;
org$frostlang$frostc$FixedArray** $tmp1408 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1409 = *$tmp1408;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
org$frostlang$frostc$FixedArray* $tmp1410 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local45) = $tmp1409;
// line 481
frost$core$Int64 $tmp1411 = (frost$core$Int64) {0};
*(&local46) = $tmp1411;
// line 482
org$frostlang$frostc$FixedArray* $tmp1412 = *(&local44);
ITable* $tmp1413 = ((frost$collections$Iterable*) $tmp1412)->$class->itable;
while ($tmp1413->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1413 = $tmp1413->next;
}
$fn1415 $tmp1414 = $tmp1413->methods[0];
frost$collections$Iterator* $tmp1416 = $tmp1414(((frost$collections$Iterable*) $tmp1412));
goto block120;
block120:;
ITable* $tmp1417 = $tmp1416->$class->itable;
while ($tmp1417->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1417 = $tmp1417->next;
}
$fn1419 $tmp1418 = $tmp1417->methods[0];
frost$core$Bit $tmp1420 = $tmp1418($tmp1416);
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block122; else goto block121;
block121:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1422 = $tmp1416->$class->itable;
while ($tmp1422->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1422 = $tmp1422->next;
}
$fn1424 $tmp1423 = $tmp1422->methods[1];
frost$core$Object* $tmp1425 = $tmp1423($tmp1416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1425)));
org$frostlang$frostc$ASTNode* $tmp1426 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1425);
// line 483
frost$core$Int64 $tmp1427 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1428 = *(&local47);
frost$core$Int64 $tmp1429 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1428);
int64_t $tmp1430 = $tmp1427.value;
int64_t $tmp1431 = $tmp1429.value;
int64_t $tmp1432 = $tmp1430 + $tmp1431;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {$tmp1432};
*(&local46) = $tmp1433;
frost$core$Frost$unref$frost$core$Object$Q($tmp1425);
org$frostlang$frostc$ASTNode* $tmp1434 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block120;
block122:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
// line 485
org$frostlang$frostc$FixedArray* $tmp1435 = *(&local45);
ITable* $tmp1436 = ((frost$collections$Iterable*) $tmp1435)->$class->itable;
while ($tmp1436->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1436 = $tmp1436->next;
}
$fn1438 $tmp1437 = $tmp1436->methods[0];
frost$collections$Iterator* $tmp1439 = $tmp1437(((frost$collections$Iterable*) $tmp1435));
goto block123;
block123:;
ITable* $tmp1440 = $tmp1439->$class->itable;
while ($tmp1440->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[0];
frost$core$Bit $tmp1443 = $tmp1441($tmp1439);
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block125; else goto block124;
block124:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1445 = $tmp1439->$class->itable;
while ($tmp1445->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1445 = $tmp1445->next;
}
$fn1447 $tmp1446 = $tmp1445->methods[1];
frost$core$Object* $tmp1448 = $tmp1446($tmp1439);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1448)));
org$frostlang$frostc$ASTNode* $tmp1449 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1448);
// line 486
frost$core$Int64 $tmp1450 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1451 = *(&local48);
frost$core$Int64 $tmp1452 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1451);
int64_t $tmp1453 = $tmp1450.value;
int64_t $tmp1454 = $tmp1452.value;
int64_t $tmp1455 = $tmp1453 + $tmp1454;
frost$core$Int64 $tmp1456 = (frost$core$Int64) {$tmp1455};
*(&local46) = $tmp1456;
frost$core$Frost$unref$frost$core$Object$Q($tmp1448);
org$frostlang$frostc$ASTNode* $tmp1457 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
// line 488
frost$core$Int64 $tmp1458 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1459 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1460 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1458;
block119:;
frost$core$Int64 $tmp1461 = (frost$core$Int64) {54};
frost$core$Bit $tmp1462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp790, $tmp1461);
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp1464 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1465 = *$tmp1464;
frost$core$String** $tmp1466 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1467 = *$tmp1466;
org$frostlang$frostc$ASTNode** $tmp1468 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1469 = *$tmp1468;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
org$frostlang$frostc$ASTNode* $tmp1470 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local49) = $tmp1469;
org$frostlang$frostc$FixedArray** $tmp1471 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1472 = *$tmp1471;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
org$frostlang$frostc$FixedArray* $tmp1473 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local50) = $tmp1472;
// line 491
org$frostlang$frostc$ASTNode* $tmp1474 = *(&local49);
frost$core$Int64 $tmp1475 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1474);
*(&local51) = $tmp1475;
// line 492
org$frostlang$frostc$FixedArray* $tmp1476 = *(&local50);
ITable* $tmp1477 = ((frost$collections$Iterable*) $tmp1476)->$class->itable;
while ($tmp1477->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1477 = $tmp1477->next;
}
$fn1479 $tmp1478 = $tmp1477->methods[0];
frost$collections$Iterator* $tmp1480 = $tmp1478(((frost$collections$Iterable*) $tmp1476));
goto block128;
block128:;
ITable* $tmp1481 = $tmp1480->$class->itable;
while ($tmp1481->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1481 = $tmp1481->next;
}
$fn1483 $tmp1482 = $tmp1481->methods[0];
frost$core$Bit $tmp1484 = $tmp1482($tmp1480);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block130; else goto block129;
block129:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1486 = $tmp1480->$class->itable;
while ($tmp1486->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1486 = $tmp1486->next;
}
$fn1488 $tmp1487 = $tmp1486->methods[1];
frost$core$Object* $tmp1489 = $tmp1487($tmp1480);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1489)));
org$frostlang$frostc$ASTNode* $tmp1490 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1489);
// line 493
frost$core$Int64 $tmp1491 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1492 = *(&local52);
frost$core$Int64 $tmp1493 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1492);
int64_t $tmp1494 = $tmp1491.value;
int64_t $tmp1495 = $tmp1493.value;
int64_t $tmp1496 = $tmp1494 + $tmp1495;
frost$core$Int64 $tmp1497 = (frost$core$Int64) {$tmp1496};
*(&local51) = $tmp1497;
frost$core$Frost$unref$frost$core$Object$Q($tmp1489);
org$frostlang$frostc$ASTNode* $tmp1498 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block128;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// line 495
frost$core$Int64 $tmp1499 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1500 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1501 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1499;
block127:;
// line 498
frost$core$Int64 $tmp1502 = (frost$core$Int64) {498};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1503, $tmp1502);
abort(); // unreachable
block1:;
goto block131;
block131:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 504
frost$core$Weak** $tmp1504 = &param0->compiler;
frost$core$Weak* $tmp1505 = *$tmp1504;
frost$core$Object* $tmp1506 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1505);
org$frostlang$frostc$Compiler$Settings** $tmp1507 = &((org$frostlang$frostc$Compiler*) $tmp1506)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1508 = *$tmp1507;
frost$core$Int64* $tmp1509 = &$tmp1508->optimizationLevel;
frost$core$Int64 $tmp1510 = *$tmp1509;
frost$core$Int64 $tmp1511 = (frost$core$Int64) {0};
int64_t $tmp1512 = $tmp1510.value;
int64_t $tmp1513 = $tmp1511.value;
bool $tmp1514 = $tmp1512 > $tmp1513;
frost$core$Bit $tmp1515 = (frost$core$Bit) {$tmp1514};
bool $tmp1516 = $tmp1515.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1506);
if ($tmp1516) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp1517 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1518 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1517);
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1520 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block1; else goto block2;
block1:;
// line 506
frost$core$Int64 $tmp1522 = (frost$core$Int64) {0};
*(&local0) = $tmp1522;
// line 507
ITable* $tmp1523 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1523->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1523 = $tmp1523->next;
}
$fn1525 $tmp1524 = $tmp1523->methods[0];
frost$collections$Iterator* $tmp1526 = $tmp1524(((frost$collections$Iterable*) param2));
goto block5;
block5:;
ITable* $tmp1527 = $tmp1526->$class->itable;
while ($tmp1527->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[0];
frost$core$Bit $tmp1530 = $tmp1528($tmp1526);
bool $tmp1531 = $tmp1530.value;
if ($tmp1531) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1532 = $tmp1526->$class->itable;
while ($tmp1532->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1532 = $tmp1532->next;
}
$fn1534 $tmp1533 = $tmp1532->methods[1];
frost$core$Object* $tmp1535 = $tmp1533($tmp1526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1535)));
org$frostlang$frostc$ASTNode* $tmp1536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp1535);
// line 508
frost$core$Int64 $tmp1537 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1538 = *(&local1);
frost$core$Int64 $tmp1539 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1538);
int64_t $tmp1540 = $tmp1537.value;
int64_t $tmp1541 = $tmp1539.value;
int64_t $tmp1542 = $tmp1540 + $tmp1541;
frost$core$Int64 $tmp1543 = (frost$core$Int64) {$tmp1542};
*(&local0) = $tmp1543;
// line 509
frost$core$Int64 $tmp1544 = *(&local0);
frost$core$Int64 $tmp1545 = (frost$core$Int64) {10};
int64_t $tmp1546 = $tmp1544.value;
int64_t $tmp1547 = $tmp1545.value;
bool $tmp1548 = $tmp1546 > $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block8; else goto block9;
block8:;
// line 510
frost$core$Bit $tmp1551 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1535);
org$frostlang$frostc$ASTNode* $tmp1552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
return $tmp1551;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1535);
org$frostlang$frostc$ASTNode* $tmp1553 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
// line 513
frost$core$Bit $tmp1554 = frost$core$Bit$init$builtin_bit(true);
return $tmp1554;
block2:;
// line 515
frost$core$Bit $tmp1555 = frost$core$Bit$init$builtin_bit(false);
return $tmp1555;

}
org$frostlang$frostc$MethodDecl* org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Annotations* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$String* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
frost$core$String* local9 = NULL;
frost$core$String* local10 = NULL;
org$frostlang$frostc$ASTNode* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
frost$core$String* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Type* local16 = NULL;
// line 522
*(&local0) = ((frost$core$String*) NULL);
// line 524
frost$core$Bit $tmp1556 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block1; else goto block3;
block1:;
// line 525
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 528
frost$core$Int64* $tmp1559 = &param3->$rawValue;
frost$core$Int64 $tmp1560 = *$tmp1559;
frost$core$Int64 $tmp1561 = (frost$core$Int64) {40};
frost$core$Bit $tmp1562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1560, $tmp1561);
bool $tmp1563 = $tmp1562.value;
if ($tmp1563) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1564 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1565 = *$tmp1564;
*(&local1) = $tmp1565;
frost$core$String** $tmp1566 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1567 = *$tmp1566;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
frost$core$String* $tmp1568 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local2) = $tmp1567;
// line 530
frost$core$String* $tmp1569 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
frost$core$String* $tmp1570 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1570));
*(&local0) = $tmp1569;
frost$core$String* $tmp1571 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 533
frost$core$Int64 $tmp1572 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1573, $tmp1572);
abort(); // unreachable
block4:;
goto block2;
block2:;
// line 537
org$frostlang$frostc$Annotations* $tmp1574 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
org$frostlang$frostc$Annotations* $tmp1575 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local3) = $tmp1574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
// line 538
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1576;
$tmp1576 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1576->value = param5;
frost$core$Int64 $tmp1577 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1578 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1577);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1579;
$tmp1579 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1579->value = $tmp1578;
ITable* $tmp1580 = ((frost$core$Equatable*) $tmp1576)->$class->itable;
while ($tmp1580->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1580 = $tmp1580->next;
}
$fn1582 $tmp1581 = $tmp1580->methods[1];
frost$core$Bit $tmp1583 = $tmp1581(((frost$core$Equatable*) $tmp1576), ((frost$core$Equatable*) $tmp1579));
bool $tmp1584 = $tmp1583.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1579)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1576)));
if ($tmp1584) goto block10; else goto block9;
block10:;
org$frostlang$frostc$Annotations** $tmp1585 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1586 = *$tmp1585;
frost$core$Bit $tmp1587 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block7; else goto block9;
block9:;
org$frostlang$frostc$Annotations* $tmp1589 = *(&local3);
frost$core$Bit $tmp1590 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block7; else goto block8;
block7:;
// line 539
org$frostlang$frostc$Annotations* $tmp1592 = *(&local3);
frost$core$Int64* $tmp1593 = &$tmp1592->flags;
frost$core$Int64 $tmp1594 = *$tmp1593;
frost$core$Int64 $tmp1595 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1596 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1594, $tmp1595);
frost$core$Int64* $tmp1597 = &$tmp1592->flags;
*$tmp1597 = $tmp1596;
goto block8;
block8:;
// line 541
*(&local4) = ((frost$collections$Array*) NULL);
// line 542
frost$core$Bit $tmp1598 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1599 = $tmp1598.value;
if ($tmp1599) goto block11; else goto block13;
block11:;
// line 543
frost$collections$Array* $tmp1600 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$collections$Array* $tmp1601 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local4) = $tmp1600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
// line 544
frost$core$String** $tmp1602 = &param1->name;
frost$core$String* $tmp1603 = *$tmp1602;
frost$core$String* $tmp1604 = frost$core$String$get_asString$R$frost$core$String($tmp1603);
frost$core$String* $tmp1605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1604, &$s1606);
frost$core$String* $tmp1607 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1605, param6);
frost$core$String* $tmp1608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1607, &$s1609);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$String* $tmp1610 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
*(&local5) = $tmp1608;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
// line 545
ITable* $tmp1611 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1611->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1611 = $tmp1611->next;
}
$fn1613 $tmp1612 = $tmp1611->methods[0];
frost$collections$Iterator* $tmp1614 = $tmp1612(((frost$collections$Iterable*) param7));
goto block14;
block14:;
ITable* $tmp1615 = $tmp1614->$class->itable;
while ($tmp1615->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1615 = $tmp1615->next;
}
$fn1617 $tmp1616 = $tmp1615->methods[0];
frost$core$Bit $tmp1618 = $tmp1616($tmp1614);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1620 = $tmp1614->$class->itable;
while ($tmp1620->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1620 = $tmp1620->next;
}
$fn1622 $tmp1621 = $tmp1620->methods[1];
frost$core$Object* $tmp1623 = $tmp1621($tmp1614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1623)));
org$frostlang$frostc$ASTNode* $tmp1624 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp1623);
// line 546
*(&local7) = ((frost$core$String*) NULL);
// line 547
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 548
org$frostlang$frostc$ASTNode* $tmp1625 = *(&local6);
frost$core$Int64* $tmp1626 = &$tmp1625->$rawValue;
frost$core$Int64 $tmp1627 = *$tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {22};
frost$core$Bit $tmp1629 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1627, $tmp1628);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp1631 = (org$frostlang$frostc$Position*) ($tmp1625->$data + 0);
org$frostlang$frostc$Position $tmp1632 = *$tmp1631;
frost$core$String** $tmp1633 = (frost$core$String**) ($tmp1625->$data + 16);
frost$core$String* $tmp1634 = *$tmp1633;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
frost$core$String* $tmp1635 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local9) = $tmp1634;
// line 550
frost$core$String* $tmp1636 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$String* $tmp1637 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
*(&local7) = $tmp1636;
// line 551
org$frostlang$frostc$Type* $tmp1638 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
org$frostlang$frostc$Type* $tmp1639 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
*(&local8) = $tmp1638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$String* $tmp1640 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp1641 = (frost$core$Int64) {47};
frost$core$Bit $tmp1642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1627, $tmp1641);
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp1644 = (org$frostlang$frostc$Position*) ($tmp1625->$data + 0);
org$frostlang$frostc$Position $tmp1645 = *$tmp1644;
frost$core$String** $tmp1646 = (frost$core$String**) ($tmp1625->$data + 16);
frost$core$String* $tmp1647 = *$tmp1646;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$String* $tmp1648 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local10) = $tmp1647;
org$frostlang$frostc$ASTNode** $tmp1649 = (org$frostlang$frostc$ASTNode**) ($tmp1625->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1650 = *$tmp1649;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1650));
org$frostlang$frostc$ASTNode* $tmp1651 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local11) = $tmp1650;
// line 554
frost$core$String* $tmp1652 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
frost$core$String* $tmp1653 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local7) = $tmp1652;
// line 555
org$frostlang$frostc$ASTNode* $tmp1654 = *(&local11);
org$frostlang$frostc$Type* $tmp1655 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1654);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
org$frostlang$frostc$Type* $tmp1656 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local8) = $tmp1655;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
org$frostlang$frostc$ASTNode* $tmp1657 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1658 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block21:;
// line 558
frost$core$Int64 $tmp1659 = (frost$core$Int64) {558};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1660, $tmp1659);
abort(); // unreachable
block17:;
// line 561
frost$collections$Array* $tmp1661 = *(&local4);
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp1662 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp1663 = *(&local6);
$fn1665 $tmp1664 = ($fn1665) $tmp1663->$class->vtable[2];
org$frostlang$frostc$Position $tmp1666 = $tmp1664($tmp1663);
frost$core$String* $tmp1667 = *(&local5);
frost$core$String* $tmp1668 = *(&local7);
org$frostlang$frostc$Type* $tmp1669 = *(&local8);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp1662, $tmp1666, $tmp1667, $tmp1668, $tmp1669);
frost$collections$Array$add$frost$collections$Array$T($tmp1661, ((frost$core$Object*) $tmp1662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
org$frostlang$frostc$Type* $tmp1670 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1671 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1623);
org$frostlang$frostc$ASTNode* $tmp1672 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
frost$core$String* $tmp1673 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local5) = ((frost$core$String*) NULL);
goto block12;
block13:;
// line 1
// line 566
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1674 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local4) = ((frost$collections$Array*) NULL);
goto block12;
block12:;
// line 568
frost$collections$Array* $tmp1675 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1675);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
frost$collections$Array* $tmp1676 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
*(&local12) = $tmp1675;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1675));
// line 569
ITable* $tmp1677 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1677->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1677 = $tmp1677->next;
}
$fn1679 $tmp1678 = $tmp1677->methods[0];
frost$collections$Iterator* $tmp1680 = $tmp1678(((frost$collections$Iterable*) param8));
goto block22;
block22:;
ITable* $tmp1681 = $tmp1680->$class->itable;
while ($tmp1681->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1681 = $tmp1681->next;
}
$fn1683 $tmp1682 = $tmp1681->methods[0];
frost$core$Bit $tmp1684 = $tmp1682($tmp1680);
bool $tmp1685 = $tmp1684.value;
if ($tmp1685) goto block24; else goto block23;
block23:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1686 = $tmp1680->$class->itable;
while ($tmp1686->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1686 = $tmp1686->next;
}
$fn1688 $tmp1687 = $tmp1686->methods[1];
frost$core$Object* $tmp1689 = $tmp1687($tmp1680);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1689)));
org$frostlang$frostc$ASTNode* $tmp1690 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp1689);
// line 570
org$frostlang$frostc$ASTNode* $tmp1691 = *(&local13);
frost$core$Int64* $tmp1692 = &$tmp1691->$rawValue;
frost$core$Int64 $tmp1693 = *$tmp1692;
frost$core$Int64 $tmp1694 = (frost$core$Int64) {34};
frost$core$Bit $tmp1695 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1693, $tmp1694);
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp1697 = (org$frostlang$frostc$Position*) ($tmp1691->$data + 0);
org$frostlang$frostc$Position $tmp1698 = *$tmp1697;
frost$core$String** $tmp1699 = (frost$core$String**) ($tmp1691->$data + 16);
frost$core$String* $tmp1700 = *$tmp1699;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$String* $tmp1701 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1701));
*(&local14) = $tmp1700;
org$frostlang$frostc$ASTNode** $tmp1702 = (org$frostlang$frostc$ASTNode**) ($tmp1691->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1703 = *$tmp1702;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
org$frostlang$frostc$ASTNode* $tmp1704 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local15) = $tmp1703;
// line 572
frost$collections$Array* $tmp1705 = *(&local12);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1706 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1707 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp1708 = *(&local15);
org$frostlang$frostc$Type* $tmp1709 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1708);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1706, $tmp1707, $tmp1709);
frost$collections$Array$add$frost$collections$Array$T($tmp1705, ((frost$core$Object*) $tmp1706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
org$frostlang$frostc$ASTNode* $tmp1710 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1711 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local14) = ((frost$core$String*) NULL);
goto block25;
block27:;
// line 575
frost$core$Int64 $tmp1712 = (frost$core$Int64) {575};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1713, $tmp1712);
abort(); // unreachable
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1689);
org$frostlang$frostc$ASTNode* $tmp1714 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
// line 579
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
// line 580
frost$core$Bit $tmp1715 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block28; else goto block30;
block28:;
// line 581
org$frostlang$frostc$Type* $tmp1717 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
org$frostlang$frostc$Type* $tmp1718 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
*(&local16) = $tmp1717;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
goto block29;
block30:;
// line 1
// line 584
org$frostlang$frostc$Type* $tmp1719 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
org$frostlang$frostc$Type* $tmp1720 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local16) = $tmp1719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
goto block29;
block29:;
// line 586
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1721;
$tmp1721 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1721->value = param5;
frost$core$Int64 $tmp1722 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1723 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1722);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1724;
$tmp1724 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1724->value = $tmp1723;
ITable* $tmp1725 = ((frost$core$Equatable*) $tmp1721)->$class->itable;
while ($tmp1725->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1725 = $tmp1725->next;
}
$fn1727 $tmp1726 = $tmp1725->methods[0];
frost$core$Bit $tmp1728 = $tmp1726(((frost$core$Equatable*) $tmp1721), ((frost$core$Equatable*) $tmp1724));
bool $tmp1729 = $tmp1728.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1724)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1721)));
if ($tmp1729) goto block33; else goto block32;
block33:;
org$frostlang$frostc$Type* $tmp1730 = *(&local16);
org$frostlang$frostc$Type* $tmp1731 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1732 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1730, $tmp1731);
bool $tmp1733 = $tmp1732.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
if ($tmp1733) goto block31; else goto block32;
block31:;
// line 587
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1734);
goto block32;
block32:;
// line 589
frost$core$Bit $tmp1735 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1736 = $tmp1735.value;
if ($tmp1736) goto block36; else goto block35;
block36:;
org$frostlang$frostc$Annotations* $tmp1737 = *(&local3);
frost$core$Bit $tmp1738 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1737, ((frost$collections$ListView*) param10));
bool $tmp1739 = $tmp1738.value;
if ($tmp1739) goto block34; else goto block35;
block34:;
// line 590
org$frostlang$frostc$Annotations* $tmp1740 = *(&local3);
frost$core$Int64* $tmp1741 = &$tmp1740->flags;
frost$core$Int64 $tmp1742 = *$tmp1741;
frost$core$Int64 $tmp1743 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1744 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1742, $tmp1743);
frost$core$Int64* $tmp1745 = &$tmp1740->flags;
*$tmp1745 = $tmp1744;
goto block35;
block35:;
// line 592
frost$core$Bit $tmp1746 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1747 = $tmp1746.value;
if ($tmp1747) goto block40; else goto block38;
block40:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1748 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1749 = *$tmp1748;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1750;
$tmp1750 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1750->value = $tmp1749;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp1752 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1751);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1753;
$tmp1753 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1753->value = $tmp1752;
ITable* $tmp1754 = ((frost$core$Equatable*) $tmp1750)->$class->itable;
while ($tmp1754->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1754 = $tmp1754->next;
}
$fn1756 $tmp1755 = $tmp1754->methods[0];
frost$core$Bit $tmp1757 = $tmp1755(((frost$core$Equatable*) $tmp1750), ((frost$core$Equatable*) $tmp1753));
bool $tmp1758 = $tmp1757.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1753)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1750)));
if ($tmp1758) goto block39; else goto block38;
block39:;
org$frostlang$frostc$Annotations** $tmp1759 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1760 = *$tmp1759;
frost$core$Bit $tmp1761 = org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit($tmp1760);
frost$core$Bit $tmp1762 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1761);
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block37; else goto block38;
block37:;
// line 594
org$frostlang$frostc$Annotations* $tmp1764 = *(&local3);
frost$core$Int64* $tmp1765 = &$tmp1764->flags;
frost$core$Int64 $tmp1766 = *$tmp1765;
frost$core$Int64 $tmp1767 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1768 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1766, $tmp1767);
frost$core$Int64 $tmp1769 = (frost$core$Int64) {0};
int64_t $tmp1770 = $tmp1768.value;
int64_t $tmp1771 = $tmp1769.value;
bool $tmp1772 = $tmp1770 != $tmp1771;
frost$core$Bit $tmp1773 = (frost$core$Bit) {$tmp1772};
bool $tmp1774 = $tmp1773.value;
if ($tmp1774) goto block41; else goto block42;
block41:;
// line 595
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1775);
goto block42;
block42:;
// line 598
org$frostlang$frostc$Annotations* $tmp1776 = *(&local3);
frost$core$Int64* $tmp1777 = &$tmp1776->flags;
frost$core$Int64 $tmp1778 = *$tmp1777;
frost$core$Int64 $tmp1779 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1780 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1778, $tmp1779);
frost$core$Int64* $tmp1781 = &$tmp1776->flags;
*$tmp1781 = $tmp1780;
goto block38;
block38:;
// line 600
org$frostlang$frostc$MethodDecl* $tmp1782 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp1783 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1784 = *(&local3);
frost$collections$Array* $tmp1785 = *(&local4);
frost$collections$Array* $tmp1786 = *(&local12);
org$frostlang$frostc$Type* $tmp1787 = *(&local16);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1782, param1, param2, $tmp1783, $tmp1784, param5, param6, $tmp1785, $tmp1786, $tmp1787, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
org$frostlang$frostc$Type* $tmp1788 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1789 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1790 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp1791 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1792 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1782;

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
// line 605
frost$core$Int64* $tmp1793 = &param2->$rawValue;
frost$core$Int64 $tmp1794 = *$tmp1793;
frost$core$Int64 $tmp1795 = (frost$core$Int64) {18};
frost$core$Bit $tmp1796 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1794, $tmp1795);
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1798 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1799 = *$tmp1798;
*(&local0) = $tmp1799;
org$frostlang$frostc$ASTNode** $tmp1800 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1801 = *$tmp1800;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
org$frostlang$frostc$ASTNode* $tmp1802 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
*(&local1) = $tmp1801;
org$frostlang$frostc$FixedArray** $tmp1803 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1804 = *$tmp1803;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
org$frostlang$frostc$FixedArray* $tmp1805 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
*(&local2) = $tmp1804;
org$frostlang$frostc$ASTNode** $tmp1806 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1807 = *$tmp1806;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
org$frostlang$frostc$ASTNode* $tmp1808 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local3) = $tmp1807;
// line 607
org$frostlang$frostc$Position $tmp1809 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1810 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1811 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1812 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp1809, $tmp1810, $tmp1811, $tmp1812);
org$frostlang$frostc$ASTNode* $tmp1813 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1813));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1814 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1815 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1816 = (frost$core$Int64) {29};
frost$core$Bit $tmp1817 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1794, $tmp1816);
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1819 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1820 = *$tmp1819;
*(&local4) = $tmp1820;
org$frostlang$frostc$ASTNode** $tmp1821 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1822 = *$tmp1821;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
org$frostlang$frostc$ASTNode* $tmp1823 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local5) = $tmp1822;
org$frostlang$frostc$FixedArray** $tmp1824 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1825 = *$tmp1824;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
org$frostlang$frostc$FixedArray* $tmp1826 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local6) = $tmp1825;
org$frostlang$frostc$MethodDecl$Kind* $tmp1827 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1828 = *$tmp1827;
*(&local7) = $tmp1828;
frost$core$String** $tmp1829 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1830 = *$tmp1829;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
frost$core$String* $tmp1831 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
*(&local8) = $tmp1830;
org$frostlang$frostc$FixedArray** $tmp1832 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1833 = *$tmp1832;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
org$frostlang$frostc$FixedArray* $tmp1834 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
*(&local9) = $tmp1833;
org$frostlang$frostc$FixedArray** $tmp1835 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1836 = *$tmp1835;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
org$frostlang$frostc$FixedArray* $tmp1837 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
*(&local10) = $tmp1836;
org$frostlang$frostc$ASTNode** $tmp1838 = (org$frostlang$frostc$ASTNode**) (param2->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1839 = *$tmp1838;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
org$frostlang$frostc$ASTNode* $tmp1840 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
*(&local11) = $tmp1839;
org$frostlang$frostc$FixedArray** $tmp1841 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1842 = *$tmp1841;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1842));
org$frostlang$frostc$FixedArray* $tmp1843 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1843));
*(&local12) = $tmp1842;
// line 611
org$frostlang$frostc$Position $tmp1844 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1845 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1846 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp1847 = *(&local7);
frost$core$String* $tmp1848 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1849 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1850 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp1851 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1852 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp1853 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp1844, $tmp1845, $tmp1846, $tmp1847, $tmp1848, $tmp1849, $tmp1850, $tmp1851, $tmp1852);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
org$frostlang$frostc$MethodDecl* $tmp1854 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
*(&local13) = $tmp1853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1853));
// line 613
org$frostlang$frostc$MethodDecl* $tmp1855 = *(&local13);
frost$core$Bit $tmp1856 = frost$core$Bit$init$builtin_bit($tmp1855 != NULL);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block6; else goto block7;
block6:;
// line 614
org$frostlang$frostc$SymbolTable** $tmp1858 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1859 = *$tmp1858;
org$frostlang$frostc$MethodDecl* $tmp1860 = *(&local13);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1859, ((org$frostlang$frostc$Symbol*) $tmp1860));
// line 615
frost$collections$Array** $tmp1861 = &param1->methods;
frost$collections$Array* $tmp1862 = *$tmp1861;
org$frostlang$frostc$MethodDecl* $tmp1863 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp1862, ((frost$core$Object*) $tmp1863));
goto block7;
block7:;
org$frostlang$frostc$MethodDecl* $tmp1864 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1865 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1866 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1867 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1868 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1869 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1870 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1871 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp1872 = (frost$core$Int64) {12};
frost$core$Bit $tmp1873 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1794, $tmp1872);
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1875 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1876 = *$tmp1875;
*(&local14) = $tmp1876;
org$frostlang$frostc$ASTNode** $tmp1877 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1878 = *$tmp1877;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
org$frostlang$frostc$ASTNode* $tmp1879 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local15) = $tmp1878;
org$frostlang$frostc$FixedArray** $tmp1880 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1881 = *$tmp1880;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
org$frostlang$frostc$FixedArray* $tmp1882 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1882));
*(&local16) = $tmp1881;
org$frostlang$frostc$ClassDecl$Kind* $tmp1883 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp1884 = *$tmp1883;
*(&local17) = $tmp1884;
frost$core$String** $tmp1885 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1886 = *$tmp1885;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
frost$core$String* $tmp1887 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local18) = $tmp1886;
org$frostlang$frostc$FixedArray** $tmp1888 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1889 = *$tmp1888;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
org$frostlang$frostc$FixedArray* $tmp1890 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local19) = $tmp1889;
org$frostlang$frostc$FixedArray** $tmp1891 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1892 = *$tmp1891;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
org$frostlang$frostc$FixedArray* $tmp1893 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
*(&local20) = $tmp1892;
org$frostlang$frostc$FixedArray** $tmp1894 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp1895 = *$tmp1894;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
org$frostlang$frostc$FixedArray* $tmp1896 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
*(&local21) = $tmp1895;
// line 620
frost$io$File** $tmp1897 = &param1->source;
frost$io$File* $tmp1898 = *$tmp1897;
frost$collections$MapView** $tmp1899 = &param1->aliases;
frost$collections$MapView* $tmp1900 = *$tmp1899;
frost$core$String** $tmp1901 = &param1->name;
frost$core$String* $tmp1902 = *$tmp1901;
org$frostlang$frostc$Position $tmp1903 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp1904 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1905 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp1906 = *(&local17);
frost$core$String* $tmp1907 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp1908 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp1909 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp1910 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp1911 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1898, $tmp1900, $tmp1902, $tmp1903, $tmp1904, $tmp1905, $tmp1906, $tmp1907, $tmp1908, $tmp1909, $tmp1910);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$ClassDecl* $tmp1912 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local22) = $tmp1911;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
// line 622
org$frostlang$frostc$ClassDecl* $tmp1913 = *(&local22);
frost$core$Bit $tmp1914 = frost$core$Bit$init$builtin_bit($tmp1913 != NULL);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block10; else goto block11;
block10:;
// line 623
org$frostlang$frostc$ClassDecl* $tmp1916 = *(&local22);
frost$core$Weak* $tmp1917 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp1917, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Weak** $tmp1918 = &$tmp1916->owner;
frost$core$Weak* $tmp1919 = *$tmp1918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Weak** $tmp1920 = &$tmp1916->owner;
*$tmp1920 = $tmp1917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
// line 624
frost$collections$Array** $tmp1921 = &param1->classes;
frost$collections$Array* $tmp1922 = *$tmp1921;
org$frostlang$frostc$ClassDecl* $tmp1923 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp1922, ((frost$core$Object*) $tmp1923));
// line 625
org$frostlang$frostc$ClassDecl* $tmp1924 = *(&local22);
frost$core$String** $tmp1925 = &$tmp1924->name;
frost$core$String* $tmp1926 = *$tmp1925;
frost$core$String** $tmp1927 = &param1->name;
frost$core$String* $tmp1928 = *$tmp1927;
frost$core$String* $tmp1929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1928, &$s1930);
frost$core$Bit $tmp1931 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1926, $tmp1929);
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1933 = (frost$core$Int64) {625};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1934, $tmp1933);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
// line 626
org$frostlang$frostc$SymbolTable** $tmp1935 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1936 = *$tmp1935;
org$frostlang$frostc$Alias* $tmp1937 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp1938 = *(&local22);
frost$core$String** $tmp1939 = &$tmp1938->name;
frost$core$String* $tmp1940 = *$tmp1939;
frost$core$String** $tmp1941 = &param1->name;
frost$core$String* $tmp1942 = *$tmp1941;
frost$core$Int64 $tmp1943 = frost$core$String$get_length$R$frost$core$Int64($tmp1942);
frost$core$Int64 $tmp1944 = (frost$core$Int64) {1};
int64_t $tmp1945 = $tmp1943.value;
int64_t $tmp1946 = $tmp1944.value;
int64_t $tmp1947 = $tmp1945 + $tmp1946;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {$tmp1947};
frost$core$Bit $tmp1949 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1950 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1948, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1949);
frost$core$String* $tmp1951 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1940, $tmp1950);
org$frostlang$frostc$ClassDecl* $tmp1952 = *(&local22);
org$frostlang$frostc$Type** $tmp1953 = &$tmp1952->type;
org$frostlang$frostc$Type* $tmp1954 = *$tmp1953;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp1937, $tmp1951, $tmp1954);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1936, ((org$frostlang$frostc$Symbol*) $tmp1937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
// line 627
org$frostlang$frostc$ClassDecl* $tmp1955 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp1956 = &$tmp1955->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1957 = *$tmp1956;
org$frostlang$frostc$Alias* $tmp1958 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
frost$core$String* $tmp1959 = org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
org$frostlang$frostc$Type** $tmp1960 = &param1->type;
org$frostlang$frostc$Type* $tmp1961 = *$tmp1960;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp1958, $tmp1959, $tmp1961);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1957, ((org$frostlang$frostc$Symbol*) $tmp1958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp1962 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1963 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1964 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1965 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1966 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1967 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1968 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp1969 = (frost$core$Int64) {10};
frost$core$Bit $tmp1970 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1794, $tmp1969);
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp1972 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1973 = *$tmp1972;
*(&local23) = $tmp1973;
org$frostlang$frostc$ASTNode** $tmp1974 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1975 = *$tmp1974;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
org$frostlang$frostc$ASTNode* $tmp1976 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local24) = $tmp1975;
frost$core$String** $tmp1977 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp1978 = *$tmp1977;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
frost$core$String* $tmp1979 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local25) = $tmp1978;
org$frostlang$frostc$FixedArray** $tmp1980 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1981 = *$tmp1980;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
org$frostlang$frostc$FixedArray* $tmp1982 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local26) = $tmp1981;
// line 631
org$frostlang$frostc$Position $tmp1983 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1984 = *(&local24);
frost$core$String* $tmp1985 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp1986 = *(&local26);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp1983, $tmp1984, $tmp1985, $tmp1986);
org$frostlang$frostc$FixedArray* $tmp1987 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1988 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1989 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block15:;
// line 634
frost$core$Int64 $tmp1990 = (frost$core$Int64) {634};
frost$core$String* $tmp1991 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1992, ((frost$core$Object*) param2));
frost$core$String* $tmp1993 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1991, &$s1994);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1995, $tmp1990, $tmp1993);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
abort(); // unreachable
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
// line 641
*(&local0) = ((frost$core$String*) NULL);
// line 643
frost$core$Bit $tmp1996 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block1; else goto block3;
block1:;
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1998 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 647
frost$core$Int64* $tmp1999 = &param3->$rawValue;
frost$core$Int64 $tmp2000 = *$tmp1999;
frost$core$Int64 $tmp2001 = (frost$core$Int64) {40};
frost$core$Bit $tmp2002 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2000, $tmp2001);
bool $tmp2003 = $tmp2002.value;
if ($tmp2003) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2004 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2005 = *$tmp2004;
*(&local1) = $tmp2005;
frost$core$String** $tmp2006 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp2007 = *$tmp2006;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$String* $tmp2008 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
*(&local2) = $tmp2007;
// line 649
frost$core$String* $tmp2009 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
frost$core$String* $tmp2010 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local0) = $tmp2009;
frost$core$String* $tmp2011 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 652
frost$core$Int64 $tmp2012 = (frost$core$Int64) {652};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2013, $tmp2012);
abort(); // unreachable
block4:;
goto block2;
block2:;
// line 656
frost$collections$Array* $tmp2014 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2014);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
frost$collections$Array* $tmp2015 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
*(&local3) = $tmp2014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
// line 657
ITable* $tmp2016 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2016->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2016 = $tmp2016->next;
}
$fn2018 $tmp2017 = $tmp2016->methods[0];
frost$collections$Iterator* $tmp2019 = $tmp2017(((frost$collections$Iterable*) param5));
goto block7;
block7:;
ITable* $tmp2020 = $tmp2019->$class->itable;
while ($tmp2020->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2020 = $tmp2020->next;
}
$fn2022 $tmp2021 = $tmp2020->methods[0];
frost$core$Bit $tmp2023 = $tmp2021($tmp2019);
bool $tmp2024 = $tmp2023.value;
if ($tmp2024) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2025 = $tmp2019->$class->itable;
while ($tmp2025->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2025 = $tmp2025->next;
}
$fn2027 $tmp2026 = $tmp2025->methods[1];
frost$core$Object* $tmp2028 = $tmp2026($tmp2019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2028)));
org$frostlang$frostc$ASTNode* $tmp2029 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2028);
// line 658
frost$collections$Array* $tmp2030 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2031 = *(&local4);
org$frostlang$frostc$Type* $tmp2032 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2031);
frost$collections$Array$add$frost$collections$Array$T($tmp2030, ((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
frost$core$Frost$unref$frost$core$Object$Q($tmp2028);
org$frostlang$frostc$ASTNode* $tmp2033 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
// line 660
org$frostlang$frostc$ChoiceCase* $tmp2034 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2035 = *(&local0);
frost$collections$Array** $tmp2036 = &param1->choiceCases;
frost$collections$Array* $tmp2037 = *$tmp2036;
ITable* $tmp2038 = ((frost$collections$CollectionView*) $tmp2037)->$class->itable;
while ($tmp2038->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2038 = $tmp2038->next;
}
$fn2040 $tmp2039 = $tmp2038->methods[0];
frost$core$Int64 $tmp2041 = $tmp2039(((frost$collections$CollectionView*) $tmp2037));
frost$collections$Array* $tmp2042 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2034, param1, param2, param4, $tmp2035, $tmp2041, ((frost$collections$ListView*) $tmp2042));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
org$frostlang$frostc$ChoiceCase* $tmp2043 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local5) = $tmp2034;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
// line 662
frost$collections$Array** $tmp2044 = &param1->choiceCases;
frost$collections$Array* $tmp2045 = *$tmp2044;
org$frostlang$frostc$ChoiceCase* $tmp2046 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2045, ((frost$core$Object*) $tmp2046));
// line 663
org$frostlang$frostc$SymbolTable** $tmp2047 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2048 = *$tmp2047;
org$frostlang$frostc$ChoiceCase* $tmp2049 = *(&local5);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2048, ((org$frostlang$frostc$Symbol*) $tmp2049));
org$frostlang$frostc$ChoiceCase* $tmp2050 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2051 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2052 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
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
org$frostlang$frostc$MethodDecl* local23 = NULL;
org$frostlang$frostc$MethodDecl* local24 = NULL;
frost$core$Bit local25;
org$frostlang$frostc$ChoiceCase* local26 = NULL;
// line 670
*(&local0) = ((frost$core$String*) NULL);
// line 671
ITable* $tmp2054 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2054->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2054 = $tmp2054->next;
}
$fn2056 $tmp2055 = $tmp2054->methods[1];
frost$core$Bit $tmp2057 = $tmp2055(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2053));
bool $tmp2058 = $tmp2057.value;
if ($tmp2058) goto block1; else goto block3;
block1:;
// line 672
frost$core$String* $tmp2059 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2060 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2059, &$s2061);
frost$core$String* $tmp2062 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2060, param8);
frost$core$String* $tmp2063 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2062, &$s2064);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$String* $tmp2065 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local0) = $tmp2063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
goto block2;
block3:;
// line 1
// line 675
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2066 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local0) = param8;
goto block2;
block2:;
// line 677
*(&local1) = ((frost$core$String*) NULL);
// line 679
frost$core$Bit $tmp2067 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block4; else goto block6;
block4:;
// line 680
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2069 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 683
frost$core$Int64* $tmp2070 = &param5->$rawValue;
frost$core$Int64 $tmp2071 = *$tmp2070;
frost$core$Int64 $tmp2072 = (frost$core$Int64) {40};
frost$core$Bit $tmp2073 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2071, $tmp2072);
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2075 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2076 = *$tmp2075;
*(&local2) = $tmp2076;
frost$core$String** $tmp2077 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2078 = *$tmp2077;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
frost$core$String* $tmp2079 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local3) = $tmp2078;
// line 685
frost$core$String* $tmp2080 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
frost$core$String* $tmp2081 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
*(&local1) = $tmp2080;
frost$core$String* $tmp2082 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
*(&local3) = ((frost$core$String*) NULL);
goto block7;
block9:;
// line 688
frost$core$Int64 $tmp2083 = (frost$core$Int64) {688};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2084, $tmp2083);
abort(); // unreachable
block7:;
goto block5;
block5:;
// line 692
org$frostlang$frostc$Annotations* $tmp2085 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
org$frostlang$frostc$Annotations* $tmp2086 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local4) = $tmp2085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
// line 693
frost$collections$Array* $tmp2087 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2087);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
frost$collections$Array* $tmp2088 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
*(&local5) = $tmp2087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
// line 694
frost$core$Bit $tmp2089 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block10; else goto block11;
block10:;
// line 695
ITable* $tmp2091 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2091->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2091 = $tmp2091->next;
}
$fn2093 $tmp2092 = $tmp2091->methods[0];
frost$collections$Iterator* $tmp2094 = $tmp2092(((frost$collections$Iterable*) param9));
goto block12;
block12:;
ITable* $tmp2095 = $tmp2094->$class->itable;
while ($tmp2095->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2095 = $tmp2095->next;
}
$fn2097 $tmp2096 = $tmp2095->methods[0];
frost$core$Bit $tmp2098 = $tmp2096($tmp2094);
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block14; else goto block13;
block13:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2100 = $tmp2094->$class->itable;
while ($tmp2100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2100 = $tmp2100->next;
}
$fn2102 $tmp2101 = $tmp2100->methods[1];
frost$core$Object* $tmp2103 = $tmp2101($tmp2094);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2103)));
org$frostlang$frostc$ASTNode* $tmp2104 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2103);
// line 696
*(&local7) = ((frost$core$String*) NULL);
// line 697
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 698
org$frostlang$frostc$ASTNode* $tmp2105 = *(&local6);
frost$core$Int64* $tmp2106 = &$tmp2105->$rawValue;
frost$core$Int64 $tmp2107 = *$tmp2106;
frost$core$Int64 $tmp2108 = (frost$core$Int64) {22};
frost$core$Bit $tmp2109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2107, $tmp2108);
bool $tmp2110 = $tmp2109.value;
if ($tmp2110) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2111 = (org$frostlang$frostc$Position*) ($tmp2105->$data + 0);
org$frostlang$frostc$Position $tmp2112 = *$tmp2111;
frost$core$String** $tmp2113 = (frost$core$String**) ($tmp2105->$data + 16);
frost$core$String* $tmp2114 = *$tmp2113;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$String* $tmp2115 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
*(&local9) = $tmp2114;
// line 700
frost$core$String* $tmp2116 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
frost$core$String* $tmp2117 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
*(&local7) = $tmp2116;
// line 701
org$frostlang$frostc$Type* $tmp2118 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
org$frostlang$frostc$Type* $tmp2119 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local8) = $tmp2118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$String* $tmp2120 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local9) = ((frost$core$String*) NULL);
goto block15;
block17:;
frost$core$Int64 $tmp2121 = (frost$core$Int64) {47};
frost$core$Bit $tmp2122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2107, $tmp2121);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2124 = (org$frostlang$frostc$Position*) ($tmp2105->$data + 0);
org$frostlang$frostc$Position $tmp2125 = *$tmp2124;
frost$core$String** $tmp2126 = (frost$core$String**) ($tmp2105->$data + 16);
frost$core$String* $tmp2127 = *$tmp2126;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$String* $tmp2128 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
*(&local10) = $tmp2127;
org$frostlang$frostc$ASTNode** $tmp2129 = (org$frostlang$frostc$ASTNode**) ($tmp2105->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2130 = *$tmp2129;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
org$frostlang$frostc$ASTNode* $tmp2131 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local11) = $tmp2130;
// line 704
frost$core$String* $tmp2132 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$core$String* $tmp2133 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local7) = $tmp2132;
// line 705
org$frostlang$frostc$ASTNode* $tmp2134 = *(&local11);
org$frostlang$frostc$Type* $tmp2135 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
org$frostlang$frostc$Type* $tmp2136 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
*(&local8) = $tmp2135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
org$frostlang$frostc$ASTNode* $tmp2137 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2138 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
*(&local10) = ((frost$core$String*) NULL);
goto block15;
block19:;
// line 708
frost$core$Int64 $tmp2139 = (frost$core$Int64) {708};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2140, $tmp2139);
abort(); // unreachable
block15:;
// line 711
frost$collections$Array* $tmp2141 = *(&local5);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2142 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2143 = *(&local6);
$fn2145 $tmp2144 = ($fn2145) $tmp2143->$class->vtable[2];
org$frostlang$frostc$Position $tmp2146 = $tmp2144($tmp2143);
frost$core$String* $tmp2147 = *(&local0);
frost$core$String* $tmp2148 = *(&local7);
org$frostlang$frostc$Type* $tmp2149 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2142, $tmp2146, $tmp2147, $tmp2148, $tmp2149);
frost$collections$Array$add$frost$collections$Array$T($tmp2141, ((frost$core$Object*) $tmp2142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2142));
org$frostlang$frostc$Type* $tmp2150 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2151 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2103);
org$frostlang$frostc$ASTNode* $tmp2152 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
goto block11;
block11:;
// line 714
frost$collections$Array* $tmp2153 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2153);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$collections$Array* $tmp2154 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local12) = $tmp2153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
// line 715
frost$core$Bit $tmp2155 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block20; else goto block21;
block20:;
// line 716
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2157;
$tmp2157 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2157->value = param7;
frost$core$Int64 $tmp2158 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2159 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2158);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2160;
$tmp2160 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2160->value = $tmp2159;
ITable* $tmp2161 = ((frost$core$Equatable*) $tmp2157)->$class->itable;
while ($tmp2161->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2161 = $tmp2161->next;
}
$fn2163 $tmp2162 = $tmp2161->methods[0];
frost$core$Bit $tmp2164 = $tmp2162(((frost$core$Equatable*) $tmp2157), ((frost$core$Equatable*) $tmp2160));
bool $tmp2165 = $tmp2164.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2160)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2157)));
if ($tmp2165) goto block22; else goto block23;
block22:;
// line 717
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2166);
goto block23;
block23:;
// line 719
ITable* $tmp2167 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2167->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2167 = $tmp2167->next;
}
$fn2169 $tmp2168 = $tmp2167->methods[0];
frost$collections$Iterator* $tmp2170 = $tmp2168(((frost$collections$Iterable*) param10));
goto block24;
block24:;
ITable* $tmp2171 = $tmp2170->$class->itable;
while ($tmp2171->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2171 = $tmp2171->next;
}
$fn2173 $tmp2172 = $tmp2171->methods[0];
frost$core$Bit $tmp2174 = $tmp2172($tmp2170);
bool $tmp2175 = $tmp2174.value;
if ($tmp2175) goto block26; else goto block25;
block25:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2176 = $tmp2170->$class->itable;
while ($tmp2176->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2176 = $tmp2176->next;
}
$fn2178 $tmp2177 = $tmp2176->methods[1];
frost$core$Object* $tmp2179 = $tmp2177($tmp2170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2179)));
org$frostlang$frostc$ASTNode* $tmp2180 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp2179);
// line 720
frost$collections$Array* $tmp2181 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2182 = *(&local13);
org$frostlang$frostc$Type* $tmp2183 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2182);
frost$collections$Array$add$frost$collections$Array$T($tmp2181, ((frost$core$Object*) $tmp2183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
frost$core$Frost$unref$frost$core$Object$Q($tmp2179);
org$frostlang$frostc$ASTNode* $tmp2184 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
goto block21;
block21:;
// line 723
org$frostlang$frostc$ClassDecl* $tmp2185 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2186 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2187 = *(&local4);
frost$core$String* $tmp2188 = *(&local0);
frost$collections$Array* $tmp2189 = *(&local12);
frost$collections$Array* $tmp2190 = *(&local5);
frost$core$Weak** $tmp2191 = &param0->compiler;
frost$core$Weak* $tmp2192 = *$tmp2191;
frost$core$Object* $tmp2193 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2192);
org$frostlang$frostc$SymbolTable** $tmp2194 = &((org$frostlang$frostc$Compiler*) $tmp2193)->root;
org$frostlang$frostc$SymbolTable* $tmp2195 = *$tmp2194;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2185, param1, param4, param2, $tmp2186, $tmp2187, param7, $tmp2188, ((frost$collections$ListView*) $tmp2189), $tmp2190, $tmp2195);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
org$frostlang$frostc$ClassDecl* $tmp2196 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
*(&local14) = $tmp2185;
frost$core$Frost$unref$frost$core$Object$Q($tmp2193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// line 725
frost$core$Weak** $tmp2197 = &param0->compiler;
frost$core$Weak* $tmp2198 = *$tmp2197;
frost$core$Object* $tmp2199 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2198);
frost$collections$Stack** $tmp2200 = &((org$frostlang$frostc$Compiler*) $tmp2199)->currentClass;
frost$collections$Stack* $tmp2201 = *$tmp2200;
org$frostlang$frostc$ClassDecl* $tmp2202 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2201, ((frost$core$Object*) $tmp2202));
frost$core$Frost$unref$frost$core$Object$Q($tmp2199);
// line 726
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2203;
$tmp2203 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2203->value = param7;
frost$core$Int64 $tmp2204 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2205 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2204);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2206;
$tmp2206 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2206->value = $tmp2205;
ITable* $tmp2207 = ((frost$core$Equatable*) $tmp2203)->$class->itable;
while ($tmp2207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2207 = $tmp2207->next;
}
$fn2209 $tmp2208 = $tmp2207->methods[0];
frost$core$Bit $tmp2210 = $tmp2208(((frost$core$Equatable*) $tmp2203), ((frost$core$Equatable*) $tmp2206));
bool $tmp2211 = $tmp2210.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2203)));
if ($tmp2211) goto block27; else goto block28;
block27:;
// line 727
org$frostlang$frostc$FieldDecl* $tmp2212 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2213 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2214 = *(&local14);
org$frostlang$frostc$Position* $tmp2215 = &$tmp2214->position;
org$frostlang$frostc$Position $tmp2216 = *$tmp2215;
org$frostlang$frostc$Annotations* $tmp2217 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2218 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2217, $tmp2218);
frost$core$Int64 $tmp2219 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2220 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2219);
org$frostlang$frostc$Type* $tmp2221 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2212, $tmp2213, $tmp2216, ((frost$core$String*) NULL), $tmp2217, $tmp2220, &$s2222, $tmp2221, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
org$frostlang$frostc$FieldDecl* $tmp2223 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local15) = $tmp2212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
// line 730
org$frostlang$frostc$ClassDecl* $tmp2224 = *(&local14);
frost$collections$Array** $tmp2225 = &$tmp2224->fields;
frost$collections$Array* $tmp2226 = *$tmp2225;
org$frostlang$frostc$FieldDecl* $tmp2227 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2226, ((frost$core$Object*) $tmp2227));
// line 731
org$frostlang$frostc$ClassDecl* $tmp2228 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2229 = &$tmp2228->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2230 = *$tmp2229;
org$frostlang$frostc$FieldDecl* $tmp2231 = *(&local15);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2230, ((org$frostlang$frostc$Symbol*) $tmp2231));
// line 732
org$frostlang$frostc$FieldDecl* $tmp2232 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2233 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2234 = *(&local14);
org$frostlang$frostc$Position* $tmp2235 = &$tmp2234->position;
org$frostlang$frostc$Position $tmp2236 = *$tmp2235;
org$frostlang$frostc$Annotations* $tmp2237 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2238 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2237, $tmp2238);
frost$core$Int64 $tmp2239 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2240 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2239);
org$frostlang$frostc$Type* $tmp2241 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2232, $tmp2233, $tmp2236, ((frost$core$String*) NULL), $tmp2237, $tmp2240, &$s2242, $tmp2241, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
org$frostlang$frostc$FieldDecl* $tmp2243 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
*(&local16) = $tmp2232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
// line 735
org$frostlang$frostc$ClassDecl* $tmp2244 = *(&local14);
frost$collections$Array** $tmp2245 = &$tmp2244->fields;
frost$collections$Array* $tmp2246 = *$tmp2245;
org$frostlang$frostc$FieldDecl* $tmp2247 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2246, ((frost$core$Object*) $tmp2247));
// line 736
org$frostlang$frostc$ClassDecl* $tmp2248 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2249 = &$tmp2248->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2250 = *$tmp2249;
org$frostlang$frostc$FieldDecl* $tmp2251 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2250, ((org$frostlang$frostc$Symbol*) $tmp2251));
org$frostlang$frostc$FieldDecl* $tmp2252 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2253 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block28;
block28:;
// line 738
ITable* $tmp2254 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2254->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2254 = $tmp2254->next;
}
$fn2256 $tmp2255 = $tmp2254->methods[0];
frost$collections$Iterator* $tmp2257 = $tmp2255(((frost$collections$Iterable*) param11));
goto block29;
block29:;
ITable* $tmp2258 = $tmp2257->$class->itable;
while ($tmp2258->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2258 = $tmp2258->next;
}
$fn2260 $tmp2259 = $tmp2258->methods[0];
frost$core$Bit $tmp2261 = $tmp2259($tmp2257);
bool $tmp2262 = $tmp2261.value;
if ($tmp2262) goto block31; else goto block30;
block30:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2263 = $tmp2257->$class->itable;
while ($tmp2263->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2263 = $tmp2263->next;
}
$fn2265 $tmp2264 = $tmp2263->methods[1];
frost$core$Object* $tmp2266 = $tmp2264($tmp2257);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2266)));
org$frostlang$frostc$ASTNode* $tmp2267 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2266);
// line 739
org$frostlang$frostc$ASTNode* $tmp2268 = *(&local17);
frost$core$Int64* $tmp2269 = &$tmp2268->$rawValue;
frost$core$Int64 $tmp2270 = *$tmp2269;
frost$core$Int64 $tmp2271 = (frost$core$Int64) {29};
frost$core$Bit $tmp2272 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2270, $tmp2271);
bool $tmp2273 = $tmp2272.value;
if ($tmp2273) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp2274 = (org$frostlang$frostc$Position*) ($tmp2268->$data + 0);
org$frostlang$frostc$Position $tmp2275 = *$tmp2274;
*(&local18) = $tmp2275;
org$frostlang$frostc$ASTNode** $tmp2276 = (org$frostlang$frostc$ASTNode**) ($tmp2268->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2277 = *$tmp2276;
org$frostlang$frostc$FixedArray** $tmp2278 = (org$frostlang$frostc$FixedArray**) ($tmp2268->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2279 = *$tmp2278;
org$frostlang$frostc$MethodDecl$Kind* $tmp2280 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2268->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2281 = *$tmp2280;
*(&local19) = $tmp2281;
frost$core$String** $tmp2282 = (frost$core$String**) ($tmp2268->$data + 40);
frost$core$String* $tmp2283 = *$tmp2282;
org$frostlang$frostc$FixedArray** $tmp2284 = (org$frostlang$frostc$FixedArray**) ($tmp2268->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2285 = *$tmp2284;
org$frostlang$frostc$FixedArray** $tmp2286 = (org$frostlang$frostc$FixedArray**) ($tmp2268->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2287 = *$tmp2286;
org$frostlang$frostc$ASTNode** $tmp2288 = (org$frostlang$frostc$ASTNode**) ($tmp2268->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2289 = *$tmp2288;
org$frostlang$frostc$FixedArray** $tmp2290 = (org$frostlang$frostc$FixedArray**) ($tmp2268->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2291 = *$tmp2290;
// line 741
org$frostlang$frostc$MethodDecl$Kind $tmp2292 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2293;
$tmp2293 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2293->value = $tmp2292;
frost$core$Int64 $tmp2294 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2295 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2294);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2296;
$tmp2296 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2296->value = $tmp2295;
ITable* $tmp2297 = ((frost$core$Equatable*) $tmp2293)->$class->itable;
while ($tmp2297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2297 = $tmp2297->next;
}
$fn2299 $tmp2298 = $tmp2297->methods[0];
frost$core$Bit $tmp2300 = $tmp2298(((frost$core$Equatable*) $tmp2293), ((frost$core$Equatable*) $tmp2296));
bool $tmp2301 = $tmp2300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2296)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2293)));
if ($tmp2301) goto block35; else goto block36;
block35:;
// line 742
frost$core$Int64 $tmp2302 = param7.$rawValue;
frost$core$Int64 $tmp2303 = (frost$core$Int64) {0};
frost$core$Bit $tmp2304 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2302, $tmp2303);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block38; else goto block39;
block38:;
goto block37;
block39:;
frost$core$Int64 $tmp2306 = (frost$core$Int64) {1};
frost$core$Bit $tmp2307 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2302, $tmp2306);
bool $tmp2308 = $tmp2307.value;
if ($tmp2308) goto block40; else goto block41;
block40:;
// line 747
org$frostlang$frostc$Position $tmp2309 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2309, &$s2310);
goto block37;
block41:;
frost$core$Int64 $tmp2311 = (frost$core$Int64) {2};
frost$core$Bit $tmp2312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2302, $tmp2311);
bool $tmp2313 = $tmp2312.value;
if ($tmp2313) goto block42; else goto block37;
block42:;
// line 750
org$frostlang$frostc$Position $tmp2314 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2314, &$s2315);
goto block37;
block37:;
goto block36;
block36:;
goto block32;
block34:;
goto block32;
block32:;
// line 759
org$frostlang$frostc$ClassDecl* $tmp2316 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2317 = *(&local17);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp2316, $tmp2317);
frost$core$Frost$unref$frost$core$Object$Q($tmp2266);
org$frostlang$frostc$ASTNode* $tmp2318 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
// line 761
frost$core$Bit $tmp2319 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2319;
// line 762
frost$core$Bit $tmp2320 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2320;
// line 763
org$frostlang$frostc$ClassDecl* $tmp2321 = *(&local14);
frost$collections$Array** $tmp2322 = &$tmp2321->methods;
frost$collections$Array* $tmp2323 = *$tmp2322;
ITable* $tmp2324 = ((frost$collections$Iterable*) $tmp2323)->$class->itable;
while ($tmp2324->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2324 = $tmp2324->next;
}
$fn2326 $tmp2325 = $tmp2324->methods[0];
frost$collections$Iterator* $tmp2327 = $tmp2325(((frost$collections$Iterable*) $tmp2323));
goto block43;
block43:;
ITable* $tmp2328 = $tmp2327->$class->itable;
while ($tmp2328->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2328 = $tmp2328->next;
}
$fn2330 $tmp2329 = $tmp2328->methods[0];
frost$core$Bit $tmp2331 = $tmp2329($tmp2327);
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block45; else goto block44;
block44:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2333 = $tmp2327->$class->itable;
while ($tmp2333->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2333 = $tmp2333->next;
}
$fn2335 $tmp2334 = $tmp2333->methods[1];
frost$core$Object* $tmp2336 = $tmp2334($tmp2327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2336)));
org$frostlang$frostc$MethodDecl* $tmp2337 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp2336);
// line 764
org$frostlang$frostc$MethodDecl* $tmp2338 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind* $tmp2339 = &$tmp2338->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2340 = *$tmp2339;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2341;
$tmp2341 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2341->value = $tmp2340;
frost$core$Int64 $tmp2342 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2343 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2342);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2344;
$tmp2344 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2344->value = $tmp2343;
ITable* $tmp2345 = ((frost$core$Equatable*) $tmp2341)->$class->itable;
while ($tmp2345->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2345 = $tmp2345->next;
}
$fn2347 $tmp2346 = $tmp2345->methods[0];
frost$core$Bit $tmp2348 = $tmp2346(((frost$core$Equatable*) $tmp2341), ((frost$core$Equatable*) $tmp2344));
bool $tmp2349 = $tmp2348.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2344)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2341)));
if ($tmp2349) goto block46; else goto block47;
block46:;
// line 765
frost$core$Bit $tmp2350 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2350;
goto block47;
block47:;
// line 767
org$frostlang$frostc$MethodDecl* $tmp2351 = *(&local22);
frost$core$String** $tmp2352 = &((org$frostlang$frostc$Symbol*) $tmp2351)->name;
frost$core$String* $tmp2353 = *$tmp2352;
frost$core$Bit $tmp2354 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2353, &$s2355);
bool $tmp2356 = $tmp2354.value;
if ($tmp2356) goto block50; else goto block49;
block50:;
org$frostlang$frostc$MethodDecl* $tmp2357 = *(&local22);
frost$collections$Array** $tmp2358 = &$tmp2357->parameters;
frost$collections$Array* $tmp2359 = *$tmp2358;
ITable* $tmp2360 = ((frost$collections$CollectionView*) $tmp2359)->$class->itable;
while ($tmp2360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2360 = $tmp2360->next;
}
$fn2362 $tmp2361 = $tmp2360->methods[0];
frost$core$Int64 $tmp2363 = $tmp2361(((frost$collections$CollectionView*) $tmp2359));
frost$core$Int64 $tmp2364 = (frost$core$Int64) {0};
frost$core$Bit $tmp2365 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2363, $tmp2364);
bool $tmp2366 = $tmp2365.value;
if ($tmp2366) goto block48; else goto block49;
block48:;
// line 768
frost$core$Bit $tmp2367 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2367;
// line 769
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2368;
$tmp2368 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2368->value = param7;
frost$core$Int64 $tmp2369 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2370 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2369);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2371;
$tmp2371 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2371->value = $tmp2370;
ITable* $tmp2372 = ((frost$core$Equatable*) $tmp2368)->$class->itable;
while ($tmp2372->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2372 = $tmp2372->next;
}
$fn2374 $tmp2373 = $tmp2372->methods[0];
frost$core$Bit $tmp2375 = $tmp2373(((frost$core$Equatable*) $tmp2368), ((frost$core$Equatable*) $tmp2371));
bool $tmp2376 = $tmp2375.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2371)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2368)));
if ($tmp2376) goto block51; else goto block52;
block51:;
// line 770
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2377);
goto block52;
block52:;
goto block49;
block49:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2336);
org$frostlang$frostc$MethodDecl* $tmp2378 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
// line 774
frost$core$Bit $tmp2379 = *(&local20);
frost$core$Bit $tmp2380 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2379);
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block56; else goto block54;
block56:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2382;
$tmp2382 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2382->value = param7;
frost$core$Int64 $tmp2383 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2384 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2383);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2385;
$tmp2385 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2385->value = $tmp2384;
ITable* $tmp2386 = ((frost$core$Equatable*) $tmp2382)->$class->itable;
while ($tmp2386->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2386 = $tmp2386->next;
}
$fn2388 $tmp2387 = $tmp2386->methods[0];
frost$core$Bit $tmp2389 = $tmp2387(((frost$core$Equatable*) $tmp2382), ((frost$core$Equatable*) $tmp2385));
bool $tmp2390 = $tmp2389.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2385)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2382)));
if ($tmp2390) goto block55; else goto block54;
block55:;
org$frostlang$frostc$ClassDecl* $tmp2391 = *(&local14);
frost$core$String** $tmp2392 = &$tmp2391->name;
frost$core$String* $tmp2393 = *$tmp2392;
ITable* $tmp2395 = ((frost$core$Equatable*) $tmp2393)->$class->itable;
while ($tmp2395->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2395 = $tmp2395->next;
}
$fn2397 $tmp2396 = $tmp2395->methods[1];
frost$core$Bit $tmp2398 = $tmp2396(((frost$core$Equatable*) $tmp2393), ((frost$core$Equatable*) &$s2394));
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block53; else goto block54;
block53:;
// line 775
org$frostlang$frostc$MethodDecl* $tmp2400 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2401 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2402 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2403 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2402, $tmp2403);
frost$core$Int64 $tmp2404 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2405 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2404);
frost$collections$Array* $tmp2406 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2407 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2406, $tmp2407);
org$frostlang$frostc$Type* $tmp2408 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2409 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2409);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2400, $tmp2401, param4, ((frost$core$String*) NULL), $tmp2402, $tmp2405, &$s2410, ((frost$collections$Array*) NULL), $tmp2406, $tmp2408, $tmp2409);
*(&local23) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
org$frostlang$frostc$MethodDecl* $tmp2411 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local23) = $tmp2400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
// line 778
org$frostlang$frostc$ClassDecl* $tmp2412 = *(&local14);
frost$collections$Array** $tmp2413 = &$tmp2412->methods;
frost$collections$Array* $tmp2414 = *$tmp2413;
org$frostlang$frostc$MethodDecl* $tmp2415 = *(&local23);
frost$collections$Array$add$frost$collections$Array$T($tmp2414, ((frost$core$Object*) $tmp2415));
// line 779
org$frostlang$frostc$ClassDecl* $tmp2416 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2417 = &$tmp2416->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2418 = *$tmp2417;
org$frostlang$frostc$MethodDecl* $tmp2419 = *(&local23);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2418, ((org$frostlang$frostc$Symbol*) $tmp2419));
org$frostlang$frostc$MethodDecl* $tmp2420 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local23) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block54;
block54:;
// line 781
frost$core$Bit $tmp2421 = *(&local21);
frost$core$Bit $tmp2422 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2421);
bool $tmp2423 = $tmp2422.value;
if ($tmp2423) goto block60; else goto block58;
block60:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2424;
$tmp2424 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2424->value = param7;
frost$core$Int64 $tmp2425 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2426 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2425);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2427;
$tmp2427 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2427->value = $tmp2426;
ITable* $tmp2428 = ((frost$core$Equatable*) $tmp2424)->$class->itable;
while ($tmp2428->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[0];
frost$core$Bit $tmp2431 = $tmp2429(((frost$core$Equatable*) $tmp2424), ((frost$core$Equatable*) $tmp2427));
bool $tmp2432 = $tmp2431.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2427)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2424)));
if ($tmp2432) goto block59; else goto block61;
block61:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2433;
$tmp2433 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2433->value = param7;
frost$core$Int64 $tmp2434 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2435 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2434);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2436;
$tmp2436 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2436->value = $tmp2435;
ITable* $tmp2437 = ((frost$core$Equatable*) $tmp2433)->$class->itable;
while ($tmp2437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2437 = $tmp2437->next;
}
$fn2439 $tmp2438 = $tmp2437->methods[0];
frost$core$Bit $tmp2440 = $tmp2438(((frost$core$Equatable*) $tmp2433), ((frost$core$Equatable*) $tmp2436));
bool $tmp2441 = $tmp2440.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2436)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2433)));
if ($tmp2441) goto block59; else goto block58;
block59:;
org$frostlang$frostc$ClassDecl* $tmp2442 = *(&local14);
frost$core$String** $tmp2443 = &$tmp2442->name;
frost$core$String* $tmp2444 = *$tmp2443;
ITable* $tmp2446 = ((frost$core$Equatable*) $tmp2444)->$class->itable;
while ($tmp2446->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2446 = $tmp2446->next;
}
$fn2448 $tmp2447 = $tmp2446->methods[1];
frost$core$Bit $tmp2449 = $tmp2447(((frost$core$Equatable*) $tmp2444), ((frost$core$Equatable*) &$s2445));
bool $tmp2450 = $tmp2449.value;
if ($tmp2450) goto block57; else goto block58;
block57:;
// line 783
org$frostlang$frostc$MethodDecl* $tmp2451 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2452 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2453 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2454 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2455 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2456 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2454, $tmp2455);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2453, $tmp2456);
frost$core$Int64 $tmp2457 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2458 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2457);
frost$collections$Array* $tmp2459 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2460 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2459, $tmp2460);
org$frostlang$frostc$Type* $tmp2461 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2462 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2462);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2451, $tmp2452, param4, ((frost$core$String*) NULL), $tmp2453, $tmp2458, &$s2463, ((frost$collections$Array*) NULL), $tmp2459, $tmp2461, $tmp2462);
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
org$frostlang$frostc$MethodDecl* $tmp2464 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local24) = $tmp2451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
// line 786
org$frostlang$frostc$ClassDecl* $tmp2465 = *(&local14);
frost$collections$Array** $tmp2466 = &$tmp2465->methods;
frost$collections$Array* $tmp2467 = *$tmp2466;
org$frostlang$frostc$MethodDecl* $tmp2468 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp2467, ((frost$core$Object*) $tmp2468));
// line 787
org$frostlang$frostc$ClassDecl* $tmp2469 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2470 = &$tmp2469->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2471 = *$tmp2470;
org$frostlang$frostc$MethodDecl* $tmp2472 = *(&local24);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2471, ((org$frostlang$frostc$Symbol*) $tmp2472));
org$frostlang$frostc$MethodDecl* $tmp2473 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block58;
block58:;
// line 789
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2474;
$tmp2474 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2474->value = param7;
frost$core$Int64 $tmp2475 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2476 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2475);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2477;
$tmp2477 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2477->value = $tmp2476;
ITable* $tmp2478 = ((frost$core$Equatable*) $tmp2474)->$class->itable;
while ($tmp2478->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2478 = $tmp2478->next;
}
$fn2480 $tmp2479 = $tmp2478->methods[0];
frost$core$Bit $tmp2481 = $tmp2479(((frost$core$Equatable*) $tmp2474), ((frost$core$Equatable*) $tmp2477));
bool $tmp2482 = $tmp2481.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2477)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2474)));
if ($tmp2482) goto block62; else goto block63;
block62:;
// line 790
frost$core$Bit $tmp2483 = frost$core$Bit$init$builtin_bit(false);
*(&local25) = $tmp2483;
// line 791
org$frostlang$frostc$ClassDecl* $tmp2484 = *(&local14);
frost$collections$Array** $tmp2485 = &$tmp2484->choiceCases;
frost$collections$Array* $tmp2486 = *$tmp2485;
ITable* $tmp2487 = ((frost$collections$CollectionView*) $tmp2486)->$class->itable;
while ($tmp2487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2487 = $tmp2487->next;
}
$fn2489 $tmp2488 = $tmp2487->methods[0];
frost$core$Int64 $tmp2490 = $tmp2488(((frost$collections$CollectionView*) $tmp2486));
frost$core$Int64 $tmp2491 = (frost$core$Int64) {0};
int64_t $tmp2492 = $tmp2490.value;
int64_t $tmp2493 = $tmp2491.value;
bool $tmp2494 = $tmp2492 > $tmp2493;
frost$core$Bit $tmp2495 = (frost$core$Bit) {$tmp2494};
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block64; else goto block66;
block64:;
// line 792
org$frostlang$frostc$ClassDecl* $tmp2497 = *(&local14);
frost$collections$Array** $tmp2498 = &$tmp2497->choiceCases;
frost$collections$Array* $tmp2499 = *$tmp2498;
ITable* $tmp2500 = ((frost$collections$Iterable*) $tmp2499)->$class->itable;
while ($tmp2500->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2500 = $tmp2500->next;
}
$fn2502 $tmp2501 = $tmp2500->methods[0];
frost$collections$Iterator* $tmp2503 = $tmp2501(((frost$collections$Iterable*) $tmp2499));
goto block67;
block67:;
ITable* $tmp2504 = $tmp2503->$class->itable;
while ($tmp2504->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2504 = $tmp2504->next;
}
$fn2506 $tmp2505 = $tmp2504->methods[0];
frost$core$Bit $tmp2507 = $tmp2505($tmp2503);
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block69; else goto block68;
block68:;
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp2509 = $tmp2503->$class->itable;
while ($tmp2509->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2509 = $tmp2509->next;
}
$fn2511 $tmp2510 = $tmp2509->methods[1];
frost$core$Object* $tmp2512 = $tmp2510($tmp2503);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp2512)));
org$frostlang$frostc$ChoiceCase* $tmp2513 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) $tmp2512);
// line 793
org$frostlang$frostc$ChoiceCase* $tmp2514 = *(&local26);
frost$collections$Array** $tmp2515 = &$tmp2514->fields;
frost$collections$Array* $tmp2516 = *$tmp2515;
ITable* $tmp2517 = ((frost$collections$CollectionView*) $tmp2516)->$class->itable;
while ($tmp2517->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2517 = $tmp2517->next;
}
$fn2519 $tmp2518 = $tmp2517->methods[0];
frost$core$Int64 $tmp2520 = $tmp2518(((frost$collections$CollectionView*) $tmp2516));
frost$core$Int64 $tmp2521 = (frost$core$Int64) {0};
int64_t $tmp2522 = $tmp2520.value;
int64_t $tmp2523 = $tmp2521.value;
bool $tmp2524 = $tmp2522 > $tmp2523;
frost$core$Bit $tmp2525 = (frost$core$Bit) {$tmp2524};
bool $tmp2526 = $tmp2525.value;
if ($tmp2526) goto block70; else goto block71;
block70:;
// line 794
frost$core$Bit $tmp2527 = frost$core$Bit$init$builtin_bit(true);
*(&local25) = $tmp2527;
// line 795
frost$core$Frost$unref$frost$core$Object$Q($tmp2512);
org$frostlang$frostc$ChoiceCase* $tmp2528 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block69;
block71:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2512);
org$frostlang$frostc$ChoiceCase* $tmp2529 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block67;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
goto block65;
block66:;
// line 1
// line 800
org$frostlang$frostc$ClassDecl* $tmp2530 = *(&local14);
org$frostlang$frostc$Position* $tmp2531 = &$tmp2530->position;
org$frostlang$frostc$Position $tmp2532 = *$tmp2531;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2532, &$s2533);
// line 801
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2534 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2535 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2536 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2537 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2539 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block65:;
// line 803
frost$core$Bit $tmp2540 = *(&local25);
frost$core$Bit $tmp2541 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2540);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block72; else goto block73;
block72:;
// line 804
org$frostlang$frostc$ClassDecl* $tmp2543 = *(&local14);
org$frostlang$frostc$Type* $tmp2544 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
org$frostlang$frostc$Type** $tmp2545 = &$tmp2543->rawSuper;
org$frostlang$frostc$Type* $tmp2546 = *$tmp2545;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
org$frostlang$frostc$Type** $tmp2547 = &$tmp2543->rawSuper;
*$tmp2547 = $tmp2544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
goto block73;
block73:;
goto block63;
block63:;
// line 807
frost$core$Weak** $tmp2548 = &param0->compiler;
frost$core$Weak* $tmp2549 = *$tmp2548;
frost$core$Object* $tmp2550 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2549);
frost$collections$Stack** $tmp2551 = &((org$frostlang$frostc$Compiler*) $tmp2550)->currentClass;
frost$collections$Stack* $tmp2552 = *$tmp2551;
frost$core$Object* $tmp2553 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2552);
frost$core$Frost$unref$frost$core$Object$Q($tmp2553);
frost$core$Frost$unref$frost$core$Object$Q($tmp2550);
// line 808
org$frostlang$frostc$ClassDecl* $tmp2554 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
org$frostlang$frostc$ClassDecl* $tmp2555 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2556 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2557 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2558 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2559 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2560 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2554;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 812
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 813
frost$collections$Array** $tmp2561 = &param1->classes;
frost$collections$Array* $tmp2562 = *$tmp2561;
ITable* $tmp2563 = ((frost$collections$Iterable*) $tmp2562)->$class->itable;
while ($tmp2563->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2563 = $tmp2563->next;
}
$fn2565 $tmp2564 = $tmp2563->methods[0];
frost$collections$Iterator* $tmp2566 = $tmp2564(((frost$collections$Iterable*) $tmp2562));
goto block1;
block1:;
ITable* $tmp2567 = $tmp2566->$class->itable;
while ($tmp2567->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2567 = $tmp2567->next;
}
$fn2569 $tmp2568 = $tmp2567->methods[0];
frost$core$Bit $tmp2570 = $tmp2568($tmp2566);
bool $tmp2571 = $tmp2570.value;
if ($tmp2571) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp2572 = $tmp2566->$class->itable;
while ($tmp2572->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2572 = $tmp2572->next;
}
$fn2574 $tmp2573 = $tmp2572->methods[1];
frost$core$Object* $tmp2575 = $tmp2573($tmp2566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2575)));
org$frostlang$frostc$ClassDecl* $tmp2576 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2575);
// line 814
org$frostlang$frostc$ClassDecl* $tmp2577 = *(&local0);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2577, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2575);
org$frostlang$frostc$ClassDecl* $tmp2578 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 820
org$frostlang$frostc$ClassDecl** $tmp2579 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2580 = *$tmp2579;
frost$core$Bit $tmp2581 = frost$core$Bit$init$builtin_bit($tmp2580 == NULL);
bool $tmp2582 = $tmp2581.value;
if ($tmp2582) goto block1; else goto block2;
block1:;
// line 821
*(&local0) = ((frost$core$String*) NULL);
// line 822
ITable* $tmp2584 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2584->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2584 = $tmp2584->next;
}
$fn2586 $tmp2585 = $tmp2584->methods[1];
frost$core$Bit $tmp2587 = $tmp2585(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2583));
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block3; else goto block5;
block3:;
// line 823
frost$core$String* $tmp2589 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2590 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2589, &$s2591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
frost$core$String* $tmp2592 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local0) = $tmp2590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
goto block4;
block5:;
// line 1
// line 826
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2593));
frost$core$String* $tmp2594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local0) = &$s2595;
goto block4;
block4:;
// line 828
org$frostlang$frostc$ClassDecl* $tmp2596 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp2597 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2598 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp2598);
frost$core$Int64 $tmp2599 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2600 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2599);
frost$core$String* $tmp2601 = *(&local0);
frost$collections$Array* $tmp2602 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2602);
frost$collections$Array* $tmp2603 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2603);
frost$core$Weak** $tmp2604 = &param0->compiler;
frost$core$Weak* $tmp2605 = *$tmp2604;
frost$core$Object* $tmp2606 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2605);
org$frostlang$frostc$SymbolTable** $tmp2607 = &((org$frostlang$frostc$Compiler*) $tmp2606)->root;
org$frostlang$frostc$SymbolTable* $tmp2608 = *$tmp2607;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2596, param1, $tmp2597, param2, ((frost$core$String*) NULL), $tmp2598, $tmp2600, $tmp2601, ((frost$collections$ListView*) $tmp2602), $tmp2603, $tmp2608);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
org$frostlang$frostc$ClassDecl** $tmp2609 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2610 = *$tmp2609;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
org$frostlang$frostc$ClassDecl** $tmp2611 = &param0->bareCodeClass;
*$tmp2611 = $tmp2596;
frost$core$Frost$unref$frost$core$Object$Q($tmp2606);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
// line 831
org$frostlang$frostc$ClassDecl** $tmp2612 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2613 = *$tmp2612;
ITable* $tmp2614 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2614->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2614 = $tmp2614->next;
}
$fn2616 $tmp2615 = $tmp2614->methods[0];
$tmp2615(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2613));
// line 832
org$frostlang$frostc$MethodDecl* $tmp2617 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2618 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2619 = *$tmp2618;
org$frostlang$frostc$Position $tmp2620 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2621 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2622 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2621, $tmp2622);
frost$core$Int64 $tmp2623 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2624 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2623);
frost$collections$Array* $tmp2625 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2626 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2625, $tmp2626);
org$frostlang$frostc$Type* $tmp2627 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2628 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2628);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2617, $tmp2619, $tmp2620, ((frost$core$String*) NULL), $tmp2621, $tmp2624, &$s2629, ((frost$collections$Array*) NULL), $tmp2625, $tmp2627, $tmp2628);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
org$frostlang$frostc$MethodDecl* $tmp2630 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local1) = $tmp2617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
// line 835
org$frostlang$frostc$ClassDecl** $tmp2631 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2632 = *$tmp2631;
frost$collections$Array** $tmp2633 = &$tmp2632->methods;
frost$collections$Array* $tmp2634 = *$tmp2633;
org$frostlang$frostc$MethodDecl* $tmp2635 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2634, ((frost$core$Object*) $tmp2635));
// line 836
org$frostlang$frostc$ClassDecl** $tmp2636 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2637 = *$tmp2636;
org$frostlang$frostc$SymbolTable** $tmp2638 = &$tmp2637->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2639 = *$tmp2638;
org$frostlang$frostc$MethodDecl* $tmp2640 = *(&local1);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2639, ((org$frostlang$frostc$Symbol*) $tmp2640));
// line 837
org$frostlang$frostc$MethodDecl* $tmp2641 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2642 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2643 = *$tmp2642;
org$frostlang$frostc$Position $tmp2644 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2645 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2646 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2647 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2648 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2646, $tmp2647);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2645, $tmp2648);
frost$core$Int64 $tmp2649 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2650 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2649);
frost$collections$Array* $tmp2651 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2652 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2651, $tmp2652);
org$frostlang$frostc$Type* $tmp2653 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2654 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2654);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2641, $tmp2643, $tmp2644, ((frost$core$String*) NULL), $tmp2645, $tmp2650, &$s2655, ((frost$collections$Array*) NULL), $tmp2651, $tmp2653, $tmp2654);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
org$frostlang$frostc$MethodDecl* $tmp2656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local2) = $tmp2641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
// line 840
org$frostlang$frostc$ClassDecl** $tmp2657 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2658 = *$tmp2657;
frost$collections$Array** $tmp2659 = &$tmp2658->methods;
frost$collections$Array* $tmp2660 = *$tmp2659;
org$frostlang$frostc$MethodDecl* $tmp2661 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2660, ((frost$core$Object*) $tmp2661));
// line 841
org$frostlang$frostc$ClassDecl** $tmp2662 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2663 = *$tmp2662;
org$frostlang$frostc$SymbolTable** $tmp2664 = &$tmp2663->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2665 = *$tmp2664;
org$frostlang$frostc$MethodDecl* $tmp2666 = *(&local2);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2665, ((org$frostlang$frostc$Symbol*) $tmp2666));
org$frostlang$frostc$MethodDecl* $tmp2667 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2668 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2669 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2670 = &param0->source;
frost$io$File* $tmp2671 = *$tmp2670;
frost$core$Bit $tmp2672 = frost$core$Bit$init$builtin_bit($tmp2671 != NULL);
bool $tmp2673 = $tmp2672.value;
if ($tmp2673) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2674 = (frost$core$Int64) {846};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2675, $tmp2674, &$s2676);
abort(); // unreachable
block1:;
// line 847
frost$core$Weak** $tmp2677 = &param0->compiler;
frost$core$Weak* $tmp2678 = *$tmp2677;
frost$core$Object* $tmp2679 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2678);
frost$io$File** $tmp2680 = &param0->source;
frost$io$File* $tmp2681 = *$tmp2680;
org$frostlang$frostc$Compiler$error$frost$io$File$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2679), $tmp2681, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2679);
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
// line 851
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2682 = &param0->source;
frost$io$File* $tmp2683 = *$tmp2682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
frost$io$File** $tmp2684 = &param0->source;
*$tmp2684 = param1;
// line 852
frost$core$Int64* $tmp2685 = &param2->$rawValue;
frost$core$Int64 $tmp2686 = *$tmp2685;
frost$core$Int64 $tmp2687 = (frost$core$Int64) {19};
frost$core$Bit $tmp2688 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2686, $tmp2687);
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp2690 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2691 = *$tmp2690;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
org$frostlang$frostc$FixedArray* $tmp2692 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local0) = $tmp2691;
// line 854
frost$collections$Array* $tmp2693 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2693);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
frost$collections$Array* $tmp2694 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local1) = $tmp2693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
// line 855
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2695));
frost$core$String* $tmp2696 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local2) = &$s2697;
// line 856
frost$collections$HashMap* $tmp2698 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2698);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$collections$HashMap* $tmp2699 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local3) = $tmp2698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
// line 857
org$frostlang$frostc$FixedArray* $tmp2700 = *(&local0);
ITable* $tmp2701 = ((frost$collections$Iterable*) $tmp2700)->$class->itable;
while ($tmp2701->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2701 = $tmp2701->next;
}
$fn2703 $tmp2702 = $tmp2701->methods[0];
frost$collections$Iterator* $tmp2704 = $tmp2702(((frost$collections$Iterable*) $tmp2700));
goto block3;
block3:;
ITable* $tmp2705 = $tmp2704->$class->itable;
while ($tmp2705->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2705 = $tmp2705->next;
}
$fn2707 $tmp2706 = $tmp2705->methods[0];
frost$core$Bit $tmp2708 = $tmp2706($tmp2704);
bool $tmp2709 = $tmp2708.value;
if ($tmp2709) goto block5; else goto block4;
block4:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2710 = $tmp2704->$class->itable;
while ($tmp2710->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2710 = $tmp2710->next;
}
$fn2712 $tmp2711 = $tmp2710->methods[1];
frost$core$Object* $tmp2713 = $tmp2711($tmp2704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2713)));
org$frostlang$frostc$ASTNode* $tmp2714 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2713);
// line 858
org$frostlang$frostc$ASTNode* $tmp2715 = *(&local4);
frost$core$Int64* $tmp2716 = &$tmp2715->$rawValue;
frost$core$Int64 $tmp2717 = *$tmp2716;
frost$core$Int64 $tmp2718 = (frost$core$Int64) {33};
frost$core$Bit $tmp2719 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2717, $tmp2718);
bool $tmp2720 = $tmp2719.value;
if ($tmp2720) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2721 = (org$frostlang$frostc$Position*) ($tmp2715->$data + 0);
org$frostlang$frostc$Position $tmp2722 = *$tmp2721;
frost$core$String** $tmp2723 = (frost$core$String**) ($tmp2715->$data + 16);
frost$core$String* $tmp2724 = *$tmp2723;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
frost$core$String* $tmp2725 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local5) = $tmp2724;
// line 860
frost$core$String* $tmp2726 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
frost$core$String* $tmp2727 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local2) = $tmp2726;
frost$core$String* $tmp2728 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp2729 = (frost$core$Int64) {51};
frost$core$Bit $tmp2730 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2717, $tmp2729);
bool $tmp2731 = $tmp2730.value;
if ($tmp2731) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2732 = (org$frostlang$frostc$Position*) ($tmp2715->$data + 0);
org$frostlang$frostc$Position $tmp2733 = *$tmp2732;
frost$core$String** $tmp2734 = (frost$core$String**) ($tmp2715->$data + 16);
frost$core$String* $tmp2735 = *$tmp2734;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
frost$core$String* $tmp2736 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local6) = $tmp2735;
// line 863
frost$core$String* $tmp2737 = *(&local6);
frost$core$String$Index$nullable $tmp2738 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp2737, &$s2739);
*(&local7) = $tmp2738;
// line 864
*(&local8) = ((frost$core$String*) NULL);
// line 865
frost$core$String$Index$nullable $tmp2740 = *(&local7);
frost$core$Bit $tmp2741 = frost$core$Bit$init$builtin_bit($tmp2740.nonnull);
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block11; else goto block13;
block11:;
// line 866
frost$core$String* $tmp2743 = *(&local6);
frost$core$String* $tmp2744 = *(&local6);
frost$core$String$Index$nullable $tmp2745 = *(&local7);
frost$core$String$Index $tmp2746 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2744, ((frost$core$String$Index) $tmp2745.value));
frost$core$Bit $tmp2747 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2748 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2746, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2747);
frost$core$String* $tmp2749 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2743, $tmp2748);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
frost$core$String* $tmp2750 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local8) = $tmp2749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
goto block12;
block13:;
// line 1
// line 869
frost$core$String* $tmp2751 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
frost$core$String* $tmp2752 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
*(&local8) = $tmp2751;
goto block12;
block12:;
// line 871
frost$collections$HashMap* $tmp2753 = *(&local3);
frost$core$String* $tmp2754 = *(&local8);
frost$core$String* $tmp2755 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2753, ((frost$collections$Key*) $tmp2754), ((frost$core$Object*) $tmp2755));
frost$core$String* $tmp2756 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp2757 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local6) = ((frost$core$String*) NULL);
goto block6;
block10:;
frost$core$Int64 $tmp2758 = (frost$core$Int64) {12};
frost$core$Bit $tmp2759 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2717, $tmp2758);
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2761 = (org$frostlang$frostc$Position*) ($tmp2715->$data + 0);
org$frostlang$frostc$Position $tmp2762 = *$tmp2761;
*(&local9) = $tmp2762;
org$frostlang$frostc$ASTNode** $tmp2763 = (org$frostlang$frostc$ASTNode**) ($tmp2715->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2764 = *$tmp2763;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
org$frostlang$frostc$ASTNode* $tmp2765 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
*(&local10) = $tmp2764;
org$frostlang$frostc$FixedArray** $tmp2766 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2767 = *$tmp2766;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
org$frostlang$frostc$FixedArray* $tmp2768 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
*(&local11) = $tmp2767;
org$frostlang$frostc$ClassDecl$Kind* $tmp2769 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp2715->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2770 = *$tmp2769;
*(&local12) = $tmp2770;
frost$core$String** $tmp2771 = (frost$core$String**) ($tmp2715->$data + 40);
frost$core$String* $tmp2772 = *$tmp2771;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
frost$core$String* $tmp2773 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
*(&local13) = $tmp2772;
org$frostlang$frostc$FixedArray** $tmp2774 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2775 = *$tmp2774;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
org$frostlang$frostc$FixedArray* $tmp2776 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
*(&local14) = $tmp2775;
org$frostlang$frostc$FixedArray** $tmp2777 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2778 = *$tmp2777;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
org$frostlang$frostc$FixedArray* $tmp2779 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local15) = $tmp2778;
org$frostlang$frostc$FixedArray** $tmp2780 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2781 = *$tmp2780;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
org$frostlang$frostc$FixedArray* $tmp2782 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
*(&local16) = $tmp2781;
// line 875
frost$collections$HashMap* $tmp2783 = *(&local3);
frost$core$String* $tmp2784 = *(&local2);
org$frostlang$frostc$Position $tmp2785 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp2786 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2787 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp2788 = *(&local12);
frost$core$String* $tmp2789 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp2790 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2791 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2792 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp2793 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp2783), $tmp2784, $tmp2785, $tmp2786, $tmp2787, $tmp2788, $tmp2789, $tmp2790, $tmp2791, $tmp2792);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
org$frostlang$frostc$ClassDecl* $tmp2794 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local17) = $tmp2793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
// line 877
org$frostlang$frostc$ClassDecl* $tmp2795 = *(&local17);
frost$core$Bit $tmp2796 = frost$core$Bit$init$builtin_bit($tmp2795 != NULL);
bool $tmp2797 = $tmp2796.value;
if ($tmp2797) goto block16; else goto block17;
block16:;
// line 878
org$frostlang$frostc$ClassDecl* $tmp2798 = *(&local17);
frost$collections$Array* $tmp2799 = *(&local1);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2798, $tmp2799);
goto block17;
block17:;
org$frostlang$frostc$ClassDecl* $tmp2800 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2801 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2802 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2803 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2804 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2805 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2806 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block15:;
frost$core$Int64 $tmp2807 = (frost$core$Int64) {29};
frost$core$Bit $tmp2808 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2717, $tmp2807);
bool $tmp2809 = $tmp2808.value;
if ($tmp2809) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2810 = (org$frostlang$frostc$Position*) ($tmp2715->$data + 0);
org$frostlang$frostc$Position $tmp2811 = *$tmp2810;
*(&local18) = $tmp2811;
org$frostlang$frostc$ASTNode** $tmp2812 = (org$frostlang$frostc$ASTNode**) ($tmp2715->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2813 = *$tmp2812;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
org$frostlang$frostc$ASTNode* $tmp2814 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
*(&local19) = $tmp2813;
org$frostlang$frostc$FixedArray** $tmp2815 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2816 = *$tmp2815;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
org$frostlang$frostc$FixedArray* $tmp2817 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local20) = $tmp2816;
org$frostlang$frostc$MethodDecl$Kind* $tmp2818 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2715->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2819 = *$tmp2818;
*(&local21) = $tmp2819;
frost$core$String** $tmp2820 = (frost$core$String**) ($tmp2715->$data + 40);
frost$core$String* $tmp2821 = *$tmp2820;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
frost$core$String* $tmp2822 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local22) = $tmp2821;
org$frostlang$frostc$FixedArray** $tmp2823 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2824 = *$tmp2823;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
org$frostlang$frostc$FixedArray* $tmp2825 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local23) = $tmp2824;
org$frostlang$frostc$FixedArray** $tmp2826 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2827 = *$tmp2826;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
org$frostlang$frostc$FixedArray* $tmp2828 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local24) = $tmp2827;
org$frostlang$frostc$ASTNode** $tmp2829 = (org$frostlang$frostc$ASTNode**) ($tmp2715->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2830 = *$tmp2829;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
org$frostlang$frostc$ASTNode* $tmp2831 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local25) = $tmp2830;
org$frostlang$frostc$FixedArray** $tmp2832 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2833 = *$tmp2832;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
org$frostlang$frostc$FixedArray* $tmp2834 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local26) = $tmp2833;
// line 883
org$frostlang$frostc$MethodDecl$Kind $tmp2835 = *(&local21);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2836;
$tmp2836 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2836->value = $tmp2835;
frost$core$Int64 $tmp2837 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2838 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2837);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2839;
$tmp2839 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2839->value = $tmp2838;
ITable* $tmp2840 = ((frost$core$Equatable*) $tmp2836)->$class->itable;
while ($tmp2840->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2840 = $tmp2840->next;
}
$fn2842 $tmp2841 = $tmp2840->methods[0];
frost$core$Bit $tmp2843 = $tmp2841(((frost$core$Equatable*) $tmp2836), ((frost$core$Equatable*) $tmp2839));
bool $tmp2844 = $tmp2843.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2839)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2836)));
if ($tmp2844) goto block20; else goto block21;
block20:;
// line 884
org$frostlang$frostc$Position $tmp2845 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2845, &$s2846);
// line 885
org$frostlang$frostc$FixedArray* $tmp2847 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2848 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2849 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2850 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2851 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2852 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2853 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2853));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2713);
org$frostlang$frostc$ASTNode* $tmp2854 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block21:;
// line 887
frost$collections$HashMap* $tmp2855 = *(&local3);
frost$core$String* $tmp2856 = *(&local2);
frost$collections$Array* $tmp2857 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp2855), $tmp2856, ((frost$collections$List*) $tmp2857));
// line 888
*(&local27) = ((frost$core$String*) NULL);
// line 889
frost$core$String* $tmp2858 = *(&local22);
frost$core$Bit $tmp2859 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2858, &$s2860);
bool $tmp2861 = $tmp2859.value;
if ($tmp2861) goto block22; else goto block24;
block22:;
// line 890
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2862));
frost$core$String* $tmp2863 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
*(&local27) = &$s2864;
// line 891
frost$collections$Array* $tmp2865 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2865);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
frost$collections$Array* $tmp2866 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
*(&local28) = $tmp2865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// line 892
frost$collections$Array* $tmp2867 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2867);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$collections$Array* $tmp2868 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
*(&local29) = $tmp2867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
// line 893
frost$collections$Array* $tmp2869 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2869);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
frost$collections$Array* $tmp2870 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
*(&local30) = $tmp2869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
// line 894
org$frostlang$frostc$FixedArray* $tmp2871 = *(&local24);
ITable* $tmp2872 = ((frost$collections$Iterable*) $tmp2871)->$class->itable;
while ($tmp2872->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2872 = $tmp2872->next;
}
$fn2874 $tmp2873 = $tmp2872->methods[0];
frost$collections$Iterator* $tmp2875 = $tmp2873(((frost$collections$Iterable*) $tmp2871));
goto block25;
block25:;
ITable* $tmp2876 = $tmp2875->$class->itable;
while ($tmp2876->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2876 = $tmp2876->next;
}
$fn2878 $tmp2877 = $tmp2876->methods[0];
frost$core$Bit $tmp2879 = $tmp2877($tmp2875);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block27; else goto block26;
block26:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2881 = $tmp2875->$class->itable;
while ($tmp2881->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2881 = $tmp2881->next;
}
$fn2883 $tmp2882 = $tmp2881->methods[1];
frost$core$Object* $tmp2884 = $tmp2882($tmp2875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2884)));
org$frostlang$frostc$ASTNode* $tmp2885 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp2884);
// line 895
org$frostlang$frostc$ASTNode* $tmp2886 = *(&local31);
frost$core$Int64* $tmp2887 = &$tmp2886->$rawValue;
frost$core$Int64 $tmp2888 = *$tmp2887;
frost$core$Int64 $tmp2889 = (frost$core$Int64) {34};
frost$core$Bit $tmp2890 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2888, $tmp2889);
bool $tmp2891 = $tmp2890.value;
if ($tmp2891) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp2892 = (org$frostlang$frostc$Position*) ($tmp2886->$data + 0);
org$frostlang$frostc$Position $tmp2893 = *$tmp2892;
*(&local32) = $tmp2893;
frost$core$String** $tmp2894 = (frost$core$String**) ($tmp2886->$data + 16);
frost$core$String* $tmp2895 = *$tmp2894;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
frost$core$String* $tmp2896 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
*(&local33) = $tmp2895;
org$frostlang$frostc$ASTNode** $tmp2897 = (org$frostlang$frostc$ASTNode**) ($tmp2886->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2898 = *$tmp2897;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
org$frostlang$frostc$ASTNode* $tmp2899 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local34) = $tmp2898;
// line 897
frost$collections$Array* $tmp2900 = *(&local28);
org$frostlang$frostc$MethodDecl$Parameter* $tmp2901 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2902 = *(&local33);
org$frostlang$frostc$ASTNode* $tmp2903 = *(&local34);
org$frostlang$frostc$Type* $tmp2904 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2903);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2901, $tmp2902, $tmp2904);
frost$collections$Array$add$frost$collections$Array$T($tmp2900, ((frost$core$Object*) $tmp2901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
// line 899
frost$collections$Array* $tmp2905 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp2906 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2907 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp2908 = *(&local32);
frost$core$String* $tmp2909 = *(&local33);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2906, $tmp2907, $tmp2908, $tmp2909);
frost$collections$Array$add$frost$collections$Array$T($tmp2905, ((frost$core$Object*) $tmp2906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
org$frostlang$frostc$ASTNode* $tmp2910 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2911 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local33) = ((frost$core$String*) NULL);
goto block28;
block30:;
// line 902
frost$core$Int64 $tmp2912 = (frost$core$Int64) {902};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2913, $tmp2912);
abort(); // unreachable
block28:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2884);
org$frostlang$frostc$ASTNode* $tmp2914 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2875));
// line 906
org$frostlang$frostc$ASTNode* $tmp2915 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2916 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp2917 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2918 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2919 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp2920 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2918, $tmp2919, $tmp2920, &$s2921);
org$frostlang$frostc$FixedArray* $tmp2922 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2922);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2915, $tmp2916, $tmp2917, $tmp2918, $tmp2922);
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
org$frostlang$frostc$ASTNode* $tmp2923 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local35) = $tmp2915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// line 909
frost$collections$Array* $tmp2924 = *(&local29);
org$frostlang$frostc$ASTNode* $tmp2925 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2926 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp2927 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2928 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2929 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp2930 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2931 = *(&local35);
frost$core$String* $tmp2932 = *(&local27);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2928, $tmp2929, $tmp2930, $tmp2931, $tmp2932);
frost$collections$Array* $tmp2933 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp2934 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2933);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2925, $tmp2926, $tmp2927, $tmp2928, $tmp2934);
frost$collections$Array$add$frost$collections$Array$T($tmp2924, ((frost$core$Object*) $tmp2925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// line 912
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// line 913
org$frostlang$frostc$ASTNode* $tmp2935 = *(&local25);
frost$core$Bit $tmp2936 = frost$core$Bit$init$builtin_bit($tmp2935 != NULL);
bool $tmp2937 = $tmp2936.value;
if ($tmp2937) goto block31; else goto block33;
block31:;
// line 914
org$frostlang$frostc$ASTNode* $tmp2938 = *(&local25);
org$frostlang$frostc$Type* $tmp2939 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2938);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
org$frostlang$frostc$Type* $tmp2940 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
*(&local36) = $tmp2939;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
goto block32;
block33:;
// line 1
// line 917
org$frostlang$frostc$Type* $tmp2941 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
org$frostlang$frostc$Type* $tmp2942 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
*(&local36) = $tmp2941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
goto block32;
block32:;
// line 919
org$frostlang$frostc$MethodDecl* $tmp2943 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2944 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2945 = *$tmp2944;
org$frostlang$frostc$Position $tmp2946 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2947 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2948 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2947, $tmp2948);
frost$core$Int64 $tmp2949 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2950 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2949);
frost$collections$Array* $tmp2951 = *(&local28);
org$frostlang$frostc$Type* $tmp2952 = *(&local36);
frost$collections$Array* $tmp2953 = *(&local29);
org$frostlang$frostc$FixedArray* $tmp2954 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2953);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2943, $tmp2945, $tmp2946, ((frost$core$String*) NULL), $tmp2947, $tmp2950, &$s2955, ((frost$collections$Array*) NULL), $tmp2951, $tmp2952, $tmp2954);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
org$frostlang$frostc$MethodDecl* $tmp2956 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local37) = $tmp2943;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
// line 923
org$frostlang$frostc$ClassDecl** $tmp2957 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2958 = *$tmp2957;
frost$collections$Array** $tmp2959 = &$tmp2958->methods;
frost$collections$Array* $tmp2960 = *$tmp2959;
org$frostlang$frostc$MethodDecl* $tmp2961 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp2960, ((frost$core$Object*) $tmp2961));
org$frostlang$frostc$MethodDecl* $tmp2962 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp2963 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2964 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2965 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2966 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2967 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local28) = ((frost$collections$Array*) NULL);
goto block23;
block24:;
// line 1
// line 926
frost$core$String* $tmp2968 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
frost$core$String* $tmp2969 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local27) = $tmp2968;
goto block23;
block23:;
// line 928
frost$core$Weak** $tmp2970 = &param0->compiler;
frost$core$Weak* $tmp2971 = *$tmp2970;
frost$core$Object* $tmp2972 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2971);
frost$collections$Stack** $tmp2973 = &((org$frostlang$frostc$Compiler*) $tmp2972)->currentClass;
frost$collections$Stack* $tmp2974 = *$tmp2973;
org$frostlang$frostc$ClassDecl** $tmp2975 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2976 = *$tmp2975;
frost$collections$Stack$push$frost$collections$Stack$T($tmp2974, ((frost$core$Object*) $tmp2976));
frost$core$Frost$unref$frost$core$Object$Q($tmp2972);
// line 929
org$frostlang$frostc$ClassDecl** $tmp2977 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2978 = *$tmp2977;
org$frostlang$frostc$Position $tmp2979 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2980 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2981 = *(&local20);
org$frostlang$frostc$MethodDecl$Kind $tmp2982 = *(&local21);
frost$core$String* $tmp2983 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp2984 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp2985 = *(&local24);
org$frostlang$frostc$ASTNode* $tmp2986 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp2987 = *(&local26);
org$frostlang$frostc$MethodDecl* $tmp2988 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp2978, $tmp2979, $tmp2980, $tmp2981, $tmp2982, $tmp2983, $tmp2984, $tmp2985, $tmp2986, $tmp2987);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
org$frostlang$frostc$MethodDecl* $tmp2989 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local38) = $tmp2988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
// line 931
org$frostlang$frostc$MethodDecl* $tmp2990 = *(&local38);
org$frostlang$frostc$Annotations** $tmp2991 = &$tmp2990->annotations;
org$frostlang$frostc$Annotations* $tmp2992 = *$tmp2991;
frost$core$Bit $tmp2993 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2992);
bool $tmp2994 = $tmp2993.value;
if ($tmp2994) goto block34; else goto block35;
block34:;
// line 932
org$frostlang$frostc$MethodDecl* $tmp2995 = *(&local38);
org$frostlang$frostc$Position* $tmp2996 = &((org$frostlang$frostc$Symbol*) $tmp2995)->position;
org$frostlang$frostc$Position $tmp2997 = *$tmp2996;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2997, &$s2998);
// line 934
org$frostlang$frostc$MethodDecl* $tmp2999 = *(&local38);
org$frostlang$frostc$Annotations** $tmp3000 = &$tmp2999->annotations;
org$frostlang$frostc$Annotations* $tmp3001 = *$tmp3000;
frost$core$Int64* $tmp3002 = &$tmp3001->flags;
frost$core$Int64 $tmp3003 = *$tmp3002;
frost$core$Int64 $tmp3004 = (frost$core$Int64) {16};
frost$core$Int64 $tmp3005 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp3004);
frost$core$Int64 $tmp3006 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp3003, $tmp3005);
frost$core$Int64* $tmp3007 = &$tmp3001->flags;
*$tmp3007 = $tmp3006;
goto block35;
block35:;
// line 936
frost$core$Weak** $tmp3008 = &param0->compiler;
frost$core$Weak* $tmp3009 = *$tmp3008;
frost$core$Object* $tmp3010 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3009);
frost$collections$Stack** $tmp3011 = &((org$frostlang$frostc$Compiler*) $tmp3010)->currentClass;
frost$collections$Stack* $tmp3012 = *$tmp3011;
frost$core$Int64 $tmp3013 = (frost$core$Int64) {0};
frost$core$Object* $tmp3014 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3012, $tmp3013);
org$frostlang$frostc$ClassDecl** $tmp3015 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3016 = *$tmp3015;
bool $tmp3017 = ((org$frostlang$frostc$ClassDecl*) $tmp3014) == $tmp3016;
frost$core$Bit $tmp3018 = frost$core$Bit$init$builtin_bit($tmp3017);
bool $tmp3019 = $tmp3018.value;
if ($tmp3019) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3020 = (frost$core$Int64) {936};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3021, $tmp3020);
abort(); // unreachable
block36:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3014);
frost$core$Frost$unref$frost$core$Object$Q($tmp3010);
// line 937
frost$core$Weak** $tmp3022 = &param0->compiler;
frost$core$Weak* $tmp3023 = *$tmp3022;
frost$core$Object* $tmp3024 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3023);
frost$collections$Stack** $tmp3025 = &((org$frostlang$frostc$Compiler*) $tmp3024)->currentClass;
frost$collections$Stack* $tmp3026 = *$tmp3025;
frost$core$Object* $tmp3027 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3026);
frost$core$Frost$unref$frost$core$Object$Q($tmp3027);
frost$core$Frost$unref$frost$core$Object$Q($tmp3024);
// line 938
org$frostlang$frostc$ClassDecl** $tmp3028 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3029 = *$tmp3028;
frost$collections$Array** $tmp3030 = &$tmp3029->methods;
frost$collections$Array* $tmp3031 = *$tmp3030;
org$frostlang$frostc$MethodDecl* $tmp3032 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp3031, ((frost$core$Object*) $tmp3032));
// line 939
org$frostlang$frostc$ClassDecl** $tmp3033 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3034 = *$tmp3033;
org$frostlang$frostc$SymbolTable** $tmp3035 = &$tmp3034->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3036 = *$tmp3035;
org$frostlang$frostc$MethodDecl* $tmp3037 = *(&local38);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp3036, ((org$frostlang$frostc$Symbol*) $tmp3037));
org$frostlang$frostc$MethodDecl* $tmp3038 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3039 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3040 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3041 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3042 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3043 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3044 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3045 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3046 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block19:;
frost$core$Int64 $tmp3047 = (frost$core$Int64) {18};
frost$core$Bit $tmp3048 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2717, $tmp3047);
bool $tmp3049 = $tmp3048.value;
if ($tmp3049) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp3050 = (org$frostlang$frostc$Position*) ($tmp2715->$data + 0);
org$frostlang$frostc$Position $tmp3051 = *$tmp3050;
*(&local39) = $tmp3051;
org$frostlang$frostc$ASTNode** $tmp3052 = (org$frostlang$frostc$ASTNode**) ($tmp2715->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3053 = *$tmp3052;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
org$frostlang$frostc$ASTNode* $tmp3054 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local40) = $tmp3053;
org$frostlang$frostc$FixedArray** $tmp3055 = (org$frostlang$frostc$FixedArray**) ($tmp2715->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3056 = *$tmp3055;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
org$frostlang$frostc$FixedArray* $tmp3057 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
*(&local41) = $tmp3056;
org$frostlang$frostc$ASTNode** $tmp3058 = (org$frostlang$frostc$ASTNode**) ($tmp2715->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3059 = *$tmp3058;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
org$frostlang$frostc$ASTNode* $tmp3060 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
*(&local42) = $tmp3059;
// line 942
frost$collections$HashMap* $tmp3061 = *(&local3);
frost$core$String* $tmp3062 = *(&local2);
frost$collections$Array* $tmp3063 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3061), $tmp3062, ((frost$collections$List*) $tmp3063));
// line 943
org$frostlang$frostc$ClassDecl** $tmp3064 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3065 = *$tmp3064;
frost$collections$Array** $tmp3066 = &$tmp3065->fields;
frost$collections$Array* $tmp3067 = *$tmp3066;
ITable* $tmp3068 = ((frost$collections$CollectionView*) $tmp3067)->$class->itable;
while ($tmp3068->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3068 = $tmp3068->next;
}
$fn3070 $tmp3069 = $tmp3068->methods[0];
frost$core$Int64 $tmp3071 = $tmp3069(((frost$collections$CollectionView*) $tmp3067));
*(&local43) = $tmp3071;
// line 944
org$frostlang$frostc$ClassDecl** $tmp3072 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3073 = *$tmp3072;
org$frostlang$frostc$Position $tmp3074 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp3075 = *(&local40);
org$frostlang$frostc$FixedArray* $tmp3076 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp3077 = *(&local42);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp3073, $tmp3074, $tmp3075, $tmp3076, $tmp3077);
// line 945
frost$core$Int64 $tmp3078 = *(&local43);
org$frostlang$frostc$ClassDecl** $tmp3079 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3080 = *$tmp3079;
frost$collections$Array** $tmp3081 = &$tmp3080->fields;
frost$collections$Array* $tmp3082 = *$tmp3081;
ITable* $tmp3083 = ((frost$collections$CollectionView*) $tmp3082)->$class->itable;
while ($tmp3083->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3083 = $tmp3083->next;
}
$fn3085 $tmp3084 = $tmp3083->methods[0];
frost$core$Int64 $tmp3086 = $tmp3084(((frost$collections$CollectionView*) $tmp3082));
frost$core$Bit $tmp3087 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3088 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3078, $tmp3086, $tmp3087);
frost$core$Int64 $tmp3089 = $tmp3088.min;
*(&local44) = $tmp3089;
frost$core$Int64 $tmp3090 = $tmp3088.max;
frost$core$Bit $tmp3091 = $tmp3088.inclusive;
bool $tmp3092 = $tmp3091.value;
frost$core$Int64 $tmp3093 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3094 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3093);
if ($tmp3092) goto block43; else goto block44;
block43:;
int64_t $tmp3095 = $tmp3089.value;
int64_t $tmp3096 = $tmp3090.value;
bool $tmp3097 = $tmp3095 <= $tmp3096;
frost$core$Bit $tmp3098 = (frost$core$Bit) {$tmp3097};
bool $tmp3099 = $tmp3098.value;
if ($tmp3099) goto block40; else goto block41;
block44:;
int64_t $tmp3100 = $tmp3089.value;
int64_t $tmp3101 = $tmp3090.value;
bool $tmp3102 = $tmp3100 < $tmp3101;
frost$core$Bit $tmp3103 = (frost$core$Bit) {$tmp3102};
bool $tmp3104 = $tmp3103.value;
if ($tmp3104) goto block40; else goto block41;
block40:;
// line 946
org$frostlang$frostc$ClassDecl** $tmp3105 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3106 = *$tmp3105;
frost$collections$Array** $tmp3107 = &$tmp3106->fields;
frost$collections$Array* $tmp3108 = *$tmp3107;
frost$core$Int64 $tmp3109 = *(&local44);
frost$core$Object* $tmp3110 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3108, $tmp3109);
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp3110)));
org$frostlang$frostc$FieldDecl* $tmp3111 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) $tmp3110);
frost$core$Frost$unref$frost$core$Object$Q($tmp3110);
// line 947
org$frostlang$frostc$FieldDecl* $tmp3112 = *(&local45);
org$frostlang$frostc$FieldDecl$Kind* $tmp3113 = &$tmp3112->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp3114 = *$tmp3113;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3115;
$tmp3115 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3115->value = $tmp3114;
frost$core$Int64 $tmp3116 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp3117 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3116);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3118;
$tmp3118 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3118->value = $tmp3117;
ITable* $tmp3119 = ((frost$core$Equatable*) $tmp3115)->$class->itable;
while ($tmp3119->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3119 = $tmp3119->next;
}
$fn3121 $tmp3120 = $tmp3119->methods[1];
frost$core$Bit $tmp3122 = $tmp3120(((frost$core$Equatable*) $tmp3115), ((frost$core$Equatable*) $tmp3118));
bool $tmp3123 = $tmp3122.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3118)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3115)));
if ($tmp3123) goto block47; else goto block46;
block47:;
org$frostlang$frostc$FieldDecl* $tmp3124 = *(&local45);
org$frostlang$frostc$Annotations** $tmp3125 = &$tmp3124->annotations;
org$frostlang$frostc$Annotations* $tmp3126 = *$tmp3125;
frost$core$Bit $tmp3127 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3126);
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block45; else goto block46;
block45:;
// line 949
org$frostlang$frostc$FieldDecl* $tmp3129 = *(&local45);
org$frostlang$frostc$Position* $tmp3130 = &((org$frostlang$frostc$Symbol*) $tmp3129)->position;
org$frostlang$frostc$Position $tmp3131 = *$tmp3130;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3131, &$s3132);
goto block46;
block46:;
org$frostlang$frostc$FieldDecl* $tmp3133 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block42:;
frost$core$Int64 $tmp3134 = *(&local44);
int64_t $tmp3135 = $tmp3090.value;
int64_t $tmp3136 = $tmp3134.value;
int64_t $tmp3137 = $tmp3135 - $tmp3136;
frost$core$Int64 $tmp3138 = (frost$core$Int64) {$tmp3137};
frost$core$UInt64 $tmp3139 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3138);
if ($tmp3092) goto block49; else goto block50;
block49:;
uint64_t $tmp3140 = $tmp3139.value;
uint64_t $tmp3141 = $tmp3094.value;
bool $tmp3142 = $tmp3140 >= $tmp3141;
frost$core$Bit $tmp3143 = (frost$core$Bit) {$tmp3142};
bool $tmp3144 = $tmp3143.value;
if ($tmp3144) goto block48; else goto block41;
block50:;
uint64_t $tmp3145 = $tmp3139.value;
uint64_t $tmp3146 = $tmp3094.value;
bool $tmp3147 = $tmp3145 > $tmp3146;
frost$core$Bit $tmp3148 = (frost$core$Bit) {$tmp3147};
bool $tmp3149 = $tmp3148.value;
if ($tmp3149) goto block48; else goto block41;
block48:;
int64_t $tmp3150 = $tmp3134.value;
int64_t $tmp3151 = $tmp3093.value;
int64_t $tmp3152 = $tmp3150 + $tmp3151;
frost$core$Int64 $tmp3153 = (frost$core$Int64) {$tmp3152};
*(&local44) = $tmp3153;
goto block40;
block41:;
org$frostlang$frostc$ASTNode* $tmp3154 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3155 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3156 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3156));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block39:;
// line 955
frost$core$Int64 $tmp3157 = (frost$core$Int64) {955};
org$frostlang$frostc$ASTNode* $tmp3158 = *(&local4);
frost$core$String* $tmp3159 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3160, ((frost$core$Object*) $tmp3158));
frost$core$String* $tmp3161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3159, &$s3162);
org$frostlang$frostc$ASTNode* $tmp3163 = *(&local4);
frost$core$Int64* $tmp3164 = &$tmp3163->$rawValue;
frost$core$Int64 $tmp3165 = *$tmp3164;
frost$core$Int64$wrapper* $tmp3166;
$tmp3166 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3166->value = $tmp3165;
frost$core$String* $tmp3167 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3161, ((frost$core$Object*) $tmp3166));
frost$core$String* $tmp3168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3167, &$s3169);
org$frostlang$frostc$ASTNode* $tmp3170 = *(&local4);
$fn3172 $tmp3171 = ($fn3172) $tmp3170->$class->vtable[2];
org$frostlang$frostc$Position $tmp3173 = $tmp3171($tmp3170);
org$frostlang$frostc$Position$wrapper* $tmp3174;
$tmp3174 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp3174->value = $tmp3173;
frost$core$String* $tmp3175 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3168, ((frost$core$Object*) $tmp3174));
frost$core$String* $tmp3176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3175, &$s3177);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3178, $tmp3157, $tmp3176);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2713);
org$frostlang$frostc$ASTNode* $tmp3179 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
// line 959
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3180 = &param0->source;
frost$io$File* $tmp3181 = *$tmp3180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3181));
frost$io$File** $tmp3182 = &param0->source;
*$tmp3182 = ((frost$io$File*) NULL);
// line 960
frost$collections$Array* $tmp3183 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3183)));
frost$collections$HashMap* $tmp3184 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3185 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp3187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3183);
block1:;
// line 963
frost$core$Int64 $tmp3188 = (frost$core$Int64) {963};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3189, $tmp3188);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3190 = &param0->compiler;
frost$core$Weak* $tmp3191 = *$tmp3190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$ClassDecl** $tmp3192 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3193 = *$tmp3192;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
frost$io$File** $tmp3194 = &param0->source;
frost$io$File* $tmp3195 = *$tmp3194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
return;

}

