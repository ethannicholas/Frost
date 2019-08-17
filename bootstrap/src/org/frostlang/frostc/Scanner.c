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
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/String/Index.h"
#include "frost/core/Char32.h"
#include "frost/core/Int32.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
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
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "frost/collections/Stack.h"
#include "frost/collections/List.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/Key.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"


static frost$core$String $s1;
org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Scanner$cleanup, org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type, org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int, org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int, org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q, org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q, org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String, org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT} };

typedef frost$core$Int (*$fn233)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn280)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn284)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn289)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn303)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn341)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn414)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn418)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn423)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn458)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn486)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn490)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn495)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn508)(frost$core$Object*);
typedef frost$core$String* (*$fn518)(frost$core$Object*);
typedef frost$core$Bit (*$fn576)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn585)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn589)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn594)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn742)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn744)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn771)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn773)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn800)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn802)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn829)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn831)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn858)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn860)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1019)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1023)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1028)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1128)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1185)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1189)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1194)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1290)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1294)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1299)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1338)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1342)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1347)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1428)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1432)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1437)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1508)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1512)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1517)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1567)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1571)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1576)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1625)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1629)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1634)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1669)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1673)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1678)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1695)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1699)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1704)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1894)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1898)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1903)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1934)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1938)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1943)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1957)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1961)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1966)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2001)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2005)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2010)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2077)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2081)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2086)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2139)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2194)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2198)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2203)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2262)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn2276)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2280)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2285)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2339)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2368)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2414)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2648)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2652)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2729)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2761)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2765)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2770)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2783)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2801)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2840)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2844)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2849)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2908)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2928)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2949)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2953)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2958)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3005)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3080)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3084)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3089)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3128)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3194)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3198)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3203)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3232)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3249)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3282)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3291)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3342)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3353)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3362)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3413)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3422)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3435)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3439)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3444)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn3452)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3531)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3535)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3540)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3548)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3552)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3557)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3565)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3569)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3574)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3588)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn3625)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3750)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3754)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3759)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3863)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3867)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3872)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3880)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3884)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3889)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3942)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3989)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3993)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3998)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn4199)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4213)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4228)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4247)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4328)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4343)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4375)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4402)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4466)(frost$core$Object*);
typedef frost$core$String* (*$fn4477)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn4484)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn4488)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 28, 7937364740017265678, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6541439029621442568, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, -8407340892165143446, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -6941121115643176919, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -6943069450247988361, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -6947880913132093572, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, 1636909511958265571, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 6113830950894022042, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 6115664936289499540, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 6120445612848014843, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -7692517852738059576, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -7695345796645250593, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, 2075497417580251538, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 7272646099210467152, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, -4705630147413002136, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -565795814387083701, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, 1726036079575195661, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, 1659788717951863933, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1094253743368195802, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, 2564706465071019727, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 4364512108910063541, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 6873686358610603073, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 9160589370450948847, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, -3895476746833326716, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 7435792352060934372, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, -507229471558551835, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, -8337610593683542155, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 6536665699122092278, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, 2083579122674506872, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, -1102905984370395173, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, 1659619246779549287, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, -2594619287818381368, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 134526994446166888, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 5031055877270038133, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, -1205915675663244815, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 6601423246907155994, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 3008583721667412327, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, 5029378179413211882, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 3933979906453277221, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1070 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2325 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -2702568160131628339, NULL };
static frost$core$String $s2633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3479509698475155476, NULL };
static frost$core$String $s2734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2735 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2937 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -3719689727633176608, NULL };
static frost$core$String $s2977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2989 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s3059 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 8996675876247625211, NULL };
static frost$core$String $s3150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, -3178355849381906807, NULL };
static frost$core$String $s3173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -8426410652778701193, NULL };
static frost$core$String $s3225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 1323168004075572057, NULL };
static frost$core$String $s3288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -157497934161719815, NULL };
static frost$core$String $s3500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 4069187544645537896, NULL };
static frost$core$String $s3594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s3744 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s3795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s3951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, 4149591465855488060, NULL };
static frost$core$String $s3975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s3977 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s3979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s4032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 6449659721254005836, NULL };
static frost$core$String $s4065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s4106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s4208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s4221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s4255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s4256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s4268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s4384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s4429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3524753437392098394, NULL };
static frost$core$String $s4471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s4481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a", 2, 566763092841805498, NULL };
static frost$core$String $s4492 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s4493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };

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
org$frostlang$frostc$Position local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
frost$collections$Array* local6 = NULL;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$Position local9;
frost$core$String* local10 = NULL;
org$frostlang$frostc$FixedArray* local11 = NULL;
frost$collections$Array* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$Type* local17 = NULL;
org$frostlang$frostc$Position local18;
org$frostlang$frostc$parser$Token$Kind local19;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$ASTNode* local21 = NULL;
org$frostlang$frostc$Type$Kind local22;
org$frostlang$frostc$Type$Kind local23;
org$frostlang$frostc$Type$Kind local24;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$Type$Kind local27;
org$frostlang$frostc$Type$Kind local28;
org$frostlang$frostc$Type$Kind local29;
org$frostlang$frostc$Type$Kind local30;
frost$collections$Array* local31 = NULL;
org$frostlang$frostc$ASTNode* local32 = NULL;
org$frostlang$frostc$Type* local33 = NULL;
org$frostlang$frostc$Position local34;
org$frostlang$frostc$FixedArray* local35 = NULL;
frost$collections$Array* local36 = NULL;
org$frostlang$frostc$ASTNode* local37 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:25
frost$core$Int* $tmp6 = &param1->$rawValue;
frost$core$Int $tmp7 = *$tmp6;
frost$core$Int $tmp8 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:26:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp9 = $tmp7.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 == $tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
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
frost$core$Int $tmp20 = (frost$core$Int) {0u};
// begin inline call to function frost.core.String.[](index:frost.core.Int):frost.core.Char32 from Scanner.frost:27:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:675
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.frost:675:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
frost$core$Int $tmp21 = (frost$core$Int) {0u};
frost$core$String$Index $tmp22 = frost$core$String$Index$init$frost$core$Int($tmp21);
frost$core$String$Index $tmp23 = frost$core$String$offset$frost$core$String$Index$frost$core$Int$R$frost$core$String$Index($tmp19, $tmp22, $tmp20);
frost$core$Char32 $tmp24 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32($tmp19, $tmp23);
frost$core$Int32 $tmp25 = (frost$core$Int32) {98u};
frost$core$Char32 $tmp26 = frost$core$Char32$init$frost$core$Int32($tmp25);
// begin inline call to function frost.core.Char32.=(other:frost.core.Char32):frost.core.Bit from Scanner.frost:27:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Char32.frost:27
int32_t $tmp27 = $tmp24.value;
int32_t $tmp28 = $tmp26.value;
bool $tmp29 = $tmp27 == $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
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
frost$core$Weak** $tmp36 = &param0->compiler;
frost$core$Weak* $tmp37 = *$tmp36;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:29:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp38 = &$tmp37->_valid;
frost$core$Bit $tmp39 = *$tmp38;
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block15; else goto block16;
block16:;
frost$core$Int $tmp41 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s42, $tmp41);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp43 = &$tmp37->value;
frost$core$Object* $tmp44 = *$tmp43;
frost$core$Frost$ref$frost$core$Object$Q($tmp44);
org$frostlang$frostc$Type** $tmp45 = &((org$frostlang$frostc$Compiler*) $tmp44)->BUILTIN_BIT_TYPE;
org$frostlang$frostc$Type* $tmp46 = *$tmp45;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q($tmp44);
frost$core$String* $tmp47 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local1) = ((frost$core$String*) NULL);
return $tmp46;
block12:;
frost$core$Bit $tmp48 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s49);
bool $tmp50 = $tmp48.value;
if ($tmp50) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:30
frost$core$Weak** $tmp51 = &param0->compiler;
frost$core$Weak* $tmp52 = *$tmp51;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:30:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp53 = &$tmp52->_valid;
frost$core$Bit $tmp54 = *$tmp53;
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block21; else goto block22;
block22:;
frost$core$Int $tmp56 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s57, $tmp56);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp58 = &$tmp52->value;
frost$core$Object* $tmp59 = *$tmp58;
frost$core$Frost$ref$frost$core$Object$Q($tmp59);
org$frostlang$frostc$Type** $tmp60 = &((org$frostlang$frostc$Compiler*) $tmp59)->BUILTIN_INT8_TYPE;
org$frostlang$frostc$Type* $tmp61 = *$tmp60;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q($tmp59);
frost$core$String* $tmp62 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local1) = ((frost$core$String*) NULL);
return $tmp61;
block18:;
frost$core$Bit $tmp63 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s64);
bool $tmp65 = $tmp63.value;
if ($tmp65) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:31
frost$core$Weak** $tmp66 = &param0->compiler;
frost$core$Weak* $tmp67 = *$tmp66;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:31:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp68 = &$tmp67->_valid;
frost$core$Bit $tmp69 = *$tmp68;
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block27; else goto block28;
block28:;
frost$core$Int $tmp71 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s72, $tmp71);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp73 = &$tmp67->value;
frost$core$Object* $tmp74 = *$tmp73;
frost$core$Frost$ref$frost$core$Object$Q($tmp74);
org$frostlang$frostc$Type** $tmp75 = &((org$frostlang$frostc$Compiler*) $tmp74)->BUILTIN_INT16_TYPE;
org$frostlang$frostc$Type* $tmp76 = *$tmp75;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
frost$core$String* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = ((frost$core$String*) NULL);
return $tmp76;
block24:;
frost$core$Bit $tmp78 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s79);
bool $tmp80 = $tmp78.value;
if ($tmp80) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:32
frost$core$Weak** $tmp81 = &param0->compiler;
frost$core$Weak* $tmp82 = *$tmp81;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:32:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp83 = &$tmp82->_valid;
frost$core$Bit $tmp84 = *$tmp83;
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block33; else goto block34;
block34:;
frost$core$Int $tmp86 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s87, $tmp86);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp88 = &$tmp82->value;
frost$core$Object* $tmp89 = *$tmp88;
frost$core$Frost$ref$frost$core$Object$Q($tmp89);
org$frostlang$frostc$Type** $tmp90 = &((org$frostlang$frostc$Compiler*) $tmp89)->BUILTIN_INT32_TYPE;
org$frostlang$frostc$Type* $tmp91 = *$tmp90;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q($tmp89);
frost$core$String* $tmp92 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local1) = ((frost$core$String*) NULL);
return $tmp91;
block30:;
frost$core$Bit $tmp93 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s94);
bool $tmp95 = $tmp93.value;
if ($tmp95) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:33
frost$core$Weak** $tmp96 = &param0->compiler;
frost$core$Weak* $tmp97 = *$tmp96;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:33:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp98 = &$tmp97->_valid;
frost$core$Bit $tmp99 = *$tmp98;
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block39; else goto block40;
block40:;
frost$core$Int $tmp101 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s102, $tmp101);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp103 = &$tmp97->value;
frost$core$Object* $tmp104 = *$tmp103;
frost$core$Frost$ref$frost$core$Object$Q($tmp104);
org$frostlang$frostc$Type** $tmp105 = &((org$frostlang$frostc$Compiler*) $tmp104)->BUILTIN_INT64_TYPE;
org$frostlang$frostc$Type* $tmp106 = *$tmp105;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q($tmp104);
frost$core$String* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local1) = ((frost$core$String*) NULL);
return $tmp106;
block36:;
frost$core$Bit $tmp108 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s109);
bool $tmp110 = $tmp108.value;
if ($tmp110) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:34
frost$core$Weak** $tmp111 = &param0->compiler;
frost$core$Weak* $tmp112 = *$tmp111;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:34:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp113 = &$tmp112->_valid;
frost$core$Bit $tmp114 = *$tmp113;
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block45; else goto block46;
block46:;
frost$core$Int $tmp116 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s117, $tmp116);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp118 = &$tmp112->value;
frost$core$Object* $tmp119 = *$tmp118;
frost$core$Frost$ref$frost$core$Object$Q($tmp119);
org$frostlang$frostc$Type** $tmp120 = &((org$frostlang$frostc$Compiler*) $tmp119)->BUILTIN_UINT8_TYPE;
org$frostlang$frostc$Type* $tmp121 = *$tmp120;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
frost$core$String* $tmp122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local1) = ((frost$core$String*) NULL);
return $tmp121;
block42:;
frost$core$Bit $tmp123 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s124);
bool $tmp125 = $tmp123.value;
if ($tmp125) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:35
frost$core$Weak** $tmp126 = &param0->compiler;
frost$core$Weak* $tmp127 = *$tmp126;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:35:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp128 = &$tmp127->_valid;
frost$core$Bit $tmp129 = *$tmp128;
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block51; else goto block52;
block52:;
frost$core$Int $tmp131 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s132, $tmp131);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp133 = &$tmp127->value;
frost$core$Object* $tmp134 = *$tmp133;
frost$core$Frost$ref$frost$core$Object$Q($tmp134);
org$frostlang$frostc$Type** $tmp135 = &((org$frostlang$frostc$Compiler*) $tmp134)->BUILTIN_UINT16_TYPE;
org$frostlang$frostc$Type* $tmp136 = *$tmp135;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
frost$core$String* $tmp137 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local1) = ((frost$core$String*) NULL);
return $tmp136;
block48:;
frost$core$Bit $tmp138 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s139);
bool $tmp140 = $tmp138.value;
if ($tmp140) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:36
frost$core$Weak** $tmp141 = &param0->compiler;
frost$core$Weak* $tmp142 = *$tmp141;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:36:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp143 = &$tmp142->_valid;
frost$core$Bit $tmp144 = *$tmp143;
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block57; else goto block58;
block58:;
frost$core$Int $tmp146 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s147, $tmp146);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp148 = &$tmp142->value;
frost$core$Object* $tmp149 = *$tmp148;
frost$core$Frost$ref$frost$core$Object$Q($tmp149);
org$frostlang$frostc$Type** $tmp150 = &((org$frostlang$frostc$Compiler*) $tmp149)->BUILTIN_UINT32_TYPE;
org$frostlang$frostc$Type* $tmp151 = *$tmp150;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q($tmp149);
frost$core$String* $tmp152 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local1) = ((frost$core$String*) NULL);
return $tmp151;
block54:;
frost$core$Bit $tmp153 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s154);
bool $tmp155 = $tmp153.value;
if ($tmp155) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:37
frost$core$Weak** $tmp156 = &param0->compiler;
frost$core$Weak* $tmp157 = *$tmp156;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:37:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp158 = &$tmp157->_valid;
frost$core$Bit $tmp159 = *$tmp158;
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block63; else goto block64;
block64:;
frost$core$Int $tmp161 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s162, $tmp161);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp163 = &$tmp157->value;
frost$core$Object* $tmp164 = *$tmp163;
frost$core$Frost$ref$frost$core$Object$Q($tmp164);
org$frostlang$frostc$Type** $tmp165 = &((org$frostlang$frostc$Compiler*) $tmp164)->BUILTIN_UINT64_TYPE;
org$frostlang$frostc$Type* $tmp166 = *$tmp165;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
frost$core$String* $tmp167 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local1) = ((frost$core$String*) NULL);
return $tmp166;
block60:;
frost$core$Bit $tmp168 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s169);
bool $tmp170 = $tmp168.value;
if ($tmp170) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:38
frost$core$Weak** $tmp171 = &param0->compiler;
frost$core$Weak* $tmp172 = *$tmp171;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:38:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp173 = &$tmp172->_valid;
frost$core$Bit $tmp174 = *$tmp173;
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block69; else goto block70;
block70:;
frost$core$Int $tmp176 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s177, $tmp176);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp178 = &$tmp172->value;
frost$core$Object* $tmp179 = *$tmp178;
frost$core$Frost$ref$frost$core$Object$Q($tmp179);
org$frostlang$frostc$Type** $tmp180 = &((org$frostlang$frostc$Compiler*) $tmp179)->BUILTIN_FLOAT32_TYPE;
org$frostlang$frostc$Type* $tmp181 = *$tmp180;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
frost$core$String* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local1) = ((frost$core$String*) NULL);
return $tmp181;
block66:;
frost$core$Bit $tmp183 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp32, &$s184);
bool $tmp185 = $tmp183.value;
if ($tmp185) goto block71; else goto block10;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:39
frost$core$Weak** $tmp186 = &param0->compiler;
frost$core$Weak* $tmp187 = *$tmp186;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:39:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp188 = &$tmp187->_valid;
frost$core$Bit $tmp189 = *$tmp188;
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block74; else goto block75;
block75:;
frost$core$Int $tmp191 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s192, $tmp191);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp193 = &$tmp187->value;
frost$core$Object* $tmp194 = *$tmp193;
frost$core$Frost$ref$frost$core$Object$Q($tmp194);
org$frostlang$frostc$Type** $tmp195 = &((org$frostlang$frostc$Compiler*) $tmp194)->BUILTIN_FLOAT64_TYPE;
org$frostlang$frostc$Type* $tmp196 = *$tmp195;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
frost$core$String* $tmp197 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local1) = ((frost$core$String*) NULL);
return $tmp196;
block10:;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:42
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp198 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp199 = *(&local1);
frost$core$Int $tmp200 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:42:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp201 = &(&local3)->$rawValue;
*$tmp201 = $tmp200;
org$frostlang$frostc$Type$Kind $tmp202 = *(&local3);
*(&local2) = $tmp202;
org$frostlang$frostc$Type$Kind $tmp203 = *(&local2);
org$frostlang$frostc$Position $tmp204 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp198, $tmp199, $tmp203, $tmp204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
frost$core$String* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local1) = ((frost$core$String*) NULL);
return $tmp198;
block3:;
frost$core$Int $tmp206 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:44:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp207 = $tmp7.value;
int64_t $tmp208 = $tmp206.value;
bool $tmp209 = $tmp207 == $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block77; else goto block78;
block77:;
org$frostlang$frostc$Position* $tmp212 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp213 = *$tmp212;
*(&local4) = $tmp213;
org$frostlang$frostc$ASTNode** $tmp214 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp215 = *$tmp214;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
org$frostlang$frostc$ASTNode* $tmp216 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local5) = $tmp215;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:45
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp217 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp218 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int($tmp217, $tmp218);
org$frostlang$frostc$ASTNode* $tmp219 = *(&local5);
org$frostlang$frostc$Type* $tmp220 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp219);
frost$collections$Array$add$frost$collections$Array$T($tmp217, ((frost$core$Object*) $tmp220));
*(&local6) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$collections$Array* $tmp221 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local6) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:46
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp222 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$collections$Array* $tmp223 = *(&local6);
frost$core$Int $tmp224 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Scanner.frost:46:37
frost$core$Int $tmp225 = (frost$core$Int) {0u};
int64_t $tmp226 = $tmp224.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 >= $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block83; else goto block82;
block83:;
ITable* $tmp231 = ((frost$collections$CollectionView*) $tmp223)->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp231 = $tmp231->next;
}
$fn233 $tmp232 = $tmp231->methods[0];
frost$core$Int $tmp234 = $tmp232(((frost$collections$CollectionView*) $tmp223));
int64_t $tmp235 = $tmp224.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 < $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block81; else goto block82;
block82:;
frost$core$Int $tmp240 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s241, $tmp240, &$s242);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp243 = &$tmp223->data;
frost$core$Object** $tmp244 = *$tmp243;
frost$core$Int64 $tmp245 = frost$core$Int64$init$frost$core$Int($tmp224);
int64_t $tmp246 = $tmp245.value;
frost$core$Object* $tmp247 = $tmp244[$tmp246];
frost$core$Frost$ref$frost$core$Object$Q($tmp247);
frost$core$String** $tmp248 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp247))->name;
frost$core$String* $tmp249 = *$tmp248;
frost$core$String* $tmp250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp249, &$s251);
frost$core$Int $tmp252 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:46:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp253 = &(&local8)->$rawValue;
*$tmp253 = $tmp252;
org$frostlang$frostc$Type$Kind $tmp254 = *(&local8);
*(&local7) = $tmp254;
org$frostlang$frostc$Type$Kind $tmp255 = *(&local7);
org$frostlang$frostc$Position $tmp256 = *(&local4);
frost$collections$Array* $tmp257 = *(&local6);
frost$core$Bit $tmp258 = (frost$core$Bit) {false};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp222, $tmp250, $tmp255, $tmp256, ((frost$collections$ListView*) $tmp257), $tmp258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Frost$unref$frost$core$Object$Q($tmp247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$collections$Array* $tmp259 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp260 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp222;
block78:;
frost$core$Int $tmp261 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:48:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp262 = $tmp7.value;
int64_t $tmp263 = $tmp261.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Position* $tmp267 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp268 = *$tmp267;
*(&local9) = $tmp268;
frost$core$String** $tmp269 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp270 = *$tmp269;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$String* $tmp271 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local10) = $tmp270;
org$frostlang$frostc$FixedArray** $tmp272 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp273 = *$tmp272;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
org$frostlang$frostc$FixedArray* $tmp274 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local11) = $tmp273;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:49
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp275 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp275);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$collections$Array* $tmp276 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local12) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:50
org$frostlang$frostc$FixedArray* $tmp277 = *(&local11);
ITable* $tmp278 = ((frost$collections$Iterable*) $tmp277)->$class->itable;
while ($tmp278->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp278 = $tmp278->next;
}
$fn280 $tmp279 = $tmp278->methods[0];
frost$collections$Iterator* $tmp281 = $tmp279(((frost$collections$Iterable*) $tmp277));
goto block88;
block88:;
ITable* $tmp282 = $tmp281->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp282 = $tmp282->next;
}
$fn284 $tmp283 = $tmp282->methods[0];
frost$core$Bit $tmp285 = $tmp283($tmp281);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block90; else goto block89;
block89:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp287 = $tmp281->$class->itable;
while ($tmp287->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp287 = $tmp287->next;
}
$fn289 $tmp288 = $tmp287->methods[1];
frost$core$Object* $tmp290 = $tmp288($tmp281);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp290)));
org$frostlang$frostc$ASTNode* $tmp291 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp290);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:51
frost$collections$Array* $tmp292 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp293 = *(&local13);
org$frostlang$frostc$Type* $tmp294 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp293);
frost$collections$Array$add$frost$collections$Array$T($tmp292, ((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q($tmp290);
org$frostlang$frostc$ASTNode* $tmp295 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block88;
block90:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:53
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp296 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp297 = *(&local10);
frost$core$Int $tmp298 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:53:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp299 = &(&local15)->$rawValue;
*$tmp299 = $tmp298;
org$frostlang$frostc$Type$Kind $tmp300 = *(&local15);
*(&local14) = $tmp300;
org$frostlang$frostc$Type$Kind $tmp301 = *(&local14);
$fn303 $tmp302 = ($fn303) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp304 = $tmp302(param1);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp296, $tmp297, $tmp301, $tmp304);
frost$collections$Array* $tmp305 = *(&local12);
org$frostlang$frostc$Type* $tmp306 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp296, ((frost$collections$ListView*) $tmp305));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$collections$Array* $tmp307 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local12) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp308 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp309 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local10) = ((frost$core$String*) NULL);
return $tmp306;
block86:;
frost$core$Int $tmp310 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:55:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp311 = $tmp7.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 == $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp316 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp317 = *$tmp316;
org$frostlang$frostc$IR$Value** $tmp318 = (org$frostlang$frostc$IR$Value**) (param1->$data + 24);
org$frostlang$frostc$IR$Value* $tmp319 = *$tmp318;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
org$frostlang$frostc$IR$Value* $tmp320 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
*(&local16) = $tmp319;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:56
org$frostlang$frostc$IR$Value* $tmp321 = *(&local16);
frost$core$Int* $tmp322 = &$tmp321->$rawValue;
frost$core$Int $tmp323 = *$tmp322;
frost$core$Int $tmp324 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:57:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp325 = $tmp323.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 == $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block96; else goto block95;
block96:;
org$frostlang$frostc$Type** $tmp330 = (org$frostlang$frostc$Type**) ($tmp321->$data + 0);
org$frostlang$frostc$Type* $tmp331 = *$tmp330;
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
org$frostlang$frostc$Type* $tmp332 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local17) = $tmp331;
org$frostlang$frostc$Type** $tmp333 = (org$frostlang$frostc$Type**) ($tmp321->$data + 8);
org$frostlang$frostc$Type* $tmp334 = *$tmp333;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:58
org$frostlang$frostc$Type* $tmp335 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
org$frostlang$frostc$Type* $tmp336 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp337 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp335;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:61
frost$core$Int $tmp338 = (frost$core$Int) {61u};
org$frostlang$frostc$IR$Value* $tmp339 = *(&local16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:61:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn341 $tmp340 = ($fn341) ((frost$core$Object*) $tmp339)->$class->vtable[0];
frost$core$String* $tmp342 = $tmp340(((frost$core$Object*) $tmp339));
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s344, $tmp342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp343, &$s346);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s347, $tmp338, $tmp345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
abort(); // unreachable
block93:;
frost$core$Int $tmp348 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:63:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp349 = $tmp7.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp354 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp355 = *$tmp354;
*(&local18) = $tmp355;
org$frostlang$frostc$parser$Token$Kind* $tmp356 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp357 = *$tmp356;
*(&local19) = $tmp357;
org$frostlang$frostc$FixedArray** $tmp358 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp359 = *$tmp358;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
org$frostlang$frostc$FixedArray* $tmp360 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local20) = $tmp359;
org$frostlang$frostc$ASTNode** $tmp361 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp362 = *$tmp361;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
org$frostlang$frostc$ASTNode* $tmp363 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local21) = $tmp362;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:65
org$frostlang$frostc$parser$Token$Kind $tmp364 = *(&local19);
frost$core$Int $tmp365 = $tmp364.$rawValue;
frost$core$Int $tmp366 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:66:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
bool $tmp369 = $tmp367 == $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:67
frost$core$Int $tmp372 = (frost$core$Int) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:67:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp373 = &(&local24)->$rawValue;
*$tmp373 = $tmp372;
org$frostlang$frostc$Type$Kind $tmp374 = *(&local24);
*(&local23) = $tmp374;
org$frostlang$frostc$Type$Kind $tmp375 = *(&local23);
*(&local22) = $tmp375;
goto block102;
block104:;
frost$core$Int $tmp376 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:69:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp377 = $tmp365.value;
int64_t $tmp378 = $tmp376.value;
bool $tmp379 = $tmp377 == $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:70
frost$core$Int $tmp382 = (frost$core$Int) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:70:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp383 = &(&local26)->$rawValue;
*$tmp383 = $tmp382;
org$frostlang$frostc$Type$Kind $tmp384 = *(&local26);
*(&local25) = $tmp384;
org$frostlang$frostc$Type$Kind $tmp385 = *(&local25);
*(&local22) = $tmp385;
goto block102;
block108:;
frost$core$Int $tmp386 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:72:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp387 = $tmp365.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 == $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:73
frost$core$Int $tmp392 = (frost$core$Int) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:73:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp393 = &(&local28)->$rawValue;
*$tmp393 = $tmp392;
org$frostlang$frostc$Type$Kind $tmp394 = *(&local28);
*(&local27) = $tmp394;
org$frostlang$frostc$Type$Kind $tmp395 = *(&local27);
*(&local22) = $tmp395;
goto block102;
block112:;
frost$core$Int $tmp396 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:75:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp397 = $tmp365.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 == $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:76
frost$core$Int $tmp402 = (frost$core$Int) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:76:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp403 = &(&local30)->$rawValue;
*$tmp403 = $tmp402;
org$frostlang$frostc$Type$Kind $tmp404 = *(&local30);
*(&local29) = $tmp404;
org$frostlang$frostc$Type$Kind $tmp405 = *(&local29);
*(&local22) = $tmp405;
goto block102;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:79
frost$core$Int $tmp406 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s407, $tmp406, &$s408);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:82
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp409);
*(&local31) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$collections$Array* $tmp410 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local31) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:83
org$frostlang$frostc$FixedArray* $tmp411 = *(&local20);
ITable* $tmp412 = ((frost$collections$Iterable*) $tmp411)->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp412 = $tmp412->next;
}
$fn414 $tmp413 = $tmp412->methods[0];
frost$collections$Iterator* $tmp415 = $tmp413(((frost$collections$Iterable*) $tmp411));
goto block119;
block119:;
ITable* $tmp416 = $tmp415->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[0];
frost$core$Bit $tmp419 = $tmp417($tmp415);
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block121; else goto block120;
block120:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp421 = $tmp415->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp421 = $tmp421->next;
}
$fn423 $tmp422 = $tmp421->methods[1];
frost$core$Object* $tmp424 = $tmp422($tmp415);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp424)));
org$frostlang$frostc$ASTNode* $tmp425 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp424);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:84
frost$collections$Array* $tmp426 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp427 = *(&local32);
org$frostlang$frostc$Type* $tmp428 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp427);
frost$collections$Array$add$frost$collections$Array$T($tmp426, ((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
org$frostlang$frostc$ASTNode* $tmp429 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block119;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:86
*(&local33) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:87
org$frostlang$frostc$ASTNode* $tmp430 = *(&local21);
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430 != NULL};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block122; else goto block124;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:88
org$frostlang$frostc$ASTNode* $tmp433 = *(&local21);
org$frostlang$frostc$Type* $tmp434 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
org$frostlang$frostc$Type* $tmp435 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local33) = $tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
goto block123;
block124:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:91
frost$core$Weak** $tmp436 = &param0->compiler;
frost$core$Weak* $tmp437 = *$tmp436;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp438 = &$tmp437->_valid;
frost$core$Bit $tmp439 = *$tmp438;
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block127; else goto block128;
block128:;
frost$core$Int $tmp441 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s442, $tmp441);
abort(); // unreachable
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp443 = &$tmp437->value;
frost$core$Object* $tmp444 = *$tmp443;
frost$core$Frost$ref$frost$core$Object$Q($tmp444);
org$frostlang$frostc$Type** $tmp445 = &((org$frostlang$frostc$Compiler*) $tmp444)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp446 = *$tmp445;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
org$frostlang$frostc$Type* $tmp447 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local33) = $tmp446;
frost$core$Frost$unref$frost$core$Object$Q($tmp444);
goto block123;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:93
frost$core$Weak** $tmp448 = &param0->compiler;
frost$core$Weak* $tmp449 = *$tmp448;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:93:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp450 = &$tmp449->_valid;
frost$core$Bit $tmp451 = *$tmp450;
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block131; else goto block132;
block132:;
frost$core$Int $tmp453 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s454, $tmp453);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp455 = &$tmp449->value;
frost$core$Object* $tmp456 = *$tmp455;
frost$core$Frost$ref$frost$core$Object$Q($tmp456);
$fn458 $tmp457 = ($fn458) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp459 = $tmp457(param1);
org$frostlang$frostc$Type$Kind $tmp460 = *(&local22);
frost$collections$Array* $tmp461 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp462 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp461);
org$frostlang$frostc$Type* $tmp463 = *(&local33);
frost$core$Int $tmp464 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp465 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp456), $tmp459, $tmp460, ((frost$collections$ListView*) $tmp462), $tmp463, $tmp464);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q($tmp456);
org$frostlang$frostc$Type* $tmp466 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local33) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp467 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local31) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp468 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp469 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp465;
block100:;
frost$core$Int $tmp470 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:96:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp471 = $tmp7.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 == $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Position* $tmp476 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp477 = *$tmp476;
*(&local34) = $tmp477;
org$frostlang$frostc$FixedArray** $tmp478 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp479 = *$tmp478;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
org$frostlang$frostc$FixedArray* $tmp480 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local35) = $tmp479;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:97
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp481 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp481);
*(&local36) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$collections$Array* $tmp482 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local36) = $tmp481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:98
org$frostlang$frostc$FixedArray* $tmp483 = *(&local35);
ITable* $tmp484 = ((frost$collections$Iterable*) $tmp483)->$class->itable;
while ($tmp484->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp484 = $tmp484->next;
}
$fn486 $tmp485 = $tmp484->methods[0];
frost$collections$Iterator* $tmp487 = $tmp485(((frost$collections$Iterable*) $tmp483));
goto block136;
block136:;
ITable* $tmp488 = $tmp487->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[0];
frost$core$Bit $tmp491 = $tmp489($tmp487);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block138; else goto block137;
block137:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp493 = $tmp487->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[1];
frost$core$Object* $tmp496 = $tmp494($tmp487);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp496)));
org$frostlang$frostc$ASTNode* $tmp497 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp496);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:99
frost$collections$Array* $tmp498 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp499 = *(&local37);
org$frostlang$frostc$Type* $tmp500 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp499);
frost$collections$Array$add$frost$collections$Array$T($tmp498, ((frost$core$Object*) $tmp500));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$core$Frost$unref$frost$core$Object$Q($tmp496);
org$frostlang$frostc$ASTNode* $tmp501 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block136;
block138:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:101
frost$collections$Array* $tmp502 = *(&local36);
org$frostlang$frostc$Type* $tmp503 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp502));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$collections$Array* $tmp504 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local36) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp505 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp503;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:104
frost$core$Int $tmp506 = (frost$core$Int) {104u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn508 $tmp507 = ($fn508) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp509 = $tmp507(((frost$core$Object*) param1));
frost$core$String* $tmp510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s511, $tmp509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$String* $tmp512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp510, &$s513);
frost$core$Int* $tmp514 = &param1->$rawValue;
frost$core$Int $tmp515 = *$tmp514;
frost$core$Int$wrapper* $tmp516;
$tmp516 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp516->value = $tmp515;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn518 $tmp517 = ($fn518) ((frost$core$Object*) $tmp516)->$class->vtable[0];
frost$core$String* $tmp519 = $tmp517(((frost$core$Object*) $tmp516));
frost$core$String* $tmp520 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp512, $tmp519);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$String* $tmp521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp520, &$s522);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s523, $tmp506, $tmp521);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:107
frost$core$Int $tmp524 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s525, $tmp524);
abort(); // unreachable

}
frost$core$Int org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int param2, frost$core$Int param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:111
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:111:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp526 = param2.value;
int64_t $tmp527 = param3.value;
int64_t $tmp528 = $tmp526 & $tmp527;
frost$core$Int $tmp529 = (frost$core$Int) {$tmp528};
frost$core$Int $tmp530 = (frost$core$Int) {0u};
int64_t $tmp531 = $tmp529.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 != $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:112
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:112:18
frost$io$File** $tmp536 = &param0->source;
frost$io$File* $tmp537 = *$tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537 != NULL};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block5; else goto block6;
block6:;
frost$core$Int $tmp540 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s541, $tmp540, &$s542);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp543 = &param0->compiler;
frost$core$Weak* $tmp544 = *$tmp543;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp545 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block8; else goto block9;
block9:;
frost$core$Int $tmp547 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s548, $tmp547);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp549 = &$tmp544->value;
frost$core$Object* $tmp550 = *$tmp549;
frost$core$Frost$ref$frost$core$Object$Q($tmp550);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp550), param1, &$s551);
frost$core$Frost$unref$frost$core$Object$Q($tmp550);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:114
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp552 = param2.value;
int64_t $tmp553 = param3.value;
int64_t $tmp554 = $tmp552 | $tmp553;
frost$core$Int $tmp555 = (frost$core$Int) {$tmp554};
return $tmp555;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:121
frost$core$Bit $tmp556 = (frost$core$Bit) {param3 != NULL};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:122
frost$core$Bit $tmp558 = (frost$core$Bit) {true};
return $tmp558;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:124
frost$core$String* $tmp559 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s560, param2);
frost$core$String* $tmp561 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp559, &$s562);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:124:26
frost$io$File** $tmp563 = &param0->source;
frost$io$File* $tmp564 = *$tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564 != NULL};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block4; else goto block5;
block5:;
frost$core$Int $tmp567 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s568, $tmp567, &$s569);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp570 = &param0->compiler;
frost$core$Weak* $tmp571 = *$tmp570;
frost$core$Object* $tmp572 = frost$core$Weak$get$R$frost$core$Weak$T($tmp571);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp572), param1, $tmp561);
frost$core$Frost$unref$frost$core$Object$Q($tmp572);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:125
frost$core$Bit $tmp573 = (frost$core$Bit) {false};
return $tmp573;

}
org$frostlang$frostc$Annotations* org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int local0;
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
frost$core$Int $tmp574 = (frost$core$Int) {0u};
*(&local0) = $tmp574;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:119
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp575 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local1) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp577 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Scanner.frost:120:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp578 = &$tmp577->pointer;
*$tmp578 = ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp579 = &$tmp577->target;
frost$core$Immutable* $tmp580 = *$tmp579;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Immutable** $tmp581 = &$tmp577->target;
*$tmp581 = ((frost$core$Immutable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Method* $tmp582 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local2) = $tmp577;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:127
ITable* $tmp583 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$collections$Iterator* $tmp586 = $tmp584(((frost$collections$Iterable*) param1));
goto block2;
block2:;
ITable* $tmp587 = $tmp586->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp587 = $tmp587->next;
}
$fn589 $tmp588 = $tmp587->methods[0];
frost$core$Bit $tmp590 = $tmp588($tmp586);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block4; else goto block3;
block3:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp592 = $tmp586->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[1];
frost$core$Object* $tmp595 = $tmp593($tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp595)));
org$frostlang$frostc$ASTNode* $tmp596 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp595);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:128
org$frostlang$frostc$ASTNode* $tmp597 = *(&local3);
frost$core$Int* $tmp598 = &$tmp597->$rawValue;
frost$core$Int $tmp599 = *$tmp598;
frost$core$Int $tmp600 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:129:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600.value;
bool $tmp603 = $tmp601 == $tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp606 = (org$frostlang$frostc$Position*) ($tmp597->$data + 0);
org$frostlang$frostc$Position $tmp607 = *$tmp606;
*(&local4) = $tmp607;
frost$core$String** $tmp608 = (frost$core$String**) ($tmp597->$data + 24);
frost$core$String* $tmp609 = *$tmp608;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$String* $tmp610 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local5) = $tmp609;
frost$core$String** $tmp611 = (frost$core$String**) ($tmp597->$data + 32);
frost$core$String* $tmp612 = *$tmp611;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$core$String* $tmp613 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local6) = $tmp612;
org$frostlang$frostc$ASTNode** $tmp614 = (org$frostlang$frostc$ASTNode**) ($tmp597->$data + 40);
org$frostlang$frostc$ASTNode* $tmp615 = *$tmp614;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
org$frostlang$frostc$ASTNode* $tmp616 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
*(&local7) = $tmp615;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:130
org$frostlang$frostc$ASTNode* $tmp617 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
org$frostlang$frostc$ASTNode* $tmp618 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local8) = $tmp617;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:131
frost$core$String* $tmp619 = *(&local5);
frost$core$Bit $tmp620 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s621);
bool $tmp622 = $tmp620.value;
if ($tmp622) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:133
org$frostlang$frostc$Position $tmp623 = *(&local4);
frost$core$Int $tmp624 = *(&local0);
frost$core$Int $tmp625 = (frost$core$Int) {2u};
frost$core$Int $tmp626 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp623, $tmp624, $tmp625);
*(&local0) = $tmp626;
goto block9;
block11:;
frost$core$Bit $tmp627 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s628);
bool $tmp629 = $tmp627.value;
if ($tmp629) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:136
org$frostlang$frostc$Position $tmp630 = *(&local4);
frost$core$Int $tmp631 = *(&local0);
frost$core$Int $tmp632 = (frost$core$Int) {4u};
frost$core$Int $tmp633 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp630, $tmp631, $tmp632);
*(&local0) = $tmp633;
goto block9;
block13:;
frost$core$Bit $tmp634 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s635);
bool $tmp636 = $tmp634.value;
if ($tmp636) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:139
org$frostlang$frostc$Position $tmp637 = *(&local4);
frost$core$Int $tmp638 = *(&local0);
frost$core$Int $tmp639 = (frost$core$Int) {8u};
frost$core$Int $tmp640 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp637, $tmp638, $tmp639);
*(&local0) = $tmp640;
goto block9;
block15:;
frost$core$Bit $tmp641 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s642);
bool $tmp643 = $tmp641.value;
if ($tmp643) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:142
org$frostlang$frostc$Position $tmp644 = *(&local4);
frost$core$Int $tmp645 = *(&local0);
frost$core$Int $tmp646 = (frost$core$Int) {16u};
frost$core$Int $tmp647 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp644, $tmp645, $tmp646);
*(&local0) = $tmp647;
goto block9;
block17:;
frost$core$Bit $tmp648 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s649);
bool $tmp650 = $tmp648.value;
if ($tmp650) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:145
org$frostlang$frostc$Position $tmp651 = *(&local4);
frost$core$Int $tmp652 = *(&local0);
frost$core$Int $tmp653 = (frost$core$Int) {32u};
frost$core$Int $tmp654 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp651, $tmp652, $tmp653);
*(&local0) = $tmp654;
goto block9;
block19:;
frost$core$Bit $tmp655 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s656);
bool $tmp657 = $tmp655.value;
if ($tmp657) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:148
org$frostlang$frostc$Position $tmp658 = *(&local4);
frost$core$Int $tmp659 = *(&local0);
frost$core$Int $tmp660 = (frost$core$Int) {64u};
frost$core$Int $tmp661 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp658, $tmp659, $tmp660);
*(&local0) = $tmp661;
goto block9;
block21:;
frost$core$Bit $tmp662 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s663);
bool $tmp664 = $tmp662.value;
if ($tmp664) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:151
org$frostlang$frostc$Position $tmp665 = *(&local4);
frost$core$Int $tmp666 = *(&local0);
frost$core$Int $tmp667 = (frost$core$Int) {128u};
frost$core$Int $tmp668 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp665, $tmp666, $tmp667);
*(&local0) = $tmp668;
goto block9;
block23:;
frost$core$Bit $tmp669 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s670);
bool $tmp671 = $tmp669.value;
if ($tmp671) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:154
org$frostlang$frostc$Position $tmp672 = *(&local4);
frost$core$Int $tmp673 = *(&local0);
frost$core$Int $tmp674 = (frost$core$Int) {256u};
frost$core$Int $tmp675 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp672, $tmp673, $tmp674);
*(&local0) = $tmp675;
goto block9;
block25:;
frost$core$Bit $tmp676 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s677);
bool $tmp678 = $tmp676.value;
if ($tmp678) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:157
org$frostlang$frostc$Position $tmp679 = *(&local4);
frost$core$Int $tmp680 = *(&local0);
frost$core$Int $tmp681 = (frost$core$Int) {512u};
frost$core$Int $tmp682 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp679, $tmp680, $tmp681);
*(&local0) = $tmp682;
goto block9;
block27:;
frost$core$Bit $tmp683 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s684);
bool $tmp685 = $tmp683.value;
if ($tmp685) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:160
org$frostlang$frostc$Position $tmp686 = *(&local4);
frost$core$Int $tmp687 = *(&local0);
frost$core$Int $tmp688 = (frost$core$Int) {1024u};
frost$core$Int $tmp689 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp686, $tmp687, $tmp688);
*(&local0) = $tmp689;
goto block9;
block29:;
frost$core$Bit $tmp690 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s691);
bool $tmp692 = $tmp690.value;
if ($tmp692) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:163
org$frostlang$frostc$Position $tmp693 = *(&local4);
frost$core$Int $tmp694 = *(&local0);
frost$core$Int $tmp695 = (frost$core$Int) {2048u};
frost$core$Int $tmp696 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp693, $tmp694, $tmp695);
*(&local0) = $tmp696;
goto block9;
block31:;
frost$core$Bit $tmp697 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s698);
bool $tmp699 = $tmp697.value;
if ($tmp699) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:166
org$frostlang$frostc$Position $tmp700 = *(&local4);
frost$core$Int $tmp701 = *(&local0);
frost$core$Int $tmp702 = (frost$core$Int) {4096u};
frost$core$Int $tmp703 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp700, $tmp701, $tmp702);
*(&local0) = $tmp703;
goto block9;
block33:;
frost$core$Bit $tmp704 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s705);
bool $tmp706 = $tmp704.value;
if ($tmp706) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:169
org$frostlang$frostc$Position $tmp707 = *(&local4);
frost$core$Int $tmp708 = *(&local0);
frost$core$Int $tmp709 = (frost$core$Int) {16384u};
frost$core$Int $tmp710 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp707, $tmp708, $tmp709);
*(&local0) = $tmp710;
goto block9;
block35:;
frost$core$Bit $tmp711 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s712);
bool $tmp713 = $tmp711.value;
if ($tmp713) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:172
org$frostlang$frostc$Position $tmp714 = *(&local4);
frost$core$Int $tmp715 = *(&local0);
frost$core$Int $tmp716 = (frost$core$Int) {32768u};
frost$core$Int $tmp717 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp714, $tmp715, $tmp716);
*(&local0) = $tmp717;
goto block9;
block37:;
frost$core$Bit $tmp718 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s719);
bool $tmp720 = $tmp718.value;
if ($tmp720) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:175
org$frostlang$frostc$Position $tmp721 = *(&local4);
frost$core$Int $tmp722 = *(&local0);
frost$core$Int $tmp723 = (frost$core$Int) {131072u};
frost$core$Int $tmp724 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp721, $tmp722, $tmp723);
*(&local0) = $tmp724;
goto block9;
block39:;
frost$core$Bit $tmp725 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s726);
bool $tmp727 = $tmp725.value;
if ($tmp727) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:178
frost$collections$Array* $tmp728 = *(&local1);
frost$core$Bit $tmp729 = (frost$core$Bit) {$tmp728 == NULL};
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:179
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp731 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp731);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$collections$Array* $tmp732 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local1) = $tmp731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:181
frost$core$Method* $tmp733 = *(&local2);
org$frostlang$frostc$Position $tmp734 = *(&local4);
frost$core$String* $tmp735 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp736 = *(&local8);
frost$core$Int8** $tmp737 = &$tmp733->pointer;
frost$core$Int8* $tmp738 = *$tmp737;
frost$core$Immutable** $tmp739 = &$tmp733->target;
frost$core$Immutable* $tmp740 = *$tmp739;
bool $tmp741 = $tmp740 != ((frost$core$Immutable*) NULL);
if ($tmp741) goto block46; else goto block47;
block47:;
frost$core$Bit $tmp743 = (($fn742) $tmp738)(param0, $tmp734, $tmp735, $tmp736);
*(&local9) = $tmp743;
goto block48;
block46:;
frost$core$Bit $tmp745 = (($fn744) $tmp738)($tmp740, param0, $tmp734, $tmp735, $tmp736);
*(&local9) = $tmp745;
goto block48;
block48:;
frost$core$Bit $tmp746 = *(&local9);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:182
frost$collections$Array* $tmp748 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp749 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp750 = (frost$core$Int) {0u};
frost$core$String* $tmp751 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp752 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp749, $tmp750, $tmp751, $tmp752);
frost$collections$Array$add$frost$collections$Array$T($tmp748, ((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp753 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block45;
block45:;
goto block9;
block41:;
frost$core$Bit $tmp754 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s755);
bool $tmp756 = $tmp754.value;
if ($tmp756) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:187
frost$collections$Array* $tmp757 = *(&local1);
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757 == NULL};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:188
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp760 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$collections$Array* $tmp761 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local1) = $tmp760;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:190
frost$core$Method* $tmp762 = *(&local2);
org$frostlang$frostc$Position $tmp763 = *(&local4);
frost$core$String* $tmp764 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp765 = *(&local8);
frost$core$Int8** $tmp766 = &$tmp762->pointer;
frost$core$Int8* $tmp767 = *$tmp766;
frost$core$Immutable** $tmp768 = &$tmp762->target;
frost$core$Immutable* $tmp769 = *$tmp768;
bool $tmp770 = $tmp769 != ((frost$core$Immutable*) NULL);
if ($tmp770) goto block55; else goto block56;
block56:;
frost$core$Bit $tmp772 = (($fn771) $tmp767)(param0, $tmp763, $tmp764, $tmp765);
*(&local10) = $tmp772;
goto block57;
block55:;
frost$core$Bit $tmp774 = (($fn773) $tmp767)($tmp769, param0, $tmp763, $tmp764, $tmp765);
*(&local10) = $tmp774;
goto block57;
block57:;
frost$core$Bit $tmp775 = *(&local10);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:191
frost$collections$Array* $tmp777 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp778 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp779 = (frost$core$Int) {1u};
frost$core$String* $tmp780 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp781 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp778, $tmp779, $tmp780, $tmp781);
frost$collections$Array$add$frost$collections$Array$T($tmp777, ((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp782 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block54:;
goto block9;
block50:;
frost$core$Bit $tmp783 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s784);
bool $tmp785 = $tmp783.value;
if ($tmp785) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:196
frost$collections$Array* $tmp786 = *(&local1);
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786 == NULL};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:197
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp789 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$collections$Array* $tmp790 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local1) = $tmp789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:199
frost$core$Method* $tmp791 = *(&local2);
org$frostlang$frostc$Position $tmp792 = *(&local4);
frost$core$String* $tmp793 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp794 = *(&local8);
frost$core$Int8** $tmp795 = &$tmp791->pointer;
frost$core$Int8* $tmp796 = *$tmp795;
frost$core$Immutable** $tmp797 = &$tmp791->target;
frost$core$Immutable* $tmp798 = *$tmp797;
bool $tmp799 = $tmp798 != ((frost$core$Immutable*) NULL);
if ($tmp799) goto block64; else goto block65;
block65:;
frost$core$Bit $tmp801 = (($fn800) $tmp796)(param0, $tmp792, $tmp793, $tmp794);
*(&local11) = $tmp801;
goto block66;
block64:;
frost$core$Bit $tmp803 = (($fn802) $tmp796)($tmp798, param0, $tmp792, $tmp793, $tmp794);
*(&local11) = $tmp803;
goto block66;
block66:;
frost$core$Bit $tmp804 = *(&local11);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:200
frost$collections$Array* $tmp806 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp807 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp808 = (frost$core$Int) {2u};
frost$core$String* $tmp809 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp810 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp807, $tmp808, $tmp809, $tmp810);
frost$collections$Array$add$frost$collections$Array$T($tmp806, ((frost$core$Object*) $tmp807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp811 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block63;
block63:;
goto block9;
block59:;
frost$core$Bit $tmp812 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s813);
bool $tmp814 = $tmp812.value;
if ($tmp814) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:205
frost$collections$Array* $tmp815 = *(&local1);
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815 == NULL};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:206
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp818 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp818);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
frost$collections$Array* $tmp819 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
*(&local1) = $tmp818;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:208
frost$core$Method* $tmp820 = *(&local2);
org$frostlang$frostc$Position $tmp821 = *(&local4);
frost$core$String* $tmp822 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp823 = *(&local8);
frost$core$Int8** $tmp824 = &$tmp820->pointer;
frost$core$Int8* $tmp825 = *$tmp824;
frost$core$Immutable** $tmp826 = &$tmp820->target;
frost$core$Immutable* $tmp827 = *$tmp826;
bool $tmp828 = $tmp827 != ((frost$core$Immutable*) NULL);
if ($tmp828) goto block73; else goto block74;
block74:;
frost$core$Bit $tmp830 = (($fn829) $tmp825)(param0, $tmp821, $tmp822, $tmp823);
*(&local12) = $tmp830;
goto block75;
block73:;
frost$core$Bit $tmp832 = (($fn831) $tmp825)($tmp827, param0, $tmp821, $tmp822, $tmp823);
*(&local12) = $tmp832;
goto block75;
block75:;
frost$core$Bit $tmp833 = *(&local12);
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:209
frost$collections$Array* $tmp835 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp836 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp837 = (frost$core$Int) {3u};
frost$core$String* $tmp838 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp839 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp836, $tmp837, $tmp838, $tmp839);
frost$collections$Array$add$frost$collections$Array$T($tmp835, ((frost$core$Object*) $tmp836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp840 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block72;
block72:;
goto block9;
block68:;
frost$core$Bit $tmp841 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s842);
bool $tmp843 = $tmp841.value;
if ($tmp843) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:214
frost$collections$Array* $tmp844 = *(&local1);
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844 == NULL};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:215
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp847 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp847);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
frost$collections$Array* $tmp848 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
*(&local1) = $tmp847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
goto block79;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:217
frost$core$Method* $tmp849 = *(&local2);
org$frostlang$frostc$Position $tmp850 = *(&local4);
frost$core$String* $tmp851 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp852 = *(&local8);
frost$core$Int8** $tmp853 = &$tmp849->pointer;
frost$core$Int8* $tmp854 = *$tmp853;
frost$core$Immutable** $tmp855 = &$tmp849->target;
frost$core$Immutable* $tmp856 = *$tmp855;
bool $tmp857 = $tmp856 != ((frost$core$Immutable*) NULL);
if ($tmp857) goto block82; else goto block83;
block83:;
frost$core$Bit $tmp859 = (($fn858) $tmp854)(param0, $tmp850, $tmp851, $tmp852);
*(&local13) = $tmp859;
goto block84;
block82:;
frost$core$Bit $tmp861 = (($fn860) $tmp854)($tmp856, param0, $tmp850, $tmp851, $tmp852);
*(&local13) = $tmp861;
goto block84;
block84:;
frost$core$Bit $tmp862 = *(&local13);
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:218
frost$collections$Array* $tmp864 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp865 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp866 = (frost$core$Int) {4u};
frost$core$String* $tmp867 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp868 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp865, $tmp866, $tmp867, $tmp868);
frost$collections$Array$add$frost$collections$Array$T($tmp864, ((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:219
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp869 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block81;
block81:;
goto block9;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:223
org$frostlang$frostc$Position $tmp870 = *(&local4);
frost$core$String* $tmp871 = *(&local5);
frost$core$String* $tmp872 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s873, $tmp871);
frost$core$String* $tmp874 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp872, &$s875);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:223:34
frost$io$File** $tmp876 = &param0->source;
frost$io$File* $tmp877 = *$tmp876;
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877 != NULL};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block86; else goto block87;
block87:;
frost$core$Int $tmp880 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s881, $tmp880, &$s882);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp883 = &param0->compiler;
frost$core$Weak* $tmp884 = *$tmp883;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp885 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp884);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block89; else goto block90;
block90:;
frost$core$Int $tmp887 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s888, $tmp887);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp889 = &$tmp884->value;
frost$core$Object* $tmp890 = *$tmp889;
frost$core$Frost$ref$frost$core$Object$Q($tmp890);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp890), $tmp870, $tmp874);
frost$core$Frost$unref$frost$core$Object$Q($tmp890);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:226
org$frostlang$frostc$ASTNode* $tmp891 = *(&local8);
frost$core$Bit $tmp892 = (frost$core$Bit) {$tmp891 != NULL};
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:227
org$frostlang$frostc$Position $tmp894 = *(&local4);
frost$core$String* $tmp895 = *(&local5);
frost$core$String* $tmp896 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s897, $tmp895);
frost$core$String* $tmp898 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp896, &$s899);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:227:30
frost$io$File** $tmp900 = &param0->source;
frost$io$File* $tmp901 = *$tmp900;
frost$core$Bit $tmp902 = (frost$core$Bit) {$tmp901 != NULL};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block94; else goto block95;
block95:;
frost$core$Int $tmp904 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s905, $tmp904, &$s906);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp907 = &param0->compiler;
frost$core$Weak* $tmp908 = *$tmp907;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp909 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp908);
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block97; else goto block98;
block98:;
frost$core$Int $tmp911 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s912, $tmp911);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp913 = &$tmp908->value;
frost$core$Object* $tmp914 = *$tmp913;
frost$core$Frost$ref$frost$core$Object$Q($tmp914);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp914), $tmp894, $tmp898);
frost$core$Frost$unref$frost$core$Object$Q($tmp914);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
goto block92;
block92:;
org$frostlang$frostc$ASTNode* $tmp915 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp916 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp917 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp918 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
org$frostlang$frostc$ASTNode* $tmp919 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:231
frost$core$Int $tmp920 = (frost$core$Int) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s921, $tmp920);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:235
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp922 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp923 = *(&local0);
frost$collections$Array* $tmp924 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp922, $tmp923, ((frost$collections$ListView*) $tmp924));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
frost$core$Method* $tmp925 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$collections$Array* $tmp926 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp922;

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
frost$core$String* local22 = NULL;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$ASTNode* local24 = NULL;
org$frostlang$frostc$Type$Kind local25;
org$frostlang$frostc$Type$Kind local26;
org$frostlang$frostc$FieldDecl* local27 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:240
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:242
frost$core$Bit $tmp927 = (frost$core$Bit) {param3 == NULL};
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp929 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:246
frost$core$Int* $tmp930 = &param3->$rawValue;
frost$core$Int $tmp931 = *$tmp930;
frost$core$Int $tmp932 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:247:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp933 = $tmp931.value;
int64_t $tmp934 = $tmp932.value;
bool $tmp935 = $tmp933 == $tmp934;
frost$core$Bit $tmp936 = (frost$core$Bit) {$tmp935};
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp938 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp939 = *$tmp938;
*(&local1) = $tmp939;
frost$core$String** $tmp940 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp941 = *$tmp940;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$String* $tmp942 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local2) = $tmp941;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:248
frost$core$String* $tmp943 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
frost$core$String* $tmp944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local0) = $tmp943;
frost$core$String* $tmp945 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:251
frost$core$Int $tmp946 = (frost$core$Int) {251u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s947, $tmp946);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:255
org$frostlang$frostc$Annotations* $tmp948 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
org$frostlang$frostc$Annotations* $tmp949 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local3) = $tmp948;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:256
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:257
frost$core$Int* $tmp950 = &param5->$rawValue;
frost$core$Int $tmp951 = *$tmp950;
frost$core$Int $tmp952 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:258:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp953 = $tmp951.value;
int64_t $tmp954 = $tmp952.value;
bool $tmp955 = $tmp953 == $tmp954;
frost$core$Bit $tmp956 = (frost$core$Bit) {$tmp955};
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp958 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp959 = *$tmp958;
org$frostlang$frostc$Variable$Kind* $tmp960 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp961 = *$tmp960;
*(&local5) = $tmp961;
org$frostlang$frostc$FixedArray** $tmp962 = (org$frostlang$frostc$FixedArray**) (param5->$data + 32);
org$frostlang$frostc$FixedArray* $tmp963 = *$tmp962;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
org$frostlang$frostc$FixedArray* $tmp964 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
*(&local6) = $tmp963;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:259
org$frostlang$frostc$Variable$Kind $tmp965 = *(&local5);
frost$core$Int $tmp966 = $tmp965.$rawValue;
frost$core$Int $tmp967 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:260:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp968 = $tmp966.value;
int64_t $tmp969 = $tmp967.value;
bool $tmp970 = $tmp968 == $tmp969;
frost$core$Bit $tmp971 = (frost$core$Bit) {$tmp970};
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:261
frost$core$Int $tmp973 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:261:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp974 = &(&local8)->$rawValue;
*$tmp974 = $tmp973;
org$frostlang$frostc$FieldDecl$Kind $tmp975 = *(&local8);
*(&local7) = $tmp975;
org$frostlang$frostc$FieldDecl$Kind $tmp976 = *(&local7);
*(&local4) = $tmp976;
goto block12;
block14:;
frost$core$Int $tmp977 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:263:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp978 = $tmp966.value;
int64_t $tmp979 = $tmp977.value;
bool $tmp980 = $tmp978 == $tmp979;
frost$core$Bit $tmp981 = (frost$core$Bit) {$tmp980};
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:264
frost$core$Int $tmp983 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:264:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp984 = &(&local10)->$rawValue;
*$tmp984 = $tmp983;
org$frostlang$frostc$FieldDecl$Kind $tmp985 = *(&local10);
*(&local9) = $tmp985;
org$frostlang$frostc$FieldDecl$Kind $tmp986 = *(&local9);
*(&local4) = $tmp986;
goto block12;
block18:;
frost$core$Int $tmp987 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:266:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp988 = $tmp966.value;
int64_t $tmp989 = $tmp987.value;
bool $tmp990 = $tmp988 == $tmp989;
frost$core$Bit $tmp991 = (frost$core$Bit) {$tmp990};
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:267
frost$core$Int $tmp993 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:267:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp994 = &(&local12)->$rawValue;
*$tmp994 = $tmp993;
org$frostlang$frostc$FieldDecl$Kind $tmp995 = *(&local12);
*(&local11) = $tmp995;
org$frostlang$frostc$FieldDecl$Kind $tmp996 = *(&local11);
*(&local4) = $tmp996;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:268
org$frostlang$frostc$Annotations* $tmp997 = *(&local3);
frost$core$Int* $tmp998 = &$tmp997->flags;
frost$core$Int $tmp999 = *$tmp998;
frost$core$Int $tmp1000 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:268:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp1001 = $tmp999.value;
int64_t $tmp1002 = $tmp1000.value;
int64_t $tmp1003 = $tmp1001 | $tmp1002;
frost$core$Int $tmp1004 = (frost$core$Int) {$tmp1003};
frost$core$Int* $tmp1005 = &$tmp997->flags;
*$tmp1005 = $tmp1004;
goto block12;
block22:;
frost$core$Int $tmp1006 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:270:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1007 = $tmp966.value;
int64_t $tmp1008 = $tmp1006.value;
bool $tmp1009 = $tmp1007 == $tmp1008;
frost$core$Bit $tmp1010 = (frost$core$Bit) {$tmp1009};
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block26; else goto block12;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:271
frost$core$Int $tmp1012 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:271:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1013 = &(&local14)->$rawValue;
*$tmp1013 = $tmp1012;
org$frostlang$frostc$FieldDecl$Kind $tmp1014 = *(&local14);
*(&local13) = $tmp1014;
org$frostlang$frostc$FieldDecl$Kind $tmp1015 = *(&local13);
*(&local4) = $tmp1015;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:274
org$frostlang$frostc$FixedArray* $tmp1016 = *(&local6);
ITable* $tmp1017 = ((frost$collections$Iterable*) $tmp1016)->$class->itable;
while ($tmp1017->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1017 = $tmp1017->next;
}
$fn1019 $tmp1018 = $tmp1017->methods[0];
frost$collections$Iterator* $tmp1020 = $tmp1018(((frost$collections$Iterable*) $tmp1016));
goto block29;
block29:;
ITable* $tmp1021 = $tmp1020->$class->itable;
while ($tmp1021->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1021 = $tmp1021->next;
}
$fn1023 $tmp1022 = $tmp1021->methods[0];
frost$core$Bit $tmp1024 = $tmp1022($tmp1020);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block31; else goto block30;
block30:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1026 = $tmp1020->$class->itable;
while ($tmp1026->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1026 = $tmp1026->next;
}
$fn1028 $tmp1027 = $tmp1026->methods[1];
frost$core$Object* $tmp1029 = $tmp1027($tmp1020);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1029)));
org$frostlang$frostc$ASTNode* $tmp1030 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1029);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:275
org$frostlang$frostc$ASTNode* $tmp1031 = *(&local15);
frost$core$Int* $tmp1032 = &$tmp1031->$rawValue;
frost$core$Int $tmp1033 = *$tmp1032;
frost$core$Int $tmp1034 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:276:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1035 = $tmp1033.value;
int64_t $tmp1036 = $tmp1034.value;
bool $tmp1037 = $tmp1035 == $tmp1036;
frost$core$Bit $tmp1038 = (frost$core$Bit) {$tmp1037};
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp1040 = (org$frostlang$frostc$Position*) ($tmp1031->$data + 0);
org$frostlang$frostc$Position $tmp1041 = *$tmp1040;
*(&local16) = $tmp1041;
org$frostlang$frostc$ASTNode** $tmp1042 = (org$frostlang$frostc$ASTNode**) ($tmp1031->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1043 = *$tmp1042;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
org$frostlang$frostc$ASTNode* $tmp1044 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local17) = $tmp1043;
org$frostlang$frostc$ASTNode** $tmp1045 = (org$frostlang$frostc$ASTNode**) ($tmp1031->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1046 = *$tmp1045;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
org$frostlang$frostc$ASTNode* $tmp1047 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
*(&local18) = $tmp1046;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:277
*(&local19) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:278
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:279
org$frostlang$frostc$ASTNode* $tmp1048 = *(&local17);
frost$core$Int* $tmp1049 = &$tmp1048->$rawValue;
frost$core$Int $tmp1050 = *$tmp1049;
frost$core$Int $tmp1051 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1052 = $tmp1050.value;
int64_t $tmp1053 = $tmp1051.value;
bool $tmp1054 = $tmp1052 == $tmp1053;
frost$core$Bit $tmp1055 = (frost$core$Bit) {$tmp1054};
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp1057 = (org$frostlang$frostc$Position*) ($tmp1048->$data + 0);
org$frostlang$frostc$Position $tmp1058 = *$tmp1057;
frost$core$String** $tmp1059 = (frost$core$String**) ($tmp1048->$data + 24);
frost$core$String* $tmp1060 = *$tmp1059;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$String* $tmp1061 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local21) = $tmp1060;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:281
frost$core$String* $tmp1062 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$String* $tmp1063 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local19) = $tmp1062;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:282
frost$core$Weak** $tmp1064 = &param0->compiler;
frost$core$Weak* $tmp1065 = *$tmp1064;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:282:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1066 = &$tmp1065->_valid;
frost$core$Bit $tmp1067 = *$tmp1066;
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block42; else goto block43;
block43:;
frost$core$Int $tmp1069 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1070, $tmp1069);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1071 = &$tmp1065->value;
frost$core$Object* $tmp1072 = *$tmp1071;
frost$core$Frost$ref$frost$core$Object$Q($tmp1072);
org$frostlang$frostc$Type** $tmp1073 = &((org$frostlang$frostc$Compiler*) $tmp1072)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1074 = *$tmp1073;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
org$frostlang$frostc$Type* $tmp1075 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local20) = $tmp1074;
frost$core$Frost$unref$frost$core$Object$Q($tmp1072);
frost$core$String* $tmp1076 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local21) = ((frost$core$String*) NULL);
goto block36;
block38:;
frost$core$Int $tmp1077 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:284:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1078 = $tmp1050.value;
int64_t $tmp1079 = $tmp1077.value;
bool $tmp1080 = $tmp1078 == $tmp1079;
frost$core$Bit $tmp1081 = (frost$core$Bit) {$tmp1080};
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1083 = (org$frostlang$frostc$Position*) ($tmp1048->$data + 0);
org$frostlang$frostc$Position $tmp1084 = *$tmp1083;
frost$core$String** $tmp1085 = (frost$core$String**) ($tmp1048->$data + 24);
frost$core$String* $tmp1086 = *$tmp1085;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
frost$core$String* $tmp1087 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local22) = $tmp1086;
org$frostlang$frostc$ASTNode** $tmp1088 = (org$frostlang$frostc$ASTNode**) ($tmp1048->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1089 = *$tmp1088;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
org$frostlang$frostc$ASTNode* $tmp1090 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local23) = $tmp1089;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:285
frost$core$String* $tmp1091 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
frost$core$String* $tmp1092 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local19) = $tmp1091;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:286
org$frostlang$frostc$ASTNode* $tmp1093 = *(&local23);
org$frostlang$frostc$Type* $tmp1094 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1093);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
org$frostlang$frostc$Type* $tmp1095 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local20) = $tmp1094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
org$frostlang$frostc$ASTNode* $tmp1096 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1097 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local22) = ((frost$core$String*) NULL);
goto block36;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:289
frost$core$Int $tmp1098 = (frost$core$Int) {289u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1099, $tmp1098);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:292
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:293
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local18);
frost$core$Bit $tmp1101 = (frost$core$Bit) {$tmp1100 == NULL};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block51; else goto block49;
block51:;
org$frostlang$frostc$Annotations* $tmp1103 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Scanner.frost:293:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int* $tmp1104 = &$tmp1103->flags;
frost$core$Int $tmp1105 = *$tmp1104;
frost$core$Int $tmp1106 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1107 = $tmp1105.value;
int64_t $tmp1108 = $tmp1106.value;
int64_t $tmp1109 = $tmp1107 & $tmp1108;
frost$core$Int $tmp1110 = (frost$core$Int) {$tmp1109};
frost$core$Int $tmp1111 = (frost$core$Int) {0u};
int64_t $tmp1112 = $tmp1110.value;
int64_t $tmp1113 = $tmp1111.value;
bool $tmp1114 = $tmp1112 != $tmp1113;
frost$core$Bit $tmp1115 = (frost$core$Bit) {$tmp1114};
bool $tmp1116 = $tmp1115.value;
if ($tmp1116) goto block50; else goto block49;
block50:;
org$frostlang$frostc$Type* $tmp1117 = *(&local20);
org$frostlang$frostc$Type$Kind* $tmp1118 = &$tmp1117->typeKind;
org$frostlang$frostc$Type$Kind $tmp1119 = *$tmp1118;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1120;
$tmp1120 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1120->value = $tmp1119;
frost$core$Int $tmp1121 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:294:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1122 = &(&local26)->$rawValue;
*$tmp1122 = $tmp1121;
org$frostlang$frostc$Type$Kind $tmp1123 = *(&local26);
*(&local25) = $tmp1123;
org$frostlang$frostc$Type$Kind $tmp1124 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1125;
$tmp1125 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1125->value = $tmp1124;
ITable* $tmp1126 = ((frost$core$Equatable*) $tmp1120)->$class->itable;
while ($tmp1126->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1126 = $tmp1126->next;
}
$fn1128 $tmp1127 = $tmp1126->methods[0];
frost$core$Bit $tmp1129 = $tmp1127(((frost$core$Equatable*) $tmp1120), ((frost$core$Equatable*) $tmp1125));
bool $tmp1130 = $tmp1129.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1125)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1120)));
if ($tmp1130) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1131 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1132 = (frost$core$Int) {31u};
org$frostlang$frostc$Position $tmp1133 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp1131, $tmp1132, $tmp1133);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
org$frostlang$frostc$ASTNode* $tmp1134 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local24) = $tmp1131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
goto block48;
block49:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:298
org$frostlang$frostc$ASTNode* $tmp1135 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$ASTNode* $tmp1136 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local24) = $tmp1135;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:300
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp1137 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp1138 = *(&local16);
frost$core$String* $tmp1139 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1140 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp1141 = *(&local4);
frost$core$String* $tmp1142 = *(&local19);
org$frostlang$frostc$Type* $tmp1143 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp1144 = *(&local24);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp1137, param1, $tmp1138, $tmp1139, $tmp1140, $tmp1141, $tmp1142, $tmp1143, $tmp1144);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
org$frostlang$frostc$FieldDecl* $tmp1145 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local27) = $tmp1137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:302
org$frostlang$frostc$SymbolTable** $tmp1146 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1147 = *$tmp1146;
org$frostlang$frostc$FieldDecl* $tmp1148 = *(&local27);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:302:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1149 = &((org$frostlang$frostc$Symbol*) $tmp1148)->name;
frost$core$String* $tmp1150 = *$tmp1149;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1147, ((org$frostlang$frostc$Symbol*) $tmp1148), $tmp1150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:303
frost$collections$Array** $tmp1151 = &param1->fields;
frost$collections$Array* $tmp1152 = *$tmp1151;
org$frostlang$frostc$FieldDecl* $tmp1153 = *(&local27);
frost$collections$Array$add$frost$collections$Array$T($tmp1152, ((frost$core$Object*) $tmp1153));
org$frostlang$frostc$FieldDecl* $tmp1154 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1155 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp1156 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1157 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1158 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1159 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1029);
org$frostlang$frostc$ASTNode* $tmp1160 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:306
frost$core$Int $tmp1161 = (frost$core$Int) {306u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1162, $tmp1161);
abort(); // unreachable
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
org$frostlang$frostc$FixedArray* $tmp1163 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$Annotations* $tmp1164 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local0) = ((frost$core$String*) NULL);
return;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:312
frost$core$Int $tmp1166 = (frost$core$Int) {312u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1167, $tmp1166);
abort(); // unreachable

}
frost$core$Int org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$FixedArray* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
org$frostlang$frostc$FixedArray* local6 = NULL;
frost$core$Int local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
org$frostlang$frostc$FixedArray* local10 = NULL;
frost$core$Int local11;
org$frostlang$frostc$ASTNode* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
org$frostlang$frostc$ASTNode* local14 = NULL;
org$frostlang$frostc$FixedArray* local15 = NULL;
org$frostlang$frostc$ASTNode* local16 = NULL;
frost$core$Int local17;
org$frostlang$frostc$ASTNode* local18 = NULL;
org$frostlang$frostc$ASTNode* local19 = NULL;
org$frostlang$frostc$ASTNode* local20 = NULL;
org$frostlang$frostc$ASTNode* local21 = NULL;
org$frostlang$frostc$FixedArray* local22 = NULL;
frost$core$Int local23;
org$frostlang$frostc$ASTNode* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$ASTNode* local27 = NULL;
frost$core$Int local28;
org$frostlang$frostc$ASTNode* local29 = NULL;
org$frostlang$frostc$FixedArray* local30 = NULL;
frost$core$Int local31;
org$frostlang$frostc$ASTNode* local32 = NULL;
org$frostlang$frostc$ASTNode* local33 = NULL;
org$frostlang$frostc$FixedArray* local34 = NULL;
org$frostlang$frostc$FixedArray* local35 = NULL;
frost$core$Int local36;
org$frostlang$frostc$ASTNode* local37 = NULL;
org$frostlang$frostc$ASTNode* local38 = NULL;
org$frostlang$frostc$ASTNode* local39 = NULL;
org$frostlang$frostc$ASTNode* local40 = NULL;
org$frostlang$frostc$FixedArray* local41 = NULL;
frost$core$Int local42;
org$frostlang$frostc$ASTNode* local43 = NULL;
org$frostlang$frostc$FixedArray* local44 = NULL;
org$frostlang$frostc$FixedArray* local45 = NULL;
frost$core$Int local46;
org$frostlang$frostc$ASTNode* local47 = NULL;
org$frostlang$frostc$ASTNode* local48 = NULL;
org$frostlang$frostc$ASTNode* local49 = NULL;
org$frostlang$frostc$FixedArray* local50 = NULL;
frost$core$Int local51;
org$frostlang$frostc$ASTNode* local52 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:319
frost$core$Int* $tmp1168 = &param1->$rawValue;
frost$core$Int $tmp1169 = *$tmp1168;
frost$core$Int $tmp1170 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:320:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1171 = $tmp1169.value;
int64_t $tmp1172 = $tmp1170.value;
bool $tmp1173 = $tmp1171 == $tmp1172;
frost$core$Bit $tmp1174 = (frost$core$Bit) {$tmp1173};
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1176 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1177 = *$tmp1176;
org$frostlang$frostc$FixedArray** $tmp1178 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1179 = *$tmp1178;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
org$frostlang$frostc$FixedArray* $tmp1180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local0) = $tmp1179;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:321
frost$core$Int $tmp1181 = (frost$core$Int) {0u};
*(&local1) = $tmp1181;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:322
org$frostlang$frostc$FixedArray* $tmp1182 = *(&local0);
ITable* $tmp1183 = ((frost$collections$Iterable*) $tmp1182)->$class->itable;
while ($tmp1183->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[0];
frost$collections$Iterator* $tmp1186 = $tmp1184(((frost$collections$Iterable*) $tmp1182));
goto block5;
block5:;
ITable* $tmp1187 = $tmp1186->$class->itable;
while ($tmp1187->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1187 = $tmp1187->next;
}
$fn1189 $tmp1188 = $tmp1187->methods[0];
frost$core$Bit $tmp1190 = $tmp1188($tmp1186);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1192 = $tmp1186->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[1];
frost$core$Object* $tmp1195 = $tmp1193($tmp1186);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1195)));
org$frostlang$frostc$ASTNode* $tmp1196 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1195);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:323
frost$core$Int $tmp1197 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1198 = *(&local2);
frost$core$Int $tmp1199 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1198);
int64_t $tmp1200 = $tmp1197.value;
int64_t $tmp1201 = $tmp1199.value;
int64_t $tmp1202 = $tmp1200 + $tmp1201;
frost$core$Int $tmp1203 = (frost$core$Int) {$tmp1202};
*(&local1) = $tmp1203;
frost$core$Frost$unref$frost$core$Object$Q($tmp1195);
org$frostlang$frostc$ASTNode* $tmp1204 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:325
frost$core$Int $tmp1205 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1206 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1205;
block3:;
frost$core$Int $tmp1207 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:327:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1208 = $tmp1169.value;
int64_t $tmp1209 = $tmp1207.value;
bool $tmp1210 = $tmp1208 == $tmp1209;
frost$core$Bit $tmp1211 = (frost$core$Bit) {$tmp1210};
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1213 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1214 = *$tmp1213;
org$frostlang$frostc$ASTNode** $tmp1215 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1216 = *$tmp1215;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
org$frostlang$frostc$ASTNode* $tmp1217 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
*(&local3) = $tmp1216;
org$frostlang$frostc$ASTNode** $tmp1218 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1219 = *$tmp1218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:328
org$frostlang$frostc$ASTNode* $tmp1220 = *(&local3);
frost$core$Int $tmp1221 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1220);
org$frostlang$frostc$ASTNode* $tmp1222 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1221;
block9:;
frost$core$Int $tmp1223 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:330:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1224 = $tmp1169.value;
int64_t $tmp1225 = $tmp1223.value;
bool $tmp1226 = $tmp1224 == $tmp1225;
frost$core$Bit $tmp1227 = (frost$core$Bit) {$tmp1226};
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:331
frost$core$Int $tmp1229 = (frost$core$Int) {0u};
return $tmp1229;
block12:;
frost$core$Int $tmp1230 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:333:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1231 = $tmp1169.value;
int64_t $tmp1232 = $tmp1230.value;
bool $tmp1233 = $tmp1231 == $tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:334
frost$core$Int $tmp1236 = (frost$core$Int) {0u};
return $tmp1236;
block15:;
frost$core$Int $tmp1237 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:336:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1238 = $tmp1169.value;
int64_t $tmp1239 = $tmp1237.value;
bool $tmp1240 = $tmp1238 == $tmp1239;
frost$core$Bit $tmp1241 = (frost$core$Bit) {$tmp1240};
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp1243 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1244 = *$tmp1243;
org$frostlang$frostc$ASTNode** $tmp1245 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1246 = *$tmp1245;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
org$frostlang$frostc$ASTNode* $tmp1247 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local4) = $tmp1246;
org$frostlang$frostc$expression$Binary$Operator* $tmp1248 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp1249 = *$tmp1248;
org$frostlang$frostc$ASTNode** $tmp1250 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1251 = *$tmp1250;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
org$frostlang$frostc$ASTNode* $tmp1252 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local5) = $tmp1251;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:337
frost$core$Int $tmp1253 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local4);
frost$core$Int $tmp1255 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1254);
int64_t $tmp1256 = $tmp1253.value;
int64_t $tmp1257 = $tmp1255.value;
int64_t $tmp1258 = $tmp1256 + $tmp1257;
frost$core$Int $tmp1259 = (frost$core$Int) {$tmp1258};
org$frostlang$frostc$ASTNode* $tmp1260 = *(&local5);
frost$core$Int $tmp1261 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1260);
int64_t $tmp1262 = $tmp1259.value;
int64_t $tmp1263 = $tmp1261.value;
int64_t $tmp1264 = $tmp1262 + $tmp1263;
frost$core$Int $tmp1265 = (frost$core$Int) {$tmp1264};
org$frostlang$frostc$ASTNode* $tmp1266 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1267 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1265;
block18:;
frost$core$Int $tmp1268 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:339:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1269 = $tmp1169.value;
int64_t $tmp1270 = $tmp1268.value;
bool $tmp1271 = $tmp1269 == $tmp1270;
frost$core$Bit $tmp1272 = (frost$core$Bit) {$tmp1271};
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:340
frost$core$Int $tmp1274 = (frost$core$Int) {1u};
return $tmp1274;
block21:;
frost$core$Int $tmp1275 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:342:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1276 = $tmp1169.value;
int64_t $tmp1277 = $tmp1275.value;
bool $tmp1278 = $tmp1276 == $tmp1277;
frost$core$Bit $tmp1279 = (frost$core$Bit) {$tmp1278};
bool $tmp1280 = $tmp1279.value;
if ($tmp1280) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp1281 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1282 = *$tmp1281;
org$frostlang$frostc$FixedArray** $tmp1283 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1284 = *$tmp1283;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
org$frostlang$frostc$FixedArray* $tmp1285 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local6) = $tmp1284;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:343
frost$core$Int $tmp1286 = (frost$core$Int) {0u};
*(&local7) = $tmp1286;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:344
org$frostlang$frostc$FixedArray* $tmp1287 = *(&local6);
ITable* $tmp1288 = ((frost$collections$Iterable*) $tmp1287)->$class->itable;
while ($tmp1288->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1288 = $tmp1288->next;
}
$fn1290 $tmp1289 = $tmp1288->methods[0];
frost$collections$Iterator* $tmp1291 = $tmp1289(((frost$collections$Iterable*) $tmp1287));
goto block26;
block26:;
ITable* $tmp1292 = $tmp1291->$class->itable;
while ($tmp1292->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1292 = $tmp1292->next;
}
$fn1294 $tmp1293 = $tmp1292->methods[0];
frost$core$Bit $tmp1295 = $tmp1293($tmp1291);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block28; else goto block27;
block27:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1297 = $tmp1291->$class->itable;
while ($tmp1297->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[1];
frost$core$Object* $tmp1300 = $tmp1298($tmp1291);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1300)));
org$frostlang$frostc$ASTNode* $tmp1301 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1300);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:345
frost$core$Int $tmp1302 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp1303 = *(&local8);
frost$core$Int $tmp1304 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1303);
int64_t $tmp1305 = $tmp1302.value;
int64_t $tmp1306 = $tmp1304.value;
int64_t $tmp1307 = $tmp1305 + $tmp1306;
frost$core$Int $tmp1308 = (frost$core$Int) {$tmp1307};
*(&local7) = $tmp1308;
frost$core$Frost$unref$frost$core$Object$Q($tmp1300);
org$frostlang$frostc$ASTNode* $tmp1309 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:347
frost$core$Int $tmp1310 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1311 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1310;
block24:;
frost$core$Int $tmp1312 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:349:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1313 = $tmp1169.value;
int64_t $tmp1314 = $tmp1312.value;
bool $tmp1315 = $tmp1313 == $tmp1314;
frost$core$Bit $tmp1316 = (frost$core$Bit) {$tmp1315};
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:350
frost$core$Int $tmp1318 = (frost$core$Int) {1u};
return $tmp1318;
block30:;
frost$core$Int $tmp1319 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:352:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1320 = $tmp1169.value;
int64_t $tmp1321 = $tmp1319.value;
bool $tmp1322 = $tmp1320 == $tmp1321;
frost$core$Bit $tmp1323 = (frost$core$Bit) {$tmp1322};
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp1325 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1326 = *$tmp1325;
org$frostlang$frostc$ASTNode** $tmp1327 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1328 = *$tmp1327;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
org$frostlang$frostc$ASTNode* $tmp1329 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local9) = $tmp1328;
org$frostlang$frostc$FixedArray** $tmp1330 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1331 = *$tmp1330;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
org$frostlang$frostc$FixedArray* $tmp1332 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local10) = $tmp1331;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:353
org$frostlang$frostc$ASTNode* $tmp1333 = *(&local9);
frost$core$Int $tmp1334 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1333);
*(&local11) = $tmp1334;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:354
org$frostlang$frostc$FixedArray* $tmp1335 = *(&local10);
ITable* $tmp1336 = ((frost$collections$Iterable*) $tmp1335)->$class->itable;
while ($tmp1336->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1336 = $tmp1336->next;
}
$fn1338 $tmp1337 = $tmp1336->methods[0];
frost$collections$Iterator* $tmp1339 = $tmp1337(((frost$collections$Iterable*) $tmp1335));
goto block35;
block35:;
ITable* $tmp1340 = $tmp1339->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[0];
frost$core$Bit $tmp1343 = $tmp1341($tmp1339);
bool $tmp1344 = $tmp1343.value;
if ($tmp1344) goto block37; else goto block36;
block36:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1345 = $tmp1339->$class->itable;
while ($tmp1345->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1345 = $tmp1345->next;
}
$fn1347 $tmp1346 = $tmp1345->methods[1];
frost$core$Object* $tmp1348 = $tmp1346($tmp1339);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1348)));
org$frostlang$frostc$ASTNode* $tmp1349 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1348);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:355
frost$core$Int $tmp1350 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1351 = *(&local12);
frost$core$Int $tmp1352 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1351);
int64_t $tmp1353 = $tmp1350.value;
int64_t $tmp1354 = $tmp1352.value;
int64_t $tmp1355 = $tmp1353 + $tmp1354;
frost$core$Int $tmp1356 = (frost$core$Int) {$tmp1355};
*(&local11) = $tmp1356;
frost$core$Frost$unref$frost$core$Object$Q($tmp1348);
org$frostlang$frostc$ASTNode* $tmp1357 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:357
frost$core$Int $tmp1358 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1359 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1358;
block33:;
frost$core$Int $tmp1361 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:359:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1362 = $tmp1169.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 == $tmp1363;
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp1367 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1368 = *$tmp1367;
org$frostlang$frostc$ASTNode** $tmp1369 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1370 = *$tmp1369;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
org$frostlang$frostc$ASTNode* $tmp1371 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local13) = $tmp1370;
org$frostlang$frostc$ChoiceCase** $tmp1372 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1373 = *$tmp1372;
frost$core$Int* $tmp1374 = (frost$core$Int*) (param1->$data + 40);
frost$core$Int $tmp1375 = *$tmp1374;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:360
org$frostlang$frostc$ASTNode* $tmp1376 = *(&local13);
frost$core$Int $tmp1377 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1376);
org$frostlang$frostc$ASTNode* $tmp1378 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1377;
block39:;
frost$core$Int $tmp1379 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:362:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1380 = $tmp1169.value;
int64_t $tmp1381 = $tmp1379.value;
bool $tmp1382 = $tmp1380 == $tmp1381;
frost$core$Bit $tmp1383 = (frost$core$Bit) {$tmp1382};
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:363
frost$core$Int $tmp1385 = (frost$core$Int) {1u};
return $tmp1385;
block42:;
frost$core$Int $tmp1386 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1387 = $tmp1169.value;
int64_t $tmp1388 = $tmp1386.value;
bool $tmp1389 = $tmp1387 == $tmp1388;
frost$core$Bit $tmp1390 = (frost$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1392 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1393 = *$tmp1392;
org$frostlang$frostc$ASTNode** $tmp1394 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1395 = *$tmp1394;
org$frostlang$frostc$ASTNode** $tmp1396 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1397 = *$tmp1396;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
org$frostlang$frostc$ASTNode* $tmp1398 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local14) = $tmp1397;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:366
org$frostlang$frostc$ASTNode* $tmp1399 = *(&local14);
frost$core$Bit $tmp1400 = (frost$core$Bit) {$tmp1399 == NULL};
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:367
frost$core$Int $tmp1402 = (frost$core$Int) {0u};
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1402;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:369
org$frostlang$frostc$ASTNode* $tmp1404 = *(&local14);
frost$core$Int $tmp1405 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1404);
org$frostlang$frostc$ASTNode* $tmp1406 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1405;
block45:;
frost$core$Int $tmp1407 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:371:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1408 = $tmp1169.value;
int64_t $tmp1409 = $tmp1407.value;
bool $tmp1410 = $tmp1408 == $tmp1409;
frost$core$Bit $tmp1411 = (frost$core$Bit) {$tmp1410};
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Position* $tmp1413 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1414 = *$tmp1413;
frost$core$String** $tmp1415 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1416 = *$tmp1415;
org$frostlang$frostc$FixedArray** $tmp1417 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1418 = *$tmp1417;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
org$frostlang$frostc$FixedArray* $tmp1419 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local15) = $tmp1418;
org$frostlang$frostc$ASTNode** $tmp1420 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1421 = *$tmp1420;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
org$frostlang$frostc$ASTNode* $tmp1422 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local16) = $tmp1421;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:372
org$frostlang$frostc$ASTNode* $tmp1423 = *(&local16);
frost$core$Int $tmp1424 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1423);
*(&local17) = $tmp1424;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:373
org$frostlang$frostc$FixedArray* $tmp1425 = *(&local15);
ITable* $tmp1426 = ((frost$collections$Iterable*) $tmp1425)->$class->itable;
while ($tmp1426->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1426 = $tmp1426->next;
}
$fn1428 $tmp1427 = $tmp1426->methods[0];
frost$collections$Iterator* $tmp1429 = $tmp1427(((frost$collections$Iterable*) $tmp1425));
goto block52;
block52:;
ITable* $tmp1430 = $tmp1429->$class->itable;
while ($tmp1430->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[0];
frost$core$Bit $tmp1433 = $tmp1431($tmp1429);
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block54; else goto block53;
block53:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1435 = $tmp1429->$class->itable;
while ($tmp1435->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[1];
frost$core$Object* $tmp1438 = $tmp1436($tmp1429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1438)));
org$frostlang$frostc$ASTNode* $tmp1439 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1438);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:374
frost$core$Int $tmp1440 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1441 = *(&local18);
frost$core$Int $tmp1442 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1441);
int64_t $tmp1443 = $tmp1440.value;
int64_t $tmp1444 = $tmp1442.value;
int64_t $tmp1445 = $tmp1443 + $tmp1444;
frost$core$Int $tmp1446 = (frost$core$Int) {$tmp1445};
*(&local17) = $tmp1446;
frost$core$Frost$unref$frost$core$Object$Q($tmp1438);
org$frostlang$frostc$ASTNode* $tmp1447 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:376
frost$core$Int $tmp1448 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1449 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1450 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1450));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1448;
block50:;
frost$core$Int $tmp1451 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:378:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1452 = $tmp1169.value;
int64_t $tmp1453 = $tmp1451.value;
bool $tmp1454 = $tmp1452 == $tmp1453;
frost$core$Bit $tmp1455 = (frost$core$Bit) {$tmp1454};
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1457 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1458 = *$tmp1457;
org$frostlang$frostc$ASTNode** $tmp1459 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1460 = *$tmp1459;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
org$frostlang$frostc$ASTNode* $tmp1461 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local19) = $tmp1460;
frost$core$String** $tmp1462 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1463 = *$tmp1462;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:379
org$frostlang$frostc$ASTNode* $tmp1464 = *(&local19);
frost$core$Int $tmp1465 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1464);
org$frostlang$frostc$ASTNode* $tmp1466 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1465;
block56:;
frost$core$Int $tmp1467 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:381:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1468 = $tmp1169.value;
int64_t $tmp1469 = $tmp1467.value;
bool $tmp1470 = $tmp1468 == $tmp1469;
frost$core$Bit $tmp1471 = (frost$core$Bit) {$tmp1470};
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp1473 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1474 = *$tmp1473;
org$frostlang$frostc$ASTNode** $tmp1475 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1476 = *$tmp1475;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
org$frostlang$frostc$ASTNode* $tmp1477 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local20) = $tmp1476;
frost$core$String** $tmp1478 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1479 = *$tmp1478;
org$frostlang$frostc$FixedArray** $tmp1480 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1481 = *$tmp1480;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:382
org$frostlang$frostc$ASTNode* $tmp1482 = *(&local20);
frost$core$Int $tmp1483 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1482);
org$frostlang$frostc$ASTNode* $tmp1484 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1483;
block59:;
frost$core$Int $tmp1485 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:384:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1486 = $tmp1169.value;
int64_t $tmp1487 = $tmp1485.value;
bool $tmp1488 = $tmp1486 == $tmp1487;
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Position* $tmp1491 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1492 = *$tmp1491;
frost$core$String** $tmp1493 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1494 = *$tmp1493;
org$frostlang$frostc$ASTNode** $tmp1495 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1496 = *$tmp1495;
org$frostlang$frostc$ASTNode** $tmp1497 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1498 = *$tmp1497;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
org$frostlang$frostc$ASTNode* $tmp1499 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local21) = $tmp1498;
org$frostlang$frostc$FixedArray** $tmp1500 = (org$frostlang$frostc$FixedArray**) (param1->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1501 = *$tmp1500;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
org$frostlang$frostc$FixedArray* $tmp1502 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local22) = $tmp1501;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:385
org$frostlang$frostc$ASTNode* $tmp1503 = *(&local21);
frost$core$Int $tmp1504 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1503);
*(&local23) = $tmp1504;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:386
org$frostlang$frostc$FixedArray* $tmp1505 = *(&local22);
ITable* $tmp1506 = ((frost$collections$Iterable*) $tmp1505)->$class->itable;
while ($tmp1506->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1506 = $tmp1506->next;
}
$fn1508 $tmp1507 = $tmp1506->methods[0];
frost$collections$Iterator* $tmp1509 = $tmp1507(((frost$collections$Iterable*) $tmp1505));
goto block64;
block64:;
ITable* $tmp1510 = $tmp1509->$class->itable;
while ($tmp1510->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1510 = $tmp1510->next;
}
$fn1512 $tmp1511 = $tmp1510->methods[0];
frost$core$Bit $tmp1513 = $tmp1511($tmp1509);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block66; else goto block65;
block65:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1515 = $tmp1509->$class->itable;
while ($tmp1515->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[1];
frost$core$Object* $tmp1518 = $tmp1516($tmp1509);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1518)));
org$frostlang$frostc$ASTNode* $tmp1519 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1518);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:387
frost$core$Int $tmp1520 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1521 = *(&local24);
frost$core$Int $tmp1522 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1521);
int64_t $tmp1523 = $tmp1520.value;
int64_t $tmp1524 = $tmp1522.value;
int64_t $tmp1525 = $tmp1523 + $tmp1524;
frost$core$Int $tmp1526 = (frost$core$Int) {$tmp1525};
*(&local23) = $tmp1526;
frost$core$Frost$unref$frost$core$Object$Q($tmp1518);
org$frostlang$frostc$ASTNode* $tmp1527 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block64;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:389
frost$core$Int $tmp1528 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1529 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1530 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1528;
block62:;
frost$core$Int $tmp1531 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:391:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1532 = $tmp1169.value;
int64_t $tmp1533 = $tmp1531.value;
bool $tmp1534 = $tmp1532 == $tmp1533;
frost$core$Bit $tmp1535 = (frost$core$Bit) {$tmp1534};
bool $tmp1536 = $tmp1535.value;
if ($tmp1536) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:392
frost$core$Int $tmp1537 = (frost$core$Int) {0u};
return $tmp1537;
block68:;
frost$core$Int $tmp1538 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:394:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1539 = $tmp1169.value;
int64_t $tmp1540 = $tmp1538.value;
bool $tmp1541 = $tmp1539 == $tmp1540;
frost$core$Bit $tmp1542 = (frost$core$Bit) {$tmp1541};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:395
frost$core$Int $tmp1544 = (frost$core$Int) {1u};
return $tmp1544;
block71:;
frost$core$Int $tmp1545 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:397:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1546 = $tmp1169.value;
int64_t $tmp1547 = $tmp1545.value;
bool $tmp1548 = $tmp1546 == $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1551 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1552 = *$tmp1551;
org$frostlang$frostc$ASTNode** $tmp1553 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1554 = *$tmp1553;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
org$frostlang$frostc$ASTNode* $tmp1555 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
*(&local25) = $tmp1554;
org$frostlang$frostc$FixedArray** $tmp1556 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1557 = *$tmp1556;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
org$frostlang$frostc$FixedArray* $tmp1558 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1558));
*(&local26) = $tmp1557;
org$frostlang$frostc$ASTNode** $tmp1559 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1560 = *$tmp1559;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
org$frostlang$frostc$ASTNode* $tmp1561 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
*(&local27) = $tmp1560;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:398
org$frostlang$frostc$ASTNode* $tmp1562 = *(&local25);
frost$core$Int $tmp1563 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1562);
*(&local28) = $tmp1563;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:399
org$frostlang$frostc$FixedArray* $tmp1564 = *(&local26);
ITable* $tmp1565 = ((frost$collections$Iterable*) $tmp1564)->$class->itable;
while ($tmp1565->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[0];
frost$collections$Iterator* $tmp1568 = $tmp1566(((frost$collections$Iterable*) $tmp1564));
goto block76;
block76:;
ITable* $tmp1569 = $tmp1568->$class->itable;
while ($tmp1569->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1569 = $tmp1569->next;
}
$fn1571 $tmp1570 = $tmp1569->methods[0];
frost$core$Bit $tmp1572 = $tmp1570($tmp1568);
bool $tmp1573 = $tmp1572.value;
if ($tmp1573) goto block78; else goto block77;
block77:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1574 = $tmp1568->$class->itable;
while ($tmp1574->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1574 = $tmp1574->next;
}
$fn1576 $tmp1575 = $tmp1574->methods[1];
frost$core$Object* $tmp1577 = $tmp1575($tmp1568);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1577)));
org$frostlang$frostc$ASTNode* $tmp1578 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1577);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:400
frost$core$Int $tmp1579 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1580 = *(&local29);
frost$core$Int $tmp1581 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1580);
int64_t $tmp1582 = $tmp1579.value;
int64_t $tmp1583 = $tmp1581.value;
int64_t $tmp1584 = $tmp1582 + $tmp1583;
frost$core$Int $tmp1585 = (frost$core$Int) {$tmp1584};
*(&local28) = $tmp1585;
frost$core$Frost$unref$frost$core$Object$Q($tmp1577);
org$frostlang$frostc$ASTNode* $tmp1586 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:402
org$frostlang$frostc$ASTNode* $tmp1587 = *(&local27);
frost$core$Bit $tmp1588 = (frost$core$Bit) {$tmp1587 != NULL};
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:403
frost$core$Int $tmp1590 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1591 = *(&local27);
frost$core$Int $tmp1592 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1591);
int64_t $tmp1593 = $tmp1590.value;
int64_t $tmp1594 = $tmp1592.value;
int64_t $tmp1595 = $tmp1593 + $tmp1594;
frost$core$Int $tmp1596 = (frost$core$Int) {$tmp1595};
*(&local28) = $tmp1596;
goto block80;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:405
frost$core$Int $tmp1597 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1598 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1599 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1600 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1597;
block74:;
frost$core$Int $tmp1601 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:407:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1602 = $tmp1169.value;
int64_t $tmp1603 = $tmp1601.value;
bool $tmp1604 = $tmp1602 == $tmp1603;
frost$core$Bit $tmp1605 = (frost$core$Bit) {$tmp1604};
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:408
frost$core$Int $tmp1607 = (frost$core$Int) {1u};
return $tmp1607;
block82:;
frost$core$Int $tmp1608 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:410:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1609 = $tmp1169.value;
int64_t $tmp1610 = $tmp1608.value;
bool $tmp1611 = $tmp1609 == $tmp1610;
frost$core$Bit $tmp1612 = (frost$core$Bit) {$tmp1611};
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp1614 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1615 = *$tmp1614;
frost$core$String** $tmp1616 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1617 = *$tmp1616;
org$frostlang$frostc$FixedArray** $tmp1618 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1619 = *$tmp1618;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
org$frostlang$frostc$FixedArray* $tmp1620 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
*(&local30) = $tmp1619;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:411
frost$core$Int $tmp1621 = (frost$core$Int) {0u};
*(&local31) = $tmp1621;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:412
org$frostlang$frostc$FixedArray* $tmp1622 = *(&local30);
ITable* $tmp1623 = ((frost$collections$Iterable*) $tmp1622)->$class->itable;
while ($tmp1623->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1623 = $tmp1623->next;
}
$fn1625 $tmp1624 = $tmp1623->methods[0];
frost$collections$Iterator* $tmp1626 = $tmp1624(((frost$collections$Iterable*) $tmp1622));
goto block87;
block87:;
ITable* $tmp1627 = $tmp1626->$class->itable;
while ($tmp1627->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1627 = $tmp1627->next;
}
$fn1629 $tmp1628 = $tmp1627->methods[0];
frost$core$Bit $tmp1630 = $tmp1628($tmp1626);
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block89; else goto block88;
block88:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1632 = $tmp1626->$class->itable;
while ($tmp1632->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1632 = $tmp1632->next;
}
$fn1634 $tmp1633 = $tmp1632->methods[1];
frost$core$Object* $tmp1635 = $tmp1633($tmp1626);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1635)));
org$frostlang$frostc$ASTNode* $tmp1636 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1635);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:413
frost$core$Int $tmp1637 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1638 = *(&local32);
frost$core$Int $tmp1639 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1638);
int64_t $tmp1640 = $tmp1637.value;
int64_t $tmp1641 = $tmp1639.value;
int64_t $tmp1642 = $tmp1640 + $tmp1641;
frost$core$Int $tmp1643 = (frost$core$Int) {$tmp1642};
*(&local31) = $tmp1643;
frost$core$Frost$unref$frost$core$Object$Q($tmp1635);
org$frostlang$frostc$ASTNode* $tmp1644 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:415
frost$core$Int $tmp1645 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1646 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1645;
block85:;
frost$core$Int $tmp1647 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:417:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1648 = $tmp1169.value;
int64_t $tmp1649 = $tmp1647.value;
bool $tmp1650 = $tmp1648 == $tmp1649;
frost$core$Bit $tmp1651 = (frost$core$Bit) {$tmp1650};
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1653 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1654 = *$tmp1653;
org$frostlang$frostc$ASTNode** $tmp1655 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1656 = *$tmp1655;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
org$frostlang$frostc$ASTNode* $tmp1657 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local33) = $tmp1656;
org$frostlang$frostc$FixedArray** $tmp1658 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1659 = *$tmp1658;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
org$frostlang$frostc$FixedArray* $tmp1660 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local34) = $tmp1659;
org$frostlang$frostc$FixedArray** $tmp1661 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1662 = *$tmp1661;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
org$frostlang$frostc$FixedArray* $tmp1663 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local35) = $tmp1662;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:418
org$frostlang$frostc$ASTNode* $tmp1664 = *(&local33);
frost$core$Int $tmp1665 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1664);
*(&local36) = $tmp1665;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:419
org$frostlang$frostc$FixedArray* $tmp1666 = *(&local34);
ITable* $tmp1667 = ((frost$collections$Iterable*) $tmp1666)->$class->itable;
while ($tmp1667->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1667 = $tmp1667->next;
}
$fn1669 $tmp1668 = $tmp1667->methods[0];
frost$collections$Iterator* $tmp1670 = $tmp1668(((frost$collections$Iterable*) $tmp1666));
goto block93;
block93:;
ITable* $tmp1671 = $tmp1670->$class->itable;
while ($tmp1671->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1671 = $tmp1671->next;
}
$fn1673 $tmp1672 = $tmp1671->methods[0];
frost$core$Bit $tmp1674 = $tmp1672($tmp1670);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block95; else goto block94;
block94:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1676 = $tmp1670->$class->itable;
while ($tmp1676->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1676 = $tmp1676->next;
}
$fn1678 $tmp1677 = $tmp1676->methods[1];
frost$core$Object* $tmp1679 = $tmp1677($tmp1670);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1679)));
org$frostlang$frostc$ASTNode* $tmp1680 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1679);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:420
frost$core$Int $tmp1681 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1682 = *(&local37);
frost$core$Int $tmp1683 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1682);
int64_t $tmp1684 = $tmp1681.value;
int64_t $tmp1685 = $tmp1683.value;
int64_t $tmp1686 = $tmp1684 + $tmp1685;
frost$core$Int $tmp1687 = (frost$core$Int) {$tmp1686};
*(&local36) = $tmp1687;
frost$core$Frost$unref$frost$core$Object$Q($tmp1679);
org$frostlang$frostc$ASTNode* $tmp1688 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:422
org$frostlang$frostc$FixedArray* $tmp1689 = *(&local35);
frost$core$Bit $tmp1690 = (frost$core$Bit) {$tmp1689 != NULL};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:423
org$frostlang$frostc$FixedArray* $tmp1692 = *(&local35);
ITable* $tmp1693 = ((frost$collections$Iterable*) $tmp1692)->$class->itable;
while ($tmp1693->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1693 = $tmp1693->next;
}
$fn1695 $tmp1694 = $tmp1693->methods[0];
frost$collections$Iterator* $tmp1696 = $tmp1694(((frost$collections$Iterable*) $tmp1692));
goto block98;
block98:;
ITable* $tmp1697 = $tmp1696->$class->itable;
while ($tmp1697->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1697 = $tmp1697->next;
}
$fn1699 $tmp1698 = $tmp1697->methods[0];
frost$core$Bit $tmp1700 = $tmp1698($tmp1696);
bool $tmp1701 = $tmp1700.value;
if ($tmp1701) goto block100; else goto block99;
block99:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1702 = $tmp1696->$class->itable;
while ($tmp1702->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1702 = $tmp1702->next;
}
$fn1704 $tmp1703 = $tmp1702->methods[1];
frost$core$Object* $tmp1705 = $tmp1703($tmp1696);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1705)));
org$frostlang$frostc$ASTNode* $tmp1706 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1705);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:424
frost$core$Int $tmp1707 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1708 = *(&local38);
frost$core$Int $tmp1709 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1708);
int64_t $tmp1710 = $tmp1707.value;
int64_t $tmp1711 = $tmp1709.value;
int64_t $tmp1712 = $tmp1710 + $tmp1711;
frost$core$Int $tmp1713 = (frost$core$Int) {$tmp1712};
*(&local36) = $tmp1713;
frost$core$Frost$unref$frost$core$Object$Q($tmp1705);
org$frostlang$frostc$ASTNode* $tmp1714 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block98;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:427
frost$core$Int $tmp1715 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1716 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1717 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1718 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1715;
block91:;
frost$core$Int $tmp1719 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1720 = $tmp1169.value;
int64_t $tmp1721 = $tmp1719.value;
bool $tmp1722 = $tmp1720 == $tmp1721;
frost$core$Bit $tmp1723 = (frost$core$Bit) {$tmp1722};
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:430
frost$core$Int $tmp1725 = (frost$core$Int) {10u};
frost$core$Int $tmp1726 = (frost$core$Int) {1u};
int64_t $tmp1727 = $tmp1725.value;
int64_t $tmp1728 = $tmp1726.value;
int64_t $tmp1729 = $tmp1727 + $tmp1728;
frost$core$Int $tmp1730 = (frost$core$Int) {$tmp1729};
return $tmp1730;
block102:;
frost$core$Int $tmp1731 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1732 = $tmp1169.value;
int64_t $tmp1733 = $tmp1731.value;
bool $tmp1734 = $tmp1732 == $tmp1733;
frost$core$Bit $tmp1735 = (frost$core$Bit) {$tmp1734};
bool $tmp1736 = $tmp1735.value;
if ($tmp1736) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:433
frost$core$Int $tmp1737 = (frost$core$Int) {1u};
return $tmp1737;
block105:;
frost$core$Int $tmp1738 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1739 = $tmp1169.value;
int64_t $tmp1740 = $tmp1738.value;
bool $tmp1741 = $tmp1739 == $tmp1740;
frost$core$Bit $tmp1742 = (frost$core$Bit) {$tmp1741};
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:436
frost$core$Int $tmp1744 = (frost$core$Int) {0u};
return $tmp1744;
block108:;
frost$core$Int $tmp1745 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:438:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1746 = $tmp1169.value;
int64_t $tmp1747 = $tmp1745.value;
bool $tmp1748 = $tmp1746 == $tmp1747;
frost$core$Bit $tmp1749 = (frost$core$Bit) {$tmp1748};
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:439
frost$core$Int $tmp1751 = (frost$core$Int) {1u};
return $tmp1751;
block111:;
frost$core$Int $tmp1752 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:441:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1753 = $tmp1169.value;
int64_t $tmp1754 = $tmp1752.value;
bool $tmp1755 = $tmp1753 == $tmp1754;
frost$core$Bit $tmp1756 = (frost$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:442
frost$core$Int $tmp1758 = (frost$core$Int) {1u};
return $tmp1758;
block114:;
frost$core$Int $tmp1759 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:444:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1760 = $tmp1169.value;
int64_t $tmp1761 = $tmp1759.value;
bool $tmp1762 = $tmp1760 == $tmp1761;
frost$core$Bit $tmp1763 = (frost$core$Bit) {$tmp1762};
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:445
frost$core$Int $tmp1765 = (frost$core$Int) {1u};
return $tmp1765;
block117:;
frost$core$Int $tmp1766 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:447:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1767 = $tmp1169.value;
int64_t $tmp1768 = $tmp1766.value;
bool $tmp1769 = $tmp1767 == $tmp1768;
frost$core$Bit $tmp1770 = (frost$core$Bit) {$tmp1769};
bool $tmp1771 = $tmp1770.value;
if ($tmp1771) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1772 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1773 = *$tmp1772;
org$frostlang$frostc$ASTNode** $tmp1774 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1775 = *$tmp1774;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
org$frostlang$frostc$ASTNode* $tmp1776 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local39) = $tmp1775;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:448
org$frostlang$frostc$ASTNode* $tmp1777 = *(&local39);
frost$core$Bit $tmp1778 = (frost$core$Bit) {$tmp1777 == NULL};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:449
frost$core$Int $tmp1780 = (frost$core$Int) {0u};
org$frostlang$frostc$ASTNode* $tmp1781 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1780;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:451
org$frostlang$frostc$ASTNode* $tmp1782 = *(&local39);
frost$core$Int $tmp1783 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1782);
org$frostlang$frostc$ASTNode* $tmp1784 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1783;
block120:;
frost$core$Int $tmp1785 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:453:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1786 = $tmp1169.value;
int64_t $tmp1787 = $tmp1785.value;
bool $tmp1788 = $tmp1786 == $tmp1787;
frost$core$Bit $tmp1789 = (frost$core$Bit) {$tmp1788};
bool $tmp1790 = $tmp1789.value;
if ($tmp1790) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:454
frost$core$Int $tmp1791 = (frost$core$Int) {1u};
return $tmp1791;
block125:;
frost$core$Int $tmp1792 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:456:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1793 = $tmp1169.value;
int64_t $tmp1794 = $tmp1792.value;
bool $tmp1795 = $tmp1793 == $tmp1794;
frost$core$Bit $tmp1796 = (frost$core$Bit) {$tmp1795};
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block127; else goto block128;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:457
frost$core$Int $tmp1798 = (frost$core$Int) {1u};
return $tmp1798;
block128:;
frost$core$Int $tmp1799 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:459:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1800 = $tmp1169.value;
int64_t $tmp1801 = $tmp1799.value;
bool $tmp1802 = $tmp1800 == $tmp1801;
frost$core$Bit $tmp1803 = (frost$core$Bit) {$tmp1802};
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:460
frost$core$Int $tmp1805 = (frost$core$Int) {1u};
return $tmp1805;
block131:;
frost$core$Int $tmp1806 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:462:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1807 = $tmp1169.value;
int64_t $tmp1808 = $tmp1806.value;
bool $tmp1809 = $tmp1807 == $tmp1808;
frost$core$Bit $tmp1810 = (frost$core$Bit) {$tmp1809};
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:463
frost$core$Int $tmp1812 = (frost$core$Int) {10u};
frost$core$Int $tmp1813 = (frost$core$Int) {1u};
int64_t $tmp1814 = $tmp1812.value;
int64_t $tmp1815 = $tmp1813.value;
int64_t $tmp1816 = $tmp1814 + $tmp1815;
frost$core$Int $tmp1817 = (frost$core$Int) {$tmp1816};
return $tmp1817;
block134:;
frost$core$Int $tmp1818 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:465:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1819 = $tmp1169.value;
int64_t $tmp1820 = $tmp1818.value;
bool $tmp1821 = $tmp1819 == $tmp1820;
frost$core$Bit $tmp1822 = (frost$core$Bit) {$tmp1821};
bool $tmp1823 = $tmp1822.value;
if ($tmp1823) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:466
frost$core$Int $tmp1824 = (frost$core$Int) {0u};
return $tmp1824;
block137:;
frost$core$Int $tmp1825 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:468:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1826 = $tmp1169.value;
int64_t $tmp1827 = $tmp1825.value;
bool $tmp1828 = $tmp1826 == $tmp1827;
frost$core$Bit $tmp1829 = (frost$core$Bit) {$tmp1828};
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:469
frost$core$Int $tmp1831 = (frost$core$Int) {10u};
frost$core$Int $tmp1832 = (frost$core$Int) {1u};
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832.value;
int64_t $tmp1835 = $tmp1833 + $tmp1834;
frost$core$Int $tmp1836 = (frost$core$Int) {$tmp1835};
return $tmp1836;
block140:;
frost$core$Int $tmp1837 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:471:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1838 = $tmp1169.value;
int64_t $tmp1839 = $tmp1837.value;
bool $tmp1840 = $tmp1838 == $tmp1839;
frost$core$Bit $tmp1841 = (frost$core$Bit) {$tmp1840};
bool $tmp1842 = $tmp1841.value;
if ($tmp1842) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1843 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1844 = *$tmp1843;
org$frostlang$frostc$expression$Unary$Operator* $tmp1845 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp1846 = *$tmp1845;
org$frostlang$frostc$ASTNode** $tmp1847 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1848 = *$tmp1847;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
org$frostlang$frostc$ASTNode* $tmp1849 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
*(&local40) = $tmp1848;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:472
frost$core$Int $tmp1850 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode* $tmp1851 = *(&local40);
frost$core$Int $tmp1852 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1851);
int64_t $tmp1853 = $tmp1850.value;
int64_t $tmp1854 = $tmp1852.value;
int64_t $tmp1855 = $tmp1853 + $tmp1854;
frost$core$Int $tmp1856 = (frost$core$Int) {$tmp1855};
org$frostlang$frostc$ASTNode* $tmp1857 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1856;
block143:;
frost$core$Int $tmp1858 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:474:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1859 = $tmp1169.value;
int64_t $tmp1860 = $tmp1858.value;
bool $tmp1861 = $tmp1859 == $tmp1860;
frost$core$Bit $tmp1862 = (frost$core$Bit) {$tmp1861};
bool $tmp1863 = $tmp1862.value;
if ($tmp1863) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:475
frost$core$Int $tmp1864 = (frost$core$Int) {0u};
return $tmp1864;
block146:;
frost$core$Int $tmp1865 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:477:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1866 = $tmp1169.value;
int64_t $tmp1867 = $tmp1865.value;
bool $tmp1868 = $tmp1866 == $tmp1867;
frost$core$Bit $tmp1869 = (frost$core$Bit) {$tmp1868};
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:478
frost$core$Int $tmp1871 = (frost$core$Int) {10u};
frost$core$Int $tmp1872 = (frost$core$Int) {1u};
int64_t $tmp1873 = $tmp1871.value;
int64_t $tmp1874 = $tmp1872.value;
int64_t $tmp1875 = $tmp1873 + $tmp1874;
frost$core$Int $tmp1876 = (frost$core$Int) {$tmp1875};
return $tmp1876;
block149:;
frost$core$Int $tmp1877 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:480:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1878 = $tmp1169.value;
int64_t $tmp1879 = $tmp1877.value;
bool $tmp1880 = $tmp1878 == $tmp1879;
frost$core$Bit $tmp1881 = (frost$core$Bit) {$tmp1880};
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block151; else goto block152;
block151:;
org$frostlang$frostc$Position* $tmp1883 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1884 = *$tmp1883;
org$frostlang$frostc$Variable$Kind* $tmp1885 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp1886 = *$tmp1885;
org$frostlang$frostc$FixedArray** $tmp1887 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1888 = *$tmp1887;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
org$frostlang$frostc$FixedArray* $tmp1889 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
*(&local41) = $tmp1888;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:481
frost$core$Int $tmp1890 = (frost$core$Int) {0u};
*(&local42) = $tmp1890;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:482
org$frostlang$frostc$FixedArray* $tmp1891 = *(&local41);
ITable* $tmp1892 = ((frost$collections$Iterable*) $tmp1891)->$class->itable;
while ($tmp1892->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1892 = $tmp1892->next;
}
$fn1894 $tmp1893 = $tmp1892->methods[0];
frost$collections$Iterator* $tmp1895 = $tmp1893(((frost$collections$Iterable*) $tmp1891));
goto block154;
block154:;
ITable* $tmp1896 = $tmp1895->$class->itable;
while ($tmp1896->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1896 = $tmp1896->next;
}
$fn1898 $tmp1897 = $tmp1896->methods[0];
frost$core$Bit $tmp1899 = $tmp1897($tmp1895);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block156; else goto block155;
block155:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1901 = $tmp1895->$class->itable;
while ($tmp1901->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1901 = $tmp1901->next;
}
$fn1903 $tmp1902 = $tmp1901->methods[1];
frost$core$Object* $tmp1904 = $tmp1902($tmp1895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1904)));
org$frostlang$frostc$ASTNode* $tmp1905 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1904);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:483
frost$core$Int $tmp1906 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1907 = *(&local43);
frost$core$Int $tmp1908 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1907);
int64_t $tmp1909 = $tmp1906.value;
int64_t $tmp1910 = $tmp1908.value;
int64_t $tmp1911 = $tmp1909 + $tmp1910;
frost$core$Int $tmp1912 = (frost$core$Int) {$tmp1911};
*(&local42) = $tmp1912;
frost$core$Frost$unref$frost$core$Object$Q($tmp1904);
org$frostlang$frostc$ASTNode* $tmp1913 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block154;
block156:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:485
frost$core$Int $tmp1914 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1915 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1914;
block152:;
frost$core$Int $tmp1916 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:487:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1917 = $tmp1169.value;
int64_t $tmp1918 = $tmp1916.value;
bool $tmp1919 = $tmp1917 == $tmp1918;
frost$core$Bit $tmp1920 = (frost$core$Bit) {$tmp1919};
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block157; else goto block158;
block157:;
org$frostlang$frostc$Position* $tmp1922 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1923 = *$tmp1922;
org$frostlang$frostc$FixedArray** $tmp1924 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1925 = *$tmp1924;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
org$frostlang$frostc$FixedArray* $tmp1926 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
*(&local44) = $tmp1925;
org$frostlang$frostc$FixedArray** $tmp1927 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1928 = *$tmp1927;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$FixedArray* $tmp1929 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local45) = $tmp1928;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:488
frost$core$Int $tmp1930 = (frost$core$Int) {0u};
*(&local46) = $tmp1930;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:489
org$frostlang$frostc$FixedArray* $tmp1931 = *(&local44);
ITable* $tmp1932 = ((frost$collections$Iterable*) $tmp1931)->$class->itable;
while ($tmp1932->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1932 = $tmp1932->next;
}
$fn1934 $tmp1933 = $tmp1932->methods[0];
frost$collections$Iterator* $tmp1935 = $tmp1933(((frost$collections$Iterable*) $tmp1931));
goto block160;
block160:;
ITable* $tmp1936 = $tmp1935->$class->itable;
while ($tmp1936->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1936 = $tmp1936->next;
}
$fn1938 $tmp1937 = $tmp1936->methods[0];
frost$core$Bit $tmp1939 = $tmp1937($tmp1935);
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block162; else goto block161;
block161:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1941 = $tmp1935->$class->itable;
while ($tmp1941->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1941 = $tmp1941->next;
}
$fn1943 $tmp1942 = $tmp1941->methods[1];
frost$core$Object* $tmp1944 = $tmp1942($tmp1935);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1944)));
org$frostlang$frostc$ASTNode* $tmp1945 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1944);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:490
frost$core$Int $tmp1946 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1947 = *(&local47);
frost$core$Int $tmp1948 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1947);
int64_t $tmp1949 = $tmp1946.value;
int64_t $tmp1950 = $tmp1948.value;
int64_t $tmp1951 = $tmp1949 + $tmp1950;
frost$core$Int $tmp1952 = (frost$core$Int) {$tmp1951};
*(&local46) = $tmp1952;
frost$core$Frost$unref$frost$core$Object$Q($tmp1944);
org$frostlang$frostc$ASTNode* $tmp1953 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block160;
block162:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:492
org$frostlang$frostc$FixedArray* $tmp1954 = *(&local45);
ITable* $tmp1955 = ((frost$collections$Iterable*) $tmp1954)->$class->itable;
while ($tmp1955->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1955 = $tmp1955->next;
}
$fn1957 $tmp1956 = $tmp1955->methods[0];
frost$collections$Iterator* $tmp1958 = $tmp1956(((frost$collections$Iterable*) $tmp1954));
goto block163;
block163:;
ITable* $tmp1959 = $tmp1958->$class->itable;
while ($tmp1959->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1959 = $tmp1959->next;
}
$fn1961 $tmp1960 = $tmp1959->methods[0];
frost$core$Bit $tmp1962 = $tmp1960($tmp1958);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block165; else goto block164;
block164:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1964 = $tmp1958->$class->itable;
while ($tmp1964->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1964 = $tmp1964->next;
}
$fn1966 $tmp1965 = $tmp1964->methods[1];
frost$core$Object* $tmp1967 = $tmp1965($tmp1958);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1967)));
org$frostlang$frostc$ASTNode* $tmp1968 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1967);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:493
frost$core$Int $tmp1969 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1970 = *(&local48);
frost$core$Int $tmp1971 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1970);
int64_t $tmp1972 = $tmp1969.value;
int64_t $tmp1973 = $tmp1971.value;
int64_t $tmp1974 = $tmp1972 + $tmp1973;
frost$core$Int $tmp1975 = (frost$core$Int) {$tmp1974};
*(&local46) = $tmp1975;
frost$core$Frost$unref$frost$core$Object$Q($tmp1967);
org$frostlang$frostc$ASTNode* $tmp1976 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block163;
block165:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:495
frost$core$Int $tmp1977 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1978 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1979 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1977;
block158:;
frost$core$Int $tmp1980 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:497:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1981 = $tmp1169.value;
int64_t $tmp1982 = $tmp1980.value;
bool $tmp1983 = $tmp1981 == $tmp1982;
frost$core$Bit $tmp1984 = (frost$core$Bit) {$tmp1983};
bool $tmp1985 = $tmp1984.value;
if ($tmp1985) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1986 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1987 = *$tmp1986;
frost$core$String** $tmp1988 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1989 = *$tmp1988;
org$frostlang$frostc$ASTNode** $tmp1990 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1991 = *$tmp1990;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
org$frostlang$frostc$ASTNode* $tmp1992 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local49) = $tmp1991;
org$frostlang$frostc$FixedArray** $tmp1993 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1994 = *$tmp1993;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$FixedArray* $tmp1995 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local50) = $tmp1994;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:498
org$frostlang$frostc$ASTNode* $tmp1996 = *(&local49);
frost$core$Int $tmp1997 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1996);
*(&local51) = $tmp1997;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:499
org$frostlang$frostc$FixedArray* $tmp1998 = *(&local50);
ITable* $tmp1999 = ((frost$collections$Iterable*) $tmp1998)->$class->itable;
while ($tmp1999->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1999 = $tmp1999->next;
}
$fn2001 $tmp2000 = $tmp1999->methods[0];
frost$collections$Iterator* $tmp2002 = $tmp2000(((frost$collections$Iterable*) $tmp1998));
goto block169;
block169:;
ITable* $tmp2003 = $tmp2002->$class->itable;
while ($tmp2003->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2003 = $tmp2003->next;
}
$fn2005 $tmp2004 = $tmp2003->methods[0];
frost$core$Bit $tmp2006 = $tmp2004($tmp2002);
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block171; else goto block170;
block170:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2008 = $tmp2002->$class->itable;
while ($tmp2008->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2008 = $tmp2008->next;
}
$fn2010 $tmp2009 = $tmp2008->methods[1];
frost$core$Object* $tmp2011 = $tmp2009($tmp2002);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2011)));
org$frostlang$frostc$ASTNode* $tmp2012 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp2011);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:500
frost$core$Int $tmp2013 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp2014 = *(&local52);
frost$core$Int $tmp2015 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2014);
int64_t $tmp2016 = $tmp2013.value;
int64_t $tmp2017 = $tmp2015.value;
int64_t $tmp2018 = $tmp2016 + $tmp2017;
frost$core$Int $tmp2019 = (frost$core$Int) {$tmp2018};
*(&local51) = $tmp2019;
frost$core$Frost$unref$frost$core$Object$Q($tmp2011);
org$frostlang$frostc$ASTNode* $tmp2020 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block169;
block171:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:502
frost$core$Int $tmp2021 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp2022 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2023 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2023));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2021;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:505
frost$core$Int $tmp2024 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2025, $tmp2024);
abort(); // unreachable
block1:;
goto block172;
block172:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:511
frost$core$Weak** $tmp2026 = &param0->compiler;
frost$core$Weak* $tmp2027 = *$tmp2026;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2028 = &$tmp2027->_valid;
frost$core$Bit $tmp2029 = *$tmp2028;
bool $tmp2030 = $tmp2029.value;
if ($tmp2030) goto block7; else goto block8;
block8:;
frost$core$Int $tmp2031 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2032, $tmp2031);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2033 = &$tmp2027->value;
frost$core$Object* $tmp2034 = *$tmp2033;
frost$core$Frost$ref$frost$core$Object$Q($tmp2034);
org$frostlang$frostc$Compiler$Settings** $tmp2035 = &((org$frostlang$frostc$Compiler*) $tmp2034)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp2036 = *$tmp2035;
frost$core$Int* $tmp2037 = &$tmp2036->optimizationLevel;
frost$core$Int $tmp2038 = *$tmp2037;
frost$core$Int $tmp2039 = (frost$core$Int) {0u};
int64_t $tmp2040 = $tmp2038.value;
int64_t $tmp2041 = $tmp2039.value;
bool $tmp2042 = $tmp2040 > $tmp2041;
frost$core$Bit $tmp2043 = (frost$core$Bit) {$tmp2042};
bool $tmp2044 = $tmp2043.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2034);
if ($tmp2044) goto block4; else goto block2;
block4:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Scanner.frost:511:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int* $tmp2045 = &param1->flags;
frost$core$Int $tmp2046 = *$tmp2045;
frost$core$Int $tmp2047 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2048 = $tmp2046.value;
int64_t $tmp2049 = $tmp2047.value;
int64_t $tmp2050 = $tmp2048 & $tmp2049;
frost$core$Int $tmp2051 = (frost$core$Int) {$tmp2050};
frost$core$Int $tmp2052 = (frost$core$Int) {0u};
int64_t $tmp2053 = $tmp2051.value;
int64_t $tmp2054 = $tmp2052.value;
bool $tmp2055 = $tmp2053 != $tmp2054;
frost$core$Bit $tmp2056 = (frost$core$Bit) {$tmp2055};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:511:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2057 = $tmp2056.value;
bool $tmp2058 = !$tmp2057;
frost$core$Bit $tmp2059 = (frost$core$Bit) {$tmp2058};
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:512:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int* $tmp2061 = &param1->flags;
frost$core$Int $tmp2062 = *$tmp2061;
frost$core$Int $tmp2063 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2064 = $tmp2062.value;
int64_t $tmp2065 = $tmp2063.value;
int64_t $tmp2066 = $tmp2064 & $tmp2065;
frost$core$Int $tmp2067 = (frost$core$Int) {$tmp2066};
frost$core$Int $tmp2068 = (frost$core$Int) {0u};
int64_t $tmp2069 = $tmp2067.value;
int64_t $tmp2070 = $tmp2068.value;
bool $tmp2071 = $tmp2069 != $tmp2070;
frost$core$Bit $tmp2072 = (frost$core$Bit) {$tmp2071};
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:513
frost$core$Int $tmp2074 = (frost$core$Int) {0u};
*(&local0) = $tmp2074;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:514
ITable* $tmp2075 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp2075->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2075 = $tmp2075->next;
}
$fn2077 $tmp2076 = $tmp2075->methods[0];
frost$collections$Iterator* $tmp2078 = $tmp2076(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp2079 = $tmp2078->$class->itable;
while ($tmp2079->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2079 = $tmp2079->next;
}
$fn2081 $tmp2080 = $tmp2079->methods[0];
frost$core$Bit $tmp2082 = $tmp2080($tmp2078);
bool $tmp2083 = $tmp2082.value;
if ($tmp2083) goto block16; else goto block15;
block15:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2084 = $tmp2078->$class->itable;
while ($tmp2084->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2084 = $tmp2084->next;
}
$fn2086 $tmp2085 = $tmp2084->methods[1];
frost$core$Object* $tmp2087 = $tmp2085($tmp2078);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2087)));
org$frostlang$frostc$ASTNode* $tmp2088 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp2087);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:515
frost$core$Int $tmp2089 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2090 = *(&local1);
frost$core$Int $tmp2091 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2090);
int64_t $tmp2092 = $tmp2089.value;
int64_t $tmp2093 = $tmp2091.value;
int64_t $tmp2094 = $tmp2092 + $tmp2093;
frost$core$Int $tmp2095 = (frost$core$Int) {$tmp2094};
*(&local0) = $tmp2095;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:516
frost$core$Int $tmp2096 = *(&local0);
frost$core$Int $tmp2097 = (frost$core$Int) {10u};
int64_t $tmp2098 = $tmp2096.value;
int64_t $tmp2099 = $tmp2097.value;
bool $tmp2100 = $tmp2098 > $tmp2099;
frost$core$Bit $tmp2101 = (frost$core$Bit) {$tmp2100};
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:517
frost$core$Bit $tmp2103 = (frost$core$Bit) {false};
frost$core$Frost$unref$frost$core$Object$Q($tmp2087);
org$frostlang$frostc$ASTNode* $tmp2104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
return $tmp2103;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2087);
org$frostlang$frostc$ASTNode* $tmp2105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:520
frost$core$Bit $tmp2106 = (frost$core$Bit) {true};
return $tmp2106;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:522
frost$core$Bit $tmp2107 = (frost$core$Bit) {false};
return $tmp2107;

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
frost$core$String* local12 = NULL;
org$frostlang$frostc$ASTNode* local13 = NULL;
frost$collections$Array* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
frost$core$String* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
org$frostlang$frostc$Type* local18 = NULL;
org$frostlang$frostc$MethodDecl$Kind local19;
org$frostlang$frostc$MethodDecl$Kind local20;
frost$core$Bit local21;
org$frostlang$frostc$ClassDecl$Kind local22;
org$frostlang$frostc$ClassDecl$Kind local23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:529
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:531
frost$core$Bit $tmp2108 = (frost$core$Bit) {param3 == NULL};
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:535
frost$core$Int* $tmp2111 = &param3->$rawValue;
frost$core$Int $tmp2112 = *$tmp2111;
frost$core$Int $tmp2113 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:536:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2114 = $tmp2112.value;
int64_t $tmp2115 = $tmp2113.value;
bool $tmp2116 = $tmp2114 == $tmp2115;
frost$core$Bit $tmp2117 = (frost$core$Bit) {$tmp2116};
bool $tmp2118 = $tmp2117.value;
if ($tmp2118) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2119 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2120 = *$tmp2119;
*(&local1) = $tmp2120;
frost$core$String** $tmp2121 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2122 = *$tmp2121;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
frost$core$String* $tmp2123 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
*(&local2) = $tmp2122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:537
frost$core$String* $tmp2124 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
frost$core$String* $tmp2125 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local0) = $tmp2124;
frost$core$String* $tmp2126 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2126));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:540
frost$core$Int $tmp2127 = (frost$core$Int) {540u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2128, $tmp2127);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:544
org$frostlang$frostc$Annotations* $tmp2129 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
org$frostlang$frostc$Annotations* $tmp2130 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local3) = $tmp2129;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:545
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2131;
$tmp2131 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2131->value = param5;
frost$core$Int $tmp2132 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:545:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2133 = &(&local5)->$rawValue;
*$tmp2133 = $tmp2132;
org$frostlang$frostc$MethodDecl$Kind $tmp2134 = *(&local5);
*(&local4) = $tmp2134;
org$frostlang$frostc$MethodDecl$Kind $tmp2135 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2136;
$tmp2136 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2136->value = $tmp2135;
ITable* $tmp2137 = ((frost$core$Equatable*) $tmp2131)->$class->itable;
while ($tmp2137->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2137 = $tmp2137->next;
}
$fn2139 $tmp2138 = $tmp2137->methods[1];
frost$core$Bit $tmp2140 = $tmp2138(((frost$core$Equatable*) $tmp2131), ((frost$core$Equatable*) $tmp2136));
bool $tmp2141 = $tmp2140.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2136)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2131)));
if ($tmp2141) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Annotations** $tmp2142 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2143 = *$tmp2142;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:545:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int* $tmp2144 = &$tmp2143->flags;
frost$core$Int $tmp2145 = *$tmp2144;
frost$core$Int $tmp2146 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2147 = $tmp2145.value;
int64_t $tmp2148 = $tmp2146.value;
int64_t $tmp2149 = $tmp2147 & $tmp2148;
frost$core$Int $tmp2150 = (frost$core$Int) {$tmp2149};
frost$core$Int $tmp2151 = (frost$core$Int) {0u};
int64_t $tmp2152 = $tmp2150.value;
int64_t $tmp2153 = $tmp2151.value;
bool $tmp2154 = $tmp2152 != $tmp2153;
frost$core$Bit $tmp2155 = (frost$core$Bit) {$tmp2154};
bool $tmp2156 = $tmp2155.value;
if ($tmp2156) goto block8; else goto block10;
block10:;
org$frostlang$frostc$Annotations* $tmp2157 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Scanner.frost:545:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:107
frost$core$Int* $tmp2158 = &$tmp2157->flags;
frost$core$Int $tmp2159 = *$tmp2158;
frost$core$Int $tmp2160 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:107:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2161 = $tmp2159.value;
int64_t $tmp2162 = $tmp2160.value;
int64_t $tmp2163 = $tmp2161 & $tmp2162;
frost$core$Int $tmp2164 = (frost$core$Int) {$tmp2163};
frost$core$Int $tmp2165 = (frost$core$Int) {0u};
int64_t $tmp2166 = $tmp2164.value;
int64_t $tmp2167 = $tmp2165.value;
bool $tmp2168 = $tmp2166 != $tmp2167;
frost$core$Bit $tmp2169 = (frost$core$Bit) {$tmp2168};
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:546
org$frostlang$frostc$Annotations* $tmp2171 = *(&local3);
frost$core$Int* $tmp2172 = &$tmp2171->flags;
frost$core$Int $tmp2173 = *$tmp2172;
frost$core$Int $tmp2174 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:546:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2175 = $tmp2173.value;
int64_t $tmp2176 = $tmp2174.value;
int64_t $tmp2177 = $tmp2175 | $tmp2176;
frost$core$Int $tmp2178 = (frost$core$Int) {$tmp2177};
frost$core$Int* $tmp2179 = &$tmp2171->flags;
*$tmp2179 = $tmp2178;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:548
*(&local6) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:549
frost$core$Bit $tmp2180 = (frost$core$Bit) {param7 != NULL};
bool $tmp2181 = $tmp2180.value;
if ($tmp2181) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:550
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2182 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
frost$collections$Array* $tmp2183 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local6) = $tmp2182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:551
frost$core$String** $tmp2184 = &param1->name;
frost$core$String* $tmp2185 = *$tmp2184;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:551:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
frost$core$String* $tmp2186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2185, &$s2187);
frost$core$String* $tmp2188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2186, param6);
frost$core$String* $tmp2189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2188, &$s2190);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$String* $tmp2191 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
*(&local7) = $tmp2189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:552
ITable* $tmp2192 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp2192->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2192 = $tmp2192->next;
}
$fn2194 $tmp2193 = $tmp2192->methods[0];
frost$collections$Iterator* $tmp2195 = $tmp2193(((frost$collections$Iterable*) param7));
goto block22;
block22:;
ITable* $tmp2196 = $tmp2195->$class->itable;
while ($tmp2196->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2196 = $tmp2196->next;
}
$fn2198 $tmp2197 = $tmp2196->methods[0];
frost$core$Bit $tmp2199 = $tmp2197($tmp2195);
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block24; else goto block23;
block23:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2201 = $tmp2195->$class->itable;
while ($tmp2201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2201 = $tmp2201->next;
}
$fn2203 $tmp2202 = $tmp2201->methods[1];
frost$core$Object* $tmp2204 = $tmp2202($tmp2195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2204)));
org$frostlang$frostc$ASTNode* $tmp2205 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp2204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:553
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:554
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:555
org$frostlang$frostc$ASTNode* $tmp2206 = *(&local8);
frost$core$Int* $tmp2207 = &$tmp2206->$rawValue;
frost$core$Int $tmp2208 = *$tmp2207;
frost$core$Int $tmp2209 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:556:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2210 = $tmp2208.value;
int64_t $tmp2211 = $tmp2209.value;
bool $tmp2212 = $tmp2210 == $tmp2211;
frost$core$Bit $tmp2213 = (frost$core$Bit) {$tmp2212};
bool $tmp2214 = $tmp2213.value;
if ($tmp2214) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2215 = (org$frostlang$frostc$Position*) ($tmp2206->$data + 0);
org$frostlang$frostc$Position $tmp2216 = *$tmp2215;
frost$core$String** $tmp2217 = (frost$core$String**) ($tmp2206->$data + 24);
frost$core$String* $tmp2218 = *$tmp2217;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
frost$core$String* $tmp2219 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
*(&local11) = $tmp2218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:557
frost$core$String* $tmp2220 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
frost$core$String* $tmp2221 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local9) = $tmp2220;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:558
frost$core$Weak** $tmp2222 = &param0->compiler;
frost$core$Weak* $tmp2223 = *$tmp2222;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:558:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2224 = &$tmp2223->_valid;
frost$core$Bit $tmp2225 = *$tmp2224;
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block31; else goto block32;
block32:;
frost$core$Int $tmp2227 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2228, $tmp2227);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2229 = &$tmp2223->value;
frost$core$Object* $tmp2230 = *$tmp2229;
frost$core$Frost$ref$frost$core$Object$Q($tmp2230);
org$frostlang$frostc$Type** $tmp2231 = &((org$frostlang$frostc$Compiler*) $tmp2230)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2232 = *$tmp2231;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
org$frostlang$frostc$Type* $tmp2233 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local10) = $tmp2232;
frost$core$Frost$unref$frost$core$Object$Q($tmp2230);
frost$core$String* $tmp2234 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local11) = ((frost$core$String*) NULL);
goto block25;
block27:;
frost$core$Int $tmp2235 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:560:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2236 = $tmp2208.value;
int64_t $tmp2237 = $tmp2235.value;
bool $tmp2238 = $tmp2236 == $tmp2237;
frost$core$Bit $tmp2239 = (frost$core$Bit) {$tmp2238};
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp2241 = (org$frostlang$frostc$Position*) ($tmp2206->$data + 0);
org$frostlang$frostc$Position $tmp2242 = *$tmp2241;
frost$core$String** $tmp2243 = (frost$core$String**) ($tmp2206->$data + 24);
frost$core$String* $tmp2244 = *$tmp2243;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$String* $tmp2245 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local12) = $tmp2244;
org$frostlang$frostc$ASTNode** $tmp2246 = (org$frostlang$frostc$ASTNode**) ($tmp2206->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2247 = *$tmp2246;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
org$frostlang$frostc$ASTNode* $tmp2248 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local13) = $tmp2247;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:561
frost$core$String* $tmp2249 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
frost$core$String* $tmp2250 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local9) = $tmp2249;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:562
org$frostlang$frostc$ASTNode* $tmp2251 = *(&local13);
org$frostlang$frostc$Type* $tmp2252 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2251);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
org$frostlang$frostc$Type* $tmp2253 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local10) = $tmp2252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
org$frostlang$frostc$ASTNode* $tmp2254 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2255 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
*(&local12) = ((frost$core$String*) NULL);
goto block25;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:565
frost$core$Int $tmp2256 = (frost$core$Int) {565u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2257, $tmp2256);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:568
frost$collections$Array* $tmp2258 = *(&local6);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$MethodDecl$GenericParameter));
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp2259 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2260 = *(&local8);
$fn2262 $tmp2261 = ($fn2262) $tmp2260->$class->vtable[2];
org$frostlang$frostc$Position $tmp2263 = $tmp2261($tmp2260);
frost$core$String* $tmp2264 = *(&local7);
frost$core$String* $tmp2265 = *(&local9);
org$frostlang$frostc$Type* $tmp2266 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2259, $tmp2263, $tmp2264, $tmp2265, $tmp2266);
frost$collections$Array$add$frost$collections$Array$T($tmp2258, ((frost$core$Object*) $tmp2259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
org$frostlang$frostc$Type* $tmp2267 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2268 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2204);
org$frostlang$frostc$ASTNode* $tmp2269 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
frost$core$String* $tmp2270 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local7) = ((frost$core$String*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp2271 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
*(&local6) = ((frost$collections$Array*) NULL);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2272 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2272);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
frost$collections$Array* $tmp2273 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local14) = $tmp2272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:576
ITable* $tmp2274 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp2274->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2274 = $tmp2274->next;
}
$fn2276 $tmp2275 = $tmp2274->methods[0];
frost$collections$Iterator* $tmp2277 = $tmp2275(((frost$collections$Iterable*) param8));
goto block36;
block36:;
ITable* $tmp2278 = $tmp2277->$class->itable;
while ($tmp2278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
frost$core$Bit $tmp2281 = $tmp2279($tmp2277);
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block38; else goto block37;
block37:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2283 = $tmp2277->$class->itable;
while ($tmp2283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2283 = $tmp2283->next;
}
$fn2285 $tmp2284 = $tmp2283->methods[1];
frost$core$Object* $tmp2286 = $tmp2284($tmp2277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2286)));
org$frostlang$frostc$ASTNode* $tmp2287 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2286);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:577
org$frostlang$frostc$ASTNode* $tmp2288 = *(&local15);
frost$core$Int* $tmp2289 = &$tmp2288->$rawValue;
frost$core$Int $tmp2290 = *$tmp2289;
frost$core$Int $tmp2291 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:578:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2292 = $tmp2290.value;
int64_t $tmp2293 = $tmp2291.value;
bool $tmp2294 = $tmp2292 == $tmp2293;
frost$core$Bit $tmp2295 = (frost$core$Bit) {$tmp2294};
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp2297 = (org$frostlang$frostc$Position*) ($tmp2288->$data + 0);
org$frostlang$frostc$Position $tmp2298 = *$tmp2297;
frost$core$String** $tmp2299 = (frost$core$String**) ($tmp2288->$data + 24);
frost$core$String* $tmp2300 = *$tmp2299;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
frost$core$String* $tmp2301 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
*(&local16) = $tmp2300;
org$frostlang$frostc$ASTNode** $tmp2302 = (org$frostlang$frostc$ASTNode**) ($tmp2288->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2303 = *$tmp2302;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
org$frostlang$frostc$ASTNode* $tmp2304 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
*(&local17) = $tmp2303;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:579
frost$collections$Array* $tmp2305 = *(&local14);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2306 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2307 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp2308 = *(&local17);
org$frostlang$frostc$Type* $tmp2309 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2308);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2306, $tmp2307, $tmp2309);
frost$collections$Array$add$frost$collections$Array$T($tmp2305, ((frost$core$Object*) $tmp2306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
org$frostlang$frostc$ASTNode* $tmp2310 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2311 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2286);
org$frostlang$frostc$ASTNode* $tmp2312 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:582
frost$core$Int $tmp2313 = (frost$core$Int) {582u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2314, $tmp2313);
abort(); // unreachable
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:586
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:587
frost$core$Bit $tmp2315 = (frost$core$Bit) {param9 != NULL};
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:588
org$frostlang$frostc$Type* $tmp2317 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
org$frostlang$frostc$Type* $tmp2318 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
*(&local18) = $tmp2317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:591
frost$core$Weak** $tmp2319 = &param0->compiler;
frost$core$Weak* $tmp2320 = *$tmp2319;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:591:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2321 = &$tmp2320->_valid;
frost$core$Bit $tmp2322 = *$tmp2321;
bool $tmp2323 = $tmp2322.value;
if ($tmp2323) goto block48; else goto block49;
block49:;
frost$core$Int $tmp2324 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2325, $tmp2324);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2326 = &$tmp2320->value;
frost$core$Object* $tmp2327 = *$tmp2326;
frost$core$Frost$ref$frost$core$Object$Q($tmp2327);
org$frostlang$frostc$Type** $tmp2328 = &((org$frostlang$frostc$Compiler*) $tmp2327)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2329 = *$tmp2328;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
org$frostlang$frostc$Type* $tmp2330 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local18) = $tmp2329;
frost$core$Frost$unref$frost$core$Object$Q($tmp2327);
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:593
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2331;
$tmp2331 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2331->value = param5;
frost$core$Int $tmp2332 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:593:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2333 = &(&local20)->$rawValue;
*$tmp2333 = $tmp2332;
org$frostlang$frostc$MethodDecl$Kind $tmp2334 = *(&local20);
*(&local19) = $tmp2334;
org$frostlang$frostc$MethodDecl$Kind $tmp2335 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2336;
$tmp2336 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2336->value = $tmp2335;
ITable* $tmp2337 = ((frost$core$Equatable*) $tmp2331)->$class->itable;
while ($tmp2337->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2337 = $tmp2337->next;
}
$fn2339 $tmp2338 = $tmp2337->methods[0];
frost$core$Bit $tmp2340 = $tmp2338(((frost$core$Equatable*) $tmp2331), ((frost$core$Equatable*) $tmp2336));
bool $tmp2341 = $tmp2340.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2336)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2331)));
if ($tmp2341) goto block52; else goto block51;
block52:;
org$frostlang$frostc$Type* $tmp2342 = *(&local18);
frost$core$Weak** $tmp2343 = &param0->compiler;
frost$core$Weak* $tmp2344 = *$tmp2343;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:593:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2345 = &$tmp2344->_valid;
frost$core$Bit $tmp2346 = *$tmp2345;
bool $tmp2347 = $tmp2346.value;
if ($tmp2347) goto block56; else goto block57;
block57:;
frost$core$Int $tmp2348 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2349, $tmp2348);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2350 = &$tmp2344->value;
frost$core$Object* $tmp2351 = *$tmp2350;
frost$core$Frost$ref$frost$core$Object$Q($tmp2351);
org$frostlang$frostc$Type** $tmp2352 = &((org$frostlang$frostc$Compiler*) $tmp2351)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2353 = *$tmp2352;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Scanner.frost:593:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2354 = &((org$frostlang$frostc$Symbol*) $tmp2342)->name;
frost$core$String* $tmp2355 = *$tmp2354;
frost$core$String** $tmp2356 = &((org$frostlang$frostc$Symbol*) $tmp2353)->name;
frost$core$String* $tmp2357 = *$tmp2356;
frost$core$Bit $tmp2358 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2355, $tmp2357);
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Type$Kind* $tmp2360 = &$tmp2342->typeKind;
org$frostlang$frostc$Type$Kind $tmp2361 = *$tmp2360;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2362;
$tmp2362 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2362->value = $tmp2361;
org$frostlang$frostc$Type$Kind* $tmp2363 = &$tmp2353->typeKind;
org$frostlang$frostc$Type$Kind $tmp2364 = *$tmp2363;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2365;
$tmp2365 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2365->value = $tmp2364;
ITable* $tmp2366 = ((frost$core$Equatable*) $tmp2362)->$class->itable;
while ($tmp2366->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2366 = $tmp2366->next;
}
$fn2368 $tmp2367 = $tmp2366->methods[0];
frost$core$Bit $tmp2369 = $tmp2367(((frost$core$Equatable*) $tmp2362), ((frost$core$Equatable*) $tmp2365));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2365)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2362)));
*(&local21) = $tmp2369;
goto block61;
block60:;
*(&local21) = $tmp2358;
goto block61;
block61:;
frost$core$Bit $tmp2370 = *(&local21);
bool $tmp2371 = $tmp2370.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2351);
if ($tmp2371) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:594
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:594:18
frost$io$File** $tmp2372 = &param0->source;
frost$io$File* $tmp2373 = *$tmp2372;
frost$core$Bit $tmp2374 = (frost$core$Bit) {$tmp2373 != NULL};
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block63; else goto block64;
block64:;
frost$core$Int $tmp2376 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2377, $tmp2376, &$s2378);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp2379 = &param0->compiler;
frost$core$Weak* $tmp2380 = *$tmp2379;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2381 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2380);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block66; else goto block67;
block67:;
frost$core$Int $tmp2383 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2384, $tmp2383);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2385 = &$tmp2380->value;
frost$core$Object* $tmp2386 = *$tmp2385;
frost$core$Frost$ref$frost$core$Object$Q($tmp2386);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2386), param2, &$s2387);
frost$core$Frost$unref$frost$core$Object$Q($tmp2386);
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:596
frost$core$Bit $tmp2388 = (frost$core$Bit) {param10 != NULL};
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block70; else goto block69;
block70:;
org$frostlang$frostc$Annotations* $tmp2390 = *(&local3);
frost$core$Bit $tmp2391 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp2390, ((frost$collections$ListView*) param10));
bool $tmp2392 = $tmp2391.value;
if ($tmp2392) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:597
org$frostlang$frostc$Annotations* $tmp2393 = *(&local3);
frost$core$Int* $tmp2394 = &$tmp2393->flags;
frost$core$Int $tmp2395 = *$tmp2394;
frost$core$Int $tmp2396 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:597:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2397 = $tmp2395.value;
int64_t $tmp2398 = $tmp2396.value;
int64_t $tmp2399 = $tmp2397 | $tmp2398;
frost$core$Int $tmp2400 = (frost$core$Int) {$tmp2399};
frost$core$Int* $tmp2401 = &$tmp2393->flags;
*$tmp2401 = $tmp2400;
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:599
frost$core$Bit $tmp2402 = (frost$core$Bit) {param10 == NULL};
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block75; else goto block73;
block75:;
org$frostlang$frostc$ClassDecl$Kind* $tmp2404 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2405 = *$tmp2404;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2406;
$tmp2406 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2406->value = $tmp2405;
frost$core$Int $tmp2407 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:599:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp2408 = &(&local23)->$rawValue;
*$tmp2408 = $tmp2407;
org$frostlang$frostc$ClassDecl$Kind $tmp2409 = *(&local23);
*(&local22) = $tmp2409;
org$frostlang$frostc$ClassDecl$Kind $tmp2410 = *(&local22);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2411;
$tmp2411 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2411->value = $tmp2410;
ITable* $tmp2412 = ((frost$core$Equatable*) $tmp2406)->$class->itable;
while ($tmp2412->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2412 = $tmp2412->next;
}
$fn2414 $tmp2413 = $tmp2412->methods[0];
frost$core$Bit $tmp2415 = $tmp2413(((frost$core$Equatable*) $tmp2406), ((frost$core$Equatable*) $tmp2411));
bool $tmp2416 = $tmp2415.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2411)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2406)));
if ($tmp2416) goto block74; else goto block73;
block74:;
org$frostlang$frostc$Annotations** $tmp2417 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2418 = *$tmp2417;
// begin inline call to function org.frostlang.frostc.Annotations.get_isStub():frost.core.Bit from Scanner.frost:600:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:171
frost$core$Int* $tmp2419 = &$tmp2418->flags;
frost$core$Int $tmp2420 = *$tmp2419;
frost$core$Int $tmp2421 = (frost$core$Int) {131072u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2422 = $tmp2420.value;
int64_t $tmp2423 = $tmp2421.value;
int64_t $tmp2424 = $tmp2422 & $tmp2423;
frost$core$Int $tmp2425 = (frost$core$Int) {$tmp2424};
frost$core$Int $tmp2426 = (frost$core$Int) {0u};
int64_t $tmp2427 = $tmp2425.value;
int64_t $tmp2428 = $tmp2426.value;
bool $tmp2429 = $tmp2427 != $tmp2428;
frost$core$Bit $tmp2430 = (frost$core$Bit) {$tmp2429};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:600:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2431 = $tmp2430.value;
bool $tmp2432 = !$tmp2431;
frost$core$Bit $tmp2433 = (frost$core$Bit) {$tmp2432};
bool $tmp2434 = $tmp2433.value;
if ($tmp2434) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:601
org$frostlang$frostc$Annotations* $tmp2435 = *(&local3);
frost$core$Int* $tmp2436 = &$tmp2435->flags;
frost$core$Int $tmp2437 = *$tmp2436;
frost$core$Int $tmp2438 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:601:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2439 = $tmp2437.value;
int64_t $tmp2440 = $tmp2438.value;
int64_t $tmp2441 = $tmp2439 & $tmp2440;
frost$core$Int $tmp2442 = (frost$core$Int) {$tmp2441};
frost$core$Int $tmp2443 = (frost$core$Int) {0u};
int64_t $tmp2444 = $tmp2442.value;
int64_t $tmp2445 = $tmp2443.value;
bool $tmp2446 = $tmp2444 != $tmp2445;
frost$core$Bit $tmp2447 = (frost$core$Bit) {$tmp2446};
bool $tmp2448 = $tmp2447.value;
if ($tmp2448) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:602
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:602:22
frost$io$File** $tmp2449 = &param0->source;
frost$io$File* $tmp2450 = *$tmp2449;
frost$core$Bit $tmp2451 = (frost$core$Bit) {$tmp2450 != NULL};
bool $tmp2452 = $tmp2451.value;
if ($tmp2452) goto block84; else goto block85;
block85:;
frost$core$Int $tmp2453 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2454, $tmp2453, &$s2455);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp2456 = &param0->compiler;
frost$core$Weak* $tmp2457 = *$tmp2456;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2458 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2457);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block87; else goto block88;
block88:;
frost$core$Int $tmp2460 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2461, $tmp2460);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2462 = &$tmp2457->value;
frost$core$Object* $tmp2463 = *$tmp2462;
frost$core$Frost$ref$frost$core$Object$Q($tmp2463);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2463), param2, &$s2464);
frost$core$Frost$unref$frost$core$Object$Q($tmp2463);
goto block81;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:605
org$frostlang$frostc$Annotations* $tmp2465 = *(&local3);
frost$core$Int* $tmp2466 = &$tmp2465->flags;
frost$core$Int $tmp2467 = *$tmp2466;
frost$core$Int $tmp2468 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:605:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2469 = $tmp2467.value;
int64_t $tmp2470 = $tmp2468.value;
int64_t $tmp2471 = $tmp2469 | $tmp2470;
frost$core$Int $tmp2472 = (frost$core$Int) {$tmp2471};
frost$core$Int* $tmp2473 = &$tmp2465->flags;
*$tmp2473 = $tmp2472;
goto block73;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:607
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2474 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp2475 = *(&local0);
org$frostlang$frostc$Annotations* $tmp2476 = *(&local3);
frost$collections$Array* $tmp2477 = *(&local6);
frost$collections$Array* $tmp2478 = *(&local14);
org$frostlang$frostc$Type* $tmp2479 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2474, param1, param2, $tmp2475, $tmp2476, param5, param6, $tmp2477, $tmp2478, $tmp2479, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
org$frostlang$frostc$Type* $tmp2480 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2481 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2482 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2483 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2484 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2484));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2474;

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
frost$core$Int* $tmp2485 = &param2->$rawValue;
frost$core$Int $tmp2486 = *$tmp2485;
frost$core$Int $tmp2487 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:613:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2488 = $tmp2486.value;
int64_t $tmp2489 = $tmp2487.value;
bool $tmp2490 = $tmp2488 == $tmp2489;
frost$core$Bit $tmp2491 = (frost$core$Bit) {$tmp2490};
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2493 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2494 = *$tmp2493;
*(&local0) = $tmp2494;
org$frostlang$frostc$ASTNode** $tmp2495 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2496 = *$tmp2495;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
org$frostlang$frostc$ASTNode* $tmp2497 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local1) = $tmp2496;
org$frostlang$frostc$FixedArray** $tmp2498 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2499 = *$tmp2498;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlang$frostc$FixedArray* $tmp2500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local2) = $tmp2499;
org$frostlang$frostc$ASTNode** $tmp2501 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2502 = *$tmp2501;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
org$frostlang$frostc$ASTNode* $tmp2503 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
*(&local3) = $tmp2502;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:614
org$frostlang$frostc$Position $tmp2504 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2505 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2506 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2507 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp2504, $tmp2505, $tmp2506, $tmp2507);
org$frostlang$frostc$ASTNode* $tmp2508 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2509 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int $tmp2511 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:616:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2512 = $tmp2486.value;
int64_t $tmp2513 = $tmp2511.value;
bool $tmp2514 = $tmp2512 == $tmp2513;
frost$core$Bit $tmp2515 = (frost$core$Bit) {$tmp2514};
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2517 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2518 = *$tmp2517;
*(&local4) = $tmp2518;
org$frostlang$frostc$ASTNode** $tmp2519 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2520 = *$tmp2519;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
org$frostlang$frostc$ASTNode* $tmp2521 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
*(&local5) = $tmp2520;
org$frostlang$frostc$FixedArray** $tmp2522 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2523 = *$tmp2522;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
org$frostlang$frostc$FixedArray* $tmp2524 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local6) = $tmp2523;
org$frostlang$frostc$MethodDecl$Kind* $tmp2525 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp2526 = *$tmp2525;
*(&local7) = $tmp2526;
frost$core$String** $tmp2527 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2528 = *$tmp2527;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
frost$core$String* $tmp2529 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
*(&local8) = $tmp2528;
org$frostlang$frostc$FixedArray** $tmp2530 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2531 = *$tmp2530;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
org$frostlang$frostc$FixedArray* $tmp2532 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
*(&local9) = $tmp2531;
org$frostlang$frostc$FixedArray** $tmp2533 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2534 = *$tmp2533;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
org$frostlang$frostc$FixedArray* $tmp2535 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local10) = $tmp2534;
org$frostlang$frostc$ASTNode** $tmp2536 = (org$frostlang$frostc$ASTNode**) (param2->$data + 72);
org$frostlang$frostc$ASTNode* $tmp2537 = *$tmp2536;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
org$frostlang$frostc$ASTNode* $tmp2538 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
*(&local11) = $tmp2537;
org$frostlang$frostc$FixedArray** $tmp2539 = (org$frostlang$frostc$FixedArray**) (param2->$data + 80);
org$frostlang$frostc$FixedArray* $tmp2540 = *$tmp2539;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
org$frostlang$frostc$FixedArray* $tmp2541 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
*(&local12) = $tmp2540;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:618
org$frostlang$frostc$Position $tmp2542 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2543 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2544 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp2545 = *(&local7);
frost$core$String* $tmp2546 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2547 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp2548 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2549 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2550 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp2551 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp2542, $tmp2543, $tmp2544, $tmp2545, $tmp2546, $tmp2547, $tmp2548, $tmp2549, $tmp2550);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
org$frostlang$frostc$MethodDecl* $tmp2552 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local13) = $tmp2551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:620
org$frostlang$frostc$MethodDecl* $tmp2553 = *(&local13);
frost$core$Bit $tmp2554 = (frost$core$Bit) {$tmp2553 != NULL};
bool $tmp2555 = $tmp2554.value;
if ($tmp2555) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:621
org$frostlang$frostc$SymbolTable** $tmp2556 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2557 = *$tmp2556;
org$frostlang$frostc$MethodDecl* $tmp2558 = *(&local13);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:621:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2559 = &((org$frostlang$frostc$Symbol*) $tmp2558)->name;
frost$core$String* $tmp2560 = *$tmp2559;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2557, ((org$frostlang$frostc$Symbol*) $tmp2558), $tmp2560);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:622
frost$collections$Array** $tmp2561 = &param1->methods;
frost$collections$Array* $tmp2562 = *$tmp2561;
org$frostlang$frostc$MethodDecl* $tmp2563 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp2562, ((frost$core$Object*) $tmp2563));
goto block9;
block9:;
org$frostlang$frostc$MethodDecl* $tmp2564 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2565 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2566 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2567 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2568 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2569 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2570 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2571 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
frost$core$Int $tmp2572 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:625:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2573 = $tmp2486.value;
int64_t $tmp2574 = $tmp2572.value;
bool $tmp2575 = $tmp2573 == $tmp2574;
frost$core$Bit $tmp2576 = (frost$core$Bit) {$tmp2575};
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp2578 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2579 = *$tmp2578;
*(&local14) = $tmp2579;
org$frostlang$frostc$ASTNode** $tmp2580 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2581 = *$tmp2580;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
org$frostlang$frostc$ASTNode* $tmp2582 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
*(&local15) = $tmp2581;
org$frostlang$frostc$FixedArray** $tmp2583 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2584 = *$tmp2583;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
org$frostlang$frostc$FixedArray* $tmp2585 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local16) = $tmp2584;
org$frostlang$frostc$ClassDecl$Kind* $tmp2586 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp2587 = *$tmp2586;
*(&local17) = $tmp2587;
frost$core$String** $tmp2588 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2589 = *$tmp2588;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
frost$core$String* $tmp2590 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
*(&local18) = $tmp2589;
org$frostlang$frostc$FixedArray** $tmp2591 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2592 = *$tmp2591;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
org$frostlang$frostc$FixedArray* $tmp2593 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
*(&local19) = $tmp2592;
org$frostlang$frostc$FixedArray** $tmp2594 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2595 = *$tmp2594;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
org$frostlang$frostc$FixedArray* $tmp2596 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local20) = $tmp2595;
org$frostlang$frostc$FixedArray** $tmp2597 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2598 = *$tmp2597;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
org$frostlang$frostc$FixedArray* $tmp2599 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
*(&local21) = $tmp2598;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:627
frost$io$File** $tmp2600 = &param1->source;
frost$io$File* $tmp2601 = *$tmp2600;
frost$collections$MapView** $tmp2602 = &param1->aliases;
frost$collections$MapView* $tmp2603 = *$tmp2602;
frost$core$String** $tmp2604 = &param1->name;
frost$core$String* $tmp2605 = *$tmp2604;
org$frostlang$frostc$Position $tmp2606 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2607 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2608 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2609 = *(&local17);
frost$core$String* $tmp2610 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2611 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2612 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2613 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2614 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2601, $tmp2603, $tmp2605, $tmp2606, $tmp2607, $tmp2608, $tmp2609, $tmp2610, $tmp2611, $tmp2612, $tmp2613);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
org$frostlang$frostc$ClassDecl* $tmp2615 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
*(&local22) = $tmp2614;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:629
org$frostlang$frostc$ClassDecl* $tmp2616 = *(&local22);
frost$core$Bit $tmp2617 = (frost$core$Bit) {$tmp2616 != NULL};
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:630
org$frostlang$frostc$ClassDecl* $tmp2619 = *(&local22);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2620 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2620, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
frost$core$Weak** $tmp2621 = &$tmp2619->owner;
frost$core$Weak* $tmp2622 = *$tmp2621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
frost$core$Weak** $tmp2623 = &$tmp2619->owner;
*$tmp2623 = $tmp2620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:631
frost$collections$Array** $tmp2624 = &param1->classes;
frost$collections$Array* $tmp2625 = *$tmp2624;
org$frostlang$frostc$ClassDecl* $tmp2626 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp2625, ((frost$core$Object*) $tmp2626));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:632
org$frostlang$frostc$ClassDecl* $tmp2627 = *(&local22);
frost$core$String** $tmp2628 = &$tmp2627->name;
frost$core$String* $tmp2629 = *$tmp2628;
frost$core$String** $tmp2630 = &param1->name;
frost$core$String* $tmp2631 = *$tmp2630;
frost$core$String* $tmp2632 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2631, &$s2633);
frost$core$Bit $tmp2634 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2629, $tmp2632);
bool $tmp2635 = $tmp2634.value;
if ($tmp2635) goto block16; else goto block17;
block17:;
frost$core$Int $tmp2636 = (frost$core$Int) {632u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2637, $tmp2636);
abort(); // unreachable
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:633
org$frostlang$frostc$SymbolTable** $tmp2638 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2639 = *$tmp2638;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2640 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2641 = *(&local22);
frost$core$String** $tmp2642 = &$tmp2641->name;
frost$core$String* $tmp2643 = *$tmp2642;
frost$core$String** $tmp2644 = &param1->name;
frost$core$String* $tmp2645 = *$tmp2644;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Scanner.frost:633:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2646 = ((frost$collections$Iterable*) $tmp2645)->$class->itable;
while ($tmp2646->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2646 = $tmp2646->next;
}
$fn2648 $tmp2647 = $tmp2646->methods[0];
frost$collections$Iterator* $tmp2649 = $tmp2647(((frost$collections$Iterable*) $tmp2645));
ITable* $tmp2650 = $tmp2649->$class->itable;
while ($tmp2650->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2650 = $tmp2650->next;
}
$fn2652 $tmp2651 = $tmp2650->methods[2];
frost$core$Int $tmp2653 = $tmp2651($tmp2649);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
frost$core$Int $tmp2654 = (frost$core$Int) {1u};
int64_t $tmp2655 = $tmp2653.value;
int64_t $tmp2656 = $tmp2654.value;
int64_t $tmp2657 = $tmp2655 + $tmp2656;
frost$core$Int $tmp2658 = (frost$core$Int) {$tmp2657};
frost$core$Bit $tmp2659 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp2660 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp2658, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp2659);
frost$core$String* $tmp2661 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp2643, $tmp2660);
org$frostlang$frostc$ClassDecl* $tmp2662 = *(&local22);
org$frostlang$frostc$Type** $tmp2663 = &$tmp2662->type;
org$frostlang$frostc$Type* $tmp2664 = *$tmp2663;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2640, $tmp2661, $tmp2664);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:633:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2665 = &((org$frostlang$frostc$Symbol*) $tmp2640)->name;
frost$core$String* $tmp2666 = *$tmp2665;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2639, ((org$frostlang$frostc$Symbol*) $tmp2640), $tmp2666);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:634
org$frostlang$frostc$ClassDecl* $tmp2667 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp2668 = &$tmp2667->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2669 = *$tmp2668;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2670 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
// begin inline call to function org.frostlang.frostc.ClassDecl.simpleName():frost.core.String from Scanner.frost:634:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp2671 = &param1->name;
frost$core$String* $tmp2672 = *$tmp2671;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp2673 = frost$core$String$get_end$R$frost$core$String$Index($tmp2672);
frost$core$String$Index$nullable $tmp2674 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp2672, &$s2675, $tmp2673);
*(&local24) = $tmp2674;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp2676 = *(&local24);
frost$core$Bit $tmp2677 = (frost$core$Bit) {!$tmp2676.nonnull};
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp2679 = &param1->name;
frost$core$String* $tmp2680 = *$tmp2679;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local23) = $tmp2680;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
goto block20;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp2681 = &param1->name;
frost$core$String* $tmp2682 = *$tmp2681;
frost$core$String** $tmp2683 = &param1->name;
frost$core$String* $tmp2684 = *$tmp2683;
frost$core$String$Index$nullable $tmp2685 = *(&local24);
frost$core$String$Index $tmp2686 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2684, ((frost$core$String$Index) $tmp2685.value));
frost$core$Bit $tmp2687 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2688 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2686, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2687);
frost$core$String* $tmp2689 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2682, $tmp2688);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
*(&local23) = $tmp2689;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
goto block20;
block20:;
frost$core$String* $tmp2690 = *(&local23);
org$frostlang$frostc$Type** $tmp2691 = &param1->type;
org$frostlang$frostc$Type* $tmp2692 = *$tmp2691;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2670, $tmp2690, $tmp2692);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:634:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2693 = &((org$frostlang$frostc$Symbol*) $tmp2670)->name;
frost$core$String* $tmp2694 = *$tmp2693;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2669, ((org$frostlang$frostc$Symbol*) $tmp2670), $tmp2694);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
frost$core$String* $tmp2695 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2696 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2697 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2698 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2699 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2700 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2701 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2702 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int $tmp2703 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:637:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2704 = $tmp2486.value;
int64_t $tmp2705 = $tmp2703.value;
bool $tmp2706 = $tmp2704 == $tmp2705;
frost$core$Bit $tmp2707 = (frost$core$Bit) {$tmp2706};
bool $tmp2708 = $tmp2707.value;
if ($tmp2708) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2709 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2710 = *$tmp2709;
*(&local25) = $tmp2710;
org$frostlang$frostc$ASTNode** $tmp2711 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2712 = *$tmp2711;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
org$frostlang$frostc$ASTNode* $tmp2713 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
*(&local26) = $tmp2712;
frost$core$String** $tmp2714 = (frost$core$String**) (param2->$data + 32);
frost$core$String* $tmp2715 = *$tmp2714;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
frost$core$String* $tmp2716 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
*(&local27) = $tmp2715;
org$frostlang$frostc$FixedArray** $tmp2717 = (org$frostlang$frostc$FixedArray**) (param2->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2718 = *$tmp2717;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
org$frostlang$frostc$FixedArray* $tmp2719 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local28) = $tmp2718;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:638
org$frostlang$frostc$Position $tmp2720 = *(&local25);
org$frostlang$frostc$ASTNode* $tmp2721 = *(&local26);
frost$core$String* $tmp2722 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp2723 = *(&local28);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2720, $tmp2721, $tmp2722, $tmp2723);
org$frostlang$frostc$FixedArray* $tmp2724 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2725 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2726 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:641
frost$core$Int $tmp2727 = (frost$core$Int) {641u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:641:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2729 $tmp2728 = ($fn2729) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp2730 = $tmp2728(((frost$core$Object*) param2));
frost$core$String* $tmp2731 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2732, $tmp2730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$String* $tmp2733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2731, &$s2734);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2735, $tmp2727, $tmp2733);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
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
frost$core$Bit $tmp2736 = (frost$core$Bit) {param3 == NULL};
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:654
frost$core$Int* $tmp2739 = &param3->$rawValue;
frost$core$Int $tmp2740 = *$tmp2739;
frost$core$Int $tmp2741 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:655:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2742 = $tmp2740.value;
int64_t $tmp2743 = $tmp2741.value;
bool $tmp2744 = $tmp2742 == $tmp2743;
frost$core$Bit $tmp2745 = (frost$core$Bit) {$tmp2744};
bool $tmp2746 = $tmp2745.value;
if ($tmp2746) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2747 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2748 = *$tmp2747;
*(&local1) = $tmp2748;
frost$core$String** $tmp2749 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2750 = *$tmp2749;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
frost$core$String* $tmp2751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
*(&local2) = $tmp2750;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:656
frost$core$String* $tmp2752 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
frost$core$String* $tmp2753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
*(&local0) = $tmp2752;
frost$core$String* $tmp2754 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2754));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:659
frost$core$Int $tmp2755 = (frost$core$Int) {659u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2756, $tmp2755);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:663
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2757 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2757);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
frost$collections$Array* $tmp2758 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local3) = $tmp2757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:664
ITable* $tmp2759 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2759->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2759 = $tmp2759->next;
}
$fn2761 $tmp2760 = $tmp2759->methods[0];
frost$collections$Iterator* $tmp2762 = $tmp2760(((frost$collections$Iterable*) param5));
goto block8;
block8:;
ITable* $tmp2763 = $tmp2762->$class->itable;
while ($tmp2763->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2763 = $tmp2763->next;
}
$fn2765 $tmp2764 = $tmp2763->methods[0];
frost$core$Bit $tmp2766 = $tmp2764($tmp2762);
bool $tmp2767 = $tmp2766.value;
if ($tmp2767) goto block10; else goto block9;
block9:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2768 = $tmp2762->$class->itable;
while ($tmp2768->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2768 = $tmp2768->next;
}
$fn2770 $tmp2769 = $tmp2768->methods[1];
frost$core$Object* $tmp2771 = $tmp2769($tmp2762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2771)));
org$frostlang$frostc$ASTNode* $tmp2772 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2771);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:665
frost$collections$Array* $tmp2773 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2774 = *(&local4);
org$frostlang$frostc$Type* $tmp2775 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2774);
frost$collections$Array$add$frost$collections$Array$T($tmp2773, ((frost$core$Object*) $tmp2775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
frost$core$Frost$unref$frost$core$Object$Q($tmp2771);
org$frostlang$frostc$ASTNode* $tmp2776 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:667
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ChoiceCase));
org$frostlang$frostc$ChoiceCase* $tmp2777 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2778 = *(&local0);
frost$collections$Array** $tmp2779 = &param1->choiceCases;
frost$collections$Array* $tmp2780 = *$tmp2779;
ITable* $tmp2781 = ((frost$collections$CollectionView*) $tmp2780)->$class->itable;
while ($tmp2781->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2781 = $tmp2781->next;
}
$fn2783 $tmp2782 = $tmp2781->methods[0];
frost$core$Int $tmp2784 = $tmp2782(((frost$collections$CollectionView*) $tmp2780));
frost$collections$Array* $tmp2785 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2777, param1, param2, param4, $tmp2778, $tmp2784, ((frost$collections$ListView*) $tmp2785));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
org$frostlang$frostc$ChoiceCase* $tmp2786 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local5) = $tmp2777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:669
frost$collections$Array** $tmp2787 = &param1->choiceCases;
frost$collections$Array* $tmp2788 = *$tmp2787;
org$frostlang$frostc$ChoiceCase* $tmp2789 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2788, ((frost$core$Object*) $tmp2789));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:670
org$frostlang$frostc$SymbolTable** $tmp2790 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2791 = *$tmp2790;
org$frostlang$frostc$ChoiceCase* $tmp2792 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:670:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2793 = &((org$frostlang$frostc$Symbol*) $tmp2792)->name;
frost$core$String* $tmp2794 = *$tmp2793;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2791, ((org$frostlang$frostc$Symbol*) $tmp2792), $tmp2794);
org$frostlang$frostc$ChoiceCase* $tmp2795 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2796 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
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
org$frostlang$frostc$ClassDecl$Kind local13;
org$frostlang$frostc$ClassDecl$Kind local14;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$ClassDecl* local16 = NULL;
org$frostlang$frostc$ClassDecl$Kind local17;
org$frostlang$frostc$ClassDecl$Kind local18;
org$frostlang$frostc$FieldDecl$Kind local19;
org$frostlang$frostc$FieldDecl$Kind local20;
org$frostlang$frostc$FieldDecl* local21 = NULL;
org$frostlang$frostc$FieldDecl$Kind local22;
org$frostlang$frostc$FieldDecl$Kind local23;
org$frostlang$frostc$FieldDecl* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$Position local26;
org$frostlang$frostc$MethodDecl$Kind local27;
org$frostlang$frostc$MethodDecl$Kind local28;
org$frostlang$frostc$MethodDecl$Kind local29;
frost$core$Bit local30;
frost$core$Bit local31;
org$frostlang$frostc$MethodDecl* local32 = NULL;
org$frostlang$frostc$MethodDecl$Kind local33;
org$frostlang$frostc$MethodDecl$Kind local34;
org$frostlang$frostc$ClassDecl$Kind local35;
org$frostlang$frostc$ClassDecl$Kind local36;
org$frostlang$frostc$ClassDecl$Kind local37;
org$frostlang$frostc$ClassDecl$Kind local38;
org$frostlang$frostc$MethodDecl$Kind local39;
org$frostlang$frostc$MethodDecl$Kind local40;
org$frostlang$frostc$MethodDecl* local41 = NULL;
org$frostlang$frostc$ClassDecl$Kind local42;
org$frostlang$frostc$ClassDecl$Kind local43;
org$frostlang$frostc$ClassDecl$Kind local44;
org$frostlang$frostc$ClassDecl$Kind local45;
org$frostlang$frostc$MethodDecl$Kind local46;
org$frostlang$frostc$MethodDecl$Kind local47;
org$frostlang$frostc$MethodDecl* local48 = NULL;
org$frostlang$frostc$ClassDecl$Kind local49;
org$frostlang$frostc$ClassDecl$Kind local50;
frost$core$Bit local51;
org$frostlang$frostc$ChoiceCase* local52 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:677
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:678
ITable* $tmp2799 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2799->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2799 = $tmp2799->next;
}
$fn2801 $tmp2800 = $tmp2799->methods[1];
frost$core$Bit $tmp2802 = $tmp2800(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2798));
bool $tmp2803 = $tmp2802.value;
if ($tmp2803) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:679
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:679:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp2804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s2805);
frost$core$String* $tmp2806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2804, param8);
frost$core$String* $tmp2807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2806, &$s2808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$String* $tmp2809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local0) = $tmp2807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2810 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local0) = param8;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:684
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:686
frost$core$Bit $tmp2811 = (frost$core$Bit) {param5 == NULL};
bool $tmp2812 = $tmp2811.value;
if ($tmp2812) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2813 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:690
frost$core$Int* $tmp2814 = &param5->$rawValue;
frost$core$Int $tmp2815 = *$tmp2814;
frost$core$Int $tmp2816 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:691:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2817 = $tmp2815.value;
int64_t $tmp2818 = $tmp2816.value;
bool $tmp2819 = $tmp2817 == $tmp2818;
frost$core$Bit $tmp2820 = (frost$core$Bit) {$tmp2819};
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2822 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2823 = *$tmp2822;
*(&local2) = $tmp2823;
frost$core$String** $tmp2824 = (frost$core$String**) (param5->$data + 24);
frost$core$String* $tmp2825 = *$tmp2824;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
frost$core$String* $tmp2826 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local3) = $tmp2825;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:692
frost$core$String* $tmp2827 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$core$String* $tmp2828 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local1) = $tmp2827;
frost$core$String* $tmp2829 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:695
frost$core$Int $tmp2830 = (frost$core$Int) {695u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2831, $tmp2830);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:699
org$frostlang$frostc$Annotations* $tmp2832 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
org$frostlang$frostc$Annotations* $tmp2833 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local4) = $tmp2832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:700
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2834 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2834);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$collections$Array* $tmp2835 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local5) = $tmp2834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:701
frost$core$Bit $tmp2836 = (frost$core$Bit) {param9 != NULL};
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:702
ITable* $tmp2838 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2838->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2838 = $tmp2838->next;
}
$fn2840 $tmp2839 = $tmp2838->methods[0];
frost$collections$Iterator* $tmp2841 = $tmp2839(((frost$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2842 = $tmp2841->$class->itable;
while ($tmp2842->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2842 = $tmp2842->next;
}
$fn2844 $tmp2843 = $tmp2842->methods[0];
frost$core$Bit $tmp2845 = $tmp2843($tmp2841);
bool $tmp2846 = $tmp2845.value;
if ($tmp2846) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2847 = $tmp2841->$class->itable;
while ($tmp2847->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2847 = $tmp2847->next;
}
$fn2849 $tmp2848 = $tmp2847->methods[1];
frost$core$Object* $tmp2850 = $tmp2848($tmp2841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2850)));
org$frostlang$frostc$ASTNode* $tmp2851 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2851));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2850);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:703
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:704
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:705
org$frostlang$frostc$ASTNode* $tmp2852 = *(&local6);
frost$core$Int* $tmp2853 = &$tmp2852->$rawValue;
frost$core$Int $tmp2854 = *$tmp2853;
frost$core$Int $tmp2855 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:706:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2856 = $tmp2854.value;
int64_t $tmp2857 = $tmp2855.value;
bool $tmp2858 = $tmp2856 == $tmp2857;
frost$core$Bit $tmp2859 = (frost$core$Bit) {$tmp2858};
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2861 = (org$frostlang$frostc$Position*) ($tmp2852->$data + 0);
org$frostlang$frostc$Position $tmp2862 = *$tmp2861;
frost$core$String** $tmp2863 = (frost$core$String**) ($tmp2852->$data + 24);
frost$core$String* $tmp2864 = *$tmp2863;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
frost$core$String* $tmp2865 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
*(&local9) = $tmp2864;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:707
frost$core$String* $tmp2866 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
frost$core$String* $tmp2867 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local7) = $tmp2866;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:708
frost$core$Weak** $tmp2868 = &param0->compiler;
frost$core$Weak* $tmp2869 = *$tmp2868;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:708:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2870 = &$tmp2869->_valid;
frost$core$Bit $tmp2871 = *$tmp2870;
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block23; else goto block24;
block24:;
frost$core$Int $tmp2873 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2874, $tmp2873);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2875 = &$tmp2869->value;
frost$core$Object* $tmp2876 = *$tmp2875;
frost$core$Frost$ref$frost$core$Object$Q($tmp2876);
org$frostlang$frostc$Type** $tmp2877 = &((org$frostlang$frostc$Compiler*) $tmp2876)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2878 = *$tmp2877;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
org$frostlang$frostc$Type* $tmp2879 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local8) = $tmp2878;
frost$core$Frost$unref$frost$core$Object$Q($tmp2876);
frost$core$String* $tmp2880 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int $tmp2881 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:710:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2882 = $tmp2854.value;
int64_t $tmp2883 = $tmp2881.value;
bool $tmp2884 = $tmp2882 == $tmp2883;
frost$core$Bit $tmp2885 = (frost$core$Bit) {$tmp2884};
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2887 = (org$frostlang$frostc$Position*) ($tmp2852->$data + 0);
org$frostlang$frostc$Position $tmp2888 = *$tmp2887;
frost$core$String** $tmp2889 = (frost$core$String**) ($tmp2852->$data + 24);
frost$core$String* $tmp2890 = *$tmp2889;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
frost$core$String* $tmp2891 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local10) = $tmp2890;
org$frostlang$frostc$ASTNode** $tmp2892 = (org$frostlang$frostc$ASTNode**) ($tmp2852->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2893 = *$tmp2892;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
org$frostlang$frostc$ASTNode* $tmp2894 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local11) = $tmp2893;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:711
frost$core$String* $tmp2895 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
frost$core$String* $tmp2896 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
*(&local7) = $tmp2895;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:712
org$frostlang$frostc$ASTNode* $tmp2897 = *(&local11);
org$frostlang$frostc$Type* $tmp2898 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
org$frostlang$frostc$Type* $tmp2899 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local8) = $tmp2898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
org$frostlang$frostc$ASTNode* $tmp2900 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2901 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:715
frost$core$Int $tmp2902 = (frost$core$Int) {715u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2903, $tmp2902);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:718
frost$collections$Array* $tmp2904 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$ClassDecl$GenericParameter));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2905 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2906 = *(&local6);
$fn2908 $tmp2907 = ($fn2908) $tmp2906->$class->vtable[2];
org$frostlang$frostc$Position $tmp2909 = $tmp2907($tmp2906);
frost$core$String* $tmp2910 = *(&local0);
frost$core$String* $tmp2911 = *(&local7);
org$frostlang$frostc$Type* $tmp2912 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2905, $tmp2909, $tmp2910, $tmp2911, $tmp2912);
frost$collections$Array$add$frost$collections$Array$T($tmp2904, ((frost$core$Object*) $tmp2905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
org$frostlang$frostc$Type* $tmp2913 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2914 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2850);
org$frostlang$frostc$ASTNode* $tmp2915 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:721
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2916 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2916);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
frost$collections$Array* $tmp2917 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local12) = $tmp2916;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:722
frost$core$Bit $tmp2918 = (frost$core$Bit) {param10 != NULL};
bool $tmp2919 = $tmp2918.value;
if ($tmp2919) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:723
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2920;
$tmp2920 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2920->value = param7;
frost$core$Int $tmp2921 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:723:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp2922 = &(&local14)->$rawValue;
*$tmp2922 = $tmp2921;
org$frostlang$frostc$ClassDecl$Kind $tmp2923 = *(&local14);
*(&local13) = $tmp2923;
org$frostlang$frostc$ClassDecl$Kind $tmp2924 = *(&local13);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2925;
$tmp2925 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2925->value = $tmp2924;
ITable* $tmp2926 = ((frost$core$Equatable*) $tmp2920)->$class->itable;
while ($tmp2926->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2926 = $tmp2926->next;
}
$fn2928 $tmp2927 = $tmp2926->methods[0];
frost$core$Bit $tmp2929 = $tmp2927(((frost$core$Equatable*) $tmp2920), ((frost$core$Equatable*) $tmp2925));
bool $tmp2930 = $tmp2929.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2925)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2920)));
if ($tmp2930) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:724
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:724:22
frost$io$File** $tmp2931 = &param0->source;
frost$io$File* $tmp2932 = *$tmp2931;
frost$core$Bit $tmp2933 = (frost$core$Bit) {$tmp2932 != NULL};
bool $tmp2934 = $tmp2933.value;
if ($tmp2934) goto block34; else goto block35;
block35:;
frost$core$Int $tmp2935 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2936, $tmp2935, &$s2937);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp2938 = &param0->compiler;
frost$core$Weak* $tmp2939 = *$tmp2938;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2940 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2939);
bool $tmp2941 = $tmp2940.value;
if ($tmp2941) goto block37; else goto block38;
block38:;
frost$core$Int $tmp2942 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2943, $tmp2942);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2944 = &$tmp2939->value;
frost$core$Object* $tmp2945 = *$tmp2944;
frost$core$Frost$ref$frost$core$Object$Q($tmp2945);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2945), param4, &$s2946);
frost$core$Frost$unref$frost$core$Object$Q($tmp2945);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:726
ITable* $tmp2947 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2947->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2947 = $tmp2947->next;
}
$fn2949 $tmp2948 = $tmp2947->methods[0];
frost$collections$Iterator* $tmp2950 = $tmp2948(((frost$collections$Iterable*) param10));
goto block39;
block39:;
ITable* $tmp2951 = $tmp2950->$class->itable;
while ($tmp2951->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2951 = $tmp2951->next;
}
$fn2953 $tmp2952 = $tmp2951->methods[0];
frost$core$Bit $tmp2954 = $tmp2952($tmp2950);
bool $tmp2955 = $tmp2954.value;
if ($tmp2955) goto block41; else goto block40;
block40:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2956 = $tmp2950->$class->itable;
while ($tmp2956->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2956 = $tmp2956->next;
}
$fn2958 $tmp2957 = $tmp2956->methods[1];
frost$core$Object* $tmp2959 = $tmp2957($tmp2950);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2959)));
org$frostlang$frostc$ASTNode* $tmp2960 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2959);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:727
frost$collections$Array* $tmp2961 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2962 = *(&local15);
org$frostlang$frostc$Type* $tmp2963 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2962);
frost$collections$Array$add$frost$collections$Array$T($tmp2961, ((frost$core$Object*) $tmp2963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
frost$core$Frost$unref$frost$core$Object$Q($tmp2959);
org$frostlang$frostc$ASTNode* $tmp2964 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:730
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp2965 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2966 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2967 = *(&local4);
frost$core$String* $tmp2968 = *(&local0);
frost$collections$Array* $tmp2969 = *(&local12);
frost$collections$Array* $tmp2970 = *(&local5);
frost$core$Weak** $tmp2971 = &param0->compiler;
frost$core$Weak* $tmp2972 = *$tmp2971;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:731:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2973 = &$tmp2972->_valid;
frost$core$Bit $tmp2974 = *$tmp2973;
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block44; else goto block45;
block45:;
frost$core$Int $tmp2976 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2977, $tmp2976);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2978 = &$tmp2972->value;
frost$core$Object* $tmp2979 = *$tmp2978;
frost$core$Frost$ref$frost$core$Object$Q($tmp2979);
org$frostlang$frostc$SymbolTable** $tmp2980 = &((org$frostlang$frostc$Compiler*) $tmp2979)->root;
org$frostlang$frostc$SymbolTable* $tmp2981 = *$tmp2980;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2965, param1, param4, param2, $tmp2966, $tmp2967, param7, $tmp2968, ((frost$collections$ListView*) $tmp2969), $tmp2970, $tmp2981);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
org$frostlang$frostc$ClassDecl* $tmp2982 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local16) = $tmp2965;
frost$core$Frost$unref$frost$core$Object$Q($tmp2979);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:732
frost$core$Weak** $tmp2983 = &param0->compiler;
frost$core$Weak* $tmp2984 = *$tmp2983;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:732:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2985 = &$tmp2984->_valid;
frost$core$Bit $tmp2986 = *$tmp2985;
bool $tmp2987 = $tmp2986.value;
if ($tmp2987) goto block48; else goto block49;
block49:;
frost$core$Int $tmp2988 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2989, $tmp2988);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2990 = &$tmp2984->value;
frost$core$Object* $tmp2991 = *$tmp2990;
frost$core$Frost$ref$frost$core$Object$Q($tmp2991);
frost$collections$Stack** $tmp2992 = &((org$frostlang$frostc$Compiler*) $tmp2991)->currentClass;
frost$collections$Stack* $tmp2993 = *$tmp2992;
org$frostlang$frostc$ClassDecl* $tmp2994 = *(&local16);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:732:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp2995 = &$tmp2993->contents;
frost$collections$Array* $tmp2996 = *$tmp2995;
frost$collections$Array$add$frost$collections$Array$T($tmp2996, ((frost$core$Object*) $tmp2994));
frost$core$Frost$unref$frost$core$Object$Q($tmp2991);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:733
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2997;
$tmp2997 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2997->value = param7;
frost$core$Int $tmp2998 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:733:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp2999 = &(&local18)->$rawValue;
*$tmp2999 = $tmp2998;
org$frostlang$frostc$ClassDecl$Kind $tmp3000 = *(&local18);
*(&local17) = $tmp3000;
org$frostlang$frostc$ClassDecl$Kind $tmp3001 = *(&local17);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3002;
$tmp3002 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3002->value = $tmp3001;
ITable* $tmp3003 = ((frost$core$Equatable*) $tmp2997)->$class->itable;
while ($tmp3003->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3003 = $tmp3003->next;
}
$fn3005 $tmp3004 = $tmp3003->methods[0];
frost$core$Bit $tmp3006 = $tmp3004(((frost$core$Equatable*) $tmp2997), ((frost$core$Equatable*) $tmp3002));
bool $tmp3007 = $tmp3006.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3002)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2997)));
if ($tmp3007) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:734
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3008 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3009 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3010 = *(&local16);
org$frostlang$frostc$Position* $tmp3011 = &$tmp3010->position;
org$frostlang$frostc$Position $tmp3012 = *$tmp3011;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3013 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3014 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3013, $tmp3014);
frost$core$Int $tmp3015 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:735:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp3016 = &(&local20)->$rawValue;
*$tmp3016 = $tmp3015;
org$frostlang$frostc$FieldDecl$Kind $tmp3017 = *(&local20);
*(&local19) = $tmp3017;
org$frostlang$frostc$FieldDecl$Kind $tmp3018 = *(&local19);
frost$core$Weak** $tmp3019 = &param0->compiler;
frost$core$Weak* $tmp3020 = *$tmp3019;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:736:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3021 = &$tmp3020->_valid;
frost$core$Bit $tmp3022 = *$tmp3021;
bool $tmp3023 = $tmp3022.value;
if ($tmp3023) goto block57; else goto block58;
block58:;
frost$core$Int $tmp3024 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3025, $tmp3024);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3026 = &$tmp3020->value;
frost$core$Object* $tmp3027 = *$tmp3026;
frost$core$Frost$ref$frost$core$Object$Q($tmp3027);
org$frostlang$frostc$Type** $tmp3028 = &((org$frostlang$frostc$Compiler*) $tmp3027)->INT_TYPE;
org$frostlang$frostc$Type* $tmp3029 = *$tmp3028;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3008, $tmp3009, $tmp3012, ((frost$core$String*) NULL), $tmp3013, $tmp3018, &$s3030, $tmp3029, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
org$frostlang$frostc$FieldDecl* $tmp3031 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
*(&local21) = $tmp3008;
frost$core$Frost$unref$frost$core$Object$Q($tmp3027);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:737
org$frostlang$frostc$ClassDecl* $tmp3032 = *(&local16);
frost$collections$Array** $tmp3033 = &$tmp3032->fields;
frost$collections$Array* $tmp3034 = *$tmp3033;
org$frostlang$frostc$FieldDecl* $tmp3035 = *(&local21);
frost$collections$Array$add$frost$collections$Array$T($tmp3034, ((frost$core$Object*) $tmp3035));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:738
org$frostlang$frostc$ClassDecl* $tmp3036 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3037 = &$tmp3036->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3038 = *$tmp3037;
org$frostlang$frostc$FieldDecl* $tmp3039 = *(&local21);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:738:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3040 = &((org$frostlang$frostc$Symbol*) $tmp3039)->name;
frost$core$String* $tmp3041 = *$tmp3040;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3038, ((org$frostlang$frostc$Symbol*) $tmp3039), $tmp3041);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:739
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3042 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3043 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3044 = *(&local16);
org$frostlang$frostc$Position* $tmp3045 = &$tmp3044->position;
org$frostlang$frostc$Position $tmp3046 = *$tmp3045;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3047 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3048 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3047, $tmp3048);
frost$core$Int $tmp3049 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:740:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp3050 = &(&local23)->$rawValue;
*$tmp3050 = $tmp3049;
org$frostlang$frostc$FieldDecl$Kind $tmp3051 = *(&local23);
*(&local22) = $tmp3051;
org$frostlang$frostc$FieldDecl$Kind $tmp3052 = *(&local22);
frost$core$Weak** $tmp3053 = &param0->compiler;
frost$core$Weak* $tmp3054 = *$tmp3053;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:741:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3055 = &$tmp3054->_valid;
frost$core$Bit $tmp3056 = *$tmp3055;
bool $tmp3057 = $tmp3056.value;
if ($tmp3057) goto block63; else goto block64;
block64:;
frost$core$Int $tmp3058 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3059, $tmp3058);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3060 = &$tmp3054->value;
frost$core$Object* $tmp3061 = *$tmp3060;
frost$core$Frost$ref$frost$core$Object$Q($tmp3061);
org$frostlang$frostc$Type** $tmp3062 = &((org$frostlang$frostc$Compiler*) $tmp3061)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp3063 = *$tmp3062;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3042, $tmp3043, $tmp3046, ((frost$core$String*) NULL), $tmp3047, $tmp3052, &$s3064, $tmp3063, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
org$frostlang$frostc$FieldDecl* $tmp3065 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
*(&local24) = $tmp3042;
frost$core$Frost$unref$frost$core$Object$Q($tmp3061);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:742
org$frostlang$frostc$ClassDecl* $tmp3066 = *(&local16);
frost$collections$Array** $tmp3067 = &$tmp3066->fields;
frost$collections$Array* $tmp3068 = *$tmp3067;
org$frostlang$frostc$FieldDecl* $tmp3069 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp3068, ((frost$core$Object*) $tmp3069));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:743
org$frostlang$frostc$ClassDecl* $tmp3070 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3071 = &$tmp3070->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3072 = *$tmp3071;
org$frostlang$frostc$FieldDecl* $tmp3073 = *(&local24);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:743:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3074 = &((org$frostlang$frostc$Symbol*) $tmp3073)->name;
frost$core$String* $tmp3075 = *$tmp3074;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3072, ((org$frostlang$frostc$Symbol*) $tmp3073), $tmp3075);
org$frostlang$frostc$FieldDecl* $tmp3076 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp3077 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:745
ITable* $tmp3078 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp3078->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3078 = $tmp3078->next;
}
$fn3080 $tmp3079 = $tmp3078->methods[0];
frost$collections$Iterator* $tmp3081 = $tmp3079(((frost$collections$Iterable*) param11));
goto block66;
block66:;
ITable* $tmp3082 = $tmp3081->$class->itable;
while ($tmp3082->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3082 = $tmp3082->next;
}
$fn3084 $tmp3083 = $tmp3082->methods[0];
frost$core$Bit $tmp3085 = $tmp3083($tmp3081);
bool $tmp3086 = $tmp3085.value;
if ($tmp3086) goto block68; else goto block67;
block67:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3087 = $tmp3081->$class->itable;
while ($tmp3087->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3087 = $tmp3087->next;
}
$fn3089 $tmp3088 = $tmp3087->methods[1];
frost$core$Object* $tmp3090 = $tmp3088($tmp3081);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3090)));
org$frostlang$frostc$ASTNode* $tmp3091 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp3090);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:746
org$frostlang$frostc$ASTNode* $tmp3092 = *(&local25);
frost$core$Int* $tmp3093 = &$tmp3092->$rawValue;
frost$core$Int $tmp3094 = *$tmp3093;
frost$core$Int $tmp3095 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:747:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3096 = $tmp3094.value;
int64_t $tmp3097 = $tmp3095.value;
bool $tmp3098 = $tmp3096 == $tmp3097;
frost$core$Bit $tmp3099 = (frost$core$Bit) {$tmp3098};
bool $tmp3100 = $tmp3099.value;
if ($tmp3100) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp3101 = (org$frostlang$frostc$Position*) ($tmp3092->$data + 0);
org$frostlang$frostc$Position $tmp3102 = *$tmp3101;
*(&local26) = $tmp3102;
org$frostlang$frostc$ASTNode** $tmp3103 = (org$frostlang$frostc$ASTNode**) ($tmp3092->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3104 = *$tmp3103;
org$frostlang$frostc$FixedArray** $tmp3105 = (org$frostlang$frostc$FixedArray**) ($tmp3092->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3106 = *$tmp3105;
org$frostlang$frostc$MethodDecl$Kind* $tmp3107 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3092->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3108 = *$tmp3107;
*(&local27) = $tmp3108;
frost$core$String** $tmp3109 = (frost$core$String**) ($tmp3092->$data + 48);
frost$core$String* $tmp3110 = *$tmp3109;
org$frostlang$frostc$FixedArray** $tmp3111 = (org$frostlang$frostc$FixedArray**) ($tmp3092->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3112 = *$tmp3111;
org$frostlang$frostc$FixedArray** $tmp3113 = (org$frostlang$frostc$FixedArray**) ($tmp3092->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3114 = *$tmp3113;
org$frostlang$frostc$ASTNode** $tmp3115 = (org$frostlang$frostc$ASTNode**) ($tmp3092->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3116 = *$tmp3115;
org$frostlang$frostc$FixedArray** $tmp3117 = (org$frostlang$frostc$FixedArray**) ($tmp3092->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3118 = *$tmp3117;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:748
org$frostlang$frostc$MethodDecl$Kind $tmp3119 = *(&local27);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3120;
$tmp3120 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3120->value = $tmp3119;
frost$core$Int $tmp3121 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:748:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3122 = &(&local29)->$rawValue;
*$tmp3122 = $tmp3121;
org$frostlang$frostc$MethodDecl$Kind $tmp3123 = *(&local29);
*(&local28) = $tmp3123;
org$frostlang$frostc$MethodDecl$Kind $tmp3124 = *(&local28);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3125;
$tmp3125 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3125->value = $tmp3124;
ITable* $tmp3126 = ((frost$core$Equatable*) $tmp3120)->$class->itable;
while ($tmp3126->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3126 = $tmp3126->next;
}
$fn3128 $tmp3127 = $tmp3126->methods[0];
frost$core$Bit $tmp3129 = $tmp3127(((frost$core$Equatable*) $tmp3120), ((frost$core$Equatable*) $tmp3125));
bool $tmp3130 = $tmp3129.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3125)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3120)));
if ($tmp3130) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:749
frost$core$Int $tmp3131 = param7.$rawValue;
frost$core$Int $tmp3132 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:750:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3133 = $tmp3131.value;
int64_t $tmp3134 = $tmp3132.value;
bool $tmp3135 = $tmp3133 == $tmp3134;
frost$core$Bit $tmp3136 = (frost$core$Bit) {$tmp3135};
bool $tmp3137 = $tmp3136.value;
if ($tmp3137) goto block77; else goto block78;
block77:;
goto block76;
block78:;
frost$core$Int $tmp3138 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:753:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3139 = $tmp3131.value;
int64_t $tmp3140 = $tmp3138.value;
bool $tmp3141 = $tmp3139 == $tmp3140;
frost$core$Bit $tmp3142 = (frost$core$Bit) {$tmp3141};
bool $tmp3143 = $tmp3142.value;
if ($tmp3143) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:754
org$frostlang$frostc$Position $tmp3144 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:754:38
frost$io$File** $tmp3145 = &param0->source;
frost$io$File* $tmp3146 = *$tmp3145;
frost$core$Bit $tmp3147 = (frost$core$Bit) {$tmp3146 != NULL};
bool $tmp3148 = $tmp3147.value;
if ($tmp3148) goto block84; else goto block85;
block85:;
frost$core$Int $tmp3149 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3150, $tmp3149, &$s3151);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3152 = &param0->compiler;
frost$core$Weak* $tmp3153 = *$tmp3152;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3154 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3153);
bool $tmp3155 = $tmp3154.value;
if ($tmp3155) goto block87; else goto block88;
block88:;
frost$core$Int $tmp3156 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3157, $tmp3156);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3158 = &$tmp3153->value;
frost$core$Object* $tmp3159 = *$tmp3158;
frost$core$Frost$ref$frost$core$Object$Q($tmp3159);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3159), $tmp3144, &$s3160);
frost$core$Frost$unref$frost$core$Object$Q($tmp3159);
goto block76;
block81:;
frost$core$Int $tmp3161 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:756:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3162 = $tmp3131.value;
int64_t $tmp3163 = $tmp3161.value;
bool $tmp3164 = $tmp3162 == $tmp3163;
frost$core$Bit $tmp3165 = (frost$core$Bit) {$tmp3164};
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block89; else goto block76;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:757
org$frostlang$frostc$Position $tmp3167 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:757:38
frost$io$File** $tmp3168 = &param0->source;
frost$io$File* $tmp3169 = *$tmp3168;
frost$core$Bit $tmp3170 = (frost$core$Bit) {$tmp3169 != NULL};
bool $tmp3171 = $tmp3170.value;
if ($tmp3171) goto block92; else goto block93;
block93:;
frost$core$Int $tmp3172 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3173, $tmp3172, &$s3174);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3175 = &param0->compiler;
frost$core$Weak* $tmp3176 = *$tmp3175;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3177 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3176);
bool $tmp3178 = $tmp3177.value;
if ($tmp3178) goto block95; else goto block96;
block96:;
frost$core$Int $tmp3179 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3180, $tmp3179);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3181 = &$tmp3176->value;
frost$core$Object* $tmp3182 = *$tmp3181;
frost$core$Frost$ref$frost$core$Object$Q($tmp3182);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3182), $tmp3167, &$s3183);
frost$core$Frost$unref$frost$core$Object$Q($tmp3182);
goto block76;
block76:;
goto block74;
block74:;
goto block69;
block71:;
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:766
org$frostlang$frostc$ClassDecl* $tmp3184 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp3185 = *(&local25);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp3184, $tmp3185);
frost$core$Frost$unref$frost$core$Object$Q($tmp3090);
org$frostlang$frostc$ASTNode* $tmp3186 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:768
frost$core$Bit $tmp3187 = (frost$core$Bit) {false};
*(&local30) = $tmp3187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:769
frost$core$Bit $tmp3188 = (frost$core$Bit) {false};
*(&local31) = $tmp3188;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:770
org$frostlang$frostc$ClassDecl* $tmp3189 = *(&local16);
frost$collections$Array** $tmp3190 = &$tmp3189->methods;
frost$collections$Array* $tmp3191 = *$tmp3190;
ITable* $tmp3192 = ((frost$collections$Iterable*) $tmp3191)->$class->itable;
while ($tmp3192->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3192 = $tmp3192->next;
}
$fn3194 $tmp3193 = $tmp3192->methods[0];
frost$collections$Iterator* $tmp3195 = $tmp3193(((frost$collections$Iterable*) $tmp3191));
goto block97;
block97:;
ITable* $tmp3196 = $tmp3195->$class->itable;
while ($tmp3196->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3196 = $tmp3196->next;
}
$fn3198 $tmp3197 = $tmp3196->methods[0];
frost$core$Bit $tmp3199 = $tmp3197($tmp3195);
bool $tmp3200 = $tmp3199.value;
if ($tmp3200) goto block99; else goto block98;
block98:;
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp3201 = $tmp3195->$class->itable;
while ($tmp3201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3201 = $tmp3201->next;
}
$fn3203 $tmp3202 = $tmp3201->methods[1];
frost$core$Object* $tmp3204 = $tmp3202($tmp3195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp3204)));
org$frostlang$frostc$MethodDecl* $tmp3205 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) $tmp3204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:771
org$frostlang$frostc$MethodDecl* $tmp3206 = *(&local32);
org$frostlang$frostc$MethodDecl$Kind* $tmp3207 = &$tmp3206->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3208 = *$tmp3207;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3209;
$tmp3209 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3209->value = $tmp3208;
frost$core$Int $tmp3210 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:771:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3211 = &(&local34)->$rawValue;
*$tmp3211 = $tmp3210;
org$frostlang$frostc$MethodDecl$Kind $tmp3212 = *(&local34);
*(&local33) = $tmp3212;
org$frostlang$frostc$MethodDecl$Kind $tmp3213 = *(&local33);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3214;
$tmp3214 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3214->value = $tmp3213;
ITable* $tmp3215 = ((frost$core$Equatable*) $tmp3209)->$class->itable;
while ($tmp3215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3215 = $tmp3215->next;
}
$fn3217 $tmp3216 = $tmp3215->methods[0];
frost$core$Bit $tmp3218 = $tmp3216(((frost$core$Equatable*) $tmp3209), ((frost$core$Equatable*) $tmp3214));
bool $tmp3219 = $tmp3218.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3209)));
if ($tmp3219) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:772
frost$core$Bit $tmp3220 = (frost$core$Bit) {true};
*(&local30) = $tmp3220;
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:774
org$frostlang$frostc$MethodDecl* $tmp3221 = *(&local32);
frost$core$String** $tmp3222 = &((org$frostlang$frostc$Symbol*) $tmp3221)->name;
frost$core$String* $tmp3223 = *$tmp3222;
frost$core$Bit $tmp3224 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3223, &$s3225);
bool $tmp3226 = $tmp3224.value;
if ($tmp3226) goto block105; else goto block104;
block105:;
org$frostlang$frostc$MethodDecl* $tmp3227 = *(&local32);
frost$collections$Array** $tmp3228 = &$tmp3227->parameters;
frost$collections$Array* $tmp3229 = *$tmp3228;
ITable* $tmp3230 = ((frost$collections$CollectionView*) $tmp3229)->$class->itable;
while ($tmp3230->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3230 = $tmp3230->next;
}
$fn3232 $tmp3231 = $tmp3230->methods[0];
frost$core$Int $tmp3233 = $tmp3231(((frost$collections$CollectionView*) $tmp3229));
frost$core$Int $tmp3234 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:774:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3235 = $tmp3233.value;
int64_t $tmp3236 = $tmp3234.value;
bool $tmp3237 = $tmp3235 == $tmp3236;
frost$core$Bit $tmp3238 = (frost$core$Bit) {$tmp3237};
bool $tmp3239 = $tmp3238.value;
if ($tmp3239) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:775
frost$core$Bit $tmp3240 = (frost$core$Bit) {true};
*(&local31) = $tmp3240;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:776
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3241;
$tmp3241 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3241->value = param7;
frost$core$Int $tmp3242 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:776:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3243 = &(&local36)->$rawValue;
*$tmp3243 = $tmp3242;
org$frostlang$frostc$ClassDecl$Kind $tmp3244 = *(&local36);
*(&local35) = $tmp3244;
org$frostlang$frostc$ClassDecl$Kind $tmp3245 = *(&local35);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3246;
$tmp3246 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3246->value = $tmp3245;
ITable* $tmp3247 = ((frost$core$Equatable*) $tmp3241)->$class->itable;
while ($tmp3247->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3247 = $tmp3247->next;
}
$fn3249 $tmp3248 = $tmp3247->methods[0];
frost$core$Bit $tmp3250 = $tmp3248(((frost$core$Equatable*) $tmp3241), ((frost$core$Equatable*) $tmp3246));
bool $tmp3251 = $tmp3250.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3246)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3241)));
if ($tmp3251) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:777
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:777:26
frost$io$File** $tmp3252 = &param0->source;
frost$io$File* $tmp3253 = *$tmp3252;
frost$core$Bit $tmp3254 = (frost$core$Bit) {$tmp3253 != NULL};
bool $tmp3255 = $tmp3254.value;
if ($tmp3255) goto block111; else goto block112;
block112:;
frost$core$Int $tmp3256 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3257, $tmp3256, &$s3258);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3259 = &param0->compiler;
frost$core$Weak* $tmp3260 = *$tmp3259;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3261 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3260);
bool $tmp3262 = $tmp3261.value;
if ($tmp3262) goto block114; else goto block115;
block115:;
frost$core$Int $tmp3263 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3264, $tmp3263);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3265 = &$tmp3260->value;
frost$core$Object* $tmp3266 = *$tmp3265;
frost$core$Frost$ref$frost$core$Object$Q($tmp3266);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3266), param4, &$s3267);
frost$core$Frost$unref$frost$core$Object$Q($tmp3266);
goto block108;
block108:;
goto block104;
block104:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3204);
org$frostlang$frostc$MethodDecl* $tmp3268 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3268));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:781
frost$core$Bit $tmp3269 = *(&local30);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:781:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3270 = $tmp3269.value;
bool $tmp3271 = !$tmp3270;
frost$core$Bit $tmp3272 = (frost$core$Bit) {$tmp3271};
bool $tmp3273 = $tmp3272.value;
if ($tmp3273) goto block119; else goto block117;
block119:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3274;
$tmp3274 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3274->value = param7;
frost$core$Int $tmp3275 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:781:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3276 = &(&local38)->$rawValue;
*$tmp3276 = $tmp3275;
org$frostlang$frostc$ClassDecl$Kind $tmp3277 = *(&local38);
*(&local37) = $tmp3277;
org$frostlang$frostc$ClassDecl$Kind $tmp3278 = *(&local37);
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
if ($tmp3284) goto block118; else goto block117;
block118:;
org$frostlang$frostc$ClassDecl* $tmp3285 = *(&local16);
frost$core$String** $tmp3286 = &$tmp3285->name;
frost$core$String* $tmp3287 = *$tmp3286;
ITable* $tmp3289 = ((frost$core$Equatable*) $tmp3287)->$class->itable;
while ($tmp3289->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3289 = $tmp3289->next;
}
$fn3291 $tmp3290 = $tmp3289->methods[1];
frost$core$Bit $tmp3292 = $tmp3290(((frost$core$Equatable*) $tmp3287), ((frost$core$Equatable*) &$s3288));
bool $tmp3293 = $tmp3292.value;
if ($tmp3293) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:782
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3294 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3295 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3296 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3297 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3296, $tmp3297);
frost$core$Int $tmp3298 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:783:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3299 = &(&local40)->$rawValue;
*$tmp3299 = $tmp3298;
org$frostlang$frostc$MethodDecl$Kind $tmp3300 = *(&local40);
*(&local39) = $tmp3300;
org$frostlang$frostc$MethodDecl$Kind $tmp3301 = *(&local39);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3302 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3303 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3302, $tmp3303);
frost$core$Weak** $tmp3304 = &param0->compiler;
frost$core$Weak* $tmp3305 = *$tmp3304;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:784:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3306 = &$tmp3305->_valid;
frost$core$Bit $tmp3307 = *$tmp3306;
bool $tmp3308 = $tmp3307.value;
if ($tmp3308) goto block125; else goto block126;
block126:;
frost$core$Int $tmp3309 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3310, $tmp3309);
abort(); // unreachable
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3311 = &$tmp3305->value;
frost$core$Object* $tmp3312 = *$tmp3311;
frost$core$Frost$ref$frost$core$Object$Q($tmp3312);
org$frostlang$frostc$Type** $tmp3313 = &((org$frostlang$frostc$Compiler*) $tmp3312)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3314 = *$tmp3313;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3315 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3315);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3294, $tmp3295, param4, ((frost$core$String*) NULL), $tmp3296, $tmp3301, &$s3316, ((frost$collections$Array*) NULL), $tmp3302, $tmp3314, $tmp3315);
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
org$frostlang$frostc$MethodDecl* $tmp3317 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
*(&local41) = $tmp3294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
frost$core$Frost$unref$frost$core$Object$Q($tmp3312);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3294));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:785
org$frostlang$frostc$ClassDecl* $tmp3318 = *(&local16);
frost$collections$Array** $tmp3319 = &$tmp3318->methods;
frost$collections$Array* $tmp3320 = *$tmp3319;
org$frostlang$frostc$MethodDecl* $tmp3321 = *(&local41);
frost$collections$Array$add$frost$collections$Array$T($tmp3320, ((frost$core$Object*) $tmp3321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:786
org$frostlang$frostc$ClassDecl* $tmp3322 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3323 = &$tmp3322->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3324 = *$tmp3323;
org$frostlang$frostc$MethodDecl* $tmp3325 = *(&local41);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:786:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3326 = &((org$frostlang$frostc$Symbol*) $tmp3325)->name;
frost$core$String* $tmp3327 = *$tmp3326;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3324, ((org$frostlang$frostc$Symbol*) $tmp3325), $tmp3327);
org$frostlang$frostc$MethodDecl* $tmp3328 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block117;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:788
frost$core$Bit $tmp3329 = *(&local31);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:788:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3330 = $tmp3329.value;
bool $tmp3331 = !$tmp3330;
frost$core$Bit $tmp3332 = (frost$core$Bit) {$tmp3331};
bool $tmp3333 = $tmp3332.value;
if ($tmp3333) goto block131; else goto block129;
block131:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3334;
$tmp3334 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3334->value = param7;
frost$core$Int $tmp3335 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:788:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3336 = &(&local43)->$rawValue;
*$tmp3336 = $tmp3335;
org$frostlang$frostc$ClassDecl$Kind $tmp3337 = *(&local43);
*(&local42) = $tmp3337;
org$frostlang$frostc$ClassDecl$Kind $tmp3338 = *(&local42);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3339;
$tmp3339 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3339->value = $tmp3338;
ITable* $tmp3340 = ((frost$core$Equatable*) $tmp3334)->$class->itable;
while ($tmp3340->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3340 = $tmp3340->next;
}
$fn3342 $tmp3341 = $tmp3340->methods[0];
frost$core$Bit $tmp3343 = $tmp3341(((frost$core$Equatable*) $tmp3334), ((frost$core$Equatable*) $tmp3339));
bool $tmp3344 = $tmp3343.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3339)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3334)));
if ($tmp3344) goto block130; else goto block133;
block133:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3345;
$tmp3345 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3345->value = param7;
frost$core$Int $tmp3346 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:788:80
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3347 = &(&local45)->$rawValue;
*$tmp3347 = $tmp3346;
org$frostlang$frostc$ClassDecl$Kind $tmp3348 = *(&local45);
*(&local44) = $tmp3348;
org$frostlang$frostc$ClassDecl$Kind $tmp3349 = *(&local44);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3350;
$tmp3350 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3350->value = $tmp3349;
ITable* $tmp3351 = ((frost$core$Equatable*) $tmp3345)->$class->itable;
while ($tmp3351->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3351 = $tmp3351->next;
}
$fn3353 $tmp3352 = $tmp3351->methods[0];
frost$core$Bit $tmp3354 = $tmp3352(((frost$core$Equatable*) $tmp3345), ((frost$core$Equatable*) $tmp3350));
bool $tmp3355 = $tmp3354.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3350)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3345)));
if ($tmp3355) goto block130; else goto block129;
block130:;
org$frostlang$frostc$ClassDecl* $tmp3356 = *(&local16);
frost$core$String** $tmp3357 = &$tmp3356->name;
frost$core$String* $tmp3358 = *$tmp3357;
ITable* $tmp3360 = ((frost$core$Equatable*) $tmp3358)->$class->itable;
while ($tmp3360->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3360 = $tmp3360->next;
}
$fn3362 $tmp3361 = $tmp3360->methods[1];
frost$core$Bit $tmp3363 = $tmp3361(((frost$core$Equatable*) $tmp3358), ((frost$core$Equatable*) &$s3359));
bool $tmp3364 = $tmp3363.value;
if ($tmp3364) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:790
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3365 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3366 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3367 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3368 = (frost$core$Int) {32u};
frost$core$Int $tmp3369 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:791:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp3370 = $tmp3368.value;
int64_t $tmp3371 = $tmp3369.value;
int64_t $tmp3372 = $tmp3370 | $tmp3371;
frost$core$Int $tmp3373 = (frost$core$Int) {$tmp3372};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3367, $tmp3373);
frost$core$Int $tmp3374 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:792:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3375 = &(&local47)->$rawValue;
*$tmp3375 = $tmp3374;
org$frostlang$frostc$MethodDecl$Kind $tmp3376 = *(&local47);
*(&local46) = $tmp3376;
org$frostlang$frostc$MethodDecl$Kind $tmp3377 = *(&local46);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3378 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3379 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3378, $tmp3379);
frost$core$Weak** $tmp3380 = &param0->compiler;
frost$core$Weak* $tmp3381 = *$tmp3380;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:792:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3382 = &$tmp3381->_valid;
frost$core$Bit $tmp3383 = *$tmp3382;
bool $tmp3384 = $tmp3383.value;
if ($tmp3384) goto block140; else goto block141;
block141:;
frost$core$Int $tmp3385 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3386, $tmp3385);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3387 = &$tmp3381->value;
frost$core$Object* $tmp3388 = *$tmp3387;
frost$core$Frost$ref$frost$core$Object$Q($tmp3388);
org$frostlang$frostc$Type** $tmp3389 = &((org$frostlang$frostc$Compiler*) $tmp3388)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3390 = *$tmp3389;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3391 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3391);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3365, $tmp3366, param4, ((frost$core$String*) NULL), $tmp3367, $tmp3377, &$s3392, ((frost$collections$Array*) NULL), $tmp3378, $tmp3390, $tmp3391);
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
org$frostlang$frostc$MethodDecl* $tmp3393 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3393));
*(&local48) = $tmp3365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
frost$core$Frost$unref$frost$core$Object$Q($tmp3388);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3365));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:794
org$frostlang$frostc$ClassDecl* $tmp3394 = *(&local16);
frost$collections$Array** $tmp3395 = &$tmp3394->methods;
frost$collections$Array* $tmp3396 = *$tmp3395;
org$frostlang$frostc$MethodDecl* $tmp3397 = *(&local48);
frost$collections$Array$add$frost$collections$Array$T($tmp3396, ((frost$core$Object*) $tmp3397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:795
org$frostlang$frostc$ClassDecl* $tmp3398 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3399 = &$tmp3398->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3400 = *$tmp3399;
org$frostlang$frostc$MethodDecl* $tmp3401 = *(&local48);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:795:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3402 = &((org$frostlang$frostc$Symbol*) $tmp3401)->name;
frost$core$String* $tmp3403 = *$tmp3402;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3400, ((org$frostlang$frostc$Symbol*) $tmp3401), $tmp3403);
org$frostlang$frostc$MethodDecl* $tmp3404 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3404));
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block129;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:797
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3405;
$tmp3405 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3405->value = param7;
frost$core$Int $tmp3406 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:797:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3407 = &(&local50)->$rawValue;
*$tmp3407 = $tmp3406;
org$frostlang$frostc$ClassDecl$Kind $tmp3408 = *(&local50);
*(&local49) = $tmp3408;
org$frostlang$frostc$ClassDecl$Kind $tmp3409 = *(&local49);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3410;
$tmp3410 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3410->value = $tmp3409;
ITable* $tmp3411 = ((frost$core$Equatable*) $tmp3405)->$class->itable;
while ($tmp3411->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3411 = $tmp3411->next;
}
$fn3413 $tmp3412 = $tmp3411->methods[0];
frost$core$Bit $tmp3414 = $tmp3412(((frost$core$Equatable*) $tmp3405), ((frost$core$Equatable*) $tmp3410));
bool $tmp3415 = $tmp3414.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3410)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3405)));
if ($tmp3415) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:798
frost$core$Bit $tmp3416 = (frost$core$Bit) {false};
*(&local51) = $tmp3416;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:799
org$frostlang$frostc$ClassDecl* $tmp3417 = *(&local16);
frost$collections$Array** $tmp3418 = &$tmp3417->choiceCases;
frost$collections$Array* $tmp3419 = *$tmp3418;
ITable* $tmp3420 = ((frost$collections$CollectionView*) $tmp3419)->$class->itable;
while ($tmp3420->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3420 = $tmp3420->next;
}
$fn3422 $tmp3421 = $tmp3420->methods[0];
frost$core$Int $tmp3423 = $tmp3421(((frost$collections$CollectionView*) $tmp3419));
frost$core$Int $tmp3424 = (frost$core$Int) {0u};
int64_t $tmp3425 = $tmp3423.value;
int64_t $tmp3426 = $tmp3424.value;
bool $tmp3427 = $tmp3425 > $tmp3426;
frost$core$Bit $tmp3428 = (frost$core$Bit) {$tmp3427};
bool $tmp3429 = $tmp3428.value;
if ($tmp3429) goto block146; else goto block148;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:800
org$frostlang$frostc$ClassDecl* $tmp3430 = *(&local16);
frost$collections$Array** $tmp3431 = &$tmp3430->choiceCases;
frost$collections$Array* $tmp3432 = *$tmp3431;
ITable* $tmp3433 = ((frost$collections$Iterable*) $tmp3432)->$class->itable;
while ($tmp3433->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3433 = $tmp3433->next;
}
$fn3435 $tmp3434 = $tmp3433->methods[0];
frost$collections$Iterator* $tmp3436 = $tmp3434(((frost$collections$Iterable*) $tmp3432));
goto block149;
block149:;
ITable* $tmp3437 = $tmp3436->$class->itable;
while ($tmp3437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3437 = $tmp3437->next;
}
$fn3439 $tmp3438 = $tmp3437->methods[0];
frost$core$Bit $tmp3440 = $tmp3438($tmp3436);
bool $tmp3441 = $tmp3440.value;
if ($tmp3441) goto block151; else goto block150;
block150:;
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp3442 = $tmp3436->$class->itable;
while ($tmp3442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3442 = $tmp3442->next;
}
$fn3444 $tmp3443 = $tmp3442->methods[1];
frost$core$Object* $tmp3445 = $tmp3443($tmp3436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp3445)));
org$frostlang$frostc$ChoiceCase* $tmp3446 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) $tmp3445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:801
org$frostlang$frostc$ChoiceCase* $tmp3447 = *(&local52);
frost$collections$Array** $tmp3448 = &$tmp3447->fields;
frost$collections$Array* $tmp3449 = *$tmp3448;
ITable* $tmp3450 = ((frost$collections$CollectionView*) $tmp3449)->$class->itable;
while ($tmp3450->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3450 = $tmp3450->next;
}
$fn3452 $tmp3451 = $tmp3450->methods[0];
frost$core$Int $tmp3453 = $tmp3451(((frost$collections$CollectionView*) $tmp3449));
frost$core$Int $tmp3454 = (frost$core$Int) {0u};
int64_t $tmp3455 = $tmp3453.value;
int64_t $tmp3456 = $tmp3454.value;
bool $tmp3457 = $tmp3455 > $tmp3456;
frost$core$Bit $tmp3458 = (frost$core$Bit) {$tmp3457};
bool $tmp3459 = $tmp3458.value;
if ($tmp3459) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:802
frost$core$Bit $tmp3460 = (frost$core$Bit) {true};
*(&local51) = $tmp3460;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:803
frost$core$Frost$unref$frost$core$Object$Q($tmp3445);
org$frostlang$frostc$ChoiceCase* $tmp3461 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3445);
org$frostlang$frostc$ChoiceCase* $tmp3462 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block149;
block151:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:811
frost$core$Bit $tmp3463 = *(&local51);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:811:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3464 = $tmp3463.value;
bool $tmp3465 = !$tmp3464;
frost$core$Bit $tmp3466 = (frost$core$Bit) {$tmp3465};
bool $tmp3467 = $tmp3466.value;
if ($tmp3467) goto block160; else goto block161;
block148:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:808
org$frostlang$frostc$ClassDecl* $tmp3468 = *(&local16);
org$frostlang$frostc$Position* $tmp3469 = &$tmp3468->position;
org$frostlang$frostc$Position $tmp3470 = *$tmp3469;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:808:22
frost$io$File** $tmp3471 = &param0->source;
frost$io$File* $tmp3472 = *$tmp3471;
frost$core$Bit $tmp3473 = (frost$core$Bit) {$tmp3472 != NULL};
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block155; else goto block156;
block156:;
frost$core$Int $tmp3475 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3476, $tmp3475, &$s3477);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3478 = &param0->compiler;
frost$core$Weak* $tmp3479 = *$tmp3478;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3480 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3479);
bool $tmp3481 = $tmp3480.value;
if ($tmp3481) goto block158; else goto block159;
block159:;
frost$core$Int $tmp3482 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3483, $tmp3482);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3484 = &$tmp3479->value;
frost$core$Object* $tmp3485 = *$tmp3484;
frost$core$Frost$ref$frost$core$Object$Q($tmp3485);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3485), $tmp3470, &$s3486);
frost$core$Frost$unref$frost$core$Object$Q($tmp3485);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:809
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3487 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3488 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3489 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3490 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:812
org$frostlang$frostc$ClassDecl* $tmp3493 = *(&local16);
frost$core$Weak** $tmp3494 = &param0->compiler;
frost$core$Weak* $tmp3495 = *$tmp3494;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:812:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3496 = &$tmp3495->_valid;
frost$core$Bit $tmp3497 = *$tmp3496;
bool $tmp3498 = $tmp3497.value;
if ($tmp3498) goto block165; else goto block166;
block166:;
frost$core$Int $tmp3499 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3500, $tmp3499);
abort(); // unreachable
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3501 = &$tmp3495->value;
frost$core$Object* $tmp3502 = *$tmp3501;
frost$core$Frost$ref$frost$core$Object$Q($tmp3502);
org$frostlang$frostc$Type** $tmp3503 = &((org$frostlang$frostc$Compiler*) $tmp3502)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp3504 = *$tmp3503;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3504));
org$frostlang$frostc$Type** $tmp3505 = &$tmp3493->rawSuper;
org$frostlang$frostc$Type* $tmp3506 = *$tmp3505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
org$frostlang$frostc$Type** $tmp3507 = &$tmp3493->rawSuper;
*$tmp3507 = $tmp3504;
frost$core$Frost$unref$frost$core$Object$Q($tmp3502);
goto block161;
block161:;
goto block144;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:815
frost$core$Weak** $tmp3508 = &param0->compiler;
frost$core$Weak* $tmp3509 = *$tmp3508;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:815:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3510 = &$tmp3509->_valid;
frost$core$Bit $tmp3511 = *$tmp3510;
bool $tmp3512 = $tmp3511.value;
if ($tmp3512) goto block169; else goto block170;
block170:;
frost$core$Int $tmp3513 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3514, $tmp3513);
abort(); // unreachable
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3515 = &$tmp3509->value;
frost$core$Object* $tmp3516 = *$tmp3515;
frost$core$Frost$ref$frost$core$Object$Q($tmp3516);
frost$collections$Stack** $tmp3517 = &((org$frostlang$frostc$Compiler*) $tmp3516)->currentClass;
frost$collections$Stack* $tmp3518 = *$tmp3517;
frost$core$Object* $tmp3519 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3518);
frost$core$Frost$unref$frost$core$Object$Q($tmp3519);
frost$core$Frost$unref$frost$core$Object$Q($tmp3516);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:816
org$frostlang$frostc$ClassDecl* $tmp3520 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
org$frostlang$frostc$ClassDecl* $tmp3521 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3522 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3523 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3524 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3526 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3520;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3527 = &param1->classes;
frost$collections$Array* $tmp3528 = *$tmp3527;
ITable* $tmp3529 = ((frost$collections$Iterable*) $tmp3528)->$class->itable;
while ($tmp3529->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3529 = $tmp3529->next;
}
$fn3531 $tmp3530 = $tmp3529->methods[0];
frost$collections$Iterator* $tmp3532 = $tmp3530(((frost$collections$Iterable*) $tmp3528));
goto block1;
block1:;
ITable* $tmp3533 = $tmp3532->$class->itable;
while ($tmp3533->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3533 = $tmp3533->next;
}
$fn3535 $tmp3534 = $tmp3533->methods[0];
frost$core$Bit $tmp3536 = $tmp3534($tmp3532);
bool $tmp3537 = $tmp3536.value;
if ($tmp3537) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3538 = $tmp3532->$class->itable;
while ($tmp3538->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3538 = $tmp3538->next;
}
$fn3540 $tmp3539 = $tmp3538->methods[1];
frost$core$Object* $tmp3541 = $tmp3539($tmp3532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3541)));
org$frostlang$frostc$ClassDecl* $tmp3542 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3542));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp3541);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3543 = *(&local0);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:822:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3543));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3544 = &$tmp3543->classes;
frost$collections$Array* $tmp3545 = *$tmp3544;
ITable* $tmp3546 = ((frost$collections$Iterable*) $tmp3545)->$class->itable;
while ($tmp3546->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3546 = $tmp3546->next;
}
$fn3548 $tmp3547 = $tmp3546->methods[0];
frost$collections$Iterator* $tmp3549 = $tmp3547(((frost$collections$Iterable*) $tmp3545));
goto block5;
block5:;
ITable* $tmp3550 = $tmp3549->$class->itable;
while ($tmp3550->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3550 = $tmp3550->next;
}
$fn3552 $tmp3551 = $tmp3550->methods[0];
frost$core$Bit $tmp3553 = $tmp3551($tmp3549);
bool $tmp3554 = $tmp3553.value;
if ($tmp3554) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3555 = $tmp3549->$class->itable;
while ($tmp3555->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3555 = $tmp3555->next;
}
$fn3557 $tmp3556 = $tmp3555->methods[1];
frost$core$Object* $tmp3558 = $tmp3556($tmp3549);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3558)));
org$frostlang$frostc$ClassDecl* $tmp3559 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3559));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp3558);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3560 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:822:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3560));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3561 = &$tmp3560->classes;
frost$collections$Array* $tmp3562 = *$tmp3561;
ITable* $tmp3563 = ((frost$collections$Iterable*) $tmp3562)->$class->itable;
while ($tmp3563->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3563 = $tmp3563->next;
}
$fn3565 $tmp3564 = $tmp3563->methods[0];
frost$collections$Iterator* $tmp3566 = $tmp3564(((frost$collections$Iterable*) $tmp3562));
goto block9;
block9:;
ITable* $tmp3567 = $tmp3566->$class->itable;
while ($tmp3567->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3567 = $tmp3567->next;
}
$fn3569 $tmp3568 = $tmp3567->methods[0];
frost$core$Bit $tmp3570 = $tmp3568($tmp3566);
bool $tmp3571 = $tmp3570.value;
if ($tmp3571) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3572 = $tmp3566->$class->itable;
while ($tmp3572->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3572 = $tmp3572->next;
}
$fn3574 $tmp3573 = $tmp3572->methods[1];
frost$core$Object* $tmp3575 = $tmp3573($tmp3566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3575)));
org$frostlang$frostc$ClassDecl* $tmp3576 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3576));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) $tmp3575);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3577 = *(&local2);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3577, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3575);
org$frostlang$frostc$ClassDecl* $tmp3578 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
frost$core$Frost$unref$frost$core$Object$Q($tmp3558);
org$frostlang$frostc$ClassDecl* $tmp3579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
frost$core$Frost$unref$frost$core$Object$Q($tmp3541);
org$frostlang$frostc$ClassDecl* $tmp3580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl$Kind local1;
org$frostlang$frostc$ClassDecl$Kind local2;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$MethodDecl* local5 = NULL;
org$frostlang$frostc$MethodDecl$Kind local6;
org$frostlang$frostc$MethodDecl$Kind local7;
org$frostlang$frostc$MethodDecl* local8 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:828
org$frostlang$frostc$ClassDecl** $tmp3581 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3582 = *$tmp3581;
frost$core$Bit $tmp3583 = (frost$core$Bit) {$tmp3582 == NULL};
bool $tmp3584 = $tmp3583.value;
if ($tmp3584) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:829
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:830
ITable* $tmp3586 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp3586->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3586 = $tmp3586->next;
}
$fn3588 $tmp3587 = $tmp3586->methods[1];
frost$core$Bit $tmp3589 = $tmp3587(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s3585));
bool $tmp3590 = $tmp3589.value;
if ($tmp3590) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:831
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:831:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp3591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s3592);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3591));
frost$core$String* $tmp3593 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local0) = $tmp3591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:834
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3594));
frost$core$String* $tmp3595 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
*(&local0) = &$s3596;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:836
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp3597 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp3598 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3599 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp3599);
frost$core$Int $tmp3600 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:837:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3601 = &(&local2)->$rawValue;
*$tmp3601 = $tmp3600;
org$frostlang$frostc$ClassDecl$Kind $tmp3602 = *(&local2);
*(&local1) = $tmp3602;
org$frostlang$frostc$ClassDecl$Kind $tmp3603 = *(&local1);
frost$core$String* $tmp3604 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3605 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3605);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3606 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3606);
frost$core$Weak** $tmp3607 = &param0->compiler;
frost$core$Weak* $tmp3608 = *$tmp3607;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:838:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3609 = &$tmp3608->_valid;
frost$core$Bit $tmp3610 = *$tmp3609;
bool $tmp3611 = $tmp3610.value;
if ($tmp3611) goto block10; else goto block11;
block11:;
frost$core$Int $tmp3612 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3613, $tmp3612);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3614 = &$tmp3608->value;
frost$core$Object* $tmp3615 = *$tmp3614;
frost$core$Frost$ref$frost$core$Object$Q($tmp3615);
org$frostlang$frostc$SymbolTable** $tmp3616 = &((org$frostlang$frostc$Compiler*) $tmp3615)->root;
org$frostlang$frostc$SymbolTable* $tmp3617 = *$tmp3616;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp3597, param1, $tmp3598, param2, ((frost$core$String*) NULL), $tmp3599, $tmp3603, $tmp3604, ((frost$collections$ListView*) $tmp3605), $tmp3606, $tmp3617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
org$frostlang$frostc$ClassDecl** $tmp3618 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3619 = *$tmp3618;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3619));
org$frostlang$frostc$ClassDecl** $tmp3620 = &param0->bareCodeClass;
*$tmp3620 = $tmp3597;
frost$core$Frost$unref$frost$core$Object$Q($tmp3615);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3597));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:839
org$frostlang$frostc$ClassDecl** $tmp3621 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3622 = *$tmp3621;
ITable* $tmp3623 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp3623->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp3623 = $tmp3623->next;
}
$fn3625 $tmp3624 = $tmp3623->methods[1];
$tmp3624(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp3622));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:840
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3626 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3627 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3628 = *$tmp3627;
org$frostlang$frostc$Position $tmp3629 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3630 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3631 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3630, $tmp3631);
frost$core$Int $tmp3632 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:841:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3633 = &(&local4)->$rawValue;
*$tmp3633 = $tmp3632;
org$frostlang$frostc$MethodDecl$Kind $tmp3634 = *(&local4);
*(&local3) = $tmp3634;
org$frostlang$frostc$MethodDecl$Kind $tmp3635 = *(&local3);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3636 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3637 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3636, $tmp3637);
frost$core$Weak** $tmp3638 = &param0->compiler;
frost$core$Weak* $tmp3639 = *$tmp3638;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:842:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3640 = &$tmp3639->_valid;
frost$core$Bit $tmp3641 = *$tmp3640;
bool $tmp3642 = $tmp3641.value;
if ($tmp3642) goto block15; else goto block16;
block16:;
frost$core$Int $tmp3643 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3644, $tmp3643);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3645 = &$tmp3639->value;
frost$core$Object* $tmp3646 = *$tmp3645;
frost$core$Frost$ref$frost$core$Object$Q($tmp3646);
org$frostlang$frostc$Type** $tmp3647 = &((org$frostlang$frostc$Compiler*) $tmp3646)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3648 = *$tmp3647;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3649 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3649);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3626, $tmp3628, $tmp3629, ((frost$core$String*) NULL), $tmp3630, $tmp3635, &$s3650, ((frost$collections$Array*) NULL), $tmp3636, $tmp3648, $tmp3649);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
org$frostlang$frostc$MethodDecl* $tmp3651 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
*(&local5) = $tmp3626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
frost$core$Frost$unref$frost$core$Object$Q($tmp3646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:843
org$frostlang$frostc$ClassDecl** $tmp3652 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3653 = *$tmp3652;
frost$collections$Array** $tmp3654 = &$tmp3653->methods;
frost$collections$Array* $tmp3655 = *$tmp3654;
org$frostlang$frostc$MethodDecl* $tmp3656 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3655, ((frost$core$Object*) $tmp3656));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:844
org$frostlang$frostc$ClassDecl** $tmp3657 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3658 = *$tmp3657;
org$frostlang$frostc$SymbolTable** $tmp3659 = &$tmp3658->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3660 = *$tmp3659;
org$frostlang$frostc$MethodDecl* $tmp3661 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:844:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3662 = &((org$frostlang$frostc$Symbol*) $tmp3661)->name;
frost$core$String* $tmp3663 = *$tmp3662;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3660, ((org$frostlang$frostc$Symbol*) $tmp3661), $tmp3663);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:845
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3664 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3665 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3666 = *$tmp3665;
org$frostlang$frostc$Position $tmp3667 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3668 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3669 = (frost$core$Int) {32u};
frost$core$Int $tmp3670 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:846:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp3671 = $tmp3669.value;
int64_t $tmp3672 = $tmp3670.value;
int64_t $tmp3673 = $tmp3671 | $tmp3672;
frost$core$Int $tmp3674 = (frost$core$Int) {$tmp3673};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3668, $tmp3674);
frost$core$Int $tmp3675 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:847:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3676 = &(&local7)->$rawValue;
*$tmp3676 = $tmp3675;
org$frostlang$frostc$MethodDecl$Kind $tmp3677 = *(&local7);
*(&local6) = $tmp3677;
org$frostlang$frostc$MethodDecl$Kind $tmp3678 = *(&local6);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3679 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3680 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3679, $tmp3680);
frost$core$Weak** $tmp3681 = &param0->compiler;
frost$core$Weak* $tmp3682 = *$tmp3681;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:847:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3683 = &$tmp3682->_valid;
frost$core$Bit $tmp3684 = *$tmp3683;
bool $tmp3685 = $tmp3684.value;
if ($tmp3685) goto block22; else goto block23;
block23:;
frost$core$Int $tmp3686 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3687, $tmp3686);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3688 = &$tmp3682->value;
frost$core$Object* $tmp3689 = *$tmp3688;
frost$core$Frost$ref$frost$core$Object$Q($tmp3689);
org$frostlang$frostc$Type** $tmp3690 = &((org$frostlang$frostc$Compiler*) $tmp3689)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3691 = *$tmp3690;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3692 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3692);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3664, $tmp3666, $tmp3667, ((frost$core$String*) NULL), $tmp3668, $tmp3678, &$s3693, ((frost$collections$Array*) NULL), $tmp3679, $tmp3691, $tmp3692);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
org$frostlang$frostc$MethodDecl* $tmp3694 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3694));
*(&local8) = $tmp3664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
frost$core$Frost$unref$frost$core$Object$Q($tmp3689);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:849
org$frostlang$frostc$ClassDecl** $tmp3695 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3696 = *$tmp3695;
frost$collections$Array** $tmp3697 = &$tmp3696->methods;
frost$collections$Array* $tmp3698 = *$tmp3697;
org$frostlang$frostc$MethodDecl* $tmp3699 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp3698, ((frost$core$Object*) $tmp3699));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:850
org$frostlang$frostc$ClassDecl** $tmp3700 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3701 = *$tmp3700;
org$frostlang$frostc$SymbolTable** $tmp3702 = &$tmp3701->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3703 = *$tmp3702;
org$frostlang$frostc$MethodDecl* $tmp3704 = *(&local8);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:850:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3705 = &((org$frostlang$frostc$Symbol*) $tmp3704)->name;
frost$core$String* $tmp3706 = *$tmp3705;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3703, ((org$frostlang$frostc$Symbol*) $tmp3704), $tmp3706);
org$frostlang$frostc$MethodDecl* $tmp3707 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3708 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3709 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp3710 = &param0->source;
frost$io$File* $tmp3711 = *$tmp3710;
frost$core$Bit $tmp3712 = (frost$core$Bit) {$tmp3711 != NULL};
bool $tmp3713 = $tmp3712.value;
if ($tmp3713) goto block1; else goto block2;
block2:;
frost$core$Int $tmp3714 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3715, $tmp3714, &$s3716);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3717 = &param0->compiler;
frost$core$Weak* $tmp3718 = *$tmp3717;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3719 = &$tmp3718->_valid;
frost$core$Bit $tmp3720 = *$tmp3719;
bool $tmp3721 = $tmp3720.value;
if ($tmp3721) goto block5; else goto block6;
block6:;
frost$core$Int $tmp3722 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3723, $tmp3722);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3724 = &$tmp3718->value;
frost$core$Object* $tmp3725 = *$tmp3724;
frost$core$Frost$ref$frost$core$Object$Q($tmp3725);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3725), param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3725);
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
org$frostlang$frostc$MethodDecl$Kind local41;
org$frostlang$frostc$MethodDecl$Kind local42;
org$frostlang$frostc$MethodDecl* local43 = NULL;
org$frostlang$frostc$MethodDecl* local44 = NULL;
org$frostlang$frostc$Position local45;
org$frostlang$frostc$ASTNode* local46 = NULL;
org$frostlang$frostc$FixedArray* local47 = NULL;
org$frostlang$frostc$ASTNode* local48 = NULL;
frost$core$Int local49;
frost$core$Int local50;
org$frostlang$frostc$FieldDecl* local51 = NULL;
org$frostlang$frostc$FieldDecl$Kind local52;
org$frostlang$frostc$FieldDecl$Kind local53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:860
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp3726 = &param0->source;
frost$io$File* $tmp3727 = *$tmp3726;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3727));
frost$io$File** $tmp3728 = &param0->source;
*$tmp3728 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:861
frost$core$Int* $tmp3729 = &param2->$rawValue;
frost$core$Int $tmp3730 = *$tmp3729;
frost$core$Int $tmp3731 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:862:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3732 = $tmp3730.value;
int64_t $tmp3733 = $tmp3731.value;
bool $tmp3734 = $tmp3732 == $tmp3733;
frost$core$Bit $tmp3735 = (frost$core$Bit) {$tmp3734};
bool $tmp3736 = $tmp3735.value;
if ($tmp3736) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp3737 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3738 = *$tmp3737;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3738));
org$frostlang$frostc$FixedArray* $tmp3739 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
*(&local0) = $tmp3738;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:863
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3740 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3740);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
frost$collections$Array* $tmp3741 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3741));
*(&local1) = $tmp3740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:864
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3742));
frost$core$String* $tmp3743 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
*(&local2) = &$s3744;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:865
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp3745 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp3745);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
frost$collections$HashMap* $tmp3746 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local3) = $tmp3745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:866
org$frostlang$frostc$FixedArray* $tmp3747 = *(&local0);
ITable* $tmp3748 = ((frost$collections$Iterable*) $tmp3747)->$class->itable;
while ($tmp3748->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3748 = $tmp3748->next;
}
$fn3750 $tmp3749 = $tmp3748->methods[0];
frost$collections$Iterator* $tmp3751 = $tmp3749(((frost$collections$Iterable*) $tmp3747));
goto block4;
block4:;
ITable* $tmp3752 = $tmp3751->$class->itable;
while ($tmp3752->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3752 = $tmp3752->next;
}
$fn3754 $tmp3753 = $tmp3752->methods[0];
frost$core$Bit $tmp3755 = $tmp3753($tmp3751);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3757 = $tmp3751->$class->itable;
while ($tmp3757->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3757 = $tmp3757->next;
}
$fn3759 $tmp3758 = $tmp3757->methods[1];
frost$core$Object* $tmp3760 = $tmp3758($tmp3751);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3760)));
org$frostlang$frostc$ASTNode* $tmp3761 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp3760);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:867
org$frostlang$frostc$ASTNode* $tmp3762 = *(&local4);
frost$core$Int* $tmp3763 = &$tmp3762->$rawValue;
frost$core$Int $tmp3764 = *$tmp3763;
frost$core$Int $tmp3765 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:868:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3766 = $tmp3764.value;
int64_t $tmp3767 = $tmp3765.value;
bool $tmp3768 = $tmp3766 == $tmp3767;
frost$core$Bit $tmp3769 = (frost$core$Bit) {$tmp3768};
bool $tmp3770 = $tmp3769.value;
if ($tmp3770) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3771 = (org$frostlang$frostc$Position*) ($tmp3762->$data + 0);
org$frostlang$frostc$Position $tmp3772 = *$tmp3771;
frost$core$String** $tmp3773 = (frost$core$String**) ($tmp3762->$data + 24);
frost$core$String* $tmp3774 = *$tmp3773;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
frost$core$String* $tmp3775 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
*(&local5) = $tmp3774;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:869
frost$core$String* $tmp3776 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
frost$core$String* $tmp3777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local2) = $tmp3776;
frost$core$String* $tmp3778 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int $tmp3779 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:871:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3780 = $tmp3764.value;
int64_t $tmp3781 = $tmp3779.value;
bool $tmp3782 = $tmp3780 == $tmp3781;
frost$core$Bit $tmp3783 = (frost$core$Bit) {$tmp3782};
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3785 = (org$frostlang$frostc$Position*) ($tmp3762->$data + 0);
org$frostlang$frostc$Position $tmp3786 = *$tmp3785;
frost$core$String** $tmp3787 = (frost$core$String**) ($tmp3762->$data + 24);
frost$core$String* $tmp3788 = *$tmp3787;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
frost$core$String* $tmp3789 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
*(&local6) = $tmp3788;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:872
frost$core$String* $tmp3790 = *(&local6);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from Scanner.frost:872:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp3791 = &$tmp3790->_length;
frost$core$Int $tmp3792 = *$tmp3791;
frost$core$String$Index $tmp3793 = frost$core$String$Index$init$frost$core$Int($tmp3792);
frost$core$String$Index$nullable $tmp3794 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp3790, &$s3795, $tmp3793);
*(&local7) = $tmp3794;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:873
*(&local8) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:874
frost$core$String$Index$nullable $tmp3796 = *(&local7);
frost$core$Bit $tmp3797 = (frost$core$Bit) {$tmp3796.nonnull};
bool $tmp3798 = $tmp3797.value;
if ($tmp3798) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:875
frost$core$String* $tmp3799 = *(&local6);
frost$core$String* $tmp3800 = *(&local6);
frost$core$String$Index$nullable $tmp3801 = *(&local7);
frost$core$String$Index $tmp3802 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp3800, ((frost$core$String$Index) $tmp3801.value));
frost$core$Bit $tmp3803 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3804 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3802, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3803);
frost$core$String* $tmp3805 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp3799, $tmp3804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
frost$core$String* $tmp3806 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
*(&local8) = $tmp3805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:878
frost$core$String* $tmp3807 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
frost$core$String* $tmp3808 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3808));
*(&local8) = $tmp3807;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:880
frost$collections$HashMap* $tmp3809 = *(&local3);
frost$core$String* $tmp3810 = *(&local8);
frost$core$String* $tmp3811 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3809, ((frost$collections$Key*) $tmp3810), ((frost$core$Object*) $tmp3811));
frost$core$String* $tmp3812 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp3813 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block12:;
frost$core$Int $tmp3814 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:882:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3815 = $tmp3764.value;
int64_t $tmp3816 = $tmp3814.value;
bool $tmp3817 = $tmp3815 == $tmp3816;
frost$core$Bit $tmp3818 = (frost$core$Bit) {$tmp3817};
bool $tmp3819 = $tmp3818.value;
if ($tmp3819) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp3820 = (org$frostlang$frostc$Position*) ($tmp3762->$data + 0);
org$frostlang$frostc$Position $tmp3821 = *$tmp3820;
*(&local9) = $tmp3821;
org$frostlang$frostc$ASTNode** $tmp3822 = (org$frostlang$frostc$ASTNode**) ($tmp3762->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3823 = *$tmp3822;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
org$frostlang$frostc$ASTNode* $tmp3824 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
*(&local10) = $tmp3823;
org$frostlang$frostc$FixedArray** $tmp3825 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3826 = *$tmp3825;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
org$frostlang$frostc$FixedArray* $tmp3827 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
*(&local11) = $tmp3826;
org$frostlang$frostc$ClassDecl$Kind* $tmp3828 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp3762->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp3829 = *$tmp3828;
*(&local12) = $tmp3829;
frost$core$String** $tmp3830 = (frost$core$String**) ($tmp3762->$data + 48);
frost$core$String* $tmp3831 = *$tmp3830;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
frost$core$String* $tmp3832 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
*(&local13) = $tmp3831;
org$frostlang$frostc$FixedArray** $tmp3833 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3834 = *$tmp3833;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
org$frostlang$frostc$FixedArray* $tmp3835 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3835));
*(&local14) = $tmp3834;
org$frostlang$frostc$FixedArray** $tmp3836 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3837 = *$tmp3836;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
org$frostlang$frostc$FixedArray* $tmp3838 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
*(&local15) = $tmp3837;
org$frostlang$frostc$FixedArray** $tmp3839 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3840 = *$tmp3839;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
org$frostlang$frostc$FixedArray* $tmp3841 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
*(&local16) = $tmp3840;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:884
frost$collections$HashMap* $tmp3842 = *(&local3);
frost$core$String* $tmp3843 = *(&local2);
org$frostlang$frostc$Position $tmp3844 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3845 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3846 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3847 = *(&local12);
frost$core$String* $tmp3848 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3849 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3850 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3851 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3852 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3842), $tmp3843, $tmp3844, $tmp3845, $tmp3846, $tmp3847, $tmp3848, $tmp3849, $tmp3850, $tmp3851);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
org$frostlang$frostc$ClassDecl* $tmp3853 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
*(&local17) = $tmp3852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:886
org$frostlang$frostc$ClassDecl* $tmp3854 = *(&local17);
frost$core$Bit $tmp3855 = (frost$core$Bit) {$tmp3854 != NULL};
bool $tmp3856 = $tmp3855.value;
if ($tmp3856) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:887
org$frostlang$frostc$ClassDecl* $tmp3857 = *(&local17);
frost$collections$Array* $tmp3858 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:887:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T($tmp3858, ((frost$core$Object*) $tmp3857));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3859 = &$tmp3857->classes;
frost$collections$Array* $tmp3860 = *$tmp3859;
ITable* $tmp3861 = ((frost$collections$Iterable*) $tmp3860)->$class->itable;
while ($tmp3861->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3861 = $tmp3861->next;
}
$fn3863 $tmp3862 = $tmp3861->methods[0];
frost$collections$Iterator* $tmp3864 = $tmp3862(((frost$collections$Iterable*) $tmp3860));
goto block25;
block25:;
ITable* $tmp3865 = $tmp3864->$class->itable;
while ($tmp3865->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3865 = $tmp3865->next;
}
$fn3867 $tmp3866 = $tmp3865->methods[0];
frost$core$Bit $tmp3868 = $tmp3866($tmp3864);
bool $tmp3869 = $tmp3868.value;
if ($tmp3869) goto block27; else goto block26;
block26:;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3870 = $tmp3864->$class->itable;
while ($tmp3870->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3870 = $tmp3870->next;
}
$fn3872 $tmp3871 = $tmp3870->methods[1];
frost$core$Object* $tmp3873 = $tmp3871($tmp3864);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3873)));
org$frostlang$frostc$ClassDecl* $tmp3874 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3874));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) $tmp3873);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3875 = *(&local18);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:822:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T($tmp3858, ((frost$core$Object*) $tmp3875));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3876 = &$tmp3875->classes;
frost$collections$Array* $tmp3877 = *$tmp3876;
ITable* $tmp3878 = ((frost$collections$Iterable*) $tmp3877)->$class->itable;
while ($tmp3878->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3878 = $tmp3878->next;
}
$fn3880 $tmp3879 = $tmp3878->methods[0];
frost$collections$Iterator* $tmp3881 = $tmp3879(((frost$collections$Iterable*) $tmp3877));
goto block29;
block29:;
ITable* $tmp3882 = $tmp3881->$class->itable;
while ($tmp3882->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3882 = $tmp3882->next;
}
$fn3884 $tmp3883 = $tmp3882->methods[0];
frost$core$Bit $tmp3885 = $tmp3883($tmp3881);
bool $tmp3886 = $tmp3885.value;
if ($tmp3886) goto block31; else goto block30;
block30:;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3887 = $tmp3881->$class->itable;
while ($tmp3887->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3887 = $tmp3887->next;
}
$fn3889 $tmp3888 = $tmp3887->methods[1];
frost$core$Object* $tmp3890 = $tmp3888($tmp3881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3890)));
org$frostlang$frostc$ClassDecl* $tmp3891 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3891));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) $tmp3890);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3892 = *(&local19);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3892, $tmp3858);
frost$core$Frost$unref$frost$core$Object$Q($tmp3890);
org$frostlang$frostc$ClassDecl* $tmp3893 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
frost$core$Frost$unref$frost$core$Object$Q($tmp3873);
org$frostlang$frostc$ClassDecl* $tmp3894 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
goto block23;
block23:;
org$frostlang$frostc$ClassDecl* $tmp3895 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3896 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3897 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3897));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3898 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3899 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3900 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3900));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3901 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3901));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block20:;
frost$core$Int $tmp3902 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:890:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3903 = $tmp3764.value;
int64_t $tmp3904 = $tmp3902.value;
bool $tmp3905 = $tmp3903 == $tmp3904;
frost$core$Bit $tmp3906 = (frost$core$Bit) {$tmp3905};
bool $tmp3907 = $tmp3906.value;
if ($tmp3907) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3908 = (org$frostlang$frostc$Position*) ($tmp3762->$data + 0);
org$frostlang$frostc$Position $tmp3909 = *$tmp3908;
*(&local20) = $tmp3909;
org$frostlang$frostc$ASTNode** $tmp3910 = (org$frostlang$frostc$ASTNode**) ($tmp3762->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3911 = *$tmp3910;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
org$frostlang$frostc$ASTNode* $tmp3912 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
*(&local21) = $tmp3911;
org$frostlang$frostc$FixedArray** $tmp3913 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3914 = *$tmp3913;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3914));
org$frostlang$frostc$FixedArray* $tmp3915 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3915));
*(&local22) = $tmp3914;
org$frostlang$frostc$MethodDecl$Kind* $tmp3916 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3762->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3917 = *$tmp3916;
*(&local23) = $tmp3917;
frost$core$String** $tmp3918 = (frost$core$String**) ($tmp3762->$data + 48);
frost$core$String* $tmp3919 = *$tmp3918;
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
frost$core$String* $tmp3920 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3920));
*(&local24) = $tmp3919;
org$frostlang$frostc$FixedArray** $tmp3921 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3922 = *$tmp3921;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
org$frostlang$frostc$FixedArray* $tmp3923 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
*(&local25) = $tmp3922;
org$frostlang$frostc$FixedArray** $tmp3924 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3925 = *$tmp3924;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
org$frostlang$frostc$FixedArray* $tmp3926 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
*(&local26) = $tmp3925;
org$frostlang$frostc$ASTNode** $tmp3927 = (org$frostlang$frostc$ASTNode**) ($tmp3762->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3928 = *$tmp3927;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
org$frostlang$frostc$ASTNode* $tmp3929 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
*(&local27) = $tmp3928;
org$frostlang$frostc$FixedArray** $tmp3930 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3931 = *$tmp3930;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3931));
org$frostlang$frostc$FixedArray* $tmp3932 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
*(&local28) = $tmp3931;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:892
org$frostlang$frostc$MethodDecl$Kind $tmp3933 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3934;
$tmp3934 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3934->value = $tmp3933;
frost$core$Int $tmp3935 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:892:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3936 = &(&local30)->$rawValue;
*$tmp3936 = $tmp3935;
org$frostlang$frostc$MethodDecl$Kind $tmp3937 = *(&local30);
*(&local29) = $tmp3937;
org$frostlang$frostc$MethodDecl$Kind $tmp3938 = *(&local29);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3939;
$tmp3939 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3939->value = $tmp3938;
ITable* $tmp3940 = ((frost$core$Equatable*) $tmp3934)->$class->itable;
while ($tmp3940->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3940 = $tmp3940->next;
}
$fn3942 $tmp3941 = $tmp3940->methods[0];
frost$core$Bit $tmp3943 = $tmp3941(((frost$core$Equatable*) $tmp3934), ((frost$core$Equatable*) $tmp3939));
bool $tmp3944 = $tmp3943.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3939)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3934)));
if ($tmp3944) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:893
org$frostlang$frostc$Position $tmp3945 = *(&local20);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:893:38
frost$io$File** $tmp3946 = &param0->source;
frost$io$File* $tmp3947 = *$tmp3946;
frost$core$Bit $tmp3948 = (frost$core$Bit) {$tmp3947 != NULL};
bool $tmp3949 = $tmp3948.value;
if ($tmp3949) goto block39; else goto block40;
block40:;
frost$core$Int $tmp3950 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3951, $tmp3950, &$s3952);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3953 = &param0->compiler;
frost$core$Weak* $tmp3954 = *$tmp3953;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3955 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3954);
bool $tmp3956 = $tmp3955.value;
if ($tmp3956) goto block42; else goto block43;
block43:;
frost$core$Int $tmp3957 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3958, $tmp3957);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3959 = &$tmp3954->value;
frost$core$Object* $tmp3960 = *$tmp3959;
frost$core$Frost$ref$frost$core$Object$Q($tmp3960);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3960), $tmp3945, &$s3961);
frost$core$Frost$unref$frost$core$Object$Q($tmp3960);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:894
org$frostlang$frostc$FixedArray* $tmp3962 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3963 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3964 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3965 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3966 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3967 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3968 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3760);
org$frostlang$frostc$ASTNode* $tmp3969 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:896
frost$collections$HashMap* $tmp3970 = *(&local3);
frost$core$String* $tmp3971 = *(&local2);
frost$collections$Array* $tmp3972 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3970), $tmp3971, ((frost$collections$List*) $tmp3972));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:897
*(&local31) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:898
frost$core$String* $tmp3973 = *(&local24);
frost$core$Bit $tmp3974 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3973, &$s3975);
bool $tmp3976 = $tmp3974.value;
if ($tmp3976) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:899
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3977));
frost$core$String* $tmp3978 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
*(&local31) = &$s3979;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:900
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3980 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3980);
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
frost$collections$Array* $tmp3981 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3981));
*(&local32) = $tmp3980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:901
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3982 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3982);
*(&local33) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
frost$collections$Array* $tmp3983 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
*(&local33) = $tmp3982;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:902
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3984 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3984);
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
frost$collections$Array* $tmp3985 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
*(&local34) = $tmp3984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:903
org$frostlang$frostc$FixedArray* $tmp3986 = *(&local26);
ITable* $tmp3987 = ((frost$collections$Iterable*) $tmp3986)->$class->itable;
while ($tmp3987->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3987 = $tmp3987->next;
}
$fn3989 $tmp3988 = $tmp3987->methods[0];
frost$collections$Iterator* $tmp3990 = $tmp3988(((frost$collections$Iterable*) $tmp3986));
goto block47;
block47:;
ITable* $tmp3991 = $tmp3990->$class->itable;
while ($tmp3991->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3991 = $tmp3991->next;
}
$fn3993 $tmp3992 = $tmp3991->methods[0];
frost$core$Bit $tmp3994 = $tmp3992($tmp3990);
bool $tmp3995 = $tmp3994.value;
if ($tmp3995) goto block49; else goto block48;
block48:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3996 = $tmp3990->$class->itable;
while ($tmp3996->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3996 = $tmp3996->next;
}
$fn3998 $tmp3997 = $tmp3996->methods[1];
frost$core$Object* $tmp3999 = $tmp3997($tmp3990);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3999)));
org$frostlang$frostc$ASTNode* $tmp4000 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp3999);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:904
org$frostlang$frostc$ASTNode* $tmp4001 = *(&local35);
frost$core$Int* $tmp4002 = &$tmp4001->$rawValue;
frost$core$Int $tmp4003 = *$tmp4002;
frost$core$Int $tmp4004 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:905:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4005 = $tmp4003.value;
int64_t $tmp4006 = $tmp4004.value;
bool $tmp4007 = $tmp4005 == $tmp4006;
frost$core$Bit $tmp4008 = (frost$core$Bit) {$tmp4007};
bool $tmp4009 = $tmp4008.value;
if ($tmp4009) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Position* $tmp4010 = (org$frostlang$frostc$Position*) ($tmp4001->$data + 0);
org$frostlang$frostc$Position $tmp4011 = *$tmp4010;
*(&local36) = $tmp4011;
frost$core$String** $tmp4012 = (frost$core$String**) ($tmp4001->$data + 24);
frost$core$String* $tmp4013 = *$tmp4012;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
frost$core$String* $tmp4014 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4014));
*(&local37) = $tmp4013;
org$frostlang$frostc$ASTNode** $tmp4015 = (org$frostlang$frostc$ASTNode**) ($tmp4001->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4016 = *$tmp4015;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
org$frostlang$frostc$ASTNode* $tmp4017 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4017));
*(&local38) = $tmp4016;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:906
frost$collections$Array* $tmp4018 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp4019 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp4020 = *(&local37);
org$frostlang$frostc$ASTNode* $tmp4021 = *(&local38);
org$frostlang$frostc$Type* $tmp4022 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4021);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp4019, $tmp4020, $tmp4022);
frost$collections$Array$add$frost$collections$Array$T($tmp4018, ((frost$core$Object*) $tmp4019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4022));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:908
frost$collections$Array* $tmp4023 = *(&local34);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4024 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4025 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp4026 = *(&local36);
frost$core$String* $tmp4027 = *(&local37);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp4024, $tmp4025, $tmp4026, $tmp4027);
frost$collections$Array$add$frost$collections$Array$T($tmp4023, ((frost$core$Object*) $tmp4024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
org$frostlang$frostc$ASTNode* $tmp4028 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4029 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3999);
org$frostlang$frostc$ASTNode* $tmp4030 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:911
frost$core$Int $tmp4031 = (frost$core$Int) {911u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4032, $tmp4031);
abort(); // unreachable
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:915
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4033 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4034 = (frost$core$Int) {9u};
org$frostlang$frostc$Position $tmp4035 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4036 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4037 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp4038 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp4036, $tmp4037, $tmp4038, &$s4039);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp4040 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4040);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4033, $tmp4034, $tmp4035, $tmp4036, $tmp4040);
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
org$frostlang$frostc$ASTNode* $tmp4041 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
*(&local39) = $tmp4033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:918
frost$collections$Array* $tmp4042 = *(&local33);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4043 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4044 = (frost$core$Int) {9u};
org$frostlang$frostc$Position $tmp4045 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4046 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4047 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp4048 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4049 = *(&local39);
frost$core$String* $tmp4050 = *(&local31);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4046, $tmp4047, $tmp4048, $tmp4049, $tmp4050);
frost$collections$Array* $tmp4051 = *(&local34);
org$frostlang$frostc$FixedArray* $tmp4052 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4051);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4043, $tmp4044, $tmp4045, $tmp4046, $tmp4052);
frost$collections$Array$add$frost$collections$Array$T($tmp4042, ((frost$core$Object*) $tmp4043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4043));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:921
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:922
org$frostlang$frostc$ASTNode* $tmp4053 = *(&local27);
frost$core$Bit $tmp4054 = (frost$core$Bit) {$tmp4053 != NULL};
bool $tmp4055 = $tmp4054.value;
if ($tmp4055) goto block54; else goto block56;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:923
org$frostlang$frostc$ASTNode* $tmp4056 = *(&local27);
org$frostlang$frostc$Type* $tmp4057 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4056);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
org$frostlang$frostc$Type* $tmp4058 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
*(&local40) = $tmp4057;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
goto block55;
block56:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:926
frost$core$Weak** $tmp4059 = &param0->compiler;
frost$core$Weak* $tmp4060 = *$tmp4059;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:926:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4061 = &$tmp4060->_valid;
frost$core$Bit $tmp4062 = *$tmp4061;
bool $tmp4063 = $tmp4062.value;
if ($tmp4063) goto block59; else goto block60;
block60:;
frost$core$Int $tmp4064 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4065, $tmp4064);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4066 = &$tmp4060->value;
frost$core$Object* $tmp4067 = *$tmp4066;
frost$core$Frost$ref$frost$core$Object$Q($tmp4067);
org$frostlang$frostc$Type** $tmp4068 = &((org$frostlang$frostc$Compiler*) $tmp4067)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp4069 = *$tmp4068;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4069));
org$frostlang$frostc$Type* $tmp4070 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
*(&local40) = $tmp4069;
frost$core$Frost$unref$frost$core$Object$Q($tmp4067);
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:928
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp4071 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp4072 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4073 = *$tmp4072;
org$frostlang$frostc$Position $tmp4074 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp4075 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp4076 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp4075, $tmp4076);
frost$core$Int $tmp4077 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:929:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp4078 = &(&local42)->$rawValue;
*$tmp4078 = $tmp4077;
org$frostlang$frostc$MethodDecl$Kind $tmp4079 = *(&local42);
*(&local41) = $tmp4079;
org$frostlang$frostc$MethodDecl$Kind $tmp4080 = *(&local41);
frost$collections$Array* $tmp4081 = *(&local32);
org$frostlang$frostc$Type* $tmp4082 = *(&local40);
frost$collections$Array* $tmp4083 = *(&local33);
org$frostlang$frostc$FixedArray* $tmp4084 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4083);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4071, $tmp4073, $tmp4074, ((frost$core$String*) NULL), $tmp4075, $tmp4080, &$s4085, ((frost$collections$Array*) NULL), $tmp4081, $tmp4082, $tmp4084);
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
org$frostlang$frostc$MethodDecl* $tmp4086 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4086));
*(&local43) = $tmp4071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:932
org$frostlang$frostc$ClassDecl** $tmp4087 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4088 = *$tmp4087;
frost$collections$Array** $tmp4089 = &$tmp4088->methods;
frost$collections$Array* $tmp4090 = *$tmp4089;
org$frostlang$frostc$MethodDecl* $tmp4091 = *(&local43);
frost$collections$Array$add$frost$collections$Array$T($tmp4090, ((frost$core$Object*) $tmp4091));
org$frostlang$frostc$MethodDecl* $tmp4092 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp4093 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp4094 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4095 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
*(&local34) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4096 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
*(&local33) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4097 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
*(&local32) = ((frost$collections$Array*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:935
frost$core$String* $tmp4098 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4098));
frost$core$String* $tmp4099 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
*(&local31) = $tmp4098;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:937
frost$core$Weak** $tmp4100 = &param0->compiler;
frost$core$Weak* $tmp4101 = *$tmp4100;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:937:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4102 = &$tmp4101->_valid;
frost$core$Bit $tmp4103 = *$tmp4102;
bool $tmp4104 = $tmp4103.value;
if ($tmp4104) goto block64; else goto block65;
block65:;
frost$core$Int $tmp4105 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4106, $tmp4105);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4107 = &$tmp4101->value;
frost$core$Object* $tmp4108 = *$tmp4107;
frost$core$Frost$ref$frost$core$Object$Q($tmp4108);
frost$collections$Stack** $tmp4109 = &((org$frostlang$frostc$Compiler*) $tmp4108)->currentClass;
frost$collections$Stack* $tmp4110 = *$tmp4109;
org$frostlang$frostc$ClassDecl** $tmp4111 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4112 = *$tmp4111;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:937:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp4113 = &$tmp4110->contents;
frost$collections$Array* $tmp4114 = *$tmp4113;
frost$collections$Array$add$frost$collections$Array$T($tmp4114, ((frost$core$Object*) $tmp4112));
frost$core$Frost$unref$frost$core$Object$Q($tmp4108);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:938
org$frostlang$frostc$ClassDecl** $tmp4115 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4116 = *$tmp4115;
org$frostlang$frostc$Position $tmp4117 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4118 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp4119 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind $tmp4120 = *(&local23);
frost$core$String* $tmp4121 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp4122 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp4123 = *(&local26);
org$frostlang$frostc$ASTNode* $tmp4124 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp4125 = *(&local28);
org$frostlang$frostc$MethodDecl* $tmp4126 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp4116, $tmp4117, $tmp4118, $tmp4119, $tmp4120, $tmp4121, $tmp4122, $tmp4123, $tmp4124, $tmp4125);
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
org$frostlang$frostc$MethodDecl* $tmp4127 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4127));
*(&local44) = $tmp4126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:940
org$frostlang$frostc$MethodDecl* $tmp4128 = *(&local44);
org$frostlang$frostc$Annotations** $tmp4129 = &$tmp4128->annotations;
org$frostlang$frostc$Annotations* $tmp4130 = *$tmp4129;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:940:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp4131 = &$tmp4130->flags;
frost$core$Int $tmp4132 = *$tmp4131;
frost$core$Int $tmp4133 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4134 = $tmp4132.value;
int64_t $tmp4135 = $tmp4133.value;
int64_t $tmp4136 = $tmp4134 & $tmp4135;
frost$core$Int $tmp4137 = (frost$core$Int) {$tmp4136};
frost$core$Int $tmp4138 = (frost$core$Int) {0u};
int64_t $tmp4139 = $tmp4137.value;
int64_t $tmp4140 = $tmp4138.value;
bool $tmp4141 = $tmp4139 != $tmp4140;
frost$core$Bit $tmp4142 = (frost$core$Bit) {$tmp4141};
bool $tmp4143 = $tmp4142.value;
if ($tmp4143) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:941
org$frostlang$frostc$MethodDecl* $tmp4144 = *(&local44);
org$frostlang$frostc$Position* $tmp4145 = &((org$frostlang$frostc$Symbol*) $tmp4144)->position;
org$frostlang$frostc$Position $tmp4146 = *$tmp4145;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:941:38
frost$io$File** $tmp4147 = &param0->source;
frost$io$File* $tmp4148 = *$tmp4147;
frost$core$Bit $tmp4149 = (frost$core$Bit) {$tmp4148 != NULL};
bool $tmp4150 = $tmp4149.value;
if ($tmp4150) goto block72; else goto block73;
block73:;
frost$core$Int $tmp4151 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4152, $tmp4151, &$s4153);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp4154 = &param0->compiler;
frost$core$Weak* $tmp4155 = *$tmp4154;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4156 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4155);
bool $tmp4157 = $tmp4156.value;
if ($tmp4157) goto block75; else goto block76;
block76:;
frost$core$Int $tmp4158 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4159, $tmp4158);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4160 = &$tmp4155->value;
frost$core$Object* $tmp4161 = *$tmp4160;
frost$core$Frost$ref$frost$core$Object$Q($tmp4161);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4161), $tmp4146, &$s4162);
frost$core$Frost$unref$frost$core$Object$Q($tmp4161);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:943
org$frostlang$frostc$MethodDecl* $tmp4163 = *(&local44);
org$frostlang$frostc$Annotations** $tmp4164 = &$tmp4163->annotations;
org$frostlang$frostc$Annotations* $tmp4165 = *$tmp4164;
frost$core$Int* $tmp4166 = &$tmp4165->flags;
frost$core$Int $tmp4167 = *$tmp4166;
frost$core$Int $tmp4168 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.!!():frost.core.Int from Scanner.frost:943:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:275
int64_t $tmp4169 = $tmp4168.value;
int64_t $tmp4170 = !$tmp4169;
frost$core$Int $tmp4171 = (frost$core$Int) {$tmp4170};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:943:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4172 = $tmp4167.value;
int64_t $tmp4173 = $tmp4171.value;
int64_t $tmp4174 = $tmp4172 & $tmp4173;
frost$core$Int $tmp4175 = (frost$core$Int) {$tmp4174};
frost$core$Int* $tmp4176 = &$tmp4165->flags;
*$tmp4176 = $tmp4175;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:945
frost$core$Weak** $tmp4177 = &param0->compiler;
frost$core$Weak* $tmp4178 = *$tmp4177;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:945:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4179 = &$tmp4178->_valid;
frost$core$Bit $tmp4180 = *$tmp4179;
bool $tmp4181 = $tmp4180.value;
if ($tmp4181) goto block81; else goto block82;
block82:;
frost$core$Int $tmp4182 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4183, $tmp4182);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4184 = &$tmp4178->value;
frost$core$Object* $tmp4185 = *$tmp4184;
frost$core$Frost$ref$frost$core$Object$Q($tmp4185);
frost$collections$Stack** $tmp4186 = &((org$frostlang$frostc$Compiler*) $tmp4185)->currentClass;
frost$collections$Stack* $tmp4187 = *$tmp4186;
frost$core$Int $tmp4188 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Scanner.frost:945:57
frost$core$Int $tmp4189 = (frost$core$Int) {0u};
int64_t $tmp4190 = $tmp4188.value;
int64_t $tmp4191 = $tmp4189.value;
bool $tmp4192 = $tmp4190 >= $tmp4191;
frost$core$Bit $tmp4193 = (frost$core$Bit) {$tmp4192};
bool $tmp4194 = $tmp4193.value;
if ($tmp4194) goto block86; else goto block85;
block86:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp4195 = &$tmp4187->contents;
frost$collections$Array* $tmp4196 = *$tmp4195;
ITable* $tmp4197 = ((frost$collections$CollectionView*) $tmp4196)->$class->itable;
while ($tmp4197->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4197 = $tmp4197->next;
}
$fn4199 $tmp4198 = $tmp4197->methods[0];
frost$core$Int $tmp4200 = $tmp4198(((frost$collections$CollectionView*) $tmp4196));
int64_t $tmp4201 = $tmp4188.value;
int64_t $tmp4202 = $tmp4200.value;
bool $tmp4203 = $tmp4201 < $tmp4202;
frost$core$Bit $tmp4204 = (frost$core$Bit) {$tmp4203};
bool $tmp4205 = $tmp4204.value;
if ($tmp4205) goto block84; else goto block85;
block85:;
frost$core$Int $tmp4206 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4207, $tmp4206, &$s4208);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp4209 = &$tmp4187->contents;
frost$collections$Array* $tmp4210 = *$tmp4209;
ITable* $tmp4211 = ((frost$collections$CollectionView*) $tmp4210)->$class->itable;
while ($tmp4211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4211 = $tmp4211->next;
}
$fn4213 $tmp4212 = $tmp4211->methods[0];
frost$core$Int $tmp4214 = $tmp4212(((frost$collections$CollectionView*) $tmp4210));
int64_t $tmp4215 = $tmp4214.value;
int64_t $tmp4216 = $tmp4188.value;
bool $tmp4217 = $tmp4215 > $tmp4216;
frost$core$Bit $tmp4218 = (frost$core$Bit) {$tmp4217};
bool $tmp4219 = $tmp4218.value;
if ($tmp4219) goto block88; else goto block89;
block89:;
frost$core$Int $tmp4220 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4221, $tmp4220);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp4222 = &$tmp4187->contents;
frost$collections$Array* $tmp4223 = *$tmp4222;
frost$collections$Array** $tmp4224 = &$tmp4187->contents;
frost$collections$Array* $tmp4225 = *$tmp4224;
ITable* $tmp4226 = ((frost$collections$CollectionView*) $tmp4225)->$class->itable;
while ($tmp4226->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4226 = $tmp4226->next;
}
$fn4228 $tmp4227 = $tmp4226->methods[0];
frost$core$Int $tmp4229 = $tmp4227(((frost$collections$CollectionView*) $tmp4225));
frost$core$Int $tmp4230 = (frost$core$Int) {1u};
int64_t $tmp4231 = $tmp4229.value;
int64_t $tmp4232 = $tmp4230.value;
int64_t $tmp4233 = $tmp4231 - $tmp4232;
frost$core$Int $tmp4234 = (frost$core$Int) {$tmp4233};
int64_t $tmp4235 = $tmp4234.value;
int64_t $tmp4236 = $tmp4188.value;
int64_t $tmp4237 = $tmp4235 - $tmp4236;
frost$core$Int $tmp4238 = (frost$core$Int) {$tmp4237};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp4239 = (frost$core$Int) {0u};
int64_t $tmp4240 = $tmp4238.value;
int64_t $tmp4241 = $tmp4239.value;
bool $tmp4242 = $tmp4240 >= $tmp4241;
frost$core$Bit $tmp4243 = (frost$core$Bit) {$tmp4242};
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block93; else goto block92;
block93:;
ITable* $tmp4245 = ((frost$collections$CollectionView*) $tmp4223)->$class->itable;
while ($tmp4245->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4245 = $tmp4245->next;
}
$fn4247 $tmp4246 = $tmp4245->methods[0];
frost$core$Int $tmp4248 = $tmp4246(((frost$collections$CollectionView*) $tmp4223));
int64_t $tmp4249 = $tmp4238.value;
int64_t $tmp4250 = $tmp4248.value;
bool $tmp4251 = $tmp4249 < $tmp4250;
frost$core$Bit $tmp4252 = (frost$core$Bit) {$tmp4251};
bool $tmp4253 = $tmp4252.value;
if ($tmp4253) goto block91; else goto block92;
block92:;
frost$core$Int $tmp4254 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4255, $tmp4254, &$s4256);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp4257 = &$tmp4223->data;
frost$core$Object** $tmp4258 = *$tmp4257;
frost$core$Int64 $tmp4259 = frost$core$Int64$init$frost$core$Int($tmp4238);
int64_t $tmp4260 = $tmp4259.value;
frost$core$Object* $tmp4261 = $tmp4258[$tmp4260];
frost$core$Frost$ref$frost$core$Object$Q($tmp4261);
frost$core$Frost$ref$frost$core$Object$Q($tmp4261);
frost$core$Frost$unref$frost$core$Object$Q($tmp4261);
org$frostlang$frostc$ClassDecl** $tmp4262 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4263 = *$tmp4262;
bool $tmp4264 = ((org$frostlang$frostc$ClassDecl*) $tmp4261) == $tmp4263;
frost$core$Bit $tmp4265 = (frost$core$Bit) {$tmp4264};
bool $tmp4266 = $tmp4265.value;
if ($tmp4266) goto block94; else goto block95;
block95:;
frost$core$Int $tmp4267 = (frost$core$Int) {945u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4268, $tmp4267);
abort(); // unreachable
block94:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4261);
frost$core$Frost$unref$frost$core$Object$Q($tmp4185);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:946
frost$core$Weak** $tmp4269 = &param0->compiler;
frost$core$Weak* $tmp4270 = *$tmp4269;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:946:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4271 = &$tmp4270->_valid;
frost$core$Bit $tmp4272 = *$tmp4271;
bool $tmp4273 = $tmp4272.value;
if ($tmp4273) goto block98; else goto block99;
block99:;
frost$core$Int $tmp4274 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4275, $tmp4274);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4276 = &$tmp4270->value;
frost$core$Object* $tmp4277 = *$tmp4276;
frost$core$Frost$ref$frost$core$Object$Q($tmp4277);
frost$collections$Stack** $tmp4278 = &((org$frostlang$frostc$Compiler*) $tmp4277)->currentClass;
frost$collections$Stack* $tmp4279 = *$tmp4278;
frost$core$Object* $tmp4280 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4279);
frost$core$Frost$unref$frost$core$Object$Q($tmp4280);
frost$core$Frost$unref$frost$core$Object$Q($tmp4277);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:947
org$frostlang$frostc$ClassDecl** $tmp4281 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4282 = *$tmp4281;
frost$collections$Array** $tmp4283 = &$tmp4282->methods;
frost$collections$Array* $tmp4284 = *$tmp4283;
org$frostlang$frostc$MethodDecl* $tmp4285 = *(&local44);
frost$collections$Array$add$frost$collections$Array$T($tmp4284, ((frost$core$Object*) $tmp4285));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:948
org$frostlang$frostc$ClassDecl** $tmp4286 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4287 = *$tmp4286;
org$frostlang$frostc$SymbolTable** $tmp4288 = &$tmp4287->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4289 = *$tmp4288;
org$frostlang$frostc$MethodDecl* $tmp4290 = *(&local44);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:948:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp4291 = &((org$frostlang$frostc$Symbol*) $tmp4290)->name;
frost$core$String* $tmp4292 = *$tmp4291;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp4289, ((org$frostlang$frostc$Symbol*) $tmp4290), $tmp4292);
org$frostlang$frostc$MethodDecl* $tmp4293 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp4294 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
*(&local31) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4295 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4296 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4297 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4298 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4299 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4300 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4301 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block33:;
frost$core$Int $tmp4302 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:950:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4303 = $tmp3764.value;
int64_t $tmp4304 = $tmp4302.value;
bool $tmp4305 = $tmp4303 == $tmp4304;
frost$core$Bit $tmp4306 = (frost$core$Bit) {$tmp4305};
bool $tmp4307 = $tmp4306.value;
if ($tmp4307) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp4308 = (org$frostlang$frostc$Position*) ($tmp3762->$data + 0);
org$frostlang$frostc$Position $tmp4309 = *$tmp4308;
*(&local45) = $tmp4309;
org$frostlang$frostc$ASTNode** $tmp4310 = (org$frostlang$frostc$ASTNode**) ($tmp3762->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4311 = *$tmp4310;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4311));
org$frostlang$frostc$ASTNode* $tmp4312 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4312));
*(&local46) = $tmp4311;
org$frostlang$frostc$FixedArray** $tmp4313 = (org$frostlang$frostc$FixedArray**) ($tmp3762->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4314 = *$tmp4313;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
org$frostlang$frostc$FixedArray* $tmp4315 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
*(&local47) = $tmp4314;
org$frostlang$frostc$ASTNode** $tmp4316 = (org$frostlang$frostc$ASTNode**) ($tmp3762->$data + 40);
org$frostlang$frostc$ASTNode* $tmp4317 = *$tmp4316;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
org$frostlang$frostc$ASTNode* $tmp4318 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
*(&local48) = $tmp4317;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:951
frost$collections$HashMap* $tmp4319 = *(&local3);
frost$core$String* $tmp4320 = *(&local2);
frost$collections$Array* $tmp4321 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp4319), $tmp4320, ((frost$collections$List*) $tmp4321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:952
org$frostlang$frostc$ClassDecl** $tmp4322 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4323 = *$tmp4322;
frost$collections$Array** $tmp4324 = &$tmp4323->fields;
frost$collections$Array* $tmp4325 = *$tmp4324;
ITable* $tmp4326 = ((frost$collections$CollectionView*) $tmp4325)->$class->itable;
while ($tmp4326->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4326 = $tmp4326->next;
}
$fn4328 $tmp4327 = $tmp4326->methods[0];
frost$core$Int $tmp4329 = $tmp4327(((frost$collections$CollectionView*) $tmp4325));
*(&local49) = $tmp4329;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:953
org$frostlang$frostc$ClassDecl** $tmp4330 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4331 = *$tmp4330;
org$frostlang$frostc$Position $tmp4332 = *(&local45);
org$frostlang$frostc$ASTNode* $tmp4333 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp4334 = *(&local47);
org$frostlang$frostc$ASTNode* $tmp4335 = *(&local48);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp4331, $tmp4332, $tmp4333, $tmp4334, $tmp4335);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:954
frost$core$Int $tmp4336 = *(&local49);
org$frostlang$frostc$ClassDecl** $tmp4337 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4338 = *$tmp4337;
frost$collections$Array** $tmp4339 = &$tmp4338->fields;
frost$collections$Array* $tmp4340 = *$tmp4339;
ITable* $tmp4341 = ((frost$collections$CollectionView*) $tmp4340)->$class->itable;
while ($tmp4341->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4341 = $tmp4341->next;
}
$fn4343 $tmp4342 = $tmp4341->methods[0];
frost$core$Int $tmp4344 = $tmp4342(((frost$collections$CollectionView*) $tmp4340));
frost$core$Bit $tmp4345 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp4346 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp4336, $tmp4344, $tmp4345);
frost$core$Int $tmp4347 = $tmp4346.min;
*(&local50) = $tmp4347;
frost$core$Int $tmp4348 = $tmp4346.max;
frost$core$Bit $tmp4349 = $tmp4346.inclusive;
bool $tmp4350 = $tmp4349.value;
frost$core$Int $tmp4351 = (frost$core$Int) {1u};
if ($tmp4350) goto block107; else goto block108;
block107:;
int64_t $tmp4352 = $tmp4347.value;
int64_t $tmp4353 = $tmp4348.value;
bool $tmp4354 = $tmp4352 <= $tmp4353;
frost$core$Bit $tmp4355 = (frost$core$Bit) {$tmp4354};
bool $tmp4356 = $tmp4355.value;
if ($tmp4356) goto block104; else goto block105;
block108:;
int64_t $tmp4357 = $tmp4347.value;
int64_t $tmp4358 = $tmp4348.value;
bool $tmp4359 = $tmp4357 < $tmp4358;
frost$core$Bit $tmp4360 = (frost$core$Bit) {$tmp4359};
bool $tmp4361 = $tmp4360.value;
if ($tmp4361) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:955
org$frostlang$frostc$ClassDecl** $tmp4362 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4363 = *$tmp4362;
frost$collections$Array** $tmp4364 = &$tmp4363->fields;
frost$collections$Array* $tmp4365 = *$tmp4364;
frost$core$Int $tmp4366 = *(&local50);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Scanner.frost:955:62
frost$core$Int $tmp4367 = (frost$core$Int) {0u};
int64_t $tmp4368 = $tmp4366.value;
int64_t $tmp4369 = $tmp4367.value;
bool $tmp4370 = $tmp4368 >= $tmp4369;
frost$core$Bit $tmp4371 = (frost$core$Bit) {$tmp4370};
bool $tmp4372 = $tmp4371.value;
if ($tmp4372) goto block112; else goto block111;
block112:;
ITable* $tmp4373 = ((frost$collections$CollectionView*) $tmp4365)->$class->itable;
while ($tmp4373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4373 = $tmp4373->next;
}
$fn4375 $tmp4374 = $tmp4373->methods[0];
frost$core$Int $tmp4376 = $tmp4374(((frost$collections$CollectionView*) $tmp4365));
int64_t $tmp4377 = $tmp4366.value;
int64_t $tmp4378 = $tmp4376.value;
bool $tmp4379 = $tmp4377 < $tmp4378;
frost$core$Bit $tmp4380 = (frost$core$Bit) {$tmp4379};
bool $tmp4381 = $tmp4380.value;
if ($tmp4381) goto block110; else goto block111;
block111:;
frost$core$Int $tmp4382 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4383, $tmp4382, &$s4384);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp4385 = &$tmp4365->data;
frost$core$Object** $tmp4386 = *$tmp4385;
frost$core$Int64 $tmp4387 = frost$core$Int64$init$frost$core$Int($tmp4366);
int64_t $tmp4388 = $tmp4387.value;
frost$core$Object* $tmp4389 = $tmp4386[$tmp4388];
frost$core$Frost$ref$frost$core$Object$Q($tmp4389);
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4389)));
org$frostlang$frostc$FieldDecl* $tmp4390 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4390));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) $tmp4389);
frost$core$Frost$unref$frost$core$Object$Q($tmp4389);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:956
org$frostlang$frostc$FieldDecl* $tmp4391 = *(&local51);
org$frostlang$frostc$FieldDecl$Kind* $tmp4392 = &$tmp4391->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp4393 = *$tmp4392;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4394;
$tmp4394 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4394->value = $tmp4393;
frost$core$Int $tmp4395 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:956:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp4396 = &(&local53)->$rawValue;
*$tmp4396 = $tmp4395;
org$frostlang$frostc$FieldDecl$Kind $tmp4397 = *(&local53);
*(&local52) = $tmp4397;
org$frostlang$frostc$FieldDecl$Kind $tmp4398 = *(&local52);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4399;
$tmp4399 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4399->value = $tmp4398;
ITable* $tmp4400 = ((frost$core$Equatable*) $tmp4394)->$class->itable;
while ($tmp4400->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4400 = $tmp4400->next;
}
$fn4402 $tmp4401 = $tmp4400->methods[1];
frost$core$Bit $tmp4403 = $tmp4401(((frost$core$Equatable*) $tmp4394), ((frost$core$Equatable*) $tmp4399));
bool $tmp4404 = $tmp4403.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4399)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4394)));
if ($tmp4404) goto block115; else goto block114;
block115:;
org$frostlang$frostc$FieldDecl* $tmp4405 = *(&local51);
org$frostlang$frostc$Annotations** $tmp4406 = &$tmp4405->annotations;
org$frostlang$frostc$Annotations* $tmp4407 = *$tmp4406;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:957:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int* $tmp4408 = &$tmp4407->flags;
frost$core$Int $tmp4409 = *$tmp4408;
frost$core$Int $tmp4410 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4411 = $tmp4409.value;
int64_t $tmp4412 = $tmp4410.value;
int64_t $tmp4413 = $tmp4411 & $tmp4412;
frost$core$Int $tmp4414 = (frost$core$Int) {$tmp4413};
frost$core$Int $tmp4415 = (frost$core$Int) {0u};
int64_t $tmp4416 = $tmp4414.value;
int64_t $tmp4417 = $tmp4415.value;
bool $tmp4418 = $tmp4416 != $tmp4417;
frost$core$Bit $tmp4419 = (frost$core$Bit) {$tmp4418};
bool $tmp4420 = $tmp4419.value;
if ($tmp4420) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:958
org$frostlang$frostc$FieldDecl* $tmp4421 = *(&local51);
org$frostlang$frostc$Position* $tmp4422 = &((org$frostlang$frostc$Symbol*) $tmp4421)->position;
org$frostlang$frostc$Position $tmp4423 = *$tmp4422;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:958:42
frost$io$File** $tmp4424 = &param0->source;
frost$io$File* $tmp4425 = *$tmp4424;
frost$core$Bit $tmp4426 = (frost$core$Bit) {$tmp4425 != NULL};
bool $tmp4427 = $tmp4426.value;
if ($tmp4427) goto block120; else goto block121;
block121:;
frost$core$Int $tmp4428 = (frost$core$Int) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4429, $tmp4428, &$s4430);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp4431 = &param0->compiler;
frost$core$Weak* $tmp4432 = *$tmp4431;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4433 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4432);
bool $tmp4434 = $tmp4433.value;
if ($tmp4434) goto block123; else goto block124;
block124:;
frost$core$Int $tmp4435 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4436, $tmp4435);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4437 = &$tmp4432->value;
frost$core$Object* $tmp4438 = *$tmp4437;
frost$core$Frost$ref$frost$core$Object$Q($tmp4438);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4438), $tmp4423, &$s4439);
frost$core$Frost$unref$frost$core$Object$Q($tmp4438);
goto block114;
block114:;
org$frostlang$frostc$FieldDecl* $tmp4440 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Int $tmp4441 = *(&local50);
int64_t $tmp4442 = $tmp4348.value;
int64_t $tmp4443 = $tmp4441.value;
int64_t $tmp4444 = $tmp4442 - $tmp4443;
frost$core$Int $tmp4445 = (frost$core$Int) {$tmp4444};
if ($tmp4350) goto block126; else goto block127;
block126:;
int64_t $tmp4446 = $tmp4445.value;
int64_t $tmp4447 = $tmp4351.value;
bool $tmp4448 = $tmp4446 >= $tmp4447;
frost$core$Bit $tmp4449 = (frost$core$Bit) {$tmp4448};
bool $tmp4450 = $tmp4449.value;
if ($tmp4450) goto block125; else goto block105;
block127:;
int64_t $tmp4451 = $tmp4445.value;
int64_t $tmp4452 = $tmp4351.value;
bool $tmp4453 = $tmp4451 > $tmp4452;
frost$core$Bit $tmp4454 = (frost$core$Bit) {$tmp4453};
bool $tmp4455 = $tmp4454.value;
if ($tmp4455) goto block125; else goto block105;
block125:;
int64_t $tmp4456 = $tmp4441.value;
int64_t $tmp4457 = $tmp4351.value;
int64_t $tmp4458 = $tmp4456 + $tmp4457;
frost$core$Int $tmp4459 = (frost$core$Int) {$tmp4458};
*(&local50) = $tmp4459;
goto block104;
block105:;
org$frostlang$frostc$ASTNode* $tmp4460 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4460));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4461 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4461));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4462 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:964
frost$core$Int $tmp4463 = (frost$core$Int) {964u};
org$frostlang$frostc$ASTNode* $tmp4464 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:964:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4466 $tmp4465 = ($fn4466) ((frost$core$Object*) $tmp4464)->$class->vtable[0];
frost$core$String* $tmp4467 = $tmp4465(((frost$core$Object*) $tmp4464));
frost$core$String* $tmp4468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4469, $tmp4467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
frost$core$String* $tmp4470 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4468, &$s4471);
org$frostlang$frostc$ASTNode* $tmp4472 = *(&local4);
frost$core$Int* $tmp4473 = &$tmp4472->$rawValue;
frost$core$Int $tmp4474 = *$tmp4473;
frost$core$Int$wrapper* $tmp4475;
$tmp4475 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4475->value = $tmp4474;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:964:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4477 $tmp4476 = ($fn4477) ((frost$core$Object*) $tmp4475)->$class->vtable[0];
frost$core$String* $tmp4478 = $tmp4476(((frost$core$Object*) $tmp4475));
frost$core$String* $tmp4479 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4470, $tmp4478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
frost$core$String* $tmp4480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4479, &$s4481);
org$frostlang$frostc$ASTNode* $tmp4482 = *(&local4);
$fn4484 $tmp4483 = ($fn4484) $tmp4482->$class->vtable[2];
org$frostlang$frostc$Position $tmp4485 = $tmp4483($tmp4482);
org$frostlang$frostc$Position$wrapper* $tmp4486;
$tmp4486 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp4486->value = $tmp4485;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:964:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4488 $tmp4487 = ($fn4488) ((frost$core$Object*) $tmp4486)->$class->vtable[0];
frost$core$String* $tmp4489 = $tmp4487(((frost$core$Object*) $tmp4486));
frost$core$String* $tmp4490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4480, $tmp4489);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4489));
frost$core$String* $tmp4491 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4490, &$s4492);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4493, $tmp4463, $tmp4491);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3760);
org$frostlang$frostc$ASTNode* $tmp4494 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:968
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp4495 = &param0->source;
frost$io$File* $tmp4496 = *$tmp4495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
frost$io$File** $tmp4497 = &param0->source;
*$tmp4497 = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:969
frost$collections$Array* $tmp4498 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp4498)));
frost$collections$HashMap* $tmp4499 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp4500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4500));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp4501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp4502 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp4498);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:972
frost$core$Int $tmp4503 = (frost$core$Int) {972u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4504, $tmp4503);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp4505 = &param0->compiler;
frost$core$Weak* $tmp4506 = *$tmp4505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4506));
org$frostlang$frostc$ClassDecl** $tmp4507 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4508 = *$tmp4507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
frost$io$File** $tmp4509 = &param0->source;
frost$io$File* $tmp4510 = *$tmp4509;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
return;

}

