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
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Int32.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/io/File.h"
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
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/collections/MapView.h"
#include "org/frostlang/frostc/Alias.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/collections/Stack.h"
#include "frost/collections/List.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"


static frost$core$String $s1;
org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Scanner$cleanup, org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type, org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64, org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q, org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q, org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String, org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT} };

typedef frost$core$Int64 (*$fn190)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn236)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn240)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn245)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn259)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn295)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn368)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn372)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn377)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn400)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn428)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn432)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn437)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn450)(frost$core$Object*);
typedef frost$core$String* (*$fn460)(frost$core$Object*);
typedef frost$core$Bit (*$fn518)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn527)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn531)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn536)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn684)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn686)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn713)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn715)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn742)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn744)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn771)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn773)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn800)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn802)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn961)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn965)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn970)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1067)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1124)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1128)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1133)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1229)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1233)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1238)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1277)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1281)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1286)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1367)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1371)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1376)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1447)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1451)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1456)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1506)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1510)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1515)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1564)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1568)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1573)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1608)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1612)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1617)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1634)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1638)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1643)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1833)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1837)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1842)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1873)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1877)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1882)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1896)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1900)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1905)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1940)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1944)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1949)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2016)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2020)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2025)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2078)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2133)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2137)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2142)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2209)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn2223)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2227)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2232)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2283)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2309)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2355)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2589)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2593)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2670)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2702)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2706)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2711)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2724)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2742)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2781)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2785)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2790)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2857)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2877)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2898)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2902)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2907)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2954)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3023)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3027)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3032)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3071)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3137)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3141)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3146)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3160)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3175)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3192)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3234)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3282)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3293)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3302)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3359)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3372)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3376)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3381)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3389)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3465)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3469)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3474)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3482)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3486)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3491)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3499)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3503)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3508)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3522)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn3559)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3678)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3682)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3687)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3791)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3795)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3800)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3808)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3812)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3817)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3870)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3917)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3921)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3926)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn4124)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4138)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4153)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4172)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4252)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4267)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4301)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4327)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4393)(frost$core$Object*);
typedef frost$core$String* (*$fn4404)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn4411)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn4415)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 28, 5772521929446391734, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s1038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1964 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2067 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s2178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s2204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s2294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s2395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s2574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2673 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s2675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, 1146821029976304283, NULL };
static frost$core$String $s2826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 5148459585349422950, NULL };
static frost$core$String $s2852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2885 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s2975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s2976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s3006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static frost$core$String $s3007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s3093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s3100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s3116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s3123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s3168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s3200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s3207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s3231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s3256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s3299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s3329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s3413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s3420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s3438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };
static frost$core$String $s3448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s3528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s3530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s3547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s3581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s3619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s3621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s3643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s3651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s3672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s3723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s3886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s3889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s3903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s3994 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s4010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s4031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s4077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s4078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s4084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s4087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s4108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s4132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s4133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -251948532054082008, NULL };
static frost$core$String $s4146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -409474925456529681, NULL };
static frost$core$String $s4180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s4181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s4192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s4199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s4309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -1668902239978348156, NULL };
static frost$core$String $s4310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s4354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s4355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s4361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s4364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s4396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s4398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s4419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s4431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };

