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
org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Scanner$cleanup, org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type, org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64, org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q, org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q, org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String, org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT} };

typedef frost$collections$Iterator* (*$fn129)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn133)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn138)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn150)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn227)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn231)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn236)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn252)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn277)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn281)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn286)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn330)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn335)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn339)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn344)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn489)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn491)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn518)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn520)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn547)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn549)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn576)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn578)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn605)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn607)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn707)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn711)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn716)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn784)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn836)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn840)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn845)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn923)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn927)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn932)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn965)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn969)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn974)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1043)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1047)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1052)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1114)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1118)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1123)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1164)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1168)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1173)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1216)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1220)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1225)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1257)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1261)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1266)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1283)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1287)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1292)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1411)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1415)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1420)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1448)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1452)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1457)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1471)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1475)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1480)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1512)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1516)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1521)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1558)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1562)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1567)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1615)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1646)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1650)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1655)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn1698)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1712)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1716)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1721)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1760)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1789)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2051)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2055)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2060)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2073)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2089)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2126)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2130)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2135)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2178)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2196)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2202)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2206)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2211)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2242)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2289)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2293)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2298)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2332)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2359)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2363)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2368)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2380)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2395)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2407)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2421)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2430)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2463)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2472)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2481)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2513)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2522)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2535)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2539)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2544)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2552)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2598)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2602)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2607)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2619)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2649)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2736)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2740)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2745)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2875)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2907)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2911)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2916)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3103)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3118)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3154)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3205)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 28, 5772521929446391734, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1767 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s1963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s2027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s2893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s2895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s2946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s2988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };

void org$frostlang$frostc$Scanner$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Compiler* param1) {

// line 21
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2, ((frost$core$Object*) param1));
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
org$frostlang$frostc$Position local20;
org$frostlang$frostc$FixedArray* local21 = NULL;
frost$collections$Array* local22 = NULL;
org$frostlang$frostc$ASTNode* local23 = NULL;
// line 25
frost$core$Int64* $tmp6 = &param1->$rawValue;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {46};
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp79 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp98 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp145 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
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
frost$core$Int64 $tmp202 = (frost$core$Int64) {15};
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
frost$core$Int64 $tmp207 = (frost$core$Int64) {16};
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
frost$core$Int64 $tmp212 = (frost$core$Int64) {17};
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
frost$core$Int64 $tmp217 = (frost$core$Int64) {18};
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
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
frost$core$Int64 $tmp264 = (frost$core$Int64) {45};
frost$core$Bit $tmp265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp267 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp268 = *$tmp267;
*(&local20) = $tmp268;
org$frostlang$frostc$FixedArray** $tmp269 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp270 = *$tmp269;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
org$frostlang$frostc$FixedArray* $tmp271 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local21) = $tmp270;
// line 97
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp272 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp272);
*(&local22) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$collections$Array* $tmp273 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local22) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// line 98
org$frostlang$frostc$FixedArray* $tmp274 = *(&local21);
ITable* $tmp275 = ((frost$collections$Iterable*) $tmp274)->$class->itable;
while ($tmp275->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp275 = $tmp275->next;
}
$fn277 $tmp276 = $tmp275->methods[0];
frost$collections$Iterator* $tmp278 = $tmp276(((frost$collections$Iterable*) $tmp274));
goto block58;
block58:;
ITable* $tmp279 = $tmp278->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$core$Bit $tmp282 = $tmp280($tmp278);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block60; else goto block59;
block59:;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp284 = $tmp278->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[1];
frost$core$Object* $tmp287 = $tmp285($tmp278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp287)));
org$frostlang$frostc$ASTNode* $tmp288 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local23) = ((org$frostlang$frostc$ASTNode*) $tmp287);
// line 99
frost$collections$Array* $tmp289 = *(&local22);
org$frostlang$frostc$ASTNode* $tmp290 = *(&local23);
org$frostlang$frostc$Type* $tmp291 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp290);
frost$collections$Array$add$frost$collections$Array$T($tmp289, ((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
frost$core$Frost$unref$frost$core$Object$Q($tmp287);
org$frostlang$frostc$ASTNode* $tmp292 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block58;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// line 101
frost$collections$Array* $tmp293 = *(&local22);
org$frostlang$frostc$Type* $tmp294 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp293));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$collections$Array* $tmp295 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local22) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp296 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp294;
block57:;
// line 104
frost$core$Int64 $tmp297 = (frost$core$Int64) {104};
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s299, ((frost$core$Object*) param1));
frost$core$String* $tmp300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s301);
frost$core$Int64* $tmp302 = &param1->$rawValue;
frost$core$Int64 $tmp303 = *$tmp302;
frost$core$Int64$wrapper* $tmp304;
$tmp304 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp304->value = $tmp303;
frost$core$String* $tmp305 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp300, ((frost$core$Object*) $tmp304));
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp305, &$s307);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s308, $tmp297, $tmp306);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
abort(); // unreachable
block1:;
// line 107
frost$core$Int64 $tmp309 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s310, $tmp309);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// line 111
frost$core$Int64 $tmp311 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param2, param3);
frost$core$Int64 $tmp312 = (frost$core$Int64) {0};
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 != $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block1; else goto block2;
block1:;
// line 112
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s318);
goto block2;
block2:;
// line 114
frost$core$Int64 $tmp319 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(param2, param3);
return $tmp319;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 121
frost$core$Bit $tmp320 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block1; else goto block2;
block1:;
// line 122
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit(true);
return $tmp322;
block2:;
// line 124
frost$core$String* $tmp323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s324, param2);
frost$core$String* $tmp325 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp323, &$s326);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// line 125
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit(false);
return $tmp327;

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
// line 118
frost$core$Int64 $tmp328 = (frost$core$Int64) {0};
*(&local0) = $tmp328;
// line 119
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp329 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local1) = ((frost$collections$Array*) NULL);
// line 120
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp331 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp331, ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
// line 120
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Method* $tmp332 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local2) = $tmp331;
// line 127
ITable* $tmp333 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp333->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp333 = $tmp333->next;
}
$fn335 $tmp334 = $tmp333->methods[0];
frost$collections$Iterator* $tmp336 = $tmp334(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp337 = $tmp336->$class->itable;
while ($tmp337->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp337 = $tmp337->next;
}
$fn339 $tmp338 = $tmp337->methods[0];
frost$core$Bit $tmp340 = $tmp338($tmp336);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp342 = $tmp336->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp342 = $tmp342->next;
}
$fn344 $tmp343 = $tmp342->methods[1];
frost$core$Object* $tmp345 = $tmp343($tmp336);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp345)));
org$frostlang$frostc$ASTNode* $tmp346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp345);
// line 128
org$frostlang$frostc$ASTNode* $tmp347 = *(&local3);
frost$core$Int64* $tmp348 = &$tmp347->$rawValue;
frost$core$Int64 $tmp349 = *$tmp348;
frost$core$Int64 $tmp350 = (frost$core$Int64) {0};
frost$core$Bit $tmp351 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp349, $tmp350);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp353 = (org$frostlang$frostc$Position*) ($tmp347->$data + 0);
org$frostlang$frostc$Position $tmp354 = *$tmp353;
*(&local4) = $tmp354;
frost$core$String** $tmp355 = (frost$core$String**) ($tmp347->$data + 16);
frost$core$String* $tmp356 = *$tmp355;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$String* $tmp357 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local5) = $tmp356;
frost$core$String** $tmp358 = (frost$core$String**) ($tmp347->$data + 24);
frost$core$String* $tmp359 = *$tmp358;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
frost$core$String* $tmp360 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local6) = $tmp359;
org$frostlang$frostc$ASTNode** $tmp361 = (org$frostlang$frostc$ASTNode**) ($tmp347->$data + 32);
org$frostlang$frostc$ASTNode* $tmp362 = *$tmp361;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
org$frostlang$frostc$ASTNode* $tmp363 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local7) = $tmp362;
// line 130
org$frostlang$frostc$ASTNode* $tmp364 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$ASTNode* $tmp365 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local8) = $tmp364;
// line 131
frost$core$String* $tmp366 = *(&local5);
frost$core$Bit $tmp367 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s368);
bool $tmp369 = $tmp367.value;
if ($tmp369) goto block8; else goto block9;
block8:;
// line 133
org$frostlang$frostc$Position $tmp370 = *(&local4);
frost$core$Int64 $tmp371 = *(&local0);
frost$core$Int64 $tmp372 = (frost$core$Int64) {2};
frost$core$Int64 $tmp373 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp370, $tmp371, $tmp372);
*(&local0) = $tmp373;
goto block7;
block9:;
frost$core$Bit $tmp374 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s375);
bool $tmp376 = $tmp374.value;
if ($tmp376) goto block10; else goto block11;
block10:;
// line 136
org$frostlang$frostc$Position $tmp377 = *(&local4);
frost$core$Int64 $tmp378 = *(&local0);
frost$core$Int64 $tmp379 = (frost$core$Int64) {4};
frost$core$Int64 $tmp380 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp377, $tmp378, $tmp379);
*(&local0) = $tmp380;
goto block7;
block11:;
frost$core$Bit $tmp381 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s382);
bool $tmp383 = $tmp381.value;
if ($tmp383) goto block12; else goto block13;
block12:;
// line 139
org$frostlang$frostc$Position $tmp384 = *(&local4);
frost$core$Int64 $tmp385 = *(&local0);
frost$core$Int64 $tmp386 = (frost$core$Int64) {8};
frost$core$Int64 $tmp387 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp384, $tmp385, $tmp386);
*(&local0) = $tmp387;
goto block7;
block13:;
frost$core$Bit $tmp388 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s389);
bool $tmp390 = $tmp388.value;
if ($tmp390) goto block14; else goto block15;
block14:;
// line 142
org$frostlang$frostc$Position $tmp391 = *(&local4);
frost$core$Int64 $tmp392 = *(&local0);
frost$core$Int64 $tmp393 = (frost$core$Int64) {16};
frost$core$Int64 $tmp394 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp391, $tmp392, $tmp393);
*(&local0) = $tmp394;
goto block7;
block15:;
frost$core$Bit $tmp395 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s396);
bool $tmp397 = $tmp395.value;
if ($tmp397) goto block16; else goto block17;
block16:;
// line 145
org$frostlang$frostc$Position $tmp398 = *(&local4);
frost$core$Int64 $tmp399 = *(&local0);
frost$core$Int64 $tmp400 = (frost$core$Int64) {32};
frost$core$Int64 $tmp401 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp398, $tmp399, $tmp400);
*(&local0) = $tmp401;
goto block7;
block17:;
frost$core$Bit $tmp402 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s403);
bool $tmp404 = $tmp402.value;
if ($tmp404) goto block18; else goto block19;
block18:;
// line 148
org$frostlang$frostc$Position $tmp405 = *(&local4);
frost$core$Int64 $tmp406 = *(&local0);
frost$core$Int64 $tmp407 = (frost$core$Int64) {64};
frost$core$Int64 $tmp408 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp405, $tmp406, $tmp407);
*(&local0) = $tmp408;
goto block7;
block19:;
frost$core$Bit $tmp409 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s410);
bool $tmp411 = $tmp409.value;
if ($tmp411) goto block20; else goto block21;
block20:;
// line 151
org$frostlang$frostc$Position $tmp412 = *(&local4);
frost$core$Int64 $tmp413 = *(&local0);
frost$core$Int64 $tmp414 = (frost$core$Int64) {128};
frost$core$Int64 $tmp415 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp412, $tmp413, $tmp414);
*(&local0) = $tmp415;
goto block7;
block21:;
frost$core$Bit $tmp416 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s417);
bool $tmp418 = $tmp416.value;
if ($tmp418) goto block22; else goto block23;
block22:;
// line 154
org$frostlang$frostc$Position $tmp419 = *(&local4);
frost$core$Int64 $tmp420 = *(&local0);
frost$core$Int64 $tmp421 = (frost$core$Int64) {256};
frost$core$Int64 $tmp422 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp419, $tmp420, $tmp421);
*(&local0) = $tmp422;
goto block7;
block23:;
frost$core$Bit $tmp423 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s424);
bool $tmp425 = $tmp423.value;
if ($tmp425) goto block24; else goto block25;
block24:;
// line 157
org$frostlang$frostc$Position $tmp426 = *(&local4);
frost$core$Int64 $tmp427 = *(&local0);
frost$core$Int64 $tmp428 = (frost$core$Int64) {512};
frost$core$Int64 $tmp429 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp426, $tmp427, $tmp428);
*(&local0) = $tmp429;
goto block7;
block25:;
frost$core$Bit $tmp430 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s431);
bool $tmp432 = $tmp430.value;
if ($tmp432) goto block26; else goto block27;
block26:;
// line 160
org$frostlang$frostc$Position $tmp433 = *(&local4);
frost$core$Int64 $tmp434 = *(&local0);
frost$core$Int64 $tmp435 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp436 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp433, $tmp434, $tmp435);
*(&local0) = $tmp436;
goto block7;
block27:;
frost$core$Bit $tmp437 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s438);
bool $tmp439 = $tmp437.value;
if ($tmp439) goto block28; else goto block29;
block28:;
// line 163
org$frostlang$frostc$Position $tmp440 = *(&local4);
frost$core$Int64 $tmp441 = *(&local0);
frost$core$Int64 $tmp442 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp443 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp440, $tmp441, $tmp442);
*(&local0) = $tmp443;
goto block7;
block29:;
frost$core$Bit $tmp444 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s445);
bool $tmp446 = $tmp444.value;
if ($tmp446) goto block30; else goto block31;
block30:;
// line 166
org$frostlang$frostc$Position $tmp447 = *(&local4);
frost$core$Int64 $tmp448 = *(&local0);
frost$core$Int64 $tmp449 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp450 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp447, $tmp448, $tmp449);
*(&local0) = $tmp450;
goto block7;
block31:;
frost$core$Bit $tmp451 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s452);
bool $tmp453 = $tmp451.value;
if ($tmp453) goto block32; else goto block33;
block32:;
// line 169
org$frostlang$frostc$Position $tmp454 = *(&local4);
frost$core$Int64 $tmp455 = *(&local0);
frost$core$Int64 $tmp456 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp457 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp454, $tmp455, $tmp456);
*(&local0) = $tmp457;
goto block7;
block33:;
frost$core$Bit $tmp458 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s459);
bool $tmp460 = $tmp458.value;
if ($tmp460) goto block34; else goto block35;
block34:;
// line 172
org$frostlang$frostc$Position $tmp461 = *(&local4);
frost$core$Int64 $tmp462 = *(&local0);
frost$core$Int64 $tmp463 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp464 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp461, $tmp462, $tmp463);
*(&local0) = $tmp464;
goto block7;
block35:;
frost$core$Bit $tmp465 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s466);
bool $tmp467 = $tmp465.value;
if ($tmp467) goto block36; else goto block37;
block36:;
// line 175
org$frostlang$frostc$Position $tmp468 = *(&local4);
frost$core$Int64 $tmp469 = *(&local0);
frost$core$Int64 $tmp470 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp471 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp468, $tmp469, $tmp470);
*(&local0) = $tmp471;
goto block7;
block37:;
frost$core$Bit $tmp472 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s473);
bool $tmp474 = $tmp472.value;
if ($tmp474) goto block38; else goto block39;
block38:;
// line 178
frost$collections$Array* $tmp475 = *(&local1);
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit($tmp475 == NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block40; else goto block41;
block40:;
// line 179
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp478 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$collections$Array* $tmp479 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local1) = $tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
goto block41;
block41:;
// line 181
frost$core$Method* $tmp480 = *(&local2);
org$frostlang$frostc$Position $tmp481 = *(&local4);
frost$core$String* $tmp482 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp483 = *(&local8);
frost$core$Int8** $tmp484 = &$tmp480->pointer;
frost$core$Int8* $tmp485 = *$tmp484;
frost$core$Immutable** $tmp486 = &$tmp480->target;
frost$core$Immutable* $tmp487 = *$tmp486;
bool $tmp488 = $tmp487 != ((frost$core$Immutable*) NULL);
if ($tmp488) goto block44; else goto block45;
block45:;
frost$core$Bit $tmp490 = (($fn489) $tmp485)(param0, $tmp481, $tmp482, $tmp483);
*(&local9) = $tmp490;
goto block46;
block44:;
frost$core$Bit $tmp492 = (($fn491) $tmp485)($tmp487, param0, $tmp481, $tmp482, $tmp483);
*(&local9) = $tmp492;
goto block46;
block46:;
frost$core$Bit $tmp493 = *(&local9);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block42; else goto block43;
block42:;
// line 182
frost$collections$Array* $tmp495 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp496 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp497 = (frost$core$Int64) {0};
frost$core$String* $tmp498 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp499 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp496, $tmp497, $tmp498, $tmp499);
frost$collections$Array$add$frost$collections$Array$T($tmp495, ((frost$core$Object*) $tmp496));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// line 183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp500 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block43;
block43:;
goto block7;
block39:;
frost$core$Bit $tmp501 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s502);
bool $tmp503 = $tmp501.value;
if ($tmp503) goto block47; else goto block48;
block47:;
// line 187
frost$collections$Array* $tmp504 = *(&local1);
frost$core$Bit $tmp505 = frost$core$Bit$init$builtin_bit($tmp504 == NULL);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block49; else goto block50;
block49:;
// line 188
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp507 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$collections$Array* $tmp508 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local1) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
goto block50;
block50:;
// line 190
frost$core$Method* $tmp509 = *(&local2);
org$frostlang$frostc$Position $tmp510 = *(&local4);
frost$core$String* $tmp511 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp512 = *(&local8);
frost$core$Int8** $tmp513 = &$tmp509->pointer;
frost$core$Int8* $tmp514 = *$tmp513;
frost$core$Immutable** $tmp515 = &$tmp509->target;
frost$core$Immutable* $tmp516 = *$tmp515;
bool $tmp517 = $tmp516 != ((frost$core$Immutable*) NULL);
if ($tmp517) goto block53; else goto block54;
block54:;
frost$core$Bit $tmp519 = (($fn518) $tmp514)(param0, $tmp510, $tmp511, $tmp512);
*(&local10) = $tmp519;
goto block55;
block53:;
frost$core$Bit $tmp521 = (($fn520) $tmp514)($tmp516, param0, $tmp510, $tmp511, $tmp512);
*(&local10) = $tmp521;
goto block55;
block55:;
frost$core$Bit $tmp522 = *(&local10);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block51; else goto block52;
block51:;
// line 191
frost$collections$Array* $tmp524 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp525 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp526 = (frost$core$Int64) {1};
frost$core$String* $tmp527 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp528 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp525, $tmp526, $tmp527, $tmp528);
frost$collections$Array$add$frost$collections$Array$T($tmp524, ((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
// line 192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp529 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block52:;
goto block7;
block48:;
frost$core$Bit $tmp530 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s531);
bool $tmp532 = $tmp530.value;
if ($tmp532) goto block56; else goto block57;
block56:;
// line 196
frost$collections$Array* $tmp533 = *(&local1);
frost$core$Bit $tmp534 = frost$core$Bit$init$builtin_bit($tmp533 == NULL);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block58; else goto block59;
block58:;
// line 197
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp536 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$collections$Array* $tmp537 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local1) = $tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
goto block59;
block59:;
// line 199
frost$core$Method* $tmp538 = *(&local2);
org$frostlang$frostc$Position $tmp539 = *(&local4);
frost$core$String* $tmp540 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp541 = *(&local8);
frost$core$Int8** $tmp542 = &$tmp538->pointer;
frost$core$Int8* $tmp543 = *$tmp542;
frost$core$Immutable** $tmp544 = &$tmp538->target;
frost$core$Immutable* $tmp545 = *$tmp544;
bool $tmp546 = $tmp545 != ((frost$core$Immutable*) NULL);
if ($tmp546) goto block62; else goto block63;
block63:;
frost$core$Bit $tmp548 = (($fn547) $tmp543)(param0, $tmp539, $tmp540, $tmp541);
*(&local11) = $tmp548;
goto block64;
block62:;
frost$core$Bit $tmp550 = (($fn549) $tmp543)($tmp545, param0, $tmp539, $tmp540, $tmp541);
*(&local11) = $tmp550;
goto block64;
block64:;
frost$core$Bit $tmp551 = *(&local11);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block60; else goto block61;
block60:;
// line 200
frost$collections$Array* $tmp553 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp554 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp555 = (frost$core$Int64) {2};
frost$core$String* $tmp556 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp557 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp554, $tmp555, $tmp556, $tmp557);
frost$collections$Array$add$frost$collections$Array$T($tmp553, ((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
// line 201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp558 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block61;
block61:;
goto block7;
block57:;
frost$core$Bit $tmp559 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s560);
bool $tmp561 = $tmp559.value;
if ($tmp561) goto block65; else goto block66;
block65:;
// line 205
frost$collections$Array* $tmp562 = *(&local1);
frost$core$Bit $tmp563 = frost$core$Bit$init$builtin_bit($tmp562 == NULL);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block67; else goto block68;
block67:;
// line 206
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp565 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$collections$Array* $tmp566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local1) = $tmp565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
goto block68;
block68:;
// line 208
frost$core$Method* $tmp567 = *(&local2);
org$frostlang$frostc$Position $tmp568 = *(&local4);
frost$core$String* $tmp569 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp570 = *(&local8);
frost$core$Int8** $tmp571 = &$tmp567->pointer;
frost$core$Int8* $tmp572 = *$tmp571;
frost$core$Immutable** $tmp573 = &$tmp567->target;
frost$core$Immutable* $tmp574 = *$tmp573;
bool $tmp575 = $tmp574 != ((frost$core$Immutable*) NULL);
if ($tmp575) goto block71; else goto block72;
block72:;
frost$core$Bit $tmp577 = (($fn576) $tmp572)(param0, $tmp568, $tmp569, $tmp570);
*(&local12) = $tmp577;
goto block73;
block71:;
frost$core$Bit $tmp579 = (($fn578) $tmp572)($tmp574, param0, $tmp568, $tmp569, $tmp570);
*(&local12) = $tmp579;
goto block73;
block73:;
frost$core$Bit $tmp580 = *(&local12);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block69; else goto block70;
block69:;
// line 209
frost$collections$Array* $tmp582 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp583 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp584 = (frost$core$Int64) {3};
frost$core$String* $tmp585 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp586 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp583, $tmp584, $tmp585, $tmp586);
frost$collections$Array$add$frost$collections$Array$T($tmp582, ((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// line 210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp587 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block70:;
goto block7;
block66:;
frost$core$Bit $tmp588 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp366, &$s589);
bool $tmp590 = $tmp588.value;
if ($tmp590) goto block74; else goto block75;
block74:;
// line 214
frost$collections$Array* $tmp591 = *(&local1);
frost$core$Bit $tmp592 = frost$core$Bit$init$builtin_bit($tmp591 == NULL);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block76; else goto block77;
block76:;
// line 215
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp594 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp594);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$collections$Array* $tmp595 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local1) = $tmp594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
goto block77;
block77:;
// line 217
frost$core$Method* $tmp596 = *(&local2);
org$frostlang$frostc$Position $tmp597 = *(&local4);
frost$core$String* $tmp598 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp599 = *(&local8);
frost$core$Int8** $tmp600 = &$tmp596->pointer;
frost$core$Int8* $tmp601 = *$tmp600;
frost$core$Immutable** $tmp602 = &$tmp596->target;
frost$core$Immutable* $tmp603 = *$tmp602;
bool $tmp604 = $tmp603 != ((frost$core$Immutable*) NULL);
if ($tmp604) goto block80; else goto block81;
block81:;
frost$core$Bit $tmp606 = (($fn605) $tmp601)(param0, $tmp597, $tmp598, $tmp599);
*(&local13) = $tmp606;
goto block82;
block80:;
frost$core$Bit $tmp608 = (($fn607) $tmp601)($tmp603, param0, $tmp597, $tmp598, $tmp599);
*(&local13) = $tmp608;
goto block82;
block82:;
frost$core$Bit $tmp609 = *(&local13);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block78; else goto block79;
block78:;
// line 218
frost$collections$Array* $tmp611 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp612 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp613 = (frost$core$Int64) {4};
frost$core$String* $tmp614 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp615 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp612, $tmp613, $tmp614, $tmp615);
frost$collections$Array$add$frost$collections$Array$T($tmp611, ((frost$core$Object*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// line 219
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp616 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block79;
block79:;
goto block7;
block75:;
// line 223
org$frostlang$frostc$Position $tmp617 = *(&local4);
frost$core$String* $tmp618 = *(&local5);
frost$core$String* $tmp619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s620, $tmp618);
frost$core$String* $tmp621 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp619, &$s622);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp617, $tmp621);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
goto block7;
block7:;
// line 226
org$frostlang$frostc$ASTNode* $tmp623 = *(&local8);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623 != NULL);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block83; else goto block84;
block83:;
// line 227
org$frostlang$frostc$Position $tmp626 = *(&local4);
frost$core$String* $tmp627 = *(&local5);
frost$core$String* $tmp628 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s629, $tmp627);
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp628, &$s631);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp626, $tmp630);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
goto block84;
block84:;
org$frostlang$frostc$ASTNode* $tmp632 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp633 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp634 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp635 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 231
frost$core$Int64 $tmp636 = (frost$core$Int64) {231};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s637, $tmp636);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp345);
org$frostlang$frostc$ASTNode* $tmp638 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// line 235
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp639 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp640 = *(&local0);
frost$collections$Array* $tmp641 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp639, $tmp640, ((frost$collections$ListView*) $tmp641));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Method* $tmp642 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$collections$Array* $tmp643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp639;

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
// line 240
*(&local0) = ((frost$core$String*) NULL);
// line 242
frost$core$Bit $tmp644 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block1; else goto block3;
block1:;
// line 243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp646 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 246
frost$core$Int64* $tmp647 = &param3->$rawValue;
frost$core$Int64 $tmp648 = *$tmp647;
frost$core$Int64 $tmp649 = (frost$core$Int64) {40};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp652 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp653 = *$tmp652;
*(&local1) = $tmp653;
frost$core$String** $tmp654 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp655 = *$tmp654;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$String* $tmp656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local2) = $tmp655;
// line 248
frost$core$String* $tmp657 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$String* $tmp658 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local0) = $tmp657;
frost$core$String* $tmp659 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 251
frost$core$Int64 $tmp660 = (frost$core$Int64) {251};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s661, $tmp660);
abort(); // unreachable
block4:;
goto block2;
block2:;
// line 255
org$frostlang$frostc$Annotations* $tmp662 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
org$frostlang$frostc$Annotations* $tmp663 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local3) = $tmp662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// line 256
// line 257
frost$core$Int64* $tmp664 = &param5->$rawValue;
frost$core$Int64 $tmp665 = *$tmp664;
frost$core$Int64 $tmp666 = (frost$core$Int64) {53};
frost$core$Bit $tmp667 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp665, $tmp666);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp669 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp670 = *$tmp669;
org$frostlang$frostc$Variable$Kind* $tmp671 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp672 = *$tmp671;
*(&local5) = $tmp672;
org$frostlang$frostc$FixedArray** $tmp673 = (org$frostlang$frostc$FixedArray**) (param5->$data + 24);
org$frostlang$frostc$FixedArray* $tmp674 = *$tmp673;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
org$frostlang$frostc$FixedArray* $tmp675 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local6) = $tmp674;
// line 259
org$frostlang$frostc$Variable$Kind $tmp676 = *(&local5);
frost$core$Int64 $tmp677 = $tmp676.$rawValue;
frost$core$Int64 $tmp678 = (frost$core$Int64) {0};
frost$core$Bit $tmp679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp677, $tmp678);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block11; else goto block12;
block11:;
// line 261
frost$core$Int64 $tmp681 = (frost$core$Int64) {0};
org$frostlang$frostc$FieldDecl$Kind $tmp682 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp681);
*(&local4) = $tmp682;
goto block10;
block12:;
frost$core$Int64 $tmp683 = (frost$core$Int64) {1};
frost$core$Bit $tmp684 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp677, $tmp683);
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block13; else goto block14;
block13:;
// line 264
frost$core$Int64 $tmp686 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp687 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp686);
*(&local4) = $tmp687;
goto block10;
block14:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {2};
frost$core$Bit $tmp689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp677, $tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block15; else goto block16;
block15:;
// line 267
frost$core$Int64 $tmp691 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp692 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp691);
*(&local4) = $tmp692;
// line 268
org$frostlang$frostc$Annotations* $tmp693 = *(&local3);
frost$core$Int64* $tmp694 = &$tmp693->flags;
frost$core$Int64 $tmp695 = *$tmp694;
frost$core$Int64 $tmp696 = (frost$core$Int64) {16};
frost$core$Int64 $tmp697 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp695, $tmp696);
frost$core$Int64* $tmp698 = &$tmp693->flags;
*$tmp698 = $tmp697;
goto block10;
block16:;
frost$core$Int64 $tmp699 = (frost$core$Int64) {3};
frost$core$Bit $tmp700 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp677, $tmp699);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block17; else goto block10;
block17:;
// line 271
frost$core$Int64 $tmp702 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp703 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp702);
*(&local4) = $tmp703;
goto block10;
block10:;
// line 274
org$frostlang$frostc$FixedArray* $tmp704 = *(&local6);
ITable* $tmp705 = ((frost$collections$Iterable*) $tmp704)->$class->itable;
while ($tmp705->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[0];
frost$collections$Iterator* $tmp708 = $tmp706(((frost$collections$Iterable*) $tmp704));
goto block18;
block18:;
ITable* $tmp709 = $tmp708->$class->itable;
while ($tmp709->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[0];
frost$core$Bit $tmp712 = $tmp710($tmp708);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block20; else goto block19;
block19:;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp714 = $tmp708->$class->itable;
while ($tmp714->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp714 = $tmp714->next;
}
$fn716 $tmp715 = $tmp714->methods[1];
frost$core$Object* $tmp717 = $tmp715($tmp708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp717)));
org$frostlang$frostc$ASTNode* $tmp718 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local7) = ((org$frostlang$frostc$ASTNode*) $tmp717);
// line 275
org$frostlang$frostc$ASTNode* $tmp719 = *(&local7);
frost$core$Int64* $tmp720 = &$tmp719->$rawValue;
frost$core$Int64 $tmp721 = *$tmp720;
frost$core$Int64 $tmp722 = (frost$core$Int64) {14};
frost$core$Bit $tmp723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp721, $tmp722);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp725 = (org$frostlang$frostc$Position*) ($tmp719->$data + 0);
org$frostlang$frostc$Position $tmp726 = *$tmp725;
*(&local8) = $tmp726;
org$frostlang$frostc$ASTNode** $tmp727 = (org$frostlang$frostc$ASTNode**) ($tmp719->$data + 16);
org$frostlang$frostc$ASTNode* $tmp728 = *$tmp727;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
org$frostlang$frostc$ASTNode* $tmp729 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local9) = $tmp728;
org$frostlang$frostc$ASTNode** $tmp730 = (org$frostlang$frostc$ASTNode**) ($tmp719->$data + 24);
org$frostlang$frostc$ASTNode* $tmp731 = *$tmp730;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
org$frostlang$frostc$ASTNode* $tmp732 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local10) = $tmp731;
// line 277
*(&local11) = ((frost$core$String*) NULL);
// line 278
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 279
org$frostlang$frostc$ASTNode* $tmp733 = *(&local9);
frost$core$Int64* $tmp734 = &$tmp733->$rawValue;
frost$core$Int64 $tmp735 = *$tmp734;
frost$core$Int64 $tmp736 = (frost$core$Int64) {22};
frost$core$Bit $tmp737 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp735, $tmp736);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp739 = (org$frostlang$frostc$Position*) ($tmp733->$data + 0);
org$frostlang$frostc$Position $tmp740 = *$tmp739;
frost$core$String** $tmp741 = (frost$core$String**) ($tmp733->$data + 16);
frost$core$String* $tmp742 = *$tmp741;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$String* $tmp743 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local13) = $tmp742;
// line 281
frost$core$String* $tmp744 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$String* $tmp745 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local11) = $tmp744;
// line 282
org$frostlang$frostc$Type* $tmp746 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
org$frostlang$frostc$Type* $tmp747 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local12) = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$String* $tmp748 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local13) = ((frost$core$String*) NULL);
goto block24;
block26:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {48};
frost$core$Bit $tmp750 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp735, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block27; else goto block28;
block27:;
org$frostlang$frostc$Position* $tmp752 = (org$frostlang$frostc$Position*) ($tmp733->$data + 0);
org$frostlang$frostc$Position $tmp753 = *$tmp752;
frost$core$String** $tmp754 = (frost$core$String**) ($tmp733->$data + 16);
frost$core$String* $tmp755 = *$tmp754;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$String* $tmp756 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local14) = $tmp755;
org$frostlang$frostc$ASTNode** $tmp757 = (org$frostlang$frostc$ASTNode**) ($tmp733->$data + 24);
org$frostlang$frostc$ASTNode* $tmp758 = *$tmp757;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
org$frostlang$frostc$ASTNode* $tmp759 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local15) = $tmp758;
// line 285
frost$core$String* $tmp760 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$String* $tmp761 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local11) = $tmp760;
// line 286
org$frostlang$frostc$ASTNode* $tmp762 = *(&local15);
org$frostlang$frostc$Type* $tmp763 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
org$frostlang$frostc$Type* $tmp764 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local12) = $tmp763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
org$frostlang$frostc$ASTNode* $tmp765 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp766 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local14) = ((frost$core$String*) NULL);
goto block24;
block28:;
// line 289
frost$core$Int64 $tmp767 = (frost$core$Int64) {289};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s768, $tmp767);
abort(); // unreachable
block24:;
// line 292
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 293
org$frostlang$frostc$ASTNode* $tmp769 = *(&local10);
frost$core$Bit $tmp770 = frost$core$Bit$init$builtin_bit($tmp769 == NULL);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block33; else goto block31;
block33:;
org$frostlang$frostc$Annotations* $tmp772 = *(&local3);
frost$core$Bit $tmp773 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block32; else goto block31;
block32:;
org$frostlang$frostc$Type* $tmp775 = *(&local12);
org$frostlang$frostc$Type$Kind* $tmp776 = &$tmp775->typeKind;
org$frostlang$frostc$Type$Kind $tmp777 = *$tmp776;
org$frostlang$frostc$Type$Kind$wrapper* $tmp778;
$tmp778 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp778->value = $tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp780 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp779);
org$frostlang$frostc$Type$Kind$wrapper* $tmp781;
$tmp781 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp781->value = $tmp780;
ITable* $tmp782 = ((frost$core$Equatable*) $tmp778)->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[0];
frost$core$Bit $tmp785 = $tmp783(((frost$core$Equatable*) $tmp778), ((frost$core$Equatable*) $tmp781));
bool $tmp786 = $tmp785.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp781)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp778)));
if ($tmp786) goto block29; else goto block31;
block29:;
// line 295
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp787 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp788 = (frost$core$Int64) {31};
org$frostlang$frostc$Position $tmp789 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp787, $tmp788, $tmp789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
org$frostlang$frostc$ASTNode* $tmp790 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local16) = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
goto block30;
block31:;
// line 1
// line 298
org$frostlang$frostc$ASTNode* $tmp791 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
org$frostlang$frostc$ASTNode* $tmp792 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
*(&local16) = $tmp791;
goto block30;
block30:;
// line 300
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp793 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp794 = *(&local8);
frost$core$String* $tmp795 = *(&local0);
org$frostlang$frostc$Annotations* $tmp796 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp797 = *(&local4);
frost$core$String* $tmp798 = *(&local11);
org$frostlang$frostc$Type* $tmp799 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp800 = *(&local16);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp793, param1, $tmp794, $tmp795, $tmp796, $tmp797, $tmp798, $tmp799, $tmp800);
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
org$frostlang$frostc$FieldDecl* $tmp801 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
*(&local17) = $tmp793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// line 302
org$frostlang$frostc$SymbolTable** $tmp802 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp803 = *$tmp802;
org$frostlang$frostc$FieldDecl* $tmp804 = *(&local17);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp803, ((org$frostlang$frostc$Symbol*) $tmp804));
// line 303
frost$collections$Array** $tmp805 = &param1->fields;
frost$collections$Array* $tmp806 = *$tmp805;
org$frostlang$frostc$FieldDecl* $tmp807 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp806, ((frost$core$Object*) $tmp807));
org$frostlang$frostc$FieldDecl* $tmp808 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
*(&local17) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp809 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp810 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp811 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp812 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp813 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block21;
block23:;
// line 306
frost$core$Int64 $tmp814 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s815, $tmp814);
abort(); // unreachable
block21:;
frost$core$Frost$unref$frost$core$Object$Q($tmp717);
org$frostlang$frostc$ASTNode* $tmp816 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
org$frostlang$frostc$FixedArray* $tmp817 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block7;
block9:;
// line 312
frost$core$Int64 $tmp818 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s819, $tmp818);
abort(); // unreachable
block7:;
org$frostlang$frostc$Annotations* $tmp820 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp821 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
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
// line 319
frost$core$Int64* $tmp822 = &param1->$rawValue;
frost$core$Int64 $tmp823 = *$tmp822;
frost$core$Int64 $tmp824 = (frost$core$Int64) {1};
frost$core$Bit $tmp825 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp824);
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp827 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp828 = *$tmp827;
org$frostlang$frostc$FixedArray** $tmp829 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp830 = *$tmp829;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
org$frostlang$frostc$FixedArray* $tmp831 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local0) = $tmp830;
// line 321
frost$core$Int64 $tmp832 = (frost$core$Int64) {0};
*(&local1) = $tmp832;
// line 322
org$frostlang$frostc$FixedArray* $tmp833 = *(&local0);
ITable* $tmp834 = ((frost$collections$Iterable*) $tmp833)->$class->itable;
while ($tmp834->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp834 = $tmp834->next;
}
$fn836 $tmp835 = $tmp834->methods[0];
frost$collections$Iterator* $tmp837 = $tmp835(((frost$collections$Iterable*) $tmp833));
goto block4;
block4:;
ITable* $tmp838 = $tmp837->$class->itable;
while ($tmp838->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp838 = $tmp838->next;
}
$fn840 $tmp839 = $tmp838->methods[0];
frost$core$Bit $tmp841 = $tmp839($tmp837);
bool $tmp842 = $tmp841.value;
if ($tmp842) goto block6; else goto block5;
block5:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp843 = $tmp837->$class->itable;
while ($tmp843->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[1];
frost$core$Object* $tmp846 = $tmp844($tmp837);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp846)));
org$frostlang$frostc$ASTNode* $tmp847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp846);
// line 323
frost$core$Int64 $tmp848 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp849 = *(&local2);
frost$core$Int64 $tmp850 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp849);
int64_t $tmp851 = $tmp848.value;
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851 + $tmp852;
frost$core$Int64 $tmp854 = (frost$core$Int64) {$tmp853};
*(&local1) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q($tmp846);
org$frostlang$frostc$ASTNode* $tmp855 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// line 325
frost$core$Int64 $tmp856 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp857 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp856;
block3:;
frost$core$Int64 $tmp858 = (frost$core$Int64) {2};
frost$core$Bit $tmp859 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp858);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp861 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp862 = *$tmp861;
org$frostlang$frostc$ASTNode** $tmp863 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp864 = *$tmp863;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
org$frostlang$frostc$ASTNode* $tmp865 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local3) = $tmp864;
org$frostlang$frostc$ASTNode** $tmp866 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp867 = *$tmp866;
// line 328
org$frostlang$frostc$ASTNode* $tmp868 = *(&local3);
frost$core$Int64 $tmp869 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp868);
org$frostlang$frostc$ASTNode* $tmp870 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp869;
block8:;
frost$core$Int64 $tmp871 = (frost$core$Int64) {3};
frost$core$Bit $tmp872 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp871);
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block9; else goto block10;
block9:;
// line 331
frost$core$Int64 $tmp874 = (frost$core$Int64) {0};
return $tmp874;
block10:;
frost$core$Int64 $tmp875 = (frost$core$Int64) {4};
frost$core$Bit $tmp876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp875);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block11; else goto block12;
block11:;
// line 334
frost$core$Int64 $tmp878 = (frost$core$Int64) {0};
return $tmp878;
block12:;
frost$core$Int64 $tmp879 = (frost$core$Int64) {5};
frost$core$Bit $tmp880 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp879);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp882 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp883 = *$tmp882;
org$frostlang$frostc$ASTNode** $tmp884 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp885 = *$tmp884;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
org$frostlang$frostc$ASTNode* $tmp886 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local4) = $tmp885;
org$frostlang$frostc$expression$Binary$Operator* $tmp887 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp888 = *$tmp887;
org$frostlang$frostc$ASTNode** $tmp889 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp890 = *$tmp889;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
org$frostlang$frostc$ASTNode* $tmp891 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local5) = $tmp890;
// line 337
frost$core$Int64 $tmp892 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp893 = *(&local4);
frost$core$Int64 $tmp894 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp893);
int64_t $tmp895 = $tmp892.value;
int64_t $tmp896 = $tmp894.value;
int64_t $tmp897 = $tmp895 + $tmp896;
frost$core$Int64 $tmp898 = (frost$core$Int64) {$tmp897};
org$frostlang$frostc$ASTNode* $tmp899 = *(&local5);
frost$core$Int64 $tmp900 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp899);
int64_t $tmp901 = $tmp898.value;
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901 + $tmp902;
frost$core$Int64 $tmp904 = (frost$core$Int64) {$tmp903};
org$frostlang$frostc$ASTNode* $tmp905 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp906 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp904;
block14:;
frost$core$Int64 $tmp907 = (frost$core$Int64) {6};
frost$core$Bit $tmp908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp907);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block15; else goto block16;
block15:;
// line 340
frost$core$Int64 $tmp910 = (frost$core$Int64) {1};
return $tmp910;
block16:;
frost$core$Int64 $tmp911 = (frost$core$Int64) {7};
frost$core$Bit $tmp912 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp911);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp914 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp915 = *$tmp914;
org$frostlang$frostc$FixedArray** $tmp916 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp917 = *$tmp916;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
org$frostlang$frostc$FixedArray* $tmp918 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local6) = $tmp917;
// line 343
frost$core$Int64 $tmp919 = (frost$core$Int64) {0};
*(&local7) = $tmp919;
// line 344
org$frostlang$frostc$FixedArray* $tmp920 = *(&local6);
ITable* $tmp921 = ((frost$collections$Iterable*) $tmp920)->$class->itable;
while ($tmp921->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp921 = $tmp921->next;
}
$fn923 $tmp922 = $tmp921->methods[0];
frost$collections$Iterator* $tmp924 = $tmp922(((frost$collections$Iterable*) $tmp920));
goto block19;
block19:;
ITable* $tmp925 = $tmp924->$class->itable;
while ($tmp925->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[0];
frost$core$Bit $tmp928 = $tmp926($tmp924);
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp930 = $tmp924->$class->itable;
while ($tmp930->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[1];
frost$core$Object* $tmp933 = $tmp931($tmp924);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp933)));
org$frostlang$frostc$ASTNode* $tmp934 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp933);
// line 345
frost$core$Int64 $tmp935 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp936 = *(&local8);
frost$core$Int64 $tmp937 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp936);
int64_t $tmp938 = $tmp935.value;
int64_t $tmp939 = $tmp937.value;
int64_t $tmp940 = $tmp938 + $tmp939;
frost$core$Int64 $tmp941 = (frost$core$Int64) {$tmp940};
*(&local7) = $tmp941;
frost$core$Frost$unref$frost$core$Object$Q($tmp933);
org$frostlang$frostc$ASTNode* $tmp942 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// line 347
frost$core$Int64 $tmp943 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp944 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp943;
block18:;
frost$core$Int64 $tmp945 = (frost$core$Int64) {8};
frost$core$Bit $tmp946 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp945);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block22; else goto block23;
block22:;
// line 350
frost$core$Int64 $tmp948 = (frost$core$Int64) {1};
return $tmp948;
block23:;
frost$core$Int64 $tmp949 = (frost$core$Int64) {9};
frost$core$Bit $tmp950 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp949);
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp952 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp953 = *$tmp952;
org$frostlang$frostc$ASTNode** $tmp954 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp955 = *$tmp954;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
org$frostlang$frostc$ASTNode* $tmp956 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local9) = $tmp955;
org$frostlang$frostc$FixedArray** $tmp957 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp958 = *$tmp957;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
org$frostlang$frostc$FixedArray* $tmp959 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local10) = $tmp958;
// line 353
org$frostlang$frostc$ASTNode* $tmp960 = *(&local9);
frost$core$Int64 $tmp961 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp960);
*(&local11) = $tmp961;
// line 354
org$frostlang$frostc$FixedArray* $tmp962 = *(&local10);
ITable* $tmp963 = ((frost$collections$Iterable*) $tmp962)->$class->itable;
while ($tmp963->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp963 = $tmp963->next;
}
$fn965 $tmp964 = $tmp963->methods[0];
frost$collections$Iterator* $tmp966 = $tmp964(((frost$collections$Iterable*) $tmp962));
goto block26;
block26:;
ITable* $tmp967 = $tmp966->$class->itable;
while ($tmp967->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp967 = $tmp967->next;
}
$fn969 $tmp968 = $tmp967->methods[0];
frost$core$Bit $tmp970 = $tmp968($tmp966);
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp972 = $tmp966->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[1];
frost$core$Object* $tmp975 = $tmp973($tmp966);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp975)));
org$frostlang$frostc$ASTNode* $tmp976 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp975);
// line 355
frost$core$Int64 $tmp977 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp978 = *(&local12);
frost$core$Int64 $tmp979 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp978);
int64_t $tmp980 = $tmp977.value;
int64_t $tmp981 = $tmp979.value;
int64_t $tmp982 = $tmp980 + $tmp981;
frost$core$Int64 $tmp983 = (frost$core$Int64) {$tmp982};
*(&local11) = $tmp983;
frost$core$Frost$unref$frost$core$Object$Q($tmp975);
org$frostlang$frostc$ASTNode* $tmp984 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// line 357
frost$core$Int64 $tmp985 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp986 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp987 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp985;
block25:;
frost$core$Int64 $tmp988 = (frost$core$Int64) {11};
frost$core$Bit $tmp989 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp988);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp991 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp992 = *$tmp991;
org$frostlang$frostc$ASTNode** $tmp993 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp994 = *$tmp993;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
org$frostlang$frostc$ASTNode* $tmp995 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local13) = $tmp994;
org$frostlang$frostc$ChoiceCase** $tmp996 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp997 = *$tmp996;
frost$core$Int64* $tmp998 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp999 = *$tmp998;
// line 360
org$frostlang$frostc$ASTNode* $tmp1000 = *(&local13);
frost$core$Int64 $tmp1001 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1000);
org$frostlang$frostc$ASTNode* $tmp1002 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1001;
block30:;
frost$core$Int64 $tmp1003 = (frost$core$Int64) {13};
frost$core$Bit $tmp1004 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1003);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block31; else goto block32;
block31:;
// line 363
frost$core$Int64 $tmp1006 = (frost$core$Int64) {1};
return $tmp1006;
block32:;
frost$core$Int64 $tmp1007 = (frost$core$Int64) {14};
frost$core$Bit $tmp1008 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1007);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp1010 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1011 = *$tmp1010;
org$frostlang$frostc$ASTNode** $tmp1012 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1013 = *$tmp1012;
org$frostlang$frostc$ASTNode** $tmp1014 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1015 = *$tmp1014;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
org$frostlang$frostc$ASTNode* $tmp1016 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local14) = $tmp1015;
// line 366
org$frostlang$frostc$ASTNode* $tmp1017 = *(&local14);
frost$core$Bit $tmp1018 = frost$core$Bit$init$builtin_bit($tmp1017 == NULL);
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block35; else goto block36;
block35:;
// line 367
frost$core$Int64 $tmp1020 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1021 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1020;
block36:;
// line 369
org$frostlang$frostc$ASTNode* $tmp1022 = *(&local14);
frost$core$Int64 $tmp1023 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1022);
org$frostlang$frostc$ASTNode* $tmp1024 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1023;
block34:;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {15};
frost$core$Bit $tmp1026 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1025);
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp1028 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1029 = *$tmp1028;
frost$core$String** $tmp1030 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1031 = *$tmp1030;
org$frostlang$frostc$FixedArray** $tmp1032 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1033 = *$tmp1032;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$FixedArray* $tmp1034 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local15) = $tmp1033;
org$frostlang$frostc$ASTNode** $tmp1035 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1036 = *$tmp1035;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local16) = $tmp1036;
// line 372
org$frostlang$frostc$ASTNode* $tmp1038 = *(&local16);
frost$core$Int64 $tmp1039 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1038);
*(&local17) = $tmp1039;
// line 373
org$frostlang$frostc$FixedArray* $tmp1040 = *(&local15);
ITable* $tmp1041 = ((frost$collections$Iterable*) $tmp1040)->$class->itable;
while ($tmp1041->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1041 = $tmp1041->next;
}
$fn1043 $tmp1042 = $tmp1041->methods[0];
frost$collections$Iterator* $tmp1044 = $tmp1042(((frost$collections$Iterable*) $tmp1040));
goto block39;
block39:;
ITable* $tmp1045 = $tmp1044->$class->itable;
while ($tmp1045->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1045 = $tmp1045->next;
}
$fn1047 $tmp1046 = $tmp1045->methods[0];
frost$core$Bit $tmp1048 = $tmp1046($tmp1044);
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block41; else goto block40;
block40:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1050 = $tmp1044->$class->itable;
while ($tmp1050->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1050 = $tmp1050->next;
}
$fn1052 $tmp1051 = $tmp1050->methods[1];
frost$core$Object* $tmp1053 = $tmp1051($tmp1044);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1053)));
org$frostlang$frostc$ASTNode* $tmp1054 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1053);
// line 374
frost$core$Int64 $tmp1055 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1056 = *(&local18);
frost$core$Int64 $tmp1057 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1056);
int64_t $tmp1058 = $tmp1055.value;
int64_t $tmp1059 = $tmp1057.value;
int64_t $tmp1060 = $tmp1058 + $tmp1059;
frost$core$Int64 $tmp1061 = (frost$core$Int64) {$tmp1060};
*(&local17) = $tmp1061;
frost$core$Frost$unref$frost$core$Object$Q($tmp1053);
org$frostlang$frostc$ASTNode* $tmp1062 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
// line 376
frost$core$Int64 $tmp1063 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1064 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1065 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1063;
block38:;
frost$core$Int64 $tmp1066 = (frost$core$Int64) {16};
frost$core$Bit $tmp1067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1066);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1069 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1070 = *$tmp1069;
org$frostlang$frostc$ASTNode** $tmp1071 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1072 = *$tmp1071;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
org$frostlang$frostc$ASTNode* $tmp1073 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local19) = $tmp1072;
frost$core$String** $tmp1074 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1075 = *$tmp1074;
// line 379
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local19);
frost$core$Int64 $tmp1077 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1076);
org$frostlang$frostc$ASTNode* $tmp1078 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1077;
block43:;
frost$core$Int64 $tmp1079 = (frost$core$Int64) {17};
frost$core$Bit $tmp1080 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1079);
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1082 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1083 = *$tmp1082;
org$frostlang$frostc$ASTNode** $tmp1084 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1085 = *$tmp1084;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
org$frostlang$frostc$ASTNode* $tmp1086 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local20) = $tmp1085;
frost$core$String** $tmp1087 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1088 = *$tmp1087;
org$frostlang$frostc$FixedArray** $tmp1089 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1090 = *$tmp1089;
// line 382
org$frostlang$frostc$ASTNode* $tmp1091 = *(&local20);
frost$core$Int64 $tmp1092 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1091);
org$frostlang$frostc$ASTNode* $tmp1093 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1092;
block45:;
frost$core$Int64 $tmp1094 = (frost$core$Int64) {20};
frost$core$Bit $tmp1095 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1094);
bool $tmp1096 = $tmp1095.value;
if ($tmp1096) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1097 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1098 = *$tmp1097;
frost$core$String** $tmp1099 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1100 = *$tmp1099;
org$frostlang$frostc$ASTNode** $tmp1101 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1102 = *$tmp1101;
org$frostlang$frostc$ASTNode** $tmp1103 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1104 = *$tmp1103;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local21) = $tmp1104;
org$frostlang$frostc$FixedArray** $tmp1106 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1107 = *$tmp1106;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
org$frostlang$frostc$FixedArray* $tmp1108 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local22) = $tmp1107;
// line 385
org$frostlang$frostc$ASTNode* $tmp1109 = *(&local21);
frost$core$Int64 $tmp1110 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1109);
*(&local23) = $tmp1110;
// line 386
org$frostlang$frostc$FixedArray* $tmp1111 = *(&local22);
ITable* $tmp1112 = ((frost$collections$Iterable*) $tmp1111)->$class->itable;
while ($tmp1112->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1112 = $tmp1112->next;
}
$fn1114 $tmp1113 = $tmp1112->methods[0];
frost$collections$Iterator* $tmp1115 = $tmp1113(((frost$collections$Iterable*) $tmp1111));
goto block48;
block48:;
ITable* $tmp1116 = $tmp1115->$class->itable;
while ($tmp1116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1116 = $tmp1116->next;
}
$fn1118 $tmp1117 = $tmp1116->methods[0];
frost$core$Bit $tmp1119 = $tmp1117($tmp1115);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block50; else goto block49;
block49:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1121 = $tmp1115->$class->itable;
while ($tmp1121->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[1];
frost$core$Object* $tmp1124 = $tmp1122($tmp1115);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1124)));
org$frostlang$frostc$ASTNode* $tmp1125 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1124);
// line 387
frost$core$Int64 $tmp1126 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1127 = *(&local24);
frost$core$Int64 $tmp1128 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1127);
int64_t $tmp1129 = $tmp1126.value;
int64_t $tmp1130 = $tmp1128.value;
int64_t $tmp1131 = $tmp1129 + $tmp1130;
frost$core$Int64 $tmp1132 = (frost$core$Int64) {$tmp1131};
*(&local23) = $tmp1132;
frost$core$Frost$unref$frost$core$Object$Q($tmp1124);
org$frostlang$frostc$ASTNode* $tmp1133 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block48;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// line 389
frost$core$Int64 $tmp1134 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1135 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1136 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1134;
block47:;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {21};
frost$core$Bit $tmp1138 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1137);
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block51; else goto block52;
block51:;
// line 392
frost$core$Int64 $tmp1140 = (frost$core$Int64) {0};
return $tmp1140;
block52:;
frost$core$Int64 $tmp1141 = (frost$core$Int64) {22};
frost$core$Bit $tmp1142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1141);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block53; else goto block54;
block53:;
// line 395
frost$core$Int64 $tmp1144 = (frost$core$Int64) {1};
return $tmp1144;
block54:;
frost$core$Int64 $tmp1145 = (frost$core$Int64) {24};
frost$core$Bit $tmp1146 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1145);
bool $tmp1147 = $tmp1146.value;
if ($tmp1147) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1148 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1149 = *$tmp1148;
org$frostlang$frostc$ASTNode** $tmp1150 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1151 = *$tmp1150;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
org$frostlang$frostc$ASTNode* $tmp1152 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local25) = $tmp1151;
org$frostlang$frostc$FixedArray** $tmp1153 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1154 = *$tmp1153;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
org$frostlang$frostc$FixedArray* $tmp1155 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local26) = $tmp1154;
org$frostlang$frostc$ASTNode** $tmp1156 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1157 = *$tmp1156;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
org$frostlang$frostc$ASTNode* $tmp1158 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local27) = $tmp1157;
// line 398
org$frostlang$frostc$ASTNode* $tmp1159 = *(&local25);
frost$core$Int64 $tmp1160 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1159);
*(&local28) = $tmp1160;
// line 399
org$frostlang$frostc$FixedArray* $tmp1161 = *(&local26);
ITable* $tmp1162 = ((frost$collections$Iterable*) $tmp1161)->$class->itable;
while ($tmp1162->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1162 = $tmp1162->next;
}
$fn1164 $tmp1163 = $tmp1162->methods[0];
frost$collections$Iterator* $tmp1165 = $tmp1163(((frost$collections$Iterable*) $tmp1161));
goto block57;
block57:;
ITable* $tmp1166 = $tmp1165->$class->itable;
while ($tmp1166->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1166 = $tmp1166->next;
}
$fn1168 $tmp1167 = $tmp1166->methods[0];
frost$core$Bit $tmp1169 = $tmp1167($tmp1165);
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block59; else goto block58;
block58:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1171 = $tmp1165->$class->itable;
while ($tmp1171->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1171 = $tmp1171->next;
}
$fn1173 $tmp1172 = $tmp1171->methods[1];
frost$core$Object* $tmp1174 = $tmp1172($tmp1165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1174)));
org$frostlang$frostc$ASTNode* $tmp1175 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1174);
// line 400
frost$core$Int64 $tmp1176 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1177 = *(&local29);
frost$core$Int64 $tmp1178 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1177);
int64_t $tmp1179 = $tmp1176.value;
int64_t $tmp1180 = $tmp1178.value;
int64_t $tmp1181 = $tmp1179 + $tmp1180;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {$tmp1181};
*(&local28) = $tmp1182;
frost$core$Frost$unref$frost$core$Object$Q($tmp1174);
org$frostlang$frostc$ASTNode* $tmp1183 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block57;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// line 402
org$frostlang$frostc$ASTNode* $tmp1184 = *(&local27);
frost$core$Bit $tmp1185 = frost$core$Bit$init$builtin_bit($tmp1184 != NULL);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block60; else goto block61;
block60:;
// line 403
frost$core$Int64 $tmp1187 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1188 = *(&local27);
frost$core$Int64 $tmp1189 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1188);
int64_t $tmp1190 = $tmp1187.value;
int64_t $tmp1191 = $tmp1189.value;
int64_t $tmp1192 = $tmp1190 + $tmp1191;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {$tmp1192};
*(&local28) = $tmp1193;
goto block61;
block61:;
// line 405
frost$core$Int64 $tmp1194 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1195 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1196 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1197 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1194;
block56:;
frost$core$Int64 $tmp1198 = (frost$core$Int64) {25};
frost$core$Bit $tmp1199 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1198);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block62; else goto block63;
block62:;
// line 408
frost$core$Int64 $tmp1201 = (frost$core$Int64) {1};
return $tmp1201;
block63:;
frost$core$Int64 $tmp1202 = (frost$core$Int64) {27};
frost$core$Bit $tmp1203 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1202);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block64; else goto block65;
block64:;
org$frostlang$frostc$Position* $tmp1205 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1206 = *$tmp1205;
frost$core$String** $tmp1207 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1208 = *$tmp1207;
org$frostlang$frostc$FixedArray** $tmp1209 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1210 = *$tmp1209;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
org$frostlang$frostc$FixedArray* $tmp1211 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local30) = $tmp1210;
// line 411
frost$core$Int64 $tmp1212 = (frost$core$Int64) {0};
*(&local31) = $tmp1212;
// line 412
org$frostlang$frostc$FixedArray* $tmp1213 = *(&local30);
ITable* $tmp1214 = ((frost$collections$Iterable*) $tmp1213)->$class->itable;
while ($tmp1214->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1214 = $tmp1214->next;
}
$fn1216 $tmp1215 = $tmp1214->methods[0];
frost$collections$Iterator* $tmp1217 = $tmp1215(((frost$collections$Iterable*) $tmp1213));
goto block66;
block66:;
ITable* $tmp1218 = $tmp1217->$class->itable;
while ($tmp1218->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1218 = $tmp1218->next;
}
$fn1220 $tmp1219 = $tmp1218->methods[0];
frost$core$Bit $tmp1221 = $tmp1219($tmp1217);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block68; else goto block67;
block67:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1223 = $tmp1217->$class->itable;
while ($tmp1223->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1223 = $tmp1223->next;
}
$fn1225 $tmp1224 = $tmp1223->methods[1];
frost$core$Object* $tmp1226 = $tmp1224($tmp1217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1226)));
org$frostlang$frostc$ASTNode* $tmp1227 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1226);
// line 413
frost$core$Int64 $tmp1228 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local32);
frost$core$Int64 $tmp1230 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1229);
int64_t $tmp1231 = $tmp1228.value;
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231 + $tmp1232;
frost$core$Int64 $tmp1234 = (frost$core$Int64) {$tmp1233};
*(&local31) = $tmp1234;
frost$core$Frost$unref$frost$core$Object$Q($tmp1226);
org$frostlang$frostc$ASTNode* $tmp1235 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
// line 415
frost$core$Int64 $tmp1236 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1237 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1236;
block65:;
frost$core$Int64 $tmp1238 = (frost$core$Int64) {28};
frost$core$Bit $tmp1239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Position* $tmp1241 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1242 = *$tmp1241;
org$frostlang$frostc$ASTNode** $tmp1243 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1244 = *$tmp1243;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
org$frostlang$frostc$ASTNode* $tmp1245 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
*(&local33) = $tmp1244;
org$frostlang$frostc$FixedArray** $tmp1246 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1247 = *$tmp1246;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
org$frostlang$frostc$FixedArray* $tmp1248 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local34) = $tmp1247;
org$frostlang$frostc$FixedArray** $tmp1249 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1250 = *$tmp1249;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
org$frostlang$frostc$FixedArray* $tmp1251 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local35) = $tmp1250;
// line 418
org$frostlang$frostc$ASTNode* $tmp1252 = *(&local33);
frost$core$Int64 $tmp1253 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1252);
*(&local36) = $tmp1253;
// line 419
org$frostlang$frostc$FixedArray* $tmp1254 = *(&local34);
ITable* $tmp1255 = ((frost$collections$Iterable*) $tmp1254)->$class->itable;
while ($tmp1255->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1255 = $tmp1255->next;
}
$fn1257 $tmp1256 = $tmp1255->methods[0];
frost$collections$Iterator* $tmp1258 = $tmp1256(((frost$collections$Iterable*) $tmp1254));
goto block71;
block71:;
ITable* $tmp1259 = $tmp1258->$class->itable;
while ($tmp1259->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1259 = $tmp1259->next;
}
$fn1261 $tmp1260 = $tmp1259->methods[0];
frost$core$Bit $tmp1262 = $tmp1260($tmp1258);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block73; else goto block72;
block72:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1264 = $tmp1258->$class->itable;
while ($tmp1264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1264 = $tmp1264->next;
}
$fn1266 $tmp1265 = $tmp1264->methods[1];
frost$core$Object* $tmp1267 = $tmp1265($tmp1258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1267)));
org$frostlang$frostc$ASTNode* $tmp1268 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1267);
// line 420
frost$core$Int64 $tmp1269 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1270 = *(&local37);
frost$core$Int64 $tmp1271 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1270);
int64_t $tmp1272 = $tmp1269.value;
int64_t $tmp1273 = $tmp1271.value;
int64_t $tmp1274 = $tmp1272 + $tmp1273;
frost$core$Int64 $tmp1275 = (frost$core$Int64) {$tmp1274};
*(&local36) = $tmp1275;
frost$core$Frost$unref$frost$core$Object$Q($tmp1267);
org$frostlang$frostc$ASTNode* $tmp1276 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
// line 422
org$frostlang$frostc$FixedArray* $tmp1277 = *(&local35);
frost$core$Bit $tmp1278 = frost$core$Bit$init$builtin_bit($tmp1277 != NULL);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block74; else goto block75;
block74:;
// line 423
org$frostlang$frostc$FixedArray* $tmp1280 = *(&local35);
ITable* $tmp1281 = ((frost$collections$Iterable*) $tmp1280)->$class->itable;
while ($tmp1281->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1281 = $tmp1281->next;
}
$fn1283 $tmp1282 = $tmp1281->methods[0];
frost$collections$Iterator* $tmp1284 = $tmp1282(((frost$collections$Iterable*) $tmp1280));
goto block76;
block76:;
ITable* $tmp1285 = $tmp1284->$class->itable;
while ($tmp1285->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1285 = $tmp1285->next;
}
$fn1287 $tmp1286 = $tmp1285->methods[0];
frost$core$Bit $tmp1288 = $tmp1286($tmp1284);
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block78; else goto block77;
block77:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1290 = $tmp1284->$class->itable;
while ($tmp1290->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1290 = $tmp1290->next;
}
$fn1292 $tmp1291 = $tmp1290->methods[1];
frost$core$Object* $tmp1293 = $tmp1291($tmp1284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1293)));
org$frostlang$frostc$ASTNode* $tmp1294 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1293);
// line 424
frost$core$Int64 $tmp1295 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1296 = *(&local38);
frost$core$Int64 $tmp1297 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1296);
int64_t $tmp1298 = $tmp1295.value;
int64_t $tmp1299 = $tmp1297.value;
int64_t $tmp1300 = $tmp1298 + $tmp1299;
frost$core$Int64 $tmp1301 = (frost$core$Int64) {$tmp1300};
*(&local36) = $tmp1301;
frost$core$Frost$unref$frost$core$Object$Q($tmp1293);
org$frostlang$frostc$ASTNode* $tmp1302 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
goto block75;
block75:;
// line 427
frost$core$Int64 $tmp1303 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1304 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1305 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1306 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1303;
block70:;
frost$core$Int64 $tmp1307 = (frost$core$Int64) {29};
frost$core$Bit $tmp1308 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1307);
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block79; else goto block80;
block79:;
// line 430
frost$core$Int64 $tmp1310 = (frost$core$Int64) {10};
return $tmp1310;
block80:;
frost$core$Int64 $tmp1311 = (frost$core$Int64) {31};
frost$core$Bit $tmp1312 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1311);
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block81; else goto block82;
block81:;
// line 433
frost$core$Int64 $tmp1314 = (frost$core$Int64) {1};
return $tmp1314;
block82:;
frost$core$Int64 $tmp1315 = (frost$core$Int64) {32};
frost$core$Bit $tmp1316 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1315);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block83; else goto block84;
block83:;
// line 436
frost$core$Int64 $tmp1318 = (frost$core$Int64) {0};
return $tmp1318;
block84:;
frost$core$Int64 $tmp1319 = (frost$core$Int64) {35};
frost$core$Bit $tmp1320 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1319);
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block85; else goto block86;
block85:;
// line 439
frost$core$Int64 $tmp1322 = (frost$core$Int64) {1};
return $tmp1322;
block86:;
frost$core$Int64 $tmp1323 = (frost$core$Int64) {36};
frost$core$Bit $tmp1324 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1323);
bool $tmp1325 = $tmp1324.value;
if ($tmp1325) goto block87; else goto block88;
block87:;
// line 442
frost$core$Int64 $tmp1326 = (frost$core$Int64) {1};
return $tmp1326;
block88:;
frost$core$Int64 $tmp1327 = (frost$core$Int64) {37};
frost$core$Bit $tmp1328 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1327);
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block89; else goto block90;
block89:;
// line 445
frost$core$Int64 $tmp1330 = (frost$core$Int64) {1};
return $tmp1330;
block90:;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {38};
frost$core$Bit $tmp1332 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1331);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp1334 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1335 = *$tmp1334;
org$frostlang$frostc$ASTNode** $tmp1336 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1337 = *$tmp1336;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
org$frostlang$frostc$ASTNode* $tmp1338 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local39) = $tmp1337;
// line 448
org$frostlang$frostc$ASTNode* $tmp1339 = *(&local39);
frost$core$Bit $tmp1340 = frost$core$Bit$init$builtin_bit($tmp1339 == NULL);
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block93; else goto block94;
block93:;
// line 449
frost$core$Int64 $tmp1342 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1343 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1342;
block94:;
// line 451
org$frostlang$frostc$ASTNode* $tmp1344 = *(&local39);
frost$core$Int64 $tmp1345 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1344);
org$frostlang$frostc$ASTNode* $tmp1346 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1345;
block92:;
frost$core$Int64 $tmp1347 = (frost$core$Int64) {39};
frost$core$Bit $tmp1348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1347);
bool $tmp1349 = $tmp1348.value;
if ($tmp1349) goto block95; else goto block96;
block95:;
// line 454
frost$core$Int64 $tmp1350 = (frost$core$Int64) {1};
return $tmp1350;
block96:;
frost$core$Int64 $tmp1351 = (frost$core$Int64) {40};
frost$core$Bit $tmp1352 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1351);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block97; else goto block98;
block97:;
// line 457
frost$core$Int64 $tmp1354 = (frost$core$Int64) {1};
return $tmp1354;
block98:;
frost$core$Int64 $tmp1355 = (frost$core$Int64) {41};
frost$core$Bit $tmp1356 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1355);
bool $tmp1357 = $tmp1356.value;
if ($tmp1357) goto block99; else goto block100;
block99:;
// line 460
frost$core$Int64 $tmp1358 = (frost$core$Int64) {1};
return $tmp1358;
block100:;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {42};
frost$core$Bit $tmp1360 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1359);
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block101; else goto block102;
block101:;
// line 463
frost$core$Int64 $tmp1362 = (frost$core$Int64) {10};
return $tmp1362;
block102:;
frost$core$Int64 $tmp1363 = (frost$core$Int64) {46};
frost$core$Bit $tmp1364 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1363);
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block103; else goto block104;
block103:;
// line 466
frost$core$Int64 $tmp1366 = (frost$core$Int64) {0};
return $tmp1366;
block104:;
frost$core$Int64 $tmp1367 = (frost$core$Int64) {47};
frost$core$Bit $tmp1368 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1367);
bool $tmp1369 = $tmp1368.value;
if ($tmp1369) goto block105; else goto block106;
block105:;
// line 469
frost$core$Int64 $tmp1370 = (frost$core$Int64) {10};
return $tmp1370;
block106:;
frost$core$Int64 $tmp1371 = (frost$core$Int64) {49};
frost$core$Bit $tmp1372 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1371);
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block107; else goto block108;
block107:;
org$frostlang$frostc$Position* $tmp1374 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1375 = *$tmp1374;
org$frostlang$frostc$expression$Unary$Operator* $tmp1376 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 16);
org$frostlang$frostc$expression$Unary$Operator $tmp1377 = *$tmp1376;
org$frostlang$frostc$ASTNode** $tmp1378 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1379 = *$tmp1378;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
org$frostlang$frostc$ASTNode* $tmp1380 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local40) = $tmp1379;
// line 472
frost$core$Int64 $tmp1381 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1382 = *(&local40);
frost$core$Int64 $tmp1383 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1382);
int64_t $tmp1384 = $tmp1381.value;
int64_t $tmp1385 = $tmp1383.value;
int64_t $tmp1386 = $tmp1384 + $tmp1385;
frost$core$Int64 $tmp1387 = (frost$core$Int64) {$tmp1386};
org$frostlang$frostc$ASTNode* $tmp1388 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1387;
block108:;
frost$core$Int64 $tmp1389 = (frost$core$Int64) {50};
frost$core$Bit $tmp1390 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1389);
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block109; else goto block110;
block109:;
// line 475
frost$core$Int64 $tmp1392 = (frost$core$Int64) {0};
return $tmp1392;
block110:;
frost$core$Int64 $tmp1393 = (frost$core$Int64) {51};
frost$core$Bit $tmp1394 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1393);
bool $tmp1395 = $tmp1394.value;
if ($tmp1395) goto block111; else goto block112;
block111:;
// line 478
frost$core$Int64 $tmp1396 = (frost$core$Int64) {10};
return $tmp1396;
block112:;
frost$core$Int64 $tmp1397 = (frost$core$Int64) {53};
frost$core$Bit $tmp1398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1397);
bool $tmp1399 = $tmp1398.value;
if ($tmp1399) goto block113; else goto block114;
block113:;
org$frostlang$frostc$Position* $tmp1400 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1401 = *$tmp1400;
org$frostlang$frostc$Variable$Kind* $tmp1402 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp1403 = *$tmp1402;
org$frostlang$frostc$FixedArray** $tmp1404 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1405 = *$tmp1404;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
org$frostlang$frostc$FixedArray* $tmp1406 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local41) = $tmp1405;
// line 481
frost$core$Int64 $tmp1407 = (frost$core$Int64) {0};
*(&local42) = $tmp1407;
// line 482
org$frostlang$frostc$FixedArray* $tmp1408 = *(&local41);
ITable* $tmp1409 = ((frost$collections$Iterable*) $tmp1408)->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[0];
frost$collections$Iterator* $tmp1412 = $tmp1410(((frost$collections$Iterable*) $tmp1408));
goto block115;
block115:;
ITable* $tmp1413 = $tmp1412->$class->itable;
while ($tmp1413->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1413 = $tmp1413->next;
}
$fn1415 $tmp1414 = $tmp1413->methods[0];
frost$core$Bit $tmp1416 = $tmp1414($tmp1412);
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block117; else goto block116;
block116:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1418 = $tmp1412->$class->itable;
while ($tmp1418->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1418 = $tmp1418->next;
}
$fn1420 $tmp1419 = $tmp1418->methods[1];
frost$core$Object* $tmp1421 = $tmp1419($tmp1412);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1421)));
org$frostlang$frostc$ASTNode* $tmp1422 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1421);
// line 483
frost$core$Int64 $tmp1423 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1424 = *(&local43);
frost$core$Int64 $tmp1425 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1424);
int64_t $tmp1426 = $tmp1423.value;
int64_t $tmp1427 = $tmp1425.value;
int64_t $tmp1428 = $tmp1426 + $tmp1427;
frost$core$Int64 $tmp1429 = (frost$core$Int64) {$tmp1428};
*(&local42) = $tmp1429;
frost$core$Frost$unref$frost$core$Object$Q($tmp1421);
org$frostlang$frostc$ASTNode* $tmp1430 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1430));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block115;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// line 485
frost$core$Int64 $tmp1431 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1432 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1431;
block114:;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {54};
frost$core$Bit $tmp1434 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1433);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block118; else goto block119;
block118:;
org$frostlang$frostc$Position* $tmp1436 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1437 = *$tmp1436;
org$frostlang$frostc$FixedArray** $tmp1438 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1439 = *$tmp1438;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
org$frostlang$frostc$FixedArray* $tmp1440 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local44) = $tmp1439;
org$frostlang$frostc$FixedArray** $tmp1441 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1442 = *$tmp1441;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
org$frostlang$frostc$FixedArray* $tmp1443 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local45) = $tmp1442;
// line 488
frost$core$Int64 $tmp1444 = (frost$core$Int64) {0};
*(&local46) = $tmp1444;
// line 489
org$frostlang$frostc$FixedArray* $tmp1445 = *(&local44);
ITable* $tmp1446 = ((frost$collections$Iterable*) $tmp1445)->$class->itable;
while ($tmp1446->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1446 = $tmp1446->next;
}
$fn1448 $tmp1447 = $tmp1446->methods[0];
frost$collections$Iterator* $tmp1449 = $tmp1447(((frost$collections$Iterable*) $tmp1445));
goto block120;
block120:;
ITable* $tmp1450 = $tmp1449->$class->itable;
while ($tmp1450->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
frost$core$Bit $tmp1453 = $tmp1451($tmp1449);
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block122; else goto block121;
block121:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1455 = $tmp1449->$class->itable;
while ($tmp1455->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1455 = $tmp1455->next;
}
$fn1457 $tmp1456 = $tmp1455->methods[1];
frost$core$Object* $tmp1458 = $tmp1456($tmp1449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1458)));
org$frostlang$frostc$ASTNode* $tmp1459 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1458);
// line 490
frost$core$Int64 $tmp1460 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1461 = *(&local47);
frost$core$Int64 $tmp1462 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1461);
int64_t $tmp1463 = $tmp1460.value;
int64_t $tmp1464 = $tmp1462.value;
int64_t $tmp1465 = $tmp1463 + $tmp1464;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {$tmp1465};
*(&local46) = $tmp1466;
frost$core$Frost$unref$frost$core$Object$Q($tmp1458);
org$frostlang$frostc$ASTNode* $tmp1467 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block120;
block122:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
// line 492
org$frostlang$frostc$FixedArray* $tmp1468 = *(&local45);
ITable* $tmp1469 = ((frost$collections$Iterable*) $tmp1468)->$class->itable;
while ($tmp1469->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1469 = $tmp1469->next;
}
$fn1471 $tmp1470 = $tmp1469->methods[0];
frost$collections$Iterator* $tmp1472 = $tmp1470(((frost$collections$Iterable*) $tmp1468));
goto block123;
block123:;
ITable* $tmp1473 = $tmp1472->$class->itable;
while ($tmp1473->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1473 = $tmp1473->next;
}
$fn1475 $tmp1474 = $tmp1473->methods[0];
frost$core$Bit $tmp1476 = $tmp1474($tmp1472);
bool $tmp1477 = $tmp1476.value;
if ($tmp1477) goto block125; else goto block124;
block124:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1478 = $tmp1472->$class->itable;
while ($tmp1478->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1478 = $tmp1478->next;
}
$fn1480 $tmp1479 = $tmp1478->methods[1];
frost$core$Object* $tmp1481 = $tmp1479($tmp1472);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1481)));
org$frostlang$frostc$ASTNode* $tmp1482 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1481);
// line 493
frost$core$Int64 $tmp1483 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1484 = *(&local48);
frost$core$Int64 $tmp1485 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1484);
int64_t $tmp1486 = $tmp1483.value;
int64_t $tmp1487 = $tmp1485.value;
int64_t $tmp1488 = $tmp1486 + $tmp1487;
frost$core$Int64 $tmp1489 = (frost$core$Int64) {$tmp1488};
*(&local46) = $tmp1489;
frost$core$Frost$unref$frost$core$Object$Q($tmp1481);
org$frostlang$frostc$ASTNode* $tmp1490 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
// line 495
frost$core$Int64 $tmp1491 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1492 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1493 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1491;
block119:;
frost$core$Int64 $tmp1494 = (frost$core$Int64) {55};
frost$core$Bit $tmp1495 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp823, $tmp1494);
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block126; else goto block127;
block126:;
org$frostlang$frostc$Position* $tmp1497 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1498 = *$tmp1497;
frost$core$String** $tmp1499 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1500 = *$tmp1499;
org$frostlang$frostc$ASTNode** $tmp1501 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1502 = *$tmp1501;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
org$frostlang$frostc$ASTNode* $tmp1503 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local49) = $tmp1502;
org$frostlang$frostc$FixedArray** $tmp1504 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1505 = *$tmp1504;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
org$frostlang$frostc$FixedArray* $tmp1506 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local50) = $tmp1505;
// line 498
org$frostlang$frostc$ASTNode* $tmp1507 = *(&local49);
frost$core$Int64 $tmp1508 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1507);
*(&local51) = $tmp1508;
// line 499
org$frostlang$frostc$FixedArray* $tmp1509 = *(&local50);
ITable* $tmp1510 = ((frost$collections$Iterable*) $tmp1509)->$class->itable;
while ($tmp1510->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1510 = $tmp1510->next;
}
$fn1512 $tmp1511 = $tmp1510->methods[0];
frost$collections$Iterator* $tmp1513 = $tmp1511(((frost$collections$Iterable*) $tmp1509));
goto block128;
block128:;
ITable* $tmp1514 = $tmp1513->$class->itable;
while ($tmp1514->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1514 = $tmp1514->next;
}
$fn1516 $tmp1515 = $tmp1514->methods[0];
frost$core$Bit $tmp1517 = $tmp1515($tmp1513);
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block130; else goto block129;
block129:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1519 = $tmp1513->$class->itable;
while ($tmp1519->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[1];
frost$core$Object* $tmp1522 = $tmp1520($tmp1513);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1522)));
org$frostlang$frostc$ASTNode* $tmp1523 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1522);
// line 500
frost$core$Int64 $tmp1524 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1525 = *(&local52);
frost$core$Int64 $tmp1526 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1525);
int64_t $tmp1527 = $tmp1524.value;
int64_t $tmp1528 = $tmp1526.value;
int64_t $tmp1529 = $tmp1527 + $tmp1528;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {$tmp1529};
*(&local51) = $tmp1530;
frost$core$Frost$unref$frost$core$Object$Q($tmp1522);
org$frostlang$frostc$ASTNode* $tmp1531 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block128;
block130:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
// line 502
frost$core$Int64 $tmp1532 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1533 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1534 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1532;
block127:;
// line 505
frost$core$Int64 $tmp1535 = (frost$core$Int64) {505};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1536, $tmp1535);
abort(); // unreachable
block1:;
goto block131;
block131:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// line 511
frost$core$Weak** $tmp1537 = &param0->compiler;
frost$core$Weak* $tmp1538 = *$tmp1537;
frost$core$Object* $tmp1539 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1538);
org$frostlang$frostc$Compiler$Settings** $tmp1540 = &((org$frostlang$frostc$Compiler*) $tmp1539)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1541 = *$tmp1540;
frost$core$Int64* $tmp1542 = &$tmp1541->optimizationLevel;
frost$core$Int64 $tmp1543 = *$tmp1542;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {0};
int64_t $tmp1545 = $tmp1543.value;
int64_t $tmp1546 = $tmp1544.value;
bool $tmp1547 = $tmp1545 > $tmp1546;
frost$core$Bit $tmp1548 = (frost$core$Bit) {$tmp1547};
bool $tmp1549 = $tmp1548.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1539);
if ($tmp1549) goto block4; else goto block2;
block4:;
frost$core$Bit $tmp1550 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1551 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1550);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block3; else goto block2;
block3:;
frost$core$Bit $tmp1553 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block1; else goto block2;
block1:;
// line 513
frost$core$Int64 $tmp1555 = (frost$core$Int64) {0};
*(&local0) = $tmp1555;
// line 514
ITable* $tmp1556 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1556->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1556 = $tmp1556->next;
}
$fn1558 $tmp1557 = $tmp1556->methods[0];
frost$collections$Iterator* $tmp1559 = $tmp1557(((frost$collections$Iterable*) param2));
goto block5;
block5:;
ITable* $tmp1560 = $tmp1559->$class->itable;
while ($tmp1560->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1560 = $tmp1560->next;
}
$fn1562 $tmp1561 = $tmp1560->methods[0];
frost$core$Bit $tmp1563 = $tmp1561($tmp1559);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1565 = $tmp1559->$class->itable;
while ($tmp1565->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[1];
frost$core$Object* $tmp1568 = $tmp1566($tmp1559);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1568)));
org$frostlang$frostc$ASTNode* $tmp1569 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp1568);
// line 515
frost$core$Int64 $tmp1570 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1571 = *(&local1);
frost$core$Int64 $tmp1572 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1571);
int64_t $tmp1573 = $tmp1570.value;
int64_t $tmp1574 = $tmp1572.value;
int64_t $tmp1575 = $tmp1573 + $tmp1574;
frost$core$Int64 $tmp1576 = (frost$core$Int64) {$tmp1575};
*(&local0) = $tmp1576;
// line 516
frost$core$Int64 $tmp1577 = *(&local0);
frost$core$Int64 $tmp1578 = (frost$core$Int64) {10};
int64_t $tmp1579 = $tmp1577.value;
int64_t $tmp1580 = $tmp1578.value;
bool $tmp1581 = $tmp1579 > $tmp1580;
frost$core$Bit $tmp1582 = (frost$core$Bit) {$tmp1581};
bool $tmp1583 = $tmp1582.value;
if ($tmp1583) goto block8; else goto block9;
block8:;
// line 517
frost$core$Bit $tmp1584 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1568);
org$frostlang$frostc$ASTNode* $tmp1585 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
return $tmp1584;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1568);
org$frostlang$frostc$ASTNode* $tmp1586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// line 520
frost$core$Bit $tmp1587 = frost$core$Bit$init$builtin_bit(true);
return $tmp1587;
block2:;
// line 522
frost$core$Bit $tmp1588 = frost$core$Bit$init$builtin_bit(false);
return $tmp1588;

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
// line 529
*(&local0) = ((frost$core$String*) NULL);
// line 531
frost$core$Bit $tmp1589 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block1; else goto block3;
block1:;
// line 532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1591 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 535
frost$core$Int64* $tmp1592 = &param3->$rawValue;
frost$core$Int64 $tmp1593 = *$tmp1592;
frost$core$Int64 $tmp1594 = (frost$core$Int64) {40};
frost$core$Bit $tmp1595 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1593, $tmp1594);
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp1597 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1598 = *$tmp1597;
*(&local1) = $tmp1598;
frost$core$String** $tmp1599 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1600 = *$tmp1599;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$core$String* $tmp1601 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local2) = $tmp1600;
// line 537
frost$core$String* $tmp1602 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$String* $tmp1603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local0) = $tmp1602;
frost$core$String* $tmp1604 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 540
frost$core$Int64 $tmp1605 = (frost$core$Int64) {540};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1606, $tmp1605);
abort(); // unreachable
block4:;
goto block2;
block2:;
// line 544
org$frostlang$frostc$Annotations* $tmp1607 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
org$frostlang$frostc$Annotations* $tmp1608 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
*(&local3) = $tmp1607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
// line 545
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1609;
$tmp1609 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1609->value = param5;
frost$core$Int64 $tmp1610 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1611 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1610);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1612;
$tmp1612 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1612->value = $tmp1611;
ITable* $tmp1613 = ((frost$core$Equatable*) $tmp1609)->$class->itable;
while ($tmp1613->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1613 = $tmp1613->next;
}
$fn1615 $tmp1614 = $tmp1613->methods[1];
frost$core$Bit $tmp1616 = $tmp1614(((frost$core$Equatable*) $tmp1609), ((frost$core$Equatable*) $tmp1612));
bool $tmp1617 = $tmp1616.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1612)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1609)));
if ($tmp1617) goto block10; else goto block9;
block10:;
org$frostlang$frostc$Annotations** $tmp1618 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1619 = *$tmp1618;
frost$core$Bit $tmp1620 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1619);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block7; else goto block9;
block9:;
org$frostlang$frostc$Annotations* $tmp1622 = *(&local3);
frost$core$Bit $tmp1623 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1622);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block7; else goto block8;
block7:;
// line 546
org$frostlang$frostc$Annotations* $tmp1625 = *(&local3);
frost$core$Int64* $tmp1626 = &$tmp1625->flags;
frost$core$Int64 $tmp1627 = *$tmp1626;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1629 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1627, $tmp1628);
frost$core$Int64* $tmp1630 = &$tmp1625->flags;
*$tmp1630 = $tmp1629;
goto block8;
block8:;
// line 548
*(&local4) = ((frost$collections$Array*) NULL);
// line 549
frost$core$Bit $tmp1631 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block11; else goto block13;
block11:;
// line 550
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1633 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$collections$Array* $tmp1634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1634));
*(&local4) = $tmp1633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// line 551
frost$core$String** $tmp1635 = &param1->name;
frost$core$String* $tmp1636 = *$tmp1635;
frost$core$String* $tmp1637 = frost$core$String$get_asString$R$frost$core$String($tmp1636);
frost$core$String* $tmp1638 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1637, &$s1639);
frost$core$String* $tmp1640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1638, param6);
frost$core$String* $tmp1641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1640, &$s1642);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$String* $tmp1643 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local5) = $tmp1641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
// line 552
ITable* $tmp1644 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1644->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1644 = $tmp1644->next;
}
$fn1646 $tmp1645 = $tmp1644->methods[0];
frost$collections$Iterator* $tmp1647 = $tmp1645(((frost$collections$Iterable*) param7));
goto block14;
block14:;
ITable* $tmp1648 = $tmp1647->$class->itable;
while ($tmp1648->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1648 = $tmp1648->next;
}
$fn1650 $tmp1649 = $tmp1648->methods[0];
frost$core$Bit $tmp1651 = $tmp1649($tmp1647);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1653 = $tmp1647->$class->itable;
while ($tmp1653->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1653 = $tmp1653->next;
}
$fn1655 $tmp1654 = $tmp1653->methods[1];
frost$core$Object* $tmp1656 = $tmp1654($tmp1647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1656)));
org$frostlang$frostc$ASTNode* $tmp1657 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp1656);
// line 553
*(&local7) = ((frost$core$String*) NULL);
// line 554
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 555
org$frostlang$frostc$ASTNode* $tmp1658 = *(&local6);
frost$core$Int64* $tmp1659 = &$tmp1658->$rawValue;
frost$core$Int64 $tmp1660 = *$tmp1659;
frost$core$Int64 $tmp1661 = (frost$core$Int64) {22};
frost$core$Bit $tmp1662 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1660, $tmp1661);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp1664 = (org$frostlang$frostc$Position*) ($tmp1658->$data + 0);
org$frostlang$frostc$Position $tmp1665 = *$tmp1664;
frost$core$String** $tmp1666 = (frost$core$String**) ($tmp1658->$data + 16);
frost$core$String* $tmp1667 = *$tmp1666;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
frost$core$String* $tmp1668 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1668));
*(&local9) = $tmp1667;
// line 557
frost$core$String* $tmp1669 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
frost$core$String* $tmp1670 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local7) = $tmp1669;
// line 558
org$frostlang$frostc$Type* $tmp1671 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
org$frostlang$frostc$Type* $tmp1672 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local8) = $tmp1671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$String* $tmp1673 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp1674 = (frost$core$Int64) {48};
frost$core$Bit $tmp1675 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1660, $tmp1674);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp1677 = (org$frostlang$frostc$Position*) ($tmp1658->$data + 0);
org$frostlang$frostc$Position $tmp1678 = *$tmp1677;
frost$core$String** $tmp1679 = (frost$core$String**) ($tmp1658->$data + 16);
frost$core$String* $tmp1680 = *$tmp1679;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
frost$core$String* $tmp1681 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local10) = $tmp1680;
org$frostlang$frostc$ASTNode** $tmp1682 = (org$frostlang$frostc$ASTNode**) ($tmp1658->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1683 = *$tmp1682;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
org$frostlang$frostc$ASTNode* $tmp1684 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
*(&local11) = $tmp1683;
// line 561
frost$core$String* $tmp1685 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1685));
frost$core$String* $tmp1686 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local7) = $tmp1685;
// line 562
org$frostlang$frostc$ASTNode* $tmp1687 = *(&local11);
org$frostlang$frostc$Type* $tmp1688 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
org$frostlang$frostc$Type* $tmp1689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local8) = $tmp1688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
org$frostlang$frostc$ASTNode* $tmp1690 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1691 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block21:;
// line 565
frost$core$Int64 $tmp1692 = (frost$core$Int64) {565};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1693, $tmp1692);
abort(); // unreachable
block17:;
// line 568
frost$collections$Array* $tmp1694 = *(&local4);
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$MethodDecl$GenericParameter));
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp1695 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp1696 = *(&local6);
$fn1698 $tmp1697 = ($fn1698) $tmp1696->$class->vtable[2];
org$frostlang$frostc$Position $tmp1699 = $tmp1697($tmp1696);
frost$core$String* $tmp1700 = *(&local5);
frost$core$String* $tmp1701 = *(&local7);
org$frostlang$frostc$Type* $tmp1702 = *(&local8);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp1695, $tmp1699, $tmp1700, $tmp1701, $tmp1702);
frost$collections$Array$add$frost$collections$Array$T($tmp1694, ((frost$core$Object*) $tmp1695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
org$frostlang$frostc$Type* $tmp1703 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1704 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1656);
org$frostlang$frostc$ASTNode* $tmp1705 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$String* $tmp1706 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local5) = ((frost$core$String*) NULL);
goto block12;
block13:;
// line 1
// line 573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1707 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local4) = ((frost$collections$Array*) NULL);
goto block12;
block12:;
// line 575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1708 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1708);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
frost$collections$Array* $tmp1709 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local12) = $tmp1708;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
// line 576
ITable* $tmp1710 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1710->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1710 = $tmp1710->next;
}
$fn1712 $tmp1711 = $tmp1710->methods[0];
frost$collections$Iterator* $tmp1713 = $tmp1711(((frost$collections$Iterable*) param8));
goto block22;
block22:;
ITable* $tmp1714 = $tmp1713->$class->itable;
while ($tmp1714->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1714 = $tmp1714->next;
}
$fn1716 $tmp1715 = $tmp1714->methods[0];
frost$core$Bit $tmp1717 = $tmp1715($tmp1713);
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block24; else goto block23;
block23:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1719 = $tmp1713->$class->itable;
while ($tmp1719->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1719 = $tmp1719->next;
}
$fn1721 $tmp1720 = $tmp1719->methods[1];
frost$core$Object* $tmp1722 = $tmp1720($tmp1713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1722)));
org$frostlang$frostc$ASTNode* $tmp1723 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp1722);
// line 577
org$frostlang$frostc$ASTNode* $tmp1724 = *(&local13);
frost$core$Int64* $tmp1725 = &$tmp1724->$rawValue;
frost$core$Int64 $tmp1726 = *$tmp1725;
frost$core$Int64 $tmp1727 = (frost$core$Int64) {34};
frost$core$Bit $tmp1728 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1726, $tmp1727);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp1730 = (org$frostlang$frostc$Position*) ($tmp1724->$data + 0);
org$frostlang$frostc$Position $tmp1731 = *$tmp1730;
frost$core$String** $tmp1732 = (frost$core$String**) ($tmp1724->$data + 16);
frost$core$String* $tmp1733 = *$tmp1732;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
frost$core$String* $tmp1734 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local14) = $tmp1733;
org$frostlang$frostc$ASTNode** $tmp1735 = (org$frostlang$frostc$ASTNode**) ($tmp1724->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1736 = *$tmp1735;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
org$frostlang$frostc$ASTNode* $tmp1737 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local15) = $tmp1736;
// line 579
frost$collections$Array* $tmp1738 = *(&local12);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp1739 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1740 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp1741 = *(&local15);
org$frostlang$frostc$Type* $tmp1742 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1741);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1739, $tmp1740, $tmp1742);
frost$collections$Array$add$frost$collections$Array$T($tmp1738, ((frost$core$Object*) $tmp1739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
org$frostlang$frostc$ASTNode* $tmp1743 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1744 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local14) = ((frost$core$String*) NULL);
goto block25;
block27:;
// line 582
frost$core$Int64 $tmp1745 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1746, $tmp1745);
abort(); // unreachable
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1722);
org$frostlang$frostc$ASTNode* $tmp1747 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
// line 586
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
// line 587
frost$core$Bit $tmp1748 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block28; else goto block30;
block28:;
// line 588
org$frostlang$frostc$Type* $tmp1750 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
org$frostlang$frostc$Type* $tmp1751 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local16) = $tmp1750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
goto block29;
block30:;
// line 1
// line 591
org$frostlang$frostc$Type* $tmp1752 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
org$frostlang$frostc$Type* $tmp1753 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local16) = $tmp1752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
goto block29;
block29:;
// line 593
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1757)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1754)));
if ($tmp1762) goto block33; else goto block32;
block33:;
org$frostlang$frostc$Type* $tmp1763 = *(&local16);
org$frostlang$frostc$Type* $tmp1764 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1765 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1763, $tmp1764);
bool $tmp1766 = $tmp1765.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
if ($tmp1766) goto block31; else goto block32;
block31:;
// line 594
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1767);
goto block32;
block32:;
// line 596
frost$core$Bit $tmp1768 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block36; else goto block35;
block36:;
org$frostlang$frostc$Annotations* $tmp1770 = *(&local3);
frost$core$Bit $tmp1771 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1770, ((frost$collections$ListView*) param10));
bool $tmp1772 = $tmp1771.value;
if ($tmp1772) goto block34; else goto block35;
block34:;
// line 597
org$frostlang$frostc$Annotations* $tmp1773 = *(&local3);
frost$core$Int64* $tmp1774 = &$tmp1773->flags;
frost$core$Int64 $tmp1775 = *$tmp1774;
frost$core$Int64 $tmp1776 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1777 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1775, $tmp1776);
frost$core$Int64* $tmp1778 = &$tmp1773->flags;
*$tmp1778 = $tmp1777;
goto block35;
block35:;
// line 599
frost$core$Bit $tmp1779 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1780 = $tmp1779.value;
if ($tmp1780) goto block40; else goto block38;
block40:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1781 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1782 = *$tmp1781;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1783;
$tmp1783 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1783->value = $tmp1782;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp1785 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1784);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1786;
$tmp1786 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1786->value = $tmp1785;
ITable* $tmp1787 = ((frost$core$Equatable*) $tmp1783)->$class->itable;
while ($tmp1787->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1787 = $tmp1787->next;
}
$fn1789 $tmp1788 = $tmp1787->methods[0];
frost$core$Bit $tmp1790 = $tmp1788(((frost$core$Equatable*) $tmp1783), ((frost$core$Equatable*) $tmp1786));
bool $tmp1791 = $tmp1790.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1786)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1783)));
if ($tmp1791) goto block39; else goto block38;
block39:;
org$frostlang$frostc$Annotations** $tmp1792 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1793 = *$tmp1792;
frost$core$Bit $tmp1794 = org$frostlang$frostc$Annotations$get_isStub$R$frost$core$Bit($tmp1793);
frost$core$Bit $tmp1795 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1794);
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block37; else goto block38;
block37:;
// line 601
org$frostlang$frostc$Annotations* $tmp1797 = *(&local3);
frost$core$Int64* $tmp1798 = &$tmp1797->flags;
frost$core$Int64 $tmp1799 = *$tmp1798;
frost$core$Int64 $tmp1800 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1801 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1799, $tmp1800);
frost$core$Int64 $tmp1802 = (frost$core$Int64) {0};
int64_t $tmp1803 = $tmp1801.value;
int64_t $tmp1804 = $tmp1802.value;
bool $tmp1805 = $tmp1803 != $tmp1804;
frost$core$Bit $tmp1806 = (frost$core$Bit) {$tmp1805};
bool $tmp1807 = $tmp1806.value;
if ($tmp1807) goto block41; else goto block42;
block41:;
// line 602
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1808);
goto block42;
block42:;
// line 605
org$frostlang$frostc$Annotations* $tmp1809 = *(&local3);
frost$core$Int64* $tmp1810 = &$tmp1809->flags;
frost$core$Int64 $tmp1811 = *$tmp1810;
frost$core$Int64 $tmp1812 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1813 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1811, $tmp1812);
frost$core$Int64* $tmp1814 = &$tmp1809->flags;
*$tmp1814 = $tmp1813;
goto block38;
block38:;
// line 607
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp1815 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp1816 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1817 = *(&local3);
frost$collections$Array* $tmp1818 = *(&local4);
frost$collections$Array* $tmp1819 = *(&local12);
org$frostlang$frostc$Type* $tmp1820 = *(&local16);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1815, param1, param2, $tmp1816, $tmp1817, param5, param6, $tmp1818, $tmp1819, $tmp1820, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1815));
org$frostlang$frostc$Type* $tmp1821 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1822 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1823 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp1824 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1825 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1815;

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
// line 612
frost$core$Int64* $tmp1826 = &param2->$rawValue;
frost$core$Int64 $tmp1827 = *$tmp1826;
frost$core$Int64 $tmp1828 = (frost$core$Int64) {18};
frost$core$Bit $tmp1829 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1827, $tmp1828);
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1831 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1832 = *$tmp1831;
*(&local0) = $tmp1832;
org$frostlang$frostc$ASTNode** $tmp1833 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1834 = *$tmp1833;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
org$frostlang$frostc$ASTNode* $tmp1835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
*(&local1) = $tmp1834;
org$frostlang$frostc$FixedArray** $tmp1836 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1837 = *$tmp1836;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1837));
org$frostlang$frostc$FixedArray* $tmp1838 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
*(&local2) = $tmp1837;
org$frostlang$frostc$ASTNode** $tmp1839 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1840 = *$tmp1839;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
org$frostlang$frostc$ASTNode* $tmp1841 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
*(&local3) = $tmp1840;
// line 614
org$frostlang$frostc$Position $tmp1842 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1843 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1844 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1845 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp1842, $tmp1843, $tmp1844, $tmp1845);
org$frostlang$frostc$ASTNode* $tmp1846 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1848 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1849 = (frost$core$Int64) {29};
frost$core$Bit $tmp1850 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1827, $tmp1849);
bool $tmp1851 = $tmp1850.value;
if ($tmp1851) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1852 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1853 = *$tmp1852;
*(&local4) = $tmp1853;
org$frostlang$frostc$ASTNode** $tmp1854 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1855 = *$tmp1854;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
org$frostlang$frostc$ASTNode* $tmp1856 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local5) = $tmp1855;
org$frostlang$frostc$FixedArray** $tmp1857 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1858 = *$tmp1857;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
org$frostlang$frostc$FixedArray* $tmp1859 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
*(&local6) = $tmp1858;
org$frostlang$frostc$MethodDecl$Kind* $tmp1860 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1861 = *$tmp1860;
*(&local7) = $tmp1861;
frost$core$String** $tmp1862 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1863 = *$tmp1862;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1863));
frost$core$String* $tmp1864 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local8) = $tmp1863;
org$frostlang$frostc$FixedArray** $tmp1865 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1866 = *$tmp1865;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
org$frostlang$frostc$FixedArray* $tmp1867 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
*(&local9) = $tmp1866;
org$frostlang$frostc$FixedArray** $tmp1868 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1869 = *$tmp1868;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
org$frostlang$frostc$FixedArray* $tmp1870 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local10) = $tmp1869;
org$frostlang$frostc$ASTNode** $tmp1871 = (org$frostlang$frostc$ASTNode**) (param2->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1872 = *$tmp1871;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
org$frostlang$frostc$ASTNode* $tmp1873 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1873));
*(&local11) = $tmp1872;
org$frostlang$frostc$FixedArray** $tmp1874 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1875 = *$tmp1874;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
org$frostlang$frostc$FixedArray* $tmp1876 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1876));
*(&local12) = $tmp1875;
// line 618
org$frostlang$frostc$Position $tmp1877 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1878 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1879 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp1880 = *(&local7);
frost$core$String* $tmp1881 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1882 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1883 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp1884 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1885 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp1886 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp1877, $tmp1878, $tmp1879, $tmp1880, $tmp1881, $tmp1882, $tmp1883, $tmp1884, $tmp1885);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
org$frostlang$frostc$MethodDecl* $tmp1887 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
*(&local13) = $tmp1886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
// line 620
org$frostlang$frostc$MethodDecl* $tmp1888 = *(&local13);
frost$core$Bit $tmp1889 = frost$core$Bit$init$builtin_bit($tmp1888 != NULL);
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block6; else goto block7;
block6:;
// line 621
org$frostlang$frostc$SymbolTable** $tmp1891 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1892 = *$tmp1891;
org$frostlang$frostc$MethodDecl* $tmp1893 = *(&local13);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1892, ((org$frostlang$frostc$Symbol*) $tmp1893));
// line 622
frost$collections$Array** $tmp1894 = &param1->methods;
frost$collections$Array* $tmp1895 = *$tmp1894;
org$frostlang$frostc$MethodDecl* $tmp1896 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp1895, ((frost$core$Object*) $tmp1896));
goto block7;
block7:;
org$frostlang$frostc$MethodDecl* $tmp1897 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1898 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1899 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1900 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1900));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1901 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1902 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1903 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1904 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp1905 = (frost$core$Int64) {12};
frost$core$Bit $tmp1906 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1827, $tmp1905);
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1908 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1909 = *$tmp1908;
*(&local14) = $tmp1909;
org$frostlang$frostc$ASTNode** $tmp1910 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1911 = *$tmp1910;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local15) = $tmp1911;
org$frostlang$frostc$FixedArray** $tmp1913 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1914 = *$tmp1913;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
org$frostlang$frostc$FixedArray* $tmp1915 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local16) = $tmp1914;
org$frostlang$frostc$ClassDecl$Kind* $tmp1916 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp1917 = *$tmp1916;
*(&local17) = $tmp1917;
frost$core$String** $tmp1918 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1919 = *$tmp1918;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$String* $tmp1920 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local18) = $tmp1919;
org$frostlang$frostc$FixedArray** $tmp1921 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1922 = *$tmp1921;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
org$frostlang$frostc$FixedArray* $tmp1923 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
*(&local19) = $tmp1922;
org$frostlang$frostc$FixedArray** $tmp1924 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1925 = *$tmp1924;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
org$frostlang$frostc$FixedArray* $tmp1926 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
*(&local20) = $tmp1925;
org$frostlang$frostc$FixedArray** $tmp1927 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp1928 = *$tmp1927;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$FixedArray* $tmp1929 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local21) = $tmp1928;
// line 627
frost$io$File** $tmp1930 = &param1->source;
frost$io$File* $tmp1931 = *$tmp1930;
frost$collections$MapView** $tmp1932 = &param1->aliases;
frost$collections$MapView* $tmp1933 = *$tmp1932;
frost$core$String** $tmp1934 = &param1->name;
frost$core$String* $tmp1935 = *$tmp1934;
org$frostlang$frostc$Position $tmp1936 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp1937 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1938 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp1939 = *(&local17);
frost$core$String* $tmp1940 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp1941 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp1942 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp1943 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp1944 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1931, $tmp1933, $tmp1935, $tmp1936, $tmp1937, $tmp1938, $tmp1939, $tmp1940, $tmp1941, $tmp1942, $tmp1943);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
org$frostlang$frostc$ClassDecl* $tmp1945 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local22) = $tmp1944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
// line 629
org$frostlang$frostc$ClassDecl* $tmp1946 = *(&local22);
frost$core$Bit $tmp1947 = frost$core$Bit$init$builtin_bit($tmp1946 != NULL);
bool $tmp1948 = $tmp1947.value;
if ($tmp1948) goto block10; else goto block11;
block10:;
// line 630
org$frostlang$frostc$ClassDecl* $tmp1949 = *(&local22);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp1950 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp1950, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
frost$core$Weak** $tmp1951 = &$tmp1949->owner;
frost$core$Weak* $tmp1952 = *$tmp1951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
frost$core$Weak** $tmp1953 = &$tmp1949->owner;
*$tmp1953 = $tmp1950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1950));
// line 631
frost$collections$Array** $tmp1954 = &param1->classes;
frost$collections$Array* $tmp1955 = *$tmp1954;
org$frostlang$frostc$ClassDecl* $tmp1956 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp1955, ((frost$core$Object*) $tmp1956));
// line 632
org$frostlang$frostc$ClassDecl* $tmp1957 = *(&local22);
frost$core$String** $tmp1958 = &$tmp1957->name;
frost$core$String* $tmp1959 = *$tmp1958;
frost$core$String** $tmp1960 = &param1->name;
frost$core$String* $tmp1961 = *$tmp1960;
frost$core$String* $tmp1962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1961, &$s1963);
frost$core$Bit $tmp1964 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1959, $tmp1962);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {632};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1967, $tmp1966);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
// line 633
org$frostlang$frostc$SymbolTable** $tmp1968 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1969 = *$tmp1968;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp1970 = (org$frostlang$frostc$Alias*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp1971 = *(&local22);
frost$core$String** $tmp1972 = &$tmp1971->name;
frost$core$String* $tmp1973 = *$tmp1972;
frost$core$String** $tmp1974 = &param1->name;
frost$core$String* $tmp1975 = *$tmp1974;
frost$core$Int64 $tmp1976 = frost$core$String$get_length$R$frost$core$Int64($tmp1975);
frost$core$Int64 $tmp1977 = (frost$core$Int64) {1};
int64_t $tmp1978 = $tmp1976.value;
int64_t $tmp1979 = $tmp1977.value;
int64_t $tmp1980 = $tmp1978 + $tmp1979;
frost$core$Int64 $tmp1981 = (frost$core$Int64) {$tmp1980};
frost$core$Bit $tmp1982 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1983 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1981, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1982);
frost$core$String* $tmp1984 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1973, $tmp1983);
org$frostlang$frostc$ClassDecl* $tmp1985 = *(&local22);
org$frostlang$frostc$Type** $tmp1986 = &$tmp1985->type;
org$frostlang$frostc$Type* $tmp1987 = *$tmp1986;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp1970, $tmp1984, $tmp1987);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1969, ((org$frostlang$frostc$Symbol*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
// line 634
org$frostlang$frostc$ClassDecl* $tmp1988 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp1989 = &$tmp1988->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1990 = *$tmp1989;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp1991 = (org$frostlang$frostc$Alias*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
frost$core$String* $tmp1992 = org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
org$frostlang$frostc$Type** $tmp1993 = &param1->type;
org$frostlang$frostc$Type* $tmp1994 = *$tmp1993;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp1991, $tmp1992, $tmp1994);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1990, ((org$frostlang$frostc$Symbol*) $tmp1991));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp1995 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1996 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1997 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1998 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1999 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2000 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2001 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp2002 = (frost$core$Int64) {10};
frost$core$Bit $tmp2003 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1827, $tmp2002);
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2005 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2006 = *$tmp2005;
*(&local23) = $tmp2006;
org$frostlang$frostc$ASTNode** $tmp2007 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2008 = *$tmp2007;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
org$frostlang$frostc$ASTNode* $tmp2009 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local24) = $tmp2008;
frost$core$String** $tmp2010 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp2011 = *$tmp2010;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
frost$core$String* $tmp2012 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local25) = $tmp2011;
org$frostlang$frostc$FixedArray** $tmp2013 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2014 = *$tmp2013;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
org$frostlang$frostc$FixedArray* $tmp2015 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
*(&local26) = $tmp2014;
// line 638
org$frostlang$frostc$Position $tmp2016 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2017 = *(&local24);
frost$core$String* $tmp2018 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp2019 = *(&local26);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2016, $tmp2017, $tmp2018, $tmp2019);
org$frostlang$frostc$FixedArray* $tmp2020 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2021 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2022 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block15:;
// line 641
frost$core$Int64 $tmp2023 = (frost$core$Int64) {641};
frost$core$String* $tmp2024 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2025, ((frost$core$Object*) param2));
frost$core$String* $tmp2026 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2024, &$s2027);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2028, $tmp2023, $tmp2026);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
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
// line 648
*(&local0) = ((frost$core$String*) NULL);
// line 650
frost$core$Bit $tmp2029 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2030 = $tmp2029.value;
if ($tmp2030) goto block1; else goto block3;
block1:;
// line 651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2031 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 654
frost$core$Int64* $tmp2032 = &param3->$rawValue;
frost$core$Int64 $tmp2033 = *$tmp2032;
frost$core$Int64 $tmp2034 = (frost$core$Int64) {40};
frost$core$Bit $tmp2035 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2033, $tmp2034);
bool $tmp2036 = $tmp2035.value;
if ($tmp2036) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2037 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2038 = *$tmp2037;
*(&local1) = $tmp2038;
frost$core$String** $tmp2039 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp2040 = *$tmp2039;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
frost$core$String* $tmp2041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
*(&local2) = $tmp2040;
// line 656
frost$core$String* $tmp2042 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
frost$core$String* $tmp2043 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local0) = $tmp2042;
frost$core$String* $tmp2044 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 659
frost$core$Int64 $tmp2045 = (frost$core$Int64) {659};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2046, $tmp2045);
abort(); // unreachable
block4:;
goto block2;
block2:;
// line 663
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2047 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2047);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
frost$collections$Array* $tmp2048 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local3) = $tmp2047;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
// line 664
ITable* $tmp2049 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2049->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2049 = $tmp2049->next;
}
$fn2051 $tmp2050 = $tmp2049->methods[0];
frost$collections$Iterator* $tmp2052 = $tmp2050(((frost$collections$Iterable*) param5));
goto block7;
block7:;
ITable* $tmp2053 = $tmp2052->$class->itable;
while ($tmp2053->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2053 = $tmp2053->next;
}
$fn2055 $tmp2054 = $tmp2053->methods[0];
frost$core$Bit $tmp2056 = $tmp2054($tmp2052);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2058 = $tmp2052->$class->itable;
while ($tmp2058->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2058 = $tmp2058->next;
}
$fn2060 $tmp2059 = $tmp2058->methods[1];
frost$core$Object* $tmp2061 = $tmp2059($tmp2052);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2061)));
org$frostlang$frostc$ASTNode* $tmp2062 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2061);
// line 665
frost$collections$Array* $tmp2063 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2064 = *(&local4);
org$frostlang$frostc$Type* $tmp2065 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2064);
frost$collections$Array$add$frost$collections$Array$T($tmp2063, ((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q($tmp2061);
org$frostlang$frostc$ASTNode* $tmp2066 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
// line 667
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$ChoiceCase));
org$frostlang$frostc$ChoiceCase* $tmp2067 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2068 = *(&local0);
frost$collections$Array** $tmp2069 = &param1->choiceCases;
frost$collections$Array* $tmp2070 = *$tmp2069;
ITable* $tmp2071 = ((frost$collections$CollectionView*) $tmp2070)->$class->itable;
while ($tmp2071->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2071 = $tmp2071->next;
}
$fn2073 $tmp2072 = $tmp2071->methods[0];
frost$core$Int64 $tmp2074 = $tmp2072(((frost$collections$CollectionView*) $tmp2070));
frost$collections$Array* $tmp2075 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2067, param1, param2, param4, $tmp2068, $tmp2074, ((frost$collections$ListView*) $tmp2075));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
org$frostlang$frostc$ChoiceCase* $tmp2076 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local5) = $tmp2067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
// line 669
frost$collections$Array** $tmp2077 = &param1->choiceCases;
frost$collections$Array* $tmp2078 = *$tmp2077;
org$frostlang$frostc$ChoiceCase* $tmp2079 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2078, ((frost$core$Object*) $tmp2079));
// line 670
org$frostlang$frostc$SymbolTable** $tmp2080 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2081 = *$tmp2080;
org$frostlang$frostc$ChoiceCase* $tmp2082 = *(&local5);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2081, ((org$frostlang$frostc$Symbol*) $tmp2082));
org$frostlang$frostc$ChoiceCase* $tmp2083 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2084 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2085 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
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
// line 677
*(&local0) = ((frost$core$String*) NULL);
// line 678
ITable* $tmp2087 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2087->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2087 = $tmp2087->next;
}
$fn2089 $tmp2088 = $tmp2087->methods[1];
frost$core$Bit $tmp2090 = $tmp2088(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2086));
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block1; else goto block3;
block1:;
// line 679
frost$core$String* $tmp2092 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2092, &$s2094);
frost$core$String* $tmp2095 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2093, param8);
frost$core$String* $tmp2096 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2095, &$s2097);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$String* $tmp2098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local0) = $tmp2096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
goto block2;
block3:;
// line 1
// line 682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2099 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local0) = param8;
goto block2;
block2:;
// line 684
*(&local1) = ((frost$core$String*) NULL);
// line 686
frost$core$Bit $tmp2100 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block4; else goto block6;
block4:;
// line 687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2102 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 690
frost$core$Int64* $tmp2103 = &param5->$rawValue;
frost$core$Int64 $tmp2104 = *$tmp2103;
frost$core$Int64 $tmp2105 = (frost$core$Int64) {40};
frost$core$Bit $tmp2106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2104, $tmp2105);
bool $tmp2107 = $tmp2106.value;
if ($tmp2107) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2108 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2109 = *$tmp2108;
*(&local2) = $tmp2109;
frost$core$String** $tmp2110 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2111 = *$tmp2110;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$String* $tmp2112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
*(&local3) = $tmp2111;
// line 692
frost$core$String* $tmp2113 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$String* $tmp2114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
*(&local1) = $tmp2113;
frost$core$String* $tmp2115 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
*(&local3) = ((frost$core$String*) NULL);
goto block7;
block9:;
// line 695
frost$core$Int64 $tmp2116 = (frost$core$Int64) {695};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2117, $tmp2116);
abort(); // unreachable
block7:;
goto block5;
block5:;
// line 699
org$frostlang$frostc$Annotations* $tmp2118 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
org$frostlang$frostc$Annotations* $tmp2119 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local4) = $tmp2118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
// line 700
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2120 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2120);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
frost$collections$Array* $tmp2121 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
*(&local5) = $tmp2120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
// line 701
frost$core$Bit $tmp2122 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block10; else goto block11;
block10:;
// line 702
ITable* $tmp2124 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2124->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2124 = $tmp2124->next;
}
$fn2126 $tmp2125 = $tmp2124->methods[0];
frost$collections$Iterator* $tmp2127 = $tmp2125(((frost$collections$Iterable*) param9));
goto block12;
block12:;
ITable* $tmp2128 = $tmp2127->$class->itable;
while ($tmp2128->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2128 = $tmp2128->next;
}
$fn2130 $tmp2129 = $tmp2128->methods[0];
frost$core$Bit $tmp2131 = $tmp2129($tmp2127);
bool $tmp2132 = $tmp2131.value;
if ($tmp2132) goto block14; else goto block13;
block13:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2133 = $tmp2127->$class->itable;
while ($tmp2133->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2133 = $tmp2133->next;
}
$fn2135 $tmp2134 = $tmp2133->methods[1];
frost$core$Object* $tmp2136 = $tmp2134($tmp2127);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2136)));
org$frostlang$frostc$ASTNode* $tmp2137 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2136);
// line 703
*(&local7) = ((frost$core$String*) NULL);
// line 704
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 705
org$frostlang$frostc$ASTNode* $tmp2138 = *(&local6);
frost$core$Int64* $tmp2139 = &$tmp2138->$rawValue;
frost$core$Int64 $tmp2140 = *$tmp2139;
frost$core$Int64 $tmp2141 = (frost$core$Int64) {22};
frost$core$Bit $tmp2142 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2140, $tmp2141);
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp2144 = (org$frostlang$frostc$Position*) ($tmp2138->$data + 0);
org$frostlang$frostc$Position $tmp2145 = *$tmp2144;
frost$core$String** $tmp2146 = (frost$core$String**) ($tmp2138->$data + 16);
frost$core$String* $tmp2147 = *$tmp2146;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$core$String* $tmp2148 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2148));
*(&local9) = $tmp2147;
// line 707
frost$core$String* $tmp2149 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$String* $tmp2150 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local7) = $tmp2149;
// line 708
org$frostlang$frostc$Type* $tmp2151 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
org$frostlang$frostc$Type* $tmp2152 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
*(&local8) = $tmp2151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2151));
frost$core$String* $tmp2153 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local9) = ((frost$core$String*) NULL);
goto block15;
block17:;
frost$core$Int64 $tmp2154 = (frost$core$Int64) {48};
frost$core$Bit $tmp2155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2140, $tmp2154);
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2157 = (org$frostlang$frostc$Position*) ($tmp2138->$data + 0);
org$frostlang$frostc$Position $tmp2158 = *$tmp2157;
frost$core$String** $tmp2159 = (frost$core$String**) ($tmp2138->$data + 16);
frost$core$String* $tmp2160 = *$tmp2159;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$String* $tmp2161 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
*(&local10) = $tmp2160;
org$frostlang$frostc$ASTNode** $tmp2162 = (org$frostlang$frostc$ASTNode**) ($tmp2138->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2163 = *$tmp2162;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
org$frostlang$frostc$ASTNode* $tmp2164 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local11) = $tmp2163;
// line 711
frost$core$String* $tmp2165 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
frost$core$String* $tmp2166 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
*(&local7) = $tmp2165;
// line 712
org$frostlang$frostc$ASTNode* $tmp2167 = *(&local11);
org$frostlang$frostc$Type* $tmp2168 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
org$frostlang$frostc$Type* $tmp2169 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local8) = $tmp2168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
org$frostlang$frostc$ASTNode* $tmp2170 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2171 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local10) = ((frost$core$String*) NULL);
goto block15;
block19:;
// line 715
frost$core$Int64 $tmp2172 = (frost$core$Int64) {715};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2173, $tmp2172);
abort(); // unreachable
block15:;
// line 718
frost$collections$Array* $tmp2174 = *(&local5);
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$ClassDecl$GenericParameter));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2175 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2176 = *(&local6);
$fn2178 $tmp2177 = ($fn2178) $tmp2176->$class->vtable[2];
org$frostlang$frostc$Position $tmp2179 = $tmp2177($tmp2176);
frost$core$String* $tmp2180 = *(&local0);
frost$core$String* $tmp2181 = *(&local7);
org$frostlang$frostc$Type* $tmp2182 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2175, $tmp2179, $tmp2180, $tmp2181, $tmp2182);
frost$collections$Array$add$frost$collections$Array$T($tmp2174, ((frost$core$Object*) $tmp2175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
org$frostlang$frostc$Type* $tmp2183 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2184 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2136);
org$frostlang$frostc$ASTNode* $tmp2185 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
goto block11;
block11:;
// line 721
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2186 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2186);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
frost$collections$Array* $tmp2187 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
*(&local12) = $tmp2186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
// line 722
frost$core$Bit $tmp2188 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block20; else goto block21;
block20:;
// line 723
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2190;
$tmp2190 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2190->value = param7;
frost$core$Int64 $tmp2191 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2192 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2191);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2193;
$tmp2193 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2193->value = $tmp2192;
ITable* $tmp2194 = ((frost$core$Equatable*) $tmp2190)->$class->itable;
while ($tmp2194->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2194 = $tmp2194->next;
}
$fn2196 $tmp2195 = $tmp2194->methods[0];
frost$core$Bit $tmp2197 = $tmp2195(((frost$core$Equatable*) $tmp2190), ((frost$core$Equatable*) $tmp2193));
bool $tmp2198 = $tmp2197.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2190)));
if ($tmp2198) goto block22; else goto block23;
block22:;
// line 724
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2199);
goto block23;
block23:;
// line 726
ITable* $tmp2200 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2200->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2200 = $tmp2200->next;
}
$fn2202 $tmp2201 = $tmp2200->methods[0];
frost$collections$Iterator* $tmp2203 = $tmp2201(((frost$collections$Iterable*) param10));
goto block24;
block24:;
ITable* $tmp2204 = $tmp2203->$class->itable;
while ($tmp2204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2204 = $tmp2204->next;
}
$fn2206 $tmp2205 = $tmp2204->methods[0];
frost$core$Bit $tmp2207 = $tmp2205($tmp2203);
bool $tmp2208 = $tmp2207.value;
if ($tmp2208) goto block26; else goto block25;
block25:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2209 = $tmp2203->$class->itable;
while ($tmp2209->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2209 = $tmp2209->next;
}
$fn2211 $tmp2210 = $tmp2209->methods[1];
frost$core$Object* $tmp2212 = $tmp2210($tmp2203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2212)));
org$frostlang$frostc$ASTNode* $tmp2213 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp2212);
// line 727
frost$collections$Array* $tmp2214 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2215 = *(&local13);
org$frostlang$frostc$Type* $tmp2216 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2215);
frost$collections$Array$add$frost$collections$Array$T($tmp2214, ((frost$core$Object*) $tmp2216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$Frost$unref$frost$core$Object$Q($tmp2212);
org$frostlang$frostc$ASTNode* $tmp2217 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
goto block21;
block21:;
// line 730
FROST_ASSERT(200 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp2218 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(200, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2219 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2220 = *(&local4);
frost$core$String* $tmp2221 = *(&local0);
frost$collections$Array* $tmp2222 = *(&local12);
frost$collections$Array* $tmp2223 = *(&local5);
frost$core$Weak** $tmp2224 = &param0->compiler;
frost$core$Weak* $tmp2225 = *$tmp2224;
frost$core$Object* $tmp2226 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2225);
org$frostlang$frostc$SymbolTable** $tmp2227 = &((org$frostlang$frostc$Compiler*) $tmp2226)->root;
org$frostlang$frostc$SymbolTable* $tmp2228 = *$tmp2227;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2218, param1, param4, param2, $tmp2219, $tmp2220, param7, $tmp2221, ((frost$collections$ListView*) $tmp2222), $tmp2223, $tmp2228);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
org$frostlang$frostc$ClassDecl* $tmp2229 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
*(&local14) = $tmp2218;
frost$core$Frost$unref$frost$core$Object$Q($tmp2226);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// line 732
frost$core$Weak** $tmp2230 = &param0->compiler;
frost$core$Weak* $tmp2231 = *$tmp2230;
frost$core$Object* $tmp2232 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2231);
frost$collections$Stack** $tmp2233 = &((org$frostlang$frostc$Compiler*) $tmp2232)->currentClass;
frost$collections$Stack* $tmp2234 = *$tmp2233;
org$frostlang$frostc$ClassDecl* $tmp2235 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2234, ((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q($tmp2232);
// line 733
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2236;
$tmp2236 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2236->value = param7;
frost$core$Int64 $tmp2237 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2238 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2237);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2239;
$tmp2239 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2239->value = $tmp2238;
ITable* $tmp2240 = ((frost$core$Equatable*) $tmp2236)->$class->itable;
while ($tmp2240->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2240 = $tmp2240->next;
}
$fn2242 $tmp2241 = $tmp2240->methods[0];
frost$core$Bit $tmp2243 = $tmp2241(((frost$core$Equatable*) $tmp2236), ((frost$core$Equatable*) $tmp2239));
bool $tmp2244 = $tmp2243.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2239)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2236)));
if ($tmp2244) goto block27; else goto block28;
block27:;
// line 734
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp2245 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2246 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2247 = *(&local14);
org$frostlang$frostc$Position* $tmp2248 = &$tmp2247->position;
org$frostlang$frostc$Position $tmp2249 = *$tmp2248;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2250 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2251 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2250, $tmp2251);
frost$core$Int64 $tmp2252 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2253 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2252);
org$frostlang$frostc$Type* $tmp2254 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2245, $tmp2246, $tmp2249, ((frost$core$String*) NULL), $tmp2250, $tmp2253, &$s2255, $tmp2254, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
org$frostlang$frostc$FieldDecl* $tmp2256 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local15) = $tmp2245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
// line 737
org$frostlang$frostc$ClassDecl* $tmp2257 = *(&local14);
frost$collections$Array** $tmp2258 = &$tmp2257->fields;
frost$collections$Array* $tmp2259 = *$tmp2258;
org$frostlang$frostc$FieldDecl* $tmp2260 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2259, ((frost$core$Object*) $tmp2260));
// line 738
org$frostlang$frostc$ClassDecl* $tmp2261 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2262 = &$tmp2261->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2263 = *$tmp2262;
org$frostlang$frostc$FieldDecl* $tmp2264 = *(&local15);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2263, ((org$frostlang$frostc$Symbol*) $tmp2264));
// line 739
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp2265 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2266 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2267 = *(&local14);
org$frostlang$frostc$Position* $tmp2268 = &$tmp2267->position;
org$frostlang$frostc$Position $tmp2269 = *$tmp2268;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2270 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2271 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2270, $tmp2271);
frost$core$Int64 $tmp2272 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2273 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2272);
org$frostlang$frostc$Type* $tmp2274 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2265, $tmp2266, $tmp2269, ((frost$core$String*) NULL), $tmp2270, $tmp2273, &$s2275, $tmp2274, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
org$frostlang$frostc$FieldDecl* $tmp2276 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
*(&local16) = $tmp2265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// line 742
org$frostlang$frostc$ClassDecl* $tmp2277 = *(&local14);
frost$collections$Array** $tmp2278 = &$tmp2277->fields;
frost$collections$Array* $tmp2279 = *$tmp2278;
org$frostlang$frostc$FieldDecl* $tmp2280 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2279, ((frost$core$Object*) $tmp2280));
// line 743
org$frostlang$frostc$ClassDecl* $tmp2281 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2282 = &$tmp2281->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2283 = *$tmp2282;
org$frostlang$frostc$FieldDecl* $tmp2284 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2283, ((org$frostlang$frostc$Symbol*) $tmp2284));
org$frostlang$frostc$FieldDecl* $tmp2285 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2286 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block28;
block28:;
// line 745
ITable* $tmp2287 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2287->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2287 = $tmp2287->next;
}
$fn2289 $tmp2288 = $tmp2287->methods[0];
frost$collections$Iterator* $tmp2290 = $tmp2288(((frost$collections$Iterable*) param11));
goto block29;
block29:;
ITable* $tmp2291 = $tmp2290->$class->itable;
while ($tmp2291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2291 = $tmp2291->next;
}
$fn2293 $tmp2292 = $tmp2291->methods[0];
frost$core$Bit $tmp2294 = $tmp2292($tmp2290);
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block31; else goto block30;
block30:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2296 = $tmp2290->$class->itable;
while ($tmp2296->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2296 = $tmp2296->next;
}
$fn2298 $tmp2297 = $tmp2296->methods[1];
frost$core$Object* $tmp2299 = $tmp2297($tmp2290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2299)));
org$frostlang$frostc$ASTNode* $tmp2300 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2299);
// line 746
org$frostlang$frostc$ASTNode* $tmp2301 = *(&local17);
frost$core$Int64* $tmp2302 = &$tmp2301->$rawValue;
frost$core$Int64 $tmp2303 = *$tmp2302;
frost$core$Int64 $tmp2304 = (frost$core$Int64) {29};
frost$core$Bit $tmp2305 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2303, $tmp2304);
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp2307 = (org$frostlang$frostc$Position*) ($tmp2301->$data + 0);
org$frostlang$frostc$Position $tmp2308 = *$tmp2307;
*(&local18) = $tmp2308;
org$frostlang$frostc$ASTNode** $tmp2309 = (org$frostlang$frostc$ASTNode**) ($tmp2301->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2310 = *$tmp2309;
org$frostlang$frostc$FixedArray** $tmp2311 = (org$frostlang$frostc$FixedArray**) ($tmp2301->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2312 = *$tmp2311;
org$frostlang$frostc$MethodDecl$Kind* $tmp2313 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2301->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2314 = *$tmp2313;
*(&local19) = $tmp2314;
frost$core$String** $tmp2315 = (frost$core$String**) ($tmp2301->$data + 40);
frost$core$String* $tmp2316 = *$tmp2315;
org$frostlang$frostc$FixedArray** $tmp2317 = (org$frostlang$frostc$FixedArray**) ($tmp2301->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2318 = *$tmp2317;
org$frostlang$frostc$FixedArray** $tmp2319 = (org$frostlang$frostc$FixedArray**) ($tmp2301->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2320 = *$tmp2319;
org$frostlang$frostc$ASTNode** $tmp2321 = (org$frostlang$frostc$ASTNode**) ($tmp2301->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2322 = *$tmp2321;
org$frostlang$frostc$FixedArray** $tmp2323 = (org$frostlang$frostc$FixedArray**) ($tmp2301->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2324 = *$tmp2323;
// line 748
org$frostlang$frostc$MethodDecl$Kind $tmp2325 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2326;
$tmp2326 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2326->value = $tmp2325;
frost$core$Int64 $tmp2327 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2328 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2327);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2329;
$tmp2329 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2329->value = $tmp2328;
ITable* $tmp2330 = ((frost$core$Equatable*) $tmp2326)->$class->itable;
while ($tmp2330->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2330 = $tmp2330->next;
}
$fn2332 $tmp2331 = $tmp2330->methods[0];
frost$core$Bit $tmp2333 = $tmp2331(((frost$core$Equatable*) $tmp2326), ((frost$core$Equatable*) $tmp2329));
bool $tmp2334 = $tmp2333.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2329)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2326)));
if ($tmp2334) goto block35; else goto block36;
block35:;
// line 749
frost$core$Int64 $tmp2335 = param7.$rawValue;
frost$core$Int64 $tmp2336 = (frost$core$Int64) {0};
frost$core$Bit $tmp2337 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2335, $tmp2336);
bool $tmp2338 = $tmp2337.value;
if ($tmp2338) goto block38; else goto block39;
block38:;
goto block37;
block39:;
frost$core$Int64 $tmp2339 = (frost$core$Int64) {1};
frost$core$Bit $tmp2340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2335, $tmp2339);
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block40; else goto block41;
block40:;
// line 754
org$frostlang$frostc$Position $tmp2342 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2342, &$s2343);
goto block37;
block41:;
frost$core$Int64 $tmp2344 = (frost$core$Int64) {2};
frost$core$Bit $tmp2345 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2335, $tmp2344);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block42; else goto block37;
block42:;
// line 757
org$frostlang$frostc$Position $tmp2347 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2347, &$s2348);
goto block37;
block37:;
goto block36;
block36:;
goto block32;
block34:;
goto block32;
block32:;
// line 766
org$frostlang$frostc$ClassDecl* $tmp2349 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2350 = *(&local17);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp2349, $tmp2350);
frost$core$Frost$unref$frost$core$Object$Q($tmp2299);
org$frostlang$frostc$ASTNode* $tmp2351 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
// line 768
frost$core$Bit $tmp2352 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2352;
// line 769
frost$core$Bit $tmp2353 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2353;
// line 770
org$frostlang$frostc$ClassDecl* $tmp2354 = *(&local14);
frost$collections$Array** $tmp2355 = &$tmp2354->methods;
frost$collections$Array* $tmp2356 = *$tmp2355;
ITable* $tmp2357 = ((frost$collections$Iterable*) $tmp2356)->$class->itable;
while ($tmp2357->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2357 = $tmp2357->next;
}
$fn2359 $tmp2358 = $tmp2357->methods[0];
frost$collections$Iterator* $tmp2360 = $tmp2358(((frost$collections$Iterable*) $tmp2356));
goto block43;
block43:;
ITable* $tmp2361 = $tmp2360->$class->itable;
while ($tmp2361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2361 = $tmp2361->next;
}
$fn2363 $tmp2362 = $tmp2361->methods[0];
frost$core$Bit $tmp2364 = $tmp2362($tmp2360);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block45; else goto block44;
block44:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2366 = $tmp2360->$class->itable;
while ($tmp2366->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2366 = $tmp2366->next;
}
$fn2368 $tmp2367 = $tmp2366->methods[1];
frost$core$Object* $tmp2369 = $tmp2367($tmp2360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2369)));
org$frostlang$frostc$MethodDecl* $tmp2370 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp2369);
// line 771
org$frostlang$frostc$MethodDecl* $tmp2371 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind* $tmp2372 = &$tmp2371->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2373 = *$tmp2372;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2374;
$tmp2374 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2374->value = $tmp2373;
frost$core$Int64 $tmp2375 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2376 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2375);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2377;
$tmp2377 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2377->value = $tmp2376;
ITable* $tmp2378 = ((frost$core$Equatable*) $tmp2374)->$class->itable;
while ($tmp2378->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2378 = $tmp2378->next;
}
$fn2380 $tmp2379 = $tmp2378->methods[0];
frost$core$Bit $tmp2381 = $tmp2379(((frost$core$Equatable*) $tmp2374), ((frost$core$Equatable*) $tmp2377));
bool $tmp2382 = $tmp2381.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2377)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2374)));
if ($tmp2382) goto block46; else goto block47;
block46:;
// line 772
frost$core$Bit $tmp2383 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2383;
goto block47;
block47:;
// line 774
org$frostlang$frostc$MethodDecl* $tmp2384 = *(&local22);
frost$core$String** $tmp2385 = &((org$frostlang$frostc$Symbol*) $tmp2384)->name;
frost$core$String* $tmp2386 = *$tmp2385;
frost$core$Bit $tmp2387 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2386, &$s2388);
bool $tmp2389 = $tmp2387.value;
if ($tmp2389) goto block50; else goto block49;
block50:;
org$frostlang$frostc$MethodDecl* $tmp2390 = *(&local22);
frost$collections$Array** $tmp2391 = &$tmp2390->parameters;
frost$collections$Array* $tmp2392 = *$tmp2391;
ITable* $tmp2393 = ((frost$collections$CollectionView*) $tmp2392)->$class->itable;
while ($tmp2393->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2393 = $tmp2393->next;
}
$fn2395 $tmp2394 = $tmp2393->methods[0];
frost$core$Int64 $tmp2396 = $tmp2394(((frost$collections$CollectionView*) $tmp2392));
frost$core$Int64 $tmp2397 = (frost$core$Int64) {0};
frost$core$Bit $tmp2398 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2396, $tmp2397);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block48; else goto block49;
block48:;
// line 775
frost$core$Bit $tmp2400 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2400;
// line 776
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2401;
$tmp2401 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2401->value = param7;
frost$core$Int64 $tmp2402 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2403 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2402);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2404;
$tmp2404 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2404->value = $tmp2403;
ITable* $tmp2405 = ((frost$core$Equatable*) $tmp2401)->$class->itable;
while ($tmp2405->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2405 = $tmp2405->next;
}
$fn2407 $tmp2406 = $tmp2405->methods[0];
frost$core$Bit $tmp2408 = $tmp2406(((frost$core$Equatable*) $tmp2401), ((frost$core$Equatable*) $tmp2404));
bool $tmp2409 = $tmp2408.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2404)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2401)));
if ($tmp2409) goto block51; else goto block52;
block51:;
// line 777
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2410);
goto block52;
block52:;
goto block49;
block49:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2369);
org$frostlang$frostc$MethodDecl* $tmp2411 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block43;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
// line 781
frost$core$Bit $tmp2412 = *(&local20);
frost$core$Bit $tmp2413 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2412);
bool $tmp2414 = $tmp2413.value;
if ($tmp2414) goto block56; else goto block54;
block56:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2415;
$tmp2415 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2415->value = param7;
frost$core$Int64 $tmp2416 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2417 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2416);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2418;
$tmp2418 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2418->value = $tmp2417;
ITable* $tmp2419 = ((frost$core$Equatable*) $tmp2415)->$class->itable;
while ($tmp2419->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2419 = $tmp2419->next;
}
$fn2421 $tmp2420 = $tmp2419->methods[0];
frost$core$Bit $tmp2422 = $tmp2420(((frost$core$Equatable*) $tmp2415), ((frost$core$Equatable*) $tmp2418));
bool $tmp2423 = $tmp2422.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2418)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2415)));
if ($tmp2423) goto block55; else goto block54;
block55:;
org$frostlang$frostc$ClassDecl* $tmp2424 = *(&local14);
frost$core$String** $tmp2425 = &$tmp2424->name;
frost$core$String* $tmp2426 = *$tmp2425;
ITable* $tmp2428 = ((frost$core$Equatable*) $tmp2426)->$class->itable;
while ($tmp2428->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[1];
frost$core$Bit $tmp2431 = $tmp2429(((frost$core$Equatable*) $tmp2426), ((frost$core$Equatable*) &$s2427));
bool $tmp2432 = $tmp2431.value;
if ($tmp2432) goto block53; else goto block54;
block53:;
// line 782
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2433 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2434 = *(&local14);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2435 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2436 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2435, $tmp2436);
frost$core$Int64 $tmp2437 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2438 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2437);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2439 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2440 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2439, $tmp2440);
org$frostlang$frostc$Type* $tmp2441 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2442 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2442);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2433, $tmp2434, param4, ((frost$core$String*) NULL), $tmp2435, $tmp2438, &$s2443, ((frost$collections$Array*) NULL), $tmp2439, $tmp2441, $tmp2442);
*(&local23) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
org$frostlang$frostc$MethodDecl* $tmp2444 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local23) = $tmp2433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
// line 785
org$frostlang$frostc$ClassDecl* $tmp2445 = *(&local14);
frost$collections$Array** $tmp2446 = &$tmp2445->methods;
frost$collections$Array* $tmp2447 = *$tmp2446;
org$frostlang$frostc$MethodDecl* $tmp2448 = *(&local23);
frost$collections$Array$add$frost$collections$Array$T($tmp2447, ((frost$core$Object*) $tmp2448));
// line 786
org$frostlang$frostc$ClassDecl* $tmp2449 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2450 = &$tmp2449->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2451 = *$tmp2450;
org$frostlang$frostc$MethodDecl* $tmp2452 = *(&local23);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2451, ((org$frostlang$frostc$Symbol*) $tmp2452));
org$frostlang$frostc$MethodDecl* $tmp2453 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local23) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block54;
block54:;
// line 788
frost$core$Bit $tmp2454 = *(&local21);
frost$core$Bit $tmp2455 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2454);
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block60; else goto block58;
block60:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2457;
$tmp2457 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2457->value = param7;
frost$core$Int64 $tmp2458 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2459 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2458);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2460;
$tmp2460 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2460->value = $tmp2459;
ITable* $tmp2461 = ((frost$core$Equatable*) $tmp2457)->$class->itable;
while ($tmp2461->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2461 = $tmp2461->next;
}
$fn2463 $tmp2462 = $tmp2461->methods[0];
frost$core$Bit $tmp2464 = $tmp2462(((frost$core$Equatable*) $tmp2457), ((frost$core$Equatable*) $tmp2460));
bool $tmp2465 = $tmp2464.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2460)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2457)));
if ($tmp2465) goto block59; else goto block61;
block61:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2466;
$tmp2466 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2466->value = param7;
frost$core$Int64 $tmp2467 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2468 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2467);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2469;
$tmp2469 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2469->value = $tmp2468;
ITable* $tmp2470 = ((frost$core$Equatable*) $tmp2466)->$class->itable;
while ($tmp2470->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2470 = $tmp2470->next;
}
$fn2472 $tmp2471 = $tmp2470->methods[0];
frost$core$Bit $tmp2473 = $tmp2471(((frost$core$Equatable*) $tmp2466), ((frost$core$Equatable*) $tmp2469));
bool $tmp2474 = $tmp2473.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2469)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2466)));
if ($tmp2474) goto block59; else goto block58;
block59:;
org$frostlang$frostc$ClassDecl* $tmp2475 = *(&local14);
frost$core$String** $tmp2476 = &$tmp2475->name;
frost$core$String* $tmp2477 = *$tmp2476;
ITable* $tmp2479 = ((frost$core$Equatable*) $tmp2477)->$class->itable;
while ($tmp2479->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2479 = $tmp2479->next;
}
$fn2481 $tmp2480 = $tmp2479->methods[1];
frost$core$Bit $tmp2482 = $tmp2480(((frost$core$Equatable*) $tmp2477), ((frost$core$Equatable*) &$s2478));
bool $tmp2483 = $tmp2482.value;
if ($tmp2483) goto block57; else goto block58;
block57:;
// line 790
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2484 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2485 = *(&local14);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2486 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2487 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2488 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2489 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2487, $tmp2488);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2486, $tmp2489);
frost$core$Int64 $tmp2490 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2491 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2490);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2492 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2493 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2492, $tmp2493);
org$frostlang$frostc$Type* $tmp2494 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2495 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2495);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2484, $tmp2485, param4, ((frost$core$String*) NULL), $tmp2486, $tmp2491, &$s2496, ((frost$collections$Array*) NULL), $tmp2492, $tmp2494, $tmp2495);
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
org$frostlang$frostc$MethodDecl* $tmp2497 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local24) = $tmp2484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
// line 793
org$frostlang$frostc$ClassDecl* $tmp2498 = *(&local14);
frost$collections$Array** $tmp2499 = &$tmp2498->methods;
frost$collections$Array* $tmp2500 = *$tmp2499;
org$frostlang$frostc$MethodDecl* $tmp2501 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp2500, ((frost$core$Object*) $tmp2501));
// line 794
org$frostlang$frostc$ClassDecl* $tmp2502 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2503 = &$tmp2502->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2504 = *$tmp2503;
org$frostlang$frostc$MethodDecl* $tmp2505 = *(&local24);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2504, ((org$frostlang$frostc$Symbol*) $tmp2505));
org$frostlang$frostc$MethodDecl* $tmp2506 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block58;
block58:;
// line 796
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2507;
$tmp2507 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2507->value = param7;
frost$core$Int64 $tmp2508 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2509 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2508);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2510;
$tmp2510 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2510->value = $tmp2509;
ITable* $tmp2511 = ((frost$core$Equatable*) $tmp2507)->$class->itable;
while ($tmp2511->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2511 = $tmp2511->next;
}
$fn2513 $tmp2512 = $tmp2511->methods[0];
frost$core$Bit $tmp2514 = $tmp2512(((frost$core$Equatable*) $tmp2507), ((frost$core$Equatable*) $tmp2510));
bool $tmp2515 = $tmp2514.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2510)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2507)));
if ($tmp2515) goto block62; else goto block63;
block62:;
// line 797
frost$core$Bit $tmp2516 = frost$core$Bit$init$builtin_bit(false);
*(&local25) = $tmp2516;
// line 798
org$frostlang$frostc$ClassDecl* $tmp2517 = *(&local14);
frost$collections$Array** $tmp2518 = &$tmp2517->choiceCases;
frost$collections$Array* $tmp2519 = *$tmp2518;
ITable* $tmp2520 = ((frost$collections$CollectionView*) $tmp2519)->$class->itable;
while ($tmp2520->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2520 = $tmp2520->next;
}
$fn2522 $tmp2521 = $tmp2520->methods[0];
frost$core$Int64 $tmp2523 = $tmp2521(((frost$collections$CollectionView*) $tmp2519));
frost$core$Int64 $tmp2524 = (frost$core$Int64) {0};
int64_t $tmp2525 = $tmp2523.value;
int64_t $tmp2526 = $tmp2524.value;
bool $tmp2527 = $tmp2525 > $tmp2526;
frost$core$Bit $tmp2528 = (frost$core$Bit) {$tmp2527};
bool $tmp2529 = $tmp2528.value;
if ($tmp2529) goto block64; else goto block66;
block64:;
// line 799
org$frostlang$frostc$ClassDecl* $tmp2530 = *(&local14);
frost$collections$Array** $tmp2531 = &$tmp2530->choiceCases;
frost$collections$Array* $tmp2532 = *$tmp2531;
ITable* $tmp2533 = ((frost$collections$Iterable*) $tmp2532)->$class->itable;
while ($tmp2533->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2533 = $tmp2533->next;
}
$fn2535 $tmp2534 = $tmp2533->methods[0];
frost$collections$Iterator* $tmp2536 = $tmp2534(((frost$collections$Iterable*) $tmp2532));
goto block67;
block67:;
ITable* $tmp2537 = $tmp2536->$class->itable;
while ($tmp2537->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2537 = $tmp2537->next;
}
$fn2539 $tmp2538 = $tmp2537->methods[0];
frost$core$Bit $tmp2540 = $tmp2538($tmp2536);
bool $tmp2541 = $tmp2540.value;
if ($tmp2541) goto block69; else goto block68;
block68:;
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp2542 = $tmp2536->$class->itable;
while ($tmp2542->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2542 = $tmp2542->next;
}
$fn2544 $tmp2543 = $tmp2542->methods[1];
frost$core$Object* $tmp2545 = $tmp2543($tmp2536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp2545)));
org$frostlang$frostc$ChoiceCase* $tmp2546 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) $tmp2545);
// line 800
org$frostlang$frostc$ChoiceCase* $tmp2547 = *(&local26);
frost$collections$Array** $tmp2548 = &$tmp2547->fields;
frost$collections$Array* $tmp2549 = *$tmp2548;
ITable* $tmp2550 = ((frost$collections$CollectionView*) $tmp2549)->$class->itable;
while ($tmp2550->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2550 = $tmp2550->next;
}
$fn2552 $tmp2551 = $tmp2550->methods[0];
frost$core$Int64 $tmp2553 = $tmp2551(((frost$collections$CollectionView*) $tmp2549));
frost$core$Int64 $tmp2554 = (frost$core$Int64) {0};
int64_t $tmp2555 = $tmp2553.value;
int64_t $tmp2556 = $tmp2554.value;
bool $tmp2557 = $tmp2555 > $tmp2556;
frost$core$Bit $tmp2558 = (frost$core$Bit) {$tmp2557};
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block70; else goto block71;
block70:;
// line 801
frost$core$Bit $tmp2560 = frost$core$Bit$init$builtin_bit(true);
*(&local25) = $tmp2560;
// line 802
frost$core$Frost$unref$frost$core$Object$Q($tmp2545);
org$frostlang$frostc$ChoiceCase* $tmp2561 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block69;
block71:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2545);
org$frostlang$frostc$ChoiceCase* $tmp2562 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local26) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block67;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
goto block65;
block66:;
// line 1
// line 807
org$frostlang$frostc$ClassDecl* $tmp2563 = *(&local14);
org$frostlang$frostc$Position* $tmp2564 = &$tmp2563->position;
org$frostlang$frostc$Position $tmp2565 = *$tmp2564;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2565, &$s2566);
// line 808
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2567 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2568 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2569 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2570 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2572 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block65:;
// line 810
frost$core$Bit $tmp2573 = *(&local25);
frost$core$Bit $tmp2574 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2573);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block72; else goto block73;
block72:;
// line 811
org$frostlang$frostc$ClassDecl* $tmp2576 = *(&local14);
org$frostlang$frostc$Type* $tmp2577 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
org$frostlang$frostc$Type** $tmp2578 = &$tmp2576->rawSuper;
org$frostlang$frostc$Type* $tmp2579 = *$tmp2578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
org$frostlang$frostc$Type** $tmp2580 = &$tmp2576->rawSuper;
*$tmp2580 = $tmp2577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
goto block73;
block73:;
goto block63;
block63:;
// line 814
frost$core$Weak** $tmp2581 = &param0->compiler;
frost$core$Weak* $tmp2582 = *$tmp2581;
frost$core$Object* $tmp2583 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2582);
frost$collections$Stack** $tmp2584 = &((org$frostlang$frostc$Compiler*) $tmp2583)->currentClass;
frost$collections$Stack* $tmp2585 = *$tmp2584;
frost$core$Object* $tmp2586 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2585);
frost$core$Frost$unref$frost$core$Object$Q($tmp2586);
frost$core$Frost$unref$frost$core$Object$Q($tmp2583);
// line 815
org$frostlang$frostc$ClassDecl* $tmp2587 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
org$frostlang$frostc$ClassDecl* $tmp2588 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2589 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2590 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2591 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2592 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2593 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2587;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 819
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 820
frost$collections$Array** $tmp2594 = &param1->classes;
frost$collections$Array* $tmp2595 = *$tmp2594;
ITable* $tmp2596 = ((frost$collections$Iterable*) $tmp2595)->$class->itable;
while ($tmp2596->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2596 = $tmp2596->next;
}
$fn2598 $tmp2597 = $tmp2596->methods[0];
frost$collections$Iterator* $tmp2599 = $tmp2597(((frost$collections$Iterable*) $tmp2595));
goto block1;
block1:;
ITable* $tmp2600 = $tmp2599->$class->itable;
while ($tmp2600->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2600 = $tmp2600->next;
}
$fn2602 $tmp2601 = $tmp2600->methods[0];
frost$core$Bit $tmp2603 = $tmp2601($tmp2599);
bool $tmp2604 = $tmp2603.value;
if ($tmp2604) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp2605 = $tmp2599->$class->itable;
while ($tmp2605->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2605 = $tmp2605->next;
}
$fn2607 $tmp2606 = $tmp2605->methods[1];
frost$core$Object* $tmp2608 = $tmp2606($tmp2599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2608)));
org$frostlang$frostc$ClassDecl* $tmp2609 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2608);
// line 821
org$frostlang$frostc$ClassDecl* $tmp2610 = *(&local0);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2610, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2608);
org$frostlang$frostc$ClassDecl* $tmp2611 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 827
org$frostlang$frostc$ClassDecl** $tmp2612 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2613 = *$tmp2612;
frost$core$Bit $tmp2614 = frost$core$Bit$init$builtin_bit($tmp2613 == NULL);
bool $tmp2615 = $tmp2614.value;
if ($tmp2615) goto block1; else goto block2;
block1:;
// line 828
*(&local0) = ((frost$core$String*) NULL);
// line 829
ITable* $tmp2617 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2617->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2617 = $tmp2617->next;
}
$fn2619 $tmp2618 = $tmp2617->methods[1];
frost$core$Bit $tmp2620 = $tmp2618(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2616));
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block3; else goto block5;
block3:;
// line 830
frost$core$String* $tmp2622 = frost$core$String$get_asString$R$frost$core$String(param3);
frost$core$String* $tmp2623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2622, &$s2624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$String* $tmp2625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local0) = $tmp2623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
goto block4;
block5:;
// line 1
// line 833
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2626));
frost$core$String* $tmp2627 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local0) = &$s2628;
goto block4;
block4:;
// line 835
FROST_ASSERT(200 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp2629 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(200, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp2630 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2631 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp2631);
frost$core$Int64 $tmp2632 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2633 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2632);
frost$core$String* $tmp2634 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2635 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2635);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2636 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2636);
frost$core$Weak** $tmp2637 = &param0->compiler;
frost$core$Weak* $tmp2638 = *$tmp2637;
frost$core$Object* $tmp2639 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2638);
org$frostlang$frostc$SymbolTable** $tmp2640 = &((org$frostlang$frostc$Compiler*) $tmp2639)->root;
org$frostlang$frostc$SymbolTable* $tmp2641 = *$tmp2640;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2629, param1, $tmp2630, param2, ((frost$core$String*) NULL), $tmp2631, $tmp2633, $tmp2634, ((frost$collections$ListView*) $tmp2635), $tmp2636, $tmp2641);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
org$frostlang$frostc$ClassDecl** $tmp2642 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2643 = *$tmp2642;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
org$frostlang$frostc$ClassDecl** $tmp2644 = &param0->bareCodeClass;
*$tmp2644 = $tmp2629;
frost$core$Frost$unref$frost$core$Object$Q($tmp2639);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// line 838
org$frostlang$frostc$ClassDecl** $tmp2645 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2646 = *$tmp2645;
ITable* $tmp2647 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2647->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2647 = $tmp2647->next;
}
$fn2649 $tmp2648 = $tmp2647->methods[0];
$tmp2648(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2646));
// line 839
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2650 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2651 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2652 = *$tmp2651;
org$frostlang$frostc$Position $tmp2653 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2654 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2655 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2654, $tmp2655);
frost$core$Int64 $tmp2656 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2657 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2656);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2658 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2659 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2658, $tmp2659);
org$frostlang$frostc$Type* $tmp2660 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2661 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2661);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2650, $tmp2652, $tmp2653, ((frost$core$String*) NULL), $tmp2654, $tmp2657, &$s2662, ((frost$collections$Array*) NULL), $tmp2658, $tmp2660, $tmp2661);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
org$frostlang$frostc$MethodDecl* $tmp2663 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
*(&local1) = $tmp2650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// line 842
org$frostlang$frostc$ClassDecl** $tmp2664 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2665 = *$tmp2664;
frost$collections$Array** $tmp2666 = &$tmp2665->methods;
frost$collections$Array* $tmp2667 = *$tmp2666;
org$frostlang$frostc$MethodDecl* $tmp2668 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2667, ((frost$core$Object*) $tmp2668));
// line 843
org$frostlang$frostc$ClassDecl** $tmp2669 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2670 = *$tmp2669;
org$frostlang$frostc$SymbolTable** $tmp2671 = &$tmp2670->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2672 = *$tmp2671;
org$frostlang$frostc$MethodDecl* $tmp2673 = *(&local1);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2672, ((org$frostlang$frostc$Symbol*) $tmp2673));
// line 844
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2674 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2675 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2676 = *$tmp2675;
org$frostlang$frostc$Position $tmp2677 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2678 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2679 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2680 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2681 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2679, $tmp2680);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2678, $tmp2681);
frost$core$Int64 $tmp2682 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2683 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2682);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2684 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2685 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2684, $tmp2685);
org$frostlang$frostc$Type* $tmp2686 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2687 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2687);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2674, $tmp2676, $tmp2677, ((frost$core$String*) NULL), $tmp2678, $tmp2683, &$s2688, ((frost$collections$Array*) NULL), $tmp2684, $tmp2686, $tmp2687);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
org$frostlang$frostc$MethodDecl* $tmp2689 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local2) = $tmp2674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
// line 847
org$frostlang$frostc$ClassDecl** $tmp2690 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2691 = *$tmp2690;
frost$collections$Array** $tmp2692 = &$tmp2691->methods;
frost$collections$Array* $tmp2693 = *$tmp2692;
org$frostlang$frostc$MethodDecl* $tmp2694 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2693, ((frost$core$Object*) $tmp2694));
// line 848
org$frostlang$frostc$ClassDecl** $tmp2695 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2696 = *$tmp2695;
org$frostlang$frostc$SymbolTable** $tmp2697 = &$tmp2696->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2698 = *$tmp2697;
org$frostlang$frostc$MethodDecl* $tmp2699 = *(&local2);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2698, ((org$frostlang$frostc$Symbol*) $tmp2699));
org$frostlang$frostc$MethodDecl* $tmp2700 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2701 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2702 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2703 = &param0->source;
frost$io$File* $tmp2704 = *$tmp2703;
frost$core$Bit $tmp2705 = frost$core$Bit$init$builtin_bit($tmp2704 != NULL);
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2707 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2708, $tmp2707, &$s2709);
abort(); // unreachable
block1:;
// line 854
frost$core$Weak** $tmp2710 = &param0->compiler;
frost$core$Weak* $tmp2711 = *$tmp2710;
frost$core$Object* $tmp2712 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2711);
frost$io$File** $tmp2713 = &param0->source;
frost$io$File* $tmp2714 = *$tmp2713;
org$frostlang$frostc$Compiler$error$frost$io$File$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2712), $tmp2714, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2712);
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
// line 858
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2715 = &param0->source;
frost$io$File* $tmp2716 = *$tmp2715;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$io$File** $tmp2717 = &param0->source;
*$tmp2717 = param1;
// line 859
frost$core$Int64* $tmp2718 = &param2->$rawValue;
frost$core$Int64 $tmp2719 = *$tmp2718;
frost$core$Int64 $tmp2720 = (frost$core$Int64) {19};
frost$core$Bit $tmp2721 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2719, $tmp2720);
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp2723 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2724 = *$tmp2723;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
org$frostlang$frostc$FixedArray* $tmp2725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local0) = $tmp2724;
// line 861
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2726 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2726);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
frost$collections$Array* $tmp2727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local1) = $tmp2726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// line 862
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2728));
frost$core$String* $tmp2729 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
*(&local2) = &$s2730;
// line 863
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp2731 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2731);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$collections$HashMap* $tmp2732 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
*(&local3) = $tmp2731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
// line 864
org$frostlang$frostc$FixedArray* $tmp2733 = *(&local0);
ITable* $tmp2734 = ((frost$collections$Iterable*) $tmp2733)->$class->itable;
while ($tmp2734->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2734 = $tmp2734->next;
}
$fn2736 $tmp2735 = $tmp2734->methods[0];
frost$collections$Iterator* $tmp2737 = $tmp2735(((frost$collections$Iterable*) $tmp2733));
goto block3;
block3:;
ITable* $tmp2738 = $tmp2737->$class->itable;
while ($tmp2738->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2738 = $tmp2738->next;
}
$fn2740 $tmp2739 = $tmp2738->methods[0];
frost$core$Bit $tmp2741 = $tmp2739($tmp2737);
bool $tmp2742 = $tmp2741.value;
if ($tmp2742) goto block5; else goto block4;
block4:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2743 = $tmp2737->$class->itable;
while ($tmp2743->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2743 = $tmp2743->next;
}
$fn2745 $tmp2744 = $tmp2743->methods[1];
frost$core$Object* $tmp2746 = $tmp2744($tmp2737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2746)));
org$frostlang$frostc$ASTNode* $tmp2747 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2746);
// line 865
org$frostlang$frostc$ASTNode* $tmp2748 = *(&local4);
frost$core$Int64* $tmp2749 = &$tmp2748->$rawValue;
frost$core$Int64 $tmp2750 = *$tmp2749;
frost$core$Int64 $tmp2751 = (frost$core$Int64) {33};
frost$core$Bit $tmp2752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp2751);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2754 = (org$frostlang$frostc$Position*) ($tmp2748->$data + 0);
org$frostlang$frostc$Position $tmp2755 = *$tmp2754;
frost$core$String** $tmp2756 = (frost$core$String**) ($tmp2748->$data + 16);
frost$core$String* $tmp2757 = *$tmp2756;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
frost$core$String* $tmp2758 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local5) = $tmp2757;
// line 867
frost$core$String* $tmp2759 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
frost$core$String* $tmp2760 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local2) = $tmp2759;
frost$core$String* $tmp2761 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local5) = ((frost$core$String*) NULL);
goto block6;
block8:;
frost$core$Int64 $tmp2762 = (frost$core$Int64) {52};
frost$core$Bit $tmp2763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp2762);
bool $tmp2764 = $tmp2763.value;
if ($tmp2764) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2765 = (org$frostlang$frostc$Position*) ($tmp2748->$data + 0);
org$frostlang$frostc$Position $tmp2766 = *$tmp2765;
frost$core$String** $tmp2767 = (frost$core$String**) ($tmp2748->$data + 16);
frost$core$String* $tmp2768 = *$tmp2767;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
frost$core$String* $tmp2769 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
*(&local6) = $tmp2768;
// line 870
frost$core$String* $tmp2770 = *(&local6);
frost$core$String$Index$nullable $tmp2771 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp2770, &$s2772);
*(&local7) = $tmp2771;
// line 871
*(&local8) = ((frost$core$String*) NULL);
// line 872
frost$core$String$Index$nullable $tmp2773 = *(&local7);
frost$core$Bit $tmp2774 = frost$core$Bit$init$builtin_bit($tmp2773.nonnull);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block11; else goto block13;
block11:;
// line 873
frost$core$String* $tmp2776 = *(&local6);
frost$core$String* $tmp2777 = *(&local6);
frost$core$String$Index$nullable $tmp2778 = *(&local7);
frost$core$String$Index $tmp2779 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2777, ((frost$core$String$Index) $tmp2778.value));
frost$core$Bit $tmp2780 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2781 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2779, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2780);
frost$core$String* $tmp2782 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2776, $tmp2781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$String* $tmp2783 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local8) = $tmp2782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
goto block12;
block13:;
// line 1
// line 876
frost$core$String* $tmp2784 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$String* $tmp2785 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
*(&local8) = $tmp2784;
goto block12;
block12:;
// line 878
frost$collections$HashMap* $tmp2786 = *(&local3);
frost$core$String* $tmp2787 = *(&local8);
frost$core$String* $tmp2788 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2786, ((frost$collections$Key*) $tmp2787), ((frost$core$Object*) $tmp2788));
frost$core$String* $tmp2789 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp2790 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
*(&local6) = ((frost$core$String*) NULL);
goto block6;
block10:;
frost$core$Int64 $tmp2791 = (frost$core$Int64) {12};
frost$core$Bit $tmp2792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp2791);
bool $tmp2793 = $tmp2792.value;
if ($tmp2793) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp2794 = (org$frostlang$frostc$Position*) ($tmp2748->$data + 0);
org$frostlang$frostc$Position $tmp2795 = *$tmp2794;
*(&local9) = $tmp2795;
org$frostlang$frostc$ASTNode** $tmp2796 = (org$frostlang$frostc$ASTNode**) ($tmp2748->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2797 = *$tmp2796;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
org$frostlang$frostc$ASTNode* $tmp2798 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
*(&local10) = $tmp2797;
org$frostlang$frostc$FixedArray** $tmp2799 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2800 = *$tmp2799;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
org$frostlang$frostc$FixedArray* $tmp2801 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2801));
*(&local11) = $tmp2800;
org$frostlang$frostc$ClassDecl$Kind* $tmp2802 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp2748->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp2803 = *$tmp2802;
*(&local12) = $tmp2803;
frost$core$String** $tmp2804 = (frost$core$String**) ($tmp2748->$data + 40);
frost$core$String* $tmp2805 = *$tmp2804;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
frost$core$String* $tmp2806 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local13) = $tmp2805;
org$frostlang$frostc$FixedArray** $tmp2807 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2808 = *$tmp2807;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$FixedArray* $tmp2809 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local14) = $tmp2808;
org$frostlang$frostc$FixedArray** $tmp2810 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2811 = *$tmp2810;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$FixedArray* $tmp2812 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local15) = $tmp2811;
org$frostlang$frostc$FixedArray** $tmp2813 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2814 = *$tmp2813;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
org$frostlang$frostc$FixedArray* $tmp2815 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
*(&local16) = $tmp2814;
// line 882
frost$collections$HashMap* $tmp2816 = *(&local3);
frost$core$String* $tmp2817 = *(&local2);
org$frostlang$frostc$Position $tmp2818 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp2819 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp2820 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp2821 = *(&local12);
frost$core$String* $tmp2822 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp2823 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp2824 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2825 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp2826 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp2816), $tmp2817, $tmp2818, $tmp2819, $tmp2820, $tmp2821, $tmp2822, $tmp2823, $tmp2824, $tmp2825);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
org$frostlang$frostc$ClassDecl* $tmp2827 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local17) = $tmp2826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
// line 884
org$frostlang$frostc$ClassDecl* $tmp2828 = *(&local17);
frost$core$Bit $tmp2829 = frost$core$Bit$init$builtin_bit($tmp2828 != NULL);
bool $tmp2830 = $tmp2829.value;
if ($tmp2830) goto block16; else goto block17;
block16:;
// line 885
org$frostlang$frostc$ClassDecl* $tmp2831 = *(&local17);
frost$collections$Array* $tmp2832 = *(&local1);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2831, $tmp2832);
goto block17;
block17:;
org$frostlang$frostc$ClassDecl* $tmp2833 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2834 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2835 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2836 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2837 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2837));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2838 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2839 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block15:;
frost$core$Int64 $tmp2840 = (frost$core$Int64) {29};
frost$core$Bit $tmp2841 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp2840);
bool $tmp2842 = $tmp2841.value;
if ($tmp2842) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2843 = (org$frostlang$frostc$Position*) ($tmp2748->$data + 0);
org$frostlang$frostc$Position $tmp2844 = *$tmp2843;
*(&local18) = $tmp2844;
org$frostlang$frostc$ASTNode** $tmp2845 = (org$frostlang$frostc$ASTNode**) ($tmp2748->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2846 = *$tmp2845;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2846));
org$frostlang$frostc$ASTNode* $tmp2847 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
*(&local19) = $tmp2846;
org$frostlang$frostc$FixedArray** $tmp2848 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2849 = *$tmp2848;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
org$frostlang$frostc$FixedArray* $tmp2850 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local20) = $tmp2849;
org$frostlang$frostc$MethodDecl$Kind* $tmp2851 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2748->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2852 = *$tmp2851;
*(&local21) = $tmp2852;
frost$core$String** $tmp2853 = (frost$core$String**) ($tmp2748->$data + 40);
frost$core$String* $tmp2854 = *$tmp2853;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
frost$core$String* $tmp2855 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local22) = $tmp2854;
org$frostlang$frostc$FixedArray** $tmp2856 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2857 = *$tmp2856;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
org$frostlang$frostc$FixedArray* $tmp2858 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local23) = $tmp2857;
org$frostlang$frostc$FixedArray** $tmp2859 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2860 = *$tmp2859;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
org$frostlang$frostc$FixedArray* $tmp2861 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
*(&local24) = $tmp2860;
org$frostlang$frostc$ASTNode** $tmp2862 = (org$frostlang$frostc$ASTNode**) ($tmp2748->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2863 = *$tmp2862;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
org$frostlang$frostc$ASTNode* $tmp2864 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local25) = $tmp2863;
org$frostlang$frostc$FixedArray** $tmp2865 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2866 = *$tmp2865;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
org$frostlang$frostc$FixedArray* $tmp2867 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local26) = $tmp2866;
// line 890
org$frostlang$frostc$MethodDecl$Kind $tmp2868 = *(&local21);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2869;
$tmp2869 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2869->value = $tmp2868;
frost$core$Int64 $tmp2870 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2871 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2870);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2872;
$tmp2872 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2872->value = $tmp2871;
ITable* $tmp2873 = ((frost$core$Equatable*) $tmp2869)->$class->itable;
while ($tmp2873->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2873 = $tmp2873->next;
}
$fn2875 $tmp2874 = $tmp2873->methods[0];
frost$core$Bit $tmp2876 = $tmp2874(((frost$core$Equatable*) $tmp2869), ((frost$core$Equatable*) $tmp2872));
bool $tmp2877 = $tmp2876.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2872)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2869)));
if ($tmp2877) goto block20; else goto block21;
block20:;
// line 891
org$frostlang$frostc$Position $tmp2878 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2878, &$s2879);
// line 892
org$frostlang$frostc$FixedArray* $tmp2880 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2881 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2882 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2883 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2884 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2885 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2886 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2746);
org$frostlang$frostc$ASTNode* $tmp2887 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block21:;
// line 894
frost$collections$HashMap* $tmp2888 = *(&local3);
frost$core$String* $tmp2889 = *(&local2);
frost$collections$Array* $tmp2890 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp2888), $tmp2889, ((frost$collections$List*) $tmp2890));
// line 895
*(&local27) = ((frost$core$String*) NULL);
// line 896
frost$core$String* $tmp2891 = *(&local22);
frost$core$Bit $tmp2892 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2891, &$s2893);
bool $tmp2894 = $tmp2892.value;
if ($tmp2894) goto block22; else goto block24;
block22:;
// line 897
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2895));
frost$core$String* $tmp2896 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
*(&local27) = &$s2897;
// line 898
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2898 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2898);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
frost$collections$Array* $tmp2899 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local28) = $tmp2898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
// line 899
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2900 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2900);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
frost$collections$Array* $tmp2901 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
*(&local29) = $tmp2900;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
// line 900
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2902 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2902);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$collections$Array* $tmp2903 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local30) = $tmp2902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
// line 901
org$frostlang$frostc$FixedArray* $tmp2904 = *(&local24);
ITable* $tmp2905 = ((frost$collections$Iterable*) $tmp2904)->$class->itable;
while ($tmp2905->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2905 = $tmp2905->next;
}
$fn2907 $tmp2906 = $tmp2905->methods[0];
frost$collections$Iterator* $tmp2908 = $tmp2906(((frost$collections$Iterable*) $tmp2904));
goto block25;
block25:;
ITable* $tmp2909 = $tmp2908->$class->itable;
while ($tmp2909->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2909 = $tmp2909->next;
}
$fn2911 $tmp2910 = $tmp2909->methods[0];
frost$core$Bit $tmp2912 = $tmp2910($tmp2908);
bool $tmp2913 = $tmp2912.value;
if ($tmp2913) goto block27; else goto block26;
block26:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2914 = $tmp2908->$class->itable;
while ($tmp2914->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2914 = $tmp2914->next;
}
$fn2916 $tmp2915 = $tmp2914->methods[1];
frost$core$Object* $tmp2917 = $tmp2915($tmp2908);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2917)));
org$frostlang$frostc$ASTNode* $tmp2918 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp2917);
// line 902
org$frostlang$frostc$ASTNode* $tmp2919 = *(&local31);
frost$core$Int64* $tmp2920 = &$tmp2919->$rawValue;
frost$core$Int64 $tmp2921 = *$tmp2920;
frost$core$Int64 $tmp2922 = (frost$core$Int64) {34};
frost$core$Bit $tmp2923 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2921, $tmp2922);
bool $tmp2924 = $tmp2923.value;
if ($tmp2924) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp2925 = (org$frostlang$frostc$Position*) ($tmp2919->$data + 0);
org$frostlang$frostc$Position $tmp2926 = *$tmp2925;
*(&local32) = $tmp2926;
frost$core$String** $tmp2927 = (frost$core$String**) ($tmp2919->$data + 16);
frost$core$String* $tmp2928 = *$tmp2927;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
frost$core$String* $tmp2929 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
*(&local33) = $tmp2928;
org$frostlang$frostc$ASTNode** $tmp2930 = (org$frostlang$frostc$ASTNode**) ($tmp2919->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2931 = *$tmp2930;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
org$frostlang$frostc$ASTNode* $tmp2932 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
*(&local34) = $tmp2931;
// line 904
frost$collections$Array* $tmp2933 = *(&local28);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2934 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2935 = *(&local33);
org$frostlang$frostc$ASTNode* $tmp2936 = *(&local34);
org$frostlang$frostc$Type* $tmp2937 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2936);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2934, $tmp2935, $tmp2937);
frost$collections$Array$add$frost$collections$Array$T($tmp2933, ((frost$core$Object*) $tmp2934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
// line 906
frost$collections$Array* $tmp2938 = *(&local30);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2939 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2940 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp2941 = *(&local32);
frost$core$String* $tmp2942 = *(&local33);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2939, $tmp2940, $tmp2941, $tmp2942);
frost$collections$Array$add$frost$collections$Array$T($tmp2938, ((frost$core$Object*) $tmp2939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
org$frostlang$frostc$ASTNode* $tmp2943 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2944 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local33) = ((frost$core$String*) NULL);
goto block28;
block30:;
// line 909
frost$core$Int64 $tmp2945 = (frost$core$Int64) {909};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2946, $tmp2945);
abort(); // unreachable
block28:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2917);
org$frostlang$frostc$ASTNode* $tmp2947 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
// line 913
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2948 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2949 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp2950 = *(&local18);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2951 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2952 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp2953 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp2951, $tmp2952, $tmp2953, &$s2954);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2955 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2955);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2948, $tmp2949, $tmp2950, $tmp2951, $tmp2955);
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
org$frostlang$frostc$ASTNode* $tmp2956 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
*(&local35) = $tmp2948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// line 916
frost$collections$Array* $tmp2957 = *(&local29);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2958 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2959 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp2960 = *(&local18);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp2961 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2962 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp2963 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp2964 = *(&local35);
frost$core$String* $tmp2965 = *(&local27);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp2961, $tmp2962, $tmp2963, $tmp2964, $tmp2965);
frost$collections$Array* $tmp2966 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp2967 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2966);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp2958, $tmp2959, $tmp2960, $tmp2961, $tmp2967);
frost$collections$Array$add$frost$collections$Array$T($tmp2957, ((frost$core$Object*) $tmp2958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
// line 919
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// line 920
org$frostlang$frostc$ASTNode* $tmp2968 = *(&local25);
frost$core$Bit $tmp2969 = frost$core$Bit$init$builtin_bit($tmp2968 != NULL);
bool $tmp2970 = $tmp2969.value;
if ($tmp2970) goto block31; else goto block33;
block31:;
// line 921
org$frostlang$frostc$ASTNode* $tmp2971 = *(&local25);
org$frostlang$frostc$Type* $tmp2972 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2971);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
org$frostlang$frostc$Type* $tmp2973 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local36) = $tmp2972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
goto block32;
block33:;
// line 1
// line 924
org$frostlang$frostc$Type* $tmp2974 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
org$frostlang$frostc$Type* $tmp2975 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
*(&local36) = $tmp2974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
goto block32;
block32:;
// line 926
FROST_ASSERT(136 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2976 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(136, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2977 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2978 = *$tmp2977;
org$frostlang$frostc$Position $tmp2979 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2980 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2981 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2980, $tmp2981);
frost$core$Int64 $tmp2982 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2983 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2982);
frost$collections$Array* $tmp2984 = *(&local28);
org$frostlang$frostc$Type* $tmp2985 = *(&local36);
frost$collections$Array* $tmp2986 = *(&local29);
org$frostlang$frostc$FixedArray* $tmp2987 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2986);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2976, $tmp2978, $tmp2979, ((frost$core$String*) NULL), $tmp2980, $tmp2983, &$s2988, ((frost$collections$Array*) NULL), $tmp2984, $tmp2985, $tmp2987);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
org$frostlang$frostc$MethodDecl* $tmp2989 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local37) = $tmp2976;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
// line 930
org$frostlang$frostc$ClassDecl** $tmp2990 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2991 = *$tmp2990;
frost$collections$Array** $tmp2992 = &$tmp2991->methods;
frost$collections$Array* $tmp2993 = *$tmp2992;
org$frostlang$frostc$MethodDecl* $tmp2994 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp2993, ((frost$core$Object*) $tmp2994));
org$frostlang$frostc$MethodDecl* $tmp2995 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp2996 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp2998 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2999 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3000 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local28) = ((frost$collections$Array*) NULL);
goto block23;
block24:;
// line 1
// line 933
frost$core$String* $tmp3001 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$String* $tmp3002 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
*(&local27) = $tmp3001;
goto block23;
block23:;
// line 935
frost$core$Weak** $tmp3003 = &param0->compiler;
frost$core$Weak* $tmp3004 = *$tmp3003;
frost$core$Object* $tmp3005 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3004);
frost$collections$Stack** $tmp3006 = &((org$frostlang$frostc$Compiler*) $tmp3005)->currentClass;
frost$collections$Stack* $tmp3007 = *$tmp3006;
org$frostlang$frostc$ClassDecl** $tmp3008 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3009 = *$tmp3008;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3007, ((frost$core$Object*) $tmp3009));
frost$core$Frost$unref$frost$core$Object$Q($tmp3005);
// line 936
org$frostlang$frostc$ClassDecl** $tmp3010 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3011 = *$tmp3010;
org$frostlang$frostc$Position $tmp3012 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3013 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp3014 = *(&local20);
org$frostlang$frostc$MethodDecl$Kind $tmp3015 = *(&local21);
frost$core$String* $tmp3016 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp3017 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp3018 = *(&local24);
org$frostlang$frostc$ASTNode* $tmp3019 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp3020 = *(&local26);
org$frostlang$frostc$MethodDecl* $tmp3021 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp3011, $tmp3012, $tmp3013, $tmp3014, $tmp3015, $tmp3016, $tmp3017, $tmp3018, $tmp3019, $tmp3020);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
org$frostlang$frostc$MethodDecl* $tmp3022 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3022));
*(&local38) = $tmp3021;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
// line 938
org$frostlang$frostc$MethodDecl* $tmp3023 = *(&local38);
org$frostlang$frostc$Annotations** $tmp3024 = &$tmp3023->annotations;
org$frostlang$frostc$Annotations* $tmp3025 = *$tmp3024;
frost$core$Bit $tmp3026 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3025);
bool $tmp3027 = $tmp3026.value;
if ($tmp3027) goto block34; else goto block35;
block34:;
// line 939
org$frostlang$frostc$MethodDecl* $tmp3028 = *(&local38);
org$frostlang$frostc$Position* $tmp3029 = &((org$frostlang$frostc$Symbol*) $tmp3028)->position;
org$frostlang$frostc$Position $tmp3030 = *$tmp3029;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3030, &$s3031);
// line 941
org$frostlang$frostc$MethodDecl* $tmp3032 = *(&local38);
org$frostlang$frostc$Annotations** $tmp3033 = &$tmp3032->annotations;
org$frostlang$frostc$Annotations* $tmp3034 = *$tmp3033;
frost$core$Int64* $tmp3035 = &$tmp3034->flags;
frost$core$Int64 $tmp3036 = *$tmp3035;
frost$core$Int64 $tmp3037 = (frost$core$Int64) {16};
frost$core$Int64 $tmp3038 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp3037);
frost$core$Int64 $tmp3039 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp3036, $tmp3038);
frost$core$Int64* $tmp3040 = &$tmp3034->flags;
*$tmp3040 = $tmp3039;
goto block35;
block35:;
// line 943
frost$core$Weak** $tmp3041 = &param0->compiler;
frost$core$Weak* $tmp3042 = *$tmp3041;
frost$core$Object* $tmp3043 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3042);
frost$collections$Stack** $tmp3044 = &((org$frostlang$frostc$Compiler*) $tmp3043)->currentClass;
frost$collections$Stack* $tmp3045 = *$tmp3044;
frost$core$Int64 $tmp3046 = (frost$core$Int64) {0};
frost$core$Object* $tmp3047 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3045, $tmp3046);
org$frostlang$frostc$ClassDecl** $tmp3048 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3049 = *$tmp3048;
bool $tmp3050 = ((org$frostlang$frostc$ClassDecl*) $tmp3047) == $tmp3049;
frost$core$Bit $tmp3051 = frost$core$Bit$init$builtin_bit($tmp3050);
bool $tmp3052 = $tmp3051.value;
if ($tmp3052) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3053 = (frost$core$Int64) {943};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3054, $tmp3053);
abort(); // unreachable
block36:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3047);
frost$core$Frost$unref$frost$core$Object$Q($tmp3043);
// line 944
frost$core$Weak** $tmp3055 = &param0->compiler;
frost$core$Weak* $tmp3056 = *$tmp3055;
frost$core$Object* $tmp3057 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3056);
frost$collections$Stack** $tmp3058 = &((org$frostlang$frostc$Compiler*) $tmp3057)->currentClass;
frost$collections$Stack* $tmp3059 = *$tmp3058;
frost$core$Object* $tmp3060 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3059);
frost$core$Frost$unref$frost$core$Object$Q($tmp3060);
frost$core$Frost$unref$frost$core$Object$Q($tmp3057);
// line 945
org$frostlang$frostc$ClassDecl** $tmp3061 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3062 = *$tmp3061;
frost$collections$Array** $tmp3063 = &$tmp3062->methods;
frost$collections$Array* $tmp3064 = *$tmp3063;
org$frostlang$frostc$MethodDecl* $tmp3065 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp3064, ((frost$core$Object*) $tmp3065));
// line 946
org$frostlang$frostc$ClassDecl** $tmp3066 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3067 = *$tmp3066;
org$frostlang$frostc$SymbolTable** $tmp3068 = &$tmp3067->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3069 = *$tmp3068;
org$frostlang$frostc$MethodDecl* $tmp3070 = *(&local38);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp3069, ((org$frostlang$frostc$Symbol*) $tmp3070));
org$frostlang$frostc$MethodDecl* $tmp3071 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3072 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3073 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3074 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3074));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3075 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3076 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3077 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3078 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3079 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block19:;
frost$core$Int64 $tmp3080 = (frost$core$Int64) {18};
frost$core$Bit $tmp3081 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp3080);
bool $tmp3082 = $tmp3081.value;
if ($tmp3082) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp3083 = (org$frostlang$frostc$Position*) ($tmp2748->$data + 0);
org$frostlang$frostc$Position $tmp3084 = *$tmp3083;
*(&local39) = $tmp3084;
org$frostlang$frostc$ASTNode** $tmp3085 = (org$frostlang$frostc$ASTNode**) ($tmp2748->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3086 = *$tmp3085;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
org$frostlang$frostc$ASTNode* $tmp3087 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
*(&local40) = $tmp3086;
org$frostlang$frostc$FixedArray** $tmp3088 = (org$frostlang$frostc$FixedArray**) ($tmp2748->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3089 = *$tmp3088;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
org$frostlang$frostc$FixedArray* $tmp3090 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local41) = $tmp3089;
org$frostlang$frostc$ASTNode** $tmp3091 = (org$frostlang$frostc$ASTNode**) ($tmp2748->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3092 = *$tmp3091;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
org$frostlang$frostc$ASTNode* $tmp3093 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3093));
*(&local42) = $tmp3092;
// line 949
frost$collections$HashMap* $tmp3094 = *(&local3);
frost$core$String* $tmp3095 = *(&local2);
frost$collections$Array* $tmp3096 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3094), $tmp3095, ((frost$collections$List*) $tmp3096));
// line 950
org$frostlang$frostc$ClassDecl** $tmp3097 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3098 = *$tmp3097;
frost$collections$Array** $tmp3099 = &$tmp3098->fields;
frost$collections$Array* $tmp3100 = *$tmp3099;
ITable* $tmp3101 = ((frost$collections$CollectionView*) $tmp3100)->$class->itable;
while ($tmp3101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3101 = $tmp3101->next;
}
$fn3103 $tmp3102 = $tmp3101->methods[0];
frost$core$Int64 $tmp3104 = $tmp3102(((frost$collections$CollectionView*) $tmp3100));
*(&local43) = $tmp3104;
// line 951
org$frostlang$frostc$ClassDecl** $tmp3105 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3106 = *$tmp3105;
org$frostlang$frostc$Position $tmp3107 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp3108 = *(&local40);
org$frostlang$frostc$FixedArray* $tmp3109 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp3110 = *(&local42);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp3106, $tmp3107, $tmp3108, $tmp3109, $tmp3110);
// line 952
frost$core$Int64 $tmp3111 = *(&local43);
org$frostlang$frostc$ClassDecl** $tmp3112 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3113 = *$tmp3112;
frost$collections$Array** $tmp3114 = &$tmp3113->fields;
frost$collections$Array* $tmp3115 = *$tmp3114;
ITable* $tmp3116 = ((frost$collections$CollectionView*) $tmp3115)->$class->itable;
while ($tmp3116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3116 = $tmp3116->next;
}
$fn3118 $tmp3117 = $tmp3116->methods[0];
frost$core$Int64 $tmp3119 = $tmp3117(((frost$collections$CollectionView*) $tmp3115));
frost$core$Bit $tmp3120 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3121 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3111, $tmp3119, $tmp3120);
frost$core$Int64 $tmp3122 = $tmp3121.min;
*(&local44) = $tmp3122;
frost$core$Int64 $tmp3123 = $tmp3121.max;
frost$core$Bit $tmp3124 = $tmp3121.inclusive;
bool $tmp3125 = $tmp3124.value;
frost$core$Int64 $tmp3126 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3127 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3126);
if ($tmp3125) goto block43; else goto block44;
block43:;
int64_t $tmp3128 = $tmp3122.value;
int64_t $tmp3129 = $tmp3123.value;
bool $tmp3130 = $tmp3128 <= $tmp3129;
frost$core$Bit $tmp3131 = (frost$core$Bit) {$tmp3130};
bool $tmp3132 = $tmp3131.value;
if ($tmp3132) goto block40; else goto block41;
block44:;
int64_t $tmp3133 = $tmp3122.value;
int64_t $tmp3134 = $tmp3123.value;
bool $tmp3135 = $tmp3133 < $tmp3134;
frost$core$Bit $tmp3136 = (frost$core$Bit) {$tmp3135};
bool $tmp3137 = $tmp3136.value;
if ($tmp3137) goto block40; else goto block41;
block40:;
// line 953
org$frostlang$frostc$ClassDecl** $tmp3138 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3139 = *$tmp3138;
frost$collections$Array** $tmp3140 = &$tmp3139->fields;
frost$collections$Array* $tmp3141 = *$tmp3140;
frost$core$Int64 $tmp3142 = *(&local44);
frost$core$Object* $tmp3143 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3141, $tmp3142);
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp3143)));
org$frostlang$frostc$FieldDecl* $tmp3144 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3144));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) $tmp3143);
frost$core$Frost$unref$frost$core$Object$Q($tmp3143);
// line 954
org$frostlang$frostc$FieldDecl* $tmp3145 = *(&local45);
org$frostlang$frostc$FieldDecl$Kind* $tmp3146 = &$tmp3145->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp3147 = *$tmp3146;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3148;
$tmp3148 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3148->value = $tmp3147;
frost$core$Int64 $tmp3149 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp3150 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3149);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3151;
$tmp3151 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3151->value = $tmp3150;
ITable* $tmp3152 = ((frost$core$Equatable*) $tmp3148)->$class->itable;
while ($tmp3152->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3152 = $tmp3152->next;
}
$fn3154 $tmp3153 = $tmp3152->methods[1];
frost$core$Bit $tmp3155 = $tmp3153(((frost$core$Equatable*) $tmp3148), ((frost$core$Equatable*) $tmp3151));
bool $tmp3156 = $tmp3155.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3151)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3148)));
if ($tmp3156) goto block47; else goto block46;
block47:;
org$frostlang$frostc$FieldDecl* $tmp3157 = *(&local45);
org$frostlang$frostc$Annotations** $tmp3158 = &$tmp3157->annotations;
org$frostlang$frostc$Annotations* $tmp3159 = *$tmp3158;
frost$core$Bit $tmp3160 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3159);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block45; else goto block46;
block45:;
// line 956
org$frostlang$frostc$FieldDecl* $tmp3162 = *(&local45);
org$frostlang$frostc$Position* $tmp3163 = &((org$frostlang$frostc$Symbol*) $tmp3162)->position;
org$frostlang$frostc$Position $tmp3164 = *$tmp3163;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3164, &$s3165);
goto block46;
block46:;
org$frostlang$frostc$FieldDecl* $tmp3166 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block42;
block42:;
frost$core$Int64 $tmp3167 = *(&local44);
int64_t $tmp3168 = $tmp3123.value;
int64_t $tmp3169 = $tmp3167.value;
int64_t $tmp3170 = $tmp3168 - $tmp3169;
frost$core$Int64 $tmp3171 = (frost$core$Int64) {$tmp3170};
frost$core$UInt64 $tmp3172 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3171);
if ($tmp3125) goto block49; else goto block50;
block49:;
uint64_t $tmp3173 = $tmp3172.value;
uint64_t $tmp3174 = $tmp3127.value;
bool $tmp3175 = $tmp3173 >= $tmp3174;
frost$core$Bit $tmp3176 = (frost$core$Bit) {$tmp3175};
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block48; else goto block41;
block50:;
uint64_t $tmp3178 = $tmp3172.value;
uint64_t $tmp3179 = $tmp3127.value;
bool $tmp3180 = $tmp3178 > $tmp3179;
frost$core$Bit $tmp3181 = (frost$core$Bit) {$tmp3180};
bool $tmp3182 = $tmp3181.value;
if ($tmp3182) goto block48; else goto block41;
block48:;
int64_t $tmp3183 = $tmp3167.value;
int64_t $tmp3184 = $tmp3126.value;
int64_t $tmp3185 = $tmp3183 + $tmp3184;
frost$core$Int64 $tmp3186 = (frost$core$Int64) {$tmp3185};
*(&local44) = $tmp3186;
goto block40;
block41:;
org$frostlang$frostc$ASTNode* $tmp3187 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3188 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3189 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block39:;
// line 962
frost$core$Int64 $tmp3190 = (frost$core$Int64) {962};
org$frostlang$frostc$ASTNode* $tmp3191 = *(&local4);
frost$core$String* $tmp3192 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3193, ((frost$core$Object*) $tmp3191));
frost$core$String* $tmp3194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3192, &$s3195);
org$frostlang$frostc$ASTNode* $tmp3196 = *(&local4);
frost$core$Int64* $tmp3197 = &$tmp3196->$rawValue;
frost$core$Int64 $tmp3198 = *$tmp3197;
frost$core$Int64$wrapper* $tmp3199;
$tmp3199 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3199->value = $tmp3198;
frost$core$String* $tmp3200 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3194, ((frost$core$Object*) $tmp3199));
frost$core$String* $tmp3201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3200, &$s3202);
org$frostlang$frostc$ASTNode* $tmp3203 = *(&local4);
$fn3205 $tmp3204 = ($fn3205) $tmp3203->$class->vtable[2];
org$frostlang$frostc$Position $tmp3206 = $tmp3204($tmp3203);
org$frostlang$frostc$Position$wrapper* $tmp3207;
$tmp3207 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp3207->value = $tmp3206;
frost$core$String* $tmp3208 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3201, ((frost$core$Object*) $tmp3207));
frost$core$String* $tmp3209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3208, &$s3210);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3211, $tmp3190, $tmp3209);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2746);
org$frostlang$frostc$ASTNode* $tmp3212 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
// line 966
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3213 = &param0->source;
frost$io$File* $tmp3214 = *$tmp3213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
frost$io$File** $tmp3215 = &param0->source;
*$tmp3215 = ((frost$io$File*) NULL);
// line 967
frost$collections$Array* $tmp3216 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3216)));
frost$collections$HashMap* $tmp3217 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp3220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3216);
block1:;
// line 970
frost$core$Int64 $tmp3221 = (frost$core$Int64) {970};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3222, $tmp3221);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3223 = &param0->compiler;
frost$core$Weak* $tmp3224 = *$tmp3223;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
org$frostlang$frostc$ClassDecl** $tmp3225 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3226 = *$tmp3225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
frost$io$File** $tmp3227 = &param0->source;
frost$io$File* $tmp3228 = *$tmp3227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
return;

}