void org$frostlang$frostc$Scanner$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:21
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
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Type$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$Type$Kind local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
org$frostlang$frostc$Type$Kind local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$ASTNode* local27 = NULL;
frost$collections$Array* local28 = NULL;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$Position local31;
frost$core$String* local32 = NULL;
org$frostlang$frostc$FixedArray* local33 = NULL;
frost$collections$Array* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
org$frostlang$frostc$Type$Kind local36;
org$frostlang$frostc$Type$Kind local37;
org$frostlang$frostc$IR$Value* local38 = NULL;
org$frostlang$frostc$Type* local39 = NULL;
org$frostlang$frostc$Position local40;
org$frostlang$frostc$parser$Token$Kind local41;
org$frostlang$frostc$FixedArray* local42 = NULL;
org$frostlang$frostc$ASTNode* local43 = NULL;
org$frostlang$frostc$Type$Kind local44;
org$frostlang$frostc$Type$Kind local45;
org$frostlang$frostc$Type$Kind local46;
org$frostlang$frostc$Type$Kind local47;
org$frostlang$frostc$Type$Kind local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$Type$Kind local50;
org$frostlang$frostc$Type$Kind local51;
org$frostlang$frostc$Type$Kind local52;
frost$collections$Array* local53 = NULL;
org$frostlang$frostc$ASTNode* local54 = NULL;
org$frostlang$frostc$Type* local55 = NULL;
org$frostlang$frostc$Type$Kind local56;
org$frostlang$frostc$Type$Kind local57;
org$frostlang$frostc$Position local58;
org$frostlang$frostc$FixedArray* local59 = NULL;
frost$collections$Array* local60 = NULL;
org$frostlang$frostc$ASTNode* local61 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:25
frost$core$Int64* $tmp6 = &param1->$rawValue;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {46};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:26:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 == $tmp10;
frost$core$Bit $tmp12 = frost$core$Bit$init$builtin_bit($tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp14 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp15 = *$tmp14;
*(&local0) = $tmp15;
frost$core$String** $tmp16 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp17 = *$tmp16;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$String* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:27
frost$core$String* $tmp19 = *(&local1);
frost$core$Int64 $tmp20 = (frost$core$Int64) {0};
// begin inline call to function frost.core.String.[](index:frost.core.Int64):frost.core.Char32 from Scanner.frost:27:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:190
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.stub:190:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp21 = (frost$core$Int64) {0};
frost$core$String$Index $tmp22 = frost$core$String$Index$init$frost$core$Int64($tmp21);
frost$core$String$Index $tmp23 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index($tmp19, $tmp22, $tmp20);
frost$core$Char32 $tmp24 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32($tmp19, $tmp23);
frost$core$Int32 $tmp25 = (frost$core$Int32) {98};
frost$core$Char32 $tmp26 = frost$core$Char32$init$frost$core$Int32($tmp25);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Scanner.frost:27:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp27 = $tmp24.value;
int32_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 == $tmp28;
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit($tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:28
frost$core$String* $tmp32 = *(&local1);
frost$core$Bit $tmp33 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s34);
bool $tmp35 = $tmp33.value;
if ($tmp35) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:29
// begin inline call to method org.frostlang.frostc.Type.BuiltinBit():org.frostlang.frostc.Type from Scanner.frost:29:72
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:457
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp36 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp37 = (frost$core$Int64) {8};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:457:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp38 = &(&local3)->$rawValue;
*$tmp38 = $tmp37;
org$frostlang$frostc$Type$Kind $tmp39 = *(&local3);
*(&local2) = $tmp39;
org$frostlang$frostc$Type$Kind $tmp40 = *(&local2);
org$frostlang$frostc$Position $tmp41 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp36, &$s43, $tmp40, $tmp41, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$String* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local1) = ((frost$core$String*) NULL);
return $tmp36;
block12:;
frost$core$Bit $tmp45 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s46);
bool $tmp47 = $tmp45.value;
if ($tmp47) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:30
// begin inline call to method org.frostlang.frostc.Type.BuiltinInt8():org.frostlang.frostc.Type from Scanner.frost:30:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:310
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp48 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp49 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:310:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp50 = &(&local5)->$rawValue;
*$tmp50 = $tmp49;
org$frostlang$frostc$Type$Kind $tmp51 = *(&local5);
*(&local4) = $tmp51;
org$frostlang$frostc$Type$Kind $tmp52 = *(&local4);
frost$core$Int64 $tmp53 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp48, &$s54, $tmp52, $tmp53);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$String* $tmp55 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local1) = ((frost$core$String*) NULL);
return $tmp48;
block16:;
frost$core$Bit $tmp56 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s57);
bool $tmp58 = $tmp56.value;
if ($tmp58) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:31
// begin inline call to method org.frostlang.frostc.Type.BuiltinInt16():org.frostlang.frostc.Type from Scanner.frost:31:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:315
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp59 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp60 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:315:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp61 = &(&local7)->$rawValue;
*$tmp61 = $tmp60;
org$frostlang$frostc$Type$Kind $tmp62 = *(&local7);
*(&local6) = $tmp62;
org$frostlang$frostc$Type$Kind $tmp63 = *(&local6);
frost$core$Int64 $tmp64 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp59, &$s65, $tmp63, $tmp64);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$String* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local1) = ((frost$core$String*) NULL);
return $tmp59;
block20:;
frost$core$Bit $tmp67 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s68);
bool $tmp69 = $tmp67.value;
if ($tmp69) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:32
// begin inline call to method org.frostlang.frostc.Type.BuiltinInt32():org.frostlang.frostc.Type from Scanner.frost:32:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:320
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp70 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:320:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp72 = &(&local9)->$rawValue;
*$tmp72 = $tmp71;
org$frostlang$frostc$Type$Kind $tmp73 = *(&local9);
*(&local8) = $tmp73;
org$frostlang$frostc$Type$Kind $tmp74 = *(&local8);
frost$core$Int64 $tmp75 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp70, &$s76, $tmp74, $tmp75);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$String* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = ((frost$core$String*) NULL);
return $tmp70;
block24:;
frost$core$Bit $tmp78 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s79);
bool $tmp80 = $tmp78.value;
if ($tmp80) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:33
// begin inline call to method org.frostlang.frostc.Type.BuiltinInt64():org.frostlang.frostc.Type from Scanner.frost:33:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:325
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp81 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp82 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:325:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp83 = &(&local11)->$rawValue;
*$tmp83 = $tmp82;
org$frostlang$frostc$Type$Kind $tmp84 = *(&local11);
*(&local10) = $tmp84;
org$frostlang$frostc$Type$Kind $tmp85 = *(&local10);
frost$core$Int64 $tmp86 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp81, &$s87, $tmp85, $tmp86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$String* $tmp88 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local1) = ((frost$core$String*) NULL);
return $tmp81;
block28:;
frost$core$Bit $tmp89 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s90);
bool $tmp91 = $tmp89.value;
if ($tmp91) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:34
// begin inline call to method org.frostlang.frostc.Type.BuiltinUInt8():org.frostlang.frostc.Type from Scanner.frost:34:74
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:330
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp92 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp93 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:330:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp94 = &(&local13)->$rawValue;
*$tmp94 = $tmp93;
org$frostlang$frostc$Type$Kind $tmp95 = *(&local13);
*(&local12) = $tmp95;
org$frostlang$frostc$Type$Kind $tmp96 = *(&local12);
frost$core$Int64 $tmp97 = (frost$core$Int64) {8};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp92, &$s98, $tmp96, $tmp97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$String* $tmp99 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local1) = ((frost$core$String*) NULL);
return $tmp92;
block32:;
frost$core$Bit $tmp100 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s101);
bool $tmp102 = $tmp100.value;
if ($tmp102) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:35
// begin inline call to method org.frostlang.frostc.Type.BuiltinUInt16():org.frostlang.frostc.Type from Scanner.frost:35:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:335
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp103 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp104 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:335:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp105 = &(&local15)->$rawValue;
*$tmp105 = $tmp104;
org$frostlang$frostc$Type$Kind $tmp106 = *(&local15);
*(&local14) = $tmp106;
org$frostlang$frostc$Type$Kind $tmp107 = *(&local14);
frost$core$Int64 $tmp108 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp103, &$s109, $tmp107, $tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$String* $tmp110 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local1) = ((frost$core$String*) NULL);
return $tmp103;
block36:;
frost$core$Bit $tmp111 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s112);
bool $tmp113 = $tmp111.value;
if ($tmp113) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:36
// begin inline call to method org.frostlang.frostc.Type.BuiltinUInt32():org.frostlang.frostc.Type from Scanner.frost:36:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:340
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp114 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp115 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:340:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp116 = &(&local17)->$rawValue;
*$tmp116 = $tmp115;
org$frostlang$frostc$Type$Kind $tmp117 = *(&local17);
*(&local16) = $tmp117;
org$frostlang$frostc$Type$Kind $tmp118 = *(&local16);
frost$core$Int64 $tmp119 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp114, &$s120, $tmp118, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$String* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local1) = ((frost$core$String*) NULL);
return $tmp114;
block40:;
frost$core$Bit $tmp122 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s123);
bool $tmp124 = $tmp122.value;
if ($tmp124) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:37
// begin inline call to method org.frostlang.frostc.Type.BuiltinUInt64():org.frostlang.frostc.Type from Scanner.frost:37:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:345
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp125 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp126 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:345:48
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp127 = &(&local19)->$rawValue;
*$tmp127 = $tmp126;
org$frostlang$frostc$Type$Kind $tmp128 = *(&local19);
*(&local18) = $tmp128;
org$frostlang$frostc$Type$Kind $tmp129 = *(&local18);
frost$core$Int64 $tmp130 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp125, &$s131, $tmp129, $tmp130);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$String* $tmp132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local1) = ((frost$core$String*) NULL);
return $tmp125;
block44:;
frost$core$Bit $tmp133 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s134);
bool $tmp135 = $tmp133.value;
if ($tmp135) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:38
// begin inline call to method org.frostlang.frostc.Type.BuiltinFloat32():org.frostlang.frostc.Type from Scanner.frost:38:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:350
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp136 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:350:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp138 = &(&local21)->$rawValue;
*$tmp138 = $tmp137;
org$frostlang$frostc$Type$Kind $tmp139 = *(&local21);
*(&local20) = $tmp139;
org$frostlang$frostc$Type$Kind $tmp140 = *(&local20);
frost$core$Int64 $tmp141 = (frost$core$Int64) {32};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp136, &$s142, $tmp140, $tmp141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp143 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local1) = ((frost$core$String*) NULL);
return $tmp136;
block48:;
frost$core$Bit $tmp144 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s145);
bool $tmp146 = $tmp144.value;
if ($tmp146) goto block51; else goto block10;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:39
// begin inline call to method org.frostlang.frostc.Type.BuiltinFloat64():org.frostlang.frostc.Type from Scanner.frost:39:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:355
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp147 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp148 = (frost$core$Int64) {9};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:355:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp149 = &(&local23)->$rawValue;
*$tmp149 = $tmp148;
org$frostlang$frostc$Type$Kind $tmp150 = *(&local23);
*(&local22) = $tmp150;
org$frostlang$frostc$Type$Kind $tmp151 = *(&local22);
frost$core$Int64 $tmp152 = (frost$core$Int64) {64};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$frost$core$Int64($tmp147, &$s153, $tmp151, $tmp152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String* $tmp154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local1) = ((frost$core$String*) NULL);
return $tmp147;
block10:;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:42
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp155 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp156 = *(&local1);
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:42:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp158 = &(&local25)->$rawValue;
*$tmp158 = $tmp157;
org$frostlang$frostc$Type$Kind $tmp159 = *(&local25);
*(&local24) = $tmp159;
org$frostlang$frostc$Type$Kind $tmp160 = *(&local24);
org$frostlang$frostc$Position $tmp161 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp155, $tmp156, $tmp160, $tmp161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$String* $tmp162 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local1) = ((frost$core$String*) NULL);
return $tmp155;
block3:;
frost$core$Int64 $tmp163 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:44:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp164 = $tmp7.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = frost$core$Bit$init$builtin_bit($tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp169 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp170 = *$tmp169;
*(&local26) = $tmp170;
org$frostlang$frostc$ASTNode** $tmp171 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp172 = *$tmp171;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$ASTNode* $tmp173 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
*(&local27) = $tmp172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp174 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp175 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp174, $tmp175);
org$frostlang$frostc$ASTNode* $tmp176 = *(&local27);
org$frostlang$frostc$Type* $tmp177 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp176);
frost$collections$Array$add$frost$collections$Array$T($tmp174, ((frost$core$Object*) $tmp177));
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$collections$Array* $tmp178 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local28) = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:46
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp179 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$collections$Array* $tmp180 = *(&local28);
frost$core$Int64 $tmp181 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Scanner.frost:46:37
frost$core$Int64 $tmp182 = (frost$core$Int64) {0};
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182.value;
bool $tmp185 = $tmp183 >= $tmp184;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block61; else goto block60;
block61:;
ITable* $tmp188 = ((frost$collections$CollectionView*) $tmp180)->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[0];
frost$core$Int64 $tmp191 = $tmp189(((frost$collections$CollectionView*) $tmp180));
int64_t $tmp192 = $tmp181.value;
int64_t $tmp193 = $tmp191.value;
bool $tmp194 = $tmp192 < $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp200 = &$tmp180->data;
frost$core$Object** $tmp201 = *$tmp200;
int64_t $tmp202 = $tmp181.value;
frost$core$Object* $tmp203 = $tmp201[$tmp202];
frost$core$Frost$ref$frost$core$Object$Q($tmp203);
frost$core$String** $tmp204 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp203))->name;
frost$core$String* $tmp205 = *$tmp204;
frost$core$String* $tmp206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp205, &$s207);
frost$core$Int64 $tmp208 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:46:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp209 = &(&local30)->$rawValue;
*$tmp209 = $tmp208;
org$frostlang$frostc$Type$Kind $tmp210 = *(&local30);
*(&local29) = $tmp210;
org$frostlang$frostc$Type$Kind $tmp211 = *(&local29);
org$frostlang$frostc$Position $tmp212 = *(&local26);
frost$collections$Array* $tmp213 = *(&local28);
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp179, $tmp206, $tmp211, $tmp212, ((frost$collections$ListView*) $tmp213), $tmp214);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q($tmp203);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$collections$Array* $tmp215 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local28) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp216 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp179;
block56:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:48:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp218 = $tmp7.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block63; else goto block64;
block63:;
org$frostlang$frostc$Position* $tmp223 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp224 = *$tmp223;
*(&local31) = $tmp224;
frost$core$String** $tmp225 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp226 = *$tmp225;
*(&local32) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp227 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local32) = $tmp226;
org$frostlang$frostc$FixedArray** $tmp228 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp229 = *$tmp228;
*(&local33) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
org$frostlang$frostc$FixedArray* $tmp230 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local33) = $tmp229;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:49
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp231 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp231);
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$collections$Array* $tmp232 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local34) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:50
org$frostlang$frostc$FixedArray* $tmp233 = *(&local33);
ITable* $tmp234 = ((frost$collections$Iterable*) $tmp233)->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$collections$Iterator* $tmp237 = $tmp235(((frost$collections$Iterable*) $tmp233));
goto block66;
block66:;
ITable* $tmp238 = $tmp237->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$core$Bit $tmp241 = $tmp239($tmp237);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block68; else goto block67;
block67:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp243 = $tmp237->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[1];
frost$core$Object* $tmp246 = $tmp244($tmp237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp246)));
org$frostlang$frostc$ASTNode* $tmp247 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp246);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:51
frost$collections$Array* $tmp248 = *(&local34);
org$frostlang$frostc$ASTNode* $tmp249 = *(&local35);
org$frostlang$frostc$Type* $tmp250 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp249);
frost$collections$Array$add$frost$collections$Array$T($tmp248, ((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q($tmp246);
org$frostlang$frostc$ASTNode* $tmp251 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:53
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp252 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp253 = *(&local32);
frost$core$Int64 $tmp254 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:53:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp255 = &(&local37)->$rawValue;
*$tmp255 = $tmp254;
org$frostlang$frostc$Type$Kind $tmp256 = *(&local37);
*(&local36) = $tmp256;
org$frostlang$frostc$Type$Kind $tmp257 = *(&local36);
$fn259 $tmp258 = ($fn259) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp260 = $tmp258(param1);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp252, $tmp253, $tmp257, $tmp260);
frost$collections$Array* $tmp261 = *(&local34);
org$frostlang$frostc$Type* $tmp262 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp252, ((frost$collections$ListView*) $tmp261));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$Array* $tmp263 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local34) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp264 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local33) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp265 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local32) = ((frost$core$String*) NULL);
return $tmp262;
block64:;
frost$core$Int64 $tmp266 = (frost$core$Int64) {26};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:55:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp267 = $tmp7.value;
int64_t $tmp268 = $tmp266.value;
bool $tmp269 = $tmp267 == $tmp268;
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit($tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp272 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp273 = *$tmp272;
org$frostlang$frostc$IR$Value** $tmp274 = (org$frostlang$frostc$IR$Value**) (param1->$data + 24);
org$frostlang$frostc$IR$Value* $tmp275 = *$tmp274;
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
org$frostlang$frostc$IR$Value* $tmp276 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local38) = $tmp275;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:56
org$frostlang$frostc$IR$Value* $tmp277 = *(&local38);
frost$core$Int64* $tmp278 = &$tmp277->$rawValue;
frost$core$Int64 $tmp279 = *$tmp278;
frost$core$Int64 $tmp280 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:57:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
bool $tmp283 = $tmp281 == $tmp282;
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit($tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block74; else goto block73;
block74:;
org$frostlang$frostc$Type** $tmp286 = (org$frostlang$frostc$Type**) ($tmp277->$data + 0);
org$frostlang$frostc$Type* $tmp287 = *$tmp286;
*(&local39) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
org$frostlang$frostc$Type* $tmp288 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local39) = $tmp287;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:58
org$frostlang$frostc$Type* $tmp289 = *(&local39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$Type* $tmp290 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local39) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp291 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp289;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:61
frost$core$Int64 $tmp292 = (frost$core$Int64) {61};
org$frostlang$frostc$IR$Value* $tmp293 = *(&local38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:61:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn295 $tmp294 = ($fn295) ((frost$core$Object*) $tmp293)->$class->vtable[0];
frost$core$String* $tmp296 = $tmp294(((frost$core$Object*) $tmp293));
frost$core$String* $tmp297 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s298, $tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$String* $tmp299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp297, &$s300);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s301, $tmp292, $tmp299);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
abort(); // unreachable
block71:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {30};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:63:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp303 = $tmp7.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 == $tmp304;
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit($tmp305);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp308 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp309 = *$tmp308;
*(&local40) = $tmp309;
org$frostlang$frostc$parser$Token$Kind* $tmp310 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp311 = *$tmp310;
*(&local41) = $tmp311;
org$frostlang$frostc$FixedArray** $tmp312 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp313 = *$tmp312;
*(&local42) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
org$frostlang$frostc$FixedArray* $tmp314 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local42) = $tmp313;
org$frostlang$frostc$ASTNode** $tmp315 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp316 = *$tmp315;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
org$frostlang$frostc$ASTNode* $tmp317 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local43) = $tmp316;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:65
org$frostlang$frostc$parser$Token$Kind $tmp318 = *(&local41);
frost$core$Int64 $tmp319 = $tmp318.$rawValue;
frost$core$Int64 $tmp320 = (frost$core$Int64) {95};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:66:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320.value;
bool $tmp323 = $tmp321 == $tmp322;
frost$core$Bit $tmp324 = frost$core$Bit$init$builtin_bit($tmp323);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:67
frost$core$Int64 $tmp326 = (frost$core$Int64) {15};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:67:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp327 = &(&local46)->$rawValue;
*$tmp327 = $tmp326;
org$frostlang$frostc$Type$Kind $tmp328 = *(&local46);
*(&local45) = $tmp328;
org$frostlang$frostc$Type$Kind $tmp329 = *(&local45);
*(&local44) = $tmp329;
goto block80;
block82:;
frost$core$Int64 $tmp330 = (frost$core$Int64) {96};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:69:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp331 = $tmp319.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 == $tmp332;
frost$core$Bit $tmp334 = frost$core$Bit$init$builtin_bit($tmp333);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:70
frost$core$Int64 $tmp336 = (frost$core$Int64) {16};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:70:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp337 = &(&local48)->$rawValue;
*$tmp337 = $tmp336;
org$frostlang$frostc$Type$Kind $tmp338 = *(&local48);
*(&local47) = $tmp338;
org$frostlang$frostc$Type$Kind $tmp339 = *(&local47);
*(&local44) = $tmp339;
goto block80;
block86:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {97};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:72:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp341 = $tmp319.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = frost$core$Bit$init$builtin_bit($tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:73
frost$core$Int64 $tmp346 = (frost$core$Int64) {17};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:73:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp347 = &(&local50)->$rawValue;
*$tmp347 = $tmp346;
org$frostlang$frostc$Type$Kind $tmp348 = *(&local50);
*(&local49) = $tmp348;
org$frostlang$frostc$Type$Kind $tmp349 = *(&local49);
*(&local44) = $tmp349;
goto block80;
block90:;
frost$core$Int64 $tmp350 = (frost$core$Int64) {98};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:75:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp351 = $tmp319.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 == $tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit($tmp353);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:76
frost$core$Int64 $tmp356 = (frost$core$Int64) {18};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:76:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp357 = &(&local52)->$rawValue;
*$tmp357 = $tmp356;
org$frostlang$frostc$Type$Kind $tmp358 = *(&local52);
*(&local51) = $tmp358;
org$frostlang$frostc$Type$Kind $tmp359 = *(&local51);
*(&local44) = $tmp359;
goto block80;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:79
frost$core$Int64 $tmp360 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s361, $tmp360, &$s362);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:82
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp363 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp363);
*(&local53) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$collections$Array* $tmp364 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local53) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:83
org$frostlang$frostc$FixedArray* $tmp365 = *(&local42);
ITable* $tmp366 = ((frost$collections$Iterable*) $tmp365)->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[0];
frost$collections$Iterator* $tmp369 = $tmp367(((frost$collections$Iterable*) $tmp365));
goto block97;
block97:;
ITable* $tmp370 = $tmp369->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Bit $tmp373 = $tmp371($tmp369);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block99; else goto block98;
block98:;
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp375 = $tmp369->$class->itable;
while ($tmp375->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp375 = $tmp375->next;
}
$fn377 $tmp376 = $tmp375->methods[1];
frost$core$Object* $tmp378 = $tmp376($tmp369);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp378)));
org$frostlang$frostc$ASTNode* $tmp379 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local54) = ((org$frostlang$frostc$ASTNode*) $tmp378);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:84
frost$collections$Array* $tmp380 = *(&local53);
org$frostlang$frostc$ASTNode* $tmp381 = *(&local54);
org$frostlang$frostc$Type* $tmp382 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp381);
frost$collections$Array$add$frost$collections$Array$T($tmp380, ((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
frost$core$Frost$unref$frost$core$Object$Q($tmp378);
org$frostlang$frostc$ASTNode* $tmp383 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local54) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:86
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:87
org$frostlang$frostc$ASTNode* $tmp384 = *(&local43);
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384 != NULL);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block100; else goto block102;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:88
org$frostlang$frostc$ASTNode* $tmp387 = *(&local43);
org$frostlang$frostc$Type* $tmp388 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp387);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
org$frostlang$frostc$Type* $tmp389 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local55) = $tmp388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
goto block101;
block102:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:91
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:91:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp390 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp391 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp392 = &(&local57)->$rawValue;
*$tmp392 = $tmp391;
org$frostlang$frostc$Type$Kind $tmp393 = *(&local57);
*(&local56) = $tmp393;
org$frostlang$frostc$Type$Kind $tmp394 = *(&local56);
org$frostlang$frostc$Position $tmp395 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp390, &$s397, $tmp394, $tmp395, $tmp396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
org$frostlang$frostc$Type* $tmp398 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local55) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:93
$fn400 $tmp399 = ($fn400) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp401 = $tmp399(param1);
org$frostlang$frostc$Type$Kind $tmp402 = *(&local44);
frost$collections$Array* $tmp403 = *(&local53);
org$frostlang$frostc$FixedArray* $tmp404 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp403);
org$frostlang$frostc$Type* $tmp405 = *(&local55);
frost$core$Int64 $tmp406 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp407 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp401, $tmp402, ((frost$collections$ListView*) $tmp404), $tmp405, $tmp406);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
org$frostlang$frostc$Type* $tmp408 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local55) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp409 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local53) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp410 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp411 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local42) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp407;
block78:;
frost$core$Int64 $tmp412 = (frost$core$Int64) {45};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:96:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp413 = $tmp7.value;
int64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 == $tmp414;
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit($tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block105; else goto block106;
block105:;
org$frostlang$frostc$Position* $tmp418 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp419 = *$tmp418;
*(&local58) = $tmp419;
org$frostlang$frostc$FixedArray** $tmp420 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp421 = *$tmp420;
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
org$frostlang$frostc$FixedArray* $tmp422 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local59) = $tmp421;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:97
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp423 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp423);
*(&local60) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
frost$collections$Array* $tmp424 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local60) = $tmp423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:98
org$frostlang$frostc$FixedArray* $tmp425 = *(&local59);
ITable* $tmp426 = ((frost$collections$Iterable*) $tmp425)->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[0];
frost$collections$Iterator* $tmp429 = $tmp427(((frost$collections$Iterable*) $tmp425));
goto block108;
block108:;
ITable* $tmp430 = $tmp429->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp430 = $tmp430->next;
}
$fn432 $tmp431 = $tmp430->methods[0];
frost$core$Bit $tmp433 = $tmp431($tmp429);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block110; else goto block109;
block109:;
*(&local61) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp435 = $tmp429->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[1];
frost$core$Object* $tmp438 = $tmp436($tmp429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp438)));
org$frostlang$frostc$ASTNode* $tmp439 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local61) = ((org$frostlang$frostc$ASTNode*) $tmp438);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:99
frost$collections$Array* $tmp440 = *(&local60);
org$frostlang$frostc$ASTNode* $tmp441 = *(&local61);
org$frostlang$frostc$Type* $tmp442 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp441);
frost$collections$Array$add$frost$collections$Array$T($tmp440, ((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q($tmp438);
org$frostlang$frostc$ASTNode* $tmp443 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local61) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block108;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:101
frost$collections$Array* $tmp444 = *(&local60);
org$frostlang$frostc$Type* $tmp445 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp444));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$collections$Array* $tmp446 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local60) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp447 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local59) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp445;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:104
frost$core$Int64 $tmp448 = (frost$core$Int64) {104};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn450 $tmp449 = ($fn450) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp451 = $tmp449(((frost$core$Object*) param1));
frost$core$String* $tmp452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s453, $tmp451);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$String* $tmp454 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp452, &$s455);
frost$core$Int64* $tmp456 = &param1->$rawValue;
frost$core$Int64 $tmp457 = *$tmp456;
frost$core$Int64$wrapper* $tmp458;
$tmp458 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp458->value = $tmp457;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn460 $tmp459 = ($fn460) ((frost$core$Object*) $tmp458)->$class->vtable[0];
frost$core$String* $tmp461 = $tmp459(((frost$core$Object*) $tmp458));
frost$core$String* $tmp462 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp454, $tmp461);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$String* $tmp463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp462, &$s464);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s465, $tmp448, $tmp463);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:107
frost$core$Int64 $tmp466 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s467, $tmp466);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:111
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:111:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp468 = param2.value;
int64_t $tmp469 = param3.value;
int64_t $tmp470 = $tmp468 & $tmp469;
frost$core$Int64 $tmp471 = frost$core$Int64$init$builtin_int64($tmp470);
frost$core$Int64 $tmp472 = (frost$core$Int64) {0};
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472.value;
bool $tmp475 = $tmp473 != $tmp474;
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:112
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:112:18
frost$io$File** $tmp478 = &param0->source;
frost$io$File* $tmp479 = *$tmp478;
frost$core$Bit $tmp480 = frost$core$Bit$init$builtin_bit($tmp479 != NULL);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp482 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s483, $tmp482, &$s484);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp485 = &param0->compiler;
frost$core$Weak* $tmp486 = *$tmp485;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp487 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp489 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s490, $tmp489);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp491 = &$tmp486->value;
frost$core$Object* $tmp492 = *$tmp491;
frost$core$Frost$ref$frost$core$Object$Q($tmp492);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp492), param1, &$s493);
frost$core$Frost$unref$frost$core$Object$Q($tmp492);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:114
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp494 = param2.value;
int64_t $tmp495 = param3.value;
int64_t $tmp496 = $tmp494 | $tmp495;
frost$core$Int64 $tmp497 = frost$core$Int64$init$builtin_int64($tmp496);
return $tmp497;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:121
frost$core$Bit $tmp498 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:122
frost$core$Bit $tmp500 = frost$core$Bit$init$builtin_bit(true);
return $tmp500;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:124
frost$core$String* $tmp501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s502, param2);
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp501, &$s504);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:124:26
frost$io$File** $tmp505 = &param0->source;
frost$io$File* $tmp506 = *$tmp505;
frost$core$Bit $tmp507 = frost$core$Bit$init$builtin_bit($tmp506 != NULL);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp509 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s510, $tmp509, &$s511);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp512 = &param0->compiler;
frost$core$Weak* $tmp513 = *$tmp512;
frost$core$Object* $tmp514 = frost$core$Weak$get$R$frost$core$Weak$T($tmp513);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp514), param1, $tmp503);
frost$core$Frost$unref$frost$core$Object$Q($tmp514);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:125
frost$core$Bit $tmp515 = frost$core$Bit$init$builtin_bit(false);
return $tmp515;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:118
frost$core$Int64 $tmp516 = (frost$core$Int64) {0};
*(&local0) = $tmp516;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:119
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local1) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp519 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Scanner.frost:120:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp520 = &$tmp519->pointer;
*$tmp520 = ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp521 = &$tmp519->target;
frost$core$Immutable* $tmp522 = *$tmp521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$core$Immutable** $tmp523 = &$tmp519->target;
*$tmp523 = ((frost$core$Immutable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Method* $tmp524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local2) = $tmp519;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:127
ITable* $tmp525 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$collections$Iterator* $tmp528 = $tmp526(((frost$collections$Iterable*) param1));
goto block2;
block2:;
ITable* $tmp529 = $tmp528->$class->itable;
while ($tmp529->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp529 = $tmp529->next;
}
$fn531 $tmp530 = $tmp529->methods[0];
frost$core$Bit $tmp532 = $tmp530($tmp528);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block4; else goto block3;
block3:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp534 = $tmp528->$class->itable;
while ($tmp534->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp534 = $tmp534->next;
}
$fn536 $tmp535 = $tmp534->methods[1];
frost$core$Object* $tmp537 = $tmp535($tmp528);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp537)));
org$frostlang$frostc$ASTNode* $tmp538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp537);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:128
org$frostlang$frostc$ASTNode* $tmp539 = *(&local3);
frost$core$Int64* $tmp540 = &$tmp539->$rawValue;
frost$core$Int64 $tmp541 = *$tmp540;
frost$core$Int64 $tmp542 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:129:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp543 = $tmp541.value;
int64_t $tmp544 = $tmp542.value;
bool $tmp545 = $tmp543 == $tmp544;
frost$core$Bit $tmp546 = frost$core$Bit$init$builtin_bit($tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp548 = (org$frostlang$frostc$Position*) ($tmp539->$data + 0);
org$frostlang$frostc$Position $tmp549 = *$tmp548;
*(&local4) = $tmp549;
frost$core$String** $tmp550 = (frost$core$String**) ($tmp539->$data + 24);
frost$core$String* $tmp551 = *$tmp550;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$String* $tmp552 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local5) = $tmp551;
frost$core$String** $tmp553 = (frost$core$String**) ($tmp539->$data + 32);
frost$core$String* $tmp554 = *$tmp553;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$String* $tmp555 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local6) = $tmp554;
org$frostlang$frostc$ASTNode** $tmp556 = (org$frostlang$frostc$ASTNode**) ($tmp539->$data + 40);
org$frostlang$frostc$ASTNode* $tmp557 = *$tmp556;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$ASTNode* $tmp558 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local7) = $tmp557;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:130
org$frostlang$frostc$ASTNode* $tmp559 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
org$frostlang$frostc$ASTNode* $tmp560 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local8) = $tmp559;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:131
frost$core$String* $tmp561 = *(&local5);
frost$core$Bit $tmp562 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s563);
bool $tmp564 = $tmp562.value;
if ($tmp564) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:133
org$frostlang$frostc$Position $tmp565 = *(&local4);
frost$core$Int64 $tmp566 = *(&local0);
frost$core$Int64 $tmp567 = (frost$core$Int64) {2};
frost$core$Int64 $tmp568 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp565, $tmp566, $tmp567);
*(&local0) = $tmp568;
goto block9;
block11:;
frost$core$Bit $tmp569 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s570);
bool $tmp571 = $tmp569.value;
if ($tmp571) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:136
org$frostlang$frostc$Position $tmp572 = *(&local4);
frost$core$Int64 $tmp573 = *(&local0);
frost$core$Int64 $tmp574 = (frost$core$Int64) {4};
frost$core$Int64 $tmp575 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp572, $tmp573, $tmp574);
*(&local0) = $tmp575;
goto block9;
block13:;
frost$core$Bit $tmp576 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s577);
bool $tmp578 = $tmp576.value;
if ($tmp578) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:139
org$frostlang$frostc$Position $tmp579 = *(&local4);
frost$core$Int64 $tmp580 = *(&local0);
frost$core$Int64 $tmp581 = (frost$core$Int64) {8};
frost$core$Int64 $tmp582 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp579, $tmp580, $tmp581);
*(&local0) = $tmp582;
goto block9;
block15:;
frost$core$Bit $tmp583 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s584);
bool $tmp585 = $tmp583.value;
if ($tmp585) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:142
org$frostlang$frostc$Position $tmp586 = *(&local4);
frost$core$Int64 $tmp587 = *(&local0);
frost$core$Int64 $tmp588 = (frost$core$Int64) {16};
frost$core$Int64 $tmp589 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp586, $tmp587, $tmp588);
*(&local0) = $tmp589;
goto block9;
block17:;
frost$core$Bit $tmp590 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s591);
bool $tmp592 = $tmp590.value;
if ($tmp592) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:145
org$frostlang$frostc$Position $tmp593 = *(&local4);
frost$core$Int64 $tmp594 = *(&local0);
frost$core$Int64 $tmp595 = (frost$core$Int64) {32};
frost$core$Int64 $tmp596 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp593, $tmp594, $tmp595);
*(&local0) = $tmp596;
goto block9;
block19:;
frost$core$Bit $tmp597 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s598);
bool $tmp599 = $tmp597.value;
if ($tmp599) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:148
org$frostlang$frostc$Position $tmp600 = *(&local4);
frost$core$Int64 $tmp601 = *(&local0);
frost$core$Int64 $tmp602 = (frost$core$Int64) {64};
frost$core$Int64 $tmp603 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp600, $tmp601, $tmp602);
*(&local0) = $tmp603;
goto block9;
block21:;
frost$core$Bit $tmp604 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s605);
bool $tmp606 = $tmp604.value;
if ($tmp606) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:151
org$frostlang$frostc$Position $tmp607 = *(&local4);
frost$core$Int64 $tmp608 = *(&local0);
frost$core$Int64 $tmp609 = (frost$core$Int64) {128};
frost$core$Int64 $tmp610 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp607, $tmp608, $tmp609);
*(&local0) = $tmp610;
goto block9;
block23:;
frost$core$Bit $tmp611 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s612);
bool $tmp613 = $tmp611.value;
if ($tmp613) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:154
org$frostlang$frostc$Position $tmp614 = *(&local4);
frost$core$Int64 $tmp615 = *(&local0);
frost$core$Int64 $tmp616 = (frost$core$Int64) {256};
frost$core$Int64 $tmp617 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp614, $tmp615, $tmp616);
*(&local0) = $tmp617;
goto block9;
block25:;
frost$core$Bit $tmp618 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s619);
bool $tmp620 = $tmp618.value;
if ($tmp620) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:157
org$frostlang$frostc$Position $tmp621 = *(&local4);
frost$core$Int64 $tmp622 = *(&local0);
frost$core$Int64 $tmp623 = (frost$core$Int64) {512};
frost$core$Int64 $tmp624 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp621, $tmp622, $tmp623);
*(&local0) = $tmp624;
goto block9;
block27:;
frost$core$Bit $tmp625 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s626);
bool $tmp627 = $tmp625.value;
if ($tmp627) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:160
org$frostlang$frostc$Position $tmp628 = *(&local4);
frost$core$Int64 $tmp629 = *(&local0);
frost$core$Int64 $tmp630 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp631 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp628, $tmp629, $tmp630);
*(&local0) = $tmp631;
goto block9;
block29:;
frost$core$Bit $tmp632 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s633);
bool $tmp634 = $tmp632.value;
if ($tmp634) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:163
org$frostlang$frostc$Position $tmp635 = *(&local4);
frost$core$Int64 $tmp636 = *(&local0);
frost$core$Int64 $tmp637 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp638 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp635, $tmp636, $tmp637);
*(&local0) = $tmp638;
goto block9;
block31:;
frost$core$Bit $tmp639 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s640);
bool $tmp641 = $tmp639.value;
if ($tmp641) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:166
org$frostlang$frostc$Position $tmp642 = *(&local4);
frost$core$Int64 $tmp643 = *(&local0);
frost$core$Int64 $tmp644 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp645 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp642, $tmp643, $tmp644);
*(&local0) = $tmp645;
goto block9;
block33:;
frost$core$Bit $tmp646 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s647);
bool $tmp648 = $tmp646.value;
if ($tmp648) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:169
org$frostlang$frostc$Position $tmp649 = *(&local4);
frost$core$Int64 $tmp650 = *(&local0);
frost$core$Int64 $tmp651 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp652 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp649, $tmp650, $tmp651);
*(&local0) = $tmp652;
goto block9;
block35:;
frost$core$Bit $tmp653 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s654);
bool $tmp655 = $tmp653.value;
if ($tmp655) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:172
org$frostlang$frostc$Position $tmp656 = *(&local4);
frost$core$Int64 $tmp657 = *(&local0);
frost$core$Int64 $tmp658 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp659 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp656, $tmp657, $tmp658);
*(&local0) = $tmp659;
goto block9;
block37:;
frost$core$Bit $tmp660 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s661);
bool $tmp662 = $tmp660.value;
if ($tmp662) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:175
org$frostlang$frostc$Position $tmp663 = *(&local4);
frost$core$Int64 $tmp664 = *(&local0);
frost$core$Int64 $tmp665 = (frost$core$Int64) {131072};
frost$core$Int64 $tmp666 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp663, $tmp664, $tmp665);
*(&local0) = $tmp666;
goto block9;
block39:;
frost$core$Bit $tmp667 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s668);
bool $tmp669 = $tmp667.value;
if ($tmp669) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:178
frost$collections$Array* $tmp670 = *(&local1);
frost$core$Bit $tmp671 = frost$core$Bit$init$builtin_bit($tmp670 == NULL);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:179
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp673 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp673);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$collections$Array* $tmp674 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local1) = $tmp673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:181
frost$core$Method* $tmp675 = *(&local2);
org$frostlang$frostc$Position $tmp676 = *(&local4);
frost$core$String* $tmp677 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp678 = *(&local8);
frost$core$Int8** $tmp679 = &$tmp675->pointer;
frost$core$Int8* $tmp680 = *$tmp679;
frost$core$Immutable** $tmp681 = &$tmp675->target;
frost$core$Immutable* $tmp682 = *$tmp681;
bool $tmp683 = $tmp682 != ((frost$core$Immutable*) NULL);
if ($tmp683) goto block46; else goto block47;
block47:;
frost$core$Bit $tmp685 = (($fn684) $tmp680)(param0, $tmp676, $tmp677, $tmp678);
*(&local9) = $tmp685;
goto block48;
block46:;
frost$core$Bit $tmp687 = (($fn686) $tmp680)($tmp682, param0, $tmp676, $tmp677, $tmp678);
*(&local9) = $tmp687;
goto block48;
block48:;
frost$core$Bit $tmp688 = *(&local9);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:182
frost$collections$Array* $tmp690 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp691 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp692 = (frost$core$Int64) {0};
frost$core$String* $tmp693 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp694 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp691, $tmp692, $tmp693, $tmp694);
frost$collections$Array$add$frost$collections$Array$T($tmp690, ((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp695 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block45;
block45:;
goto block9;
block41:;
frost$core$Bit $tmp696 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s697);
bool $tmp698 = $tmp696.value;
if ($tmp698) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:187
frost$collections$Array* $tmp699 = *(&local1);
frost$core$Bit $tmp700 = frost$core$Bit$init$builtin_bit($tmp699 == NULL);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:188
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp702 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp702);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$collections$Array* $tmp703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local1) = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:190
frost$core$Method* $tmp704 = *(&local2);
org$frostlang$frostc$Position $tmp705 = *(&local4);
frost$core$String* $tmp706 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp707 = *(&local8);
frost$core$Int8** $tmp708 = &$tmp704->pointer;
frost$core$Int8* $tmp709 = *$tmp708;
frost$core$Immutable** $tmp710 = &$tmp704->target;
frost$core$Immutable* $tmp711 = *$tmp710;
bool $tmp712 = $tmp711 != ((frost$core$Immutable*) NULL);
if ($tmp712) goto block55; else goto block56;
block56:;
frost$core$Bit $tmp714 = (($fn713) $tmp709)(param0, $tmp705, $tmp706, $tmp707);
*(&local10) = $tmp714;
goto block57;
block55:;
frost$core$Bit $tmp716 = (($fn715) $tmp709)($tmp711, param0, $tmp705, $tmp706, $tmp707);
*(&local10) = $tmp716;
goto block57;
block57:;
frost$core$Bit $tmp717 = *(&local10);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:191
frost$collections$Array* $tmp719 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp720 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp721 = (frost$core$Int64) {1};
frost$core$String* $tmp722 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp723 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp720, $tmp721, $tmp722, $tmp723);
frost$collections$Array$add$frost$collections$Array$T($tmp719, ((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp724 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block54:;
goto block9;
block50:;
frost$core$Bit $tmp725 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s726);
bool $tmp727 = $tmp725.value;
if ($tmp727) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:196
frost$collections$Array* $tmp728 = *(&local1);
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit($tmp728 == NULL);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:197
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp731 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$collections$Array* $tmp732 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local1) = $tmp731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:199
frost$core$Method* $tmp733 = *(&local2);
org$frostlang$frostc$Position $tmp734 = *(&local4);
frost$core$String* $tmp735 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp736 = *(&local8);
frost$core$Int8** $tmp737 = &$tmp733->pointer;
frost$core$Int8* $tmp738 = *$tmp737;
frost$core$Immutable** $tmp739 = &$tmp733->target;
frost$core$Immutable* $tmp740 = *$tmp739;
bool $tmp741 = $tmp740 != ((frost$core$Immutable*) NULL);
if ($tmp741) goto block64; else goto block65;
block65:;
frost$core$Bit $tmp743 = (($fn742) $tmp738)(param0, $tmp734, $tmp735, $tmp736);
*(&local11) = $tmp743;
goto block66;
block64:;
frost$core$Bit $tmp745 = (($fn744) $tmp738)($tmp740, param0, $tmp734, $tmp735, $tmp736);
*(&local11) = $tmp745;
goto block66;
block66:;
frost$core$Bit $tmp746 = *(&local11);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:200
frost$collections$Array* $tmp748 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp749 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp750 = (frost$core$Int64) {2};
frost$core$String* $tmp751 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp752 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp749, $tmp750, $tmp751, $tmp752);
frost$collections$Array$add$frost$collections$Array$T($tmp748, ((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp753 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block63;
block63:;
goto block9;
block59:;
frost$core$Bit $tmp754 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s755);
bool $tmp756 = $tmp754.value;
if ($tmp756) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:205
frost$collections$Array* $tmp757 = *(&local1);
frost$core$Bit $tmp758 = frost$core$Bit$init$builtin_bit($tmp757 == NULL);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:206
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp760 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$collections$Array* $tmp761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local1) = $tmp760;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:208
frost$core$Method* $tmp762 = *(&local2);
org$frostlang$frostc$Position $tmp763 = *(&local4);
frost$core$String* $tmp764 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp765 = *(&local8);
frost$core$Int8** $tmp766 = &$tmp762->pointer;
frost$core$Int8* $tmp767 = *$tmp766;
frost$core$Immutable** $tmp768 = &$tmp762->target;
frost$core$Immutable* $tmp769 = *$tmp768;
bool $tmp770 = $tmp769 != ((frost$core$Immutable*) NULL);
if ($tmp770) goto block73; else goto block74;
block74:;
frost$core$Bit $tmp772 = (($fn771) $tmp767)(param0, $tmp763, $tmp764, $tmp765);
*(&local12) = $tmp772;
goto block75;
block73:;
frost$core$Bit $tmp774 = (($fn773) $tmp767)($tmp769, param0, $tmp763, $tmp764, $tmp765);
*(&local12) = $tmp774;
goto block75;
block75:;
frost$core$Bit $tmp775 = *(&local12);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:209
frost$collections$Array* $tmp777 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp778 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp779 = (frost$core$Int64) {3};
frost$core$String* $tmp780 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp781 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp778, $tmp779, $tmp780, $tmp781);
frost$collections$Array$add$frost$collections$Array$T($tmp777, ((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp782 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block72;
block72:;
goto block9;
block68:;
frost$core$Bit $tmp783 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp561, &$s784);
bool $tmp785 = $tmp783.value;
if ($tmp785) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:214
frost$collections$Array* $tmp786 = *(&local1);
frost$core$Bit $tmp787 = frost$core$Bit$init$builtin_bit($tmp786 == NULL);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:215
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp789 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$collections$Array* $tmp790 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local1) = $tmp789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
goto block79;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:217
frost$core$Method* $tmp791 = *(&local2);
org$frostlang$frostc$Position $tmp792 = *(&local4);
frost$core$String* $tmp793 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp794 = *(&local8);
frost$core$Int8** $tmp795 = &$tmp791->pointer;
frost$core$Int8* $tmp796 = *$tmp795;
frost$core$Immutable** $tmp797 = &$tmp791->target;
frost$core$Immutable* $tmp798 = *$tmp797;
bool $tmp799 = $tmp798 != ((frost$core$Immutable*) NULL);
if ($tmp799) goto block82; else goto block83;
block83:;
frost$core$Bit $tmp801 = (($fn800) $tmp796)(param0, $tmp792, $tmp793, $tmp794);
*(&local13) = $tmp801;
goto block84;
block82:;
frost$core$Bit $tmp803 = (($fn802) $tmp796)($tmp798, param0, $tmp792, $tmp793, $tmp794);
*(&local13) = $tmp803;
goto block84;
block84:;
frost$core$Bit $tmp804 = *(&local13);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:218
frost$collections$Array* $tmp806 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp807 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp808 = (frost$core$Int64) {4};
frost$core$String* $tmp809 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp810 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp807, $tmp808, $tmp809, $tmp810);
frost$collections$Array$add$frost$collections$Array$T($tmp806, ((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:219
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp811 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block81;
block81:;
goto block9;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:223
org$frostlang$frostc$Position $tmp812 = *(&local4);
frost$core$String* $tmp813 = *(&local5);
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s815, $tmp813);
frost$core$String* $tmp816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp814, &$s817);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:223:34
frost$io$File** $tmp818 = &param0->source;
frost$io$File* $tmp819 = *$tmp818;
frost$core$Bit $tmp820 = frost$core$Bit$init$builtin_bit($tmp819 != NULL);
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block86; else goto block87;
block87:;
frost$core$Int64 $tmp822 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s823, $tmp822, &$s824);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp825 = &param0->compiler;
frost$core$Weak* $tmp826 = *$tmp825;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp827 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp826);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp829 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s830, $tmp829);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp831 = &$tmp826->value;
frost$core$Object* $tmp832 = *$tmp831;
frost$core$Frost$ref$frost$core$Object$Q($tmp832);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp832), $tmp812, $tmp816);
frost$core$Frost$unref$frost$core$Object$Q($tmp832);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:226
org$frostlang$frostc$ASTNode* $tmp833 = *(&local8);
frost$core$Bit $tmp834 = frost$core$Bit$init$builtin_bit($tmp833 != NULL);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:227
org$frostlang$frostc$Position $tmp836 = *(&local4);
frost$core$String* $tmp837 = *(&local5);
frost$core$String* $tmp838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s839, $tmp837);
frost$core$String* $tmp840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp838, &$s841);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:227:30
frost$io$File** $tmp842 = &param0->source;
frost$io$File* $tmp843 = *$tmp842;
frost$core$Bit $tmp844 = frost$core$Bit$init$builtin_bit($tmp843 != NULL);
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp846 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s847, $tmp846, &$s848);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp849 = &param0->compiler;
frost$core$Weak* $tmp850 = *$tmp849;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp851 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp850);
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp853 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s854, $tmp853);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp855 = &$tmp850->value;
frost$core$Object* $tmp856 = *$tmp855;
frost$core$Frost$ref$frost$core$Object$Q($tmp856);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp856), $tmp836, $tmp840);
frost$core$Frost$unref$frost$core$Object$Q($tmp856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
goto block92;
block92:;
org$frostlang$frostc$ASTNode* $tmp857 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp858 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp859 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp860 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp537);
org$frostlang$frostc$ASTNode* $tmp861 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:231
frost$core$Int64 $tmp862 = (frost$core$Int64) {231};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s863, $tmp862);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:235
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp864 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp865 = *(&local0);
frost$collections$Array* $tmp866 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp864, $tmp865, ((frost$collections$ListView*) $tmp866));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Method* $tmp867 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$collections$Array* $tmp868 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp864;

}
void org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$ASTNode* param5) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Annotations* local3 = NULL;
org$frostlang$frostc$FieldDecl$Kind local4;
org$frostlang$frostc$Variable$Kind local5;
org$frostlang$frostc$FixedArray* local6 = NULL;
org$frostlang$frostc$FieldDecl$Kind local7;
org$frostlang$frostc$FieldDecl$Kind local8;
org$frostlang$frostc$FieldDecl$Kind local9;
org$frostlang$frostc$FieldDecl$Kind local10;
org$frostlang$frostc$FieldDecl$Kind local11;
org$frostlang$frostc$FieldDecl$Kind local12;
org$frostlang$frostc$FieldDecl$Kind local13;
org$frostlang$frostc$FieldDecl$Kind local14;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Position local16;
org$frostlang$frostc$ASTNode* local17 = NULL;
org$frostlang$frostc$ASTNode* local18 = NULL;
frost$core$String* local19 = NULL;
org$frostlang$frostc$Type* local20 = NULL;
frost$core$String* local21 = NULL;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
frost$core$String* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$ASTNode* local26 = NULL;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$FieldDecl* local29 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:240
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:242
frost$core$Bit $tmp869 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp871 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:246
frost$core$Int64* $tmp872 = &param3->$rawValue;
frost$core$Int64 $tmp873 = *$tmp872;
frost$core$Int64 $tmp874 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:247:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp875 = $tmp873.value;
int64_t $tmp876 = $tmp874.value;
bool $tmp877 = $tmp875 == $tmp876;
frost$core$Bit $tmp878 = frost$core$Bit$init$builtin_bit($tmp877);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp880 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp881 = *$tmp880;
*(&local1) = $tmp881;
frost$core$String** $tmp882 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp883 = *$tmp882;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$String* $tmp884 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local2) = $tmp883;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:248
frost$core$String* $tmp885 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$String* $tmp886 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
*(&local0) = $tmp885;
frost$core$String* $tmp887 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:251
frost$core$Int64 $tmp888 = (frost$core$Int64) {251};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s889, $tmp888);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:255
org$frostlang$frostc$Annotations* $tmp890 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
org$frostlang$frostc$Annotations* $tmp891 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local3) = $tmp890;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:256
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:257
frost$core$Int64* $tmp892 = &param5->$rawValue;
frost$core$Int64 $tmp893 = *$tmp892;
frost$core$Int64 $tmp894 = (frost$core$Int64) {53};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:258:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp895 = $tmp893.value;
int64_t $tmp896 = $tmp894.value;
bool $tmp897 = $tmp895 == $tmp896;
frost$core$Bit $tmp898 = frost$core$Bit$init$builtin_bit($tmp897);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp900 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp901 = *$tmp900;
org$frostlang$frostc$Variable$Kind* $tmp902 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp903 = *$tmp902;
*(&local5) = $tmp903;
org$frostlang$frostc$FixedArray** $tmp904 = (org$frostlang$frostc$FixedArray**) (param5->$data + 32);
org$frostlang$frostc$FixedArray* $tmp905 = *$tmp904;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
org$frostlang$frostc$FixedArray* $tmp906 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
*(&local6) = $tmp905;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:259
org$frostlang$frostc$Variable$Kind $tmp907 = *(&local5);
frost$core$Int64 $tmp908 = $tmp907.$rawValue;
frost$core$Int64 $tmp909 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:260:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp910 = $tmp908.value;
int64_t $tmp911 = $tmp909.value;
bool $tmp912 = $tmp910 == $tmp911;
frost$core$Bit $tmp913 = frost$core$Bit$init$builtin_bit($tmp912);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:261
frost$core$Int64 $tmp915 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:261:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp916 = &(&local8)->$rawValue;
*$tmp916 = $tmp915;
org$frostlang$frostc$FieldDecl$Kind $tmp917 = *(&local8);
*(&local7) = $tmp917;
org$frostlang$frostc$FieldDecl$Kind $tmp918 = *(&local7);
*(&local4) = $tmp918;
goto block12;
block14:;
frost$core$Int64 $tmp919 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:263:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp920 = $tmp908.value;
int64_t $tmp921 = $tmp919.value;
bool $tmp922 = $tmp920 == $tmp921;
frost$core$Bit $tmp923 = frost$core$Bit$init$builtin_bit($tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:264
frost$core$Int64 $tmp925 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:264:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp926 = &(&local10)->$rawValue;
*$tmp926 = $tmp925;
org$frostlang$frostc$FieldDecl$Kind $tmp927 = *(&local10);
*(&local9) = $tmp927;
org$frostlang$frostc$FieldDecl$Kind $tmp928 = *(&local9);
*(&local4) = $tmp928;
goto block12;
block18:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:266:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp930 = $tmp908.value;
int64_t $tmp931 = $tmp929.value;
bool $tmp932 = $tmp930 == $tmp931;
frost$core$Bit $tmp933 = frost$core$Bit$init$builtin_bit($tmp932);
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:267
frost$core$Int64 $tmp935 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:267:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp936 = &(&local12)->$rawValue;
*$tmp936 = $tmp935;
org$frostlang$frostc$FieldDecl$Kind $tmp937 = *(&local12);
*(&local11) = $tmp937;
org$frostlang$frostc$FieldDecl$Kind $tmp938 = *(&local11);
*(&local4) = $tmp938;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:268
org$frostlang$frostc$Annotations* $tmp939 = *(&local3);
frost$core$Int64* $tmp940 = &$tmp939->flags;
frost$core$Int64 $tmp941 = *$tmp940;
frost$core$Int64 $tmp942 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:268:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp943 = $tmp941.value;
int64_t $tmp944 = $tmp942.value;
int64_t $tmp945 = $tmp943 | $tmp944;
frost$core$Int64 $tmp946 = frost$core$Int64$init$builtin_int64($tmp945);
frost$core$Int64* $tmp947 = &$tmp939->flags;
*$tmp947 = $tmp946;
goto block12;
block22:;
frost$core$Int64 $tmp948 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:270:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp949 = $tmp908.value;
int64_t $tmp950 = $tmp948.value;
bool $tmp951 = $tmp949 == $tmp950;
frost$core$Bit $tmp952 = frost$core$Bit$init$builtin_bit($tmp951);
bool $tmp953 = $tmp952.value;
if ($tmp953) goto block26; else goto block12;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:271
frost$core$Int64 $tmp954 = (frost$core$Int64) {3};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:271:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp955 = &(&local14)->$rawValue;
*$tmp955 = $tmp954;
org$frostlang$frostc$FieldDecl$Kind $tmp956 = *(&local14);
*(&local13) = $tmp956;
org$frostlang$frostc$FieldDecl$Kind $tmp957 = *(&local13);
*(&local4) = $tmp957;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:274
org$frostlang$frostc$FixedArray* $tmp958 = *(&local6);
ITable* $tmp959 = ((frost$collections$Iterable*) $tmp958)->$class->itable;
while ($tmp959->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp959 = $tmp959->next;
}
$fn961 $tmp960 = $tmp959->methods[0];
frost$collections$Iterator* $tmp962 = $tmp960(((frost$collections$Iterable*) $tmp958));
goto block29;
block29:;
ITable* $tmp963 = $tmp962->$class->itable;
while ($tmp963->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp963 = $tmp963->next;
}
$fn965 $tmp964 = $tmp963->methods[0];
frost$core$Bit $tmp966 = $tmp964($tmp962);
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block31; else goto block30;
block30:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp968 = $tmp962->$class->itable;
while ($tmp968->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp968 = $tmp968->next;
}
$fn970 $tmp969 = $tmp968->methods[1];
frost$core$Object* $tmp971 = $tmp969($tmp962);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp971)));
org$frostlang$frostc$ASTNode* $tmp972 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp971);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:275
org$frostlang$frostc$ASTNode* $tmp973 = *(&local15);
frost$core$Int64* $tmp974 = &$tmp973->$rawValue;
frost$core$Int64 $tmp975 = *$tmp974;
frost$core$Int64 $tmp976 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:276:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp977 = $tmp975.value;
int64_t $tmp978 = $tmp976.value;
bool $tmp979 = $tmp977 == $tmp978;
frost$core$Bit $tmp980 = frost$core$Bit$init$builtin_bit($tmp979);
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp982 = (org$frostlang$frostc$Position*) ($tmp973->$data + 0);
org$frostlang$frostc$Position $tmp983 = *$tmp982;
*(&local16) = $tmp983;
org$frostlang$frostc$ASTNode** $tmp984 = (org$frostlang$frostc$ASTNode**) ($tmp973->$data + 24);
org$frostlang$frostc$ASTNode* $tmp985 = *$tmp984;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
org$frostlang$frostc$ASTNode* $tmp986 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
*(&local17) = $tmp985;
org$frostlang$frostc$ASTNode** $tmp987 = (org$frostlang$frostc$ASTNode**) ($tmp973->$data + 32);
org$frostlang$frostc$ASTNode* $tmp988 = *$tmp987;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
org$frostlang$frostc$ASTNode* $tmp989 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local18) = $tmp988;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:277
*(&local19) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:278
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:279
org$frostlang$frostc$ASTNode* $tmp990 = *(&local17);
frost$core$Int64* $tmp991 = &$tmp990->$rawValue;
frost$core$Int64 $tmp992 = *$tmp991;
frost$core$Int64 $tmp993 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp994 = $tmp992.value;
int64_t $tmp995 = $tmp993.value;
bool $tmp996 = $tmp994 == $tmp995;
frost$core$Bit $tmp997 = frost$core$Bit$init$builtin_bit($tmp996);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp999 = (org$frostlang$frostc$Position*) ($tmp990->$data + 0);
org$frostlang$frostc$Position $tmp1000 = *$tmp999;
frost$core$String** $tmp1001 = (frost$core$String**) ($tmp990->$data + 24);
frost$core$String* $tmp1002 = *$tmp1001;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
frost$core$String* $tmp1003 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local21) = $tmp1002;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:281
frost$core$String* $tmp1004 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$String* $tmp1005 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local19) = $tmp1004;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:282
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:282:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1006 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp1007 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1008 = &(&local23)->$rawValue;
*$tmp1008 = $tmp1007;
org$frostlang$frostc$Type$Kind $tmp1009 = *(&local23);
*(&local22) = $tmp1009;
org$frostlang$frostc$Type$Kind $tmp1010 = *(&local22);
org$frostlang$frostc$Position $tmp1011 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp1012 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp1006, &$s1013, $tmp1010, $tmp1011, $tmp1012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
org$frostlang$frostc$Type* $tmp1014 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local20) = $tmp1006;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$String* $tmp1015 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local21) = ((frost$core$String*) NULL);
goto block36;
block38:;
frost$core$Int64 $tmp1016 = (frost$core$Int64) {48};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:284:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1017 = $tmp992.value;
int64_t $tmp1018 = $tmp1016.value;
bool $tmp1019 = $tmp1017 == $tmp1018;
frost$core$Bit $tmp1020 = frost$core$Bit$init$builtin_bit($tmp1019);
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1022 = (org$frostlang$frostc$Position*) ($tmp990->$data + 0);
org$frostlang$frostc$Position $tmp1023 = *$tmp1022;
frost$core$String** $tmp1024 = (frost$core$String**) ($tmp990->$data + 24);
frost$core$String* $tmp1025 = *$tmp1024;
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$core$String* $tmp1026 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1026));
*(&local24) = $tmp1025;
org$frostlang$frostc$ASTNode** $tmp1027 = (org$frostlang$frostc$ASTNode**) ($tmp990->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1028 = *$tmp1027;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
org$frostlang$frostc$ASTNode* $tmp1029 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local25) = $tmp1028;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:285
frost$core$String* $tmp1030 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$core$String* $tmp1031 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local19) = $tmp1030;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:286
org$frostlang$frostc$ASTNode* $tmp1032 = *(&local25);
org$frostlang$frostc$Type* $tmp1033 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1032);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$Type* $tmp1034 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local20) = $tmp1033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
org$frostlang$frostc$ASTNode* $tmp1035 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1036 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local24) = ((frost$core$String*) NULL);
goto block36;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:289
frost$core$Int64 $tmp1037 = (frost$core$Int64) {289};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1038, $tmp1037);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:292
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:293
org$frostlang$frostc$ASTNode* $tmp1039 = *(&local18);
frost$core$Bit $tmp1040 = frost$core$Bit$init$builtin_bit($tmp1039 == NULL);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block49; else goto block47;
block49:;
org$frostlang$frostc$Annotations* $tmp1042 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Scanner.frost:293:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp1043 = &$tmp1042->flags;
frost$core$Int64 $tmp1044 = *$tmp1043;
frost$core$Int64 $tmp1045 = (frost$core$Int64) {4096};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1046 = $tmp1044.value;
int64_t $tmp1047 = $tmp1045.value;
int64_t $tmp1048 = $tmp1046 & $tmp1047;
frost$core$Int64 $tmp1049 = frost$core$Int64$init$builtin_int64($tmp1048);
frost$core$Int64 $tmp1050 = (frost$core$Int64) {0};
int64_t $tmp1051 = $tmp1049.value;
int64_t $tmp1052 = $tmp1050.value;
bool $tmp1053 = $tmp1051 != $tmp1052;
frost$core$Bit $tmp1054 = (frost$core$Bit) {$tmp1053};
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block48; else goto block47;
block48:;
org$frostlang$frostc$Type* $tmp1056 = *(&local20);
org$frostlang$frostc$Type$Kind* $tmp1057 = &$tmp1056->typeKind;
org$frostlang$frostc$Type$Kind $tmp1058 = *$tmp1057;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1059;
$tmp1059 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1059->value = $tmp1058;
frost$core$Int64 $tmp1060 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:294:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1061 = &(&local28)->$rawValue;
*$tmp1061 = $tmp1060;
org$frostlang$frostc$Type$Kind $tmp1062 = *(&local28);
*(&local27) = $tmp1062;
org$frostlang$frostc$Type$Kind $tmp1063 = *(&local27);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1064;
$tmp1064 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1064->value = $tmp1063;
ITable* $tmp1065 = ((frost$core$Equatable*) $tmp1059)->$class->itable;
while ($tmp1065->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
frost$core$Bit $tmp1068 = $tmp1066(((frost$core$Equatable*) $tmp1059), ((frost$core$Equatable*) $tmp1064));
bool $tmp1069 = $tmp1068.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1064)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1059)));
if ($tmp1069) goto block45; else goto block47;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1070 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1071 = (frost$core$Int64) {31};
org$frostlang$frostc$Position $tmp1072 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1070, $tmp1071, $tmp1072);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
org$frostlang$frostc$ASTNode* $tmp1073 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local26) = $tmp1070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
goto block46;
block47:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:298
org$frostlang$frostc$ASTNode* $tmp1074 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
org$frostlang$frostc$ASTNode* $tmp1075 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local26) = $tmp1074;
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:300
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp1076 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp1077 = *(&local16);
frost$core$String* $tmp1078 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1079 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp1080 = *(&local4);
frost$core$String* $tmp1081 = *(&local19);
org$frostlang$frostc$Type* $tmp1082 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp1083 = *(&local26);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp1076, param1, $tmp1077, $tmp1078, $tmp1079, $tmp1080, $tmp1081, $tmp1082, $tmp1083);
*(&local29) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
org$frostlang$frostc$FieldDecl* $tmp1084 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
*(&local29) = $tmp1076;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:302
org$frostlang$frostc$SymbolTable** $tmp1085 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1086 = *$tmp1085;
org$frostlang$frostc$FieldDecl* $tmp1087 = *(&local29);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:302:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1088 = &((org$frostlang$frostc$Symbol*) $tmp1087)->name;
frost$core$String* $tmp1089 = *$tmp1088;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1086, ((org$frostlang$frostc$Symbol*) $tmp1087), $tmp1089);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:303
frost$collections$Array** $tmp1090 = &param1->fields;
frost$collections$Array* $tmp1091 = *$tmp1090;
org$frostlang$frostc$FieldDecl* $tmp1092 = *(&local29);
frost$collections$Array$add$frost$collections$Array$T($tmp1091, ((frost$core$Object*) $tmp1092));
org$frostlang$frostc$FieldDecl* $tmp1093 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local29) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1094 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp1095 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1096 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1097 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1098 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp971);
org$frostlang$frostc$ASTNode* $tmp1099 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:306
frost$core$Int64 $tmp1100 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1101, $tmp1100);
abort(); // unreachable
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
org$frostlang$frostc$FixedArray* $tmp1102 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$Annotations* $tmp1103 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1104 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local0) = ((frost$core$String*) NULL);
return;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:312
frost$core$Int64 $tmp1105 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1106, $tmp1105);
abort(); // unreachable

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:319
frost$core$Int64* $tmp1107 = &param1->$rawValue;
frost$core$Int64 $tmp1108 = *$tmp1107;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:320:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1110 = $tmp1108.value;
int64_t $tmp1111 = $tmp1109.value;
bool $tmp1112 = $tmp1110 == $tmp1111;
frost$core$Bit $tmp1113 = frost$core$Bit$init$builtin_bit($tmp1112);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1115 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1116 = *$tmp1115;
org$frostlang$frostc$FixedArray** $tmp1117 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1118 = *$tmp1117;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
org$frostlang$frostc$FixedArray* $tmp1119 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local0) = $tmp1118;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:321
frost$core$Int64 $tmp1120 = (frost$core$Int64) {0};
*(&local1) = $tmp1120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:322
org$frostlang$frostc$FixedArray* $tmp1121 = *(&local0);
ITable* $tmp1122 = ((frost$collections$Iterable*) $tmp1121)->$class->itable;
while ($tmp1122->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1122 = $tmp1122->next;
}
$fn1124 $tmp1123 = $tmp1122->methods[0];
frost$collections$Iterator* $tmp1125 = $tmp1123(((frost$collections$Iterable*) $tmp1121));
goto block5;
block5:;
ITable* $tmp1126 = $tmp1125->$class->itable;
while ($tmp1126->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1126 = $tmp1126->next;
}
$fn1128 $tmp1127 = $tmp1126->methods[0];
frost$core$Bit $tmp1129 = $tmp1127($tmp1125);
bool $tmp1130 = $tmp1129.value;
if ($tmp1130) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1131 = $tmp1125->$class->itable;
while ($tmp1131->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1131 = $tmp1131->next;
}
$fn1133 $tmp1132 = $tmp1131->methods[1];
frost$core$Object* $tmp1134 = $tmp1132($tmp1125);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1134)));
org$frostlang$frostc$ASTNode* $tmp1135 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1134);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:323
frost$core$Int64 $tmp1136 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1137 = *(&local2);
frost$core$Int64 $tmp1138 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1137);
int64_t $tmp1139 = $tmp1136.value;
int64_t $tmp1140 = $tmp1138.value;
int64_t $tmp1141 = $tmp1139 + $tmp1140;
frost$core$Int64 $tmp1142 = (frost$core$Int64) {$tmp1141};
*(&local1) = $tmp1142;
frost$core$Frost$unref$frost$core$Object$Q($tmp1134);
org$frostlang$frostc$ASTNode* $tmp1143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:325
frost$core$Int64 $tmp1144 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1145 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1144;
block3:;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:327:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1147 = $tmp1108.value;
int64_t $tmp1148 = $tmp1146.value;
bool $tmp1149 = $tmp1147 == $tmp1148;
frost$core$Bit $tmp1150 = frost$core$Bit$init$builtin_bit($tmp1149);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1152 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1153 = *$tmp1152;
org$frostlang$frostc$ASTNode** $tmp1154 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1155 = *$tmp1154;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
org$frostlang$frostc$ASTNode* $tmp1156 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local3) = $tmp1155;
org$frostlang$frostc$ASTNode** $tmp1157 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1158 = *$tmp1157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:328
org$frostlang$frostc$ASTNode* $tmp1159 = *(&local3);
frost$core$Int64 $tmp1160 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1159);
org$frostlang$frostc$ASTNode* $tmp1161 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1160;
block9:;
frost$core$Int64 $tmp1162 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:330:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1163 = $tmp1108.value;
int64_t $tmp1164 = $tmp1162.value;
bool $tmp1165 = $tmp1163 == $tmp1164;
frost$core$Bit $tmp1166 = frost$core$Bit$init$builtin_bit($tmp1165);
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:331
frost$core$Int64 $tmp1168 = (frost$core$Int64) {0};
return $tmp1168;
block12:;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:333:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1170 = $tmp1108.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = frost$core$Bit$init$builtin_bit($tmp1172);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:334
frost$core$Int64 $tmp1175 = (frost$core$Int64) {0};
return $tmp1175;
block15:;
frost$core$Int64 $tmp1176 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:336:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1177 = $tmp1108.value;
int64_t $tmp1178 = $tmp1176.value;
bool $tmp1179 = $tmp1177 == $tmp1178;
frost$core$Bit $tmp1180 = frost$core$Bit$init$builtin_bit($tmp1179);
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp1182 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1183 = *$tmp1182;
org$frostlang$frostc$ASTNode** $tmp1184 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1185 = *$tmp1184;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
org$frostlang$frostc$ASTNode* $tmp1186 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local4) = $tmp1185;
org$frostlang$frostc$expression$Binary$Operator* $tmp1187 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp1188 = *$tmp1187;
org$frostlang$frostc$ASTNode** $tmp1189 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1190 = *$tmp1189;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
org$frostlang$frostc$ASTNode* $tmp1191 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local5) = $tmp1190;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:337
frost$core$Int64 $tmp1192 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1193 = *(&local4);
frost$core$Int64 $tmp1194 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1193);
int64_t $tmp1195 = $tmp1192.value;
int64_t $tmp1196 = $tmp1194.value;
int64_t $tmp1197 = $tmp1195 + $tmp1196;
frost$core$Int64 $tmp1198 = (frost$core$Int64) {$tmp1197};
org$frostlang$frostc$ASTNode* $tmp1199 = *(&local5);
frost$core$Int64 $tmp1200 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1199);
int64_t $tmp1201 = $tmp1198.value;
int64_t $tmp1202 = $tmp1200.value;
int64_t $tmp1203 = $tmp1201 + $tmp1202;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {$tmp1203};
org$frostlang$frostc$ASTNode* $tmp1205 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1206 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1204;
block18:;
frost$core$Int64 $tmp1207 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:339:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1208 = $tmp1108.value;
int64_t $tmp1209 = $tmp1207.value;
bool $tmp1210 = $tmp1208 == $tmp1209;
frost$core$Bit $tmp1211 = frost$core$Bit$init$builtin_bit($tmp1210);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:340
frost$core$Int64 $tmp1213 = (frost$core$Int64) {1};
return $tmp1213;
block21:;
frost$core$Int64 $tmp1214 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:342:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1215 = $tmp1108.value;
int64_t $tmp1216 = $tmp1214.value;
bool $tmp1217 = $tmp1215 == $tmp1216;
frost$core$Bit $tmp1218 = frost$core$Bit$init$builtin_bit($tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp1220 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1221 = *$tmp1220;
org$frostlang$frostc$FixedArray** $tmp1222 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1223 = *$tmp1222;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
org$frostlang$frostc$FixedArray* $tmp1224 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local6) = $tmp1223;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:343
frost$core$Int64 $tmp1225 = (frost$core$Int64) {0};
*(&local7) = $tmp1225;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:344
org$frostlang$frostc$FixedArray* $tmp1226 = *(&local6);
ITable* $tmp1227 = ((frost$collections$Iterable*) $tmp1226)->$class->itable;
while ($tmp1227->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1227 = $tmp1227->next;
}
$fn1229 $tmp1228 = $tmp1227->methods[0];
frost$collections$Iterator* $tmp1230 = $tmp1228(((frost$collections$Iterable*) $tmp1226));
goto block26;
block26:;
ITable* $tmp1231 = $tmp1230->$class->itable;
while ($tmp1231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1231 = $tmp1231->next;
}
$fn1233 $tmp1232 = $tmp1231->methods[0];
frost$core$Bit $tmp1234 = $tmp1232($tmp1230);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block28; else goto block27;
block27:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1236 = $tmp1230->$class->itable;
while ($tmp1236->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1236 = $tmp1236->next;
}
$fn1238 $tmp1237 = $tmp1236->methods[1];
frost$core$Object* $tmp1239 = $tmp1237($tmp1230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1239)));
org$frostlang$frostc$ASTNode* $tmp1240 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1239);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:345
frost$core$Int64 $tmp1241 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp1242 = *(&local8);
frost$core$Int64 $tmp1243 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1242);
int64_t $tmp1244 = $tmp1241.value;
int64_t $tmp1245 = $tmp1243.value;
int64_t $tmp1246 = $tmp1244 + $tmp1245;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {$tmp1246};
*(&local7) = $tmp1247;
frost$core$Frost$unref$frost$core$Object$Q($tmp1239);
org$frostlang$frostc$ASTNode* $tmp1248 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:347
frost$core$Int64 $tmp1249 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1250 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1249;
block24:;
frost$core$Int64 $tmp1251 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:349:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1252 = $tmp1108.value;
int64_t $tmp1253 = $tmp1251.value;
bool $tmp1254 = $tmp1252 == $tmp1253;
frost$core$Bit $tmp1255 = frost$core$Bit$init$builtin_bit($tmp1254);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:350
frost$core$Int64 $tmp1257 = (frost$core$Int64) {1};
return $tmp1257;
block30:;
frost$core$Int64 $tmp1258 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:352:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1259 = $tmp1108.value;
int64_t $tmp1260 = $tmp1258.value;
bool $tmp1261 = $tmp1259 == $tmp1260;
frost$core$Bit $tmp1262 = frost$core$Bit$init$builtin_bit($tmp1261);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp1264 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1265 = *$tmp1264;
org$frostlang$frostc$ASTNode** $tmp1266 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1267 = *$tmp1266;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
org$frostlang$frostc$ASTNode* $tmp1268 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local9) = $tmp1267;
org$frostlang$frostc$FixedArray** $tmp1269 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1270 = *$tmp1269;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
org$frostlang$frostc$FixedArray* $tmp1271 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local10) = $tmp1270;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:353
org$frostlang$frostc$ASTNode* $tmp1272 = *(&local9);
frost$core$Int64 $tmp1273 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1272);
*(&local11) = $tmp1273;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:354
org$frostlang$frostc$FixedArray* $tmp1274 = *(&local10);
ITable* $tmp1275 = ((frost$collections$Iterable*) $tmp1274)->$class->itable;
while ($tmp1275->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[0];
frost$collections$Iterator* $tmp1278 = $tmp1276(((frost$collections$Iterable*) $tmp1274));
goto block35;
block35:;
ITable* $tmp1279 = $tmp1278->$class->itable;
while ($tmp1279->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1279 = $tmp1279->next;
}
$fn1281 $tmp1280 = $tmp1279->methods[0];
frost$core$Bit $tmp1282 = $tmp1280($tmp1278);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block37; else goto block36;
block36:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1284 = $tmp1278->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[1];
frost$core$Object* $tmp1287 = $tmp1285($tmp1278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1287)));
org$frostlang$frostc$ASTNode* $tmp1288 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1287);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:355
frost$core$Int64 $tmp1289 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1290 = *(&local12);
frost$core$Int64 $tmp1291 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1290);
int64_t $tmp1292 = $tmp1289.value;
int64_t $tmp1293 = $tmp1291.value;
int64_t $tmp1294 = $tmp1292 + $tmp1293;
frost$core$Int64 $tmp1295 = (frost$core$Int64) {$tmp1294};
*(&local11) = $tmp1295;
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$ASTNode* $tmp1296 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1296));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:357
frost$core$Int64 $tmp1297 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1298 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1299 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1297;
block33:;
frost$core$Int64 $tmp1300 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:359:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1301 = $tmp1108.value;
int64_t $tmp1302 = $tmp1300.value;
bool $tmp1303 = $tmp1301 == $tmp1302;
frost$core$Bit $tmp1304 = frost$core$Bit$init$builtin_bit($tmp1303);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp1306 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1307 = *$tmp1306;
org$frostlang$frostc$ASTNode** $tmp1308 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1309 = *$tmp1308;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local13) = $tmp1309;
org$frostlang$frostc$ChoiceCase** $tmp1311 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1312 = *$tmp1311;
frost$core$Int64* $tmp1313 = (frost$core$Int64*) (param1->$data + 40);
frost$core$Int64 $tmp1314 = *$tmp1313;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:360
org$frostlang$frostc$ASTNode* $tmp1315 = *(&local13);
frost$core$Int64 $tmp1316 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1315);
org$frostlang$frostc$ASTNode* $tmp1317 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1316;
block39:;
frost$core$Int64 $tmp1318 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:362:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1319 = $tmp1108.value;
int64_t $tmp1320 = $tmp1318.value;
bool $tmp1321 = $tmp1319 == $tmp1320;
frost$core$Bit $tmp1322 = frost$core$Bit$init$builtin_bit($tmp1321);
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:363
frost$core$Int64 $tmp1324 = (frost$core$Int64) {1};
return $tmp1324;
block42:;
frost$core$Int64 $tmp1325 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1326 = $tmp1108.value;
int64_t $tmp1327 = $tmp1325.value;
bool $tmp1328 = $tmp1326 == $tmp1327;
frost$core$Bit $tmp1329 = frost$core$Bit$init$builtin_bit($tmp1328);
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1331 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1332 = *$tmp1331;
org$frostlang$frostc$ASTNode** $tmp1333 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1334 = *$tmp1333;
org$frostlang$frostc$ASTNode** $tmp1335 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1336 = *$tmp1335;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$ASTNode* $tmp1337 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local14) = $tmp1336;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:366
org$frostlang$frostc$ASTNode* $tmp1338 = *(&local14);
frost$core$Bit $tmp1339 = frost$core$Bit$init$builtin_bit($tmp1338 == NULL);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:367
frost$core$Int64 $tmp1341 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1342 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1341;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:369
org$frostlang$frostc$ASTNode* $tmp1343 = *(&local14);
frost$core$Int64 $tmp1344 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1343);
org$frostlang$frostc$ASTNode* $tmp1345 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1344;
block45:;
frost$core$Int64 $tmp1346 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:371:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1347 = $tmp1108.value;
int64_t $tmp1348 = $tmp1346.value;
bool $tmp1349 = $tmp1347 == $tmp1348;
frost$core$Bit $tmp1350 = frost$core$Bit$init$builtin_bit($tmp1349);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Position* $tmp1352 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1353 = *$tmp1352;
frost$core$String** $tmp1354 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1355 = *$tmp1354;
org$frostlang$frostc$FixedArray** $tmp1356 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1357 = *$tmp1356;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
org$frostlang$frostc$FixedArray* $tmp1358 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local15) = $tmp1357;
org$frostlang$frostc$ASTNode** $tmp1359 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1360 = *$tmp1359;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
org$frostlang$frostc$ASTNode* $tmp1361 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
*(&local16) = $tmp1360;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:372
org$frostlang$frostc$ASTNode* $tmp1362 = *(&local16);
frost$core$Int64 $tmp1363 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1362);
*(&local17) = $tmp1363;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:373
org$frostlang$frostc$FixedArray* $tmp1364 = *(&local15);
ITable* $tmp1365 = ((frost$collections$Iterable*) $tmp1364)->$class->itable;
while ($tmp1365->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1365 = $tmp1365->next;
}
$fn1367 $tmp1366 = $tmp1365->methods[0];
frost$collections$Iterator* $tmp1368 = $tmp1366(((frost$collections$Iterable*) $tmp1364));
goto block52;
block52:;
ITable* $tmp1369 = $tmp1368->$class->itable;
while ($tmp1369->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1369 = $tmp1369->next;
}
$fn1371 $tmp1370 = $tmp1369->methods[0];
frost$core$Bit $tmp1372 = $tmp1370($tmp1368);
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block54; else goto block53;
block53:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1374 = $tmp1368->$class->itable;
while ($tmp1374->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1374 = $tmp1374->next;
}
$fn1376 $tmp1375 = $tmp1374->methods[1];
frost$core$Object* $tmp1377 = $tmp1375($tmp1368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1377)));
org$frostlang$frostc$ASTNode* $tmp1378 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1377);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:374
frost$core$Int64 $tmp1379 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1380 = *(&local18);
frost$core$Int64 $tmp1381 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1380);
int64_t $tmp1382 = $tmp1379.value;
int64_t $tmp1383 = $tmp1381.value;
int64_t $tmp1384 = $tmp1382 + $tmp1383;
frost$core$Int64 $tmp1385 = (frost$core$Int64) {$tmp1384};
*(&local17) = $tmp1385;
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
org$frostlang$frostc$ASTNode* $tmp1386 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:376
frost$core$Int64 $tmp1387 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1388 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1389 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1387;
block50:;
frost$core$Int64 $tmp1390 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:378:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1391 = $tmp1108.value;
int64_t $tmp1392 = $tmp1390.value;
bool $tmp1393 = $tmp1391 == $tmp1392;
frost$core$Bit $tmp1394 = frost$core$Bit$init$builtin_bit($tmp1393);
bool $tmp1395 = $tmp1394.value;
if ($tmp1395) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1396 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1397 = *$tmp1396;
org$frostlang$frostc$ASTNode** $tmp1398 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1399 = *$tmp1398;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
org$frostlang$frostc$ASTNode* $tmp1400 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local19) = $tmp1399;
frost$core$String** $tmp1401 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1402 = *$tmp1401;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:379
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local19);
frost$core$Int64 $tmp1404 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1403);
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1404;
block56:;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:381:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1407 = $tmp1108.value;
int64_t $tmp1408 = $tmp1406.value;
bool $tmp1409 = $tmp1407 == $tmp1408;
frost$core$Bit $tmp1410 = frost$core$Bit$init$builtin_bit($tmp1409);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp1412 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1413 = *$tmp1412;
org$frostlang$frostc$ASTNode** $tmp1414 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1415 = *$tmp1414;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
org$frostlang$frostc$ASTNode* $tmp1416 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
*(&local20) = $tmp1415;
frost$core$String** $tmp1417 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1418 = *$tmp1417;
org$frostlang$frostc$FixedArray** $tmp1419 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1420 = *$tmp1419;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:382
org$frostlang$frostc$ASTNode* $tmp1421 = *(&local20);
frost$core$Int64 $tmp1422 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1421);
org$frostlang$frostc$ASTNode* $tmp1423 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1422;
block59:;
frost$core$Int64 $tmp1424 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:384:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1425 = $tmp1108.value;
int64_t $tmp1426 = $tmp1424.value;
bool $tmp1427 = $tmp1425 == $tmp1426;
frost$core$Bit $tmp1428 = frost$core$Bit$init$builtin_bit($tmp1427);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Position* $tmp1430 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1431 = *$tmp1430;
frost$core$String** $tmp1432 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1433 = *$tmp1432;
org$frostlang$frostc$ASTNode** $tmp1434 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1435 = *$tmp1434;
org$frostlang$frostc$ASTNode** $tmp1436 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1437 = *$tmp1436;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local21) = $tmp1437;
org$frostlang$frostc$FixedArray** $tmp1439 = (org$frostlang$frostc$FixedArray**) (param1->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1440 = *$tmp1439;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
org$frostlang$frostc$FixedArray* $tmp1441 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local22) = $tmp1440;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:385
org$frostlang$frostc$ASTNode* $tmp1442 = *(&local21);
frost$core$Int64 $tmp1443 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1442);
*(&local23) = $tmp1443;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:386
org$frostlang$frostc$FixedArray* $tmp1444 = *(&local22);
ITable* $tmp1445 = ((frost$collections$Iterable*) $tmp1444)->$class->itable;
while ($tmp1445->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1445 = $tmp1445->next;
}
$fn1447 $tmp1446 = $tmp1445->methods[0];
frost$collections$Iterator* $tmp1448 = $tmp1446(((frost$collections$Iterable*) $tmp1444));
goto block64;
block64:;
ITable* $tmp1449 = $tmp1448->$class->itable;
while ($tmp1449->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[0];
frost$core$Bit $tmp1452 = $tmp1450($tmp1448);
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block66; else goto block65;
block65:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1454 = $tmp1448->$class->itable;
while ($tmp1454->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1454 = $tmp1454->next;
}
$fn1456 $tmp1455 = $tmp1454->methods[1];
frost$core$Object* $tmp1457 = $tmp1455($tmp1448);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1457)));
org$frostlang$frostc$ASTNode* $tmp1458 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1457);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:387
frost$core$Int64 $tmp1459 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1460 = *(&local24);
frost$core$Int64 $tmp1461 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1460);
int64_t $tmp1462 = $tmp1459.value;
int64_t $tmp1463 = $tmp1461.value;
int64_t $tmp1464 = $tmp1462 + $tmp1463;
frost$core$Int64 $tmp1465 = (frost$core$Int64) {$tmp1464};
*(&local23) = $tmp1465;
frost$core$Frost$unref$frost$core$Object$Q($tmp1457);
org$frostlang$frostc$ASTNode* $tmp1466 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block64;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:389
frost$core$Int64 $tmp1467 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1468 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1469 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1467;
block62:;
frost$core$Int64 $tmp1470 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:391:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1471 = $tmp1108.value;
int64_t $tmp1472 = $tmp1470.value;
bool $tmp1473 = $tmp1471 == $tmp1472;
frost$core$Bit $tmp1474 = frost$core$Bit$init$builtin_bit($tmp1473);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:392
frost$core$Int64 $tmp1476 = (frost$core$Int64) {0};
return $tmp1476;
block68:;
frost$core$Int64 $tmp1477 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:394:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1478 = $tmp1108.value;
int64_t $tmp1479 = $tmp1477.value;
bool $tmp1480 = $tmp1478 == $tmp1479;
frost$core$Bit $tmp1481 = frost$core$Bit$init$builtin_bit($tmp1480);
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:395
frost$core$Int64 $tmp1483 = (frost$core$Int64) {1};
return $tmp1483;
block71:;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {24};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:397:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1485 = $tmp1108.value;
int64_t $tmp1486 = $tmp1484.value;
bool $tmp1487 = $tmp1485 == $tmp1486;
frost$core$Bit $tmp1488 = frost$core$Bit$init$builtin_bit($tmp1487);
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1490 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1491 = *$tmp1490;
org$frostlang$frostc$ASTNode** $tmp1492 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1493 = *$tmp1492;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
org$frostlang$frostc$ASTNode* $tmp1494 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local25) = $tmp1493;
org$frostlang$frostc$FixedArray** $tmp1495 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1496 = *$tmp1495;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
org$frostlang$frostc$FixedArray* $tmp1497 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local26) = $tmp1496;
org$frostlang$frostc$ASTNode** $tmp1498 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1499 = *$tmp1498;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
org$frostlang$frostc$ASTNode* $tmp1500 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local27) = $tmp1499;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:398
org$frostlang$frostc$ASTNode* $tmp1501 = *(&local25);
frost$core$Int64 $tmp1502 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1501);
*(&local28) = $tmp1502;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:399
org$frostlang$frostc$FixedArray* $tmp1503 = *(&local26);
ITable* $tmp1504 = ((frost$collections$Iterable*) $tmp1503)->$class->itable;
while ($tmp1504->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1504 = $tmp1504->next;
}
$fn1506 $tmp1505 = $tmp1504->methods[0];
frost$collections$Iterator* $tmp1507 = $tmp1505(((frost$collections$Iterable*) $tmp1503));
goto block76;
block76:;
ITable* $tmp1508 = $tmp1507->$class->itable;
while ($tmp1508->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1508 = $tmp1508->next;
}
$fn1510 $tmp1509 = $tmp1508->methods[0];
frost$core$Bit $tmp1511 = $tmp1509($tmp1507);
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block78; else goto block77;
block77:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1513 = $tmp1507->$class->itable;
while ($tmp1513->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1513 = $tmp1513->next;
}
$fn1515 $tmp1514 = $tmp1513->methods[1];
frost$core$Object* $tmp1516 = $tmp1514($tmp1507);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1516)));
org$frostlang$frostc$ASTNode* $tmp1517 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1516);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:400
frost$core$Int64 $tmp1518 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1519 = *(&local29);
frost$core$Int64 $tmp1520 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1519);
int64_t $tmp1521 = $tmp1518.value;
int64_t $tmp1522 = $tmp1520.value;
int64_t $tmp1523 = $tmp1521 + $tmp1522;
frost$core$Int64 $tmp1524 = (frost$core$Int64) {$tmp1523};
*(&local28) = $tmp1524;
frost$core$Frost$unref$frost$core$Object$Q($tmp1516);
org$frostlang$frostc$ASTNode* $tmp1525 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:402
org$frostlang$frostc$ASTNode* $tmp1526 = *(&local27);
frost$core$Bit $tmp1527 = frost$core$Bit$init$builtin_bit($tmp1526 != NULL);
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:403
frost$core$Int64 $tmp1529 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1530 = *(&local27);
frost$core$Int64 $tmp1531 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1530);
int64_t $tmp1532 = $tmp1529.value;
int64_t $tmp1533 = $tmp1531.value;
int64_t $tmp1534 = $tmp1532 + $tmp1533;
frost$core$Int64 $tmp1535 = (frost$core$Int64) {$tmp1534};
*(&local28) = $tmp1535;
goto block80;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:405
frost$core$Int64 $tmp1536 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1537 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1538 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1539 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1539));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1536;
block74:;
frost$core$Int64 $tmp1540 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:407:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1541 = $tmp1108.value;
int64_t $tmp1542 = $tmp1540.value;
bool $tmp1543 = $tmp1541 == $tmp1542;
frost$core$Bit $tmp1544 = frost$core$Bit$init$builtin_bit($tmp1543);
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:408
frost$core$Int64 $tmp1546 = (frost$core$Int64) {1};
return $tmp1546;
block82:;
frost$core$Int64 $tmp1547 = (frost$core$Int64) {27};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:410:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1548 = $tmp1108.value;
int64_t $tmp1549 = $tmp1547.value;
bool $tmp1550 = $tmp1548 == $tmp1549;
frost$core$Bit $tmp1551 = frost$core$Bit$init$builtin_bit($tmp1550);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp1553 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1554 = *$tmp1553;
frost$core$String** $tmp1555 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1556 = *$tmp1555;
org$frostlang$frostc$FixedArray** $tmp1557 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1558 = *$tmp1557;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
org$frostlang$frostc$FixedArray* $tmp1559 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
*(&local30) = $tmp1558;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:411
frost$core$Int64 $tmp1560 = (frost$core$Int64) {0};
*(&local31) = $tmp1560;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:412
org$frostlang$frostc$FixedArray* $tmp1561 = *(&local30);
ITable* $tmp1562 = ((frost$collections$Iterable*) $tmp1561)->$class->itable;
while ($tmp1562->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1562 = $tmp1562->next;
}
$fn1564 $tmp1563 = $tmp1562->methods[0];
frost$collections$Iterator* $tmp1565 = $tmp1563(((frost$collections$Iterable*) $tmp1561));
goto block87;
block87:;
ITable* $tmp1566 = $tmp1565->$class->itable;
while ($tmp1566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1566 = $tmp1566->next;
}
$fn1568 $tmp1567 = $tmp1566->methods[0];
frost$core$Bit $tmp1569 = $tmp1567($tmp1565);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block89; else goto block88;
block88:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1571 = $tmp1565->$class->itable;
while ($tmp1571->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1571 = $tmp1571->next;
}
$fn1573 $tmp1572 = $tmp1571->methods[1];
frost$core$Object* $tmp1574 = $tmp1572($tmp1565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1574)));
org$frostlang$frostc$ASTNode* $tmp1575 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1574);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:413
frost$core$Int64 $tmp1576 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1577 = *(&local32);
frost$core$Int64 $tmp1578 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1577);
int64_t $tmp1579 = $tmp1576.value;
int64_t $tmp1580 = $tmp1578.value;
int64_t $tmp1581 = $tmp1579 + $tmp1580;
frost$core$Int64 $tmp1582 = (frost$core$Int64) {$tmp1581};
*(&local31) = $tmp1582;
frost$core$Frost$unref$frost$core$Object$Q($tmp1574);
org$frostlang$frostc$ASTNode* $tmp1583 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:415
frost$core$Int64 $tmp1584 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1585 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1584;
block85:;
frost$core$Int64 $tmp1586 = (frost$core$Int64) {28};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:417:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1587 = $tmp1108.value;
int64_t $tmp1588 = $tmp1586.value;
bool $tmp1589 = $tmp1587 == $tmp1588;
frost$core$Bit $tmp1590 = frost$core$Bit$init$builtin_bit($tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1592 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1593 = *$tmp1592;
org$frostlang$frostc$ASTNode** $tmp1594 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1595 = *$tmp1594;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
org$frostlang$frostc$ASTNode* $tmp1596 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1596));
*(&local33) = $tmp1595;
org$frostlang$frostc$FixedArray** $tmp1597 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1598 = *$tmp1597;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
org$frostlang$frostc$FixedArray* $tmp1599 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local34) = $tmp1598;
org$frostlang$frostc$FixedArray** $tmp1600 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1601 = *$tmp1600;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
org$frostlang$frostc$FixedArray* $tmp1602 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
*(&local35) = $tmp1601;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:418
org$frostlang$frostc$ASTNode* $tmp1603 = *(&local33);
frost$core$Int64 $tmp1604 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1603);
*(&local36) = $tmp1604;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:419
org$frostlang$frostc$FixedArray* $tmp1605 = *(&local34);
ITable* $tmp1606 = ((frost$collections$Iterable*) $tmp1605)->$class->itable;
while ($tmp1606->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1606 = $tmp1606->next;
}
$fn1608 $tmp1607 = $tmp1606->methods[0];
frost$collections$Iterator* $tmp1609 = $tmp1607(((frost$collections$Iterable*) $tmp1605));
goto block93;
block93:;
ITable* $tmp1610 = $tmp1609->$class->itable;
while ($tmp1610->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1610 = $tmp1610->next;
}
$fn1612 $tmp1611 = $tmp1610->methods[0];
frost$core$Bit $tmp1613 = $tmp1611($tmp1609);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block95; else goto block94;
block94:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1615 = $tmp1609->$class->itable;
while ($tmp1615->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1615 = $tmp1615->next;
}
$fn1617 $tmp1616 = $tmp1615->methods[1];
frost$core$Object* $tmp1618 = $tmp1616($tmp1609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1618)));
org$frostlang$frostc$ASTNode* $tmp1619 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1618);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:420
frost$core$Int64 $tmp1620 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1621 = *(&local37);
frost$core$Int64 $tmp1622 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1621);
int64_t $tmp1623 = $tmp1620.value;
int64_t $tmp1624 = $tmp1622.value;
int64_t $tmp1625 = $tmp1623 + $tmp1624;
frost$core$Int64 $tmp1626 = (frost$core$Int64) {$tmp1625};
*(&local36) = $tmp1626;
frost$core$Frost$unref$frost$core$Object$Q($tmp1618);
org$frostlang$frostc$ASTNode* $tmp1627 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:422
org$frostlang$frostc$FixedArray* $tmp1628 = *(&local35);
frost$core$Bit $tmp1629 = frost$core$Bit$init$builtin_bit($tmp1628 != NULL);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:423
org$frostlang$frostc$FixedArray* $tmp1631 = *(&local35);
ITable* $tmp1632 = ((frost$collections$Iterable*) $tmp1631)->$class->itable;
while ($tmp1632->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1632 = $tmp1632->next;
}
$fn1634 $tmp1633 = $tmp1632->methods[0];
frost$collections$Iterator* $tmp1635 = $tmp1633(((frost$collections$Iterable*) $tmp1631));
goto block98;
block98:;
ITable* $tmp1636 = $tmp1635->$class->itable;
while ($tmp1636->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1636 = $tmp1636->next;
}
$fn1638 $tmp1637 = $tmp1636->methods[0];
frost$core$Bit $tmp1639 = $tmp1637($tmp1635);
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block100; else goto block99;
block99:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1641 = $tmp1635->$class->itable;
while ($tmp1641->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1641 = $tmp1641->next;
}
$fn1643 $tmp1642 = $tmp1641->methods[1];
frost$core$Object* $tmp1644 = $tmp1642($tmp1635);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1644)));
org$frostlang$frostc$ASTNode* $tmp1645 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1644);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:424
frost$core$Int64 $tmp1646 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1647 = *(&local38);
frost$core$Int64 $tmp1648 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1647);
int64_t $tmp1649 = $tmp1646.value;
int64_t $tmp1650 = $tmp1648.value;
int64_t $tmp1651 = $tmp1649 + $tmp1650;
frost$core$Int64 $tmp1652 = (frost$core$Int64) {$tmp1651};
*(&local36) = $tmp1652;
frost$core$Frost$unref$frost$core$Object$Q($tmp1644);
org$frostlang$frostc$ASTNode* $tmp1653 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block98;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:427
frost$core$Int64 $tmp1654 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1655 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1656 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1657 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1654;
block91:;
frost$core$Int64 $tmp1658 = (frost$core$Int64) {29};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1659 = $tmp1108.value;
int64_t $tmp1660 = $tmp1658.value;
bool $tmp1661 = $tmp1659 == $tmp1660;
frost$core$Bit $tmp1662 = frost$core$Bit$init$builtin_bit($tmp1661);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:430
frost$core$Int64 $tmp1664 = (frost$core$Int64) {10};
frost$core$Int64 $tmp1665 = (frost$core$Int64) {1};
int64_t $tmp1666 = $tmp1664.value;
int64_t $tmp1667 = $tmp1665.value;
int64_t $tmp1668 = $tmp1666 + $tmp1667;
frost$core$Int64 $tmp1669 = (frost$core$Int64) {$tmp1668};
return $tmp1669;
block102:;
frost$core$Int64 $tmp1670 = (frost$core$Int64) {31};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1671 = $tmp1108.value;
int64_t $tmp1672 = $tmp1670.value;
bool $tmp1673 = $tmp1671 == $tmp1672;
frost$core$Bit $tmp1674 = frost$core$Bit$init$builtin_bit($tmp1673);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:433
frost$core$Int64 $tmp1676 = (frost$core$Int64) {1};
return $tmp1676;
block105:;
frost$core$Int64 $tmp1677 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1678 = $tmp1108.value;
int64_t $tmp1679 = $tmp1677.value;
bool $tmp1680 = $tmp1678 == $tmp1679;
frost$core$Bit $tmp1681 = frost$core$Bit$init$builtin_bit($tmp1680);
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:436
frost$core$Int64 $tmp1683 = (frost$core$Int64) {0};
return $tmp1683;
block108:;
frost$core$Int64 $tmp1684 = (frost$core$Int64) {35};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:438:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1685 = $tmp1108.value;
int64_t $tmp1686 = $tmp1684.value;
bool $tmp1687 = $tmp1685 == $tmp1686;
frost$core$Bit $tmp1688 = frost$core$Bit$init$builtin_bit($tmp1687);
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:439
frost$core$Int64 $tmp1690 = (frost$core$Int64) {1};
return $tmp1690;
block111:;
frost$core$Int64 $tmp1691 = (frost$core$Int64) {36};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:441:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1692 = $tmp1108.value;
int64_t $tmp1693 = $tmp1691.value;
bool $tmp1694 = $tmp1692 == $tmp1693;
frost$core$Bit $tmp1695 = frost$core$Bit$init$builtin_bit($tmp1694);
bool $tmp1696 = $tmp1695.value;
if ($tmp1696) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:442
frost$core$Int64 $tmp1697 = (frost$core$Int64) {1};
return $tmp1697;
block114:;
frost$core$Int64 $tmp1698 = (frost$core$Int64) {37};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:444:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1699 = $tmp1108.value;
int64_t $tmp1700 = $tmp1698.value;
bool $tmp1701 = $tmp1699 == $tmp1700;
frost$core$Bit $tmp1702 = frost$core$Bit$init$builtin_bit($tmp1701);
bool $tmp1703 = $tmp1702.value;
if ($tmp1703) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:445
frost$core$Int64 $tmp1704 = (frost$core$Int64) {1};
return $tmp1704;
block117:;
frost$core$Int64 $tmp1705 = (frost$core$Int64) {38};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:447:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1706 = $tmp1108.value;
int64_t $tmp1707 = $tmp1705.value;
bool $tmp1708 = $tmp1706 == $tmp1707;
frost$core$Bit $tmp1709 = frost$core$Bit$init$builtin_bit($tmp1708);
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1711 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1712 = *$tmp1711;
org$frostlang$frostc$ASTNode** $tmp1713 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1714 = *$tmp1713;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
org$frostlang$frostc$ASTNode* $tmp1715 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local39) = $tmp1714;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:448
org$frostlang$frostc$ASTNode* $tmp1716 = *(&local39);
frost$core$Bit $tmp1717 = frost$core$Bit$init$builtin_bit($tmp1716 == NULL);
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:449
frost$core$Int64 $tmp1719 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1720 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1719;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:451
org$frostlang$frostc$ASTNode* $tmp1721 = *(&local39);
frost$core$Int64 $tmp1722 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1721);
org$frostlang$frostc$ASTNode* $tmp1723 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1722;
block120:;
frost$core$Int64 $tmp1724 = (frost$core$Int64) {39};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:453:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1725 = $tmp1108.value;
int64_t $tmp1726 = $tmp1724.value;
bool $tmp1727 = $tmp1725 == $tmp1726;
frost$core$Bit $tmp1728 = frost$core$Bit$init$builtin_bit($tmp1727);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:454
frost$core$Int64 $tmp1730 = (frost$core$Int64) {1};
return $tmp1730;
block125:;
frost$core$Int64 $tmp1731 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:456:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1732 = $tmp1108.value;
int64_t $tmp1733 = $tmp1731.value;
bool $tmp1734 = $tmp1732 == $tmp1733;
frost$core$Bit $tmp1735 = frost$core$Bit$init$builtin_bit($tmp1734);
bool $tmp1736 = $tmp1735.value;
if ($tmp1736) goto block127; else goto block128;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:457
frost$core$Int64 $tmp1737 = (frost$core$Int64) {1};
return $tmp1737;
block128:;
frost$core$Int64 $tmp1738 = (frost$core$Int64) {41};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:459:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1739 = $tmp1108.value;
int64_t $tmp1740 = $tmp1738.value;
bool $tmp1741 = $tmp1739 == $tmp1740;
frost$core$Bit $tmp1742 = frost$core$Bit$init$builtin_bit($tmp1741);
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:460
frost$core$Int64 $tmp1744 = (frost$core$Int64) {1};
return $tmp1744;
block131:;
frost$core$Int64 $tmp1745 = (frost$core$Int64) {42};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:462:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1746 = $tmp1108.value;
int64_t $tmp1747 = $tmp1745.value;
bool $tmp1748 = $tmp1746 == $tmp1747;
frost$core$Bit $tmp1749 = frost$core$Bit$init$builtin_bit($tmp1748);
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:463
frost$core$Int64 $tmp1751 = (frost$core$Int64) {10};
frost$core$Int64 $tmp1752 = (frost$core$Int64) {1};
int64_t $tmp1753 = $tmp1751.value;
int64_t $tmp1754 = $tmp1752.value;
int64_t $tmp1755 = $tmp1753 + $tmp1754;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {$tmp1755};
return $tmp1756;
block134:;
frost$core$Int64 $tmp1757 = (frost$core$Int64) {46};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:465:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1758 = $tmp1108.value;
int64_t $tmp1759 = $tmp1757.value;
bool $tmp1760 = $tmp1758 == $tmp1759;
frost$core$Bit $tmp1761 = frost$core$Bit$init$builtin_bit($tmp1760);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:466
frost$core$Int64 $tmp1763 = (frost$core$Int64) {0};
return $tmp1763;
block137:;
frost$core$Int64 $tmp1764 = (frost$core$Int64) {47};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:468:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1765 = $tmp1108.value;
int64_t $tmp1766 = $tmp1764.value;
bool $tmp1767 = $tmp1765 == $tmp1766;
frost$core$Bit $tmp1768 = frost$core$Bit$init$builtin_bit($tmp1767);
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:469
frost$core$Int64 $tmp1770 = (frost$core$Int64) {10};
frost$core$Int64 $tmp1771 = (frost$core$Int64) {1};
int64_t $tmp1772 = $tmp1770.value;
int64_t $tmp1773 = $tmp1771.value;
int64_t $tmp1774 = $tmp1772 + $tmp1773;
frost$core$Int64 $tmp1775 = (frost$core$Int64) {$tmp1774};
return $tmp1775;
block140:;
frost$core$Int64 $tmp1776 = (frost$core$Int64) {49};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:471:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1777 = $tmp1108.value;
int64_t $tmp1778 = $tmp1776.value;
bool $tmp1779 = $tmp1777 == $tmp1778;
frost$core$Bit $tmp1780 = frost$core$Bit$init$builtin_bit($tmp1779);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1782 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1783 = *$tmp1782;
org$frostlang$frostc$expression$Unary$Operator* $tmp1784 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp1785 = *$tmp1784;
org$frostlang$frostc$ASTNode** $tmp1786 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1787 = *$tmp1786;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
org$frostlang$frostc$ASTNode* $tmp1788 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local40) = $tmp1787;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:472
frost$core$Int64 $tmp1789 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1790 = *(&local40);
frost$core$Int64 $tmp1791 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1790);
int64_t $tmp1792 = $tmp1789.value;
int64_t $tmp1793 = $tmp1791.value;
int64_t $tmp1794 = $tmp1792 + $tmp1793;
frost$core$Int64 $tmp1795 = (frost$core$Int64) {$tmp1794};
org$frostlang$frostc$ASTNode* $tmp1796 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1795;
block143:;
frost$core$Int64 $tmp1797 = (frost$core$Int64) {50};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:474:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1798 = $tmp1108.value;
int64_t $tmp1799 = $tmp1797.value;
bool $tmp1800 = $tmp1798 == $tmp1799;
frost$core$Bit $tmp1801 = frost$core$Bit$init$builtin_bit($tmp1800);
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:475
frost$core$Int64 $tmp1803 = (frost$core$Int64) {0};
return $tmp1803;
block146:;
frost$core$Int64 $tmp1804 = (frost$core$Int64) {51};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:477:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1805 = $tmp1108.value;
int64_t $tmp1806 = $tmp1804.value;
bool $tmp1807 = $tmp1805 == $tmp1806;
frost$core$Bit $tmp1808 = frost$core$Bit$init$builtin_bit($tmp1807);
bool $tmp1809 = $tmp1808.value;
if ($tmp1809) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:478
frost$core$Int64 $tmp1810 = (frost$core$Int64) {10};
frost$core$Int64 $tmp1811 = (frost$core$Int64) {1};
int64_t $tmp1812 = $tmp1810.value;
int64_t $tmp1813 = $tmp1811.value;
int64_t $tmp1814 = $tmp1812 + $tmp1813;
frost$core$Int64 $tmp1815 = (frost$core$Int64) {$tmp1814};
return $tmp1815;
block149:;
frost$core$Int64 $tmp1816 = (frost$core$Int64) {53};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:480:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1817 = $tmp1108.value;
int64_t $tmp1818 = $tmp1816.value;
bool $tmp1819 = $tmp1817 == $tmp1818;
frost$core$Bit $tmp1820 = frost$core$Bit$init$builtin_bit($tmp1819);
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block151; else goto block152;
block151:;
org$frostlang$frostc$Position* $tmp1822 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1823 = *$tmp1822;
org$frostlang$frostc$Variable$Kind* $tmp1824 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp1825 = *$tmp1824;
org$frostlang$frostc$FixedArray** $tmp1826 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1827 = *$tmp1826;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1827));
org$frostlang$frostc$FixedArray* $tmp1828 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
*(&local41) = $tmp1827;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:481
frost$core$Int64 $tmp1829 = (frost$core$Int64) {0};
*(&local42) = $tmp1829;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:482
org$frostlang$frostc$FixedArray* $tmp1830 = *(&local41);
ITable* $tmp1831 = ((frost$collections$Iterable*) $tmp1830)->$class->itable;
while ($tmp1831->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1831 = $tmp1831->next;
}
$fn1833 $tmp1832 = $tmp1831->methods[0];
frost$collections$Iterator* $tmp1834 = $tmp1832(((frost$collections$Iterable*) $tmp1830));
goto block154;
block154:;
ITable* $tmp1835 = $tmp1834->$class->itable;
while ($tmp1835->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1835 = $tmp1835->next;
}
$fn1837 $tmp1836 = $tmp1835->methods[0];
frost$core$Bit $tmp1838 = $tmp1836($tmp1834);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block156; else goto block155;
block155:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1840 = $tmp1834->$class->itable;
while ($tmp1840->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1840 = $tmp1840->next;
}
$fn1842 $tmp1841 = $tmp1840->methods[1];
frost$core$Object* $tmp1843 = $tmp1841($tmp1834);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1843)));
org$frostlang$frostc$ASTNode* $tmp1844 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1843);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:483
frost$core$Int64 $tmp1845 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1846 = *(&local43);
frost$core$Int64 $tmp1847 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1846);
int64_t $tmp1848 = $tmp1845.value;
int64_t $tmp1849 = $tmp1847.value;
int64_t $tmp1850 = $tmp1848 + $tmp1849;
frost$core$Int64 $tmp1851 = (frost$core$Int64) {$tmp1850};
*(&local42) = $tmp1851;
frost$core$Frost$unref$frost$core$Object$Q($tmp1843);
org$frostlang$frostc$ASTNode* $tmp1852 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block154;
block156:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:485
frost$core$Int64 $tmp1853 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1854 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1853;
block152:;
frost$core$Int64 $tmp1855 = (frost$core$Int64) {54};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:487:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1856 = $tmp1108.value;
int64_t $tmp1857 = $tmp1855.value;
bool $tmp1858 = $tmp1856 == $tmp1857;
frost$core$Bit $tmp1859 = frost$core$Bit$init$builtin_bit($tmp1858);
bool $tmp1860 = $tmp1859.value;
if ($tmp1860) goto block157; else goto block158;
block157:;
org$frostlang$frostc$Position* $tmp1861 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1862 = *$tmp1861;
org$frostlang$frostc$FixedArray** $tmp1863 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1864 = *$tmp1863;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
org$frostlang$frostc$FixedArray* $tmp1865 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local44) = $tmp1864;
org$frostlang$frostc$FixedArray** $tmp1866 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1867 = *$tmp1866;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
org$frostlang$frostc$FixedArray* $tmp1868 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
*(&local45) = $tmp1867;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:488
frost$core$Int64 $tmp1869 = (frost$core$Int64) {0};
*(&local46) = $tmp1869;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:489
org$frostlang$frostc$FixedArray* $tmp1870 = *(&local44);
ITable* $tmp1871 = ((frost$collections$Iterable*) $tmp1870)->$class->itable;
while ($tmp1871->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1871 = $tmp1871->next;
}
$fn1873 $tmp1872 = $tmp1871->methods[0];
frost$collections$Iterator* $tmp1874 = $tmp1872(((frost$collections$Iterable*) $tmp1870));
goto block160;
block160:;
ITable* $tmp1875 = $tmp1874->$class->itable;
while ($tmp1875->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1875 = $tmp1875->next;
}
$fn1877 $tmp1876 = $tmp1875->methods[0];
frost$core$Bit $tmp1878 = $tmp1876($tmp1874);
bool $tmp1879 = $tmp1878.value;
if ($tmp1879) goto block162; else goto block161;
block161:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1880 = $tmp1874->$class->itable;
while ($tmp1880->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1880 = $tmp1880->next;
}
$fn1882 $tmp1881 = $tmp1880->methods[1];
frost$core$Object* $tmp1883 = $tmp1881($tmp1874);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1883)));
org$frostlang$frostc$ASTNode* $tmp1884 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1883);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:490
frost$core$Int64 $tmp1885 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1886 = *(&local47);
frost$core$Int64 $tmp1887 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1886);
int64_t $tmp1888 = $tmp1885.value;
int64_t $tmp1889 = $tmp1887.value;
int64_t $tmp1890 = $tmp1888 + $tmp1889;
frost$core$Int64 $tmp1891 = (frost$core$Int64) {$tmp1890};
*(&local46) = $tmp1891;
frost$core$Frost$unref$frost$core$Object$Q($tmp1883);
org$frostlang$frostc$ASTNode* $tmp1892 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block160;
block162:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:492
org$frostlang$frostc$FixedArray* $tmp1893 = *(&local45);
ITable* $tmp1894 = ((frost$collections$Iterable*) $tmp1893)->$class->itable;
while ($tmp1894->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1894 = $tmp1894->next;
}
$fn1896 $tmp1895 = $tmp1894->methods[0];
frost$collections$Iterator* $tmp1897 = $tmp1895(((frost$collections$Iterable*) $tmp1893));
goto block163;
block163:;
ITable* $tmp1898 = $tmp1897->$class->itable;
while ($tmp1898->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1898 = $tmp1898->next;
}
$fn1900 $tmp1899 = $tmp1898->methods[0];
frost$core$Bit $tmp1901 = $tmp1899($tmp1897);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block165; else goto block164;
block164:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1903 = $tmp1897->$class->itable;
while ($tmp1903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1903 = $tmp1903->next;
}
$fn1905 $tmp1904 = $tmp1903->methods[1];
frost$core$Object* $tmp1906 = $tmp1904($tmp1897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1906)));
org$frostlang$frostc$ASTNode* $tmp1907 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1906);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:493
frost$core$Int64 $tmp1908 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1909 = *(&local48);
frost$core$Int64 $tmp1910 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1909);
int64_t $tmp1911 = $tmp1908.value;
int64_t $tmp1912 = $tmp1910.value;
int64_t $tmp1913 = $tmp1911 + $tmp1912;
frost$core$Int64 $tmp1914 = (frost$core$Int64) {$tmp1913};
*(&local46) = $tmp1914;
frost$core$Frost$unref$frost$core$Object$Q($tmp1906);
org$frostlang$frostc$ASTNode* $tmp1915 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block163;
block165:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:495
frost$core$Int64 $tmp1916 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1917 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1918 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1916;
block158:;
frost$core$Int64 $tmp1919 = (frost$core$Int64) {55};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:497:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1920 = $tmp1108.value;
int64_t $tmp1921 = $tmp1919.value;
bool $tmp1922 = $tmp1920 == $tmp1921;
frost$core$Bit $tmp1923 = frost$core$Bit$init$builtin_bit($tmp1922);
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1925 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1926 = *$tmp1925;
frost$core$String** $tmp1927 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1928 = *$tmp1927;
org$frostlang$frostc$ASTNode** $tmp1929 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1930 = *$tmp1929;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1930));
org$frostlang$frostc$ASTNode* $tmp1931 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1931));
*(&local49) = $tmp1930;
org$frostlang$frostc$FixedArray** $tmp1932 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1933 = *$tmp1932;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
org$frostlang$frostc$FixedArray* $tmp1934 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local50) = $tmp1933;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:498
org$frostlang$frostc$ASTNode* $tmp1935 = *(&local49);
frost$core$Int64 $tmp1936 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1935);
*(&local51) = $tmp1936;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:499
org$frostlang$frostc$FixedArray* $tmp1937 = *(&local50);
ITable* $tmp1938 = ((frost$collections$Iterable*) $tmp1937)->$class->itable;
while ($tmp1938->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1938 = $tmp1938->next;
}
$fn1940 $tmp1939 = $tmp1938->methods[0];
frost$collections$Iterator* $tmp1941 = $tmp1939(((frost$collections$Iterable*) $tmp1937));
goto block169;
block169:;
ITable* $tmp1942 = $tmp1941->$class->itable;
while ($tmp1942->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1942 = $tmp1942->next;
}
$fn1944 $tmp1943 = $tmp1942->methods[0];
frost$core$Bit $tmp1945 = $tmp1943($tmp1941);
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block171; else goto block170;
block170:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1947 = $tmp1941->$class->itable;
while ($tmp1947->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1947 = $tmp1947->next;
}
$fn1949 $tmp1948 = $tmp1947->methods[1];
frost$core$Object* $tmp1950 = $tmp1948($tmp1941);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1950)));
org$frostlang$frostc$ASTNode* $tmp1951 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1950);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:500
frost$core$Int64 $tmp1952 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1953 = *(&local52);
frost$core$Int64 $tmp1954 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1953);
int64_t $tmp1955 = $tmp1952.value;
int64_t $tmp1956 = $tmp1954.value;
int64_t $tmp1957 = $tmp1955 + $tmp1956;
frost$core$Int64 $tmp1958 = (frost$core$Int64) {$tmp1957};
*(&local51) = $tmp1958;
frost$core$Frost$unref$frost$core$Object$Q($tmp1950);
org$frostlang$frostc$ASTNode* $tmp1959 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block169;
block171:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:502
frost$core$Int64 $tmp1960 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1961 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1961));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1962 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1960;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:505
frost$core$Int64 $tmp1963 = (frost$core$Int64) {505};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1964, $tmp1963);
abort(); // unreachable
block1:;
goto block172;
block172:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:511
frost$core$Weak** $tmp1965 = &param0->compiler;
frost$core$Weak* $tmp1966 = *$tmp1965;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1967 = &$tmp1966->_valid;
frost$core$Bit $tmp1968 = *$tmp1967;
bool $tmp1969 = $tmp1968.value;
if ($tmp1969) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp1970 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1971, $tmp1970);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1972 = &$tmp1966->value;
frost$core$Object* $tmp1973 = *$tmp1972;
frost$core$Frost$ref$frost$core$Object$Q($tmp1973);
org$frostlang$frostc$Compiler$Settings** $tmp1974 = &((org$frostlang$frostc$Compiler*) $tmp1973)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1975 = *$tmp1974;
frost$core$Int64* $tmp1976 = &$tmp1975->optimizationLevel;
frost$core$Int64 $tmp1977 = *$tmp1976;
frost$core$Int64 $tmp1978 = (frost$core$Int64) {0};
int64_t $tmp1979 = $tmp1977.value;
int64_t $tmp1980 = $tmp1978.value;
bool $tmp1981 = $tmp1979 > $tmp1980;
frost$core$Bit $tmp1982 = (frost$core$Bit) {$tmp1981};
bool $tmp1983 = $tmp1982.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1973);
if ($tmp1983) goto block4; else goto block2;
block4:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Scanner.frost:511:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int64* $tmp1984 = &param1->flags;
frost$core$Int64 $tmp1985 = *$tmp1984;
frost$core$Int64 $tmp1986 = (frost$core$Int64) {1024};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1987 = $tmp1985.value;
int64_t $tmp1988 = $tmp1986.value;
int64_t $tmp1989 = $tmp1987 & $tmp1988;
frost$core$Int64 $tmp1990 = frost$core$Int64$init$builtin_int64($tmp1989);
frost$core$Int64 $tmp1991 = (frost$core$Int64) {0};
int64_t $tmp1992 = $tmp1990.value;
int64_t $tmp1993 = $tmp1991.value;
bool $tmp1994 = $tmp1992 != $tmp1993;
frost$core$Bit $tmp1995 = (frost$core$Bit) {$tmp1994};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:511:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1996 = $tmp1995.value;
bool $tmp1997 = !$tmp1996;
frost$core$Bit $tmp1998 = (frost$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:512:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp2000 = &param1->flags;
frost$core$Int64 $tmp2001 = *$tmp2000;
frost$core$Int64 $tmp2002 = (frost$core$Int64) {256};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2003 = $tmp2001.value;
int64_t $tmp2004 = $tmp2002.value;
int64_t $tmp2005 = $tmp2003 & $tmp2004;
frost$core$Int64 $tmp2006 = frost$core$Int64$init$builtin_int64($tmp2005);
frost$core$Int64 $tmp2007 = (frost$core$Int64) {0};
int64_t $tmp2008 = $tmp2006.value;
int64_t $tmp2009 = $tmp2007.value;
bool $tmp2010 = $tmp2008 != $tmp2009;
frost$core$Bit $tmp2011 = (frost$core$Bit) {$tmp2010};
bool $tmp2012 = $tmp2011.value;
if ($tmp2012) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:513
frost$core$Int64 $tmp2013 = (frost$core$Int64) {0};
*(&local0) = $tmp2013;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:514
ITable* $tmp2014 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp2014->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2014 = $tmp2014->next;
}
$fn2016 $tmp2015 = $tmp2014->methods[0];
frost$collections$Iterator* $tmp2017 = $tmp2015(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp2018 = $tmp2017->$class->itable;
while ($tmp2018->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2018 = $tmp2018->next;
}
$fn2020 $tmp2019 = $tmp2018->methods[0];
frost$core$Bit $tmp2021 = $tmp2019($tmp2017);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block16; else goto block15;
block15:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2023 = $tmp2017->$class->itable;
while ($tmp2023->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2023 = $tmp2023->next;
}
$fn2025 $tmp2024 = $tmp2023->methods[1];
frost$core$Object* $tmp2026 = $tmp2024($tmp2017);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2026)));
org$frostlang$frostc$ASTNode* $tmp2027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp2026);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:515
frost$core$Int64 $tmp2028 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2029 = *(&local1);
frost$core$Int64 $tmp2030 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp2029);
int64_t $tmp2031 = $tmp2028.value;
int64_t $tmp2032 = $tmp2030.value;
int64_t $tmp2033 = $tmp2031 + $tmp2032;
frost$core$Int64 $tmp2034 = (frost$core$Int64) {$tmp2033};
*(&local0) = $tmp2034;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:516
frost$core$Int64 $tmp2035 = *(&local0);
frost$core$Int64 $tmp2036 = (frost$core$Int64) {10};
int64_t $tmp2037 = $tmp2035.value;
int64_t $tmp2038 = $tmp2036.value;
bool $tmp2039 = $tmp2037 > $tmp2038;
frost$core$Bit $tmp2040 = (frost$core$Bit) {$tmp2039};
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:517
frost$core$Bit $tmp2042 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp2026);
org$frostlang$frostc$ASTNode* $tmp2043 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
return $tmp2042;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2026);
org$frostlang$frostc$ASTNode* $tmp2044 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:520
frost$core$Bit $tmp2045 = frost$core$Bit$init$builtin_bit(true);
return $tmp2045;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:522
frost$core$Bit $tmp2046 = frost$core$Bit$init$builtin_bit(false);
return $tmp2046;

}
org$frostlang$frostc$MethodDecl* org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, org$frostlang$frostc$Position param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$FixedArray* param4, org$frostlang$frostc$MethodDecl$Kind param5, frost$core$String* param6, org$frostlang$frostc$FixedArray* param7, org$frostlang$frostc$FixedArray* param8, org$frostlang$frostc$ASTNode* param9, org$frostlang$frostc$FixedArray* param10) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Position local1;
frost$core$String* local2 = NULL;
org$frostlang$frostc$Annotations* local3 = NULL;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$MethodDecl$Kind local5;
frost$collections$Array* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$String* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlang$frostc$Type$Kind local13;
org$frostlang$frostc$Type$Kind local14;
frost$core$String* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$collections$Array* local17 = NULL;
org$frostlang$frostc$ASTNode* local18 = NULL;
frost$core$String* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
org$frostlang$frostc$Type* local21 = NULL;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$MethodDecl$Kind local24;
org$frostlang$frostc$MethodDecl$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
frost$core$Bit local28;
org$frostlang$frostc$ClassDecl$Kind local29;
org$frostlang$frostc$ClassDecl$Kind local30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:529
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:531
frost$core$Bit $tmp2047 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2048 = $tmp2047.value;
if ($tmp2048) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2049 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:535
frost$core$Int64* $tmp2050 = &param3->$rawValue;
frost$core$Int64 $tmp2051 = *$tmp2050;
frost$core$Int64 $tmp2052 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:536:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2053 = $tmp2051.value;
int64_t $tmp2054 = $tmp2052.value;
bool $tmp2055 = $tmp2053 == $tmp2054;
frost$core$Bit $tmp2056 = frost$core$Bit$init$builtin_bit($tmp2055);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2058 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2059 = *$tmp2058;
*(&local1) = $tmp2059;
frost$core$String** $tmp2060 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2061 = *$tmp2060;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$String* $tmp2062 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local2) = $tmp2061;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:537
frost$core$String* $tmp2063 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
frost$core$String* $tmp2064 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local0) = $tmp2063;
frost$core$String* $tmp2065 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:540
frost$core$Int64 $tmp2066 = (frost$core$Int64) {540};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2067, $tmp2066);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:544
org$frostlang$frostc$Annotations* $tmp2068 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
org$frostlang$frostc$Annotations* $tmp2069 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local3) = $tmp2068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:545
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2070;
$tmp2070 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2070->value = param5;
frost$core$Int64 $tmp2071 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:545:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2072 = &(&local5)->$rawValue;
*$tmp2072 = $tmp2071;
org$frostlang$frostc$MethodDecl$Kind $tmp2073 = *(&local5);
*(&local4) = $tmp2073;
org$frostlang$frostc$MethodDecl$Kind $tmp2074 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2075;
$tmp2075 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2075->value = $tmp2074;
ITable* $tmp2076 = ((frost$core$Equatable*) $tmp2070)->$class->itable;
while ($tmp2076->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2076 = $tmp2076->next;
}
$fn2078 $tmp2077 = $tmp2076->methods[1];
frost$core$Bit $tmp2079 = $tmp2077(((frost$core$Equatable*) $tmp2070), ((frost$core$Equatable*) $tmp2075));
bool $tmp2080 = $tmp2079.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2075)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2070)));
if ($tmp2080) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Annotations** $tmp2081 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2082 = *$tmp2081;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:545:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp2083 = &$tmp2082->flags;
frost$core$Int64 $tmp2084 = *$tmp2083;
frost$core$Int64 $tmp2085 = (frost$core$Int64) {256};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2086 = $tmp2084.value;
int64_t $tmp2087 = $tmp2085.value;
int64_t $tmp2088 = $tmp2086 & $tmp2087;
frost$core$Int64 $tmp2089 = frost$core$Int64$init$builtin_int64($tmp2088);
frost$core$Int64 $tmp2090 = (frost$core$Int64) {0};
int64_t $tmp2091 = $tmp2089.value;
int64_t $tmp2092 = $tmp2090.value;
bool $tmp2093 = $tmp2091 != $tmp2092;
frost$core$Bit $tmp2094 = (frost$core$Bit) {$tmp2093};
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block8; else goto block10;
block10:;
org$frostlang$frostc$Annotations* $tmp2096 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Scanner.frost:545:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:107
frost$core$Int64* $tmp2097 = &$tmp2096->flags;
frost$core$Int64 $tmp2098 = *$tmp2097;
frost$core$Int64 $tmp2099 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:107:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2100 = $tmp2098.value;
int64_t $tmp2101 = $tmp2099.value;
int64_t $tmp2102 = $tmp2100 & $tmp2101;
frost$core$Int64 $tmp2103 = frost$core$Int64$init$builtin_int64($tmp2102);
frost$core$Int64 $tmp2104 = (frost$core$Int64) {0};
int64_t $tmp2105 = $tmp2103.value;
int64_t $tmp2106 = $tmp2104.value;
bool $tmp2107 = $tmp2105 != $tmp2106;
frost$core$Bit $tmp2108 = (frost$core$Bit) {$tmp2107};
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:546
org$frostlang$frostc$Annotations* $tmp2110 = *(&local3);
frost$core$Int64* $tmp2111 = &$tmp2110->flags;
frost$core$Int64 $tmp2112 = *$tmp2111;
frost$core$Int64 $tmp2113 = (frost$core$Int64) {256};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:546:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp2114 = $tmp2112.value;
int64_t $tmp2115 = $tmp2113.value;
int64_t $tmp2116 = $tmp2114 | $tmp2115;
frost$core$Int64 $tmp2117 = frost$core$Int64$init$builtin_int64($tmp2116);
frost$core$Int64* $tmp2118 = &$tmp2110->flags;
*$tmp2118 = $tmp2117;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:548
*(&local6) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:549
frost$core$Bit $tmp2119 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp2120 = $tmp2119.value;
if ($tmp2120) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:550
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2121 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$collections$Array* $tmp2122 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local6) = $tmp2121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:551
frost$core$String** $tmp2123 = &param1->name;
frost$core$String* $tmp2124 = *$tmp2123;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:551:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$String* $tmp2125 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2124, &$s2126);
frost$core$String* $tmp2127 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2125, param6);
frost$core$String* $tmp2128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2127, &$s2129);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$String* $tmp2130 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local7) = $tmp2128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:552
ITable* $tmp2131 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp2131->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2131 = $tmp2131->next;
}
$fn2133 $tmp2132 = $tmp2131->methods[0];
frost$collections$Iterator* $tmp2134 = $tmp2132(((frost$collections$Iterable*) param7));
goto block22;
block22:;
ITable* $tmp2135 = $tmp2134->$class->itable;
while ($tmp2135->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2135 = $tmp2135->next;
}
$fn2137 $tmp2136 = $tmp2135->methods[0];
frost$core$Bit $tmp2138 = $tmp2136($tmp2134);
bool $tmp2139 = $tmp2138.value;
if ($tmp2139) goto block24; else goto block23;
block23:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2140 = $tmp2134->$class->itable;
while ($tmp2140->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2140 = $tmp2140->next;
}
$fn2142 $tmp2141 = $tmp2140->methods[1];
frost$core$Object* $tmp2143 = $tmp2141($tmp2134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2143)));
org$frostlang$frostc$ASTNode* $tmp2144 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2144));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp2143);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:553
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:554
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:555
org$frostlang$frostc$ASTNode* $tmp2145 = *(&local8);
frost$core$Int64* $tmp2146 = &$tmp2145->$rawValue;
frost$core$Int64 $tmp2147 = *$tmp2146;
frost$core$Int64 $tmp2148 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:556:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2149 = $tmp2147.value;
int64_t $tmp2150 = $tmp2148.value;
bool $tmp2151 = $tmp2149 == $tmp2150;
frost$core$Bit $tmp2152 = frost$core$Bit$init$builtin_bit($tmp2151);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2154 = (org$frostlang$frostc$Position*) ($tmp2145->$data + 0);
org$frostlang$frostc$Position $tmp2155 = *$tmp2154;
frost$core$String** $tmp2156 = (frost$core$String**) ($tmp2145->$data + 24);
frost$core$String* $tmp2157 = *$tmp2156;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$String* $tmp2158 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local11) = $tmp2157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:557
frost$core$String* $tmp2159 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$String* $tmp2160 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
*(&local9) = $tmp2159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:558
// begin inline call to method org.frostlang.frostc.Type.Any():org.frostlang.frostc.Type from Scanner.frost:558:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2161 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2161);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
frost$collections$Array* $tmp2162 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local12) = $tmp2161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
frost$collections$Array* $tmp2163 = *(&local12);
// begin inline call to method org.frostlang.frostc.Type.Object():org.frostlang.frostc.Type from Type.frost:274:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2164 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2165 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2166 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2165);
org$frostlang$frostc$Position $tmp2167 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2168 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2164, &$s2169, $tmp2166, $tmp2167, $tmp2168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$collections$Array$add$frost$collections$Array$T($tmp2163, ((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:275
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2170 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2171 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2172 = &(&local14)->$rawValue;
*$tmp2172 = $tmp2171;
org$frostlang$frostc$Type$Kind $tmp2173 = *(&local14);
*(&local13) = $tmp2173;
org$frostlang$frostc$Type$Kind $tmp2174 = *(&local13);
org$frostlang$frostc$Position $tmp2175 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp2176 = *(&local12);
frost$core$Bit $tmp2177 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp2170, &$s2178, $tmp2174, $tmp2175, ((frost$collections$ListView*) $tmp2176), $tmp2177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$collections$Array* $tmp2179 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
org$frostlang$frostc$Type* $tmp2180 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local10) = $tmp2170;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
frost$core$String* $tmp2181 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local11) = ((frost$core$String*) NULL);
goto block25;
block27:;
frost$core$Int64 $tmp2182 = (frost$core$Int64) {48};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:560:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2183 = $tmp2147.value;
int64_t $tmp2184 = $tmp2182.value;
bool $tmp2185 = $tmp2183 == $tmp2184;
frost$core$Bit $tmp2186 = frost$core$Bit$init$builtin_bit($tmp2185);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp2188 = (org$frostlang$frostc$Position*) ($tmp2145->$data + 0);
org$frostlang$frostc$Position $tmp2189 = *$tmp2188;
frost$core$String** $tmp2190 = (frost$core$String**) ($tmp2145->$data + 24);
frost$core$String* $tmp2191 = *$tmp2190;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
frost$core$String* $tmp2192 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
*(&local15) = $tmp2191;
org$frostlang$frostc$ASTNode** $tmp2193 = (org$frostlang$frostc$ASTNode**) ($tmp2145->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2194 = *$tmp2193;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
org$frostlang$frostc$ASTNode* $tmp2195 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
*(&local16) = $tmp2194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:561
frost$core$String* $tmp2196 = *(&local15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$String* $tmp2197 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2197));
*(&local9) = $tmp2196;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:562
org$frostlang$frostc$ASTNode* $tmp2198 = *(&local16);
org$frostlang$frostc$Type* $tmp2199 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
org$frostlang$frostc$Type* $tmp2200 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local10) = $tmp2199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2199));
org$frostlang$frostc$ASTNode* $tmp2201 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2202 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local15) = ((frost$core$String*) NULL);
goto block25;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:565
frost$core$Int64 $tmp2203 = (frost$core$Int64) {565};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2204, $tmp2203);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:568
frost$collections$Array* $tmp2205 = *(&local6);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$MethodDecl$GenericParameter));
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp2206 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2207 = *(&local8);
$fn2209 $tmp2208 = ($fn2209) $tmp2207->$class->vtable[2];
org$frostlang$frostc$Position $tmp2210 = $tmp2208($tmp2207);
frost$core$String* $tmp2211 = *(&local7);
frost$core$String* $tmp2212 = *(&local9);
org$frostlang$frostc$Type* $tmp2213 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2206, $tmp2210, $tmp2211, $tmp2212, $tmp2213);
frost$collections$Array$add$frost$collections$Array$T($tmp2205, ((frost$core$Object*) $tmp2206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
org$frostlang$frostc$Type* $tmp2214 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2215 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2143);
org$frostlang$frostc$ASTNode* $tmp2216 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
frost$core$String* $tmp2217 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
*(&local7) = ((frost$core$String*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp2218 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local6) = ((frost$collections$Array*) NULL);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2219 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2219);
*(&local17) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
frost$collections$Array* $tmp2220 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local17) = $tmp2219;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:576
ITable* $tmp2221 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp2221->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2221 = $tmp2221->next;
}
$fn2223 $tmp2222 = $tmp2221->methods[0];
frost$collections$Iterator* $tmp2224 = $tmp2222(((frost$collections$Iterable*) param8));
goto block35;
block35:;
ITable* $tmp2225 = $tmp2224->$class->itable;
while ($tmp2225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2225 = $tmp2225->next;
}
$fn2227 $tmp2226 = $tmp2225->methods[0];
frost$core$Bit $tmp2228 = $tmp2226($tmp2224);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block37; else goto block36;
block36:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2230 = $tmp2224->$class->itable;
while ($tmp2230->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2230 = $tmp2230->next;
}
$fn2232 $tmp2231 = $tmp2230->methods[1];
frost$core$Object* $tmp2233 = $tmp2231($tmp2224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2233)));
org$frostlang$frostc$ASTNode* $tmp2234 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp2233);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:577
org$frostlang$frostc$ASTNode* $tmp2235 = *(&local18);
frost$core$Int64* $tmp2236 = &$tmp2235->$rawValue;
frost$core$Int64 $tmp2237 = *$tmp2236;
frost$core$Int64 $tmp2238 = (frost$core$Int64) {34};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:578:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2239 = $tmp2237.value;
int64_t $tmp2240 = $tmp2238.value;
bool $tmp2241 = $tmp2239 == $tmp2240;
frost$core$Bit $tmp2242 = frost$core$Bit$init$builtin_bit($tmp2241);
bool $tmp2243 = $tmp2242.value;
if ($tmp2243) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp2244 = (org$frostlang$frostc$Position*) ($tmp2235->$data + 0);
org$frostlang$frostc$Position $tmp2245 = *$tmp2244;
frost$core$String** $tmp2246 = (frost$core$String**) ($tmp2235->$data + 24);
frost$core$String* $tmp2247 = *$tmp2246;
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$String* $tmp2248 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local19) = $tmp2247;
org$frostlang$frostc$ASTNode** $tmp2249 = (org$frostlang$frostc$ASTNode**) ($tmp2235->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2250 = *$tmp2249;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
org$frostlang$frostc$ASTNode* $tmp2251 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local20) = $tmp2250;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:579
frost$collections$Array* $tmp2252 = *(&local17);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2253 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2254 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp2255 = *(&local20);
org$frostlang$frostc$Type* $tmp2256 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2255);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2253, $tmp2254, $tmp2256);
frost$collections$Array$add$frost$collections$Array$T($tmp2252, ((frost$core$Object*) $tmp2253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
org$frostlang$frostc$ASTNode* $tmp2257 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2258 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2233);
org$frostlang$frostc$ASTNode* $tmp2259 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block35;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:582
frost$core$Int64 $tmp2260 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2261, $tmp2260);
abort(); // unreachable
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:586
*(&local21) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:587
frost$core$Bit $tmp2262 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block42; else goto block44;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:588
org$frostlang$frostc$Type* $tmp2264 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
org$frostlang$frostc$Type* $tmp2265 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
*(&local21) = $tmp2264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
goto block43;
block44:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:591
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:591:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2266 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2267 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2268 = &(&local23)->$rawValue;
*$tmp2268 = $tmp2267;
org$frostlang$frostc$Type$Kind $tmp2269 = *(&local23);
*(&local22) = $tmp2269;
org$frostlang$frostc$Type$Kind $tmp2270 = *(&local22);
org$frostlang$frostc$Position $tmp2271 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2272 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2266, &$s2273, $tmp2270, $tmp2271, $tmp2272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
org$frostlang$frostc$Type* $tmp2274 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local21) = $tmp2266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:593
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2275;
$tmp2275 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2275->value = param5;
frost$core$Int64 $tmp2276 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:593:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2277 = &(&local25)->$rawValue;
*$tmp2277 = $tmp2276;
org$frostlang$frostc$MethodDecl$Kind $tmp2278 = *(&local25);
*(&local24) = $tmp2278;
org$frostlang$frostc$MethodDecl$Kind $tmp2279 = *(&local24);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2280;
$tmp2280 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2280->value = $tmp2279;
ITable* $tmp2281 = ((frost$core$Equatable*) $tmp2275)->$class->itable;
while ($tmp2281->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2281 = $tmp2281->next;
}
$fn2283 $tmp2282 = $tmp2281->methods[0];
frost$core$Bit $tmp2284 = $tmp2282(((frost$core$Equatable*) $tmp2275), ((frost$core$Equatable*) $tmp2280));
bool $tmp2285 = $tmp2284.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2280)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2275)));
if ($tmp2285) goto block49; else goto block48;
block49:;
org$frostlang$frostc$Type* $tmp2286 = *(&local21);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:593:68
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2287 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2288 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2289 = &(&local27)->$rawValue;
*$tmp2289 = $tmp2288;
org$frostlang$frostc$Type$Kind $tmp2290 = *(&local27);
*(&local26) = $tmp2290;
org$frostlang$frostc$Type$Kind $tmp2291 = *(&local26);
org$frostlang$frostc$Position $tmp2292 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2293 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2287, &$s2294, $tmp2291, $tmp2292, $tmp2293);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Scanner.frost:593:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2295 = &((org$frostlang$frostc$Symbol*) $tmp2286)->name;
frost$core$String* $tmp2296 = *$tmp2295;
frost$core$String** $tmp2297 = &((org$frostlang$frostc$Symbol*) $tmp2287)->name;
frost$core$String* $tmp2298 = *$tmp2297;
frost$core$Bit $tmp2299 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2296, $tmp2298);
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Type$Kind* $tmp2301 = &$tmp2286->typeKind;
org$frostlang$frostc$Type$Kind $tmp2302 = *$tmp2301;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2303;
$tmp2303 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2303->value = $tmp2302;
org$frostlang$frostc$Type$Kind* $tmp2304 = &$tmp2287->typeKind;
org$frostlang$frostc$Type$Kind $tmp2305 = *$tmp2304;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2306;
$tmp2306 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2306->value = $tmp2305;
ITable* $tmp2307 = ((frost$core$Equatable*) $tmp2303)->$class->itable;
while ($tmp2307->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2307 = $tmp2307->next;
}
$fn2309 $tmp2308 = $tmp2307->methods[0];
frost$core$Bit $tmp2310 = $tmp2308(((frost$core$Equatable*) $tmp2303), ((frost$core$Equatable*) $tmp2306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2306)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2303)));
*(&local28) = $tmp2310;
goto block56;
block55:;
*(&local28) = $tmp2299;
goto block56;
block56:;
frost$core$Bit $tmp2311 = *(&local28);
bool $tmp2312 = $tmp2311.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
if ($tmp2312) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:594
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:594:18
frost$io$File** $tmp2313 = &param0->source;
frost$io$File* $tmp2314 = *$tmp2313;
frost$core$Bit $tmp2315 = frost$core$Bit$init$builtin_bit($tmp2314 != NULL);
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2317 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2318, $tmp2317, &$s2319);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp2320 = &param0->compiler;
frost$core$Weak* $tmp2321 = *$tmp2320;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp2322 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2321);
bool $tmp2323 = $tmp2322.value;
if ($tmp2323) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp2324 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2325, $tmp2324);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2326 = &$tmp2321->value;
frost$core$Object* $tmp2327 = *$tmp2326;
frost$core$Frost$ref$frost$core$Object$Q($tmp2327);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2327), param2, &$s2328);
frost$core$Frost$unref$frost$core$Object$Q($tmp2327);
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:596
frost$core$Bit $tmp2329 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2330 = $tmp2329.value;
if ($tmp2330) goto block65; else goto block64;
block65:;
org$frostlang$frostc$Annotations* $tmp2331 = *(&local3);
frost$core$Bit $tmp2332 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp2331, ((frost$collections$ListView*) param10));
bool $tmp2333 = $tmp2332.value;
if ($tmp2333) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:597
org$frostlang$frostc$Annotations* $tmp2334 = *(&local3);
frost$core$Int64* $tmp2335 = &$tmp2334->flags;
frost$core$Int64 $tmp2336 = *$tmp2335;
frost$core$Int64 $tmp2337 = (frost$core$Int64) {1024};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:597:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp2338 = $tmp2336.value;
int64_t $tmp2339 = $tmp2337.value;
int64_t $tmp2340 = $tmp2338 | $tmp2339;
frost$core$Int64 $tmp2341 = frost$core$Int64$init$builtin_int64($tmp2340);
frost$core$Int64* $tmp2342 = &$tmp2334->flags;
*$tmp2342 = $tmp2341;
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:599
frost$core$Bit $tmp2343 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp2344 = $tmp2343.value;
if ($tmp2344) goto block70; else goto block68;
block70:;
org$frostlang$frostc$ClassDecl$Kind* $tmp2345 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2346 = *$tmp2345;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2347;
$tmp2347 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2347->value = $tmp2346;
frost$core$Int64 $tmp2348 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:599:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp2349 = &(&local30)->$rawValue;
*$tmp2349 = $tmp2348;
org$frostlang$frostc$ClassDecl$Kind $tmp2350 = *(&local30);
*(&local29) = $tmp2350;
org$frostlang$frostc$ClassDecl$Kind $tmp2351 = *(&local29);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2352;
$tmp2352 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2352->value = $tmp2351;
ITable* $tmp2353 = ((frost$core$Equatable*) $tmp2347)->$class->itable;
while ($tmp2353->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2353 = $tmp2353->next;
}
$fn2355 $tmp2354 = $tmp2353->methods[0];
frost$core$Bit $tmp2356 = $tmp2354(((frost$core$Equatable*) $tmp2347), ((frost$core$Equatable*) $tmp2352));
bool $tmp2357 = $tmp2356.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2352)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2347)));
if ($tmp2357) goto block69; else goto block68;
block69:;
org$frostlang$frostc$Annotations** $tmp2358 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2359 = *$tmp2358;
// begin inline call to function org.frostlang.frostc.Annotations.get_isStub():frost.core.Bit from Scanner.frost:600:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:171
frost$core$Int64* $tmp2360 = &$tmp2359->flags;
frost$core$Int64 $tmp2361 = *$tmp2360;
frost$core$Int64 $tmp2362 = (frost$core$Int64) {131072};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2363 = $tmp2361.value;
int64_t $tmp2364 = $tmp2362.value;
int64_t $tmp2365 = $tmp2363 & $tmp2364;
frost$core$Int64 $tmp2366 = frost$core$Int64$init$builtin_int64($tmp2365);
frost$core$Int64 $tmp2367 = (frost$core$Int64) {0};
int64_t $tmp2368 = $tmp2366.value;
int64_t $tmp2369 = $tmp2367.value;
bool $tmp2370 = $tmp2368 != $tmp2369;
frost$core$Bit $tmp2371 = (frost$core$Bit) {$tmp2370};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:600:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2372 = $tmp2371.value;
bool $tmp2373 = !$tmp2372;
frost$core$Bit $tmp2374 = (frost$core$Bit) {$tmp2373};
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:601
org$frostlang$frostc$Annotations* $tmp2376 = *(&local3);
frost$core$Int64* $tmp2377 = &$tmp2376->flags;
frost$core$Int64 $tmp2378 = *$tmp2377;
frost$core$Int64 $tmp2379 = (frost$core$Int64) {512};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:601:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2380 = $tmp2378.value;
int64_t $tmp2381 = $tmp2379.value;
int64_t $tmp2382 = $tmp2380 & $tmp2381;
frost$core$Int64 $tmp2383 = frost$core$Int64$init$builtin_int64($tmp2382);
frost$core$Int64 $tmp2384 = (frost$core$Int64) {0};
int64_t $tmp2385 = $tmp2383.value;
int64_t $tmp2386 = $tmp2384.value;
bool $tmp2387 = $tmp2385 != $tmp2386;
frost$core$Bit $tmp2388 = (frost$core$Bit) {$tmp2387};
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:602
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:602:22
frost$io$File** $tmp2390 = &param0->source;
frost$io$File* $tmp2391 = *$tmp2390;
frost$core$Bit $tmp2392 = frost$core$Bit$init$builtin_bit($tmp2391 != NULL);
bool $tmp2393 = $tmp2392.value;
if ($tmp2393) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp2394 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2395, $tmp2394, &$s2396);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp2397 = &param0->compiler;
frost$core$Weak* $tmp2398 = *$tmp2397;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp2399 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2398);
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp2401 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2402, $tmp2401);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2403 = &$tmp2398->value;
frost$core$Object* $tmp2404 = *$tmp2403;
frost$core$Frost$ref$frost$core$Object$Q($tmp2404);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2404), param2, &$s2405);
frost$core$Frost$unref$frost$core$Object$Q($tmp2404);
goto block76;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:605
org$frostlang$frostc$Annotations* $tmp2406 = *(&local3);
frost$core$Int64* $tmp2407 = &$tmp2406->flags;
frost$core$Int64 $tmp2408 = *$tmp2407;
frost$core$Int64 $tmp2409 = (frost$core$Int64) {512};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:605:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp2410 = $tmp2408.value;
int64_t $tmp2411 = $tmp2409.value;
int64_t $tmp2412 = $tmp2410 | $tmp2411;
frost$core$Int64 $tmp2413 = frost$core$Int64$init$builtin_int64($tmp2412);
frost$core$Int64* $tmp2414 = &$tmp2406->flags;
*$tmp2414 = $tmp2413;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:607
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2415 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp2416 = *(&local0);
org$frostlang$frostc$Annotations* $tmp2417 = *(&local3);
frost$collections$Array* $tmp2418 = *(&local6);
frost$collections$Array* $tmp2419 = *(&local17);
org$frostlang$frostc$Type* $tmp2420 = *(&local21);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2415, param1, param2, $tmp2416, $tmp2417, param5, param6, $tmp2418, $tmp2419, $tmp2420, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
org$frostlang$frostc$Type* $tmp2421 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local21) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2422 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local17) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2423 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2424 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2425 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2415;

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
frost$core$String* local23 = NULL;
frost$core$String$Index$nullable local24;
org$frostlang$frostc$Position local25;
org$frostlang$frostc$ASTNode* local26 = NULL;
frost$core$String* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:612
frost$core$Int64* $tmp2426 = &param2->$rawValue;
frost$core$Int64 $tmp2427 = *$tmp2426;
frost$core$Int64 $tmp2428 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:613:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2429 = $tmp2427.value;
int64_t $tmp2430 = $tmp2428.value;
bool $tmp2431 = $tmp2429 == $tmp2430;
frost$core$Bit $tmp2432 = frost$core$Bit$init$builtin_bit($tmp2431);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2434 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2435 = *$tmp2434;
*(&local0) = $tmp2435;
org$frostlang$frostc$ASTNode** $tmp2436 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2437 = *$tmp2436;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
org$frostlang$frostc$ASTNode* $tmp2438 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local1) = $tmp2437;
org$frostlang$frostc$FixedArray** $tmp2439 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2440 = *$tmp2439;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
org$frostlang$frostc$FixedArray* $tmp2441 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local2) = $tmp2440;
org$frostlang$frostc$ASTNode** $tmp2442 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2443 = *$tmp2442;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
org$frostlang$frostc$ASTNode* $tmp2444 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local3) = $tmp2443;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:614
org$frostlang$frostc$Position $tmp2445 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2446 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2447 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp2445, $tmp2446, $tmp2447, $tmp2448);
org$frostlang$frostc$ASTNode* $tmp2449 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2450 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2452 = (frost$core$Int64) {29};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:616:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2453 = $tmp2427.value;
int64_t $tmp2454 = $tmp2452.value;
bool $tmp2455 = $tmp2453 == $tmp2454;
frost$core$Bit $tmp2456 = frost$core$Bit$init$builtin_bit($tmp2455);
bool $tmp2457 = $tmp2456.value;
if ($tmp2457) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2458 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2459 = *$tmp2458;
*(&local4) = $tmp2459;
org$frostlang$frostc$ASTNode** $tmp2460 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2461 = *$tmp2460;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
org$frostlang$frostc$ASTNode* $tmp2462 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
*(&local5) = $tmp2461;
org$frostlang$frostc$FixedArray** $tmp2463 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2464 = *$tmp2463;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
org$frostlang$frostc$FixedArray* $tmp2465 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
*(&local6) = $tmp2464;
org$frostlang$frostc$MethodDecl$Kind* $tmp2466 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp2467 = *$tmp2466;
*(&local7) = $tmp2467;
frost$core$String** $tmp2468 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2469 = *$tmp2468;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
frost$core$String* $tmp2470 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local8) = $tmp2469;
org$frostlang$frostc$FixedArray** $tmp2471 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2472 = *$tmp2471;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
org$frostlang$frostc$FixedArray* $tmp2473 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local9) = $tmp2472;
org$frostlang$frostc$FixedArray** $tmp2474 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2475 = *$tmp2474;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
org$frostlang$frostc$FixedArray* $tmp2476 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
*(&local10) = $tmp2475;
org$frostlang$frostc$ASTNode** $tmp2477 = (org$frostlang$frostc$ASTNode**) (param2->$data + 72);
org$frostlang$frostc$ASTNode* $tmp2478 = *$tmp2477;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
org$frostlang$frostc$ASTNode* $tmp2479 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local11) = $tmp2478;
org$frostlang$frostc$FixedArray** $tmp2480 = (org$frostlang$frostc$FixedArray**) (param2->$data + 80);
org$frostlang$frostc$FixedArray* $tmp2481 = *$tmp2480;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
org$frostlang$frostc$FixedArray* $tmp2482 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local12) = $tmp2481;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:618
org$frostlang$frostc$Position $tmp2483 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2484 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2485 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp2486 = *(&local7);
frost$core$String* $tmp2487 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2488 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp2489 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2490 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2491 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp2492 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp2483, $tmp2484, $tmp2485, $tmp2486, $tmp2487, $tmp2488, $tmp2489, $tmp2490, $tmp2491);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
org$frostlang$frostc$MethodDecl* $tmp2493 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local13) = $tmp2492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:620
org$frostlang$frostc$MethodDecl* $tmp2494 = *(&local13);
frost$core$Bit $tmp2495 = frost$core$Bit$init$builtin_bit($tmp2494 != NULL);
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:621
org$frostlang$frostc$SymbolTable** $tmp2497 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2498 = *$tmp2497;
org$frostlang$frostc$MethodDecl* $tmp2499 = *(&local13);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:621:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2500 = &((org$frostlang$frostc$Symbol*) $tmp2499)->name;
frost$core$String* $tmp2501 = *$tmp2500;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2498, ((org$frostlang$frostc$Symbol*) $tmp2499), $tmp2501);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:622
frost$collections$Array** $tmp2502 = &param1->methods;
frost$collections$Array* $tmp2503 = *$tmp2502;
org$frostlang$frostc$MethodDecl* $tmp2504 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp2503, ((frost$core$Object*) $tmp2504));
goto block9;
block9:;
org$frostlang$frostc$MethodDecl* $tmp2505 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2506 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2507 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2508 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2509 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2510 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2511 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2512 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:625:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2514 = $tmp2427.value;
int64_t $tmp2515 = $tmp2513.value;
bool $tmp2516 = $tmp2514 == $tmp2515;
frost$core$Bit $tmp2517 = frost$core$Bit$init$builtin_bit($tmp2516);
bool $tmp2518 = $tmp2517.value;
if ($tmp2518) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp2519 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2520 = *$tmp2519;
*(&local14) = $tmp2520;
org$frostlang$frostc$ASTNode** $tmp2521 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2522 = *$tmp2521;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
org$frostlang$frostc$ASTNode* $tmp2523 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local15) = $tmp2522;
org$frostlang$frostc$FixedArray** $tmp2524 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2525 = *$tmp2524;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
org$frostlang$frostc$FixedArray* $tmp2526 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
*(&local16) = $tmp2525;
org$frostlang$frostc$ClassDecl$Kind* $tmp2527 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp2528 = *$tmp2527;
*(&local17) = $tmp2528;
frost$core$String** $tmp2529 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2530 = *$tmp2529;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$String* $tmp2531 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local18) = $tmp2530;
org$frostlang$frostc$FixedArray** $tmp2532 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2533 = *$tmp2532;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$FixedArray* $tmp2534 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local19) = $tmp2533;
org$frostlang$frostc$FixedArray** $tmp2535 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2536 = *$tmp2535;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$FixedArray* $tmp2537 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local20) = $tmp2536;
org$frostlang$frostc$FixedArray** $tmp2538 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2539 = *$tmp2538;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
org$frostlang$frostc$FixedArray* $tmp2540 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
*(&local21) = $tmp2539;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:627
frost$io$File** $tmp2541 = &param1->source;
frost$io$File* $tmp2542 = *$tmp2541;
frost$collections$MapView** $tmp2543 = &param1->aliases;
frost$collections$MapView* $tmp2544 = *$tmp2543;
frost$core$String** $tmp2545 = &param1->name;
frost$core$String* $tmp2546 = *$tmp2545;
org$frostlang$frostc$Position $tmp2547 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2548 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2549 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2550 = *(&local17);
frost$core$String* $tmp2551 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2552 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2553 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2554 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2555 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2542, $tmp2544, $tmp2546, $tmp2547, $tmp2548, $tmp2549, $tmp2550, $tmp2551, $tmp2552, $tmp2553, $tmp2554);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
org$frostlang$frostc$ClassDecl* $tmp2556 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
*(&local22) = $tmp2555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:629
org$frostlang$frostc$ClassDecl* $tmp2557 = *(&local22);
frost$core$Bit $tmp2558 = frost$core$Bit$init$builtin_bit($tmp2557 != NULL);
bool $tmp2559 = $tmp2558.value;
if ($tmp2559) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:630
org$frostlang$frostc$ClassDecl* $tmp2560 = *(&local22);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2561 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2561, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Weak** $tmp2562 = &$tmp2560->owner;
frost$core$Weak* $tmp2563 = *$tmp2562;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
frost$core$Weak** $tmp2564 = &$tmp2560->owner;
*$tmp2564 = $tmp2561;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:631
frost$collections$Array** $tmp2565 = &param1->classes;
frost$collections$Array* $tmp2566 = *$tmp2565;
org$frostlang$frostc$ClassDecl* $tmp2567 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp2566, ((frost$core$Object*) $tmp2567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:632
org$frostlang$frostc$ClassDecl* $tmp2568 = *(&local22);
frost$core$String** $tmp2569 = &$tmp2568->name;
frost$core$String* $tmp2570 = *$tmp2569;
frost$core$String** $tmp2571 = &param1->name;
frost$core$String* $tmp2572 = *$tmp2571;
frost$core$String* $tmp2573 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2572, &$s2574);
frost$core$Bit $tmp2575 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2570, $tmp2573);
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2577 = (frost$core$Int64) {632};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2578, $tmp2577);
abort(); // unreachable
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:633
org$frostlang$frostc$SymbolTable** $tmp2579 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2580 = *$tmp2579;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2581 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2582 = *(&local22);
frost$core$String** $tmp2583 = &$tmp2582->name;
frost$core$String* $tmp2584 = *$tmp2583;
frost$core$String** $tmp2585 = &param1->name;
frost$core$String* $tmp2586 = *$tmp2585;
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from Scanner.frost:633:64
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:138
ITable* $tmp2587 = ((frost$collections$Iterable*) $tmp2586)->$class->itable;
while ($tmp2587->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2587 = $tmp2587->next;
}
$fn2589 $tmp2588 = $tmp2587->methods[0];
frost$collections$Iterator* $tmp2590 = $tmp2588(((frost$collections$Iterable*) $tmp2586));
ITable* $tmp2591 = $tmp2590->$class->itable;
while ($tmp2591->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2591 = $tmp2591->next;
}
$fn2593 $tmp2592 = $tmp2591->methods[2];
frost$core$Int64 $tmp2594 = $tmp2592($tmp2590);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
frost$core$Int64 $tmp2595 = (frost$core$Int64) {1};
int64_t $tmp2596 = $tmp2594.value;
int64_t $tmp2597 = $tmp2595.value;
int64_t $tmp2598 = $tmp2596 + $tmp2597;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {$tmp2598};
frost$core$Bit $tmp2600 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2601 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2599, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2600);
frost$core$String* $tmp2602 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2584, $tmp2601);
org$frostlang$frostc$ClassDecl* $tmp2603 = *(&local22);
org$frostlang$frostc$Type** $tmp2604 = &$tmp2603->type;
org$frostlang$frostc$Type* $tmp2605 = *$tmp2604;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2581, $tmp2602, $tmp2605);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:633:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2606 = &((org$frostlang$frostc$Symbol*) $tmp2581)->name;
frost$core$String* $tmp2607 = *$tmp2606;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2580, ((org$frostlang$frostc$Symbol*) $tmp2581), $tmp2607);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:634
org$frostlang$frostc$ClassDecl* $tmp2608 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp2609 = &$tmp2608->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2610 = *$tmp2609;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2611 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
// begin inline call to function org.frostlang.frostc.ClassDecl.simpleName():frost.core.String from Scanner.frost:634:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp2612 = &param1->name;
frost$core$String* $tmp2613 = *$tmp2612;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp2614 = frost$core$String$get_end$R$frost$core$String$Index($tmp2613);
frost$core$String$Index$nullable $tmp2615 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp2613, &$s2616, $tmp2614);
*(&local24) = $tmp2615;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp2617 = *(&local24);
frost$core$Bit $tmp2618 = frost$core$Bit$init$builtin_bit(!$tmp2617.nonnull);
bool $tmp2619 = $tmp2618.value;
if ($tmp2619) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp2620 = &param1->name;
frost$core$String* $tmp2621 = *$tmp2620;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local23) = $tmp2621;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
goto block20;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp2622 = &param1->name;
frost$core$String* $tmp2623 = *$tmp2622;
frost$core$String** $tmp2624 = &param1->name;
frost$core$String* $tmp2625 = *$tmp2624;
frost$core$String$Index$nullable $tmp2626 = *(&local24);
frost$core$String$Index $tmp2627 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2625, ((frost$core$String$Index) $tmp2626.value));
frost$core$Bit $tmp2628 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2629 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2627, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2628);
frost$core$String* $tmp2630 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2623, $tmp2629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local23) = $tmp2630;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
goto block20;
block20:;
frost$core$String* $tmp2631 = *(&local23);
org$frostlang$frostc$Type** $tmp2632 = &param1->type;
org$frostlang$frostc$Type* $tmp2633 = *$tmp2632;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2611, $tmp2631, $tmp2633);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:634:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2634 = &((org$frostlang$frostc$Symbol*) $tmp2611)->name;
frost$core$String* $tmp2635 = *$tmp2634;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2610, ((org$frostlang$frostc$Symbol*) $tmp2611), $tmp2635);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
frost$core$String* $tmp2636 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2637 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2638 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2639 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2640 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2641 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2642 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2643 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp2644 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:637:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2645 = $tmp2427.value;
int64_t $tmp2646 = $tmp2644.value;
bool $tmp2647 = $tmp2645 == $tmp2646;
frost$core$Bit $tmp2648 = frost$core$Bit$init$builtin_bit($tmp2647);
bool $tmp2649 = $tmp2648.value;
if ($tmp2649) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2650 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2651 = *$tmp2650;
*(&local25) = $tmp2651;
org$frostlang$frostc$ASTNode** $tmp2652 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2653 = *$tmp2652;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
org$frostlang$frostc$ASTNode* $tmp2654 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local26) = $tmp2653;
frost$core$String** $tmp2655 = (frost$core$String**) (param2->$data + 32);
frost$core$String* $tmp2656 = *$tmp2655;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$String* $tmp2657 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local27) = $tmp2656;
org$frostlang$frostc$FixedArray** $tmp2658 = (org$frostlang$frostc$FixedArray**) (param2->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2659 = *$tmp2658;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
org$frostlang$frostc$FixedArray* $tmp2660 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local28) = $tmp2659;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:638
org$frostlang$frostc$Position $tmp2661 = *(&local25);
org$frostlang$frostc$ASTNode* $tmp2662 = *(&local26);
frost$core$String* $tmp2663 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp2664 = *(&local28);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2661, $tmp2662, $tmp2663, $tmp2664);
org$frostlang$frostc$FixedArray* $tmp2665 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2666 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2667 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:641
frost$core$Int64 $tmp2668 = (frost$core$Int64) {641};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:641:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2670 $tmp2669 = ($fn2670) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp2671 = $tmp2669(((frost$core$Object*) param2));
frost$core$String* $tmp2672 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2673, $tmp2671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
frost$core$String* $tmp2674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2672, &$s2675);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2676, $tmp2668, $tmp2674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:648
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:650
frost$core$Bit $tmp2677 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2679 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:654
frost$core$Int64* $tmp2680 = &param3->$rawValue;
frost$core$Int64 $tmp2681 = *$tmp2680;
frost$core$Int64 $tmp2682 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:655:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2683 = $tmp2681.value;
int64_t $tmp2684 = $tmp2682.value;
bool $tmp2685 = $tmp2683 == $tmp2684;
frost$core$Bit $tmp2686 = frost$core$Bit$init$builtin_bit($tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2688 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2689 = *$tmp2688;
*(&local1) = $tmp2689;
frost$core$String** $tmp2690 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2691 = *$tmp2690;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2691));
frost$core$String* $tmp2692 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2692));
*(&local2) = $tmp2691;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:656
frost$core$String* $tmp2693 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2693));
frost$core$String* $tmp2694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local0) = $tmp2693;
frost$core$String* $tmp2695 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:659
frost$core$Int64 $tmp2696 = (frost$core$Int64) {659};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2697, $tmp2696);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:663
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2698 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2698);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$collections$Array* $tmp2699 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local3) = $tmp2698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:664
ITable* $tmp2700 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2700->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2700 = $tmp2700->next;
}
$fn2702 $tmp2701 = $tmp2700->methods[0];
frost$collections$Iterator* $tmp2703 = $tmp2701(((frost$collections$Iterable*) param5));
goto block8;
block8:;
ITable* $tmp2704 = $tmp2703->$class->itable;
while ($tmp2704->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2704 = $tmp2704->next;
}
$fn2706 $tmp2705 = $tmp2704->methods[0];
frost$core$Bit $tmp2707 = $tmp2705($tmp2703);
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block10; else goto block9;
block9:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2709 = $tmp2703->$class->itable;
while ($tmp2709->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2709 = $tmp2709->next;
}
$fn2711 $tmp2710 = $tmp2709->methods[1];
frost$core$Object* $tmp2712 = $tmp2710($tmp2703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2712)));
org$frostlang$frostc$ASTNode* $tmp2713 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2712);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:665
frost$collections$Array* $tmp2714 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2715 = *(&local4);
org$frostlang$frostc$Type* $tmp2716 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2715);
frost$collections$Array$add$frost$collections$Array$T($tmp2714, ((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
frost$core$Frost$unref$frost$core$Object$Q($tmp2712);
org$frostlang$frostc$ASTNode* $tmp2717 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:667
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ChoiceCase));
org$frostlang$frostc$ChoiceCase* $tmp2718 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2719 = *(&local0);
frost$collections$Array** $tmp2720 = &param1->choiceCases;
frost$collections$Array* $tmp2721 = *$tmp2720;
ITable* $tmp2722 = ((frost$collections$CollectionView*) $tmp2721)->$class->itable;
while ($tmp2722->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2722 = $tmp2722->next;
}
$fn2724 $tmp2723 = $tmp2722->methods[0];
frost$core$Int64 $tmp2725 = $tmp2723(((frost$collections$CollectionView*) $tmp2721));
frost$collections$Array* $tmp2726 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2718, param1, param2, param4, $tmp2719, $tmp2725, ((frost$collections$ListView*) $tmp2726));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
org$frostlang$frostc$ChoiceCase* $tmp2727 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local5) = $tmp2718;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:669
frost$collections$Array** $tmp2728 = &param1->choiceCases;
frost$collections$Array* $tmp2729 = *$tmp2728;
org$frostlang$frostc$ChoiceCase* $tmp2730 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2729, ((frost$core$Object*) $tmp2730));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:670
org$frostlang$frostc$SymbolTable** $tmp2731 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2732 = *$tmp2731;
org$frostlang$frostc$ChoiceCase* $tmp2733 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:670:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2734 = &((org$frostlang$frostc$Symbol*) $tmp2733)->name;
frost$core$String* $tmp2735 = *$tmp2734;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2732, ((org$frostlang$frostc$Symbol*) $tmp2733), $tmp2735);
org$frostlang$frostc$ChoiceCase* $tmp2736 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2737 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
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
frost$collections$Array* local10 = NULL;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$Type$Kind local12;
frost$core$String* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
frost$collections$Array* local15 = NULL;
org$frostlang$frostc$ClassDecl$Kind local16;
org$frostlang$frostc$ClassDecl$Kind local17;
org$frostlang$frostc$ASTNode* local18 = NULL;
org$frostlang$frostc$ClassDecl* local19 = NULL;
org$frostlang$frostc$ClassDecl$Kind local20;
org$frostlang$frostc$ClassDecl$Kind local21;
org$frostlang$frostc$FieldDecl$Kind local22;
org$frostlang$frostc$FieldDecl$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$FieldDecl* local26 = NULL;
org$frostlang$frostc$FieldDecl$Kind local27;
org$frostlang$frostc$FieldDecl$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
org$frostlang$frostc$FieldDecl* local31 = NULL;
org$frostlang$frostc$ASTNode* local32 = NULL;
org$frostlang$frostc$Position local33;
org$frostlang$frostc$MethodDecl$Kind local34;
org$frostlang$frostc$MethodDecl$Kind local35;
org$frostlang$frostc$MethodDecl$Kind local36;
frost$core$Bit local37;
frost$core$Bit local38;
org$frostlang$frostc$MethodDecl* local39 = NULL;
org$frostlang$frostc$MethodDecl$Kind local40;
org$frostlang$frostc$MethodDecl$Kind local41;
org$frostlang$frostc$ClassDecl$Kind local42;
org$frostlang$frostc$ClassDecl$Kind local43;
org$frostlang$frostc$ClassDecl$Kind local44;
org$frostlang$frostc$ClassDecl$Kind local45;
org$frostlang$frostc$MethodDecl$Kind local46;
org$frostlang$frostc$MethodDecl$Kind local47;
org$frostlang$frostc$Type$Kind local48;
org$frostlang$frostc$Type$Kind local49;
org$frostlang$frostc$MethodDecl* local50 = NULL;
org$frostlang$frostc$ClassDecl$Kind local51;
org$frostlang$frostc$ClassDecl$Kind local52;
org$frostlang$frostc$ClassDecl$Kind local53;
org$frostlang$frostc$ClassDecl$Kind local54;
org$frostlang$frostc$MethodDecl$Kind local55;
org$frostlang$frostc$MethodDecl$Kind local56;
org$frostlang$frostc$Type$Kind local57;
org$frostlang$frostc$Type$Kind local58;
org$frostlang$frostc$MethodDecl* local59 = NULL;
org$frostlang$frostc$ClassDecl$Kind local60;
org$frostlang$frostc$ClassDecl$Kind local61;
frost$core$Bit local62;
org$frostlang$frostc$ChoiceCase* local63 = NULL;
org$frostlang$frostc$Type$Kind local64;
org$frostlang$frostc$Type$Kind local65;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:677
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:678
ITable* $tmp2740 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2740->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2740 = $tmp2740->next;
}
$fn2742 $tmp2741 = $tmp2740->methods[1];
frost$core$Bit $tmp2743 = $tmp2741(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2739));
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:679
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:679:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp2745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s2746);
frost$core$String* $tmp2747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2745, param8);
frost$core$String* $tmp2748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2747, &$s2749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
frost$core$String* $tmp2750 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local0) = $tmp2748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2751 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
*(&local0) = param8;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:684
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:686
frost$core$Bit $tmp2752 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2754 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:690
frost$core$Int64* $tmp2755 = &param5->$rawValue;
frost$core$Int64 $tmp2756 = *$tmp2755;
frost$core$Int64 $tmp2757 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:691:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2758 = $tmp2756.value;
int64_t $tmp2759 = $tmp2757.value;
bool $tmp2760 = $tmp2758 == $tmp2759;
frost$core$Bit $tmp2761 = frost$core$Bit$init$builtin_bit($tmp2760);
bool $tmp2762 = $tmp2761.value;
if ($tmp2762) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2763 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2764 = *$tmp2763;
*(&local2) = $tmp2764;
frost$core$String** $tmp2765 = (frost$core$String**) (param5->$data + 24);
frost$core$String* $tmp2766 = *$tmp2765;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2766));
frost$core$String* $tmp2767 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2767));
*(&local3) = $tmp2766;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:692
frost$core$String* $tmp2768 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2768));
frost$core$String* $tmp2769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
*(&local1) = $tmp2768;
frost$core$String* $tmp2770 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:695
frost$core$Int64 $tmp2771 = (frost$core$Int64) {695};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2772, $tmp2771);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:699
org$frostlang$frostc$Annotations* $tmp2773 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
org$frostlang$frostc$Annotations* $tmp2774 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
*(&local4) = $tmp2773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:700
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2775 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2775);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$collections$Array* $tmp2776 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
*(&local5) = $tmp2775;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:701
frost$core$Bit $tmp2777 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:702
ITable* $tmp2779 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2779->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2779 = $tmp2779->next;
}
$fn2781 $tmp2780 = $tmp2779->methods[0];
frost$collections$Iterator* $tmp2782 = $tmp2780(((frost$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2783 = $tmp2782->$class->itable;
while ($tmp2783->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2783 = $tmp2783->next;
}
$fn2785 $tmp2784 = $tmp2783->methods[0];
frost$core$Bit $tmp2786 = $tmp2784($tmp2782);
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2788 = $tmp2782->$class->itable;
while ($tmp2788->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2788 = $tmp2788->next;
}
$fn2790 $tmp2789 = $tmp2788->methods[1];
frost$core$Object* $tmp2791 = $tmp2789($tmp2782);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2791)));
org$frostlang$frostc$ASTNode* $tmp2792 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2791);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:703
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:704
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:705
org$frostlang$frostc$ASTNode* $tmp2793 = *(&local6);
frost$core$Int64* $tmp2794 = &$tmp2793->$rawValue;
frost$core$Int64 $tmp2795 = *$tmp2794;
frost$core$Int64 $tmp2796 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:706:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2797 = $tmp2795.value;
int64_t $tmp2798 = $tmp2796.value;
bool $tmp2799 = $tmp2797 == $tmp2798;
frost$core$Bit $tmp2800 = frost$core$Bit$init$builtin_bit($tmp2799);
bool $tmp2801 = $tmp2800.value;
if ($tmp2801) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2802 = (org$frostlang$frostc$Position*) ($tmp2793->$data + 0);
org$frostlang$frostc$Position $tmp2803 = *$tmp2802;
frost$core$String** $tmp2804 = (frost$core$String**) ($tmp2793->$data + 24);
frost$core$String* $tmp2805 = *$tmp2804;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
frost$core$String* $tmp2806 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
*(&local9) = $tmp2805;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:707
frost$core$String* $tmp2807 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$String* $tmp2808 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local7) = $tmp2807;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:708
// begin inline call to method org.frostlang.frostc.Type.Any():org.frostlang.frostc.Type from Scanner.frost:708:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:273
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2809 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2809);
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
frost$collections$Array* $tmp2810 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local10) = $tmp2809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:274
frost$collections$Array* $tmp2811 = *(&local10);
// begin inline call to method org.frostlang.frostc.Type.Object():org.frostlang.frostc.Type from Type.frost:274:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:268
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2812 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2813 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp2814 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2813);
org$frostlang$frostc$Position $tmp2815 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2816 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2812, &$s2817, $tmp2814, $tmp2815, $tmp2816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$collections$Array$add$frost$collections$Array$T($tmp2811, ((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:275
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2818 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2819 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2820 = &(&local12)->$rawValue;
*$tmp2820 = $tmp2819;
org$frostlang$frostc$Type$Kind $tmp2821 = *(&local12);
*(&local11) = $tmp2821;
org$frostlang$frostc$Type$Kind $tmp2822 = *(&local11);
org$frostlang$frostc$Position $tmp2823 = org$frostlang$frostc$Position$init();
frost$collections$Array* $tmp2824 = *(&local10);
frost$core$Bit $tmp2825 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp2818, &$s2826, $tmp2822, $tmp2823, ((frost$collections$ListView*) $tmp2824), $tmp2825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
frost$collections$Array* $tmp2827 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local10) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
org$frostlang$frostc$Type* $tmp2828 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local8) = $tmp2818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
frost$core$String* $tmp2829 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp2830 = (frost$core$Int64) {48};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:710:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2831 = $tmp2795.value;
int64_t $tmp2832 = $tmp2830.value;
bool $tmp2833 = $tmp2831 == $tmp2832;
frost$core$Bit $tmp2834 = frost$core$Bit$init$builtin_bit($tmp2833);
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2836 = (org$frostlang$frostc$Position*) ($tmp2793->$data + 0);
org$frostlang$frostc$Position $tmp2837 = *$tmp2836;
frost$core$String** $tmp2838 = (frost$core$String**) ($tmp2793->$data + 24);
frost$core$String* $tmp2839 = *$tmp2838;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
frost$core$String* $tmp2840 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
*(&local13) = $tmp2839;
org$frostlang$frostc$ASTNode** $tmp2841 = (org$frostlang$frostc$ASTNode**) ($tmp2793->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2842 = *$tmp2841;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
org$frostlang$frostc$ASTNode* $tmp2843 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
*(&local14) = $tmp2842;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:711
frost$core$String* $tmp2844 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
frost$core$String* $tmp2845 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2845));
*(&local7) = $tmp2844;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:712
org$frostlang$frostc$ASTNode* $tmp2846 = *(&local14);
org$frostlang$frostc$Type* $tmp2847 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
org$frostlang$frostc$Type* $tmp2848 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
*(&local8) = $tmp2847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
org$frostlang$frostc$ASTNode* $tmp2849 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2849));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2850 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local13) = ((frost$core$String*) NULL);
goto block17;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:715
frost$core$Int64 $tmp2851 = (frost$core$Int64) {715};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2852, $tmp2851);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:718
frost$collections$Array* $tmp2853 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$ClassDecl$GenericParameter));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2854 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2855 = *(&local6);
$fn2857 $tmp2856 = ($fn2857) $tmp2855->$class->vtable[2];
org$frostlang$frostc$Position $tmp2858 = $tmp2856($tmp2855);
frost$core$String* $tmp2859 = *(&local0);
frost$core$String* $tmp2860 = *(&local7);
org$frostlang$frostc$Type* $tmp2861 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2854, $tmp2858, $tmp2859, $tmp2860, $tmp2861);
frost$collections$Array$add$frost$collections$Array$T($tmp2853, ((frost$core$Object*) $tmp2854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
org$frostlang$frostc$Type* $tmp2862 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2862));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2863 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2791);
org$frostlang$frostc$ASTNode* $tmp2864 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:721
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2865 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2865);
*(&local15) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
frost$collections$Array* $tmp2866 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
*(&local15) = $tmp2865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:722
frost$core$Bit $tmp2867 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:723
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2869;
$tmp2869 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2869->value = param7;
frost$core$Int64 $tmp2870 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:723:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp2871 = &(&local17)->$rawValue;
*$tmp2871 = $tmp2870;
org$frostlang$frostc$ClassDecl$Kind $tmp2872 = *(&local17);
*(&local16) = $tmp2872;
org$frostlang$frostc$ClassDecl$Kind $tmp2873 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2874;
$tmp2874 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2874->value = $tmp2873;
ITable* $tmp2875 = ((frost$core$Equatable*) $tmp2869)->$class->itable;
while ($tmp2875->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2875 = $tmp2875->next;
}
$fn2877 $tmp2876 = $tmp2875->methods[0];
frost$core$Bit $tmp2878 = $tmp2876(((frost$core$Equatable*) $tmp2869), ((frost$core$Equatable*) $tmp2874));
bool $tmp2879 = $tmp2878.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2874)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2869)));
if ($tmp2879) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:724
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:724:22
frost$io$File** $tmp2880 = &param0->source;
frost$io$File* $tmp2881 = *$tmp2880;
frost$core$Bit $tmp2882 = frost$core$Bit$init$builtin_bit($tmp2881 != NULL);
bool $tmp2883 = $tmp2882.value;
if ($tmp2883) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp2884 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2885, $tmp2884, &$s2886);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp2887 = &param0->compiler;
frost$core$Weak* $tmp2888 = *$tmp2887;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp2889 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2888);
bool $tmp2890 = $tmp2889.value;
if ($tmp2890) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2891 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2892, $tmp2891);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2893 = &$tmp2888->value;
frost$core$Object* $tmp2894 = *$tmp2893;
frost$core$Frost$ref$frost$core$Object$Q($tmp2894);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2894), param4, &$s2895);
frost$core$Frost$unref$frost$core$Object$Q($tmp2894);
goto block30;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:726
ITable* $tmp2896 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2896->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2896 = $tmp2896->next;
}
$fn2898 $tmp2897 = $tmp2896->methods[0];
frost$collections$Iterator* $tmp2899 = $tmp2897(((frost$collections$Iterable*) param10));
goto block38;
block38:;
ITable* $tmp2900 = $tmp2899->$class->itable;
while ($tmp2900->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2900 = $tmp2900->next;
}
$fn2902 $tmp2901 = $tmp2900->methods[0];
frost$core$Bit $tmp2903 = $tmp2901($tmp2899);
bool $tmp2904 = $tmp2903.value;
if ($tmp2904) goto block40; else goto block39;
block39:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2905 = $tmp2899->$class->itable;
while ($tmp2905->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2905 = $tmp2905->next;
}
$fn2907 $tmp2906 = $tmp2905->methods[1];
frost$core$Object* $tmp2908 = $tmp2906($tmp2899);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2908)));
org$frostlang$frostc$ASTNode* $tmp2909 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp2908);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:727
frost$collections$Array* $tmp2910 = *(&local15);
org$frostlang$frostc$ASTNode* $tmp2911 = *(&local18);
org$frostlang$frostc$Type* $tmp2912 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2911);
frost$collections$Array$add$frost$collections$Array$T($tmp2910, ((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q($tmp2908);
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
goto block28;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:730
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp2914 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2915 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2916 = *(&local4);
frost$core$String* $tmp2917 = *(&local0);
frost$collections$Array* $tmp2918 = *(&local15);
frost$collections$Array* $tmp2919 = *(&local5);
frost$core$Weak** $tmp2920 = &param0->compiler;
frost$core$Weak* $tmp2921 = *$tmp2920;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:731:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2922 = &$tmp2921->_valid;
frost$core$Bit $tmp2923 = *$tmp2922;
bool $tmp2924 = $tmp2923.value;
if ($tmp2924) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp2925 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2926, $tmp2925);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2927 = &$tmp2921->value;
frost$core$Object* $tmp2928 = *$tmp2927;
frost$core$Frost$ref$frost$core$Object$Q($tmp2928);
org$frostlang$frostc$SymbolTable** $tmp2929 = &((org$frostlang$frostc$Compiler*) $tmp2928)->root;
org$frostlang$frostc$SymbolTable* $tmp2930 = *$tmp2929;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2914, param1, param4, param2, $tmp2915, $tmp2916, param7, $tmp2917, ((frost$collections$ListView*) $tmp2918), $tmp2919, $tmp2930);
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
org$frostlang$frostc$ClassDecl* $tmp2931 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local19) = $tmp2914;
frost$core$Frost$unref$frost$core$Object$Q($tmp2928);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:732
frost$core$Weak** $tmp2932 = &param0->compiler;
frost$core$Weak* $tmp2933 = *$tmp2932;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:732:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2934 = &$tmp2933->_valid;
frost$core$Bit $tmp2935 = *$tmp2934;
bool $tmp2936 = $tmp2935.value;
if ($tmp2936) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp2937 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2938, $tmp2937);
abort(); // unreachable
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2939 = &$tmp2933->value;
frost$core$Object* $tmp2940 = *$tmp2939;
frost$core$Frost$ref$frost$core$Object$Q($tmp2940);
frost$collections$Stack** $tmp2941 = &((org$frostlang$frostc$Compiler*) $tmp2940)->currentClass;
frost$collections$Stack* $tmp2942 = *$tmp2941;
org$frostlang$frostc$ClassDecl* $tmp2943 = *(&local19);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:732:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp2944 = &$tmp2942->contents;
frost$collections$Array* $tmp2945 = *$tmp2944;
frost$collections$Array$add$frost$collections$Array$T($tmp2945, ((frost$core$Object*) $tmp2943));
frost$core$Frost$unref$frost$core$Object$Q($tmp2940);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:733
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2946;
$tmp2946 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2946->value = param7;
frost$core$Int64 $tmp2947 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:733:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp2948 = &(&local21)->$rawValue;
*$tmp2948 = $tmp2947;
org$frostlang$frostc$ClassDecl$Kind $tmp2949 = *(&local21);
*(&local20) = $tmp2949;
org$frostlang$frostc$ClassDecl$Kind $tmp2950 = *(&local20);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2951;
$tmp2951 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2951->value = $tmp2950;
ITable* $tmp2952 = ((frost$core$Equatable*) $tmp2946)->$class->itable;
while ($tmp2952->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2952 = $tmp2952->next;
}
$fn2954 $tmp2953 = $tmp2952->methods[0];
frost$core$Bit $tmp2955 = $tmp2953(((frost$core$Equatable*) $tmp2946), ((frost$core$Equatable*) $tmp2951));
bool $tmp2956 = $tmp2955.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2951)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2946)));
if ($tmp2956) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:734
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp2957 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2958 = *(&local19);
org$frostlang$frostc$ClassDecl* $tmp2959 = *(&local19);
org$frostlang$frostc$Position* $tmp2960 = &$tmp2959->position;
org$frostlang$frostc$Position $tmp2961 = *$tmp2960;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2962 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2963 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2962, $tmp2963);
frost$core$Int64 $tmp2964 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:735:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp2965 = &(&local23)->$rawValue;
*$tmp2965 = $tmp2964;
org$frostlang$frostc$FieldDecl$Kind $tmp2966 = *(&local23);
*(&local22) = $tmp2966;
org$frostlang$frostc$FieldDecl$Kind $tmp2967 = *(&local22);
// begin inline call to method org.frostlang.frostc.Type.Int64():org.frostlang.frostc.Type from Scanner.frost:736:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:375
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2968 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp2969 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:375:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp2970 = &(&local25)->$rawValue;
*$tmp2970 = $tmp2969;
org$frostlang$frostc$Type$Kind $tmp2971 = *(&local25);
*(&local24) = $tmp2971;
org$frostlang$frostc$Type$Kind $tmp2972 = *(&local24);
org$frostlang$frostc$Position $tmp2973 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp2974 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2968, &$s2975, $tmp2972, $tmp2973, $tmp2974);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2957, $tmp2958, $tmp2961, ((frost$core$String*) NULL), $tmp2962, $tmp2967, &$s2976, $tmp2968, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
org$frostlang$frostc$FieldDecl* $tmp2977 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
*(&local26) = $tmp2957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:737
org$frostlang$frostc$ClassDecl* $tmp2978 = *(&local19);
frost$collections$Array** $tmp2979 = &$tmp2978->fields;
frost$collections$Array* $tmp2980 = *$tmp2979;
org$frostlang$frostc$FieldDecl* $tmp2981 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2980, ((frost$core$Object*) $tmp2981));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:738
org$frostlang$frostc$ClassDecl* $tmp2982 = *(&local19);
org$frostlang$frostc$SymbolTable** $tmp2983 = &$tmp2982->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2984 = *$tmp2983;
org$frostlang$frostc$FieldDecl* $tmp2985 = *(&local26);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:738:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2986 = &((org$frostlang$frostc$Symbol*) $tmp2985)->name;
frost$core$String* $tmp2987 = *$tmp2986;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2984, ((org$frostlang$frostc$Symbol*) $tmp2985), $tmp2987);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:739
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp2988 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2989 = *(&local19);
org$frostlang$frostc$ClassDecl* $tmp2990 = *(&local19);
org$frostlang$frostc$Position* $tmp2991 = &$tmp2990->position;
org$frostlang$frostc$Position $tmp2992 = *$tmp2991;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp2993 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2994 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2993, $tmp2994);
frost$core$Int64 $tmp2995 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:740:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp2996 = &(&local28)->$rawValue;
*$tmp2996 = $tmp2995;
org$frostlang$frostc$FieldDecl$Kind $tmp2997 = *(&local28);
*(&local27) = $tmp2997;
org$frostlang$frostc$FieldDecl$Kind $tmp2998 = *(&local27);
// begin inline call to method org.frostlang.frostc.Type.ChoiceData():org.frostlang.frostc.Type from Scanner.frost:741:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:550
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp2999 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3000 = (frost$core$Int64) {6};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:550:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3001 = &(&local30)->$rawValue;
*$tmp3001 = $tmp3000;
org$frostlang$frostc$Type$Kind $tmp3002 = *(&local30);
*(&local29) = $tmp3002;
org$frostlang$frostc$Type$Kind $tmp3003 = *(&local29);
org$frostlang$frostc$Position $tmp3004 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3005 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp2999, &$s3006, $tmp3003, $tmp3004, $tmp3005);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2988, $tmp2989, $tmp2992, ((frost$core$String*) NULL), $tmp2993, $tmp2998, &$s3007, $tmp2999, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
org$frostlang$frostc$FieldDecl* $tmp3008 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
*(&local31) = $tmp2988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:742
org$frostlang$frostc$ClassDecl* $tmp3009 = *(&local19);
frost$collections$Array** $tmp3010 = &$tmp3009->fields;
frost$collections$Array* $tmp3011 = *$tmp3010;
org$frostlang$frostc$FieldDecl* $tmp3012 = *(&local31);
frost$collections$Array$add$frost$collections$Array$T($tmp3011, ((frost$core$Object*) $tmp3012));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:743
org$frostlang$frostc$ClassDecl* $tmp3013 = *(&local19);
org$frostlang$frostc$SymbolTable** $tmp3014 = &$tmp3013->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3015 = *$tmp3014;
org$frostlang$frostc$FieldDecl* $tmp3016 = *(&local31);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:743:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3017 = &((org$frostlang$frostc$Symbol*) $tmp3016)->name;
frost$core$String* $tmp3018 = *$tmp3017;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3015, ((org$frostlang$frostc$Symbol*) $tmp3016), $tmp3018);
org$frostlang$frostc$FieldDecl* $tmp3019 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
*(&local31) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp3020 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:745
ITable* $tmp3021 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp3021->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3021 = $tmp3021->next;
}
$fn3023 $tmp3022 = $tmp3021->methods[0];
frost$collections$Iterator* $tmp3024 = $tmp3022(((frost$collections$Iterable*) param11));
goto block61;
block61:;
ITable* $tmp3025 = $tmp3024->$class->itable;
while ($tmp3025->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3025 = $tmp3025->next;
}
$fn3027 $tmp3026 = $tmp3025->methods[0];
frost$core$Bit $tmp3028 = $tmp3026($tmp3024);
bool $tmp3029 = $tmp3028.value;
if ($tmp3029) goto block63; else goto block62;
block62:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3030 = $tmp3024->$class->itable;
while ($tmp3030->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3030 = $tmp3030->next;
}
$fn3032 $tmp3031 = $tmp3030->methods[1];
frost$core$Object* $tmp3033 = $tmp3031($tmp3024);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3033)));
org$frostlang$frostc$ASTNode* $tmp3034 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp3033);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:746
org$frostlang$frostc$ASTNode* $tmp3035 = *(&local32);
frost$core$Int64* $tmp3036 = &$tmp3035->$rawValue;
frost$core$Int64 $tmp3037 = *$tmp3036;
frost$core$Int64 $tmp3038 = (frost$core$Int64) {29};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:747:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3039 = $tmp3037.value;
int64_t $tmp3040 = $tmp3038.value;
bool $tmp3041 = $tmp3039 == $tmp3040;
frost$core$Bit $tmp3042 = frost$core$Bit$init$builtin_bit($tmp3041);
bool $tmp3043 = $tmp3042.value;
if ($tmp3043) goto block65; else goto block66;
block65:;
org$frostlang$frostc$Position* $tmp3044 = (org$frostlang$frostc$Position*) ($tmp3035->$data + 0);
org$frostlang$frostc$Position $tmp3045 = *$tmp3044;
*(&local33) = $tmp3045;
org$frostlang$frostc$ASTNode** $tmp3046 = (org$frostlang$frostc$ASTNode**) ($tmp3035->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3047 = *$tmp3046;
org$frostlang$frostc$FixedArray** $tmp3048 = (org$frostlang$frostc$FixedArray**) ($tmp3035->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3049 = *$tmp3048;
org$frostlang$frostc$MethodDecl$Kind* $tmp3050 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3035->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3051 = *$tmp3050;
*(&local34) = $tmp3051;
frost$core$String** $tmp3052 = (frost$core$String**) ($tmp3035->$data + 48);
frost$core$String* $tmp3053 = *$tmp3052;
org$frostlang$frostc$FixedArray** $tmp3054 = (org$frostlang$frostc$FixedArray**) ($tmp3035->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3055 = *$tmp3054;
org$frostlang$frostc$FixedArray** $tmp3056 = (org$frostlang$frostc$FixedArray**) ($tmp3035->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3057 = *$tmp3056;
org$frostlang$frostc$ASTNode** $tmp3058 = (org$frostlang$frostc$ASTNode**) ($tmp3035->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3059 = *$tmp3058;
org$frostlang$frostc$FixedArray** $tmp3060 = (org$frostlang$frostc$FixedArray**) ($tmp3035->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3061 = *$tmp3060;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:748
org$frostlang$frostc$MethodDecl$Kind $tmp3062 = *(&local34);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3063;
$tmp3063 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3063->value = $tmp3062;
frost$core$Int64 $tmp3064 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:748:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3065 = &(&local36)->$rawValue;
*$tmp3065 = $tmp3064;
org$frostlang$frostc$MethodDecl$Kind $tmp3066 = *(&local36);
*(&local35) = $tmp3066;
org$frostlang$frostc$MethodDecl$Kind $tmp3067 = *(&local35);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3068;
$tmp3068 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3068->value = $tmp3067;
ITable* $tmp3069 = ((frost$core$Equatable*) $tmp3063)->$class->itable;
while ($tmp3069->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3069 = $tmp3069->next;
}
$fn3071 $tmp3070 = $tmp3069->methods[0];
frost$core$Bit $tmp3072 = $tmp3070(((frost$core$Equatable*) $tmp3063), ((frost$core$Equatable*) $tmp3068));
bool $tmp3073 = $tmp3072.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3068)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3063)));
if ($tmp3073) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:749
frost$core$Int64 $tmp3074 = param7.$rawValue;
frost$core$Int64 $tmp3075 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:750:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3076 = $tmp3074.value;
int64_t $tmp3077 = $tmp3075.value;
bool $tmp3078 = $tmp3076 == $tmp3077;
frost$core$Bit $tmp3079 = frost$core$Bit$init$builtin_bit($tmp3078);
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block72; else goto block73;
block72:;
goto block71;
block73:;
frost$core$Int64 $tmp3081 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:753:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3082 = $tmp3074.value;
int64_t $tmp3083 = $tmp3081.value;
bool $tmp3084 = $tmp3082 == $tmp3083;
frost$core$Bit $tmp3085 = frost$core$Bit$init$builtin_bit($tmp3084);
bool $tmp3086 = $tmp3085.value;
if ($tmp3086) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:754
org$frostlang$frostc$Position $tmp3087 = *(&local33);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:754:38
frost$io$File** $tmp3088 = &param0->source;
frost$io$File* $tmp3089 = *$tmp3088;
frost$core$Bit $tmp3090 = frost$core$Bit$init$builtin_bit($tmp3089 != NULL);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3093, $tmp3092, &$s3094);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp3095 = &param0->compiler;
frost$core$Weak* $tmp3096 = *$tmp3095;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3097 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3096);
bool $tmp3098 = $tmp3097.value;
if ($tmp3098) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp3099 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3100, $tmp3099);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3101 = &$tmp3096->value;
frost$core$Object* $tmp3102 = *$tmp3101;
frost$core$Frost$ref$frost$core$Object$Q($tmp3102);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3102), $tmp3087, &$s3103);
frost$core$Frost$unref$frost$core$Object$Q($tmp3102);
goto block71;
block76:;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:756:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3105 = $tmp3074.value;
int64_t $tmp3106 = $tmp3104.value;
bool $tmp3107 = $tmp3105 == $tmp3106;
frost$core$Bit $tmp3108 = frost$core$Bit$init$builtin_bit($tmp3107);
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block84; else goto block71;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:757
org$frostlang$frostc$Position $tmp3110 = *(&local33);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:757:38
frost$io$File** $tmp3111 = &param0->source;
frost$io$File* $tmp3112 = *$tmp3111;
frost$core$Bit $tmp3113 = frost$core$Bit$init$builtin_bit($tmp3112 != NULL);
bool $tmp3114 = $tmp3113.value;
if ($tmp3114) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp3115 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3116, $tmp3115, &$s3117);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp3118 = &param0->compiler;
frost$core$Weak* $tmp3119 = *$tmp3118;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3120 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3119);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp3122 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3123, $tmp3122);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3124 = &$tmp3119->value;
frost$core$Object* $tmp3125 = *$tmp3124;
frost$core$Frost$ref$frost$core$Object$Q($tmp3125);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3125), $tmp3110, &$s3126);
frost$core$Frost$unref$frost$core$Object$Q($tmp3125);
goto block71;
block71:;
goto block69;
block69:;
goto block64;
block66:;
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:766
org$frostlang$frostc$ClassDecl* $tmp3127 = *(&local19);
org$frostlang$frostc$ASTNode* $tmp3128 = *(&local32);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp3127, $tmp3128);
frost$core$Frost$unref$frost$core$Object$Q($tmp3033);
org$frostlang$frostc$ASTNode* $tmp3129 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block61;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3024));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:768
frost$core$Bit $tmp3130 = frost$core$Bit$init$builtin_bit(false);
*(&local37) = $tmp3130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:769
frost$core$Bit $tmp3131 = frost$core$Bit$init$builtin_bit(false);
*(&local38) = $tmp3131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:770
org$frostlang$frostc$ClassDecl* $tmp3132 = *(&local19);
frost$collections$Array** $tmp3133 = &$tmp3132->methods;
frost$collections$Array* $tmp3134 = *$tmp3133;
ITable* $tmp3135 = ((frost$collections$Iterable*) $tmp3134)->$class->itable;
while ($tmp3135->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3135 = $tmp3135->next;
}
$fn3137 $tmp3136 = $tmp3135->methods[0];
frost$collections$Iterator* $tmp3138 = $tmp3136(((frost$collections$Iterable*) $tmp3134));
goto block92;
block92:;
ITable* $tmp3139 = $tmp3138->$class->itable;
while ($tmp3139->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3139 = $tmp3139->next;
}
$fn3141 $tmp3140 = $tmp3139->methods[0];
frost$core$Bit $tmp3142 = $tmp3140($tmp3138);
bool $tmp3143 = $tmp3142.value;
if ($tmp3143) goto block94; else goto block93;
block93:;
*(&local39) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp3144 = $tmp3138->$class->itable;
while ($tmp3144->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3144 = $tmp3144->next;
}
$fn3146 $tmp3145 = $tmp3144->methods[1];
frost$core$Object* $tmp3147 = $tmp3145($tmp3138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp3147)));
org$frostlang$frostc$MethodDecl* $tmp3148 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local39) = ((org$frostlang$frostc$MethodDecl*) $tmp3147);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:771
org$frostlang$frostc$MethodDecl* $tmp3149 = *(&local39);
org$frostlang$frostc$MethodDecl$Kind* $tmp3150 = &$tmp3149->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3151 = *$tmp3150;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3152;
$tmp3152 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3152->value = $tmp3151;
frost$core$Int64 $tmp3153 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:771:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3154 = &(&local41)->$rawValue;
*$tmp3154 = $tmp3153;
org$frostlang$frostc$MethodDecl$Kind $tmp3155 = *(&local41);
*(&local40) = $tmp3155;
org$frostlang$frostc$MethodDecl$Kind $tmp3156 = *(&local40);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3157;
$tmp3157 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3157->value = $tmp3156;
ITable* $tmp3158 = ((frost$core$Equatable*) $tmp3152)->$class->itable;
while ($tmp3158->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3158 = $tmp3158->next;
}
$fn3160 $tmp3159 = $tmp3158->methods[0];
frost$core$Bit $tmp3161 = $tmp3159(((frost$core$Equatable*) $tmp3152), ((frost$core$Equatable*) $tmp3157));
bool $tmp3162 = $tmp3161.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3157)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3152)));
if ($tmp3162) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:772
frost$core$Bit $tmp3163 = frost$core$Bit$init$builtin_bit(true);
*(&local37) = $tmp3163;
goto block96;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:774
org$frostlang$frostc$MethodDecl* $tmp3164 = *(&local39);
frost$core$String** $tmp3165 = &((org$frostlang$frostc$Symbol*) $tmp3164)->name;
frost$core$String* $tmp3166 = *$tmp3165;
frost$core$Bit $tmp3167 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3166, &$s3168);
bool $tmp3169 = $tmp3167.value;
if ($tmp3169) goto block100; else goto block99;
block100:;
org$frostlang$frostc$MethodDecl* $tmp3170 = *(&local39);
frost$collections$Array** $tmp3171 = &$tmp3170->parameters;
frost$collections$Array* $tmp3172 = *$tmp3171;
ITable* $tmp3173 = ((frost$collections$CollectionView*) $tmp3172)->$class->itable;
while ($tmp3173->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3173 = $tmp3173->next;
}
$fn3175 $tmp3174 = $tmp3173->methods[0];
frost$core$Int64 $tmp3176 = $tmp3174(((frost$collections$CollectionView*) $tmp3172));
frost$core$Int64 $tmp3177 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:774:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3178 = $tmp3176.value;
int64_t $tmp3179 = $tmp3177.value;
bool $tmp3180 = $tmp3178 == $tmp3179;
frost$core$Bit $tmp3181 = frost$core$Bit$init$builtin_bit($tmp3180);
bool $tmp3182 = $tmp3181.value;
if ($tmp3182) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:775
frost$core$Bit $tmp3183 = frost$core$Bit$init$builtin_bit(true);
*(&local38) = $tmp3183;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:776
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3184;
$tmp3184 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3184->value = param7;
frost$core$Int64 $tmp3185 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:776:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3186 = &(&local43)->$rawValue;
*$tmp3186 = $tmp3185;
org$frostlang$frostc$ClassDecl$Kind $tmp3187 = *(&local43);
*(&local42) = $tmp3187;
org$frostlang$frostc$ClassDecl$Kind $tmp3188 = *(&local42);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3189;
$tmp3189 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3189->value = $tmp3188;
ITable* $tmp3190 = ((frost$core$Equatable*) $tmp3184)->$class->itable;
while ($tmp3190->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3190 = $tmp3190->next;
}
$fn3192 $tmp3191 = $tmp3190->methods[0];
frost$core$Bit $tmp3193 = $tmp3191(((frost$core$Equatable*) $tmp3184), ((frost$core$Equatable*) $tmp3189));
bool $tmp3194 = $tmp3193.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3189)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3184)));
if ($tmp3194) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:777
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:777:26
frost$io$File** $tmp3195 = &param0->source;
frost$io$File* $tmp3196 = *$tmp3195;
frost$core$Bit $tmp3197 = frost$core$Bit$init$builtin_bit($tmp3196 != NULL);
bool $tmp3198 = $tmp3197.value;
if ($tmp3198) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp3199 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3200, $tmp3199, &$s3201);
abort(); // unreachable
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp3202 = &param0->compiler;
frost$core$Weak* $tmp3203 = *$tmp3202;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3204 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3203);
bool $tmp3205 = $tmp3204.value;
if ($tmp3205) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp3206 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3207, $tmp3206);
abort(); // unreachable
block109:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3208 = &$tmp3203->value;
frost$core$Object* $tmp3209 = *$tmp3208;
frost$core$Frost$ref$frost$core$Object$Q($tmp3209);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3209), param4, &$s3210);
frost$core$Frost$unref$frost$core$Object$Q($tmp3209);
goto block103;
block103:;
goto block99;
block99:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3147);
org$frostlang$frostc$MethodDecl* $tmp3211 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local39) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block92;
block94:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:781
frost$core$Bit $tmp3212 = *(&local37);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:781:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3213 = $tmp3212.value;
bool $tmp3214 = !$tmp3213;
frost$core$Bit $tmp3215 = (frost$core$Bit) {$tmp3214};
bool $tmp3216 = $tmp3215.value;
if ($tmp3216) goto block114; else goto block112;
block114:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3217;
$tmp3217 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3217->value = param7;
frost$core$Int64 $tmp3218 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:781:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3219 = &(&local45)->$rawValue;
*$tmp3219 = $tmp3218;
org$frostlang$frostc$ClassDecl$Kind $tmp3220 = *(&local45);
*(&local44) = $tmp3220;
org$frostlang$frostc$ClassDecl$Kind $tmp3221 = *(&local44);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3222;
$tmp3222 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3222->value = $tmp3221;
ITable* $tmp3223 = ((frost$core$Equatable*) $tmp3217)->$class->itable;
while ($tmp3223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3223 = $tmp3223->next;
}
$fn3225 $tmp3224 = $tmp3223->methods[0];
frost$core$Bit $tmp3226 = $tmp3224(((frost$core$Equatable*) $tmp3217), ((frost$core$Equatable*) $tmp3222));
bool $tmp3227 = $tmp3226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3217)));
if ($tmp3227) goto block113; else goto block112;
block113:;
org$frostlang$frostc$ClassDecl* $tmp3228 = *(&local19);
frost$core$String** $tmp3229 = &$tmp3228->name;
frost$core$String* $tmp3230 = *$tmp3229;
ITable* $tmp3232 = ((frost$core$Equatable*) $tmp3230)->$class->itable;
while ($tmp3232->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3232 = $tmp3232->next;
}
$fn3234 $tmp3233 = $tmp3232->methods[1];
frost$core$Bit $tmp3235 = $tmp3233(((frost$core$Equatable*) $tmp3230), ((frost$core$Equatable*) &$s3231));
bool $tmp3236 = $tmp3235.value;
if ($tmp3236) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:782
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3237 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3238 = *(&local19);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3239 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3240 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3239, $tmp3240);
frost$core$Int64 $tmp3241 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:783:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3242 = &(&local47)->$rawValue;
*$tmp3242 = $tmp3241;
org$frostlang$frostc$MethodDecl$Kind $tmp3243 = *(&local47);
*(&local46) = $tmp3243;
org$frostlang$frostc$MethodDecl$Kind $tmp3244 = *(&local46);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3245 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3246 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp3245, $tmp3246);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:784:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3247 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3248 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3249 = &(&local49)->$rawValue;
*$tmp3249 = $tmp3248;
org$frostlang$frostc$Type$Kind $tmp3250 = *(&local49);
*(&local48) = $tmp3250;
org$frostlang$frostc$Type$Kind $tmp3251 = *(&local48);
org$frostlang$frostc$Position $tmp3252 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3253 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3247, &$s3254, $tmp3251, $tmp3252, $tmp3253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3255 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3255);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3237, $tmp3238, param4, ((frost$core$String*) NULL), $tmp3239, $tmp3244, &$s3256, ((frost$collections$Array*) NULL), $tmp3245, $tmp3247, $tmp3255);
*(&local50) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
org$frostlang$frostc$MethodDecl* $tmp3257 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
*(&local50) = $tmp3237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:785
org$frostlang$frostc$ClassDecl* $tmp3258 = *(&local19);
frost$collections$Array** $tmp3259 = &$tmp3258->methods;
frost$collections$Array* $tmp3260 = *$tmp3259;
org$frostlang$frostc$MethodDecl* $tmp3261 = *(&local50);
frost$collections$Array$add$frost$collections$Array$T($tmp3260, ((frost$core$Object*) $tmp3261));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:786
org$frostlang$frostc$ClassDecl* $tmp3262 = *(&local19);
org$frostlang$frostc$SymbolTable** $tmp3263 = &$tmp3262->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3264 = *$tmp3263;
org$frostlang$frostc$MethodDecl* $tmp3265 = *(&local50);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:786:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3266 = &((org$frostlang$frostc$Symbol*) $tmp3265)->name;
frost$core$String* $tmp3267 = *$tmp3266;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3264, ((org$frostlang$frostc$Symbol*) $tmp3265), $tmp3267);
org$frostlang$frostc$MethodDecl* $tmp3268 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local50) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block112;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:788
frost$core$Bit $tmp3269 = *(&local38);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:788:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3270 = $tmp3269.value;
bool $tmp3271 = !$tmp3270;
frost$core$Bit $tmp3272 = (frost$core$Bit) {$tmp3271};
bool $tmp3273 = $tmp3272.value;
if ($tmp3273) goto block124; else goto block122;
block124:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3274;
$tmp3274 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3274->value = param7;
frost$core$Int64 $tmp3275 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:788:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3276 = &(&local52)->$rawValue;
*$tmp3276 = $tmp3275;
org$frostlang$frostc$ClassDecl$Kind $tmp3277 = *(&local52);
*(&local51) = $tmp3277;
org$frostlang$frostc$ClassDecl$Kind $tmp3278 = *(&local51);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3279;
$tmp3279 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3279->value = $tmp3278;
ITable* $tmp3280 = ((frost$core$Equatable*) $tmp3274)->$class->itable;
while ($tmp3280->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3280 = $tmp3280->next;
}
$fn3282 $tmp3281 = $tmp3280->methods[0];
frost$core$Bit $tmp3283 = $tmp3281(((frost$core$Equatable*) $tmp3274), ((frost$core$Equatable*) $tmp3279));
bool $tmp3284 = $tmp3283.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3279)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3274)));
if ($tmp3284) goto block123; else goto block126;
block126:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3285;
$tmp3285 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3285->value = param7;
frost$core$Int64 $tmp3286 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:788:80
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3287 = &(&local54)->$rawValue;
*$tmp3287 = $tmp3286;
org$frostlang$frostc$ClassDecl$Kind $tmp3288 = *(&local54);
*(&local53) = $tmp3288;
org$frostlang$frostc$ClassDecl$Kind $tmp3289 = *(&local53);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3290;
$tmp3290 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3290->value = $tmp3289;
ITable* $tmp3291 = ((frost$core$Equatable*) $tmp3285)->$class->itable;
while ($tmp3291->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3291 = $tmp3291->next;
}
$fn3293 $tmp3292 = $tmp3291->methods[0];
frost$core$Bit $tmp3294 = $tmp3292(((frost$core$Equatable*) $tmp3285), ((frost$core$Equatable*) $tmp3290));
bool $tmp3295 = $tmp3294.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3290)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3285)));
if ($tmp3295) goto block123; else goto block122;
block123:;
org$frostlang$frostc$ClassDecl* $tmp3296 = *(&local19);
frost$core$String** $tmp3297 = &$tmp3296->name;
frost$core$String* $tmp3298 = *$tmp3297;
ITable* $tmp3300 = ((frost$core$Equatable*) $tmp3298)->$class->itable;
while ($tmp3300->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3300 = $tmp3300->next;
}
$fn3302 $tmp3301 = $tmp3300->methods[1];
frost$core$Bit $tmp3303 = $tmp3301(((frost$core$Equatable*) $tmp3298), ((frost$core$Equatable*) &$s3299));
bool $tmp3304 = $tmp3303.value;
if ($tmp3304) goto block121; else goto block122;
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:790
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3305 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3306 = *(&local19);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3307 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3308 = (frost$core$Int64) {32};
frost$core$Int64 $tmp3309 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:791:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp3310 = $tmp3308.value;
int64_t $tmp3311 = $tmp3309.value;
int64_t $tmp3312 = $tmp3310 | $tmp3311;
frost$core$Int64 $tmp3313 = frost$core$Int64$init$builtin_int64($tmp3312);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3307, $tmp3313);
frost$core$Int64 $tmp3314 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:792:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3315 = &(&local56)->$rawValue;
*$tmp3315 = $tmp3314;
org$frostlang$frostc$MethodDecl$Kind $tmp3316 = *(&local56);
*(&local55) = $tmp3316;
org$frostlang$frostc$MethodDecl$Kind $tmp3317 = *(&local55);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3318 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3319 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp3318, $tmp3319);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:792:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3320 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3321 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3322 = &(&local58)->$rawValue;
*$tmp3322 = $tmp3321;
org$frostlang$frostc$Type$Kind $tmp3323 = *(&local58);
*(&local57) = $tmp3323;
org$frostlang$frostc$Type$Kind $tmp3324 = *(&local57);
org$frostlang$frostc$Position $tmp3325 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3326 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3320, &$s3327, $tmp3324, $tmp3325, $tmp3326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3328 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3328);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3305, $tmp3306, param4, ((frost$core$String*) NULL), $tmp3307, $tmp3317, &$s3329, ((frost$collections$Array*) NULL), $tmp3318, $tmp3320, $tmp3328);
*(&local59) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
org$frostlang$frostc$MethodDecl* $tmp3330 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
*(&local59) = $tmp3305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:793
org$frostlang$frostc$ClassDecl* $tmp3331 = *(&local19);
frost$collections$Array** $tmp3332 = &$tmp3331->methods;
frost$collections$Array* $tmp3333 = *$tmp3332;
org$frostlang$frostc$MethodDecl* $tmp3334 = *(&local59);
frost$collections$Array$add$frost$collections$Array$T($tmp3333, ((frost$core$Object*) $tmp3334));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:794
org$frostlang$frostc$ClassDecl* $tmp3335 = *(&local19);
org$frostlang$frostc$SymbolTable** $tmp3336 = &$tmp3335->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3337 = *$tmp3336;
org$frostlang$frostc$MethodDecl* $tmp3338 = *(&local59);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:794:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3339 = &((org$frostlang$frostc$Symbol*) $tmp3338)->name;
frost$core$String* $tmp3340 = *$tmp3339;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3337, ((org$frostlang$frostc$Symbol*) $tmp3338), $tmp3340);
org$frostlang$frostc$MethodDecl* $tmp3341 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
*(&local59) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block122;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:796
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3342;
$tmp3342 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3342->value = param7;
frost$core$Int64 $tmp3343 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:796:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3344 = &(&local61)->$rawValue;
*$tmp3344 = $tmp3343;
org$frostlang$frostc$ClassDecl$Kind $tmp3345 = *(&local61);
*(&local60) = $tmp3345;
org$frostlang$frostc$ClassDecl$Kind $tmp3346 = *(&local60);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3347;
$tmp3347 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3347->value = $tmp3346;
ITable* $tmp3348 = ((frost$core$Equatable*) $tmp3342)->$class->itable;
while ($tmp3348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3348 = $tmp3348->next;
}
$fn3350 $tmp3349 = $tmp3348->methods[0];
frost$core$Bit $tmp3351 = $tmp3349(((frost$core$Equatable*) $tmp3342), ((frost$core$Equatable*) $tmp3347));
bool $tmp3352 = $tmp3351.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3347)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3342)));
if ($tmp3352) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:797
frost$core$Bit $tmp3353 = frost$core$Bit$init$builtin_bit(false);
*(&local62) = $tmp3353;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:798
org$frostlang$frostc$ClassDecl* $tmp3354 = *(&local19);
frost$collections$Array** $tmp3355 = &$tmp3354->choiceCases;
frost$collections$Array* $tmp3356 = *$tmp3355;
ITable* $tmp3357 = ((frost$collections$CollectionView*) $tmp3356)->$class->itable;
while ($tmp3357->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3357 = $tmp3357->next;
}
$fn3359 $tmp3358 = $tmp3357->methods[0];
frost$core$Int64 $tmp3360 = $tmp3358(((frost$collections$CollectionView*) $tmp3356));
frost$core$Int64 $tmp3361 = (frost$core$Int64) {0};
int64_t $tmp3362 = $tmp3360.value;
int64_t $tmp3363 = $tmp3361.value;
bool $tmp3364 = $tmp3362 > $tmp3363;
frost$core$Bit $tmp3365 = (frost$core$Bit) {$tmp3364};
bool $tmp3366 = $tmp3365.value;
if ($tmp3366) goto block137; else goto block139;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:799
org$frostlang$frostc$ClassDecl* $tmp3367 = *(&local19);
frost$collections$Array** $tmp3368 = &$tmp3367->choiceCases;
frost$collections$Array* $tmp3369 = *$tmp3368;
ITable* $tmp3370 = ((frost$collections$Iterable*) $tmp3369)->$class->itable;
while ($tmp3370->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3370 = $tmp3370->next;
}
$fn3372 $tmp3371 = $tmp3370->methods[0];
frost$collections$Iterator* $tmp3373 = $tmp3371(((frost$collections$Iterable*) $tmp3369));
goto block140;
block140:;
ITable* $tmp3374 = $tmp3373->$class->itable;
while ($tmp3374->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3374 = $tmp3374->next;
}
$fn3376 $tmp3375 = $tmp3374->methods[0];
frost$core$Bit $tmp3377 = $tmp3375($tmp3373);
bool $tmp3378 = $tmp3377.value;
if ($tmp3378) goto block142; else goto block141;
block141:;
*(&local63) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp3379 = $tmp3373->$class->itable;
while ($tmp3379->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3379 = $tmp3379->next;
}
$fn3381 $tmp3380 = $tmp3379->methods[1];
frost$core$Object* $tmp3382 = $tmp3380($tmp3373);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp3382)));
org$frostlang$frostc$ChoiceCase* $tmp3383 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
*(&local63) = ((org$frostlang$frostc$ChoiceCase*) $tmp3382);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:800
org$frostlang$frostc$ChoiceCase* $tmp3384 = *(&local63);
frost$collections$Array** $tmp3385 = &$tmp3384->fields;
frost$collections$Array* $tmp3386 = *$tmp3385;
ITable* $tmp3387 = ((frost$collections$CollectionView*) $tmp3386)->$class->itable;
while ($tmp3387->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3387 = $tmp3387->next;
}
$fn3389 $tmp3388 = $tmp3387->methods[0];
frost$core$Int64 $tmp3390 = $tmp3388(((frost$collections$CollectionView*) $tmp3386));
frost$core$Int64 $tmp3391 = (frost$core$Int64) {0};
int64_t $tmp3392 = $tmp3390.value;
int64_t $tmp3393 = $tmp3391.value;
bool $tmp3394 = $tmp3392 > $tmp3393;
frost$core$Bit $tmp3395 = (frost$core$Bit) {$tmp3394};
bool $tmp3396 = $tmp3395.value;
if ($tmp3396) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:801
frost$core$Bit $tmp3397 = frost$core$Bit$init$builtin_bit(true);
*(&local62) = $tmp3397;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:802
frost$core$Frost$unref$frost$core$Object$Q($tmp3382);
org$frostlang$frostc$ChoiceCase* $tmp3398 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
*(&local63) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block142;
block144:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3382);
org$frostlang$frostc$ChoiceCase* $tmp3399 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3399));
*(&local63) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block140;
block142:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:810
frost$core$Bit $tmp3400 = *(&local62);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:810:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3401 = $tmp3400.value;
bool $tmp3402 = !$tmp3401;
frost$core$Bit $tmp3403 = (frost$core$Bit) {$tmp3402};
bool $tmp3404 = $tmp3403.value;
if ($tmp3404) goto block151; else goto block152;
block139:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:807
org$frostlang$frostc$ClassDecl* $tmp3405 = *(&local19);
org$frostlang$frostc$Position* $tmp3406 = &$tmp3405->position;
org$frostlang$frostc$Position $tmp3407 = *$tmp3406;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:807:22
frost$io$File** $tmp3408 = &param0->source;
frost$io$File* $tmp3409 = *$tmp3408;
frost$core$Bit $tmp3410 = frost$core$Bit$init$builtin_bit($tmp3409 != NULL);
bool $tmp3411 = $tmp3410.value;
if ($tmp3411) goto block146; else goto block147;
block147:;
frost$core$Int64 $tmp3412 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3413, $tmp3412, &$s3414);
abort(); // unreachable
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp3415 = &param0->compiler;
frost$core$Weak* $tmp3416 = *$tmp3415;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3417 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3416);
bool $tmp3418 = $tmp3417.value;
if ($tmp3418) goto block149; else goto block150;
block150:;
frost$core$Int64 $tmp3419 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3420, $tmp3419);
abort(); // unreachable
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3421 = &$tmp3416->value;
frost$core$Object* $tmp3422 = *$tmp3421;
frost$core$Frost$ref$frost$core$Object$Q($tmp3422);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3422), $tmp3407, &$s3423);
frost$core$Frost$unref$frost$core$Object$Q($tmp3422);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:808
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3424 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3425 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
*(&local15) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3426 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3427 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:811
org$frostlang$frostc$ClassDecl* $tmp3430 = *(&local19);
// begin inline call to method org.frostlang.frostc.Type.Value():org.frostlang.frostc.Type from Scanner.frost:811:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:290
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3431 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3432 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:290:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3433 = &(&local65)->$rawValue;
*$tmp3433 = $tmp3432;
org$frostlang$frostc$Type$Kind $tmp3434 = *(&local65);
*(&local64) = $tmp3434;
org$frostlang$frostc$Type$Kind $tmp3435 = *(&local64);
org$frostlang$frostc$Position $tmp3436 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3437 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3431, &$s3438, $tmp3435, $tmp3436, $tmp3437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
org$frostlang$frostc$Type** $tmp3439 = &$tmp3430->rawSuper;
org$frostlang$frostc$Type* $tmp3440 = *$tmp3439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
org$frostlang$frostc$Type** $tmp3441 = &$tmp3430->rawSuper;
*$tmp3441 = $tmp3431;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
goto block152;
block152:;
goto block135;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:814
frost$core$Weak** $tmp3442 = &param0->compiler;
frost$core$Weak* $tmp3443 = *$tmp3442;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:814:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3444 = &$tmp3443->_valid;
frost$core$Bit $tmp3445 = *$tmp3444;
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block158; else goto block159;
block159:;
frost$core$Int64 $tmp3447 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3448, $tmp3447);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3449 = &$tmp3443->value;
frost$core$Object* $tmp3450 = *$tmp3449;
frost$core$Frost$ref$frost$core$Object$Q($tmp3450);
frost$collections$Stack** $tmp3451 = &((org$frostlang$frostc$Compiler*) $tmp3450)->currentClass;
frost$collections$Stack* $tmp3452 = *$tmp3451;
frost$core$Object* $tmp3453 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3452);
frost$core$Frost$unref$frost$core$Object$Q($tmp3453);
frost$core$Frost$unref$frost$core$Object$Q($tmp3450);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:815
org$frostlang$frostc$ClassDecl* $tmp3454 = *(&local19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3454));
org$frostlang$frostc$ClassDecl* $tmp3455 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3455));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3456 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3456));
*(&local15) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3458 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3460 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3454;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array** $tmp3461 = &param1->classes;
frost$collections$Array* $tmp3462 = *$tmp3461;
ITable* $tmp3463 = ((frost$collections$Iterable*) $tmp3462)->$class->itable;
while ($tmp3463->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3463 = $tmp3463->next;
}
$fn3465 $tmp3464 = $tmp3463->methods[0];
frost$collections$Iterator* $tmp3466 = $tmp3464(((frost$collections$Iterable*) $tmp3462));
goto block1;
block1:;
ITable* $tmp3467 = $tmp3466->$class->itable;
while ($tmp3467->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3467 = $tmp3467->next;
}
$fn3469 $tmp3468 = $tmp3467->methods[0];
frost$core$Bit $tmp3470 = $tmp3468($tmp3466);
bool $tmp3471 = $tmp3470.value;
if ($tmp3471) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3472 = $tmp3466->$class->itable;
while ($tmp3472->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3472 = $tmp3472->next;
}
$fn3474 $tmp3473 = $tmp3472->methods[1];
frost$core$Object* $tmp3475 = $tmp3473($tmp3466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3475)));
org$frostlang$frostc$ClassDecl* $tmp3476 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp3475);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
org$frostlang$frostc$ClassDecl* $tmp3477 = *(&local0);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:821:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3477));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array** $tmp3478 = &$tmp3477->classes;
frost$collections$Array* $tmp3479 = *$tmp3478;
ITable* $tmp3480 = ((frost$collections$Iterable*) $tmp3479)->$class->itable;
while ($tmp3480->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3480 = $tmp3480->next;
}
$fn3482 $tmp3481 = $tmp3480->methods[0];
frost$collections$Iterator* $tmp3483 = $tmp3481(((frost$collections$Iterable*) $tmp3479));
goto block5;
block5:;
ITable* $tmp3484 = $tmp3483->$class->itable;
while ($tmp3484->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3484 = $tmp3484->next;
}
$fn3486 $tmp3485 = $tmp3484->methods[0];
frost$core$Bit $tmp3487 = $tmp3485($tmp3483);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3489 = $tmp3483->$class->itable;
while ($tmp3489->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3489 = $tmp3489->next;
}
$fn3491 $tmp3490 = $tmp3489->methods[1];
frost$core$Object* $tmp3492 = $tmp3490($tmp3483);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3492)));
org$frostlang$frostc$ClassDecl* $tmp3493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3493));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp3492);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
org$frostlang$frostc$ClassDecl* $tmp3494 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:821:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3494));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array** $tmp3495 = &$tmp3494->classes;
frost$collections$Array* $tmp3496 = *$tmp3495;
ITable* $tmp3497 = ((frost$collections$Iterable*) $tmp3496)->$class->itable;
while ($tmp3497->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3497 = $tmp3497->next;
}
$fn3499 $tmp3498 = $tmp3497->methods[0];
frost$collections$Iterator* $tmp3500 = $tmp3498(((frost$collections$Iterable*) $tmp3496));
goto block9;
block9:;
ITable* $tmp3501 = $tmp3500->$class->itable;
while ($tmp3501->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3501 = $tmp3501->next;
}
$fn3503 $tmp3502 = $tmp3501->methods[0];
frost$core$Bit $tmp3504 = $tmp3502($tmp3500);
bool $tmp3505 = $tmp3504.value;
if ($tmp3505) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3506 = $tmp3500->$class->itable;
while ($tmp3506->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3506 = $tmp3506->next;
}
$fn3508 $tmp3507 = $tmp3506->methods[1];
frost$core$Object* $tmp3509 = $tmp3507($tmp3500);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3509)));
org$frostlang$frostc$ClassDecl* $tmp3510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) $tmp3509);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
org$frostlang$frostc$ClassDecl* $tmp3511 = *(&local2);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3511, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3509);
org$frostlang$frostc$ClassDecl* $tmp3512 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3512));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
frost$core$Frost$unref$frost$core$Object$Q($tmp3492);
org$frostlang$frostc$ClassDecl* $tmp3513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
frost$core$Frost$unref$frost$core$Object$Q($tmp3475);
org$frostlang$frostc$ClassDecl* $tmp3514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3466));
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl$Kind local1;
org$frostlang$frostc$ClassDecl$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$MethodDecl* local7 = NULL;
org$frostlang$frostc$MethodDecl$Kind local8;
org$frostlang$frostc$MethodDecl$Kind local9;
org$frostlang$frostc$Type$Kind local10;
org$frostlang$frostc$Type$Kind local11;
org$frostlang$frostc$MethodDecl* local12 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:827
org$frostlang$frostc$ClassDecl** $tmp3515 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3516 = *$tmp3515;
frost$core$Bit $tmp3517 = frost$core$Bit$init$builtin_bit($tmp3516 == NULL);
bool $tmp3518 = $tmp3517.value;
if ($tmp3518) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:828
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:829
ITable* $tmp3520 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp3520->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3520 = $tmp3520->next;
}
$fn3522 $tmp3521 = $tmp3520->methods[1];
frost$core$Bit $tmp3523 = $tmp3521(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s3519));
bool $tmp3524 = $tmp3523.value;
if ($tmp3524) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:830
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:830:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp3525 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s3526);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
frost$core$String* $tmp3527 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
*(&local0) = $tmp3525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:833
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3528));
frost$core$String* $tmp3529 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
*(&local0) = &$s3530;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:835
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp3531 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp3532 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3533 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp3533);
frost$core$Int64 $tmp3534 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:836:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3535 = &(&local2)->$rawValue;
*$tmp3535 = $tmp3534;
org$frostlang$frostc$ClassDecl$Kind $tmp3536 = *(&local2);
*(&local1) = $tmp3536;
org$frostlang$frostc$ClassDecl$Kind $tmp3537 = *(&local1);
frost$core$String* $tmp3538 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3539 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3539);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3540 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3540);
frost$core$Weak** $tmp3541 = &param0->compiler;
frost$core$Weak* $tmp3542 = *$tmp3541;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:837:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3543 = &$tmp3542->_valid;
frost$core$Bit $tmp3544 = *$tmp3543;
bool $tmp3545 = $tmp3544.value;
if ($tmp3545) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp3546 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3547, $tmp3546);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3548 = &$tmp3542->value;
frost$core$Object* $tmp3549 = *$tmp3548;
frost$core$Frost$ref$frost$core$Object$Q($tmp3549);
org$frostlang$frostc$SymbolTable** $tmp3550 = &((org$frostlang$frostc$Compiler*) $tmp3549)->root;
org$frostlang$frostc$SymbolTable* $tmp3551 = *$tmp3550;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp3531, param1, $tmp3532, param2, ((frost$core$String*) NULL), $tmp3533, $tmp3537, $tmp3538, ((frost$collections$ListView*) $tmp3539), $tmp3540, $tmp3551);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
org$frostlang$frostc$ClassDecl** $tmp3552 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3553 = *$tmp3552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3553));
org$frostlang$frostc$ClassDecl** $tmp3554 = &param0->bareCodeClass;
*$tmp3554 = $tmp3531;
frost$core$Frost$unref$frost$core$Object$Q($tmp3549);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:838
org$frostlang$frostc$ClassDecl** $tmp3555 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3556 = *$tmp3555;
ITable* $tmp3557 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp3557->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp3557 = $tmp3557->next;
}
$fn3559 $tmp3558 = $tmp3557->methods[0];
$tmp3558(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp3556));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:839
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3560 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3561 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3562 = *$tmp3561;
org$frostlang$frostc$Position $tmp3563 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3564 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3565 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3564, $tmp3565);
frost$core$Int64 $tmp3566 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:840:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3567 = &(&local4)->$rawValue;
*$tmp3567 = $tmp3566;
org$frostlang$frostc$MethodDecl$Kind $tmp3568 = *(&local4);
*(&local3) = $tmp3568;
org$frostlang$frostc$MethodDecl$Kind $tmp3569 = *(&local3);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3570 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3571 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp3570, $tmp3571);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:841:40
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3572 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3573 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3574 = &(&local6)->$rawValue;
*$tmp3574 = $tmp3573;
org$frostlang$frostc$Type$Kind $tmp3575 = *(&local6);
*(&local5) = $tmp3575;
org$frostlang$frostc$Type$Kind $tmp3576 = *(&local5);
org$frostlang$frostc$Position $tmp3577 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3578 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3572, &$s3579, $tmp3576, $tmp3577, $tmp3578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3580 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3580);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3560, $tmp3562, $tmp3563, ((frost$core$String*) NULL), $tmp3564, $tmp3569, &$s3581, ((frost$collections$Array*) NULL), $tmp3570, $tmp3572, $tmp3580);
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
org$frostlang$frostc$MethodDecl* $tmp3582 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
*(&local7) = $tmp3560;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3560));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:842
org$frostlang$frostc$ClassDecl** $tmp3583 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3584 = *$tmp3583;
frost$collections$Array** $tmp3585 = &$tmp3584->methods;
frost$collections$Array* $tmp3586 = *$tmp3585;
org$frostlang$frostc$MethodDecl* $tmp3587 = *(&local7);
frost$collections$Array$add$frost$collections$Array$T($tmp3586, ((frost$core$Object*) $tmp3587));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:843
org$frostlang$frostc$ClassDecl** $tmp3588 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3589 = *$tmp3588;
org$frostlang$frostc$SymbolTable** $tmp3590 = &$tmp3589->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3591 = *$tmp3590;
org$frostlang$frostc$MethodDecl* $tmp3592 = *(&local7);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:843:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3593 = &((org$frostlang$frostc$Symbol*) $tmp3592)->name;
frost$core$String* $tmp3594 = *$tmp3593;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3591, ((org$frostlang$frostc$Symbol*) $tmp3592), $tmp3594);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:844
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3595 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3596 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3597 = *$tmp3596;
org$frostlang$frostc$Position $tmp3598 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3599 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3600 = (frost$core$Int64) {32};
frost$core$Int64 $tmp3601 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:845:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp3602 = $tmp3600.value;
int64_t $tmp3603 = $tmp3601.value;
int64_t $tmp3604 = $tmp3602 | $tmp3603;
frost$core$Int64 $tmp3605 = frost$core$Int64$init$builtin_int64($tmp3604);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3599, $tmp3605);
frost$core$Int64 $tmp3606 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:846:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3607 = &(&local9)->$rawValue;
*$tmp3607 = $tmp3606;
org$frostlang$frostc$MethodDecl$Kind $tmp3608 = *(&local9);
*(&local8) = $tmp3608;
org$frostlang$frostc$MethodDecl$Kind $tmp3609 = *(&local8);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3610 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3611 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp3610, $tmp3611);
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:846:75
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3612 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3613 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3614 = &(&local11)->$rawValue;
*$tmp3614 = $tmp3613;
org$frostlang$frostc$Type$Kind $tmp3615 = *(&local11);
*(&local10) = $tmp3615;
org$frostlang$frostc$Type$Kind $tmp3616 = *(&local10);
org$frostlang$frostc$Position $tmp3617 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3618 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3612, &$s3619, $tmp3616, $tmp3617, $tmp3618);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3620 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3620);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3595, $tmp3597, $tmp3598, ((frost$core$String*) NULL), $tmp3599, $tmp3609, &$s3621, ((frost$collections$Array*) NULL), $tmp3610, $tmp3612, $tmp3620);
*(&local12) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
org$frostlang$frostc$MethodDecl* $tmp3622 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
*(&local12) = $tmp3595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:847
org$frostlang$frostc$ClassDecl** $tmp3623 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3624 = *$tmp3623;
frost$collections$Array** $tmp3625 = &$tmp3624->methods;
frost$collections$Array* $tmp3626 = *$tmp3625;
org$frostlang$frostc$MethodDecl* $tmp3627 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp3626, ((frost$core$Object*) $tmp3627));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:848
org$frostlang$frostc$ClassDecl** $tmp3628 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3629 = *$tmp3628;
org$frostlang$frostc$SymbolTable** $tmp3630 = &$tmp3629->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3631 = *$tmp3630;
org$frostlang$frostc$MethodDecl* $tmp3632 = *(&local12);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:848:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3633 = &((org$frostlang$frostc$Symbol*) $tmp3632)->name;
frost$core$String* $tmp3634 = *$tmp3633;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3631, ((org$frostlang$frostc$Symbol*) $tmp3632), $tmp3634);
org$frostlang$frostc$MethodDecl* $tmp3635 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
*(&local12) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3636 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3637 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp3638 = &param0->source;
frost$io$File* $tmp3639 = *$tmp3638;
frost$core$Bit $tmp3640 = frost$core$Bit$init$builtin_bit($tmp3639 != NULL);
bool $tmp3641 = $tmp3640.value;
if ($tmp3641) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3642 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3643, $tmp3642, &$s3644);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp3645 = &param0->compiler;
frost$core$Weak* $tmp3646 = *$tmp3645;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3647 = &$tmp3646->_valid;
frost$core$Bit $tmp3648 = *$tmp3647;
bool $tmp3649 = $tmp3648.value;
if ($tmp3649) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3650 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3651, $tmp3650);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3652 = &$tmp3646->value;
frost$core$Object* $tmp3653 = *$tmp3652;
frost$core$Frost$ref$frost$core$Object$Q($tmp3653);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3653), param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3653);
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
org$frostlang$frostc$ClassDecl* local18 = NULL;
org$frostlang$frostc$ClassDecl* local19 = NULL;
org$frostlang$frostc$Position local20;
org$frostlang$frostc$ASTNode* local21 = NULL;
org$frostlang$frostc$FixedArray* local22 = NULL;
org$frostlang$frostc$MethodDecl$Kind local23;
frost$core$String* local24 = NULL;
org$frostlang$frostc$FixedArray* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$ASTNode* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$MethodDecl$Kind local29;
org$frostlang$frostc$MethodDecl$Kind local30;
frost$core$String* local31 = NULL;
frost$collections$Array* local32 = NULL;
frost$collections$Array* local33 = NULL;
frost$collections$Array* local34 = NULL;
org$frostlang$frostc$ASTNode* local35 = NULL;
org$frostlang$frostc$Position local36;
frost$core$String* local37 = NULL;
org$frostlang$frostc$ASTNode* local38 = NULL;
org$frostlang$frostc$ASTNode* local39 = NULL;
org$frostlang$frostc$Type* local40 = NULL;
org$frostlang$frostc$Type$Kind local41;
org$frostlang$frostc$Type$Kind local42;
org$frostlang$frostc$MethodDecl$Kind local43;
org$frostlang$frostc$MethodDecl$Kind local44;
org$frostlang$frostc$MethodDecl* local45 = NULL;
org$frostlang$frostc$MethodDecl* local46 = NULL;
org$frostlang$frostc$Position local47;
org$frostlang$frostc$ASTNode* local48 = NULL;
org$frostlang$frostc$FixedArray* local49 = NULL;
org$frostlang$frostc$ASTNode* local50 = NULL;
frost$core$Int64 local51;
frost$core$Int64 local52;
org$frostlang$frostc$FieldDecl* local53 = NULL;
org$frostlang$frostc$FieldDecl$Kind local54;
org$frostlang$frostc$FieldDecl$Kind local55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:858
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp3654 = &param0->source;
frost$io$File* $tmp3655 = *$tmp3654;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
frost$io$File** $tmp3656 = &param0->source;
*$tmp3656 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Int64* $tmp3657 = &param2->$rawValue;
frost$core$Int64 $tmp3658 = *$tmp3657;
frost$core$Int64 $tmp3659 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:860:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3660 = $tmp3658.value;
int64_t $tmp3661 = $tmp3659.value;
bool $tmp3662 = $tmp3660 == $tmp3661;
frost$core$Bit $tmp3663 = frost$core$Bit$init$builtin_bit($tmp3662);
bool $tmp3664 = $tmp3663.value;
if ($tmp3664) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp3665 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3666 = *$tmp3665;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
org$frostlang$frostc$FixedArray* $tmp3667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
*(&local0) = $tmp3666;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:861
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3668 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3668);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
frost$collections$Array* $tmp3669 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
*(&local1) = $tmp3668;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:862
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3670));
frost$core$String* $tmp3671 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
*(&local2) = &$s3672;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:863
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp3673 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp3673);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
frost$collections$HashMap* $tmp3674 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local3) = $tmp3673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:864
org$frostlang$frostc$FixedArray* $tmp3675 = *(&local0);
ITable* $tmp3676 = ((frost$collections$Iterable*) $tmp3675)->$class->itable;
while ($tmp3676->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3676 = $tmp3676->next;
}
$fn3678 $tmp3677 = $tmp3676->methods[0];
frost$collections$Iterator* $tmp3679 = $tmp3677(((frost$collections$Iterable*) $tmp3675));
goto block4;
block4:;
ITable* $tmp3680 = $tmp3679->$class->itable;
while ($tmp3680->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3680 = $tmp3680->next;
}
$fn3682 $tmp3681 = $tmp3680->methods[0];
frost$core$Bit $tmp3683 = $tmp3681($tmp3679);
bool $tmp3684 = $tmp3683.value;
if ($tmp3684) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3685 = $tmp3679->$class->itable;
while ($tmp3685->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3685 = $tmp3685->next;
}
$fn3687 $tmp3686 = $tmp3685->methods[1];
frost$core$Object* $tmp3688 = $tmp3686($tmp3679);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3688)));
org$frostlang$frostc$ASTNode* $tmp3689 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp3688);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:865
org$frostlang$frostc$ASTNode* $tmp3690 = *(&local4);
frost$core$Int64* $tmp3691 = &$tmp3690->$rawValue;
frost$core$Int64 $tmp3692 = *$tmp3691;
frost$core$Int64 $tmp3693 = (frost$core$Int64) {33};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:866:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3694 = $tmp3692.value;
int64_t $tmp3695 = $tmp3693.value;
bool $tmp3696 = $tmp3694 == $tmp3695;
frost$core$Bit $tmp3697 = frost$core$Bit$init$builtin_bit($tmp3696);
bool $tmp3698 = $tmp3697.value;
if ($tmp3698) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3699 = (org$frostlang$frostc$Position*) ($tmp3690->$data + 0);
org$frostlang$frostc$Position $tmp3700 = *$tmp3699;
frost$core$String** $tmp3701 = (frost$core$String**) ($tmp3690->$data + 24);
frost$core$String* $tmp3702 = *$tmp3701;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
frost$core$String* $tmp3703 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3703));
*(&local5) = $tmp3702;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:867
frost$core$String* $tmp3704 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
frost$core$String* $tmp3705 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
*(&local2) = $tmp3704;
frost$core$String* $tmp3706 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp3707 = (frost$core$Int64) {52};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:869:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3708 = $tmp3692.value;
int64_t $tmp3709 = $tmp3707.value;
bool $tmp3710 = $tmp3708 == $tmp3709;
frost$core$Bit $tmp3711 = frost$core$Bit$init$builtin_bit($tmp3710);
bool $tmp3712 = $tmp3711.value;
if ($tmp3712) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3713 = (org$frostlang$frostc$Position*) ($tmp3690->$data + 0);
org$frostlang$frostc$Position $tmp3714 = *$tmp3713;
frost$core$String** $tmp3715 = (frost$core$String**) ($tmp3690->$data + 24);
frost$core$String* $tmp3716 = *$tmp3715;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
frost$core$String* $tmp3717 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
*(&local6) = $tmp3716;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:870
frost$core$String* $tmp3718 = *(&local6);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from Scanner.frost:870:60
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.stub:229:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp3719 = &$tmp3718->_length;
frost$core$Int64 $tmp3720 = *$tmp3719;
frost$core$String$Index $tmp3721 = frost$core$String$Index$init$frost$core$Int64($tmp3720);
frost$core$String$Index$nullable $tmp3722 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp3718, &$s3723, $tmp3721);
*(&local7) = $tmp3722;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:871
*(&local8) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:872
frost$core$String$Index$nullable $tmp3724 = *(&local7);
frost$core$Bit $tmp3725 = frost$core$Bit$init$builtin_bit($tmp3724.nonnull);
bool $tmp3726 = $tmp3725.value;
if ($tmp3726) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:873
frost$core$String* $tmp3727 = *(&local6);
frost$core$String* $tmp3728 = *(&local6);
frost$core$String$Index$nullable $tmp3729 = *(&local7);
frost$core$String$Index $tmp3730 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp3728, ((frost$core$String$Index) $tmp3729.value));
frost$core$Bit $tmp3731 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3732 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3730, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3731);
frost$core$String* $tmp3733 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp3727, $tmp3732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
frost$core$String* $tmp3734 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
*(&local8) = $tmp3733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:876
frost$core$String* $tmp3735 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3735));
frost$core$String* $tmp3736 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3736));
*(&local8) = $tmp3735;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:878
frost$collections$HashMap* $tmp3737 = *(&local3);
frost$core$String* $tmp3738 = *(&local8);
frost$core$String* $tmp3739 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3737, ((frost$collections$Key*) $tmp3738), ((frost$core$Object*) $tmp3739));
frost$core$String* $tmp3740 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp3741 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block12:;
frost$core$Int64 $tmp3742 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:880:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3743 = $tmp3692.value;
int64_t $tmp3744 = $tmp3742.value;
bool $tmp3745 = $tmp3743 == $tmp3744;
frost$core$Bit $tmp3746 = frost$core$Bit$init$builtin_bit($tmp3745);
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp3748 = (org$frostlang$frostc$Position*) ($tmp3690->$data + 0);
org$frostlang$frostc$Position $tmp3749 = *$tmp3748;
*(&local9) = $tmp3749;
org$frostlang$frostc$ASTNode** $tmp3750 = (org$frostlang$frostc$ASTNode**) ($tmp3690->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3751 = *$tmp3750;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
org$frostlang$frostc$ASTNode* $tmp3752 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
*(&local10) = $tmp3751;
org$frostlang$frostc$FixedArray** $tmp3753 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3754 = *$tmp3753;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
org$frostlang$frostc$FixedArray* $tmp3755 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
*(&local11) = $tmp3754;
org$frostlang$frostc$ClassDecl$Kind* $tmp3756 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp3690->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp3757 = *$tmp3756;
*(&local12) = $tmp3757;
frost$core$String** $tmp3758 = (frost$core$String**) ($tmp3690->$data + 48);
frost$core$String* $tmp3759 = *$tmp3758;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3759));
frost$core$String* $tmp3760 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
*(&local13) = $tmp3759;
org$frostlang$frostc$FixedArray** $tmp3761 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3762 = *$tmp3761;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3762));
org$frostlang$frostc$FixedArray* $tmp3763 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
*(&local14) = $tmp3762;
org$frostlang$frostc$FixedArray** $tmp3764 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3765 = *$tmp3764;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
org$frostlang$frostc$FixedArray* $tmp3766 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
*(&local15) = $tmp3765;
org$frostlang$frostc$FixedArray** $tmp3767 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3768 = *$tmp3767;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
org$frostlang$frostc$FixedArray* $tmp3769 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3769));
*(&local16) = $tmp3768;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:882
frost$collections$HashMap* $tmp3770 = *(&local3);
frost$core$String* $tmp3771 = *(&local2);
org$frostlang$frostc$Position $tmp3772 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3773 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3774 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3775 = *(&local12);
frost$core$String* $tmp3776 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3777 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3778 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3779 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3780 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3770), $tmp3771, $tmp3772, $tmp3773, $tmp3774, $tmp3775, $tmp3776, $tmp3777, $tmp3778, $tmp3779);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3780));
org$frostlang$frostc$ClassDecl* $tmp3781 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
*(&local17) = $tmp3780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3780));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:884
org$frostlang$frostc$ClassDecl* $tmp3782 = *(&local17);
frost$core$Bit $tmp3783 = frost$core$Bit$init$builtin_bit($tmp3782 != NULL);
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:885
org$frostlang$frostc$ClassDecl* $tmp3785 = *(&local17);
frost$collections$Array* $tmp3786 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:885:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
frost$collections$Array$add$frost$collections$Array$T($tmp3786, ((frost$core$Object*) $tmp3785));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array** $tmp3787 = &$tmp3785->classes;
frost$collections$Array* $tmp3788 = *$tmp3787;
ITable* $tmp3789 = ((frost$collections$Iterable*) $tmp3788)->$class->itable;
while ($tmp3789->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3789 = $tmp3789->next;
}
$fn3791 $tmp3790 = $tmp3789->methods[0];
frost$collections$Iterator* $tmp3792 = $tmp3790(((frost$collections$Iterable*) $tmp3788));
goto block25;
block25:;
ITable* $tmp3793 = $tmp3792->$class->itable;
while ($tmp3793->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3793 = $tmp3793->next;
}
$fn3795 $tmp3794 = $tmp3793->methods[0];
frost$core$Bit $tmp3796 = $tmp3794($tmp3792);
bool $tmp3797 = $tmp3796.value;
if ($tmp3797) goto block27; else goto block26;
block26:;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3798 = $tmp3792->$class->itable;
while ($tmp3798->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3798 = $tmp3798->next;
}
$fn3800 $tmp3799 = $tmp3798->methods[1];
frost$core$Object* $tmp3801 = $tmp3799($tmp3792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3801)));
org$frostlang$frostc$ClassDecl* $tmp3802 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) $tmp3801);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
org$frostlang$frostc$ClassDecl* $tmp3803 = *(&local18);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:821:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
frost$collections$Array$add$frost$collections$Array$T($tmp3786, ((frost$core$Object*) $tmp3803));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array** $tmp3804 = &$tmp3803->classes;
frost$collections$Array* $tmp3805 = *$tmp3804;
ITable* $tmp3806 = ((frost$collections$Iterable*) $tmp3805)->$class->itable;
while ($tmp3806->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3806 = $tmp3806->next;
}
$fn3808 $tmp3807 = $tmp3806->methods[0];
frost$collections$Iterator* $tmp3809 = $tmp3807(((frost$collections$Iterable*) $tmp3805));
goto block29;
block29:;
ITable* $tmp3810 = $tmp3809->$class->itable;
while ($tmp3810->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3810 = $tmp3810->next;
}
$fn3812 $tmp3811 = $tmp3810->methods[0];
frost$core$Bit $tmp3813 = $tmp3811($tmp3809);
bool $tmp3814 = $tmp3813.value;
if ($tmp3814) goto block31; else goto block30;
block30:;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3815 = $tmp3809->$class->itable;
while ($tmp3815->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3815 = $tmp3815->next;
}
$fn3817 $tmp3816 = $tmp3815->methods[1];
frost$core$Object* $tmp3818 = $tmp3816($tmp3809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3818)));
org$frostlang$frostc$ClassDecl* $tmp3819 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3819));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) $tmp3818);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
org$frostlang$frostc$ClassDecl* $tmp3820 = *(&local19);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3820, $tmp3786);
frost$core$Frost$unref$frost$core$Object$Q($tmp3818);
org$frostlang$frostc$ClassDecl* $tmp3821 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
frost$core$Frost$unref$frost$core$Object$Q($tmp3801);
org$frostlang$frostc$ClassDecl* $tmp3822 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3792));
goto block23;
block23:;
org$frostlang$frostc$ClassDecl* $tmp3823 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3824 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3825 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3826 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3827 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3828 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3829 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3829));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block20:;
frost$core$Int64 $tmp3830 = (frost$core$Int64) {29};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:888:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3831 = $tmp3692.value;
int64_t $tmp3832 = $tmp3830.value;
bool $tmp3833 = $tmp3831 == $tmp3832;
frost$core$Bit $tmp3834 = frost$core$Bit$init$builtin_bit($tmp3833);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3836 = (org$frostlang$frostc$Position*) ($tmp3690->$data + 0);
org$frostlang$frostc$Position $tmp3837 = *$tmp3836;
*(&local20) = $tmp3837;
org$frostlang$frostc$ASTNode** $tmp3838 = (org$frostlang$frostc$ASTNode**) ($tmp3690->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3839 = *$tmp3838;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
org$frostlang$frostc$ASTNode* $tmp3840 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
*(&local21) = $tmp3839;
org$frostlang$frostc$FixedArray** $tmp3841 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3842 = *$tmp3841;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
org$frostlang$frostc$FixedArray* $tmp3843 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3843));
*(&local22) = $tmp3842;
org$frostlang$frostc$MethodDecl$Kind* $tmp3844 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3690->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3845 = *$tmp3844;
*(&local23) = $tmp3845;
frost$core$String** $tmp3846 = (frost$core$String**) ($tmp3690->$data + 48);
frost$core$String* $tmp3847 = *$tmp3846;
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
frost$core$String* $tmp3848 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
*(&local24) = $tmp3847;
org$frostlang$frostc$FixedArray** $tmp3849 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3850 = *$tmp3849;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3850));
org$frostlang$frostc$FixedArray* $tmp3851 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
*(&local25) = $tmp3850;
org$frostlang$frostc$FixedArray** $tmp3852 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3853 = *$tmp3852;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
org$frostlang$frostc$FixedArray* $tmp3854 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3854));
*(&local26) = $tmp3853;
org$frostlang$frostc$ASTNode** $tmp3855 = (org$frostlang$frostc$ASTNode**) ($tmp3690->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3856 = *$tmp3855;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
org$frostlang$frostc$ASTNode* $tmp3857 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3857));
*(&local27) = $tmp3856;
org$frostlang$frostc$FixedArray** $tmp3858 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3859 = *$tmp3858;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3859));
org$frostlang$frostc$FixedArray* $tmp3860 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3860));
*(&local28) = $tmp3859;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:890
org$frostlang$frostc$MethodDecl$Kind $tmp3861 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3862;
$tmp3862 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3862->value = $tmp3861;
frost$core$Int64 $tmp3863 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:890:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3864 = &(&local30)->$rawValue;
*$tmp3864 = $tmp3863;
org$frostlang$frostc$MethodDecl$Kind $tmp3865 = *(&local30);
*(&local29) = $tmp3865;
org$frostlang$frostc$MethodDecl$Kind $tmp3866 = *(&local29);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3867;
$tmp3867 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3867->value = $tmp3866;
ITable* $tmp3868 = ((frost$core$Equatable*) $tmp3862)->$class->itable;
while ($tmp3868->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3868 = $tmp3868->next;
}
$fn3870 $tmp3869 = $tmp3868->methods[0];
frost$core$Bit $tmp3871 = $tmp3869(((frost$core$Equatable*) $tmp3862), ((frost$core$Equatable*) $tmp3867));
bool $tmp3872 = $tmp3871.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3867)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3862)));
if ($tmp3872) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:891
org$frostlang$frostc$Position $tmp3873 = *(&local20);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:891:38
frost$io$File** $tmp3874 = &param0->source;
frost$io$File* $tmp3875 = *$tmp3874;
frost$core$Bit $tmp3876 = frost$core$Bit$init$builtin_bit($tmp3875 != NULL);
bool $tmp3877 = $tmp3876.value;
if ($tmp3877) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp3878 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3879, $tmp3878, &$s3880);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp3881 = &param0->compiler;
frost$core$Weak* $tmp3882 = *$tmp3881;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3883 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3882);
bool $tmp3884 = $tmp3883.value;
if ($tmp3884) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp3885 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3886, $tmp3885);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3887 = &$tmp3882->value;
frost$core$Object* $tmp3888 = *$tmp3887;
frost$core$Frost$ref$frost$core$Object$Q($tmp3888);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3888), $tmp3873, &$s3889);
frost$core$Frost$unref$frost$core$Object$Q($tmp3888);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:892
org$frostlang$frostc$FixedArray* $tmp3890 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3891 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3892 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3893 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3894 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3895 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3896 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3688);
org$frostlang$frostc$ASTNode* $tmp3897 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3897));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:894
frost$collections$HashMap* $tmp3898 = *(&local3);
frost$core$String* $tmp3899 = *(&local2);
frost$collections$Array* $tmp3900 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3898), $tmp3899, ((frost$collections$List*) $tmp3900));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:895
*(&local31) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:896
frost$core$String* $tmp3901 = *(&local24);
frost$core$Bit $tmp3902 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3901, &$s3903);
bool $tmp3904 = $tmp3902.value;
if ($tmp3904) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:897
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3905));
frost$core$String* $tmp3906 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local31) = &$s3907;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:898
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3908 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3908);
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
frost$collections$Array* $tmp3909 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
*(&local32) = $tmp3908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:899
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3910 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3910);
*(&local33) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
frost$collections$Array* $tmp3911 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
*(&local33) = $tmp3910;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:900
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3912 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3912);
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
frost$collections$Array* $tmp3913 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
*(&local34) = $tmp3912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:901
org$frostlang$frostc$FixedArray* $tmp3914 = *(&local26);
ITable* $tmp3915 = ((frost$collections$Iterable*) $tmp3914)->$class->itable;
while ($tmp3915->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3915 = $tmp3915->next;
}
$fn3917 $tmp3916 = $tmp3915->methods[0];
frost$collections$Iterator* $tmp3918 = $tmp3916(((frost$collections$Iterable*) $tmp3914));
goto block47;
block47:;
ITable* $tmp3919 = $tmp3918->$class->itable;
while ($tmp3919->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3919 = $tmp3919->next;
}
$fn3921 $tmp3920 = $tmp3919->methods[0];
frost$core$Bit $tmp3922 = $tmp3920($tmp3918);
bool $tmp3923 = $tmp3922.value;
if ($tmp3923) goto block49; else goto block48;
block48:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3924 = $tmp3918->$class->itable;
while ($tmp3924->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3924 = $tmp3924->next;
}
$fn3926 $tmp3925 = $tmp3924->methods[1];
frost$core$Object* $tmp3927 = $tmp3925($tmp3918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3927)));
org$frostlang$frostc$ASTNode* $tmp3928 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp3927);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:902
org$frostlang$frostc$ASTNode* $tmp3929 = *(&local35);
frost$core$Int64* $tmp3930 = &$tmp3929->$rawValue;
frost$core$Int64 $tmp3931 = *$tmp3930;
frost$core$Int64 $tmp3932 = (frost$core$Int64) {34};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:903:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3933 = $tmp3931.value;
int64_t $tmp3934 = $tmp3932.value;
bool $tmp3935 = $tmp3933 == $tmp3934;
frost$core$Bit $tmp3936 = frost$core$Bit$init$builtin_bit($tmp3935);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Position* $tmp3938 = (org$frostlang$frostc$Position*) ($tmp3929->$data + 0);
org$frostlang$frostc$Position $tmp3939 = *$tmp3938;
*(&local36) = $tmp3939;
frost$core$String** $tmp3940 = (frost$core$String**) ($tmp3929->$data + 24);
frost$core$String* $tmp3941 = *$tmp3940;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
frost$core$String* $tmp3942 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3942));
*(&local37) = $tmp3941;
org$frostlang$frostc$ASTNode** $tmp3943 = (org$frostlang$frostc$ASTNode**) ($tmp3929->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3944 = *$tmp3943;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3944));
org$frostlang$frostc$ASTNode* $tmp3945 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3945));
*(&local38) = $tmp3944;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:904
frost$collections$Array* $tmp3946 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp3947 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp3948 = *(&local37);
org$frostlang$frostc$ASTNode* $tmp3949 = *(&local38);
org$frostlang$frostc$Type* $tmp3950 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3949);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp3947, $tmp3948, $tmp3950);
frost$collections$Array$add$frost$collections$Array$T($tmp3946, ((frost$core$Object*) $tmp3947));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:906
frost$collections$Array* $tmp3951 = *(&local34);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3952 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3953 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3954 = *(&local36);
frost$core$String* $tmp3955 = *(&local37);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3952, $tmp3953, $tmp3954, $tmp3955);
frost$collections$Array$add$frost$collections$Array$T($tmp3951, ((frost$core$Object*) $tmp3952));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
org$frostlang$frostc$ASTNode* $tmp3956 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3957 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3927);
org$frostlang$frostc$ASTNode* $tmp3958 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:909
frost$core$Int64 $tmp3959 = (frost$core$Int64) {909};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3960, $tmp3959);
abort(); // unreachable
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:913
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3961 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3962 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3963 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3964 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3965 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3966 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3964, $tmp3965, $tmp3966, &$s3967);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3968 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3968);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3961, $tmp3962, $tmp3963, $tmp3964, $tmp3968);
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
org$frostlang$frostc$ASTNode* $tmp3969 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
*(&local39) = $tmp3961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:916
frost$collections$Array* $tmp3970 = *(&local33);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3971 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3972 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3973 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3974 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3975 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp3976 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp3977 = *(&local39);
frost$core$String* $tmp3978 = *(&local31);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp3974, $tmp3975, $tmp3976, $tmp3977, $tmp3978);
frost$collections$Array* $tmp3979 = *(&local34);
org$frostlang$frostc$FixedArray* $tmp3980 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3979);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3971, $tmp3972, $tmp3973, $tmp3974, $tmp3980);
frost$collections$Array$add$frost$collections$Array$T($tmp3970, ((frost$core$Object*) $tmp3971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:919
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:920
org$frostlang$frostc$ASTNode* $tmp3981 = *(&local27);
frost$core$Bit $tmp3982 = frost$core$Bit$init$builtin_bit($tmp3981 != NULL);
bool $tmp3983 = $tmp3982.value;
if ($tmp3983) goto block54; else goto block56;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:921
org$frostlang$frostc$ASTNode* $tmp3984 = *(&local27);
org$frostlang$frostc$Type* $tmp3985 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3984);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
org$frostlang$frostc$Type* $tmp3986 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
*(&local40) = $tmp3985;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
goto block55;
block56:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:924
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from Scanner.frost:924:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp3987 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp3988 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp3989 = &(&local42)->$rawValue;
*$tmp3989 = $tmp3988;
org$frostlang$frostc$Type$Kind $tmp3990 = *(&local42);
*(&local41) = $tmp3990;
org$frostlang$frostc$Type$Kind $tmp3991 = *(&local41);
org$frostlang$frostc$Position $tmp3992 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp3993 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp3987, &$s3994, $tmp3991, $tmp3992, $tmp3993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
org$frostlang$frostc$Type* $tmp3995 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
*(&local40) = $tmp3987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:926
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3996 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3997 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3998 = *$tmp3997;
org$frostlang$frostc$Position $tmp3999 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp4000 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp4001 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp4000, $tmp4001);
frost$core$Int64 $tmp4002 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:927:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp4003 = &(&local44)->$rawValue;
*$tmp4003 = $tmp4002;
org$frostlang$frostc$MethodDecl$Kind $tmp4004 = *(&local44);
*(&local43) = $tmp4004;
org$frostlang$frostc$MethodDecl$Kind $tmp4005 = *(&local43);
frost$collections$Array* $tmp4006 = *(&local32);
org$frostlang$frostc$Type* $tmp4007 = *(&local40);
frost$collections$Array* $tmp4008 = *(&local33);
org$frostlang$frostc$FixedArray* $tmp4009 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4008);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3996, $tmp3998, $tmp3999, ((frost$core$String*) NULL), $tmp4000, $tmp4005, &$s4010, ((frost$collections$Array*) NULL), $tmp4006, $tmp4007, $tmp4009);
*(&local45) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
org$frostlang$frostc$MethodDecl* $tmp4011 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4011));
*(&local45) = $tmp3996;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:930
org$frostlang$frostc$ClassDecl** $tmp4012 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4013 = *$tmp4012;
frost$collections$Array** $tmp4014 = &$tmp4013->methods;
frost$collections$Array* $tmp4015 = *$tmp4014;
org$frostlang$frostc$MethodDecl* $tmp4016 = *(&local45);
frost$collections$Array$add$frost$collections$Array$T($tmp4015, ((frost$core$Object*) $tmp4016));
org$frostlang$frostc$MethodDecl* $tmp4017 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4017));
*(&local45) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp4018 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4018));
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp4019 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4020 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
*(&local34) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4021 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
*(&local33) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4022 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
*(&local32) = ((frost$collections$Array*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:933
frost$core$String* $tmp4023 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
frost$core$String* $tmp4024 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local31) = $tmp4023;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:935
frost$core$Weak** $tmp4025 = &param0->compiler;
frost$core$Weak* $tmp4026 = *$tmp4025;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:935:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4027 = &$tmp4026->_valid;
frost$core$Bit $tmp4028 = *$tmp4027;
bool $tmp4029 = $tmp4028.value;
if ($tmp4029) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp4030 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4031, $tmp4030);
abort(); // unreachable
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4032 = &$tmp4026->value;
frost$core$Object* $tmp4033 = *$tmp4032;
frost$core$Frost$ref$frost$core$Object$Q($tmp4033);
frost$collections$Stack** $tmp4034 = &((org$frostlang$frostc$Compiler*) $tmp4033)->currentClass;
frost$collections$Stack* $tmp4035 = *$tmp4034;
org$frostlang$frostc$ClassDecl** $tmp4036 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4037 = *$tmp4036;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:935:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp4038 = &$tmp4035->contents;
frost$collections$Array* $tmp4039 = *$tmp4038;
frost$collections$Array$add$frost$collections$Array$T($tmp4039, ((frost$core$Object*) $tmp4037));
frost$core$Frost$unref$frost$core$Object$Q($tmp4033);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:936
org$frostlang$frostc$ClassDecl** $tmp4040 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4041 = *$tmp4040;
org$frostlang$frostc$Position $tmp4042 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4043 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp4044 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind $tmp4045 = *(&local23);
frost$core$String* $tmp4046 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp4047 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp4048 = *(&local26);
org$frostlang$frostc$ASTNode* $tmp4049 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp4050 = *(&local28);
org$frostlang$frostc$MethodDecl* $tmp4051 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp4041, $tmp4042, $tmp4043, $tmp4044, $tmp4045, $tmp4046, $tmp4047, $tmp4048, $tmp4049, $tmp4050);
*(&local46) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4051));
org$frostlang$frostc$MethodDecl* $tmp4052 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4052));
*(&local46) = $tmp4051;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4051));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:938
org$frostlang$frostc$MethodDecl* $tmp4053 = *(&local46);
org$frostlang$frostc$Annotations** $tmp4054 = &$tmp4053->annotations;
org$frostlang$frostc$Annotations* $tmp4055 = *$tmp4054;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:938:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp4056 = &$tmp4055->flags;
frost$core$Int64 $tmp4057 = *$tmp4056;
frost$core$Int64 $tmp4058 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp4059 = $tmp4057.value;
int64_t $tmp4060 = $tmp4058.value;
int64_t $tmp4061 = $tmp4059 & $tmp4060;
frost$core$Int64 $tmp4062 = frost$core$Int64$init$builtin_int64($tmp4061);
frost$core$Int64 $tmp4063 = (frost$core$Int64) {0};
int64_t $tmp4064 = $tmp4062.value;
int64_t $tmp4065 = $tmp4063.value;
bool $tmp4066 = $tmp4064 != $tmp4065;
frost$core$Bit $tmp4067 = (frost$core$Bit) {$tmp4066};
bool $tmp4068 = $tmp4067.value;
if ($tmp4068) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:939
org$frostlang$frostc$MethodDecl* $tmp4069 = *(&local46);
org$frostlang$frostc$Position* $tmp4070 = &((org$frostlang$frostc$Symbol*) $tmp4069)->position;
org$frostlang$frostc$Position $tmp4071 = *$tmp4070;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:939:38
frost$io$File** $tmp4072 = &param0->source;
frost$io$File* $tmp4073 = *$tmp4072;
frost$core$Bit $tmp4074 = frost$core$Bit$init$builtin_bit($tmp4073 != NULL);
bool $tmp4075 = $tmp4074.value;
if ($tmp4075) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp4076 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4077, $tmp4076, &$s4078);
abort(); // unreachable
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp4079 = &param0->compiler;
frost$core$Weak* $tmp4080 = *$tmp4079;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp4081 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4080);
bool $tmp4082 = $tmp4081.value;
if ($tmp4082) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp4083 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4084, $tmp4083);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4085 = &$tmp4080->value;
frost$core$Object* $tmp4086 = *$tmp4085;
frost$core$Frost$ref$frost$core$Object$Q($tmp4086);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4086), $tmp4071, &$s4087);
frost$core$Frost$unref$frost$core$Object$Q($tmp4086);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:941
org$frostlang$frostc$MethodDecl* $tmp4088 = *(&local46);
org$frostlang$frostc$Annotations** $tmp4089 = &$tmp4088->annotations;
org$frostlang$frostc$Annotations* $tmp4090 = *$tmp4089;
frost$core$Int64* $tmp4091 = &$tmp4090->flags;
frost$core$Int64 $tmp4092 = *$tmp4091;
frost$core$Int64 $tmp4093 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.!!():frost.core.Int64 from Scanner.frost:941:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:118
int64_t $tmp4094 = $tmp4093.value;
int64_t $tmp4095 = !$tmp4094;
frost$core$Int64 $tmp4096 = (frost$core$Int64) {$tmp4095};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:941:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp4097 = $tmp4092.value;
int64_t $tmp4098 = $tmp4096.value;
int64_t $tmp4099 = $tmp4097 & $tmp4098;
frost$core$Int64 $tmp4100 = frost$core$Int64$init$builtin_int64($tmp4099);
frost$core$Int64* $tmp4101 = &$tmp4090->flags;
*$tmp4101 = $tmp4100;
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:943
frost$core$Weak** $tmp4102 = &param0->compiler;
frost$core$Weak* $tmp4103 = *$tmp4102;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:943:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4104 = &$tmp4103->_valid;
frost$core$Bit $tmp4105 = *$tmp4104;
bool $tmp4106 = $tmp4105.value;
if ($tmp4106) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp4107 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4108, $tmp4107);
abort(); // unreachable
block79:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4109 = &$tmp4103->value;
frost$core$Object* $tmp4110 = *$tmp4109;
frost$core$Frost$ref$frost$core$Object$Q($tmp4110);
frost$collections$Stack** $tmp4111 = &((org$frostlang$frostc$Compiler*) $tmp4110)->currentClass;
frost$collections$Stack* $tmp4112 = *$tmp4111;
frost$core$Int64 $tmp4113 = (frost$core$Int64) {0};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Scanner.frost:943:57
frost$core$Int64 $tmp4114 = (frost$core$Int64) {0};
int64_t $tmp4115 = $tmp4113.value;
int64_t $tmp4116 = $tmp4114.value;
bool $tmp4117 = $tmp4115 >= $tmp4116;
frost$core$Bit $tmp4118 = (frost$core$Bit) {$tmp4117};
bool $tmp4119 = $tmp4118.value;
if ($tmp4119) goto block84; else goto block83;
block84:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp4120 = &$tmp4112->contents;
frost$collections$Array* $tmp4121 = *$tmp4120;
ITable* $tmp4122 = ((frost$collections$CollectionView*) $tmp4121)->$class->itable;
while ($tmp4122->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4122 = $tmp4122->next;
}
$fn4124 $tmp4123 = $tmp4122->methods[0];
frost$core$Int64 $tmp4125 = $tmp4123(((frost$collections$CollectionView*) $tmp4121));
int64_t $tmp4126 = $tmp4113.value;
int64_t $tmp4127 = $tmp4125.value;
bool $tmp4128 = $tmp4126 < $tmp4127;
frost$core$Bit $tmp4129 = (frost$core$Bit) {$tmp4128};
bool $tmp4130 = $tmp4129.value;
if ($tmp4130) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp4131 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4132, $tmp4131, &$s4133);
abort(); // unreachable
block82:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp4134 = &$tmp4112->contents;
frost$collections$Array* $tmp4135 = *$tmp4134;
ITable* $tmp4136 = ((frost$collections$CollectionView*) $tmp4135)->$class->itable;
while ($tmp4136->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4136 = $tmp4136->next;
}
$fn4138 $tmp4137 = $tmp4136->methods[0];
frost$core$Int64 $tmp4139 = $tmp4137(((frost$collections$CollectionView*) $tmp4135));
int64_t $tmp4140 = $tmp4139.value;
int64_t $tmp4141 = $tmp4113.value;
bool $tmp4142 = $tmp4140 > $tmp4141;
frost$core$Bit $tmp4143 = (frost$core$Bit) {$tmp4142};
bool $tmp4144 = $tmp4143.value;
if ($tmp4144) goto block86; else goto block87;
block87:;
frost$core$Int64 $tmp4145 = (frost$core$Int64) {31};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4146, $tmp4145);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp4147 = &$tmp4112->contents;
frost$collections$Array* $tmp4148 = *$tmp4147;
frost$collections$Array** $tmp4149 = &$tmp4112->contents;
frost$collections$Array* $tmp4150 = *$tmp4149;
ITable* $tmp4151 = ((frost$collections$CollectionView*) $tmp4150)->$class->itable;
while ($tmp4151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4151 = $tmp4151->next;
}
$fn4153 $tmp4152 = $tmp4151->methods[0];
frost$core$Int64 $tmp4154 = $tmp4152(((frost$collections$CollectionView*) $tmp4150));
frost$core$Int64 $tmp4155 = (frost$core$Int64) {1};
int64_t $tmp4156 = $tmp4154.value;
int64_t $tmp4157 = $tmp4155.value;
int64_t $tmp4158 = $tmp4156 - $tmp4157;
frost$core$Int64 $tmp4159 = (frost$core$Int64) {$tmp4158};
int64_t $tmp4160 = $tmp4159.value;
int64_t $tmp4161 = $tmp4113.value;
int64_t $tmp4162 = $tmp4160 - $tmp4161;
frost$core$Int64 $tmp4163 = (frost$core$Int64) {$tmp4162};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp4164 = (frost$core$Int64) {0};
int64_t $tmp4165 = $tmp4163.value;
int64_t $tmp4166 = $tmp4164.value;
bool $tmp4167 = $tmp4165 >= $tmp4166;
frost$core$Bit $tmp4168 = (frost$core$Bit) {$tmp4167};
bool $tmp4169 = $tmp4168.value;
if ($tmp4169) goto block91; else goto block90;
block91:;
ITable* $tmp4170 = ((frost$collections$CollectionView*) $tmp4148)->$class->itable;
while ($tmp4170->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4170 = $tmp4170->next;
}
$fn4172 $tmp4171 = $tmp4170->methods[0];
frost$core$Int64 $tmp4173 = $tmp4171(((frost$collections$CollectionView*) $tmp4148));
int64_t $tmp4174 = $tmp4163.value;
int64_t $tmp4175 = $tmp4173.value;
bool $tmp4176 = $tmp4174 < $tmp4175;
frost$core$Bit $tmp4177 = (frost$core$Bit) {$tmp4176};
bool $tmp4178 = $tmp4177.value;
if ($tmp4178) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp4179 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4180, $tmp4179, &$s4181);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp4182 = &$tmp4148->data;
frost$core$Object** $tmp4183 = *$tmp4182;
int64_t $tmp4184 = $tmp4163.value;
frost$core$Object* $tmp4185 = $tmp4183[$tmp4184];
frost$core$Frost$ref$frost$core$Object$Q($tmp4185);
frost$core$Frost$ref$frost$core$Object$Q($tmp4185);
frost$core$Frost$unref$frost$core$Object$Q($tmp4185);
org$frostlang$frostc$ClassDecl** $tmp4186 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4187 = *$tmp4186;
bool $tmp4188 = ((org$frostlang$frostc$ClassDecl*) $tmp4185) == $tmp4187;
frost$core$Bit $tmp4189 = frost$core$Bit$init$builtin_bit($tmp4188);
bool $tmp4190 = $tmp4189.value;
if ($tmp4190) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp4191 = (frost$core$Int64) {943};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4192, $tmp4191);
abort(); // unreachable
block92:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4185);
frost$core$Frost$unref$frost$core$Object$Q($tmp4110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:944
frost$core$Weak** $tmp4193 = &param0->compiler;
frost$core$Weak* $tmp4194 = *$tmp4193;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:944:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4195 = &$tmp4194->_valid;
frost$core$Bit $tmp4196 = *$tmp4195;
bool $tmp4197 = $tmp4196.value;
if ($tmp4197) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp4198 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4199, $tmp4198);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4200 = &$tmp4194->value;
frost$core$Object* $tmp4201 = *$tmp4200;
frost$core$Frost$ref$frost$core$Object$Q($tmp4201);
frost$collections$Stack** $tmp4202 = &((org$frostlang$frostc$Compiler*) $tmp4201)->currentClass;
frost$collections$Stack* $tmp4203 = *$tmp4202;
frost$core$Object* $tmp4204 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4203);
frost$core$Frost$unref$frost$core$Object$Q($tmp4204);
frost$core$Frost$unref$frost$core$Object$Q($tmp4201);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:945
org$frostlang$frostc$ClassDecl** $tmp4205 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4206 = *$tmp4205;
frost$collections$Array** $tmp4207 = &$tmp4206->methods;
frost$collections$Array* $tmp4208 = *$tmp4207;
org$frostlang$frostc$MethodDecl* $tmp4209 = *(&local46);
frost$collections$Array$add$frost$collections$Array$T($tmp4208, ((frost$core$Object*) $tmp4209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:946
org$frostlang$frostc$ClassDecl** $tmp4210 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4211 = *$tmp4210;
org$frostlang$frostc$SymbolTable** $tmp4212 = &$tmp4211->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4213 = *$tmp4212;
org$frostlang$frostc$MethodDecl* $tmp4214 = *(&local46);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:946:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp4215 = &((org$frostlang$frostc$Symbol*) $tmp4214)->name;
frost$core$String* $tmp4216 = *$tmp4215;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp4213, ((org$frostlang$frostc$Symbol*) $tmp4214), $tmp4216);
org$frostlang$frostc$MethodDecl* $tmp4217 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4217));
*(&local46) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp4218 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4218));
*(&local31) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4219 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4220 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4221 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4221));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4222 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4223 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4223));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4224 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4224));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4225 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4225));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block33:;
frost$core$Int64 $tmp4226 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:948:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp4227 = $tmp3692.value;
int64_t $tmp4228 = $tmp4226.value;
bool $tmp4229 = $tmp4227 == $tmp4228;
frost$core$Bit $tmp4230 = frost$core$Bit$init$builtin_bit($tmp4229);
bool $tmp4231 = $tmp4230.value;
if ($tmp4231) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp4232 = (org$frostlang$frostc$Position*) ($tmp3690->$data + 0);
org$frostlang$frostc$Position $tmp4233 = *$tmp4232;
*(&local47) = $tmp4233;
org$frostlang$frostc$ASTNode** $tmp4234 = (org$frostlang$frostc$ASTNode**) ($tmp3690->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4235 = *$tmp4234;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
org$frostlang$frostc$ASTNode* $tmp4236 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
*(&local48) = $tmp4235;
org$frostlang$frostc$FixedArray** $tmp4237 = (org$frostlang$frostc$FixedArray**) ($tmp3690->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4238 = *$tmp4237;
*(&local49) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4238));
org$frostlang$frostc$FixedArray* $tmp4239 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4239));
*(&local49) = $tmp4238;
org$frostlang$frostc$ASTNode** $tmp4240 = (org$frostlang$frostc$ASTNode**) ($tmp3690->$data + 40);
org$frostlang$frostc$ASTNode* $tmp4241 = *$tmp4240;
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4241));
org$frostlang$frostc$ASTNode* $tmp4242 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
*(&local50) = $tmp4241;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:949
frost$collections$HashMap* $tmp4243 = *(&local3);
frost$core$String* $tmp4244 = *(&local2);
frost$collections$Array* $tmp4245 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp4243), $tmp4244, ((frost$collections$List*) $tmp4245));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:950
org$frostlang$frostc$ClassDecl** $tmp4246 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4247 = *$tmp4246;
frost$collections$Array** $tmp4248 = &$tmp4247->fields;
frost$collections$Array* $tmp4249 = *$tmp4248;
ITable* $tmp4250 = ((frost$collections$CollectionView*) $tmp4249)->$class->itable;
while ($tmp4250->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4250 = $tmp4250->next;
}
$fn4252 $tmp4251 = $tmp4250->methods[0];
frost$core$Int64 $tmp4253 = $tmp4251(((frost$collections$CollectionView*) $tmp4249));
*(&local51) = $tmp4253;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:951
org$frostlang$frostc$ClassDecl** $tmp4254 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4255 = *$tmp4254;
org$frostlang$frostc$Position $tmp4256 = *(&local47);
org$frostlang$frostc$ASTNode* $tmp4257 = *(&local48);
org$frostlang$frostc$FixedArray* $tmp4258 = *(&local49);
org$frostlang$frostc$ASTNode* $tmp4259 = *(&local50);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp4255, $tmp4256, $tmp4257, $tmp4258, $tmp4259);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:952
frost$core$Int64 $tmp4260 = *(&local51);
org$frostlang$frostc$ClassDecl** $tmp4261 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4262 = *$tmp4261;
frost$collections$Array** $tmp4263 = &$tmp4262->fields;
frost$collections$Array* $tmp4264 = *$tmp4263;
ITable* $tmp4265 = ((frost$collections$CollectionView*) $tmp4264)->$class->itable;
while ($tmp4265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4265 = $tmp4265->next;
}
$fn4267 $tmp4266 = $tmp4265->methods[0];
frost$core$Int64 $tmp4268 = $tmp4266(((frost$collections$CollectionView*) $tmp4264));
frost$core$Bit $tmp4269 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp4270 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp4260, $tmp4268, $tmp4269);
frost$core$Int64 $tmp4271 = $tmp4270.min;
*(&local52) = $tmp4271;
frost$core$Int64 $tmp4272 = $tmp4270.max;
frost$core$Bit $tmp4273 = $tmp4270.inclusive;
bool $tmp4274 = $tmp4273.value;
frost$core$Int64 $tmp4275 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp4276 = $tmp4275.value;
frost$core$UInt64 $tmp4277 = (frost$core$UInt64) {((uint64_t) $tmp4276)};
if ($tmp4274) goto block106; else goto block107;
block106:;
int64_t $tmp4278 = $tmp4271.value;
int64_t $tmp4279 = $tmp4272.value;
bool $tmp4280 = $tmp4278 <= $tmp4279;
frost$core$Bit $tmp4281 = (frost$core$Bit) {$tmp4280};
bool $tmp4282 = $tmp4281.value;
if ($tmp4282) goto block103; else goto block104;
block107:;
int64_t $tmp4283 = $tmp4271.value;
int64_t $tmp4284 = $tmp4272.value;
bool $tmp4285 = $tmp4283 < $tmp4284;
frost$core$Bit $tmp4286 = (frost$core$Bit) {$tmp4285};
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:953
org$frostlang$frostc$ClassDecl** $tmp4288 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4289 = *$tmp4288;
frost$collections$Array** $tmp4290 = &$tmp4289->fields;
frost$collections$Array* $tmp4291 = *$tmp4290;
frost$core$Int64 $tmp4292 = *(&local52);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Scanner.frost:953:62
frost$core$Int64 $tmp4293 = (frost$core$Int64) {0};
int64_t $tmp4294 = $tmp4292.value;
int64_t $tmp4295 = $tmp4293.value;
bool $tmp4296 = $tmp4294 >= $tmp4295;
frost$core$Bit $tmp4297 = (frost$core$Bit) {$tmp4296};
bool $tmp4298 = $tmp4297.value;
if ($tmp4298) goto block111; else goto block110;
block111:;
ITable* $tmp4299 = ((frost$collections$CollectionView*) $tmp4291)->$class->itable;
while ($tmp4299->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4299 = $tmp4299->next;
}
$fn4301 $tmp4300 = $tmp4299->methods[0];
frost$core$Int64 $tmp4302 = $tmp4300(((frost$collections$CollectionView*) $tmp4291));
int64_t $tmp4303 = $tmp4292.value;
int64_t $tmp4304 = $tmp4302.value;
bool $tmp4305 = $tmp4303 < $tmp4304;
frost$core$Bit $tmp4306 = (frost$core$Bit) {$tmp4305};
bool $tmp4307 = $tmp4306.value;
if ($tmp4307) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp4308 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4309, $tmp4308, &$s4310);
abort(); // unreachable
block109:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp4311 = &$tmp4291->data;
frost$core$Object** $tmp4312 = *$tmp4311;
int64_t $tmp4313 = $tmp4292.value;
frost$core$Object* $tmp4314 = $tmp4312[$tmp4313];
frost$core$Frost$ref$frost$core$Object$Q($tmp4314);
*(&local53) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4314)));
org$frostlang$frostc$FieldDecl* $tmp4315 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
*(&local53) = ((org$frostlang$frostc$FieldDecl*) $tmp4314);
frost$core$Frost$unref$frost$core$Object$Q($tmp4314);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:954
org$frostlang$frostc$FieldDecl* $tmp4316 = *(&local53);
org$frostlang$frostc$FieldDecl$Kind* $tmp4317 = &$tmp4316->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp4318 = *$tmp4317;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4319;
$tmp4319 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4319->value = $tmp4318;
frost$core$Int64 $tmp4320 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:954:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp4321 = &(&local55)->$rawValue;
*$tmp4321 = $tmp4320;
org$frostlang$frostc$FieldDecl$Kind $tmp4322 = *(&local55);
*(&local54) = $tmp4322;
org$frostlang$frostc$FieldDecl$Kind $tmp4323 = *(&local54);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4324;
$tmp4324 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4324->value = $tmp4323;
ITable* $tmp4325 = ((frost$core$Equatable*) $tmp4319)->$class->itable;
while ($tmp4325->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4325 = $tmp4325->next;
}
$fn4327 $tmp4326 = $tmp4325->methods[1];
frost$core$Bit $tmp4328 = $tmp4326(((frost$core$Equatable*) $tmp4319), ((frost$core$Equatable*) $tmp4324));
bool $tmp4329 = $tmp4328.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4324)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4319)));
if ($tmp4329) goto block114; else goto block113;
block114:;
org$frostlang$frostc$FieldDecl* $tmp4330 = *(&local53);
org$frostlang$frostc$Annotations** $tmp4331 = &$tmp4330->annotations;
org$frostlang$frostc$Annotations* $tmp4332 = *$tmp4331;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:955:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp4333 = &$tmp4332->flags;
frost$core$Int64 $tmp4334 = *$tmp4333;
frost$core$Int64 $tmp4335 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp4336 = $tmp4334.value;
int64_t $tmp4337 = $tmp4335.value;
int64_t $tmp4338 = $tmp4336 & $tmp4337;
frost$core$Int64 $tmp4339 = frost$core$Int64$init$builtin_int64($tmp4338);
frost$core$Int64 $tmp4340 = (frost$core$Int64) {0};
int64_t $tmp4341 = $tmp4339.value;
int64_t $tmp4342 = $tmp4340.value;
bool $tmp4343 = $tmp4341 != $tmp4342;
frost$core$Bit $tmp4344 = (frost$core$Bit) {$tmp4343};
bool $tmp4345 = $tmp4344.value;
if ($tmp4345) goto block112; else goto block113;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:956
org$frostlang$frostc$FieldDecl* $tmp4346 = *(&local53);
org$frostlang$frostc$Position* $tmp4347 = &((org$frostlang$frostc$Symbol*) $tmp4346)->position;
org$frostlang$frostc$Position $tmp4348 = *$tmp4347;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:956:42
frost$io$File** $tmp4349 = &param0->source;
frost$io$File* $tmp4350 = *$tmp4349;
frost$core$Bit $tmp4351 = frost$core$Bit$init$builtin_bit($tmp4350 != NULL);
bool $tmp4352 = $tmp4351.value;
if ($tmp4352) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp4353 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4354, $tmp4353, &$s4355);
abort(); // unreachable
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:854
frost$core$Weak** $tmp4356 = &param0->compiler;
frost$core$Weak* $tmp4357 = *$tmp4356;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:854:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp4358 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4357);
bool $tmp4359 = $tmp4358.value;
if ($tmp4359) goto block122; else goto block123;
block123:;
frost$core$Int64 $tmp4360 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4361, $tmp4360);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4362 = &$tmp4357->value;
frost$core$Object* $tmp4363 = *$tmp4362;
frost$core$Frost$ref$frost$core$Object$Q($tmp4363);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4363), $tmp4348, &$s4364);
frost$core$Frost$unref$frost$core$Object$Q($tmp4363);
goto block113;
block113:;
org$frostlang$frostc$FieldDecl* $tmp4365 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
*(&local53) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Int64 $tmp4366 = *(&local52);
int64_t $tmp4367 = $tmp4272.value;
int64_t $tmp4368 = $tmp4366.value;
int64_t $tmp4369 = $tmp4367 - $tmp4368;
frost$core$Int64 $tmp4370 = (frost$core$Int64) {$tmp4369};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp4371 = $tmp4370.value;
frost$core$UInt64 $tmp4372 = (frost$core$UInt64) {((uint64_t) $tmp4371)};
if ($tmp4274) goto block126; else goto block127;
block126:;
uint64_t $tmp4373 = $tmp4372.value;
uint64_t $tmp4374 = $tmp4277.value;
bool $tmp4375 = $tmp4373 >= $tmp4374;
frost$core$Bit $tmp4376 = (frost$core$Bit) {$tmp4375};
bool $tmp4377 = $tmp4376.value;
if ($tmp4377) goto block124; else goto block104;
block127:;
uint64_t $tmp4378 = $tmp4372.value;
uint64_t $tmp4379 = $tmp4277.value;
bool $tmp4380 = $tmp4378 > $tmp4379;
frost$core$Bit $tmp4381 = (frost$core$Bit) {$tmp4380};
bool $tmp4382 = $tmp4381.value;
if ($tmp4382) goto block124; else goto block104;
block124:;
int64_t $tmp4383 = $tmp4366.value;
int64_t $tmp4384 = $tmp4275.value;
int64_t $tmp4385 = $tmp4383 + $tmp4384;
frost$core$Int64 $tmp4386 = (frost$core$Int64) {$tmp4385};
*(&local52) = $tmp4386;
goto block103;
block104:;
org$frostlang$frostc$ASTNode* $tmp4387 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
*(&local50) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4388 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
*(&local49) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4389 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:962
frost$core$Int64 $tmp4390 = (frost$core$Int64) {962};
org$frostlang$frostc$ASTNode* $tmp4391 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:962:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4393 $tmp4392 = ($fn4393) ((frost$core$Object*) $tmp4391)->$class->vtable[0];
frost$core$String* $tmp4394 = $tmp4392(((frost$core$Object*) $tmp4391));
frost$core$String* $tmp4395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4396, $tmp4394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
frost$core$String* $tmp4397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4395, &$s4398);
org$frostlang$frostc$ASTNode* $tmp4399 = *(&local4);
frost$core$Int64* $tmp4400 = &$tmp4399->$rawValue;
frost$core$Int64 $tmp4401 = *$tmp4400;
frost$core$Int64$wrapper* $tmp4402;
$tmp4402 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4402->value = $tmp4401;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:962:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4404 $tmp4403 = ($fn4404) ((frost$core$Object*) $tmp4402)->$class->vtable[0];
frost$core$String* $tmp4405 = $tmp4403(((frost$core$Object*) $tmp4402));
frost$core$String* $tmp4406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4397, $tmp4405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
frost$core$String* $tmp4407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4406, &$s4408);
org$frostlang$frostc$ASTNode* $tmp4409 = *(&local4);
$fn4411 $tmp4410 = ($fn4411) $tmp4409->$class->vtable[2];
org$frostlang$frostc$Position $tmp4412 = $tmp4410($tmp4409);
org$frostlang$frostc$Position$wrapper* $tmp4413;
$tmp4413 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp4413->value = $tmp4412;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:962:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4415 $tmp4414 = ($fn4415) ((frost$core$Object*) $tmp4413)->$class->vtable[0];
frost$core$String* $tmp4416 = $tmp4414(((frost$core$Object*) $tmp4413));
frost$core$String* $tmp4417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4407, $tmp4416);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
frost$core$String* $tmp4418 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4417, &$s4419);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4420, $tmp4390, $tmp4418);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3688);
org$frostlang$frostc$ASTNode* $tmp4421 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4421));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:966
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp4422 = &param0->source;
frost$io$File* $tmp4423 = *$tmp4422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4423));
frost$io$File** $tmp4424 = &param0->source;
*$tmp4424 = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:967
frost$collections$Array* $tmp4425 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp4425)));
frost$collections$HashMap* $tmp4426 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4426));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp4427 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp4428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4428));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp4429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4429));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp4425);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:970
frost$core$Int64 $tmp4430 = (frost$core$Int64) {970};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4431, $tmp4430);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp4432 = &param0->compiler;
frost$core$Weak* $tmp4433 = *$tmp4432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
org$frostlang$frostc$ClassDecl** $tmp4434 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4435 = *$tmp4434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4435));
frost$io$File** $tmp4436 = &param0->source;
frost$io$File* $tmp4437 = *$tmp4436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
return;

}

