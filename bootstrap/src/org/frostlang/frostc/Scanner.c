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
#include "frost/collections/HashKey.h"
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
typedef org$frostlang$frostc$Position (*$fn463)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn491)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn495)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn500)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn513)(frost$core$Object*);
typedef frost$core$String* (*$fn523)(frost$core$Object*);
typedef frost$core$Bit (*$fn581)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn590)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn594)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn599)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn754)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn756)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn798)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn800)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn842)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn844)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn886)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn888)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn930)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn932)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1111)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1120)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1282)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1286)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1291)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1387)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1391)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1396)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1435)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1439)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1444)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1530)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1534)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1539)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1610)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1614)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1619)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1669)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1673)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1678)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1732)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1736)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1741)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1776)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1780)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1785)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1807)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1811)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1816)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2011)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2015)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2020)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2051)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2055)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2060)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2074)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2078)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2083)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2118)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2122)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2127)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2194)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2198)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2203)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2261)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2321)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2325)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2330)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2399)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn2413)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2417)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2422)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2481)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2510)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2561)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2825)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2829)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2921)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2963)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2967)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2972)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2985)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3003)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3052)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3056)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3061)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn3125)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn3145)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3171)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3175)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3180)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3227)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3302)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3306)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3311)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3416)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3420)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3425)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3439)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3454)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3471)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3504)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3513)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3564)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3575)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3584)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3635)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3644)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3657)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3661)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3666)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn3674)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3753)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3757)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3762)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3770)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3774)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3779)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3787)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3791)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3796)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3810)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn3852)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn4007)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4011)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4016)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn4130)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4134)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4139)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn4147)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4151)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4156)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn4209)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn4256)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4260)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4265)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn4506)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4520)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4535)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4554)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4660)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4685)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4722)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4749)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4813)(frost$core$Object*);
typedef frost$core$String* (*$fn4824)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn4831)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn4835)(frost$core$Object*);

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
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, -4705630147413002136, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -565795814387083701, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, 1726036079575195661, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, 1659788717951863933, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1094253743368195802, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, 2564706465071019727, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 4364512108910063541, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 6873686358610603073, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 9160589370450948847, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, -3895476746833326716, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 7435792352060934372, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, -507229471558551835, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, -8337610593683542155, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 6536665699122092278, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, 2083579122674506872, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, -1102905984370395173, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, 1659619246779549287, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, -2594619287818381368, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e", 9, 5956652778682659450, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 134526994446166888, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 4490930055742293818, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 5031055877270038133, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 4490930055742293818, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, -1205915675663244815, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 4490930055742293818, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 6601423246907155994, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 4490930055742293818, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 3008583721667412327, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 4490930055742293818, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, 5029378179413211882, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 3933979906453277221, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s993 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s1697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s1803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s1898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s2355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 135, 2600698620557366663, NULL };
static frost$core$String $s2451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 2793886441670762213, NULL };
static frost$core$String $s2601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -2702568160131628339, NULL };
static frost$core$String $s2709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, 5778656569050840872, NULL };
static frost$core$String $s2719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2720 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s2780 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2793 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2798 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2853 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s2862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x66\x72\x6f\x73\x74", 15, -7843772953422604045, NULL };
static frost$core$String $s2877 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s2924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3479509698475155476, NULL };
static frost$core$String $s2926 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s2953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s3000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s3010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3019 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s3038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s3086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s3120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -3719689727633176608, NULL };
static frost$core$String $s3167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s3199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s3281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 8996675876247625211, NULL };
static frost$core$String $s3372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, -3178355849381906807, NULL };
static frost$core$String $s3395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -8426410652778701193, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 1323168004075572057, NULL };
static frost$core$String $s3510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -157497934161719815, NULL };
static frost$core$String $s3722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 4069187544645537896, NULL };
static frost$core$String $s3816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3876 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3948 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s3972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s4001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s4052 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s4062 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s4123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, 4149591465855488060, NULL };
static frost$core$String $s4242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s4244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s4246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s4299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 6449659721254005836, NULL };
static frost$core$String $s4327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };
static frost$core$String $s4337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s4369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s4445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, 5778656569050840872, NULL };
static frost$core$String $s4454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s4490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s4515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s4528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s4562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s4563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s4575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s4608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, 5778656569050840872, NULL };
static frost$core$String $s4654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4668 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4710 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s4730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s4731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s4776 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3524753437392098394, NULL };
static frost$core$String $s4818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s4828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a", 2, 566763092841805498, NULL };
static frost$core$String $s4839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s4840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };

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
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433 != NULL};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block125; else goto block126;
block126:;
frost$core$Int $tmp436 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s437, $tmp436, &$s438);
abort(); // unreachable
block125:;
org$frostlang$frostc$Type* $tmp439 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
org$frostlang$frostc$Type* $tmp440 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local33) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
goto block123;
block124:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:91
frost$core$Weak** $tmp441 = &param0->compiler;
frost$core$Weak* $tmp442 = *$tmp441;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp443 = &$tmp442->_valid;
frost$core$Bit $tmp444 = *$tmp443;
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block129; else goto block130;
block130:;
frost$core$Int $tmp446 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s447, $tmp446);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp448 = &$tmp442->value;
frost$core$Object* $tmp449 = *$tmp448;
frost$core$Frost$ref$frost$core$Object$Q($tmp449);
org$frostlang$frostc$Type** $tmp450 = &((org$frostlang$frostc$Compiler*) $tmp449)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp451 = *$tmp450;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
org$frostlang$frostc$Type* $tmp452 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local33) = $tmp451;
frost$core$Frost$unref$frost$core$Object$Q($tmp449);
goto block123;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:93
frost$core$Weak** $tmp453 = &param0->compiler;
frost$core$Weak* $tmp454 = *$tmp453;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:93:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp455 = &$tmp454->_valid;
frost$core$Bit $tmp456 = *$tmp455;
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block133; else goto block134;
block134:;
frost$core$Int $tmp458 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s459, $tmp458);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp460 = &$tmp454->value;
frost$core$Object* $tmp461 = *$tmp460;
frost$core$Frost$ref$frost$core$Object$Q($tmp461);
$fn463 $tmp462 = ($fn463) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp464 = $tmp462(param1);
org$frostlang$frostc$Type$Kind $tmp465 = *(&local22);
frost$collections$Array* $tmp466 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp467 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp466);
org$frostlang$frostc$Type* $tmp468 = *(&local33);
frost$core$Int $tmp469 = (frost$core$Int) {0u};
org$frostlang$frostc$Type* $tmp470 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp461), $tmp464, $tmp465, ((frost$collections$ListView*) $tmp467), $tmp468, $tmp469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
frost$core$Frost$unref$frost$core$Object$Q($tmp461);
org$frostlang$frostc$Type* $tmp471 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local33) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp472 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local31) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp473 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp474 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp470;
block100:;
frost$core$Int $tmp475 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:96:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp476 = $tmp7.value;
int64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 == $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block135; else goto block136;
block135:;
org$frostlang$frostc$Position* $tmp481 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp482 = *$tmp481;
*(&local34) = $tmp482;
org$frostlang$frostc$FixedArray** $tmp483 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp484 = *$tmp483;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
org$frostlang$frostc$FixedArray* $tmp485 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local35) = $tmp484;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:97
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp486 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp486);
*(&local36) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$collections$Array* $tmp487 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local36) = $tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:98
org$frostlang$frostc$FixedArray* $tmp488 = *(&local35);
ITable* $tmp489 = ((frost$collections$Iterable*) $tmp488)->$class->itable;
while ($tmp489->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
frost$collections$Iterator* $tmp492 = $tmp490(((frost$collections$Iterable*) $tmp488));
goto block138;
block138:;
ITable* $tmp493 = $tmp492->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Bit $tmp496 = $tmp494($tmp492);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block140; else goto block139;
block139:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp498 = $tmp492->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[1];
frost$core$Object* $tmp501 = $tmp499($tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp501)));
org$frostlang$frostc$ASTNode* $tmp502 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp501);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:99
frost$collections$Array* $tmp503 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp504 = *(&local37);
org$frostlang$frostc$Type* $tmp505 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp504);
frost$collections$Array$add$frost$collections$Array$T($tmp503, ((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q($tmp501);
org$frostlang$frostc$ASTNode* $tmp506 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block138;
block140:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:101
frost$collections$Array* $tmp507 = *(&local36);
org$frostlang$frostc$Type* $tmp508 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp507));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$collections$Array* $tmp509 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local36) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp510 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp508;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:104
frost$core$Int $tmp511 = (frost$core$Int) {104u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn513 $tmp512 = ($fn513) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp514 = $tmp512(((frost$core$Object*) param1));
frost$core$String* $tmp515 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s516, $tmp514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$String* $tmp517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp515, &$s518);
frost$core$Int* $tmp519 = &param1->$rawValue;
frost$core$Int $tmp520 = *$tmp519;
frost$core$Int$wrapper* $tmp521;
$tmp521 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp521->value = $tmp520;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn523 $tmp522 = ($fn523) ((frost$core$Object*) $tmp521)->$class->vtable[0];
frost$core$String* $tmp524 = $tmp522(((frost$core$Object*) $tmp521));
frost$core$String* $tmp525 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp517, $tmp524);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$String* $tmp526 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp525, &$s527);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s528, $tmp511, $tmp526);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:107
frost$core$Int $tmp529 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s530, $tmp529);
abort(); // unreachable

}
frost$core$Int org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int param2, frost$core$Int param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:111
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:111:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp531 = param2.value;
int64_t $tmp532 = param3.value;
int64_t $tmp533 = $tmp531 & $tmp532;
frost$core$Int $tmp534 = (frost$core$Int) {$tmp533};
frost$core$Int $tmp535 = (frost$core$Int) {0u};
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
bool $tmp538 = $tmp536 != $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:112
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:112:18
frost$io$File** $tmp541 = &param0->source;
frost$io$File* $tmp542 = *$tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542 != NULL};
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block5; else goto block6;
block6:;
frost$core$Int $tmp545 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s546, $tmp545, &$s547);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp548 = &param0->compiler;
frost$core$Weak* $tmp549 = *$tmp548;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp550 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp549);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block8; else goto block9;
block9:;
frost$core$Int $tmp552 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s553, $tmp552);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp554 = &$tmp549->value;
frost$core$Object* $tmp555 = *$tmp554;
frost$core$Frost$ref$frost$core$Object$Q($tmp555);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp555), param1, &$s556);
frost$core$Frost$unref$frost$core$Object$Q($tmp555);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:114
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp557 = param2.value;
int64_t $tmp558 = param3.value;
int64_t $tmp559 = $tmp557 | $tmp558;
frost$core$Int $tmp560 = (frost$core$Int) {$tmp559};
return $tmp560;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:121
frost$core$Bit $tmp561 = (frost$core$Bit) {param3 != NULL};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:122
frost$core$Bit $tmp563 = (frost$core$Bit) {true};
return $tmp563;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:124
frost$core$String* $tmp564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s565, param2);
frost$core$String* $tmp566 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp564, &$s567);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:124:26
frost$io$File** $tmp568 = &param0->source;
frost$io$File* $tmp569 = *$tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569 != NULL};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block4; else goto block5;
block5:;
frost$core$Int $tmp572 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s573, $tmp572, &$s574);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp575 = &param0->compiler;
frost$core$Weak* $tmp576 = *$tmp575;
frost$core$Object* $tmp577 = frost$core$Weak$get$R$frost$core$Weak$T($tmp576);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp577), param1, $tmp566);
frost$core$Frost$unref$frost$core$Object$Q($tmp577);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:125
frost$core$Bit $tmp578 = (frost$core$Bit) {false};
return $tmp578;

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
frost$core$Int $tmp579 = (frost$core$Int) {0u};
*(&local0) = $tmp579;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:119
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp580 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local1) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp582 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Scanner.frost:120:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp583 = &$tmp582->pointer;
*$tmp583 = ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp584 = &$tmp582->target;
frost$core$Immutable* $tmp585 = *$tmp584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Immutable** $tmp586 = &$tmp582->target;
*$tmp586 = ((frost$core$Immutable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Method* $tmp587 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local2) = $tmp582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:127
ITable* $tmp588 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp588->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp588 = $tmp588->next;
}
$fn590 $tmp589 = $tmp588->methods[0];
frost$collections$Iterator* $tmp591 = $tmp589(((frost$collections$Iterable*) param1));
goto block2;
block2:;
ITable* $tmp592 = $tmp591->$class->itable;
while ($tmp592->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp592 = $tmp592->next;
}
$fn594 $tmp593 = $tmp592->methods[0];
frost$core$Bit $tmp595 = $tmp593($tmp591);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block4; else goto block3;
block3:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp597 = $tmp591->$class->itable;
while ($tmp597->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[1];
frost$core$Object* $tmp600 = $tmp598($tmp591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp600)));
org$frostlang$frostc$ASTNode* $tmp601 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp600);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:128
org$frostlang$frostc$ASTNode* $tmp602 = *(&local3);
frost$core$Int* $tmp603 = &$tmp602->$rawValue;
frost$core$Int $tmp604 = *$tmp603;
frost$core$Int $tmp605 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:129:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp606 = $tmp604.value;
int64_t $tmp607 = $tmp605.value;
bool $tmp608 = $tmp606 == $tmp607;
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp608};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp611 = (org$frostlang$frostc$Position*) ($tmp602->$data + 0);
org$frostlang$frostc$Position $tmp612 = *$tmp611;
*(&local4) = $tmp612;
frost$core$String** $tmp613 = (frost$core$String**) ($tmp602->$data + 24);
frost$core$String* $tmp614 = *$tmp613;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$String* $tmp615 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local5) = $tmp614;
frost$core$String** $tmp616 = (frost$core$String**) ($tmp602->$data + 32);
frost$core$String* $tmp617 = *$tmp616;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$core$String* $tmp618 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local6) = $tmp617;
org$frostlang$frostc$ASTNode** $tmp619 = (org$frostlang$frostc$ASTNode**) ($tmp602->$data + 40);
org$frostlang$frostc$ASTNode* $tmp620 = *$tmp619;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
org$frostlang$frostc$ASTNode* $tmp621 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local7) = $tmp620;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:130
org$frostlang$frostc$ASTNode* $tmp622 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
org$frostlang$frostc$ASTNode* $tmp623 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local8) = $tmp622;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:131
frost$core$String* $tmp624 = *(&local5);
frost$core$Bit $tmp625 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s626);
bool $tmp627 = $tmp625.value;
if ($tmp627) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:133
org$frostlang$frostc$Position $tmp628 = *(&local4);
frost$core$Int $tmp629 = *(&local0);
frost$core$Int $tmp630 = (frost$core$Int) {2u};
frost$core$Int $tmp631 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp628, $tmp629, $tmp630);
*(&local0) = $tmp631;
goto block9;
block11:;
frost$core$Bit $tmp632 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s633);
bool $tmp634 = $tmp632.value;
if ($tmp634) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:136
org$frostlang$frostc$Position $tmp635 = *(&local4);
frost$core$Int $tmp636 = *(&local0);
frost$core$Int $tmp637 = (frost$core$Int) {4u};
frost$core$Int $tmp638 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp635, $tmp636, $tmp637);
*(&local0) = $tmp638;
goto block9;
block13:;
frost$core$Bit $tmp639 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s640);
bool $tmp641 = $tmp639.value;
if ($tmp641) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:139
org$frostlang$frostc$Position $tmp642 = *(&local4);
frost$core$Int $tmp643 = *(&local0);
frost$core$Int $tmp644 = (frost$core$Int) {8u};
frost$core$Int $tmp645 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp642, $tmp643, $tmp644);
*(&local0) = $tmp645;
goto block9;
block15:;
frost$core$Bit $tmp646 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s647);
bool $tmp648 = $tmp646.value;
if ($tmp648) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:142
org$frostlang$frostc$Position $tmp649 = *(&local4);
frost$core$Int $tmp650 = *(&local0);
frost$core$Int $tmp651 = (frost$core$Int) {16u};
frost$core$Int $tmp652 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp649, $tmp650, $tmp651);
*(&local0) = $tmp652;
goto block9;
block17:;
frost$core$Bit $tmp653 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s654);
bool $tmp655 = $tmp653.value;
if ($tmp655) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:145
org$frostlang$frostc$Position $tmp656 = *(&local4);
frost$core$Int $tmp657 = *(&local0);
frost$core$Int $tmp658 = (frost$core$Int) {32u};
frost$core$Int $tmp659 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp656, $tmp657, $tmp658);
*(&local0) = $tmp659;
goto block9;
block19:;
frost$core$Bit $tmp660 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s661);
bool $tmp662 = $tmp660.value;
if ($tmp662) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:148
org$frostlang$frostc$Position $tmp663 = *(&local4);
frost$core$Int $tmp664 = *(&local0);
frost$core$Int $tmp665 = (frost$core$Int) {64u};
frost$core$Int $tmp666 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp663, $tmp664, $tmp665);
*(&local0) = $tmp666;
goto block9;
block21:;
frost$core$Bit $tmp667 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s668);
bool $tmp669 = $tmp667.value;
if ($tmp669) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:151
org$frostlang$frostc$Position $tmp670 = *(&local4);
frost$core$Int $tmp671 = *(&local0);
frost$core$Int $tmp672 = (frost$core$Int) {128u};
frost$core$Int $tmp673 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp670, $tmp671, $tmp672);
*(&local0) = $tmp673;
goto block9;
block23:;
frost$core$Bit $tmp674 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s675);
bool $tmp676 = $tmp674.value;
if ($tmp676) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:154
org$frostlang$frostc$Position $tmp677 = *(&local4);
frost$core$Int $tmp678 = *(&local0);
frost$core$Int $tmp679 = (frost$core$Int) {256u};
frost$core$Int $tmp680 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp677, $tmp678, $tmp679);
*(&local0) = $tmp680;
goto block9;
block25:;
frost$core$Bit $tmp681 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s682);
bool $tmp683 = $tmp681.value;
if ($tmp683) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:157
org$frostlang$frostc$Position $tmp684 = *(&local4);
frost$core$Int $tmp685 = *(&local0);
frost$core$Int $tmp686 = (frost$core$Int) {512u};
frost$core$Int $tmp687 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp684, $tmp685, $tmp686);
*(&local0) = $tmp687;
goto block9;
block27:;
frost$core$Bit $tmp688 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s689);
bool $tmp690 = $tmp688.value;
if ($tmp690) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:160
org$frostlang$frostc$Position $tmp691 = *(&local4);
frost$core$Int $tmp692 = *(&local0);
frost$core$Int $tmp693 = (frost$core$Int) {1024u};
frost$core$Int $tmp694 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp691, $tmp692, $tmp693);
*(&local0) = $tmp694;
goto block9;
block29:;
frost$core$Bit $tmp695 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s696);
bool $tmp697 = $tmp695.value;
if ($tmp697) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:163
org$frostlang$frostc$Position $tmp698 = *(&local4);
frost$core$Int $tmp699 = *(&local0);
frost$core$Int $tmp700 = (frost$core$Int) {2048u};
frost$core$Int $tmp701 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp698, $tmp699, $tmp700);
*(&local0) = $tmp701;
goto block9;
block31:;
frost$core$Bit $tmp702 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s703);
bool $tmp704 = $tmp702.value;
if ($tmp704) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:166
org$frostlang$frostc$Position $tmp705 = *(&local4);
frost$core$Int $tmp706 = *(&local0);
frost$core$Int $tmp707 = (frost$core$Int) {4096u};
frost$core$Int $tmp708 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp705, $tmp706, $tmp707);
*(&local0) = $tmp708;
goto block9;
block33:;
frost$core$Bit $tmp709 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s710);
bool $tmp711 = $tmp709.value;
if ($tmp711) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:169
org$frostlang$frostc$Position $tmp712 = *(&local4);
frost$core$Int $tmp713 = *(&local0);
frost$core$Int $tmp714 = (frost$core$Int) {16384u};
frost$core$Int $tmp715 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp712, $tmp713, $tmp714);
*(&local0) = $tmp715;
goto block9;
block35:;
frost$core$Bit $tmp716 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s717);
bool $tmp718 = $tmp716.value;
if ($tmp718) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:172
org$frostlang$frostc$Position $tmp719 = *(&local4);
frost$core$Int $tmp720 = *(&local0);
frost$core$Int $tmp721 = (frost$core$Int) {32768u};
frost$core$Int $tmp722 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp719, $tmp720, $tmp721);
*(&local0) = $tmp722;
goto block9;
block37:;
frost$core$Bit $tmp723 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s724);
bool $tmp725 = $tmp723.value;
if ($tmp725) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:175
org$frostlang$frostc$Position $tmp726 = *(&local4);
frost$core$Int $tmp727 = *(&local0);
frost$core$Int $tmp728 = (frost$core$Int) {131072u};
frost$core$Int $tmp729 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp726, $tmp727, $tmp728);
*(&local0) = $tmp729;
goto block9;
block39:;
frost$core$Bit $tmp730 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s731);
bool $tmp732 = $tmp730.value;
if ($tmp732) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:178
org$frostlang$frostc$Position $tmp733 = *(&local4);
frost$core$Int $tmp734 = *(&local0);
frost$core$Int $tmp735 = (frost$core$Int) {262144u};
frost$core$Int $tmp736 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp733, $tmp734, $tmp735);
*(&local0) = $tmp736;
goto block9;
block41:;
frost$core$Bit $tmp737 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s738);
bool $tmp739 = $tmp737.value;
if ($tmp739) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:181
frost$collections$Array* $tmp740 = *(&local1);
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740 == NULL};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:182
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp743 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp743);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$collections$Array* $tmp744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local1) = $tmp743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:184
frost$core$Method* $tmp745 = *(&local2);
org$frostlang$frostc$Position $tmp746 = *(&local4);
frost$core$String* $tmp747 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp748 = *(&local8);
frost$core$Int8** $tmp749 = &$tmp745->pointer;
frost$core$Int8* $tmp750 = *$tmp749;
frost$core$Immutable** $tmp751 = &$tmp745->target;
frost$core$Immutable* $tmp752 = *$tmp751;
bool $tmp753 = $tmp752 != ((frost$core$Immutable*) NULL);
if ($tmp753) goto block48; else goto block49;
block49:;
frost$core$Bit $tmp755 = (($fn754) $tmp750)(param0, $tmp746, $tmp747, $tmp748);
*(&local9) = $tmp755;
goto block50;
block48:;
frost$core$Bit $tmp757 = (($fn756) $tmp750)($tmp752, param0, $tmp746, $tmp747, $tmp748);
*(&local9) = $tmp757;
goto block50;
block50:;
frost$core$Bit $tmp758 = *(&local9);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:185
frost$collections$Array* $tmp760 = *(&local1);
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760 != NULL};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block51; else goto block52;
block52:;
frost$core$Int $tmp763 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s764, $tmp763, &$s765);
abort(); // unreachable
block51:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp766 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp767 = (frost$core$Int) {0u};
frost$core$String* $tmp768 = *(&local6);
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768 != NULL};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block53; else goto block54;
block54:;
frost$core$Int $tmp771 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s772, $tmp771, &$s773);
abort(); // unreachable
block53:;
org$frostlang$frostc$ASTNode* $tmp774 = *(&local8);
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774 != NULL};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block55; else goto block56;
block56:;
frost$core$Int $tmp777 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s778, $tmp777, &$s779);
abort(); // unreachable
block55:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp766, $tmp767, $tmp768, $tmp774);
frost$collections$Array$add$frost$collections$Array$T($tmp760, ((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:186
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp780 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block47:;
goto block9;
block43:;
frost$core$Bit $tmp781 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s782);
bool $tmp783 = $tmp781.value;
if ($tmp783) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:190
frost$collections$Array* $tmp784 = *(&local1);
frost$core$Bit $tmp785 = (frost$core$Bit) {$tmp784 == NULL};
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:191
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp787 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp787);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$collections$Array* $tmp788 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local1) = $tmp787;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
goto block60;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:193
frost$core$Method* $tmp789 = *(&local2);
org$frostlang$frostc$Position $tmp790 = *(&local4);
frost$core$String* $tmp791 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp792 = *(&local8);
frost$core$Int8** $tmp793 = &$tmp789->pointer;
frost$core$Int8* $tmp794 = *$tmp793;
frost$core$Immutable** $tmp795 = &$tmp789->target;
frost$core$Immutable* $tmp796 = *$tmp795;
bool $tmp797 = $tmp796 != ((frost$core$Immutable*) NULL);
if ($tmp797) goto block63; else goto block64;
block64:;
frost$core$Bit $tmp799 = (($fn798) $tmp794)(param0, $tmp790, $tmp791, $tmp792);
*(&local10) = $tmp799;
goto block65;
block63:;
frost$core$Bit $tmp801 = (($fn800) $tmp794)($tmp796, param0, $tmp790, $tmp791, $tmp792);
*(&local10) = $tmp801;
goto block65;
block65:;
frost$core$Bit $tmp802 = *(&local10);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:194
frost$collections$Array* $tmp804 = *(&local1);
frost$core$Bit $tmp805 = (frost$core$Bit) {$tmp804 != NULL};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block66; else goto block67;
block67:;
frost$core$Int $tmp807 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s808, $tmp807, &$s809);
abort(); // unreachable
block66:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp810 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp811 = (frost$core$Int) {1u};
frost$core$String* $tmp812 = *(&local6);
frost$core$Bit $tmp813 = (frost$core$Bit) {$tmp812 != NULL};
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block68; else goto block69;
block69:;
frost$core$Int $tmp815 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s816, $tmp815, &$s817);
abort(); // unreachable
block68:;
org$frostlang$frostc$ASTNode* $tmp818 = *(&local8);
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818 != NULL};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block70; else goto block71;
block71:;
frost$core$Int $tmp821 = (frost$core$Int) {194u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s822, $tmp821, &$s823);
abort(); // unreachable
block70:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp810, $tmp811, $tmp812, $tmp818);
frost$collections$Array$add$frost$collections$Array$T($tmp804, ((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp824 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block62;
block62:;
goto block9;
block58:;
frost$core$Bit $tmp825 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s826);
bool $tmp827 = $tmp825.value;
if ($tmp827) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:199
frost$collections$Array* $tmp828 = *(&local1);
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828 == NULL};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:200
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp831 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$collections$Array* $tmp832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local1) = $tmp831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
goto block75;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:202
frost$core$Method* $tmp833 = *(&local2);
org$frostlang$frostc$Position $tmp834 = *(&local4);
frost$core$String* $tmp835 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp836 = *(&local8);
frost$core$Int8** $tmp837 = &$tmp833->pointer;
frost$core$Int8* $tmp838 = *$tmp837;
frost$core$Immutable** $tmp839 = &$tmp833->target;
frost$core$Immutable* $tmp840 = *$tmp839;
bool $tmp841 = $tmp840 != ((frost$core$Immutable*) NULL);
if ($tmp841) goto block78; else goto block79;
block79:;
frost$core$Bit $tmp843 = (($fn842) $tmp838)(param0, $tmp834, $tmp835, $tmp836);
*(&local11) = $tmp843;
goto block80;
block78:;
frost$core$Bit $tmp845 = (($fn844) $tmp838)($tmp840, param0, $tmp834, $tmp835, $tmp836);
*(&local11) = $tmp845;
goto block80;
block80:;
frost$core$Bit $tmp846 = *(&local11);
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:203
frost$collections$Array* $tmp848 = *(&local1);
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848 != NULL};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block81; else goto block82;
block82:;
frost$core$Int $tmp851 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s852, $tmp851, &$s853);
abort(); // unreachable
block81:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp854 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp855 = (frost$core$Int) {2u};
frost$core$String* $tmp856 = *(&local6);
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856 != NULL};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block83; else goto block84;
block84:;
frost$core$Int $tmp859 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s860, $tmp859, &$s861);
abort(); // unreachable
block83:;
org$frostlang$frostc$ASTNode* $tmp862 = *(&local8);
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862 != NULL};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block85; else goto block86;
block86:;
frost$core$Int $tmp865 = (frost$core$Int) {203u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s866, $tmp865, &$s867);
abort(); // unreachable
block85:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp854, $tmp855, $tmp856, $tmp862);
frost$collections$Array$add$frost$collections$Array$T($tmp848, ((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:204
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp868 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block77;
block77:;
goto block9;
block73:;
frost$core$Bit $tmp869 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s870);
bool $tmp871 = $tmp869.value;
if ($tmp871) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:208
frost$collections$Array* $tmp872 = *(&local1);
frost$core$Bit $tmp873 = (frost$core$Bit) {$tmp872 == NULL};
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:209
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp875 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp875);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
frost$collections$Array* $tmp876 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local1) = $tmp875;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
goto block90;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:211
frost$core$Method* $tmp877 = *(&local2);
org$frostlang$frostc$Position $tmp878 = *(&local4);
frost$core$String* $tmp879 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp880 = *(&local8);
frost$core$Int8** $tmp881 = &$tmp877->pointer;
frost$core$Int8* $tmp882 = *$tmp881;
frost$core$Immutable** $tmp883 = &$tmp877->target;
frost$core$Immutable* $tmp884 = *$tmp883;
bool $tmp885 = $tmp884 != ((frost$core$Immutable*) NULL);
if ($tmp885) goto block93; else goto block94;
block94:;
frost$core$Bit $tmp887 = (($fn886) $tmp882)(param0, $tmp878, $tmp879, $tmp880);
*(&local12) = $tmp887;
goto block95;
block93:;
frost$core$Bit $tmp889 = (($fn888) $tmp882)($tmp884, param0, $tmp878, $tmp879, $tmp880);
*(&local12) = $tmp889;
goto block95;
block95:;
frost$core$Bit $tmp890 = *(&local12);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:212
frost$collections$Array* $tmp892 = *(&local1);
frost$core$Bit $tmp893 = (frost$core$Bit) {$tmp892 != NULL};
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block96; else goto block97;
block97:;
frost$core$Int $tmp895 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s896, $tmp895, &$s897);
abort(); // unreachable
block96:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp898 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp899 = (frost$core$Int) {3u};
frost$core$String* $tmp900 = *(&local6);
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900 != NULL};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block98; else goto block99;
block99:;
frost$core$Int $tmp903 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s904, $tmp903, &$s905);
abort(); // unreachable
block98:;
org$frostlang$frostc$ASTNode* $tmp906 = *(&local8);
frost$core$Bit $tmp907 = (frost$core$Bit) {$tmp906 != NULL};
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block100; else goto block101;
block101:;
frost$core$Int $tmp909 = (frost$core$Int) {212u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s910, $tmp909, &$s911);
abort(); // unreachable
block100:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp898, $tmp899, $tmp900, $tmp906);
frost$collections$Array$add$frost$collections$Array$T($tmp892, ((frost$core$Object*) $tmp898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp912 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block92;
block92:;
goto block9;
block88:;
frost$core$Bit $tmp913 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp624, &$s914);
bool $tmp915 = $tmp913.value;
if ($tmp915) goto block102; else goto block103;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:217
frost$collections$Array* $tmp916 = *(&local1);
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916 == NULL};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:218
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp919 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
frost$collections$Array* $tmp920 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
*(&local1) = $tmp919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
goto block105;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:220
frost$core$Method* $tmp921 = *(&local2);
org$frostlang$frostc$Position $tmp922 = *(&local4);
frost$core$String* $tmp923 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp924 = *(&local8);
frost$core$Int8** $tmp925 = &$tmp921->pointer;
frost$core$Int8* $tmp926 = *$tmp925;
frost$core$Immutable** $tmp927 = &$tmp921->target;
frost$core$Immutable* $tmp928 = *$tmp927;
bool $tmp929 = $tmp928 != ((frost$core$Immutable*) NULL);
if ($tmp929) goto block108; else goto block109;
block109:;
frost$core$Bit $tmp931 = (($fn930) $tmp926)(param0, $tmp922, $tmp923, $tmp924);
*(&local13) = $tmp931;
goto block110;
block108:;
frost$core$Bit $tmp933 = (($fn932) $tmp926)($tmp928, param0, $tmp922, $tmp923, $tmp924);
*(&local13) = $tmp933;
goto block110;
block110:;
frost$core$Bit $tmp934 = *(&local13);
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:221
frost$collections$Array* $tmp936 = *(&local1);
frost$core$Bit $tmp937 = (frost$core$Bit) {$tmp936 != NULL};
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block111; else goto block112;
block112:;
frost$core$Int $tmp939 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s940, $tmp939, &$s941);
abort(); // unreachable
block111:;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp942 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp943 = (frost$core$Int) {4u};
frost$core$String* $tmp944 = *(&local6);
frost$core$Bit $tmp945 = (frost$core$Bit) {$tmp944 != NULL};
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block113; else goto block114;
block114:;
frost$core$Int $tmp947 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s948, $tmp947, &$s949);
abort(); // unreachable
block113:;
org$frostlang$frostc$ASTNode* $tmp950 = *(&local8);
frost$core$Bit $tmp951 = (frost$core$Bit) {$tmp950 != NULL};
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block115; else goto block116;
block116:;
frost$core$Int $tmp953 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s954, $tmp953, &$s955);
abort(); // unreachable
block115:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp942, $tmp943, $tmp944, $tmp950);
frost$collections$Array$add$frost$collections$Array$T($tmp936, ((frost$core$Object*) $tmp942));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp956 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block107;
block107:;
goto block9;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:226
org$frostlang$frostc$Position $tmp957 = *(&local4);
frost$core$String* $tmp958 = *(&local5);
frost$core$String* $tmp959 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s960, $tmp958);
frost$core$String* $tmp961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp959, &$s962);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:226:34
frost$io$File** $tmp963 = &param0->source;
frost$io$File* $tmp964 = *$tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964 != NULL};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block118; else goto block119;
block119:;
frost$core$Int $tmp967 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s968, $tmp967, &$s969);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp970 = &param0->compiler;
frost$core$Weak* $tmp971 = *$tmp970;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp972 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp971);
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block121; else goto block122;
block122:;
frost$core$Int $tmp974 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s975, $tmp974);
abort(); // unreachable
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp976 = &$tmp971->value;
frost$core$Object* $tmp977 = *$tmp976;
frost$core$Frost$ref$frost$core$Object$Q($tmp977);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp977), $tmp957, $tmp961);
frost$core$Frost$unref$frost$core$Object$Q($tmp977);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:229
org$frostlang$frostc$ASTNode* $tmp978 = *(&local8);
frost$core$Bit $tmp979 = (frost$core$Bit) {$tmp978 != NULL};
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block123; else goto block124;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:230
org$frostlang$frostc$Position $tmp981 = *(&local4);
frost$core$String* $tmp982 = *(&local5);
frost$core$String* $tmp983 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s984, $tmp982);
frost$core$String* $tmp985 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp983, &$s986);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:230:30
frost$io$File** $tmp987 = &param0->source;
frost$io$File* $tmp988 = *$tmp987;
frost$core$Bit $tmp989 = (frost$core$Bit) {$tmp988 != NULL};
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block126; else goto block127;
block127:;
frost$core$Int $tmp991 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s992, $tmp991, &$s993);
abort(); // unreachable
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp994 = &param0->compiler;
frost$core$Weak* $tmp995 = *$tmp994;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp996 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp995);
bool $tmp997 = $tmp996.value;
if ($tmp997) goto block129; else goto block130;
block130:;
frost$core$Int $tmp998 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s999, $tmp998);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1000 = &$tmp995->value;
frost$core$Object* $tmp1001 = *$tmp1000;
frost$core$Frost$ref$frost$core$Object$Q($tmp1001);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp1001), $tmp981, $tmp985);
frost$core$Frost$unref$frost$core$Object$Q($tmp1001);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
goto block124;
block124:;
org$frostlang$frostc$ASTNode* $tmp1002 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1003 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1004 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp1005 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp600);
org$frostlang$frostc$ASTNode* $tmp1006 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:234
frost$core$Int $tmp1007 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1008, $tmp1007);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:238
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp1009 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp1010 = *(&local0);
frost$collections$Array* $tmp1011 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp1009, $tmp1010, ((frost$collections$ListView*) $tmp1011));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Method* $tmp1012 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$collections$Array* $tmp1013 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp1009;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:243
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:245
frost$core$Bit $tmp1014 = (frost$core$Bit) {param3 == NULL};
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:246
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1016 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:249
frost$core$Bit $tmp1017 = (frost$core$Bit) {param3 != NULL};
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block4; else goto block5;
block5:;
frost$core$Int $tmp1019 = (frost$core$Int) {249u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1020, $tmp1019, &$s1021);
abort(); // unreachable
block4:;
frost$core$Int* $tmp1022 = &param3->$rawValue;
frost$core$Int $tmp1023 = *$tmp1022;
frost$core$Int $tmp1024 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:250:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1025 = $tmp1023.value;
int64_t $tmp1026 = $tmp1024.value;
bool $tmp1027 = $tmp1025 == $tmp1026;
frost$core$Bit $tmp1028 = (frost$core$Bit) {$tmp1027};
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp1030 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1031 = *$tmp1030;
*(&local1) = $tmp1031;
frost$core$String** $tmp1032 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp1033 = *$tmp1032;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$String* $tmp1034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local2) = $tmp1033;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:251
frost$core$String* $tmp1035 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$String* $tmp1036 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local0) = $tmp1035;
frost$core$String* $tmp1037 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:254
frost$core$Int $tmp1038 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1039, $tmp1038);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:258
org$frostlang$frostc$Annotations* $tmp1040 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
org$frostlang$frostc$Annotations* $tmp1041 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local3) = $tmp1040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:259
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:260
frost$core$Int* $tmp1042 = &param5->$rawValue;
frost$core$Int $tmp1043 = *$tmp1042;
frost$core$Int $tmp1044 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:261:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1045 = $tmp1043.value;
int64_t $tmp1046 = $tmp1044.value;
bool $tmp1047 = $tmp1045 == $tmp1046;
frost$core$Bit $tmp1048 = (frost$core$Bit) {$tmp1047};
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp1050 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp1051 = *$tmp1050;
org$frostlang$frostc$Variable$Kind* $tmp1052 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp1053 = *$tmp1052;
*(&local5) = $tmp1053;
org$frostlang$frostc$FixedArray** $tmp1054 = (org$frostlang$frostc$FixedArray**) (param5->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1055 = *$tmp1054;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
org$frostlang$frostc$FixedArray* $tmp1056 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
*(&local6) = $tmp1055;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:262
org$frostlang$frostc$Variable$Kind $tmp1057 = *(&local5);
frost$core$Int $tmp1058 = $tmp1057.$rawValue;
frost$core$Int $tmp1059 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:263:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1060 = $tmp1058.value;
int64_t $tmp1061 = $tmp1059.value;
bool $tmp1062 = $tmp1060 == $tmp1061;
frost$core$Bit $tmp1063 = (frost$core$Bit) {$tmp1062};
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:264
frost$core$Int $tmp1065 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:264:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1066 = &(&local8)->$rawValue;
*$tmp1066 = $tmp1065;
org$frostlang$frostc$FieldDecl$Kind $tmp1067 = *(&local8);
*(&local7) = $tmp1067;
org$frostlang$frostc$FieldDecl$Kind $tmp1068 = *(&local7);
*(&local4) = $tmp1068;
goto block14;
block16:;
frost$core$Int $tmp1069 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:266:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1070 = $tmp1058.value;
int64_t $tmp1071 = $tmp1069.value;
bool $tmp1072 = $tmp1070 == $tmp1071;
frost$core$Bit $tmp1073 = (frost$core$Bit) {$tmp1072};
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:267
frost$core$Int $tmp1075 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:267:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1076 = &(&local10)->$rawValue;
*$tmp1076 = $tmp1075;
org$frostlang$frostc$FieldDecl$Kind $tmp1077 = *(&local10);
*(&local9) = $tmp1077;
org$frostlang$frostc$FieldDecl$Kind $tmp1078 = *(&local9);
*(&local4) = $tmp1078;
goto block14;
block20:;
frost$core$Int $tmp1079 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:269:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1080 = $tmp1058.value;
int64_t $tmp1081 = $tmp1079.value;
bool $tmp1082 = $tmp1080 == $tmp1081;
frost$core$Bit $tmp1083 = (frost$core$Bit) {$tmp1082};
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:270
frost$core$Int $tmp1085 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:270:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1086 = &(&local12)->$rawValue;
*$tmp1086 = $tmp1085;
org$frostlang$frostc$FieldDecl$Kind $tmp1087 = *(&local12);
*(&local11) = $tmp1087;
org$frostlang$frostc$FieldDecl$Kind $tmp1088 = *(&local11);
*(&local4) = $tmp1088;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:271
org$frostlang$frostc$Annotations* $tmp1089 = *(&local3);
frost$core$Int* $tmp1090 = &$tmp1089->flags;
frost$core$Int $tmp1091 = *$tmp1090;
frost$core$Int $tmp1092 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:271:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp1093 = $tmp1091.value;
int64_t $tmp1094 = $tmp1092.value;
int64_t $tmp1095 = $tmp1093 | $tmp1094;
frost$core$Int $tmp1096 = (frost$core$Int) {$tmp1095};
frost$core$Int* $tmp1097 = &$tmp1089->flags;
*$tmp1097 = $tmp1096;
goto block14;
block24:;
frost$core$Int $tmp1098 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:273:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1099 = $tmp1058.value;
int64_t $tmp1100 = $tmp1098.value;
bool $tmp1101 = $tmp1099 == $tmp1100;
frost$core$Bit $tmp1102 = (frost$core$Bit) {$tmp1101};
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block28; else goto block14;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:274
frost$core$Int $tmp1104 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:274:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1105 = &(&local14)->$rawValue;
*$tmp1105 = $tmp1104;
org$frostlang$frostc$FieldDecl$Kind $tmp1106 = *(&local14);
*(&local13) = $tmp1106;
org$frostlang$frostc$FieldDecl$Kind $tmp1107 = *(&local13);
*(&local4) = $tmp1107;
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:277
org$frostlang$frostc$FixedArray* $tmp1108 = *(&local6);
ITable* $tmp1109 = ((frost$collections$Iterable*) $tmp1108)->$class->itable;
while ($tmp1109->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1109 = $tmp1109->next;
}
$fn1111 $tmp1110 = $tmp1109->methods[0];
frost$collections$Iterator* $tmp1112 = $tmp1110(((frost$collections$Iterable*) $tmp1108));
goto block31;
block31:;
ITable* $tmp1113 = $tmp1112->$class->itable;
while ($tmp1113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1113 = $tmp1113->next;
}
$fn1115 $tmp1114 = $tmp1113->methods[0];
frost$core$Bit $tmp1116 = $tmp1114($tmp1112);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block33; else goto block32;
block32:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1118 = $tmp1112->$class->itable;
while ($tmp1118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1118 = $tmp1118->next;
}
$fn1120 $tmp1119 = $tmp1118->methods[1];
frost$core$Object* $tmp1121 = $tmp1119($tmp1112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1121)));
org$frostlang$frostc$ASTNode* $tmp1122 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:278
org$frostlang$frostc$ASTNode* $tmp1123 = *(&local15);
frost$core$Int* $tmp1124 = &$tmp1123->$rawValue;
frost$core$Int $tmp1125 = *$tmp1124;
frost$core$Int $tmp1126 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:279:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1127 = $tmp1125.value;
int64_t $tmp1128 = $tmp1126.value;
bool $tmp1129 = $tmp1127 == $tmp1128;
frost$core$Bit $tmp1130 = (frost$core$Bit) {$tmp1129};
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block35; else goto block36;
block35:;
org$frostlang$frostc$Position* $tmp1132 = (org$frostlang$frostc$Position*) ($tmp1123->$data + 0);
org$frostlang$frostc$Position $tmp1133 = *$tmp1132;
*(&local16) = $tmp1133;
org$frostlang$frostc$ASTNode** $tmp1134 = (org$frostlang$frostc$ASTNode**) ($tmp1123->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1135 = *$tmp1134;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
org$frostlang$frostc$ASTNode* $tmp1136 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
*(&local17) = $tmp1135;
org$frostlang$frostc$ASTNode** $tmp1137 = (org$frostlang$frostc$ASTNode**) ($tmp1123->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1138 = *$tmp1137;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlang$frostc$ASTNode* $tmp1139 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local18) = $tmp1138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:280
*(&local19) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:281
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:282
org$frostlang$frostc$ASTNode* $tmp1140 = *(&local17);
frost$core$Int* $tmp1141 = &$tmp1140->$rawValue;
frost$core$Int $tmp1142 = *$tmp1141;
frost$core$Int $tmp1143 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:283:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143.value;
bool $tmp1146 = $tmp1144 == $tmp1145;
frost$core$Bit $tmp1147 = (frost$core$Bit) {$tmp1146};
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp1149 = (org$frostlang$frostc$Position*) ($tmp1140->$data + 0);
org$frostlang$frostc$Position $tmp1150 = *$tmp1149;
frost$core$String** $tmp1151 = (frost$core$String**) ($tmp1140->$data + 24);
frost$core$String* $tmp1152 = *$tmp1151;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$String* $tmp1153 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local21) = $tmp1152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:284
frost$core$String* $tmp1154 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$core$String* $tmp1155 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local19) = $tmp1154;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:285
frost$core$Weak** $tmp1156 = &param0->compiler;
frost$core$Weak* $tmp1157 = *$tmp1156;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:285:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1158 = &$tmp1157->_valid;
frost$core$Bit $tmp1159 = *$tmp1158;
bool $tmp1160 = $tmp1159.value;
if ($tmp1160) goto block44; else goto block45;
block45:;
frost$core$Int $tmp1161 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1162, $tmp1161);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1163 = &$tmp1157->value;
frost$core$Object* $tmp1164 = *$tmp1163;
frost$core$Frost$ref$frost$core$Object$Q($tmp1164);
org$frostlang$frostc$Type** $tmp1165 = &((org$frostlang$frostc$Compiler*) $tmp1164)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1166 = *$tmp1165;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
org$frostlang$frostc$Type* $tmp1167 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local20) = $tmp1166;
frost$core$Frost$unref$frost$core$Object$Q($tmp1164);
frost$core$String* $tmp1168 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
*(&local21) = ((frost$core$String*) NULL);
goto block38;
block40:;
frost$core$Int $tmp1169 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:287:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1170 = $tmp1142.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = (frost$core$Bit) {$tmp1172};
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1175 = (org$frostlang$frostc$Position*) ($tmp1140->$data + 0);
org$frostlang$frostc$Position $tmp1176 = *$tmp1175;
frost$core$String** $tmp1177 = (frost$core$String**) ($tmp1140->$data + 24);
frost$core$String* $tmp1178 = *$tmp1177;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$String* $tmp1179 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local22) = $tmp1178;
org$frostlang$frostc$ASTNode** $tmp1180 = (org$frostlang$frostc$ASTNode**) ($tmp1140->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1181 = *$tmp1180;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
org$frostlang$frostc$ASTNode* $tmp1182 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local23) = $tmp1181;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:288
frost$core$String* $tmp1183 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$String* $tmp1184 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local19) = $tmp1183;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:289
org$frostlang$frostc$ASTNode* $tmp1185 = *(&local23);
frost$core$Bit $tmp1186 = (frost$core$Bit) {$tmp1185 != NULL};
bool $tmp1187 = $tmp1186.value;
if ($tmp1187) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1188 = (frost$core$Int) {289u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1189, $tmp1188, &$s1190);
abort(); // unreachable
block49:;
org$frostlang$frostc$Type* $tmp1191 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$Type* $tmp1192 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
*(&local20) = $tmp1191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
org$frostlang$frostc$ASTNode* $tmp1193 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1194 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local22) = ((frost$core$String*) NULL);
goto block38;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:292
frost$core$Int $tmp1195 = (frost$core$Int) {292u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1196, $tmp1195);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:295
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:296
org$frostlang$frostc$ASTNode* $tmp1197 = *(&local18);
frost$core$Bit $tmp1198 = (frost$core$Bit) {$tmp1197 == NULL};
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block55; else goto block53;
block55:;
org$frostlang$frostc$Annotations* $tmp1200 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Scanner.frost:296:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp1201 = &$tmp1200->flags;
frost$core$Int $tmp1202 = *$tmp1201;
frost$core$Int $tmp1203 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1204 = $tmp1202.value;
int64_t $tmp1205 = $tmp1203.value;
int64_t $tmp1206 = $tmp1204 & $tmp1205;
frost$core$Int $tmp1207 = (frost$core$Int) {$tmp1206};
frost$core$Int $tmp1208 = (frost$core$Int) {0u};
int64_t $tmp1209 = $tmp1207.value;
int64_t $tmp1210 = $tmp1208.value;
bool $tmp1211 = $tmp1209 != $tmp1210;
frost$core$Bit $tmp1212 = (frost$core$Bit) {$tmp1211};
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block54; else goto block53;
block54:;
org$frostlang$frostc$Type* $tmp1214 = *(&local20);
org$frostlang$frostc$Type$Kind* $tmp1215 = &$tmp1214->typeKind;
org$frostlang$frostc$Type$Kind $tmp1216 = *$tmp1215;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1217;
$tmp1217 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1217->value = $tmp1216;
frost$core$Int $tmp1218 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:297:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1219 = &(&local26)->$rawValue;
*$tmp1219 = $tmp1218;
org$frostlang$frostc$Type$Kind $tmp1220 = *(&local26);
*(&local25) = $tmp1220;
org$frostlang$frostc$Type$Kind $tmp1221 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1222;
$tmp1222 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1222->value = $tmp1221;
ITable* $tmp1223 = ((frost$core$Equatable*) $tmp1217)->$class->itable;
while ($tmp1223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1223 = $tmp1223->next;
}
$fn1225 $tmp1224 = $tmp1223->methods[0];
frost$core$Bit $tmp1226 = $tmp1224(((frost$core$Equatable*) $tmp1217), ((frost$core$Equatable*) $tmp1222));
bool $tmp1227 = $tmp1226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1222)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1217)));
if ($tmp1227) goto block51; else goto block53;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:298
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1228 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1229 = (frost$core$Int) {31u};
org$frostlang$frostc$Position $tmp1230 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp1228, $tmp1229, $tmp1230);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
org$frostlang$frostc$ASTNode* $tmp1231 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local24) = $tmp1228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
goto block52;
block53:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:301
org$frostlang$frostc$ASTNode* $tmp1232 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
org$frostlang$frostc$ASTNode* $tmp1233 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local24) = $tmp1232;
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:303
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp1234 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp1235 = *(&local16);
frost$core$String* $tmp1236 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1237 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp1238 = *(&local4);
frost$core$String* $tmp1239 = *(&local19);
org$frostlang$frostc$Type* $tmp1240 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp1241 = *(&local24);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp1234, param1, $tmp1235, $tmp1236, $tmp1237, $tmp1238, $tmp1239, $tmp1240, $tmp1241);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
org$frostlang$frostc$FieldDecl* $tmp1242 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local27) = $tmp1234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:305
org$frostlang$frostc$SymbolTable** $tmp1243 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1244 = *$tmp1243;
org$frostlang$frostc$FieldDecl* $tmp1245 = *(&local27);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:305:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1246 = &((org$frostlang$frostc$Symbol*) $tmp1245)->name;
frost$core$String* $tmp1247 = *$tmp1246;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1244, ((org$frostlang$frostc$Symbol*) $tmp1245), $tmp1247);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:306
frost$collections$Array** $tmp1248 = &param1->fields;
frost$collections$Array* $tmp1249 = *$tmp1248;
org$frostlang$frostc$FieldDecl* $tmp1250 = *(&local27);
frost$collections$Array$add$frost$collections$Array$T($tmp1249, ((frost$core$Object*) $tmp1250));
org$frostlang$frostc$FieldDecl* $tmp1251 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1252 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp1253 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1254 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1255 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1256 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1121);
org$frostlang$frostc$ASTNode* $tmp1257 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block31;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:309
frost$core$Int $tmp1258 = (frost$core$Int) {309u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1259, $tmp1258);
abort(); // unreachable
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
org$frostlang$frostc$FixedArray* $tmp1260 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1260));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$Annotations* $tmp1261 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:315
frost$core$Int $tmp1263 = (frost$core$Int) {315u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1264, $tmp1263);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:322
frost$core$Int* $tmp1265 = &param1->$rawValue;
frost$core$Int $tmp1266 = *$tmp1265;
frost$core$Int $tmp1267 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:323:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1268 = $tmp1266.value;
int64_t $tmp1269 = $tmp1267.value;
bool $tmp1270 = $tmp1268 == $tmp1269;
frost$core$Bit $tmp1271 = (frost$core$Bit) {$tmp1270};
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1273 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1274 = *$tmp1273;
org$frostlang$frostc$FixedArray** $tmp1275 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1276 = *$tmp1275;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
org$frostlang$frostc$FixedArray* $tmp1277 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
*(&local0) = $tmp1276;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:324
frost$core$Int $tmp1278 = (frost$core$Int) {0u};
*(&local1) = $tmp1278;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:325
org$frostlang$frostc$FixedArray* $tmp1279 = *(&local0);
ITable* $tmp1280 = ((frost$collections$Iterable*) $tmp1279)->$class->itable;
while ($tmp1280->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1280 = $tmp1280->next;
}
$fn1282 $tmp1281 = $tmp1280->methods[0];
frost$collections$Iterator* $tmp1283 = $tmp1281(((frost$collections$Iterable*) $tmp1279));
goto block5;
block5:;
ITable* $tmp1284 = $tmp1283->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
frost$core$Bit $tmp1287 = $tmp1285($tmp1283);
bool $tmp1288 = $tmp1287.value;
if ($tmp1288) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1289 = $tmp1283->$class->itable;
while ($tmp1289->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1289 = $tmp1289->next;
}
$fn1291 $tmp1290 = $tmp1289->methods[1];
frost$core$Object* $tmp1292 = $tmp1290($tmp1283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1292)));
org$frostlang$frostc$ASTNode* $tmp1293 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1292);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:326
frost$core$Int $tmp1294 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1295 = *(&local2);
frost$core$Int $tmp1296 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1295);
int64_t $tmp1297 = $tmp1294.value;
int64_t $tmp1298 = $tmp1296.value;
int64_t $tmp1299 = $tmp1297 + $tmp1298;
frost$core$Int $tmp1300 = (frost$core$Int) {$tmp1299};
*(&local1) = $tmp1300;
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$ASTNode* $tmp1301 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1301));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:328
frost$core$Int $tmp1302 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1302;
block3:;
frost$core$Int $tmp1304 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:330:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1305 = $tmp1266.value;
int64_t $tmp1306 = $tmp1304.value;
bool $tmp1307 = $tmp1305 == $tmp1306;
frost$core$Bit $tmp1308 = (frost$core$Bit) {$tmp1307};
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1310 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1311 = *$tmp1310;
org$frostlang$frostc$ASTNode** $tmp1312 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1313 = *$tmp1312;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
org$frostlang$frostc$ASTNode* $tmp1314 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
*(&local3) = $tmp1313;
org$frostlang$frostc$ASTNode** $tmp1315 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1316 = *$tmp1315;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:331
org$frostlang$frostc$ASTNode* $tmp1317 = *(&local3);
frost$core$Int $tmp1318 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1317);
org$frostlang$frostc$ASTNode* $tmp1319 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1318;
block9:;
frost$core$Int $tmp1320 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:333:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1321 = $tmp1266.value;
int64_t $tmp1322 = $tmp1320.value;
bool $tmp1323 = $tmp1321 == $tmp1322;
frost$core$Bit $tmp1324 = (frost$core$Bit) {$tmp1323};
bool $tmp1325 = $tmp1324.value;
if ($tmp1325) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:334
frost$core$Int $tmp1326 = (frost$core$Int) {0u};
return $tmp1326;
block12:;
frost$core$Int $tmp1327 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:336:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1328 = $tmp1266.value;
int64_t $tmp1329 = $tmp1327.value;
bool $tmp1330 = $tmp1328 == $tmp1329;
frost$core$Bit $tmp1331 = (frost$core$Bit) {$tmp1330};
bool $tmp1332 = $tmp1331.value;
if ($tmp1332) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:337
frost$core$Int $tmp1333 = (frost$core$Int) {0u};
return $tmp1333;
block15:;
frost$core$Int $tmp1334 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:339:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1335 = $tmp1266.value;
int64_t $tmp1336 = $tmp1334.value;
bool $tmp1337 = $tmp1335 == $tmp1336;
frost$core$Bit $tmp1338 = (frost$core$Bit) {$tmp1337};
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp1340 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1341 = *$tmp1340;
org$frostlang$frostc$ASTNode** $tmp1342 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1343 = *$tmp1342;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
org$frostlang$frostc$ASTNode* $tmp1344 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local4) = $tmp1343;
org$frostlang$frostc$expression$Binary$Operator* $tmp1345 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp1346 = *$tmp1345;
org$frostlang$frostc$ASTNode** $tmp1347 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1348 = *$tmp1347;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
org$frostlang$frostc$ASTNode* $tmp1349 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local5) = $tmp1348;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:340
frost$core$Int $tmp1350 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode* $tmp1351 = *(&local4);
frost$core$Int $tmp1352 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1351);
int64_t $tmp1353 = $tmp1350.value;
int64_t $tmp1354 = $tmp1352.value;
int64_t $tmp1355 = $tmp1353 + $tmp1354;
frost$core$Int $tmp1356 = (frost$core$Int) {$tmp1355};
org$frostlang$frostc$ASTNode* $tmp1357 = *(&local5);
frost$core$Int $tmp1358 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1357);
int64_t $tmp1359 = $tmp1356.value;
int64_t $tmp1360 = $tmp1358.value;
int64_t $tmp1361 = $tmp1359 + $tmp1360;
frost$core$Int $tmp1362 = (frost$core$Int) {$tmp1361};
org$frostlang$frostc$ASTNode* $tmp1363 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1364 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1362;
block18:;
frost$core$Int $tmp1365 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:342:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1366 = $tmp1266.value;
int64_t $tmp1367 = $tmp1365.value;
bool $tmp1368 = $tmp1366 == $tmp1367;
frost$core$Bit $tmp1369 = (frost$core$Bit) {$tmp1368};
bool $tmp1370 = $tmp1369.value;
if ($tmp1370) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:343
frost$core$Int $tmp1371 = (frost$core$Int) {1u};
return $tmp1371;
block21:;
frost$core$Int $tmp1372 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:345:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1373 = $tmp1266.value;
int64_t $tmp1374 = $tmp1372.value;
bool $tmp1375 = $tmp1373 == $tmp1374;
frost$core$Bit $tmp1376 = (frost$core$Bit) {$tmp1375};
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp1378 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1379 = *$tmp1378;
org$frostlang$frostc$FixedArray** $tmp1380 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1381 = *$tmp1380;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
org$frostlang$frostc$FixedArray* $tmp1382 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local6) = $tmp1381;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:346
frost$core$Int $tmp1383 = (frost$core$Int) {0u};
*(&local7) = $tmp1383;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:347
org$frostlang$frostc$FixedArray* $tmp1384 = *(&local6);
ITable* $tmp1385 = ((frost$collections$Iterable*) $tmp1384)->$class->itable;
while ($tmp1385->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1385 = $tmp1385->next;
}
$fn1387 $tmp1386 = $tmp1385->methods[0];
frost$collections$Iterator* $tmp1388 = $tmp1386(((frost$collections$Iterable*) $tmp1384));
goto block26;
block26:;
ITable* $tmp1389 = $tmp1388->$class->itable;
while ($tmp1389->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[0];
frost$core$Bit $tmp1392 = $tmp1390($tmp1388);
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block28; else goto block27;
block27:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1394 = $tmp1388->$class->itable;
while ($tmp1394->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1394 = $tmp1394->next;
}
$fn1396 $tmp1395 = $tmp1394->methods[1];
frost$core$Object* $tmp1397 = $tmp1395($tmp1388);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1397)));
org$frostlang$frostc$ASTNode* $tmp1398 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1397);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:348
frost$core$Int $tmp1399 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp1400 = *(&local8);
frost$core$Int $tmp1401 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1400);
int64_t $tmp1402 = $tmp1399.value;
int64_t $tmp1403 = $tmp1401.value;
int64_t $tmp1404 = $tmp1402 + $tmp1403;
frost$core$Int $tmp1405 = (frost$core$Int) {$tmp1404};
*(&local7) = $tmp1405;
frost$core$Frost$unref$frost$core$Object$Q($tmp1397);
org$frostlang$frostc$ASTNode* $tmp1406 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:350
frost$core$Int $tmp1407 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1408 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1407;
block24:;
frost$core$Int $tmp1409 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:352:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1410 = $tmp1266.value;
int64_t $tmp1411 = $tmp1409.value;
bool $tmp1412 = $tmp1410 == $tmp1411;
frost$core$Bit $tmp1413 = (frost$core$Bit) {$tmp1412};
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:353
frost$core$Int $tmp1415 = (frost$core$Int) {1u};
return $tmp1415;
block30:;
frost$core$Int $tmp1416 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:355:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1417 = $tmp1266.value;
int64_t $tmp1418 = $tmp1416.value;
bool $tmp1419 = $tmp1417 == $tmp1418;
frost$core$Bit $tmp1420 = (frost$core$Bit) {$tmp1419};
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp1422 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1423 = *$tmp1422;
org$frostlang$frostc$ASTNode** $tmp1424 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1425 = *$tmp1424;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
org$frostlang$frostc$ASTNode* $tmp1426 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local9) = $tmp1425;
org$frostlang$frostc$FixedArray** $tmp1427 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1428 = *$tmp1427;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
org$frostlang$frostc$FixedArray* $tmp1429 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local10) = $tmp1428;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:356
org$frostlang$frostc$ASTNode* $tmp1430 = *(&local9);
frost$core$Int $tmp1431 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1430);
*(&local11) = $tmp1431;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:357
org$frostlang$frostc$FixedArray* $tmp1432 = *(&local10);
ITable* $tmp1433 = ((frost$collections$Iterable*) $tmp1432)->$class->itable;
while ($tmp1433->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1433 = $tmp1433->next;
}
$fn1435 $tmp1434 = $tmp1433->methods[0];
frost$collections$Iterator* $tmp1436 = $tmp1434(((frost$collections$Iterable*) $tmp1432));
goto block35;
block35:;
ITable* $tmp1437 = $tmp1436->$class->itable;
while ($tmp1437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1437 = $tmp1437->next;
}
$fn1439 $tmp1438 = $tmp1437->methods[0];
frost$core$Bit $tmp1440 = $tmp1438($tmp1436);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block37; else goto block36;
block36:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1442 = $tmp1436->$class->itable;
while ($tmp1442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1442 = $tmp1442->next;
}
$fn1444 $tmp1443 = $tmp1442->methods[1];
frost$core$Object* $tmp1445 = $tmp1443($tmp1436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1445)));
org$frostlang$frostc$ASTNode* $tmp1446 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:358
frost$core$Int $tmp1447 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1448 = *(&local12);
frost$core$Int $tmp1449 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1448);
int64_t $tmp1450 = $tmp1447.value;
int64_t $tmp1451 = $tmp1449.value;
int64_t $tmp1452 = $tmp1450 + $tmp1451;
frost$core$Int $tmp1453 = (frost$core$Int) {$tmp1452};
*(&local11) = $tmp1453;
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
org$frostlang$frostc$ASTNode* $tmp1454 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:360
frost$core$Int $tmp1455 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1456 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1457 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1455;
block33:;
frost$core$Int $tmp1458 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:362:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1459 = $tmp1266.value;
int64_t $tmp1460 = $tmp1458.value;
bool $tmp1461 = $tmp1459 == $tmp1460;
frost$core$Bit $tmp1462 = (frost$core$Bit) {$tmp1461};
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp1464 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1465 = *$tmp1464;
org$frostlang$frostc$ASTNode** $tmp1466 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1467 = *$tmp1466;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
org$frostlang$frostc$ASTNode* $tmp1468 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local13) = $tmp1467;
org$frostlang$frostc$ChoiceCase** $tmp1469 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1470 = *$tmp1469;
frost$core$Int* $tmp1471 = (frost$core$Int*) (param1->$data + 40);
frost$core$Int $tmp1472 = *$tmp1471;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:363
org$frostlang$frostc$ASTNode* $tmp1473 = *(&local13);
frost$core$Int $tmp1474 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1473);
org$frostlang$frostc$ASTNode* $tmp1475 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1474;
block39:;
frost$core$Int $tmp1476 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1477 = $tmp1266.value;
int64_t $tmp1478 = $tmp1476.value;
bool $tmp1479 = $tmp1477 == $tmp1478;
frost$core$Bit $tmp1480 = (frost$core$Bit) {$tmp1479};
bool $tmp1481 = $tmp1480.value;
if ($tmp1481) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:366
frost$core$Int $tmp1482 = (frost$core$Int) {1u};
return $tmp1482;
block42:;
frost$core$Int $tmp1483 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:368:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1484 = $tmp1266.value;
int64_t $tmp1485 = $tmp1483.value;
bool $tmp1486 = $tmp1484 == $tmp1485;
frost$core$Bit $tmp1487 = (frost$core$Bit) {$tmp1486};
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1489 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1490 = *$tmp1489;
org$frostlang$frostc$ASTNode** $tmp1491 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1492 = *$tmp1491;
org$frostlang$frostc$ASTNode** $tmp1493 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1494 = *$tmp1493;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
org$frostlang$frostc$ASTNode* $tmp1495 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local14) = $tmp1494;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:369
org$frostlang$frostc$ASTNode* $tmp1496 = *(&local14);
frost$core$Bit $tmp1497 = (frost$core$Bit) {$tmp1496 == NULL};
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:370
frost$core$Int $tmp1499 = (frost$core$Int) {0u};
org$frostlang$frostc$ASTNode* $tmp1500 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1499;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:372
org$frostlang$frostc$ASTNode* $tmp1501 = *(&local14);
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501 != NULL};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1504 = (frost$core$Int) {372u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1505, $tmp1504, &$s1506);
abort(); // unreachable
block49:;
frost$core$Int $tmp1507 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1501);
org$frostlang$frostc$ASTNode* $tmp1508 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1507;
block45:;
frost$core$Int $tmp1509 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:374:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1510 = $tmp1266.value;
int64_t $tmp1511 = $tmp1509.value;
bool $tmp1512 = $tmp1510 == $tmp1511;
frost$core$Bit $tmp1513 = (frost$core$Bit) {$tmp1512};
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Position* $tmp1515 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1516 = *$tmp1515;
frost$core$String** $tmp1517 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1518 = *$tmp1517;
org$frostlang$frostc$FixedArray** $tmp1519 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1520 = *$tmp1519;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
org$frostlang$frostc$FixedArray* $tmp1521 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local15) = $tmp1520;
org$frostlang$frostc$ASTNode** $tmp1522 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1523 = *$tmp1522;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$ASTNode* $tmp1524 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local16) = $tmp1523;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:375
org$frostlang$frostc$ASTNode* $tmp1525 = *(&local16);
frost$core$Int $tmp1526 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1525);
*(&local17) = $tmp1526;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:376
org$frostlang$frostc$FixedArray* $tmp1527 = *(&local15);
ITable* $tmp1528 = ((frost$collections$Iterable*) $tmp1527)->$class->itable;
while ($tmp1528->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1528 = $tmp1528->next;
}
$fn1530 $tmp1529 = $tmp1528->methods[0];
frost$collections$Iterator* $tmp1531 = $tmp1529(((frost$collections$Iterable*) $tmp1527));
goto block54;
block54:;
ITable* $tmp1532 = $tmp1531->$class->itable;
while ($tmp1532->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1532 = $tmp1532->next;
}
$fn1534 $tmp1533 = $tmp1532->methods[0];
frost$core$Bit $tmp1535 = $tmp1533($tmp1531);
bool $tmp1536 = $tmp1535.value;
if ($tmp1536) goto block56; else goto block55;
block55:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1537 = $tmp1531->$class->itable;
while ($tmp1537->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1537 = $tmp1537->next;
}
$fn1539 $tmp1538 = $tmp1537->methods[1];
frost$core$Object* $tmp1540 = $tmp1538($tmp1531);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1540)));
org$frostlang$frostc$ASTNode* $tmp1541 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1540);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:377
frost$core$Int $tmp1542 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1543 = *(&local18);
frost$core$Int $tmp1544 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1543);
int64_t $tmp1545 = $tmp1542.value;
int64_t $tmp1546 = $tmp1544.value;
int64_t $tmp1547 = $tmp1545 + $tmp1546;
frost$core$Int $tmp1548 = (frost$core$Int) {$tmp1547};
*(&local17) = $tmp1548;
frost$core$Frost$unref$frost$core$Object$Q($tmp1540);
org$frostlang$frostc$ASTNode* $tmp1549 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1549));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:379
frost$core$Int $tmp1550 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1551 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1552 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1550;
block52:;
frost$core$Int $tmp1553 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:381:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1554 = $tmp1266.value;
int64_t $tmp1555 = $tmp1553.value;
bool $tmp1556 = $tmp1554 == $tmp1555;
frost$core$Bit $tmp1557 = (frost$core$Bit) {$tmp1556};
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Position* $tmp1559 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1560 = *$tmp1559;
org$frostlang$frostc$ASTNode** $tmp1561 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1562 = *$tmp1561;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
org$frostlang$frostc$ASTNode* $tmp1563 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1563));
*(&local19) = $tmp1562;
frost$core$String** $tmp1564 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1565 = *$tmp1564;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:382
org$frostlang$frostc$ASTNode* $tmp1566 = *(&local19);
frost$core$Int $tmp1567 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1566);
org$frostlang$frostc$ASTNode* $tmp1568 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1567;
block58:;
frost$core$Int $tmp1569 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:384:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1570 = $tmp1266.value;
int64_t $tmp1571 = $tmp1569.value;
bool $tmp1572 = $tmp1570 == $tmp1571;
frost$core$Bit $tmp1573 = (frost$core$Bit) {$tmp1572};
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block60; else goto block61;
block60:;
org$frostlang$frostc$Position* $tmp1575 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1576 = *$tmp1575;
org$frostlang$frostc$ASTNode** $tmp1577 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1578 = *$tmp1577;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1579));
*(&local20) = $tmp1578;
frost$core$String** $tmp1580 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1581 = *$tmp1580;
org$frostlang$frostc$FixedArray** $tmp1582 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1583 = *$tmp1582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:385
org$frostlang$frostc$ASTNode* $tmp1584 = *(&local20);
frost$core$Int $tmp1585 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1584);
org$frostlang$frostc$ASTNode* $tmp1586 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1586));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1585;
block61:;
frost$core$Int $tmp1587 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:387:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1588 = $tmp1266.value;
int64_t $tmp1589 = $tmp1587.value;
bool $tmp1590 = $tmp1588 == $tmp1589;
frost$core$Bit $tmp1591 = (frost$core$Bit) {$tmp1590};
bool $tmp1592 = $tmp1591.value;
if ($tmp1592) goto block63; else goto block64;
block63:;
org$frostlang$frostc$Position* $tmp1593 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1594 = *$tmp1593;
frost$core$String** $tmp1595 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1596 = *$tmp1595;
org$frostlang$frostc$ASTNode** $tmp1597 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1598 = *$tmp1597;
org$frostlang$frostc$ASTNode** $tmp1599 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1600 = *$tmp1599;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
org$frostlang$frostc$ASTNode* $tmp1601 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
*(&local21) = $tmp1600;
org$frostlang$frostc$FixedArray** $tmp1602 = (org$frostlang$frostc$FixedArray**) (param1->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1603 = *$tmp1602;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
org$frostlang$frostc$FixedArray* $tmp1604 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local22) = $tmp1603;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:388
org$frostlang$frostc$ASTNode* $tmp1605 = *(&local21);
frost$core$Int $tmp1606 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1605);
*(&local23) = $tmp1606;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:389
org$frostlang$frostc$FixedArray* $tmp1607 = *(&local22);
ITable* $tmp1608 = ((frost$collections$Iterable*) $tmp1607)->$class->itable;
while ($tmp1608->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1608 = $tmp1608->next;
}
$fn1610 $tmp1609 = $tmp1608->methods[0];
frost$collections$Iterator* $tmp1611 = $tmp1609(((frost$collections$Iterable*) $tmp1607));
goto block66;
block66:;
ITable* $tmp1612 = $tmp1611->$class->itable;
while ($tmp1612->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1612 = $tmp1612->next;
}
$fn1614 $tmp1613 = $tmp1612->methods[0];
frost$core$Bit $tmp1615 = $tmp1613($tmp1611);
bool $tmp1616 = $tmp1615.value;
if ($tmp1616) goto block68; else goto block67;
block67:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1617 = $tmp1611->$class->itable;
while ($tmp1617->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1617 = $tmp1617->next;
}
$fn1619 $tmp1618 = $tmp1617->methods[1];
frost$core$Object* $tmp1620 = $tmp1618($tmp1611);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1620)));
org$frostlang$frostc$ASTNode* $tmp1621 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1620);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:390
frost$core$Int $tmp1622 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1623 = *(&local24);
frost$core$Int $tmp1624 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1623);
int64_t $tmp1625 = $tmp1622.value;
int64_t $tmp1626 = $tmp1624.value;
int64_t $tmp1627 = $tmp1625 + $tmp1626;
frost$core$Int $tmp1628 = (frost$core$Int) {$tmp1627};
*(&local23) = $tmp1628;
frost$core$Frost$unref$frost$core$Object$Q($tmp1620);
org$frostlang$frostc$ASTNode* $tmp1629 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:392
frost$core$Int $tmp1630 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1631 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1632 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1630;
block64:;
frost$core$Int $tmp1633 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:394:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1634 = $tmp1266.value;
int64_t $tmp1635 = $tmp1633.value;
bool $tmp1636 = $tmp1634 == $tmp1635;
frost$core$Bit $tmp1637 = (frost$core$Bit) {$tmp1636};
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:395
frost$core$Int $tmp1639 = (frost$core$Int) {0u};
return $tmp1639;
block70:;
frost$core$Int $tmp1640 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:397:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1641 = $tmp1266.value;
int64_t $tmp1642 = $tmp1640.value;
bool $tmp1643 = $tmp1641 == $tmp1642;
frost$core$Bit $tmp1644 = (frost$core$Bit) {$tmp1643};
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:398
frost$core$Int $tmp1646 = (frost$core$Int) {1u};
return $tmp1646;
block73:;
frost$core$Int $tmp1647 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:400:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1648 = $tmp1266.value;
int64_t $tmp1649 = $tmp1647.value;
bool $tmp1650 = $tmp1648 == $tmp1649;
frost$core$Bit $tmp1651 = (frost$core$Bit) {$tmp1650};
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block75; else goto block76;
block75:;
org$frostlang$frostc$Position* $tmp1653 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1654 = *$tmp1653;
org$frostlang$frostc$ASTNode** $tmp1655 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1656 = *$tmp1655;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
org$frostlang$frostc$ASTNode* $tmp1657 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
*(&local25) = $tmp1656;
org$frostlang$frostc$FixedArray** $tmp1658 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1659 = *$tmp1658;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
org$frostlang$frostc$FixedArray* $tmp1660 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
*(&local26) = $tmp1659;
org$frostlang$frostc$ASTNode** $tmp1661 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1662 = *$tmp1661;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
org$frostlang$frostc$ASTNode* $tmp1663 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local27) = $tmp1662;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:401
org$frostlang$frostc$ASTNode* $tmp1664 = *(&local25);
frost$core$Int $tmp1665 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1664);
*(&local28) = $tmp1665;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:402
org$frostlang$frostc$FixedArray* $tmp1666 = *(&local26);
ITable* $tmp1667 = ((frost$collections$Iterable*) $tmp1666)->$class->itable;
while ($tmp1667->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1667 = $tmp1667->next;
}
$fn1669 $tmp1668 = $tmp1667->methods[0];
frost$collections$Iterator* $tmp1670 = $tmp1668(((frost$collections$Iterable*) $tmp1666));
goto block78;
block78:;
ITable* $tmp1671 = $tmp1670->$class->itable;
while ($tmp1671->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1671 = $tmp1671->next;
}
$fn1673 $tmp1672 = $tmp1671->methods[0];
frost$core$Bit $tmp1674 = $tmp1672($tmp1670);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block80; else goto block79;
block79:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1676 = $tmp1670->$class->itable;
while ($tmp1676->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1676 = $tmp1676->next;
}
$fn1678 $tmp1677 = $tmp1676->methods[1];
frost$core$Object* $tmp1679 = $tmp1677($tmp1670);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1679)));
org$frostlang$frostc$ASTNode* $tmp1680 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1679);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:403
frost$core$Int $tmp1681 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1682 = *(&local29);
frost$core$Int $tmp1683 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1682);
int64_t $tmp1684 = $tmp1681.value;
int64_t $tmp1685 = $tmp1683.value;
int64_t $tmp1686 = $tmp1684 + $tmp1685;
frost$core$Int $tmp1687 = (frost$core$Int) {$tmp1686};
*(&local28) = $tmp1687;
frost$core$Frost$unref$frost$core$Object$Q($tmp1679);
org$frostlang$frostc$ASTNode* $tmp1688 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block78;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:405
org$frostlang$frostc$ASTNode* $tmp1689 = *(&local27);
frost$core$Bit $tmp1690 = (frost$core$Bit) {$tmp1689 != NULL};
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:406
frost$core$Int $tmp1692 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1693 = *(&local27);
frost$core$Bit $tmp1694 = (frost$core$Bit) {$tmp1693 != NULL};
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block83; else goto block84;
block84:;
frost$core$Int $tmp1696 = (frost$core$Int) {406u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1697, $tmp1696, &$s1698);
abort(); // unreachable
block83:;
frost$core$Int $tmp1699 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1693);
int64_t $tmp1700 = $tmp1692.value;
int64_t $tmp1701 = $tmp1699.value;
int64_t $tmp1702 = $tmp1700 + $tmp1701;
frost$core$Int $tmp1703 = (frost$core$Int) {$tmp1702};
*(&local28) = $tmp1703;
goto block82;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:408
frost$core$Int $tmp1704 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1705 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1706 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1707 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1704;
block76:;
frost$core$Int $tmp1708 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:410:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1709 = $tmp1266.value;
int64_t $tmp1710 = $tmp1708.value;
bool $tmp1711 = $tmp1709 == $tmp1710;
frost$core$Bit $tmp1712 = (frost$core$Bit) {$tmp1711};
bool $tmp1713 = $tmp1712.value;
if ($tmp1713) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:411
frost$core$Int $tmp1714 = (frost$core$Int) {1u};
return $tmp1714;
block86:;
frost$core$Int $tmp1715 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:413:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1716 = $tmp1266.value;
int64_t $tmp1717 = $tmp1715.value;
bool $tmp1718 = $tmp1716 == $tmp1717;
frost$core$Bit $tmp1719 = (frost$core$Bit) {$tmp1718};
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block88; else goto block89;
block88:;
org$frostlang$frostc$Position* $tmp1721 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1722 = *$tmp1721;
frost$core$String** $tmp1723 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1724 = *$tmp1723;
org$frostlang$frostc$FixedArray** $tmp1725 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1726 = *$tmp1725;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1726));
org$frostlang$frostc$FixedArray* $tmp1727 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
*(&local30) = $tmp1726;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:414
frost$core$Int $tmp1728 = (frost$core$Int) {0u};
*(&local31) = $tmp1728;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:415
org$frostlang$frostc$FixedArray* $tmp1729 = *(&local30);
ITable* $tmp1730 = ((frost$collections$Iterable*) $tmp1729)->$class->itable;
while ($tmp1730->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1730 = $tmp1730->next;
}
$fn1732 $tmp1731 = $tmp1730->methods[0];
frost$collections$Iterator* $tmp1733 = $tmp1731(((frost$collections$Iterable*) $tmp1729));
goto block91;
block91:;
ITable* $tmp1734 = $tmp1733->$class->itable;
while ($tmp1734->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1734 = $tmp1734->next;
}
$fn1736 $tmp1735 = $tmp1734->methods[0];
frost$core$Bit $tmp1737 = $tmp1735($tmp1733);
bool $tmp1738 = $tmp1737.value;
if ($tmp1738) goto block93; else goto block92;
block92:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1739 = $tmp1733->$class->itable;
while ($tmp1739->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1739 = $tmp1739->next;
}
$fn1741 $tmp1740 = $tmp1739->methods[1];
frost$core$Object* $tmp1742 = $tmp1740($tmp1733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1742)));
org$frostlang$frostc$ASTNode* $tmp1743 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1742);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:416
frost$core$Int $tmp1744 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1745 = *(&local32);
frost$core$Int $tmp1746 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1745);
int64_t $tmp1747 = $tmp1744.value;
int64_t $tmp1748 = $tmp1746.value;
int64_t $tmp1749 = $tmp1747 + $tmp1748;
frost$core$Int $tmp1750 = (frost$core$Int) {$tmp1749};
*(&local31) = $tmp1750;
frost$core$Frost$unref$frost$core$Object$Q($tmp1742);
org$frostlang$frostc$ASTNode* $tmp1751 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:418
frost$core$Int $tmp1752 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1753 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1752;
block89:;
frost$core$Int $tmp1754 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:420:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1755 = $tmp1266.value;
int64_t $tmp1756 = $tmp1754.value;
bool $tmp1757 = $tmp1755 == $tmp1756;
frost$core$Bit $tmp1758 = (frost$core$Bit) {$tmp1757};
bool $tmp1759 = $tmp1758.value;
if ($tmp1759) goto block94; else goto block95;
block94:;
org$frostlang$frostc$Position* $tmp1760 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1761 = *$tmp1760;
org$frostlang$frostc$ASTNode** $tmp1762 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1763 = *$tmp1762;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
org$frostlang$frostc$ASTNode* $tmp1764 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
*(&local33) = $tmp1763;
org$frostlang$frostc$FixedArray** $tmp1765 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1766 = *$tmp1765;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
org$frostlang$frostc$FixedArray* $tmp1767 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local34) = $tmp1766;
org$frostlang$frostc$FixedArray** $tmp1768 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1769 = *$tmp1768;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
org$frostlang$frostc$FixedArray* $tmp1770 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
*(&local35) = $tmp1769;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:421
org$frostlang$frostc$ASTNode* $tmp1771 = *(&local33);
frost$core$Int $tmp1772 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1771);
*(&local36) = $tmp1772;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:422
org$frostlang$frostc$FixedArray* $tmp1773 = *(&local34);
ITable* $tmp1774 = ((frost$collections$Iterable*) $tmp1773)->$class->itable;
while ($tmp1774->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1774 = $tmp1774->next;
}
$fn1776 $tmp1775 = $tmp1774->methods[0];
frost$collections$Iterator* $tmp1777 = $tmp1775(((frost$collections$Iterable*) $tmp1773));
goto block97;
block97:;
ITable* $tmp1778 = $tmp1777->$class->itable;
while ($tmp1778->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1778 = $tmp1778->next;
}
$fn1780 $tmp1779 = $tmp1778->methods[0];
frost$core$Bit $tmp1781 = $tmp1779($tmp1777);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block99; else goto block98;
block98:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1783 = $tmp1777->$class->itable;
while ($tmp1783->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1783 = $tmp1783->next;
}
$fn1785 $tmp1784 = $tmp1783->methods[1];
frost$core$Object* $tmp1786 = $tmp1784($tmp1777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1786)));
org$frostlang$frostc$ASTNode* $tmp1787 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1787));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1786);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:423
frost$core$Int $tmp1788 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1789 = *(&local37);
frost$core$Int $tmp1790 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1789);
int64_t $tmp1791 = $tmp1788.value;
int64_t $tmp1792 = $tmp1790.value;
int64_t $tmp1793 = $tmp1791 + $tmp1792;
frost$core$Int $tmp1794 = (frost$core$Int) {$tmp1793};
*(&local36) = $tmp1794;
frost$core$Frost$unref$frost$core$Object$Q($tmp1786);
org$frostlang$frostc$ASTNode* $tmp1795 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:425
org$frostlang$frostc$FixedArray* $tmp1796 = *(&local35);
frost$core$Bit $tmp1797 = (frost$core$Bit) {$tmp1796 != NULL};
bool $tmp1798 = $tmp1797.value;
if ($tmp1798) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:426
org$frostlang$frostc$FixedArray* $tmp1799 = *(&local35);
frost$core$Bit $tmp1800 = (frost$core$Bit) {$tmp1799 != NULL};
bool $tmp1801 = $tmp1800.value;
if ($tmp1801) goto block102; else goto block103;
block103:;
frost$core$Int $tmp1802 = (frost$core$Int) {426u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1803, $tmp1802, &$s1804);
abort(); // unreachable
block102:;
ITable* $tmp1805 = ((frost$collections$Iterable*) $tmp1799)->$class->itable;
while ($tmp1805->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1805 = $tmp1805->next;
}
$fn1807 $tmp1806 = $tmp1805->methods[0];
frost$collections$Iterator* $tmp1808 = $tmp1806(((frost$collections$Iterable*) $tmp1799));
goto block104;
block104:;
ITable* $tmp1809 = $tmp1808->$class->itable;
while ($tmp1809->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1809 = $tmp1809->next;
}
$fn1811 $tmp1810 = $tmp1809->methods[0];
frost$core$Bit $tmp1812 = $tmp1810($tmp1808);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block106; else goto block105;
block105:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1814 = $tmp1808->$class->itable;
while ($tmp1814->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1814 = $tmp1814->next;
}
$fn1816 $tmp1815 = $tmp1814->methods[1];
frost$core$Object* $tmp1817 = $tmp1815($tmp1808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1817)));
org$frostlang$frostc$ASTNode* $tmp1818 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1817);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:427
frost$core$Int $tmp1819 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1820 = *(&local38);
frost$core$Int $tmp1821 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1820);
int64_t $tmp1822 = $tmp1819.value;
int64_t $tmp1823 = $tmp1821.value;
int64_t $tmp1824 = $tmp1822 + $tmp1823;
frost$core$Int $tmp1825 = (frost$core$Int) {$tmp1824};
*(&local36) = $tmp1825;
frost$core$Frost$unref$frost$core$Object$Q($tmp1817);
org$frostlang$frostc$ASTNode* $tmp1826 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block104;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:430
frost$core$Int $tmp1827 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1828 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1829 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1830 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1830));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1827;
block95:;
frost$core$Int $tmp1831 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1832 = $tmp1266.value;
int64_t $tmp1833 = $tmp1831.value;
bool $tmp1834 = $tmp1832 == $tmp1833;
frost$core$Bit $tmp1835 = (frost$core$Bit) {$tmp1834};
bool $tmp1836 = $tmp1835.value;
if ($tmp1836) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:433
frost$core$Int $tmp1837 = (frost$core$Int) {10u};
frost$core$Int $tmp1838 = (frost$core$Int) {1u};
int64_t $tmp1839 = $tmp1837.value;
int64_t $tmp1840 = $tmp1838.value;
int64_t $tmp1841 = $tmp1839 + $tmp1840;
frost$core$Int $tmp1842 = (frost$core$Int) {$tmp1841};
return $tmp1842;
block108:;
frost$core$Int $tmp1843 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1844 = $tmp1266.value;
int64_t $tmp1845 = $tmp1843.value;
bool $tmp1846 = $tmp1844 == $tmp1845;
frost$core$Bit $tmp1847 = (frost$core$Bit) {$tmp1846};
bool $tmp1848 = $tmp1847.value;
if ($tmp1848) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:436
frost$core$Int $tmp1849 = (frost$core$Int) {1u};
return $tmp1849;
block111:;
frost$core$Int $tmp1850 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:438:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1851 = $tmp1266.value;
int64_t $tmp1852 = $tmp1850.value;
bool $tmp1853 = $tmp1851 == $tmp1852;
frost$core$Bit $tmp1854 = (frost$core$Bit) {$tmp1853};
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:439
frost$core$Int $tmp1856 = (frost$core$Int) {0u};
return $tmp1856;
block114:;
frost$core$Int $tmp1857 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:441:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1858 = $tmp1266.value;
int64_t $tmp1859 = $tmp1857.value;
bool $tmp1860 = $tmp1858 == $tmp1859;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:442
frost$core$Int $tmp1863 = (frost$core$Int) {1u};
return $tmp1863;
block117:;
frost$core$Int $tmp1864 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:444:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1865 = $tmp1266.value;
int64_t $tmp1866 = $tmp1864.value;
bool $tmp1867 = $tmp1865 == $tmp1866;
frost$core$Bit $tmp1868 = (frost$core$Bit) {$tmp1867};
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:445
frost$core$Int $tmp1870 = (frost$core$Int) {1u};
return $tmp1870;
block120:;
frost$core$Int $tmp1871 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:447:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1872 = $tmp1266.value;
int64_t $tmp1873 = $tmp1871.value;
bool $tmp1874 = $tmp1872 == $tmp1873;
frost$core$Bit $tmp1875 = (frost$core$Bit) {$tmp1874};
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:448
frost$core$Int $tmp1877 = (frost$core$Int) {1u};
return $tmp1877;
block123:;
frost$core$Int $tmp1878 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:450:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1879 = $tmp1266.value;
int64_t $tmp1880 = $tmp1878.value;
bool $tmp1881 = $tmp1879 == $tmp1880;
frost$core$Bit $tmp1882 = (frost$core$Bit) {$tmp1881};
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block125; else goto block126;
block125:;
org$frostlang$frostc$Position* $tmp1884 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1885 = *$tmp1884;
org$frostlang$frostc$ASTNode** $tmp1886 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1887 = *$tmp1886;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
org$frostlang$frostc$ASTNode* $tmp1888 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local39) = $tmp1887;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:451
org$frostlang$frostc$ASTNode* $tmp1889 = *(&local39);
frost$core$Bit $tmp1890 = (frost$core$Bit) {$tmp1889 == NULL};
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:452
frost$core$Int $tmp1892 = (frost$core$Int) {0u};
org$frostlang$frostc$ASTNode* $tmp1893 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1892;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:454
org$frostlang$frostc$ASTNode* $tmp1894 = *(&local39);
frost$core$Bit $tmp1895 = (frost$core$Bit) {$tmp1894 != NULL};
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block130; else goto block131;
block131:;
frost$core$Int $tmp1897 = (frost$core$Int) {454u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1898, $tmp1897, &$s1899);
abort(); // unreachable
block130:;
frost$core$Int $tmp1900 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1894);
org$frostlang$frostc$ASTNode* $tmp1901 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1900;
block126:;
frost$core$Int $tmp1902 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:456:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1903 = $tmp1266.value;
int64_t $tmp1904 = $tmp1902.value;
bool $tmp1905 = $tmp1903 == $tmp1904;
frost$core$Bit $tmp1906 = (frost$core$Bit) {$tmp1905};
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block132; else goto block133;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:457
frost$core$Int $tmp1908 = (frost$core$Int) {1u};
return $tmp1908;
block133:;
frost$core$Int $tmp1909 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:459:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1910 = $tmp1266.value;
int64_t $tmp1911 = $tmp1909.value;
bool $tmp1912 = $tmp1910 == $tmp1911;
frost$core$Bit $tmp1913 = (frost$core$Bit) {$tmp1912};
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block135; else goto block136;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:460
frost$core$Int $tmp1915 = (frost$core$Int) {1u};
return $tmp1915;
block136:;
frost$core$Int $tmp1916 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:462:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1917 = $tmp1266.value;
int64_t $tmp1918 = $tmp1916.value;
bool $tmp1919 = $tmp1917 == $tmp1918;
frost$core$Bit $tmp1920 = (frost$core$Bit) {$tmp1919};
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block138; else goto block139;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:463
frost$core$Int $tmp1922 = (frost$core$Int) {1u};
return $tmp1922;
block139:;
frost$core$Int $tmp1923 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:465:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1924 = $tmp1266.value;
int64_t $tmp1925 = $tmp1923.value;
bool $tmp1926 = $tmp1924 == $tmp1925;
frost$core$Bit $tmp1927 = (frost$core$Bit) {$tmp1926};
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block141; else goto block142;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:466
frost$core$Int $tmp1929 = (frost$core$Int) {10u};
frost$core$Int $tmp1930 = (frost$core$Int) {1u};
int64_t $tmp1931 = $tmp1929.value;
int64_t $tmp1932 = $tmp1930.value;
int64_t $tmp1933 = $tmp1931 + $tmp1932;
frost$core$Int $tmp1934 = (frost$core$Int) {$tmp1933};
return $tmp1934;
block142:;
frost$core$Int $tmp1935 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:468:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1936 = $tmp1266.value;
int64_t $tmp1937 = $tmp1935.value;
bool $tmp1938 = $tmp1936 == $tmp1937;
frost$core$Bit $tmp1939 = (frost$core$Bit) {$tmp1938};
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block144; else goto block145;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:469
frost$core$Int $tmp1941 = (frost$core$Int) {0u};
return $tmp1941;
block145:;
frost$core$Int $tmp1942 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:471:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1943 = $tmp1266.value;
int64_t $tmp1944 = $tmp1942.value;
bool $tmp1945 = $tmp1943 == $tmp1944;
frost$core$Bit $tmp1946 = (frost$core$Bit) {$tmp1945};
bool $tmp1947 = $tmp1946.value;
if ($tmp1947) goto block147; else goto block148;
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:472
frost$core$Int $tmp1948 = (frost$core$Int) {10u};
frost$core$Int $tmp1949 = (frost$core$Int) {1u};
int64_t $tmp1950 = $tmp1948.value;
int64_t $tmp1951 = $tmp1949.value;
int64_t $tmp1952 = $tmp1950 + $tmp1951;
frost$core$Int $tmp1953 = (frost$core$Int) {$tmp1952};
return $tmp1953;
block148:;
frost$core$Int $tmp1954 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:474:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1955 = $tmp1266.value;
int64_t $tmp1956 = $tmp1954.value;
bool $tmp1957 = $tmp1955 == $tmp1956;
frost$core$Bit $tmp1958 = (frost$core$Bit) {$tmp1957};
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block150; else goto block151;
block150:;
org$frostlang$frostc$Position* $tmp1960 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1961 = *$tmp1960;
org$frostlang$frostc$expression$Unary$Operator* $tmp1962 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp1963 = *$tmp1962;
org$frostlang$frostc$ASTNode** $tmp1964 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1965 = *$tmp1964;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
org$frostlang$frostc$ASTNode* $tmp1966 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
*(&local40) = $tmp1965;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:475
frost$core$Int $tmp1967 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode* $tmp1968 = *(&local40);
frost$core$Int $tmp1969 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1968);
int64_t $tmp1970 = $tmp1967.value;
int64_t $tmp1971 = $tmp1969.value;
int64_t $tmp1972 = $tmp1970 + $tmp1971;
frost$core$Int $tmp1973 = (frost$core$Int) {$tmp1972};
org$frostlang$frostc$ASTNode* $tmp1974 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1973;
block151:;
frost$core$Int $tmp1975 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:477:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1976 = $tmp1266.value;
int64_t $tmp1977 = $tmp1975.value;
bool $tmp1978 = $tmp1976 == $tmp1977;
frost$core$Bit $tmp1979 = (frost$core$Bit) {$tmp1978};
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block153; else goto block154;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:478
frost$core$Int $tmp1981 = (frost$core$Int) {0u};
return $tmp1981;
block154:;
frost$core$Int $tmp1982 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:480:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1983 = $tmp1266.value;
int64_t $tmp1984 = $tmp1982.value;
bool $tmp1985 = $tmp1983 == $tmp1984;
frost$core$Bit $tmp1986 = (frost$core$Bit) {$tmp1985};
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block156; else goto block157;
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:481
frost$core$Int $tmp1988 = (frost$core$Int) {10u};
frost$core$Int $tmp1989 = (frost$core$Int) {1u};
int64_t $tmp1990 = $tmp1988.value;
int64_t $tmp1991 = $tmp1989.value;
int64_t $tmp1992 = $tmp1990 + $tmp1991;
frost$core$Int $tmp1993 = (frost$core$Int) {$tmp1992};
return $tmp1993;
block157:;
frost$core$Int $tmp1994 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:483:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1995 = $tmp1266.value;
int64_t $tmp1996 = $tmp1994.value;
bool $tmp1997 = $tmp1995 == $tmp1996;
frost$core$Bit $tmp1998 = (frost$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block159; else goto block160;
block159:;
org$frostlang$frostc$Position* $tmp2000 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp2001 = *$tmp2000;
org$frostlang$frostc$Variable$Kind* $tmp2002 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp2003 = *$tmp2002;
org$frostlang$frostc$FixedArray** $tmp2004 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2005 = *$tmp2004;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
org$frostlang$frostc$FixedArray* $tmp2006 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local41) = $tmp2005;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:484
frost$core$Int $tmp2007 = (frost$core$Int) {0u};
*(&local42) = $tmp2007;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:485
org$frostlang$frostc$FixedArray* $tmp2008 = *(&local41);
ITable* $tmp2009 = ((frost$collections$Iterable*) $tmp2008)->$class->itable;
while ($tmp2009->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2009 = $tmp2009->next;
}
$fn2011 $tmp2010 = $tmp2009->methods[0];
frost$collections$Iterator* $tmp2012 = $tmp2010(((frost$collections$Iterable*) $tmp2008));
goto block162;
block162:;
ITable* $tmp2013 = $tmp2012->$class->itable;
while ($tmp2013->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2013 = $tmp2013->next;
}
$fn2015 $tmp2014 = $tmp2013->methods[0];
frost$core$Bit $tmp2016 = $tmp2014($tmp2012);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block164; else goto block163;
block163:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2018 = $tmp2012->$class->itable;
while ($tmp2018->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2018 = $tmp2018->next;
}
$fn2020 $tmp2019 = $tmp2018->methods[1];
frost$core$Object* $tmp2021 = $tmp2019($tmp2012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2021)));
org$frostlang$frostc$ASTNode* $tmp2022 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp2021);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:486
frost$core$Int $tmp2023 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp2024 = *(&local43);
frost$core$Int $tmp2025 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2024);
int64_t $tmp2026 = $tmp2023.value;
int64_t $tmp2027 = $tmp2025.value;
int64_t $tmp2028 = $tmp2026 + $tmp2027;
frost$core$Int $tmp2029 = (frost$core$Int) {$tmp2028};
*(&local42) = $tmp2029;
frost$core$Frost$unref$frost$core$Object$Q($tmp2021);
org$frostlang$frostc$ASTNode* $tmp2030 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block162;
block164:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:488
frost$core$Int $tmp2031 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp2032 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2031;
block160:;
frost$core$Int $tmp2033 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:490:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2034 = $tmp1266.value;
int64_t $tmp2035 = $tmp2033.value;
bool $tmp2036 = $tmp2034 == $tmp2035;
frost$core$Bit $tmp2037 = (frost$core$Bit) {$tmp2036};
bool $tmp2038 = $tmp2037.value;
if ($tmp2038) goto block165; else goto block166;
block165:;
org$frostlang$frostc$Position* $tmp2039 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp2040 = *$tmp2039;
org$frostlang$frostc$FixedArray** $tmp2041 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2042 = *$tmp2041;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
org$frostlang$frostc$FixedArray* $tmp2043 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local44) = $tmp2042;
org$frostlang$frostc$FixedArray** $tmp2044 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2045 = *$tmp2044;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
org$frostlang$frostc$FixedArray* $tmp2046 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
*(&local45) = $tmp2045;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:491
frost$core$Int $tmp2047 = (frost$core$Int) {0u};
*(&local46) = $tmp2047;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:492
org$frostlang$frostc$FixedArray* $tmp2048 = *(&local44);
ITable* $tmp2049 = ((frost$collections$Iterable*) $tmp2048)->$class->itable;
while ($tmp2049->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2049 = $tmp2049->next;
}
$fn2051 $tmp2050 = $tmp2049->methods[0];
frost$collections$Iterator* $tmp2052 = $tmp2050(((frost$collections$Iterable*) $tmp2048));
goto block168;
block168:;
ITable* $tmp2053 = $tmp2052->$class->itable;
while ($tmp2053->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2053 = $tmp2053->next;
}
$fn2055 $tmp2054 = $tmp2053->methods[0];
frost$core$Bit $tmp2056 = $tmp2054($tmp2052);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block170; else goto block169;
block169:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2058 = $tmp2052->$class->itable;
while ($tmp2058->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2058 = $tmp2058->next;
}
$fn2060 $tmp2059 = $tmp2058->methods[1];
frost$core$Object* $tmp2061 = $tmp2059($tmp2052);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2061)));
org$frostlang$frostc$ASTNode* $tmp2062 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp2061);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:493
frost$core$Int $tmp2063 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp2064 = *(&local47);
frost$core$Int $tmp2065 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2064);
int64_t $tmp2066 = $tmp2063.value;
int64_t $tmp2067 = $tmp2065.value;
int64_t $tmp2068 = $tmp2066 + $tmp2067;
frost$core$Int $tmp2069 = (frost$core$Int) {$tmp2068};
*(&local46) = $tmp2069;
frost$core$Frost$unref$frost$core$Object$Q($tmp2061);
org$frostlang$frostc$ASTNode* $tmp2070 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block168;
block170:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:495
org$frostlang$frostc$FixedArray* $tmp2071 = *(&local45);
ITable* $tmp2072 = ((frost$collections$Iterable*) $tmp2071)->$class->itable;
while ($tmp2072->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2072 = $tmp2072->next;
}
$fn2074 $tmp2073 = $tmp2072->methods[0];
frost$collections$Iterator* $tmp2075 = $tmp2073(((frost$collections$Iterable*) $tmp2071));
goto block171;
block171:;
ITable* $tmp2076 = $tmp2075->$class->itable;
while ($tmp2076->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2076 = $tmp2076->next;
}
$fn2078 $tmp2077 = $tmp2076->methods[0];
frost$core$Bit $tmp2079 = $tmp2077($tmp2075);
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block173; else goto block172;
block172:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2081 = $tmp2075->$class->itable;
while ($tmp2081->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2081 = $tmp2081->next;
}
$fn2083 $tmp2082 = $tmp2081->methods[1];
frost$core$Object* $tmp2084 = $tmp2082($tmp2075);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2084)));
org$frostlang$frostc$ASTNode* $tmp2085 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp2084);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:496
frost$core$Int $tmp2086 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp2087 = *(&local48);
frost$core$Int $tmp2088 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2087);
int64_t $tmp2089 = $tmp2086.value;
int64_t $tmp2090 = $tmp2088.value;
int64_t $tmp2091 = $tmp2089 + $tmp2090;
frost$core$Int $tmp2092 = (frost$core$Int) {$tmp2091};
*(&local46) = $tmp2092;
frost$core$Frost$unref$frost$core$Object$Q($tmp2084);
org$frostlang$frostc$ASTNode* $tmp2093 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block171;
block173:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:498
frost$core$Int $tmp2094 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp2095 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2096 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp2094;
block166:;
frost$core$Int $tmp2097 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:500:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2098 = $tmp1266.value;
int64_t $tmp2099 = $tmp2097.value;
bool $tmp2100 = $tmp2098 == $tmp2099;
frost$core$Bit $tmp2101 = (frost$core$Bit) {$tmp2100};
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block174; else goto block175;
block174:;
org$frostlang$frostc$Position* $tmp2103 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp2104 = *$tmp2103;
frost$core$String** $tmp2105 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp2106 = *$tmp2105;
org$frostlang$frostc$ASTNode** $tmp2107 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2108 = *$tmp2107;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
org$frostlang$frostc$ASTNode* $tmp2109 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local49) = $tmp2108;
org$frostlang$frostc$FixedArray** $tmp2110 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2111 = *$tmp2110;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
org$frostlang$frostc$FixedArray* $tmp2112 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
*(&local50) = $tmp2111;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:501
org$frostlang$frostc$ASTNode* $tmp2113 = *(&local49);
frost$core$Int $tmp2114 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2113);
*(&local51) = $tmp2114;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:502
org$frostlang$frostc$FixedArray* $tmp2115 = *(&local50);
ITable* $tmp2116 = ((frost$collections$Iterable*) $tmp2115)->$class->itable;
while ($tmp2116->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2116 = $tmp2116->next;
}
$fn2118 $tmp2117 = $tmp2116->methods[0];
frost$collections$Iterator* $tmp2119 = $tmp2117(((frost$collections$Iterable*) $tmp2115));
goto block177;
block177:;
ITable* $tmp2120 = $tmp2119->$class->itable;
while ($tmp2120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2120 = $tmp2120->next;
}
$fn2122 $tmp2121 = $tmp2120->methods[0];
frost$core$Bit $tmp2123 = $tmp2121($tmp2119);
bool $tmp2124 = $tmp2123.value;
if ($tmp2124) goto block179; else goto block178;
block178:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2125 = $tmp2119->$class->itable;
while ($tmp2125->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2125 = $tmp2125->next;
}
$fn2127 $tmp2126 = $tmp2125->methods[1];
frost$core$Object* $tmp2128 = $tmp2126($tmp2119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2128)));
org$frostlang$frostc$ASTNode* $tmp2129 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp2128);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:503
frost$core$Int $tmp2130 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp2131 = *(&local52);
frost$core$Int $tmp2132 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2131);
int64_t $tmp2133 = $tmp2130.value;
int64_t $tmp2134 = $tmp2132.value;
int64_t $tmp2135 = $tmp2133 + $tmp2134;
frost$core$Int $tmp2136 = (frost$core$Int) {$tmp2135};
*(&local51) = $tmp2136;
frost$core$Frost$unref$frost$core$Object$Q($tmp2128);
org$frostlang$frostc$ASTNode* $tmp2137 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block177;
block179:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:505
frost$core$Int $tmp2138 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp2139 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2140 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2138;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:508
frost$core$Int $tmp2141 = (frost$core$Int) {508u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2142, $tmp2141);
abort(); // unreachable
block1:;
goto block180;
block180:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:514
frost$core$Weak** $tmp2143 = &param0->compiler;
frost$core$Weak* $tmp2144 = *$tmp2143;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:514:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2145 = &$tmp2144->_valid;
frost$core$Bit $tmp2146 = *$tmp2145;
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block7; else goto block8;
block8:;
frost$core$Int $tmp2148 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2149, $tmp2148);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2150 = &$tmp2144->value;
frost$core$Object* $tmp2151 = *$tmp2150;
frost$core$Frost$ref$frost$core$Object$Q($tmp2151);
org$frostlang$frostc$Compiler$Settings** $tmp2152 = &((org$frostlang$frostc$Compiler*) $tmp2151)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp2153 = *$tmp2152;
frost$core$Int* $tmp2154 = &$tmp2153->optimizationLevel;
frost$core$Int $tmp2155 = *$tmp2154;
frost$core$Int $tmp2156 = (frost$core$Int) {0u};
int64_t $tmp2157 = $tmp2155.value;
int64_t $tmp2158 = $tmp2156.value;
bool $tmp2159 = $tmp2157 > $tmp2158;
frost$core$Bit $tmp2160 = (frost$core$Bit) {$tmp2159};
bool $tmp2161 = $tmp2160.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2151);
if ($tmp2161) goto block4; else goto block2;
block4:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Scanner.frost:514:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp2162 = &param1->flags;
frost$core$Int $tmp2163 = *$tmp2162;
frost$core$Int $tmp2164 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2165 = $tmp2163.value;
int64_t $tmp2166 = $tmp2164.value;
int64_t $tmp2167 = $tmp2165 & $tmp2166;
frost$core$Int $tmp2168 = (frost$core$Int) {$tmp2167};
frost$core$Int $tmp2169 = (frost$core$Int) {0u};
int64_t $tmp2170 = $tmp2168.value;
int64_t $tmp2171 = $tmp2169.value;
bool $tmp2172 = $tmp2170 != $tmp2171;
frost$core$Bit $tmp2173 = (frost$core$Bit) {$tmp2172};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:514:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2174 = $tmp2173.value;
bool $tmp2175 = !$tmp2174;
frost$core$Bit $tmp2176 = (frost$core$Bit) {$tmp2175};
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:515:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp2178 = &param1->flags;
frost$core$Int $tmp2179 = *$tmp2178;
frost$core$Int $tmp2180 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2181 = $tmp2179.value;
int64_t $tmp2182 = $tmp2180.value;
int64_t $tmp2183 = $tmp2181 & $tmp2182;
frost$core$Int $tmp2184 = (frost$core$Int) {$tmp2183};
frost$core$Int $tmp2185 = (frost$core$Int) {0u};
int64_t $tmp2186 = $tmp2184.value;
int64_t $tmp2187 = $tmp2185.value;
bool $tmp2188 = $tmp2186 != $tmp2187;
frost$core$Bit $tmp2189 = (frost$core$Bit) {$tmp2188};
bool $tmp2190 = $tmp2189.value;
if ($tmp2190) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:516
frost$core$Int $tmp2191 = (frost$core$Int) {0u};
*(&local0) = $tmp2191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:517
ITable* $tmp2192 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp2192->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2192 = $tmp2192->next;
}
$fn2194 $tmp2193 = $tmp2192->methods[0];
frost$collections$Iterator* $tmp2195 = $tmp2193(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp2196 = $tmp2195->$class->itable;
while ($tmp2196->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2196 = $tmp2196->next;
}
$fn2198 $tmp2197 = $tmp2196->methods[0];
frost$core$Bit $tmp2199 = $tmp2197($tmp2195);
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block16; else goto block15;
block15:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2201 = $tmp2195->$class->itable;
while ($tmp2201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2201 = $tmp2201->next;
}
$fn2203 $tmp2202 = $tmp2201->methods[1];
frost$core$Object* $tmp2204 = $tmp2202($tmp2195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2204)));
org$frostlang$frostc$ASTNode* $tmp2205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp2204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:518
frost$core$Int $tmp2206 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2207 = *(&local1);
frost$core$Int $tmp2208 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2207);
int64_t $tmp2209 = $tmp2206.value;
int64_t $tmp2210 = $tmp2208.value;
int64_t $tmp2211 = $tmp2209 + $tmp2210;
frost$core$Int $tmp2212 = (frost$core$Int) {$tmp2211};
*(&local0) = $tmp2212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:519
frost$core$Int $tmp2213 = *(&local0);
frost$core$Int $tmp2214 = (frost$core$Int) {10u};
int64_t $tmp2215 = $tmp2213.value;
int64_t $tmp2216 = $tmp2214.value;
bool $tmp2217 = $tmp2215 > $tmp2216;
frost$core$Bit $tmp2218 = (frost$core$Bit) {$tmp2217};
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:520
frost$core$Bit $tmp2220 = (frost$core$Bit) {false};
frost$core$Frost$unref$frost$core$Object$Q($tmp2204);
org$frostlang$frostc$ASTNode* $tmp2221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
return $tmp2220;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2204);
org$frostlang$frostc$ASTNode* $tmp2222 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:523
frost$core$Bit $tmp2223 = (frost$core$Bit) {true};
return $tmp2223;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:525
frost$core$Bit $tmp2224 = (frost$core$Bit) {false};
return $tmp2224;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:532
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:534
frost$core$Bit $tmp2225 = (frost$core$Bit) {param3 == NULL};
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:535
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:538
frost$core$Bit $tmp2228 = (frost$core$Bit) {param3 != NULL};
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block4; else goto block5;
block5:;
frost$core$Int $tmp2230 = (frost$core$Int) {538u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2231, $tmp2230, &$s2232);
abort(); // unreachable
block4:;
frost$core$Int* $tmp2233 = &param3->$rawValue;
frost$core$Int $tmp2234 = *$tmp2233;
frost$core$Int $tmp2235 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:539:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2236 = $tmp2234.value;
int64_t $tmp2237 = $tmp2235.value;
bool $tmp2238 = $tmp2236 == $tmp2237;
frost$core$Bit $tmp2239 = (frost$core$Bit) {$tmp2238};
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2241 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2242 = *$tmp2241;
*(&local1) = $tmp2242;
frost$core$String** $tmp2243 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2244 = *$tmp2243;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
frost$core$String* $tmp2245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
*(&local2) = $tmp2244;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:540
frost$core$String* $tmp2246 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$String* $tmp2247 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local0) = $tmp2246;
frost$core$String* $tmp2248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:543
frost$core$Int $tmp2249 = (frost$core$Int) {543u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2250, $tmp2249);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:547
org$frostlang$frostc$Annotations* $tmp2251 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
org$frostlang$frostc$Annotations* $tmp2252 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local3) = $tmp2251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:548
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2253;
$tmp2253 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2253->value = param5;
frost$core$Int $tmp2254 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:548:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2255 = &(&local5)->$rawValue;
*$tmp2255 = $tmp2254;
org$frostlang$frostc$MethodDecl$Kind $tmp2256 = *(&local5);
*(&local4) = $tmp2256;
org$frostlang$frostc$MethodDecl$Kind $tmp2257 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2258;
$tmp2258 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2258->value = $tmp2257;
ITable* $tmp2259 = ((frost$core$Equatable*) $tmp2253)->$class->itable;
while ($tmp2259->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2259 = $tmp2259->next;
}
$fn2261 $tmp2260 = $tmp2259->methods[1];
frost$core$Bit $tmp2262 = $tmp2260(((frost$core$Equatable*) $tmp2253), ((frost$core$Equatable*) $tmp2258));
bool $tmp2263 = $tmp2262.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2258)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2253)));
if ($tmp2263) goto block13; else goto block12;
block13:;
org$frostlang$frostc$Annotations** $tmp2264 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2265 = *$tmp2264;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:548:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp2266 = &$tmp2265->flags;
frost$core$Int $tmp2267 = *$tmp2266;
frost$core$Int $tmp2268 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2269 = $tmp2267.value;
int64_t $tmp2270 = $tmp2268.value;
int64_t $tmp2271 = $tmp2269 & $tmp2270;
frost$core$Int $tmp2272 = (frost$core$Int) {$tmp2271};
frost$core$Int $tmp2273 = (frost$core$Int) {0u};
int64_t $tmp2274 = $tmp2272.value;
int64_t $tmp2275 = $tmp2273.value;
bool $tmp2276 = $tmp2274 != $tmp2275;
frost$core$Bit $tmp2277 = (frost$core$Bit) {$tmp2276};
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block10; else goto block12;
block12:;
org$frostlang$frostc$Annotations* $tmp2279 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Scanner.frost:548:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
frost$core$Int* $tmp2280 = &$tmp2279->flags;
frost$core$Int $tmp2281 = *$tmp2280;
frost$core$Int $tmp2282 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2283 = $tmp2281.value;
int64_t $tmp2284 = $tmp2282.value;
int64_t $tmp2285 = $tmp2283 & $tmp2284;
frost$core$Int $tmp2286 = (frost$core$Int) {$tmp2285};
frost$core$Int $tmp2287 = (frost$core$Int) {0u};
int64_t $tmp2288 = $tmp2286.value;
int64_t $tmp2289 = $tmp2287.value;
bool $tmp2290 = $tmp2288 != $tmp2289;
frost$core$Bit $tmp2291 = (frost$core$Bit) {$tmp2290};
bool $tmp2292 = $tmp2291.value;
if ($tmp2292) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:549
org$frostlang$frostc$Annotations* $tmp2293 = *(&local3);
frost$core$Int* $tmp2294 = &$tmp2293->flags;
frost$core$Int $tmp2295 = *$tmp2294;
frost$core$Int $tmp2296 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:549:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2297 = $tmp2295.value;
int64_t $tmp2298 = $tmp2296.value;
int64_t $tmp2299 = $tmp2297 | $tmp2298;
frost$core$Int $tmp2300 = (frost$core$Int) {$tmp2299};
frost$core$Int* $tmp2301 = &$tmp2293->flags;
*$tmp2301 = $tmp2300;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:551
*(&local6) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:552
frost$core$Bit $tmp2302 = (frost$core$Bit) {param7 != NULL};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block20; else goto block22;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:553
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2304 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
frost$collections$Array* $tmp2305 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local6) = $tmp2304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:554
frost$core$String** $tmp2306 = &param1->name;
frost$core$String* $tmp2307 = *$tmp2306;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:554:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$core$String* $tmp2308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2307, &$s2309);
frost$core$String* $tmp2310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2308, param6);
frost$core$String* $tmp2311 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2310, &$s2312);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
frost$core$String* $tmp2313 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
*(&local7) = $tmp2311;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:555
frost$core$Bit $tmp2314 = (frost$core$Bit) {param7 != NULL};
bool $tmp2315 = $tmp2314.value;
if ($tmp2315) goto block24; else goto block25;
block25:;
frost$core$Int $tmp2316 = (frost$core$Int) {555u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2317, $tmp2316, &$s2318);
abort(); // unreachable
block24:;
ITable* $tmp2319 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp2319->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2319 = $tmp2319->next;
}
$fn2321 $tmp2320 = $tmp2319->methods[0];
frost$collections$Iterator* $tmp2322 = $tmp2320(((frost$collections$Iterable*) param7));
goto block26;
block26:;
ITable* $tmp2323 = $tmp2322->$class->itable;
while ($tmp2323->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2323 = $tmp2323->next;
}
$fn2325 $tmp2324 = $tmp2323->methods[0];
frost$core$Bit $tmp2326 = $tmp2324($tmp2322);
bool $tmp2327 = $tmp2326.value;
if ($tmp2327) goto block28; else goto block27;
block27:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2328 = $tmp2322->$class->itable;
while ($tmp2328->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2328 = $tmp2328->next;
}
$fn2330 $tmp2329 = $tmp2328->methods[1];
frost$core$Object* $tmp2331 = $tmp2329($tmp2322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2331)));
org$frostlang$frostc$ASTNode* $tmp2332 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp2331);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:556
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:557
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:558
org$frostlang$frostc$ASTNode* $tmp2333 = *(&local8);
frost$core$Int* $tmp2334 = &$tmp2333->$rawValue;
frost$core$Int $tmp2335 = *$tmp2334;
frost$core$Int $tmp2336 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:559:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2337 = $tmp2335.value;
int64_t $tmp2338 = $tmp2336.value;
bool $tmp2339 = $tmp2337 == $tmp2338;
frost$core$Bit $tmp2340 = (frost$core$Bit) {$tmp2339};
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2342 = (org$frostlang$frostc$Position*) ($tmp2333->$data + 0);
org$frostlang$frostc$Position $tmp2343 = *$tmp2342;
frost$core$String** $tmp2344 = (frost$core$String**) ($tmp2333->$data + 24);
frost$core$String* $tmp2345 = *$tmp2344;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2345));
frost$core$String* $tmp2346 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
*(&local11) = $tmp2345;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:560
frost$core$String* $tmp2347 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$String* $tmp2348 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2348));
*(&local9) = $tmp2347;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:561
frost$core$Weak** $tmp2349 = &param0->compiler;
frost$core$Weak* $tmp2350 = *$tmp2349;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:561:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2351 = &$tmp2350->_valid;
frost$core$Bit $tmp2352 = *$tmp2351;
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block35; else goto block36;
block36:;
frost$core$Int $tmp2354 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2355, $tmp2354);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2356 = &$tmp2350->value;
frost$core$Object* $tmp2357 = *$tmp2356;
frost$core$Frost$ref$frost$core$Object$Q($tmp2357);
org$frostlang$frostc$Type** $tmp2358 = &((org$frostlang$frostc$Compiler*) $tmp2357)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2359 = *$tmp2358;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2359));
org$frostlang$frostc$Type* $tmp2360 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
*(&local10) = $tmp2359;
frost$core$Frost$unref$frost$core$Object$Q($tmp2357);
frost$core$String* $tmp2361 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local11) = ((frost$core$String*) NULL);
goto block29;
block31:;
frost$core$Int $tmp2362 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:563:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2363 = $tmp2335.value;
int64_t $tmp2364 = $tmp2362.value;
bool $tmp2365 = $tmp2363 == $tmp2364;
frost$core$Bit $tmp2366 = (frost$core$Bit) {$tmp2365};
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp2368 = (org$frostlang$frostc$Position*) ($tmp2333->$data + 0);
org$frostlang$frostc$Position $tmp2369 = *$tmp2368;
frost$core$String** $tmp2370 = (frost$core$String**) ($tmp2333->$data + 24);
frost$core$String* $tmp2371 = *$tmp2370;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
frost$core$String* $tmp2372 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local12) = $tmp2371;
org$frostlang$frostc$ASTNode** $tmp2373 = (org$frostlang$frostc$ASTNode**) ($tmp2333->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2374 = *$tmp2373;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2374));
org$frostlang$frostc$ASTNode* $tmp2375 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local13) = $tmp2374;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:564
frost$core$String* $tmp2376 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
frost$core$String* $tmp2377 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local9) = $tmp2376;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:565
org$frostlang$frostc$ASTNode* $tmp2378 = *(&local13);
frost$core$Bit $tmp2379 = (frost$core$Bit) {$tmp2378 != NULL};
bool $tmp2380 = $tmp2379.value;
if ($tmp2380) goto block40; else goto block41;
block41:;
frost$core$Int $tmp2381 = (frost$core$Int) {565u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2382, $tmp2381, &$s2383);
abort(); // unreachable
block40:;
org$frostlang$frostc$Type* $tmp2384 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2378);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
org$frostlang$frostc$Type* $tmp2385 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
*(&local10) = $tmp2384;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
org$frostlang$frostc$ASTNode* $tmp2386 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2387 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
*(&local12) = ((frost$core$String*) NULL);
goto block29;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:568
frost$core$Int $tmp2388 = (frost$core$Int) {568u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2389, $tmp2388);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:571
frost$collections$Array* $tmp2390 = *(&local6);
frost$core$Bit $tmp2391 = (frost$core$Bit) {$tmp2390 != NULL};
bool $tmp2392 = $tmp2391.value;
if ($tmp2392) goto block42; else goto block43;
block43:;
frost$core$Int $tmp2393 = (frost$core$Int) {571u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2394, $tmp2393, &$s2395);
abort(); // unreachable
block42:;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$MethodDecl$GenericParameter));
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp2396 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2397 = *(&local8);
$fn2399 $tmp2398 = ($fn2399) $tmp2397->$class->vtable[2];
org$frostlang$frostc$Position $tmp2400 = $tmp2398($tmp2397);
frost$core$String* $tmp2401 = *(&local7);
frost$core$String* $tmp2402 = *(&local9);
org$frostlang$frostc$Type* $tmp2403 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2396, $tmp2400, $tmp2401, $tmp2402, $tmp2403);
frost$collections$Array$add$frost$collections$Array$T($tmp2390, ((frost$core$Object*) $tmp2396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
org$frostlang$frostc$Type* $tmp2404 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2405 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2331);
org$frostlang$frostc$ASTNode* $tmp2406 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
frost$core$String* $tmp2407 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
*(&local7) = ((frost$core$String*) NULL);
goto block21;
block22:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:576
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp2408 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local6) = ((frost$collections$Array*) NULL);
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:578
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2409 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2409);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
frost$collections$Array* $tmp2410 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local14) = $tmp2409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:579
ITable* $tmp2411 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp2411->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2411 = $tmp2411->next;
}
$fn2413 $tmp2412 = $tmp2411->methods[0];
frost$collections$Iterator* $tmp2414 = $tmp2412(((frost$collections$Iterable*) param8));
goto block44;
block44:;
ITable* $tmp2415 = $tmp2414->$class->itable;
while ($tmp2415->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2415 = $tmp2415->next;
}
$fn2417 $tmp2416 = $tmp2415->methods[0];
frost$core$Bit $tmp2418 = $tmp2416($tmp2414);
bool $tmp2419 = $tmp2418.value;
if ($tmp2419) goto block46; else goto block45;
block45:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2420 = $tmp2414->$class->itable;
while ($tmp2420->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2420 = $tmp2420->next;
}
$fn2422 $tmp2421 = $tmp2420->methods[1];
frost$core$Object* $tmp2423 = $tmp2421($tmp2414);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2423)));
org$frostlang$frostc$ASTNode* $tmp2424 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2423);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:580
org$frostlang$frostc$ASTNode* $tmp2425 = *(&local15);
frost$core$Int* $tmp2426 = &$tmp2425->$rawValue;
frost$core$Int $tmp2427 = *$tmp2426;
frost$core$Int $tmp2428 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:581:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2429 = $tmp2427.value;
int64_t $tmp2430 = $tmp2428.value;
bool $tmp2431 = $tmp2429 == $tmp2430;
frost$core$Bit $tmp2432 = (frost$core$Bit) {$tmp2431};
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp2434 = (org$frostlang$frostc$Position*) ($tmp2425->$data + 0);
org$frostlang$frostc$Position $tmp2435 = *$tmp2434;
frost$core$String** $tmp2436 = (frost$core$String**) ($tmp2425->$data + 24);
frost$core$String* $tmp2437 = *$tmp2436;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
frost$core$String* $tmp2438 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
*(&local16) = $tmp2437;
org$frostlang$frostc$ASTNode** $tmp2439 = (org$frostlang$frostc$ASTNode**) ($tmp2425->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2440 = *$tmp2439;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
org$frostlang$frostc$ASTNode* $tmp2441 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local17) = $tmp2440;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:582
frost$collections$Array* $tmp2442 = *(&local14);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2443 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2444 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp2445 = *(&local17);
org$frostlang$frostc$Type* $tmp2446 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2445);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2443, $tmp2444, $tmp2446);
frost$collections$Array$add$frost$collections$Array$T($tmp2442, ((frost$core$Object*) $tmp2443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
org$frostlang$frostc$ASTNode* $tmp2447 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2448 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2423);
org$frostlang$frostc$ASTNode* $tmp2449 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2449));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block44;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:585
frost$core$Int $tmp2450 = (frost$core$Int) {585u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2451, $tmp2450);
abort(); // unreachable
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:589
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:590
frost$core$Bit $tmp2452 = (frost$core$Bit) {param9 != NULL};
bool $tmp2453 = $tmp2452.value;
if ($tmp2453) goto block51; else goto block53;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:591
frost$core$Bit $tmp2454 = (frost$core$Bit) {param9 != NULL};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block54; else goto block55;
block55:;
frost$core$Int $tmp2456 = (frost$core$Int) {591u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2457, $tmp2456, &$s2458);
abort(); // unreachable
block54:;
org$frostlang$frostc$Type* $tmp2459 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
org$frostlang$frostc$Type* $tmp2460 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local18) = $tmp2459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
goto block52;
block53:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:594
frost$core$Weak** $tmp2461 = &param0->compiler;
frost$core$Weak* $tmp2462 = *$tmp2461;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:594:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2463 = &$tmp2462->_valid;
frost$core$Bit $tmp2464 = *$tmp2463;
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block58; else goto block59;
block59:;
frost$core$Int $tmp2466 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2467, $tmp2466);
abort(); // unreachable
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2468 = &$tmp2462->value;
frost$core$Object* $tmp2469 = *$tmp2468;
frost$core$Frost$ref$frost$core$Object$Q($tmp2469);
org$frostlang$frostc$Type** $tmp2470 = &((org$frostlang$frostc$Compiler*) $tmp2469)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2471 = *$tmp2470;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
org$frostlang$frostc$Type* $tmp2472 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
*(&local18) = $tmp2471;
frost$core$Frost$unref$frost$core$Object$Q($tmp2469);
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:596
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2473;
$tmp2473 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2473->value = param5;
frost$core$Int $tmp2474 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:596:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2475 = &(&local20)->$rawValue;
*$tmp2475 = $tmp2474;
org$frostlang$frostc$MethodDecl$Kind $tmp2476 = *(&local20);
*(&local19) = $tmp2476;
org$frostlang$frostc$MethodDecl$Kind $tmp2477 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2478;
$tmp2478 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2478->value = $tmp2477;
ITable* $tmp2479 = ((frost$core$Equatable*) $tmp2473)->$class->itable;
while ($tmp2479->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2479 = $tmp2479->next;
}
$fn2481 $tmp2480 = $tmp2479->methods[0];
frost$core$Bit $tmp2482 = $tmp2480(((frost$core$Equatable*) $tmp2473), ((frost$core$Equatable*) $tmp2478));
bool $tmp2483 = $tmp2482.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2478)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2473)));
if ($tmp2483) goto block62; else goto block61;
block62:;
org$frostlang$frostc$Type* $tmp2484 = *(&local18);
frost$core$Weak** $tmp2485 = &param0->compiler;
frost$core$Weak* $tmp2486 = *$tmp2485;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:596:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2487 = &$tmp2486->_valid;
frost$core$Bit $tmp2488 = *$tmp2487;
bool $tmp2489 = $tmp2488.value;
if ($tmp2489) goto block66; else goto block67;
block67:;
frost$core$Int $tmp2490 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2491, $tmp2490);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2492 = &$tmp2486->value;
frost$core$Object* $tmp2493 = *$tmp2492;
frost$core$Frost$ref$frost$core$Object$Q($tmp2493);
org$frostlang$frostc$Type** $tmp2494 = &((org$frostlang$frostc$Compiler*) $tmp2493)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2495 = *$tmp2494;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Scanner.frost:596:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2496 = &((org$frostlang$frostc$Symbol*) $tmp2484)->name;
frost$core$String* $tmp2497 = *$tmp2496;
frost$core$String** $tmp2498 = &((org$frostlang$frostc$Symbol*) $tmp2495)->name;
frost$core$String* $tmp2499 = *$tmp2498;
frost$core$Bit $tmp2500 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2497, $tmp2499);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Type$Kind* $tmp2502 = &$tmp2484->typeKind;
org$frostlang$frostc$Type$Kind $tmp2503 = *$tmp2502;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2504;
$tmp2504 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2504->value = $tmp2503;
org$frostlang$frostc$Type$Kind* $tmp2505 = &$tmp2495->typeKind;
org$frostlang$frostc$Type$Kind $tmp2506 = *$tmp2505;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2507;
$tmp2507 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2507->value = $tmp2506;
ITable* $tmp2508 = ((frost$core$Equatable*) $tmp2504)->$class->itable;
while ($tmp2508->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2508 = $tmp2508->next;
}
$fn2510 $tmp2509 = $tmp2508->methods[0];
frost$core$Bit $tmp2511 = $tmp2509(((frost$core$Equatable*) $tmp2504), ((frost$core$Equatable*) $tmp2507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2507)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2504)));
*(&local21) = $tmp2511;
goto block71;
block70:;
*(&local21) = $tmp2500;
goto block71;
block71:;
frost$core$Bit $tmp2512 = *(&local21);
bool $tmp2513 = $tmp2512.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2493);
if ($tmp2513) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:597
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:597:18
frost$io$File** $tmp2514 = &param0->source;
frost$io$File* $tmp2515 = *$tmp2514;
frost$core$Bit $tmp2516 = (frost$core$Bit) {$tmp2515 != NULL};
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block73; else goto block74;
block74:;
frost$core$Int $tmp2518 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2519, $tmp2518, &$s2520);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp2521 = &param0->compiler;
frost$core$Weak* $tmp2522 = *$tmp2521;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2523 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2522);
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block76; else goto block77;
block77:;
frost$core$Int $tmp2525 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2526, $tmp2525);
abort(); // unreachable
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2527 = &$tmp2522->value;
frost$core$Object* $tmp2528 = *$tmp2527;
frost$core$Frost$ref$frost$core$Object$Q($tmp2528);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2528), param2, &$s2529);
frost$core$Frost$unref$frost$core$Object$Q($tmp2528);
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:599
frost$core$Bit $tmp2530 = (frost$core$Bit) {param10 != NULL};
bool $tmp2531 = $tmp2530.value;
if ($tmp2531) goto block80; else goto block79;
block80:;
org$frostlang$frostc$Annotations* $tmp2532 = *(&local3);
frost$core$Bit $tmp2533 = (frost$core$Bit) {param10 != NULL};
bool $tmp2534 = $tmp2533.value;
if ($tmp2534) goto block81; else goto block82;
block82:;
frost$core$Int $tmp2535 = (frost$core$Int) {599u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2536, $tmp2535, &$s2537);
abort(); // unreachable
block81:;
frost$core$Bit $tmp2538 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp2532, ((frost$collections$ListView*) param10));
bool $tmp2539 = $tmp2538.value;
if ($tmp2539) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:600
org$frostlang$frostc$Annotations* $tmp2540 = *(&local3);
frost$core$Int* $tmp2541 = &$tmp2540->flags;
frost$core$Int $tmp2542 = *$tmp2541;
frost$core$Int $tmp2543 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:600:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2544 = $tmp2542.value;
int64_t $tmp2545 = $tmp2543.value;
int64_t $tmp2546 = $tmp2544 | $tmp2545;
frost$core$Int $tmp2547 = (frost$core$Int) {$tmp2546};
frost$core$Int* $tmp2548 = &$tmp2540->flags;
*$tmp2548 = $tmp2547;
goto block79;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:602
frost$core$Bit $tmp2549 = (frost$core$Bit) {param10 == NULL};
bool $tmp2550 = $tmp2549.value;
if ($tmp2550) goto block87; else goto block85;
block87:;
org$frostlang$frostc$ClassDecl$Kind* $tmp2551 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2552 = *$tmp2551;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2553;
$tmp2553 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2553->value = $tmp2552;
frost$core$Int $tmp2554 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:602:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp2555 = &(&local23)->$rawValue;
*$tmp2555 = $tmp2554;
org$frostlang$frostc$ClassDecl$Kind $tmp2556 = *(&local23);
*(&local22) = $tmp2556;
org$frostlang$frostc$ClassDecl$Kind $tmp2557 = *(&local22);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2558;
$tmp2558 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2558->value = $tmp2557;
ITable* $tmp2559 = ((frost$core$Equatable*) $tmp2553)->$class->itable;
while ($tmp2559->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2559 = $tmp2559->next;
}
$fn2561 $tmp2560 = $tmp2559->methods[0];
frost$core$Bit $tmp2562 = $tmp2560(((frost$core$Equatable*) $tmp2553), ((frost$core$Equatable*) $tmp2558));
bool $tmp2563 = $tmp2562.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2558)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2553)));
if ($tmp2563) goto block86; else goto block85;
block86:;
org$frostlang$frostc$Annotations** $tmp2564 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2565 = *$tmp2564;
// begin inline call to function org.frostlang.frostc.Annotations.get_isStub():frost.core.Bit from Scanner.frost:603:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:174
frost$core$Int* $tmp2566 = &$tmp2565->flags;
frost$core$Int $tmp2567 = *$tmp2566;
frost$core$Int $tmp2568 = (frost$core$Int) {131072u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2569 = $tmp2567.value;
int64_t $tmp2570 = $tmp2568.value;
int64_t $tmp2571 = $tmp2569 & $tmp2570;
frost$core$Int $tmp2572 = (frost$core$Int) {$tmp2571};
frost$core$Int $tmp2573 = (frost$core$Int) {0u};
int64_t $tmp2574 = $tmp2572.value;
int64_t $tmp2575 = $tmp2573.value;
bool $tmp2576 = $tmp2574 != $tmp2575;
frost$core$Bit $tmp2577 = (frost$core$Bit) {$tmp2576};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:603:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2578 = $tmp2577.value;
bool $tmp2579 = !$tmp2578;
frost$core$Bit $tmp2580 = (frost$core$Bit) {$tmp2579};
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block84; else goto block85;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:604
org$frostlang$frostc$Annotations* $tmp2582 = *(&local3);
frost$core$Int* $tmp2583 = &$tmp2582->flags;
frost$core$Int $tmp2584 = *$tmp2583;
frost$core$Int $tmp2585 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:604:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2586 = $tmp2584.value;
int64_t $tmp2587 = $tmp2585.value;
int64_t $tmp2588 = $tmp2586 & $tmp2587;
frost$core$Int $tmp2589 = (frost$core$Int) {$tmp2588};
frost$core$Int $tmp2590 = (frost$core$Int) {0u};
int64_t $tmp2591 = $tmp2589.value;
int64_t $tmp2592 = $tmp2590.value;
bool $tmp2593 = $tmp2591 != $tmp2592;
frost$core$Bit $tmp2594 = (frost$core$Bit) {$tmp2593};
bool $tmp2595 = $tmp2594.value;
if ($tmp2595) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:605
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:605:22
frost$io$File** $tmp2596 = &param0->source;
frost$io$File* $tmp2597 = *$tmp2596;
frost$core$Bit $tmp2598 = (frost$core$Bit) {$tmp2597 != NULL};
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block96; else goto block97;
block97:;
frost$core$Int $tmp2600 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2601, $tmp2600, &$s2602);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp2603 = &param0->compiler;
frost$core$Weak* $tmp2604 = *$tmp2603;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2605 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2604);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block99; else goto block100;
block100:;
frost$core$Int $tmp2607 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2608, $tmp2607);
abort(); // unreachable
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2609 = &$tmp2604->value;
frost$core$Object* $tmp2610 = *$tmp2609;
frost$core$Frost$ref$frost$core$Object$Q($tmp2610);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2610), param2, &$s2611);
frost$core$Frost$unref$frost$core$Object$Q($tmp2610);
goto block93;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:608
org$frostlang$frostc$Annotations* $tmp2612 = *(&local3);
frost$core$Int* $tmp2613 = &$tmp2612->flags;
frost$core$Int $tmp2614 = *$tmp2613;
frost$core$Int $tmp2615 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:608:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2616 = $tmp2614.value;
int64_t $tmp2617 = $tmp2615.value;
int64_t $tmp2618 = $tmp2616 | $tmp2617;
frost$core$Int $tmp2619 = (frost$core$Int) {$tmp2618};
frost$core$Int* $tmp2620 = &$tmp2612->flags;
*$tmp2620 = $tmp2619;
goto block85;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:610
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2621 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp2622 = *(&local0);
org$frostlang$frostc$Annotations* $tmp2623 = *(&local3);
frost$collections$Array* $tmp2624 = *(&local6);
frost$collections$Array* $tmp2625 = *(&local14);
org$frostlang$frostc$Type* $tmp2626 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2621, param1, param2, $tmp2622, $tmp2623, param5, param6, $tmp2624, $tmp2625, $tmp2626, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
org$frostlang$frostc$Type* $tmp2627 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2628 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2629 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2630 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2631 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2621;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:615
frost$core$Int* $tmp2632 = &param2->$rawValue;
frost$core$Int $tmp2633 = *$tmp2632;
frost$core$Int $tmp2634 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:616:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2635 = $tmp2633.value;
int64_t $tmp2636 = $tmp2634.value;
bool $tmp2637 = $tmp2635 == $tmp2636;
frost$core$Bit $tmp2638 = (frost$core$Bit) {$tmp2637};
bool $tmp2639 = $tmp2638.value;
if ($tmp2639) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2640 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2641 = *$tmp2640;
*(&local0) = $tmp2641;
org$frostlang$frostc$ASTNode** $tmp2642 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2643 = *$tmp2642;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
org$frostlang$frostc$ASTNode* $tmp2644 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local1) = $tmp2643;
org$frostlang$frostc$FixedArray** $tmp2645 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2646 = *$tmp2645;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlang$frostc$FixedArray* $tmp2647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local2) = $tmp2646;
org$frostlang$frostc$ASTNode** $tmp2648 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2649 = *$tmp2648;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
org$frostlang$frostc$ASTNode* $tmp2650 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
*(&local3) = $tmp2649;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:617
org$frostlang$frostc$Position $tmp2651 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2652 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2653 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2654 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp2651, $tmp2652, $tmp2653, $tmp2654);
org$frostlang$frostc$ASTNode* $tmp2655 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int $tmp2658 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:619:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2659 = $tmp2633.value;
int64_t $tmp2660 = $tmp2658.value;
bool $tmp2661 = $tmp2659 == $tmp2660;
frost$core$Bit $tmp2662 = (frost$core$Bit) {$tmp2661};
bool $tmp2663 = $tmp2662.value;
if ($tmp2663) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2664 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2665 = *$tmp2664;
*(&local4) = $tmp2665;
org$frostlang$frostc$ASTNode** $tmp2666 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2667 = *$tmp2666;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
org$frostlang$frostc$ASTNode* $tmp2668 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local5) = $tmp2667;
org$frostlang$frostc$FixedArray** $tmp2669 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2670 = *$tmp2669;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2670));
org$frostlang$frostc$FixedArray* $tmp2671 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
*(&local6) = $tmp2670;
org$frostlang$frostc$MethodDecl$Kind* $tmp2672 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp2673 = *$tmp2672;
*(&local7) = $tmp2673;
frost$core$String** $tmp2674 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2675 = *$tmp2674;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$core$String* $tmp2676 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local8) = $tmp2675;
org$frostlang$frostc$FixedArray** $tmp2677 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2678 = *$tmp2677;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
org$frostlang$frostc$FixedArray* $tmp2679 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local9) = $tmp2678;
org$frostlang$frostc$FixedArray** $tmp2680 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2681 = *$tmp2680;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2681));
org$frostlang$frostc$FixedArray* $tmp2682 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local10) = $tmp2681;
org$frostlang$frostc$ASTNode** $tmp2683 = (org$frostlang$frostc$ASTNode**) (param2->$data + 72);
org$frostlang$frostc$ASTNode* $tmp2684 = *$tmp2683;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
org$frostlang$frostc$ASTNode* $tmp2685 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local11) = $tmp2684;
org$frostlang$frostc$FixedArray** $tmp2686 = (org$frostlang$frostc$FixedArray**) (param2->$data + 80);
org$frostlang$frostc$FixedArray* $tmp2687 = *$tmp2686;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
org$frostlang$frostc$FixedArray* $tmp2688 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local12) = $tmp2687;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:621
org$frostlang$frostc$Position $tmp2689 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2690 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2691 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp2692 = *(&local7);
frost$core$String* $tmp2693 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2694 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp2695 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2696 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2697 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp2698 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp2689, $tmp2690, $tmp2691, $tmp2692, $tmp2693, $tmp2694, $tmp2695, $tmp2696, $tmp2697);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
org$frostlang$frostc$MethodDecl* $tmp2699 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local13) = $tmp2698;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:623
org$frostlang$frostc$MethodDecl* $tmp2700 = *(&local13);
frost$core$Bit $tmp2701 = (frost$core$Bit) {$tmp2700 != NULL};
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:624
org$frostlang$frostc$SymbolTable** $tmp2703 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2704 = *$tmp2703;
org$frostlang$frostc$MethodDecl* $tmp2705 = *(&local13);
frost$core$Bit $tmp2706 = (frost$core$Bit) {$tmp2705 != NULL};
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2708 = (frost$core$Int) {624u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2709, $tmp2708, &$s2710);
abort(); // unreachable
block10:;
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:624:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2711 = &((org$frostlang$frostc$Symbol*) $tmp2705)->name;
frost$core$String* $tmp2712 = *$tmp2711;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2704, ((org$frostlang$frostc$Symbol*) $tmp2705), $tmp2712);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:625
frost$collections$Array** $tmp2713 = &param1->methods;
frost$collections$Array* $tmp2714 = *$tmp2713;
org$frostlang$frostc$MethodDecl* $tmp2715 = *(&local13);
frost$core$Bit $tmp2716 = (frost$core$Bit) {$tmp2715 != NULL};
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block13; else goto block14;
block14:;
frost$core$Int $tmp2718 = (frost$core$Int) {625u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2719, $tmp2718, &$s2720);
abort(); // unreachable
block13:;
frost$collections$Array$add$frost$collections$Array$T($tmp2714, ((frost$core$Object*) $tmp2715));
goto block9;
block9:;
org$frostlang$frostc$MethodDecl* $tmp2721 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2722 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2723 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2724 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2725 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2726 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2727 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2727));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2728 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2728));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
frost$core$Int $tmp2729 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:628:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2730 = $tmp2633.value;
int64_t $tmp2731 = $tmp2729.value;
bool $tmp2732 = $tmp2730 == $tmp2731;
frost$core$Bit $tmp2733 = (frost$core$Bit) {$tmp2732};
bool $tmp2734 = $tmp2733.value;
if ($tmp2734) goto block15; else goto block16;
block15:;
org$frostlang$frostc$Position* $tmp2735 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2736 = *$tmp2735;
*(&local14) = $tmp2736;
org$frostlang$frostc$ASTNode** $tmp2737 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2738 = *$tmp2737;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
org$frostlang$frostc$ASTNode* $tmp2739 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2739));
*(&local15) = $tmp2738;
org$frostlang$frostc$FixedArray** $tmp2740 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2741 = *$tmp2740;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
org$frostlang$frostc$FixedArray* $tmp2742 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
*(&local16) = $tmp2741;
org$frostlang$frostc$ClassDecl$Kind* $tmp2743 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp2744 = *$tmp2743;
*(&local17) = $tmp2744;
frost$core$String** $tmp2745 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2746 = *$tmp2745;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
frost$core$String* $tmp2747 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local18) = $tmp2746;
org$frostlang$frostc$FixedArray** $tmp2748 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2749 = *$tmp2748;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
org$frostlang$frostc$FixedArray* $tmp2750 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local19) = $tmp2749;
org$frostlang$frostc$FixedArray** $tmp2751 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2752 = *$tmp2751;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
org$frostlang$frostc$FixedArray* $tmp2753 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
*(&local20) = $tmp2752;
org$frostlang$frostc$FixedArray** $tmp2754 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2755 = *$tmp2754;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
org$frostlang$frostc$FixedArray* $tmp2756 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
*(&local21) = $tmp2755;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:630
frost$io$File** $tmp2757 = &param1->source;
frost$io$File* $tmp2758 = *$tmp2757;
frost$collections$MapView** $tmp2759 = &param1->aliases;
frost$collections$MapView* $tmp2760 = *$tmp2759;
frost$core$String** $tmp2761 = &param1->name;
frost$core$String* $tmp2762 = *$tmp2761;
org$frostlang$frostc$Position $tmp2763 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2764 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2765 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2766 = *(&local17);
frost$core$String* $tmp2767 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2768 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2769 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2770 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2771 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2758, $tmp2760, $tmp2762, $tmp2763, $tmp2764, $tmp2765, $tmp2766, $tmp2767, $tmp2768, $tmp2769, $tmp2770);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
org$frostlang$frostc$ClassDecl* $tmp2772 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local22) = $tmp2771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:632
org$frostlang$frostc$ClassDecl* $tmp2773 = *(&local22);
frost$core$Bit $tmp2774 = (frost$core$Bit) {$tmp2773 != NULL};
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:633
org$frostlang$frostc$ClassDecl* $tmp2776 = *(&local22);
frost$core$Bit $tmp2777 = (frost$core$Bit) {$tmp2776 != NULL};
bool $tmp2778 = $tmp2777.value;
if ($tmp2778) goto block20; else goto block21;
block21:;
frost$core$Int $tmp2779 = (frost$core$Int) {633u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2780, $tmp2779, &$s2781);
abort(); // unreachable
block20:;
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2782 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2782, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Weak** $tmp2783 = &$tmp2776->owner;
frost$core$Weak* $tmp2784 = *$tmp2783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
frost$core$Weak** $tmp2785 = &$tmp2776->owner;
*$tmp2785 = $tmp2782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:634
frost$collections$Array** $tmp2786 = &param1->classes;
frost$collections$Array* $tmp2787 = *$tmp2786;
org$frostlang$frostc$ClassDecl* $tmp2788 = *(&local22);
frost$core$Bit $tmp2789 = (frost$core$Bit) {$tmp2788 != NULL};
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block22; else goto block23;
block23:;
frost$core$Int $tmp2791 = (frost$core$Int) {634u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2792, $tmp2791, &$s2793);
abort(); // unreachable
block22:;
frost$collections$Array$add$frost$collections$Array$T($tmp2787, ((frost$core$Object*) $tmp2788));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:635
org$frostlang$frostc$ClassDecl* $tmp2794 = *(&local22);
frost$core$Bit $tmp2795 = (frost$core$Bit) {$tmp2794 != NULL};
bool $tmp2796 = $tmp2795.value;
if ($tmp2796) goto block24; else goto block25;
block25:;
frost$core$Int $tmp2797 = (frost$core$Int) {635u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2798, $tmp2797, &$s2799);
abort(); // unreachable
block24:;
frost$core$String** $tmp2800 = &$tmp2794->name;
frost$core$String* $tmp2801 = *$tmp2800;
frost$core$String** $tmp2802 = &param1->name;
frost$core$String* $tmp2803 = *$tmp2802;
frost$core$String* $tmp2804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2803, &$s2805);
frost$core$Bit $tmp2806 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2801, $tmp2804);
bool $tmp2807 = $tmp2806.value;
if ($tmp2807) goto block26; else goto block27;
block27:;
frost$core$Int $tmp2808 = (frost$core$Int) {635u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2809, $tmp2808);
abort(); // unreachable
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:636
org$frostlang$frostc$SymbolTable** $tmp2810 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2811 = *$tmp2810;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2812 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2813 = *(&local22);
frost$core$Bit $tmp2814 = (frost$core$Bit) {$tmp2813 != NULL};
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block28; else goto block29;
block29:;
frost$core$Int $tmp2816 = (frost$core$Int) {636u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2817, $tmp2816, &$s2818);
abort(); // unreachable
block28:;
frost$core$String** $tmp2819 = &$tmp2813->name;
frost$core$String* $tmp2820 = *$tmp2819;
frost$core$String** $tmp2821 = &param1->name;
frost$core$String* $tmp2822 = *$tmp2821;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Scanner.frost:636:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2823 = ((frost$collections$Iterable*) $tmp2822)->$class->itable;
while ($tmp2823->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2823 = $tmp2823->next;
}
$fn2825 $tmp2824 = $tmp2823->methods[0];
frost$collections$Iterator* $tmp2826 = $tmp2824(((frost$collections$Iterable*) $tmp2822));
ITable* $tmp2827 = $tmp2826->$class->itable;
while ($tmp2827->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2827 = $tmp2827->next;
}
$fn2829 $tmp2828 = $tmp2827->methods[2];
frost$core$Int $tmp2830 = $tmp2828($tmp2826);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
frost$core$Int $tmp2831 = (frost$core$Int) {1u};
int64_t $tmp2832 = $tmp2830.value;
int64_t $tmp2833 = $tmp2831.value;
int64_t $tmp2834 = $tmp2832 + $tmp2833;
frost$core$Int $tmp2835 = (frost$core$Int) {$tmp2834};
frost$core$Bit $tmp2836 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp2837 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp2835, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp2836);
frost$core$String* $tmp2838 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp2820, $tmp2837);
org$frostlang$frostc$ClassDecl* $tmp2839 = *(&local22);
frost$core$Bit $tmp2840 = (frost$core$Bit) {$tmp2839 != NULL};
bool $tmp2841 = $tmp2840.value;
if ($tmp2841) goto block31; else goto block32;
block32:;
frost$core$Int $tmp2842 = (frost$core$Int) {636u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2843, $tmp2842, &$s2844);
abort(); // unreachable
block31:;
org$frostlang$frostc$Type** $tmp2845 = &$tmp2839->type;
org$frostlang$frostc$Type* $tmp2846 = *$tmp2845;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2812, $tmp2838, $tmp2846);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:636:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2847 = &((org$frostlang$frostc$Symbol*) $tmp2812)->name;
frost$core$String* $tmp2848 = *$tmp2847;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2811, ((org$frostlang$frostc$Symbol*) $tmp2812), $tmp2848);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:637
org$frostlang$frostc$ClassDecl* $tmp2849 = *(&local22);
frost$core$Bit $tmp2850 = (frost$core$Bit) {$tmp2849 != NULL};
bool $tmp2851 = $tmp2850.value;
if ($tmp2851) goto block34; else goto block35;
block35:;
frost$core$Int $tmp2852 = (frost$core$Int) {637u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2853, $tmp2852, &$s2854);
abort(); // unreachable
block34:;
org$frostlang$frostc$SymbolTable** $tmp2855 = &$tmp2849->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2856 = *$tmp2855;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2857 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
// begin inline call to function org.frostlang.frostc.ClassDecl.simpleName():frost.core.String from Scanner.frost:637:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp2858 = &param1->name;
frost$core$String* $tmp2859 = *$tmp2858;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp2860 = frost$core$String$get_end$R$frost$core$String$Index($tmp2859);
frost$core$String$Index$nullable $tmp2861 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp2859, &$s2862, $tmp2860);
*(&local24) = $tmp2861;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp2863 = *(&local24);
frost$core$Bit $tmp2864 = (frost$core$Bit) {!$tmp2863.nonnull};
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp2866 = &param1->name;
frost$core$String* $tmp2867 = *$tmp2866;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local23) = $tmp2867;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
goto block36;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp2868 = &param1->name;
frost$core$String* $tmp2869 = *$tmp2868;
frost$core$String** $tmp2870 = &param1->name;
frost$core$String* $tmp2871 = *$tmp2870;
frost$core$String$Index$nullable $tmp2872 = *(&local24);
frost$core$Bit $tmp2873 = (frost$core$Bit) {$tmp2872.nonnull};
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block40; else goto block41;
block41:;
frost$core$Int $tmp2875 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2876, $tmp2875, &$s2877);
abort(); // unreachable
block40:;
frost$core$String$Index $tmp2878 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2871, ((frost$core$String$Index) $tmp2872.value));
frost$core$Bit $tmp2879 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2880 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2878, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2879);
frost$core$String* $tmp2881 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2869, $tmp2880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
*(&local23) = $tmp2881;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
goto block36;
block36:;
frost$core$String* $tmp2882 = *(&local23);
org$frostlang$frostc$Type** $tmp2883 = &param1->type;
org$frostlang$frostc$Type* $tmp2884 = *$tmp2883;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2857, $tmp2882, $tmp2884);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:637:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2885 = &((org$frostlang$frostc$Symbol*) $tmp2857)->name;
frost$core$String* $tmp2886 = *$tmp2885;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2856, ((org$frostlang$frostc$Symbol*) $tmp2857), $tmp2886);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$String* $tmp2887 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
goto block19;
block19:;
org$frostlang$frostc$ClassDecl* $tmp2888 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2889 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2890 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2891 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2892 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2893 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2894 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block16:;
frost$core$Int $tmp2895 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:640:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2896 = $tmp2633.value;
int64_t $tmp2897 = $tmp2895.value;
bool $tmp2898 = $tmp2896 == $tmp2897;
frost$core$Bit $tmp2899 = (frost$core$Bit) {$tmp2898};
bool $tmp2900 = $tmp2899.value;
if ($tmp2900) goto block43; else goto block44;
block43:;
org$frostlang$frostc$Position* $tmp2901 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2902 = *$tmp2901;
*(&local25) = $tmp2902;
org$frostlang$frostc$ASTNode** $tmp2903 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2904 = *$tmp2903;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
org$frostlang$frostc$ASTNode* $tmp2905 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
*(&local26) = $tmp2904;
frost$core$String** $tmp2906 = (frost$core$String**) (param2->$data + 32);
frost$core$String* $tmp2907 = *$tmp2906;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
frost$core$String* $tmp2908 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local27) = $tmp2907;
org$frostlang$frostc$FixedArray** $tmp2909 = (org$frostlang$frostc$FixedArray**) (param2->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2910 = *$tmp2909;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
org$frostlang$frostc$FixedArray* $tmp2911 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local28) = $tmp2910;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:641
org$frostlang$frostc$Position $tmp2912 = *(&local25);
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local26);
frost$core$String* $tmp2914 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp2915 = *(&local28);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2912, $tmp2913, $tmp2914, $tmp2915);
org$frostlang$frostc$FixedArray* $tmp2916 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2917 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2918 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:644
frost$core$Int $tmp2919 = (frost$core$Int) {644u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:644:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2921 $tmp2920 = ($fn2921) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp2922 = $tmp2920(((frost$core$Object*) param2));
frost$core$String* $tmp2923 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2924, $tmp2922);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$String* $tmp2925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2923, &$s2926);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2927, $tmp2919, $tmp2925);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:651
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:653
frost$core$Bit $tmp2928 = (frost$core$Bit) {param3 == NULL};
bool $tmp2929 = $tmp2928.value;
if ($tmp2929) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2930 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:657
frost$core$Bit $tmp2931 = (frost$core$Bit) {param3 != NULL};
bool $tmp2932 = $tmp2931.value;
if ($tmp2932) goto block4; else goto block5;
block5:;
frost$core$Int $tmp2933 = (frost$core$Int) {657u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2934, $tmp2933, &$s2935);
abort(); // unreachable
block4:;
frost$core$Int* $tmp2936 = &param3->$rawValue;
frost$core$Int $tmp2937 = *$tmp2936;
frost$core$Int $tmp2938 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:658:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2939 = $tmp2937.value;
int64_t $tmp2940 = $tmp2938.value;
bool $tmp2941 = $tmp2939 == $tmp2940;
frost$core$Bit $tmp2942 = (frost$core$Bit) {$tmp2941};
bool $tmp2943 = $tmp2942.value;
if ($tmp2943) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2944 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2945 = *$tmp2944;
*(&local1) = $tmp2945;
frost$core$String** $tmp2946 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2947 = *$tmp2946;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
frost$core$String* $tmp2948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local2) = $tmp2947;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:659
frost$core$String* $tmp2949 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
frost$core$String* $tmp2950 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local0) = $tmp2949;
frost$core$String* $tmp2951 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:662
frost$core$Int $tmp2952 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2953, $tmp2952);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:666
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2954 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2954);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
frost$collections$Array* $tmp2955 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local3) = $tmp2954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:667
frost$core$Bit $tmp2956 = (frost$core$Bit) {param5 != NULL};
bool $tmp2957 = $tmp2956.value;
if ($tmp2957) goto block10; else goto block11;
block11:;
frost$core$Int $tmp2958 = (frost$core$Int) {667u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2959, $tmp2958, &$s2960);
abort(); // unreachable
block10:;
ITable* $tmp2961 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2961->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2961 = $tmp2961->next;
}
$fn2963 $tmp2962 = $tmp2961->methods[0];
frost$collections$Iterator* $tmp2964 = $tmp2962(((frost$collections$Iterable*) param5));
goto block12;
block12:;
ITable* $tmp2965 = $tmp2964->$class->itable;
while ($tmp2965->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2965 = $tmp2965->next;
}
$fn2967 $tmp2966 = $tmp2965->methods[0];
frost$core$Bit $tmp2968 = $tmp2966($tmp2964);
bool $tmp2969 = $tmp2968.value;
if ($tmp2969) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2970 = $tmp2964->$class->itable;
while ($tmp2970->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2970 = $tmp2970->next;
}
$fn2972 $tmp2971 = $tmp2970->methods[1];
frost$core$Object* $tmp2973 = $tmp2971($tmp2964);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2973)));
org$frostlang$frostc$ASTNode* $tmp2974 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2973);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:668
frost$collections$Array* $tmp2975 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2976 = *(&local4);
org$frostlang$frostc$Type* $tmp2977 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2976);
frost$collections$Array$add$frost$collections$Array$T($tmp2975, ((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
frost$core$Frost$unref$frost$core$Object$Q($tmp2973);
org$frostlang$frostc$ASTNode* $tmp2978 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2978));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:670
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ChoiceCase));
org$frostlang$frostc$ChoiceCase* $tmp2979 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2980 = *(&local0);
frost$collections$Array** $tmp2981 = &param1->choiceCases;
frost$collections$Array* $tmp2982 = *$tmp2981;
ITable* $tmp2983 = ((frost$collections$CollectionView*) $tmp2982)->$class->itable;
while ($tmp2983->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2983 = $tmp2983->next;
}
$fn2985 $tmp2984 = $tmp2983->methods[0];
frost$core$Int $tmp2986 = $tmp2984(((frost$collections$CollectionView*) $tmp2982));
frost$collections$Array* $tmp2987 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2979, param1, param2, param4, $tmp2980, $tmp2986, ((frost$collections$ListView*) $tmp2987));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
org$frostlang$frostc$ChoiceCase* $tmp2988 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local5) = $tmp2979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:672
frost$collections$Array** $tmp2989 = &param1->choiceCases;
frost$collections$Array* $tmp2990 = *$tmp2989;
org$frostlang$frostc$ChoiceCase* $tmp2991 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2990, ((frost$core$Object*) $tmp2991));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:673
org$frostlang$frostc$SymbolTable** $tmp2992 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2993 = *$tmp2992;
org$frostlang$frostc$ChoiceCase* $tmp2994 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:673:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2995 = &((org$frostlang$frostc$Symbol*) $tmp2994)->name;
frost$core$String* $tmp2996 = *$tmp2995;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2993, ((org$frostlang$frostc$Symbol*) $tmp2994), $tmp2996);
org$frostlang$frostc$ChoiceCase* $tmp2997 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2998 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2999 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:680
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:681
ITable* $tmp3001 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp3001->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3001 = $tmp3001->next;
}
$fn3003 $tmp3002 = $tmp3001->methods[1];
frost$core$Bit $tmp3004 = $tmp3002(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s3000));
bool $tmp3005 = $tmp3004.value;
if ($tmp3005) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:682
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:682:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp3006 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s3007);
frost$core$String* $tmp3008 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3006, param8);
frost$core$String* $tmp3009 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3008, &$s3010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$String* $tmp3011 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local0) = $tmp3009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp3012 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
*(&local0) = param8;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:687
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:689
frost$core$Bit $tmp3013 = (frost$core$Bit) {param5 == NULL};
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp3015 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:693
frost$core$Bit $tmp3016 = (frost$core$Bit) {param5 != NULL};
bool $tmp3017 = $tmp3016.value;
if ($tmp3017) goto block8; else goto block9;
block9:;
frost$core$Int $tmp3018 = (frost$core$Int) {693u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3019, $tmp3018, &$s3020);
abort(); // unreachable
block8:;
frost$core$Int* $tmp3021 = &param5->$rawValue;
frost$core$Int $tmp3022 = *$tmp3021;
frost$core$Int $tmp3023 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:694:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3024 = $tmp3022.value;
int64_t $tmp3025 = $tmp3023.value;
bool $tmp3026 = $tmp3024 == $tmp3025;
frost$core$Bit $tmp3027 = (frost$core$Bit) {$tmp3026};
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3029 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp3030 = *$tmp3029;
*(&local2) = $tmp3030;
frost$core$String** $tmp3031 = (frost$core$String**) (param5->$data + 24);
frost$core$String* $tmp3032 = *$tmp3031;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
frost$core$String* $tmp3033 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
*(&local3) = $tmp3032;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:695
frost$core$String* $tmp3034 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3034));
frost$core$String* $tmp3035 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local1) = $tmp3034;
frost$core$String* $tmp3036 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:698
frost$core$Int $tmp3037 = (frost$core$Int) {698u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3038, $tmp3037);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:702
org$frostlang$frostc$Annotations* $tmp3039 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
org$frostlang$frostc$Annotations* $tmp3040 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
*(&local4) = $tmp3039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:703
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3041 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3041);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
frost$collections$Array* $tmp3042 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
*(&local5) = $tmp3041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:704
frost$core$Bit $tmp3043 = (frost$core$Bit) {param9 != NULL};
bool $tmp3044 = $tmp3043.value;
if ($tmp3044) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:705
frost$core$Bit $tmp3045 = (frost$core$Bit) {param9 != NULL};
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block16; else goto block17;
block17:;
frost$core$Int $tmp3047 = (frost$core$Int) {705u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3048, $tmp3047, &$s3049);
abort(); // unreachable
block16:;
ITable* $tmp3050 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp3050->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3050 = $tmp3050->next;
}
$fn3052 $tmp3051 = $tmp3050->methods[0];
frost$collections$Iterator* $tmp3053 = $tmp3051(((frost$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp3054 = $tmp3053->$class->itable;
while ($tmp3054->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3054 = $tmp3054->next;
}
$fn3056 $tmp3055 = $tmp3054->methods[0];
frost$core$Bit $tmp3057 = $tmp3055($tmp3053);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block20; else goto block19;
block19:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3059 = $tmp3053->$class->itable;
while ($tmp3059->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3059 = $tmp3059->next;
}
$fn3061 $tmp3060 = $tmp3059->methods[1];
frost$core$Object* $tmp3062 = $tmp3060($tmp3053);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3062)));
org$frostlang$frostc$ASTNode* $tmp3063 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp3062);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:706
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:707
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:708
org$frostlang$frostc$ASTNode* $tmp3064 = *(&local6);
frost$core$Int* $tmp3065 = &$tmp3064->$rawValue;
frost$core$Int $tmp3066 = *$tmp3065;
frost$core$Int $tmp3067 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:709:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3068 = $tmp3066.value;
int64_t $tmp3069 = $tmp3067.value;
bool $tmp3070 = $tmp3068 == $tmp3069;
frost$core$Bit $tmp3071 = (frost$core$Bit) {$tmp3070};
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp3073 = (org$frostlang$frostc$Position*) ($tmp3064->$data + 0);
org$frostlang$frostc$Position $tmp3074 = *$tmp3073;
frost$core$String** $tmp3075 = (frost$core$String**) ($tmp3064->$data + 24);
frost$core$String* $tmp3076 = *$tmp3075;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
frost$core$String* $tmp3077 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3077));
*(&local9) = $tmp3076;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:710
frost$core$String* $tmp3078 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
frost$core$String* $tmp3079 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
*(&local7) = $tmp3078;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:711
frost$core$Weak** $tmp3080 = &param0->compiler;
frost$core$Weak* $tmp3081 = *$tmp3080;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:711:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3082 = &$tmp3081->_valid;
frost$core$Bit $tmp3083 = *$tmp3082;
bool $tmp3084 = $tmp3083.value;
if ($tmp3084) goto block27; else goto block28;
block28:;
frost$core$Int $tmp3085 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3086, $tmp3085);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3087 = &$tmp3081->value;
frost$core$Object* $tmp3088 = *$tmp3087;
frost$core$Frost$ref$frost$core$Object$Q($tmp3088);
org$frostlang$frostc$Type** $tmp3089 = &((org$frostlang$frostc$Compiler*) $tmp3088)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp3090 = *$tmp3089;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
org$frostlang$frostc$Type* $tmp3091 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local8) = $tmp3090;
frost$core$Frost$unref$frost$core$Object$Q($tmp3088);
frost$core$String* $tmp3092 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local9) = ((frost$core$String*) NULL);
goto block21;
block23:;
frost$core$Int $tmp3093 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:713:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3094 = $tmp3066.value;
int64_t $tmp3095 = $tmp3093.value;
bool $tmp3096 = $tmp3094 == $tmp3095;
frost$core$Bit $tmp3097 = (frost$core$Bit) {$tmp3096};
bool $tmp3098 = $tmp3097.value;
if ($tmp3098) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp3099 = (org$frostlang$frostc$Position*) ($tmp3064->$data + 0);
org$frostlang$frostc$Position $tmp3100 = *$tmp3099;
frost$core$String** $tmp3101 = (frost$core$String**) ($tmp3064->$data + 24);
frost$core$String* $tmp3102 = *$tmp3101;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
frost$core$String* $tmp3103 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local10) = $tmp3102;
org$frostlang$frostc$ASTNode** $tmp3104 = (org$frostlang$frostc$ASTNode**) ($tmp3064->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3105 = *$tmp3104;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
org$frostlang$frostc$ASTNode* $tmp3106 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
*(&local11) = $tmp3105;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:714
frost$core$String* $tmp3107 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$String* $tmp3108 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
*(&local7) = $tmp3107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:715
org$frostlang$frostc$ASTNode* $tmp3109 = *(&local11);
frost$core$Bit $tmp3110 = (frost$core$Bit) {$tmp3109 != NULL};
bool $tmp3111 = $tmp3110.value;
if ($tmp3111) goto block32; else goto block33;
block33:;
frost$core$Int $tmp3112 = (frost$core$Int) {715u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3113, $tmp3112, &$s3114);
abort(); // unreachable
block32:;
org$frostlang$frostc$Type* $tmp3115 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3109);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
org$frostlang$frostc$Type* $tmp3116 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local8) = $tmp3115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
org$frostlang$frostc$ASTNode* $tmp3117 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3118 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3118));
*(&local10) = ((frost$core$String*) NULL);
goto block21;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:718
frost$core$Int $tmp3119 = (frost$core$Int) {718u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3120, $tmp3119);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:721
frost$collections$Array* $tmp3121 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$ClassDecl$GenericParameter));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp3122 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp3123 = *(&local6);
$fn3125 $tmp3124 = ($fn3125) $tmp3123->$class->vtable[2];
org$frostlang$frostc$Position $tmp3126 = $tmp3124($tmp3123);
frost$core$String* $tmp3127 = *(&local0);
frost$core$String* $tmp3128 = *(&local7);
org$frostlang$frostc$Type* $tmp3129 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp3122, $tmp3126, $tmp3127, $tmp3128, $tmp3129);
frost$collections$Array$add$frost$collections$Array$T($tmp3121, ((frost$core$Object*) $tmp3122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
org$frostlang$frostc$Type* $tmp3130 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp3131 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3062);
org$frostlang$frostc$ASTNode* $tmp3132 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:724
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3133 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3133);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
frost$collections$Array* $tmp3134 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
*(&local12) = $tmp3133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:725
frost$core$Bit $tmp3135 = (frost$core$Bit) {param10 != NULL};
bool $tmp3136 = $tmp3135.value;
if ($tmp3136) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:726
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3137;
$tmp3137 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3137->value = param7;
frost$core$Int $tmp3138 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:726:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3139 = &(&local14)->$rawValue;
*$tmp3139 = $tmp3138;
org$frostlang$frostc$ClassDecl$Kind $tmp3140 = *(&local14);
*(&local13) = $tmp3140;
org$frostlang$frostc$ClassDecl$Kind $tmp3141 = *(&local13);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3142;
$tmp3142 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3142->value = $tmp3141;
ITable* $tmp3143 = ((frost$core$Equatable*) $tmp3137)->$class->itable;
while ($tmp3143->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3143 = $tmp3143->next;
}
$fn3145 $tmp3144 = $tmp3143->methods[0];
frost$core$Bit $tmp3146 = $tmp3144(((frost$core$Equatable*) $tmp3137), ((frost$core$Equatable*) $tmp3142));
bool $tmp3147 = $tmp3146.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3142)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3137)));
if ($tmp3147) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:727
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:727:22
frost$io$File** $tmp3148 = &param0->source;
frost$io$File* $tmp3149 = *$tmp3148;
frost$core$Bit $tmp3150 = (frost$core$Bit) {$tmp3149 != NULL};
bool $tmp3151 = $tmp3150.value;
if ($tmp3151) goto block40; else goto block41;
block41:;
frost$core$Int $tmp3152 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3153, $tmp3152, &$s3154);
abort(); // unreachable
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3155 = &param0->compiler;
frost$core$Weak* $tmp3156 = *$tmp3155;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3157 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3156);
bool $tmp3158 = $tmp3157.value;
if ($tmp3158) goto block43; else goto block44;
block44:;
frost$core$Int $tmp3159 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3160, $tmp3159);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3161 = &$tmp3156->value;
frost$core$Object* $tmp3162 = *$tmp3161;
frost$core$Frost$ref$frost$core$Object$Q($tmp3162);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3162), param4, &$s3163);
frost$core$Frost$unref$frost$core$Object$Q($tmp3162);
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:729
frost$core$Bit $tmp3164 = (frost$core$Bit) {param10 != NULL};
bool $tmp3165 = $tmp3164.value;
if ($tmp3165) goto block45; else goto block46;
block46:;
frost$core$Int $tmp3166 = (frost$core$Int) {729u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3167, $tmp3166, &$s3168);
abort(); // unreachable
block45:;
ITable* $tmp3169 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp3169->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3169 = $tmp3169->next;
}
$fn3171 $tmp3170 = $tmp3169->methods[0];
frost$collections$Iterator* $tmp3172 = $tmp3170(((frost$collections$Iterable*) param10));
goto block47;
block47:;
ITable* $tmp3173 = $tmp3172->$class->itable;
while ($tmp3173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3173 = $tmp3173->next;
}
$fn3175 $tmp3174 = $tmp3173->methods[0];
frost$core$Bit $tmp3176 = $tmp3174($tmp3172);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block49; else goto block48;
block48:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3178 = $tmp3172->$class->itable;
while ($tmp3178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3178 = $tmp3178->next;
}
$fn3180 $tmp3179 = $tmp3178->methods[1];
frost$core$Object* $tmp3181 = $tmp3179($tmp3172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3181)));
org$frostlang$frostc$ASTNode* $tmp3182 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp3181);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:730
frost$collections$Array* $tmp3183 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp3184 = *(&local15);
org$frostlang$frostc$Type* $tmp3185 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3184);
frost$collections$Array$add$frost$collections$Array$T($tmp3183, ((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q($tmp3181);
org$frostlang$frostc$ASTNode* $tmp3186 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
goto block35;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:733
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp3187 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp3188 = *(&local1);
org$frostlang$frostc$Annotations* $tmp3189 = *(&local4);
frost$core$String* $tmp3190 = *(&local0);
frost$collections$Array* $tmp3191 = *(&local12);
frost$collections$Array* $tmp3192 = *(&local5);
frost$core$Weak** $tmp3193 = &param0->compiler;
frost$core$Weak* $tmp3194 = *$tmp3193;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:734:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3195 = &$tmp3194->_valid;
frost$core$Bit $tmp3196 = *$tmp3195;
bool $tmp3197 = $tmp3196.value;
if ($tmp3197) goto block52; else goto block53;
block53:;
frost$core$Int $tmp3198 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3199, $tmp3198);
abort(); // unreachable
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3200 = &$tmp3194->value;
frost$core$Object* $tmp3201 = *$tmp3200;
frost$core$Frost$ref$frost$core$Object$Q($tmp3201);
org$frostlang$frostc$SymbolTable** $tmp3202 = &((org$frostlang$frostc$Compiler*) $tmp3201)->root;
org$frostlang$frostc$SymbolTable* $tmp3203 = *$tmp3202;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp3187, param1, param4, param2, $tmp3188, $tmp3189, param7, $tmp3190, ((frost$collections$ListView*) $tmp3191), $tmp3192, $tmp3203);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
org$frostlang$frostc$ClassDecl* $tmp3204 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local16) = $tmp3187;
frost$core$Frost$unref$frost$core$Object$Q($tmp3201);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:735
frost$core$Weak** $tmp3205 = &param0->compiler;
frost$core$Weak* $tmp3206 = *$tmp3205;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:735:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3207 = &$tmp3206->_valid;
frost$core$Bit $tmp3208 = *$tmp3207;
bool $tmp3209 = $tmp3208.value;
if ($tmp3209) goto block56; else goto block57;
block57:;
frost$core$Int $tmp3210 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3211, $tmp3210);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3212 = &$tmp3206->value;
frost$core$Object* $tmp3213 = *$tmp3212;
frost$core$Frost$ref$frost$core$Object$Q($tmp3213);
frost$collections$Stack** $tmp3214 = &((org$frostlang$frostc$Compiler*) $tmp3213)->currentClass;
frost$collections$Stack* $tmp3215 = *$tmp3214;
org$frostlang$frostc$ClassDecl* $tmp3216 = *(&local16);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:735:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp3217 = &$tmp3215->contents;
frost$collections$Array* $tmp3218 = *$tmp3217;
frost$collections$Array$add$frost$collections$Array$T($tmp3218, ((frost$core$Object*) $tmp3216));
frost$core$Frost$unref$frost$core$Object$Q($tmp3213);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:736
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3219;
$tmp3219 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3219->value = param7;
frost$core$Int $tmp3220 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:736:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3221 = &(&local18)->$rawValue;
*$tmp3221 = $tmp3220;
org$frostlang$frostc$ClassDecl$Kind $tmp3222 = *(&local18);
*(&local17) = $tmp3222;
org$frostlang$frostc$ClassDecl$Kind $tmp3223 = *(&local17);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3224;
$tmp3224 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3224->value = $tmp3223;
ITable* $tmp3225 = ((frost$core$Equatable*) $tmp3219)->$class->itable;
while ($tmp3225->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3225 = $tmp3225->next;
}
$fn3227 $tmp3226 = $tmp3225->methods[0];
frost$core$Bit $tmp3228 = $tmp3226(((frost$core$Equatable*) $tmp3219), ((frost$core$Equatable*) $tmp3224));
bool $tmp3229 = $tmp3228.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3224)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3219)));
if ($tmp3229) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:737
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3230 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3231 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3232 = *(&local16);
org$frostlang$frostc$Position* $tmp3233 = &$tmp3232->position;
org$frostlang$frostc$Position $tmp3234 = *$tmp3233;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3235 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3236 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3235, $tmp3236);
frost$core$Int $tmp3237 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:738:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp3238 = &(&local20)->$rawValue;
*$tmp3238 = $tmp3237;
org$frostlang$frostc$FieldDecl$Kind $tmp3239 = *(&local20);
*(&local19) = $tmp3239;
org$frostlang$frostc$FieldDecl$Kind $tmp3240 = *(&local19);
frost$core$Weak** $tmp3241 = &param0->compiler;
frost$core$Weak* $tmp3242 = *$tmp3241;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:739:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3243 = &$tmp3242->_valid;
frost$core$Bit $tmp3244 = *$tmp3243;
bool $tmp3245 = $tmp3244.value;
if ($tmp3245) goto block65; else goto block66;
block66:;
frost$core$Int $tmp3246 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3247, $tmp3246);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3248 = &$tmp3242->value;
frost$core$Object* $tmp3249 = *$tmp3248;
frost$core$Frost$ref$frost$core$Object$Q($tmp3249);
org$frostlang$frostc$Type** $tmp3250 = &((org$frostlang$frostc$Compiler*) $tmp3249)->INT_TYPE;
org$frostlang$frostc$Type* $tmp3251 = *$tmp3250;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3230, $tmp3231, $tmp3234, ((frost$core$String*) NULL), $tmp3235, $tmp3240, &$s3252, $tmp3251, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
org$frostlang$frostc$FieldDecl* $tmp3253 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local21) = $tmp3230;
frost$core$Frost$unref$frost$core$Object$Q($tmp3249);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:740
org$frostlang$frostc$ClassDecl* $tmp3254 = *(&local16);
frost$collections$Array** $tmp3255 = &$tmp3254->fields;
frost$collections$Array* $tmp3256 = *$tmp3255;
org$frostlang$frostc$FieldDecl* $tmp3257 = *(&local21);
frost$collections$Array$add$frost$collections$Array$T($tmp3256, ((frost$core$Object*) $tmp3257));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:741
org$frostlang$frostc$ClassDecl* $tmp3258 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3259 = &$tmp3258->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3260 = *$tmp3259;
org$frostlang$frostc$FieldDecl* $tmp3261 = *(&local21);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:741:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3262 = &((org$frostlang$frostc$Symbol*) $tmp3261)->name;
frost$core$String* $tmp3263 = *$tmp3262;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3260, ((org$frostlang$frostc$Symbol*) $tmp3261), $tmp3263);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:742
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3264 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3265 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3266 = *(&local16);
org$frostlang$frostc$Position* $tmp3267 = &$tmp3266->position;
org$frostlang$frostc$Position $tmp3268 = *$tmp3267;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3269 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3270 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3269, $tmp3270);
frost$core$Int $tmp3271 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:743:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp3272 = &(&local23)->$rawValue;
*$tmp3272 = $tmp3271;
org$frostlang$frostc$FieldDecl$Kind $tmp3273 = *(&local23);
*(&local22) = $tmp3273;
org$frostlang$frostc$FieldDecl$Kind $tmp3274 = *(&local22);
frost$core$Weak** $tmp3275 = &param0->compiler;
frost$core$Weak* $tmp3276 = *$tmp3275;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:744:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3277 = &$tmp3276->_valid;
frost$core$Bit $tmp3278 = *$tmp3277;
bool $tmp3279 = $tmp3278.value;
if ($tmp3279) goto block71; else goto block72;
block72:;
frost$core$Int $tmp3280 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3281, $tmp3280);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3282 = &$tmp3276->value;
frost$core$Object* $tmp3283 = *$tmp3282;
frost$core$Frost$ref$frost$core$Object$Q($tmp3283);
org$frostlang$frostc$Type** $tmp3284 = &((org$frostlang$frostc$Compiler*) $tmp3283)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp3285 = *$tmp3284;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3264, $tmp3265, $tmp3268, ((frost$core$String*) NULL), $tmp3269, $tmp3274, &$s3286, $tmp3285, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
org$frostlang$frostc$FieldDecl* $tmp3287 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3287));
*(&local24) = $tmp3264;
frost$core$Frost$unref$frost$core$Object$Q($tmp3283);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:745
org$frostlang$frostc$ClassDecl* $tmp3288 = *(&local16);
frost$collections$Array** $tmp3289 = &$tmp3288->fields;
frost$collections$Array* $tmp3290 = *$tmp3289;
org$frostlang$frostc$FieldDecl* $tmp3291 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp3290, ((frost$core$Object*) $tmp3291));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:746
org$frostlang$frostc$ClassDecl* $tmp3292 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3293 = &$tmp3292->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3294 = *$tmp3293;
org$frostlang$frostc$FieldDecl* $tmp3295 = *(&local24);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:746:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3296 = &((org$frostlang$frostc$Symbol*) $tmp3295)->name;
frost$core$String* $tmp3297 = *$tmp3296;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3294, ((org$frostlang$frostc$Symbol*) $tmp3295), $tmp3297);
org$frostlang$frostc$FieldDecl* $tmp3298 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp3299 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block60;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:748
ITable* $tmp3300 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp3300->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3300 = $tmp3300->next;
}
$fn3302 $tmp3301 = $tmp3300->methods[0];
frost$collections$Iterator* $tmp3303 = $tmp3301(((frost$collections$Iterable*) param11));
goto block74;
block74:;
ITable* $tmp3304 = $tmp3303->$class->itable;
while ($tmp3304->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3304 = $tmp3304->next;
}
$fn3306 $tmp3305 = $tmp3304->methods[0];
frost$core$Bit $tmp3307 = $tmp3305($tmp3303);
bool $tmp3308 = $tmp3307.value;
if ($tmp3308) goto block76; else goto block75;
block75:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3309 = $tmp3303->$class->itable;
while ($tmp3309->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3309 = $tmp3309->next;
}
$fn3311 $tmp3310 = $tmp3309->methods[1];
frost$core$Object* $tmp3312 = $tmp3310($tmp3303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3312)));
org$frostlang$frostc$ASTNode* $tmp3313 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp3312);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:749
org$frostlang$frostc$ASTNode* $tmp3314 = *(&local25);
frost$core$Int* $tmp3315 = &$tmp3314->$rawValue;
frost$core$Int $tmp3316 = *$tmp3315;
frost$core$Int $tmp3317 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:750:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3318 = $tmp3316.value;
int64_t $tmp3319 = $tmp3317.value;
bool $tmp3320 = $tmp3318 == $tmp3319;
frost$core$Bit $tmp3321 = (frost$core$Bit) {$tmp3320};
bool $tmp3322 = $tmp3321.value;
if ($tmp3322) goto block78; else goto block79;
block78:;
org$frostlang$frostc$Position* $tmp3323 = (org$frostlang$frostc$Position*) ($tmp3314->$data + 0);
org$frostlang$frostc$Position $tmp3324 = *$tmp3323;
*(&local26) = $tmp3324;
org$frostlang$frostc$ASTNode** $tmp3325 = (org$frostlang$frostc$ASTNode**) ($tmp3314->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3326 = *$tmp3325;
org$frostlang$frostc$FixedArray** $tmp3327 = (org$frostlang$frostc$FixedArray**) ($tmp3314->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3328 = *$tmp3327;
org$frostlang$frostc$MethodDecl$Kind* $tmp3329 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3314->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3330 = *$tmp3329;
*(&local27) = $tmp3330;
frost$core$String** $tmp3331 = (frost$core$String**) ($tmp3314->$data + 48);
frost$core$String* $tmp3332 = *$tmp3331;
org$frostlang$frostc$FixedArray** $tmp3333 = (org$frostlang$frostc$FixedArray**) ($tmp3314->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3334 = *$tmp3333;
org$frostlang$frostc$FixedArray** $tmp3335 = (org$frostlang$frostc$FixedArray**) ($tmp3314->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3336 = *$tmp3335;
org$frostlang$frostc$ASTNode** $tmp3337 = (org$frostlang$frostc$ASTNode**) ($tmp3314->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3338 = *$tmp3337;
org$frostlang$frostc$FixedArray** $tmp3339 = (org$frostlang$frostc$FixedArray**) ($tmp3314->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3340 = *$tmp3339;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:751
org$frostlang$frostc$MethodDecl$Kind $tmp3341 = *(&local27);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3342;
$tmp3342 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3342->value = $tmp3341;
frost$core$Int $tmp3343 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:751:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3344 = &(&local29)->$rawValue;
*$tmp3344 = $tmp3343;
org$frostlang$frostc$MethodDecl$Kind $tmp3345 = *(&local29);
*(&local28) = $tmp3345;
org$frostlang$frostc$MethodDecl$Kind $tmp3346 = *(&local28);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3347;
$tmp3347 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
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
if ($tmp3352) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:752
frost$core$Int $tmp3353 = param7.$rawValue;
frost$core$Int $tmp3354 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:753:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3355 = $tmp3353.value;
int64_t $tmp3356 = $tmp3354.value;
bool $tmp3357 = $tmp3355 == $tmp3356;
frost$core$Bit $tmp3358 = (frost$core$Bit) {$tmp3357};
bool $tmp3359 = $tmp3358.value;
if ($tmp3359) goto block85; else goto block86;
block85:;
goto block84;
block86:;
frost$core$Int $tmp3360 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:756:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3361 = $tmp3353.value;
int64_t $tmp3362 = $tmp3360.value;
bool $tmp3363 = $tmp3361 == $tmp3362;
frost$core$Bit $tmp3364 = (frost$core$Bit) {$tmp3363};
bool $tmp3365 = $tmp3364.value;
if ($tmp3365) goto block88; else goto block89;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:757
org$frostlang$frostc$Position $tmp3366 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:757:38
frost$io$File** $tmp3367 = &param0->source;
frost$io$File* $tmp3368 = *$tmp3367;
frost$core$Bit $tmp3369 = (frost$core$Bit) {$tmp3368 != NULL};
bool $tmp3370 = $tmp3369.value;
if ($tmp3370) goto block92; else goto block93;
block93:;
frost$core$Int $tmp3371 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3372, $tmp3371, &$s3373);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3374 = &param0->compiler;
frost$core$Weak* $tmp3375 = *$tmp3374;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3376 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3375);
bool $tmp3377 = $tmp3376.value;
if ($tmp3377) goto block95; else goto block96;
block96:;
frost$core$Int $tmp3378 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3379, $tmp3378);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3380 = &$tmp3375->value;
frost$core$Object* $tmp3381 = *$tmp3380;
frost$core$Frost$ref$frost$core$Object$Q($tmp3381);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3381), $tmp3366, &$s3382);
frost$core$Frost$unref$frost$core$Object$Q($tmp3381);
goto block84;
block89:;
frost$core$Int $tmp3383 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:759:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3384 = $tmp3353.value;
int64_t $tmp3385 = $tmp3383.value;
bool $tmp3386 = $tmp3384 == $tmp3385;
frost$core$Bit $tmp3387 = (frost$core$Bit) {$tmp3386};
bool $tmp3388 = $tmp3387.value;
if ($tmp3388) goto block97; else goto block84;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:760
org$frostlang$frostc$Position $tmp3389 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:760:38
frost$io$File** $tmp3390 = &param0->source;
frost$io$File* $tmp3391 = *$tmp3390;
frost$core$Bit $tmp3392 = (frost$core$Bit) {$tmp3391 != NULL};
bool $tmp3393 = $tmp3392.value;
if ($tmp3393) goto block100; else goto block101;
block101:;
frost$core$Int $tmp3394 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3395, $tmp3394, &$s3396);
abort(); // unreachable
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3397 = &param0->compiler;
frost$core$Weak* $tmp3398 = *$tmp3397;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3399 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3398);
bool $tmp3400 = $tmp3399.value;
if ($tmp3400) goto block103; else goto block104;
block104:;
frost$core$Int $tmp3401 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3402, $tmp3401);
abort(); // unreachable
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3403 = &$tmp3398->value;
frost$core$Object* $tmp3404 = *$tmp3403;
frost$core$Frost$ref$frost$core$Object$Q($tmp3404);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3404), $tmp3389, &$s3405);
frost$core$Frost$unref$frost$core$Object$Q($tmp3404);
goto block84;
block84:;
goto block82;
block82:;
goto block77;
block79:;
goto block77;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:769
org$frostlang$frostc$ClassDecl* $tmp3406 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp3407 = *(&local25);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp3406, $tmp3407);
frost$core$Frost$unref$frost$core$Object$Q($tmp3312);
org$frostlang$frostc$ASTNode* $tmp3408 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block74;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:771
frost$core$Bit $tmp3409 = (frost$core$Bit) {false};
*(&local30) = $tmp3409;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:772
frost$core$Bit $tmp3410 = (frost$core$Bit) {false};
*(&local31) = $tmp3410;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:773
org$frostlang$frostc$ClassDecl* $tmp3411 = *(&local16);
frost$collections$Array** $tmp3412 = &$tmp3411->methods;
frost$collections$Array* $tmp3413 = *$tmp3412;
ITable* $tmp3414 = ((frost$collections$Iterable*) $tmp3413)->$class->itable;
while ($tmp3414->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3414 = $tmp3414->next;
}
$fn3416 $tmp3415 = $tmp3414->methods[0];
frost$collections$Iterator* $tmp3417 = $tmp3415(((frost$collections$Iterable*) $tmp3413));
goto block105;
block105:;
ITable* $tmp3418 = $tmp3417->$class->itable;
while ($tmp3418->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3418 = $tmp3418->next;
}
$fn3420 $tmp3419 = $tmp3418->methods[0];
frost$core$Bit $tmp3421 = $tmp3419($tmp3417);
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block107; else goto block106;
block106:;
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp3423 = $tmp3417->$class->itable;
while ($tmp3423->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3423 = $tmp3423->next;
}
$fn3425 $tmp3424 = $tmp3423->methods[1];
frost$core$Object* $tmp3426 = $tmp3424($tmp3417);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp3426)));
org$frostlang$frostc$MethodDecl* $tmp3427 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3427));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) $tmp3426);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:774
org$frostlang$frostc$MethodDecl* $tmp3428 = *(&local32);
org$frostlang$frostc$MethodDecl$Kind* $tmp3429 = &$tmp3428->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3430 = *$tmp3429;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3431;
$tmp3431 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3431->value = $tmp3430;
frost$core$Int $tmp3432 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:774:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3433 = &(&local34)->$rawValue;
*$tmp3433 = $tmp3432;
org$frostlang$frostc$MethodDecl$Kind $tmp3434 = *(&local34);
*(&local33) = $tmp3434;
org$frostlang$frostc$MethodDecl$Kind $tmp3435 = *(&local33);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3436;
$tmp3436 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3436->value = $tmp3435;
ITable* $tmp3437 = ((frost$core$Equatable*) $tmp3431)->$class->itable;
while ($tmp3437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3437 = $tmp3437->next;
}
$fn3439 $tmp3438 = $tmp3437->methods[0];
frost$core$Bit $tmp3440 = $tmp3438(((frost$core$Equatable*) $tmp3431), ((frost$core$Equatable*) $tmp3436));
bool $tmp3441 = $tmp3440.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3436)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3431)));
if ($tmp3441) goto block108; else goto block109;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:775
frost$core$Bit $tmp3442 = (frost$core$Bit) {true};
*(&local30) = $tmp3442;
goto block109;
block109:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:777
org$frostlang$frostc$MethodDecl* $tmp3443 = *(&local32);
frost$core$String** $tmp3444 = &((org$frostlang$frostc$Symbol*) $tmp3443)->name;
frost$core$String* $tmp3445 = *$tmp3444;
frost$core$Bit $tmp3446 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3445, &$s3447);
bool $tmp3448 = $tmp3446.value;
if ($tmp3448) goto block113; else goto block112;
block113:;
org$frostlang$frostc$MethodDecl* $tmp3449 = *(&local32);
frost$collections$Array** $tmp3450 = &$tmp3449->parameters;
frost$collections$Array* $tmp3451 = *$tmp3450;
ITable* $tmp3452 = ((frost$collections$CollectionView*) $tmp3451)->$class->itable;
while ($tmp3452->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3452 = $tmp3452->next;
}
$fn3454 $tmp3453 = $tmp3452->methods[0];
frost$core$Int $tmp3455 = $tmp3453(((frost$collections$CollectionView*) $tmp3451));
frost$core$Int $tmp3456 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:777:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3457 = $tmp3455.value;
int64_t $tmp3458 = $tmp3456.value;
bool $tmp3459 = $tmp3457 == $tmp3458;
frost$core$Bit $tmp3460 = (frost$core$Bit) {$tmp3459};
bool $tmp3461 = $tmp3460.value;
if ($tmp3461) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:778
frost$core$Bit $tmp3462 = (frost$core$Bit) {true};
*(&local31) = $tmp3462;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:779
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3463;
$tmp3463 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3463->value = param7;
frost$core$Int $tmp3464 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:779:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3465 = &(&local36)->$rawValue;
*$tmp3465 = $tmp3464;
org$frostlang$frostc$ClassDecl$Kind $tmp3466 = *(&local36);
*(&local35) = $tmp3466;
org$frostlang$frostc$ClassDecl$Kind $tmp3467 = *(&local35);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3468;
$tmp3468 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3468->value = $tmp3467;
ITable* $tmp3469 = ((frost$core$Equatable*) $tmp3463)->$class->itable;
while ($tmp3469->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3469 = $tmp3469->next;
}
$fn3471 $tmp3470 = $tmp3469->methods[0];
frost$core$Bit $tmp3472 = $tmp3470(((frost$core$Equatable*) $tmp3463), ((frost$core$Equatable*) $tmp3468));
bool $tmp3473 = $tmp3472.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3468)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3463)));
if ($tmp3473) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:780
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:780:26
frost$io$File** $tmp3474 = &param0->source;
frost$io$File* $tmp3475 = *$tmp3474;
frost$core$Bit $tmp3476 = (frost$core$Bit) {$tmp3475 != NULL};
bool $tmp3477 = $tmp3476.value;
if ($tmp3477) goto block119; else goto block120;
block120:;
frost$core$Int $tmp3478 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3479, $tmp3478, &$s3480);
abort(); // unreachable
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3481 = &param0->compiler;
frost$core$Weak* $tmp3482 = *$tmp3481;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3483 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3482);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block122; else goto block123;
block123:;
frost$core$Int $tmp3485 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3486, $tmp3485);
abort(); // unreachable
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3487 = &$tmp3482->value;
frost$core$Object* $tmp3488 = *$tmp3487;
frost$core$Frost$ref$frost$core$Object$Q($tmp3488);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3488), param4, &$s3489);
frost$core$Frost$unref$frost$core$Object$Q($tmp3488);
goto block116;
block116:;
goto block112;
block112:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3426);
org$frostlang$frostc$MethodDecl* $tmp3490 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block105;
block107:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:784
frost$core$Bit $tmp3491 = *(&local30);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:784:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3492 = $tmp3491.value;
bool $tmp3493 = !$tmp3492;
frost$core$Bit $tmp3494 = (frost$core$Bit) {$tmp3493};
bool $tmp3495 = $tmp3494.value;
if ($tmp3495) goto block127; else goto block125;
block127:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3496;
$tmp3496 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3496->value = param7;
frost$core$Int $tmp3497 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:784:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3498 = &(&local38)->$rawValue;
*$tmp3498 = $tmp3497;
org$frostlang$frostc$ClassDecl$Kind $tmp3499 = *(&local38);
*(&local37) = $tmp3499;
org$frostlang$frostc$ClassDecl$Kind $tmp3500 = *(&local37);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3501;
$tmp3501 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3501->value = $tmp3500;
ITable* $tmp3502 = ((frost$core$Equatable*) $tmp3496)->$class->itable;
while ($tmp3502->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3502 = $tmp3502->next;
}
$fn3504 $tmp3503 = $tmp3502->methods[0];
frost$core$Bit $tmp3505 = $tmp3503(((frost$core$Equatable*) $tmp3496), ((frost$core$Equatable*) $tmp3501));
bool $tmp3506 = $tmp3505.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3501)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3496)));
if ($tmp3506) goto block126; else goto block125;
block126:;
org$frostlang$frostc$ClassDecl* $tmp3507 = *(&local16);
frost$core$String** $tmp3508 = &$tmp3507->name;
frost$core$String* $tmp3509 = *$tmp3508;
ITable* $tmp3511 = ((frost$core$Equatable*) $tmp3509)->$class->itable;
while ($tmp3511->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3511 = $tmp3511->next;
}
$fn3513 $tmp3512 = $tmp3511->methods[1];
frost$core$Bit $tmp3514 = $tmp3512(((frost$core$Equatable*) $tmp3509), ((frost$core$Equatable*) &$s3510));
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:785
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3516 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3517 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3518 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3519 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3518, $tmp3519);
frost$core$Int $tmp3520 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:786:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3521 = &(&local40)->$rawValue;
*$tmp3521 = $tmp3520;
org$frostlang$frostc$MethodDecl$Kind $tmp3522 = *(&local40);
*(&local39) = $tmp3522;
org$frostlang$frostc$MethodDecl$Kind $tmp3523 = *(&local39);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3524 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3525 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3524, $tmp3525);
frost$core$Weak** $tmp3526 = &param0->compiler;
frost$core$Weak* $tmp3527 = *$tmp3526;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:787:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3528 = &$tmp3527->_valid;
frost$core$Bit $tmp3529 = *$tmp3528;
bool $tmp3530 = $tmp3529.value;
if ($tmp3530) goto block133; else goto block134;
block134:;
frost$core$Int $tmp3531 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3532, $tmp3531);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3533 = &$tmp3527->value;
frost$core$Object* $tmp3534 = *$tmp3533;
frost$core$Frost$ref$frost$core$Object$Q($tmp3534);
org$frostlang$frostc$Type** $tmp3535 = &((org$frostlang$frostc$Compiler*) $tmp3534)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3536 = *$tmp3535;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3537 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3537);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3516, $tmp3517, param4, ((frost$core$String*) NULL), $tmp3518, $tmp3523, &$s3538, ((frost$collections$Array*) NULL), $tmp3524, $tmp3536, $tmp3537);
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
org$frostlang$frostc$MethodDecl* $tmp3539 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3539));
*(&local41) = $tmp3516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3537));
frost$core$Frost$unref$frost$core$Object$Q($tmp3534);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:788
org$frostlang$frostc$ClassDecl* $tmp3540 = *(&local16);
frost$collections$Array** $tmp3541 = &$tmp3540->methods;
frost$collections$Array* $tmp3542 = *$tmp3541;
org$frostlang$frostc$MethodDecl* $tmp3543 = *(&local41);
frost$collections$Array$add$frost$collections$Array$T($tmp3542, ((frost$core$Object*) $tmp3543));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:789
org$frostlang$frostc$ClassDecl* $tmp3544 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3545 = &$tmp3544->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3546 = *$tmp3545;
org$frostlang$frostc$MethodDecl* $tmp3547 = *(&local41);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:789:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3548 = &((org$frostlang$frostc$Symbol*) $tmp3547)->name;
frost$core$String* $tmp3549 = *$tmp3548;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3546, ((org$frostlang$frostc$Symbol*) $tmp3547), $tmp3549);
org$frostlang$frostc$MethodDecl* $tmp3550 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block125;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:791
frost$core$Bit $tmp3551 = *(&local31);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:791:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3552 = $tmp3551.value;
bool $tmp3553 = !$tmp3552;
frost$core$Bit $tmp3554 = (frost$core$Bit) {$tmp3553};
bool $tmp3555 = $tmp3554.value;
if ($tmp3555) goto block139; else goto block137;
block139:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3556;
$tmp3556 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3556->value = param7;
frost$core$Int $tmp3557 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:791:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3558 = &(&local43)->$rawValue;
*$tmp3558 = $tmp3557;
org$frostlang$frostc$ClassDecl$Kind $tmp3559 = *(&local43);
*(&local42) = $tmp3559;
org$frostlang$frostc$ClassDecl$Kind $tmp3560 = *(&local42);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3561;
$tmp3561 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3561->value = $tmp3560;
ITable* $tmp3562 = ((frost$core$Equatable*) $tmp3556)->$class->itable;
while ($tmp3562->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3562 = $tmp3562->next;
}
$fn3564 $tmp3563 = $tmp3562->methods[0];
frost$core$Bit $tmp3565 = $tmp3563(((frost$core$Equatable*) $tmp3556), ((frost$core$Equatable*) $tmp3561));
bool $tmp3566 = $tmp3565.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3561)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3556)));
if ($tmp3566) goto block138; else goto block141;
block141:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3567;
$tmp3567 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3567->value = param7;
frost$core$Int $tmp3568 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:791:80
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3569 = &(&local45)->$rawValue;
*$tmp3569 = $tmp3568;
org$frostlang$frostc$ClassDecl$Kind $tmp3570 = *(&local45);
*(&local44) = $tmp3570;
org$frostlang$frostc$ClassDecl$Kind $tmp3571 = *(&local44);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3572;
$tmp3572 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3572->value = $tmp3571;
ITable* $tmp3573 = ((frost$core$Equatable*) $tmp3567)->$class->itable;
while ($tmp3573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3573 = $tmp3573->next;
}
$fn3575 $tmp3574 = $tmp3573->methods[0];
frost$core$Bit $tmp3576 = $tmp3574(((frost$core$Equatable*) $tmp3567), ((frost$core$Equatable*) $tmp3572));
bool $tmp3577 = $tmp3576.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3572)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3567)));
if ($tmp3577) goto block138; else goto block137;
block138:;
org$frostlang$frostc$ClassDecl* $tmp3578 = *(&local16);
frost$core$String** $tmp3579 = &$tmp3578->name;
frost$core$String* $tmp3580 = *$tmp3579;
ITable* $tmp3582 = ((frost$core$Equatable*) $tmp3580)->$class->itable;
while ($tmp3582->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3582 = $tmp3582->next;
}
$fn3584 $tmp3583 = $tmp3582->methods[1];
frost$core$Bit $tmp3585 = $tmp3583(((frost$core$Equatable*) $tmp3580), ((frost$core$Equatable*) &$s3581));
bool $tmp3586 = $tmp3585.value;
if ($tmp3586) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:793
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3587 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3588 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3589 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3590 = (frost$core$Int) {32u};
frost$core$Int $tmp3591 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:794:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp3592 = $tmp3590.value;
int64_t $tmp3593 = $tmp3591.value;
int64_t $tmp3594 = $tmp3592 | $tmp3593;
frost$core$Int $tmp3595 = (frost$core$Int) {$tmp3594};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3589, $tmp3595);
frost$core$Int $tmp3596 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:795:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3597 = &(&local47)->$rawValue;
*$tmp3597 = $tmp3596;
org$frostlang$frostc$MethodDecl$Kind $tmp3598 = *(&local47);
*(&local46) = $tmp3598;
org$frostlang$frostc$MethodDecl$Kind $tmp3599 = *(&local46);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3600 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3601 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3600, $tmp3601);
frost$core$Weak** $tmp3602 = &param0->compiler;
frost$core$Weak* $tmp3603 = *$tmp3602;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:795:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3604 = &$tmp3603->_valid;
frost$core$Bit $tmp3605 = *$tmp3604;
bool $tmp3606 = $tmp3605.value;
if ($tmp3606) goto block148; else goto block149;
block149:;
frost$core$Int $tmp3607 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3608, $tmp3607);
abort(); // unreachable
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3609 = &$tmp3603->value;
frost$core$Object* $tmp3610 = *$tmp3609;
frost$core$Frost$ref$frost$core$Object$Q($tmp3610);
org$frostlang$frostc$Type** $tmp3611 = &((org$frostlang$frostc$Compiler*) $tmp3610)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3612 = *$tmp3611;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3613 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3613);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3587, $tmp3588, param4, ((frost$core$String*) NULL), $tmp3589, $tmp3599, &$s3614, ((frost$collections$Array*) NULL), $tmp3600, $tmp3612, $tmp3613);
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
org$frostlang$frostc$MethodDecl* $tmp3615 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
*(&local48) = $tmp3587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
frost$core$Frost$unref$frost$core$Object$Q($tmp3610);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:797
org$frostlang$frostc$ClassDecl* $tmp3616 = *(&local16);
frost$collections$Array** $tmp3617 = &$tmp3616->methods;
frost$collections$Array* $tmp3618 = *$tmp3617;
org$frostlang$frostc$MethodDecl* $tmp3619 = *(&local48);
frost$collections$Array$add$frost$collections$Array$T($tmp3618, ((frost$core$Object*) $tmp3619));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:798
org$frostlang$frostc$ClassDecl* $tmp3620 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3621 = &$tmp3620->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3622 = *$tmp3621;
org$frostlang$frostc$MethodDecl* $tmp3623 = *(&local48);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:798:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3624 = &((org$frostlang$frostc$Symbol*) $tmp3623)->name;
frost$core$String* $tmp3625 = *$tmp3624;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3622, ((org$frostlang$frostc$Symbol*) $tmp3623), $tmp3625);
org$frostlang$frostc$MethodDecl* $tmp3626 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block137;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:800
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3627;
$tmp3627 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3627->value = param7;
frost$core$Int $tmp3628 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:800:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3629 = &(&local50)->$rawValue;
*$tmp3629 = $tmp3628;
org$frostlang$frostc$ClassDecl$Kind $tmp3630 = *(&local50);
*(&local49) = $tmp3630;
org$frostlang$frostc$ClassDecl$Kind $tmp3631 = *(&local49);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3632;
$tmp3632 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3632->value = $tmp3631;
ITable* $tmp3633 = ((frost$core$Equatable*) $tmp3627)->$class->itable;
while ($tmp3633->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3633 = $tmp3633->next;
}
$fn3635 $tmp3634 = $tmp3633->methods[0];
frost$core$Bit $tmp3636 = $tmp3634(((frost$core$Equatable*) $tmp3627), ((frost$core$Equatable*) $tmp3632));
bool $tmp3637 = $tmp3636.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3632)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3627)));
if ($tmp3637) goto block151; else goto block152;
block151:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:801
frost$core$Bit $tmp3638 = (frost$core$Bit) {false};
*(&local51) = $tmp3638;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:802
org$frostlang$frostc$ClassDecl* $tmp3639 = *(&local16);
frost$collections$Array** $tmp3640 = &$tmp3639->choiceCases;
frost$collections$Array* $tmp3641 = *$tmp3640;
ITable* $tmp3642 = ((frost$collections$CollectionView*) $tmp3641)->$class->itable;
while ($tmp3642->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3642 = $tmp3642->next;
}
$fn3644 $tmp3643 = $tmp3642->methods[0];
frost$core$Int $tmp3645 = $tmp3643(((frost$collections$CollectionView*) $tmp3641));
frost$core$Int $tmp3646 = (frost$core$Int) {0u};
int64_t $tmp3647 = $tmp3645.value;
int64_t $tmp3648 = $tmp3646.value;
bool $tmp3649 = $tmp3647 > $tmp3648;
frost$core$Bit $tmp3650 = (frost$core$Bit) {$tmp3649};
bool $tmp3651 = $tmp3650.value;
if ($tmp3651) goto block154; else goto block156;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:803
org$frostlang$frostc$ClassDecl* $tmp3652 = *(&local16);
frost$collections$Array** $tmp3653 = &$tmp3652->choiceCases;
frost$collections$Array* $tmp3654 = *$tmp3653;
ITable* $tmp3655 = ((frost$collections$Iterable*) $tmp3654)->$class->itable;
while ($tmp3655->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3655 = $tmp3655->next;
}
$fn3657 $tmp3656 = $tmp3655->methods[0];
frost$collections$Iterator* $tmp3658 = $tmp3656(((frost$collections$Iterable*) $tmp3654));
goto block157;
block157:;
ITable* $tmp3659 = $tmp3658->$class->itable;
while ($tmp3659->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3659 = $tmp3659->next;
}
$fn3661 $tmp3660 = $tmp3659->methods[0];
frost$core$Bit $tmp3662 = $tmp3660($tmp3658);
bool $tmp3663 = $tmp3662.value;
if ($tmp3663) goto block159; else goto block158;
block158:;
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp3664 = $tmp3658->$class->itable;
while ($tmp3664->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3664 = $tmp3664->next;
}
$fn3666 $tmp3665 = $tmp3664->methods[1];
frost$core$Object* $tmp3667 = $tmp3665($tmp3658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp3667)));
org$frostlang$frostc$ChoiceCase* $tmp3668 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) $tmp3667);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:804
org$frostlang$frostc$ChoiceCase* $tmp3669 = *(&local52);
frost$collections$Array** $tmp3670 = &$tmp3669->fields;
frost$collections$Array* $tmp3671 = *$tmp3670;
ITable* $tmp3672 = ((frost$collections$CollectionView*) $tmp3671)->$class->itable;
while ($tmp3672->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3672 = $tmp3672->next;
}
$fn3674 $tmp3673 = $tmp3672->methods[0];
frost$core$Int $tmp3675 = $tmp3673(((frost$collections$CollectionView*) $tmp3671));
frost$core$Int $tmp3676 = (frost$core$Int) {0u};
int64_t $tmp3677 = $tmp3675.value;
int64_t $tmp3678 = $tmp3676.value;
bool $tmp3679 = $tmp3677 > $tmp3678;
frost$core$Bit $tmp3680 = (frost$core$Bit) {$tmp3679};
bool $tmp3681 = $tmp3680.value;
if ($tmp3681) goto block160; else goto block161;
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:805
frost$core$Bit $tmp3682 = (frost$core$Bit) {true};
*(&local51) = $tmp3682;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:806
frost$core$Frost$unref$frost$core$Object$Q($tmp3667);
org$frostlang$frostc$ChoiceCase* $tmp3683 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block159;
block161:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3667);
org$frostlang$frostc$ChoiceCase* $tmp3684 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block157;
block159:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:814
frost$core$Bit $tmp3685 = *(&local51);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:814:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3686 = $tmp3685.value;
bool $tmp3687 = !$tmp3686;
frost$core$Bit $tmp3688 = (frost$core$Bit) {$tmp3687};
bool $tmp3689 = $tmp3688.value;
if ($tmp3689) goto block168; else goto block169;
block156:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:811
org$frostlang$frostc$ClassDecl* $tmp3690 = *(&local16);
org$frostlang$frostc$Position* $tmp3691 = &$tmp3690->position;
org$frostlang$frostc$Position $tmp3692 = *$tmp3691;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:811:22
frost$io$File** $tmp3693 = &param0->source;
frost$io$File* $tmp3694 = *$tmp3693;
frost$core$Bit $tmp3695 = (frost$core$Bit) {$tmp3694 != NULL};
bool $tmp3696 = $tmp3695.value;
if ($tmp3696) goto block163; else goto block164;
block164:;
frost$core$Int $tmp3697 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3698, $tmp3697, &$s3699);
abort(); // unreachable
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3700 = &param0->compiler;
frost$core$Weak* $tmp3701 = *$tmp3700;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3702 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3701);
bool $tmp3703 = $tmp3702.value;
if ($tmp3703) goto block166; else goto block167;
block167:;
frost$core$Int $tmp3704 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3705, $tmp3704);
abort(); // unreachable
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3706 = &$tmp3701->value;
frost$core$Object* $tmp3707 = *$tmp3706;
frost$core$Frost$ref$frost$core$Object$Q($tmp3707);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3707), $tmp3692, &$s3708);
frost$core$Frost$unref$frost$core$Object$Q($tmp3707);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:812
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3709 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3710 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3711 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3712 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3713 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3714 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:815
org$frostlang$frostc$ClassDecl* $tmp3715 = *(&local16);
frost$core$Weak** $tmp3716 = &param0->compiler;
frost$core$Weak* $tmp3717 = *$tmp3716;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:815:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3718 = &$tmp3717->_valid;
frost$core$Bit $tmp3719 = *$tmp3718;
bool $tmp3720 = $tmp3719.value;
if ($tmp3720) goto block173; else goto block174;
block174:;
frost$core$Int $tmp3721 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3722, $tmp3721);
abort(); // unreachable
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3723 = &$tmp3717->value;
frost$core$Object* $tmp3724 = *$tmp3723;
frost$core$Frost$ref$frost$core$Object$Q($tmp3724);
org$frostlang$frostc$Type** $tmp3725 = &((org$frostlang$frostc$Compiler*) $tmp3724)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp3726 = *$tmp3725;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
org$frostlang$frostc$Type** $tmp3727 = &$tmp3715->rawSuper;
org$frostlang$frostc$Type* $tmp3728 = *$tmp3727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3728));
org$frostlang$frostc$Type** $tmp3729 = &$tmp3715->rawSuper;
*$tmp3729 = $tmp3726;
frost$core$Frost$unref$frost$core$Object$Q($tmp3724);
goto block169;
block169:;
goto block152;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:818
frost$core$Weak** $tmp3730 = &param0->compiler;
frost$core$Weak* $tmp3731 = *$tmp3730;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:818:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3732 = &$tmp3731->_valid;
frost$core$Bit $tmp3733 = *$tmp3732;
bool $tmp3734 = $tmp3733.value;
if ($tmp3734) goto block177; else goto block178;
block178:;
frost$core$Int $tmp3735 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3736, $tmp3735);
abort(); // unreachable
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3737 = &$tmp3731->value;
frost$core$Object* $tmp3738 = *$tmp3737;
frost$core$Frost$ref$frost$core$Object$Q($tmp3738);
frost$collections$Stack** $tmp3739 = &((org$frostlang$frostc$Compiler*) $tmp3738)->currentClass;
frost$collections$Stack* $tmp3740 = *$tmp3739;
frost$core$Object* $tmp3741 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3740);
frost$core$Frost$unref$frost$core$Object$Q($tmp3741);
frost$core$Frost$unref$frost$core$Object$Q($tmp3738);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
org$frostlang$frostc$ClassDecl* $tmp3742 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
org$frostlang$frostc$ClassDecl* $tmp3743 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3743));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3744 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3745 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3746 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3747 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3748 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3742;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3749 = &param1->classes;
frost$collections$Array* $tmp3750 = *$tmp3749;
ITable* $tmp3751 = ((frost$collections$Iterable*) $tmp3750)->$class->itable;
while ($tmp3751->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3751 = $tmp3751->next;
}
$fn3753 $tmp3752 = $tmp3751->methods[0];
frost$collections$Iterator* $tmp3754 = $tmp3752(((frost$collections$Iterable*) $tmp3750));
goto block1;
block1:;
ITable* $tmp3755 = $tmp3754->$class->itable;
while ($tmp3755->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3755 = $tmp3755->next;
}
$fn3757 $tmp3756 = $tmp3755->methods[0];
frost$core$Bit $tmp3758 = $tmp3756($tmp3754);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3760 = $tmp3754->$class->itable;
while ($tmp3760->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3760 = $tmp3760->next;
}
$fn3762 $tmp3761 = $tmp3760->methods[1];
frost$core$Object* $tmp3763 = $tmp3761($tmp3754);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3763)));
org$frostlang$frostc$ClassDecl* $tmp3764 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3764));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp3763);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3765 = *(&local0);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:825:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3765));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3766 = &$tmp3765->classes;
frost$collections$Array* $tmp3767 = *$tmp3766;
ITable* $tmp3768 = ((frost$collections$Iterable*) $tmp3767)->$class->itable;
while ($tmp3768->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3768 = $tmp3768->next;
}
$fn3770 $tmp3769 = $tmp3768->methods[0];
frost$collections$Iterator* $tmp3771 = $tmp3769(((frost$collections$Iterable*) $tmp3767));
goto block5;
block5:;
ITable* $tmp3772 = $tmp3771->$class->itable;
while ($tmp3772->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3772 = $tmp3772->next;
}
$fn3774 $tmp3773 = $tmp3772->methods[0];
frost$core$Bit $tmp3775 = $tmp3773($tmp3771);
bool $tmp3776 = $tmp3775.value;
if ($tmp3776) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3777 = $tmp3771->$class->itable;
while ($tmp3777->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3777 = $tmp3777->next;
}
$fn3779 $tmp3778 = $tmp3777->methods[1];
frost$core$Object* $tmp3780 = $tmp3778($tmp3771);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3780)));
org$frostlang$frostc$ClassDecl* $tmp3781 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp3780);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3782 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:825:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3782));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3783 = &$tmp3782->classes;
frost$collections$Array* $tmp3784 = *$tmp3783;
ITable* $tmp3785 = ((frost$collections$Iterable*) $tmp3784)->$class->itable;
while ($tmp3785->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3785 = $tmp3785->next;
}
$fn3787 $tmp3786 = $tmp3785->methods[0];
frost$collections$Iterator* $tmp3788 = $tmp3786(((frost$collections$Iterable*) $tmp3784));
goto block9;
block9:;
ITable* $tmp3789 = $tmp3788->$class->itable;
while ($tmp3789->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3789 = $tmp3789->next;
}
$fn3791 $tmp3790 = $tmp3789->methods[0];
frost$core$Bit $tmp3792 = $tmp3790($tmp3788);
bool $tmp3793 = $tmp3792.value;
if ($tmp3793) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3794 = $tmp3788->$class->itable;
while ($tmp3794->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3794 = $tmp3794->next;
}
$fn3796 $tmp3795 = $tmp3794->methods[1];
frost$core$Object* $tmp3797 = $tmp3795($tmp3788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3797)));
org$frostlang$frostc$ClassDecl* $tmp3798 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3798));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) $tmp3797);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3799 = *(&local2);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3799, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3797);
org$frostlang$frostc$ClassDecl* $tmp3800 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
frost$core$Frost$unref$frost$core$Object$Q($tmp3780);
org$frostlang$frostc$ClassDecl* $tmp3801 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3801));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
frost$core$Frost$unref$frost$core$Object$Q($tmp3763);
org$frostlang$frostc$ClassDecl* $tmp3802 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:831
org$frostlang$frostc$ClassDecl** $tmp3803 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3804 = *$tmp3803;
frost$core$Bit $tmp3805 = (frost$core$Bit) {$tmp3804 == NULL};
bool $tmp3806 = $tmp3805.value;
if ($tmp3806) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:832
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:833
ITable* $tmp3808 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp3808->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3808 = $tmp3808->next;
}
$fn3810 $tmp3809 = $tmp3808->methods[1];
frost$core$Bit $tmp3811 = $tmp3809(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s3807));
bool $tmp3812 = $tmp3811.value;
if ($tmp3812) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:834
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:834:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp3813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s3814);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
frost$core$String* $tmp3815 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
*(&local0) = $tmp3813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:837
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3816));
frost$core$String* $tmp3817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
*(&local0) = &$s3818;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:839
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp3819 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp3820 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3821 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp3821);
frost$core$Int $tmp3822 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:840:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3823 = &(&local2)->$rawValue;
*$tmp3823 = $tmp3822;
org$frostlang$frostc$ClassDecl$Kind $tmp3824 = *(&local2);
*(&local1) = $tmp3824;
org$frostlang$frostc$ClassDecl$Kind $tmp3825 = *(&local1);
frost$core$String* $tmp3826 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3827 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3827);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3828 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3828);
frost$core$Weak** $tmp3829 = &param0->compiler;
frost$core$Weak* $tmp3830 = *$tmp3829;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:841:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3831 = &$tmp3830->_valid;
frost$core$Bit $tmp3832 = *$tmp3831;
bool $tmp3833 = $tmp3832.value;
if ($tmp3833) goto block10; else goto block11;
block11:;
frost$core$Int $tmp3834 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3835, $tmp3834);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3836 = &$tmp3830->value;
frost$core$Object* $tmp3837 = *$tmp3836;
frost$core$Frost$ref$frost$core$Object$Q($tmp3837);
org$frostlang$frostc$SymbolTable** $tmp3838 = &((org$frostlang$frostc$Compiler*) $tmp3837)->root;
org$frostlang$frostc$SymbolTable* $tmp3839 = *$tmp3838;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp3819, param1, $tmp3820, param2, ((frost$core$String*) NULL), $tmp3821, $tmp3825, $tmp3826, ((frost$collections$ListView*) $tmp3827), $tmp3828, $tmp3839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3819));
org$frostlang$frostc$ClassDecl** $tmp3840 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3841 = *$tmp3840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
org$frostlang$frostc$ClassDecl** $tmp3842 = &param0->bareCodeClass;
*$tmp3842 = $tmp3819;
frost$core$Frost$unref$frost$core$Object$Q($tmp3837);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3819));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:842
org$frostlang$frostc$ClassDecl** $tmp3843 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3844 = *$tmp3843;
frost$core$Bit $tmp3845 = (frost$core$Bit) {$tmp3844 != NULL};
bool $tmp3846 = $tmp3845.value;
if ($tmp3846) goto block12; else goto block13;
block13:;
frost$core$Int $tmp3847 = (frost$core$Int) {842u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3848, $tmp3847, &$s3849);
abort(); // unreachable
block12:;
ITable* $tmp3850 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp3850->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp3850 = $tmp3850->next;
}
$fn3852 $tmp3851 = $tmp3850->methods[1];
$tmp3851(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp3844));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:843
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3853 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3854 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3855 = *$tmp3854;
frost$core$Bit $tmp3856 = (frost$core$Bit) {$tmp3855 != NULL};
bool $tmp3857 = $tmp3856.value;
if ($tmp3857) goto block14; else goto block15;
block15:;
frost$core$Int $tmp3858 = (frost$core$Int) {843u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3859, $tmp3858, &$s3860);
abort(); // unreachable
block14:;
org$frostlang$frostc$Position $tmp3861 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3862 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3863 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3862, $tmp3863);
frost$core$Int $tmp3864 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:844:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3865 = &(&local4)->$rawValue;
*$tmp3865 = $tmp3864;
org$frostlang$frostc$MethodDecl$Kind $tmp3866 = *(&local4);
*(&local3) = $tmp3866;
org$frostlang$frostc$MethodDecl$Kind $tmp3867 = *(&local3);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3868 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3869 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3868, $tmp3869);
frost$core$Weak** $tmp3870 = &param0->compiler;
frost$core$Weak* $tmp3871 = *$tmp3870;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:845:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3872 = &$tmp3871->_valid;
frost$core$Bit $tmp3873 = *$tmp3872;
bool $tmp3874 = $tmp3873.value;
if ($tmp3874) goto block19; else goto block20;
block20:;
frost$core$Int $tmp3875 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3876, $tmp3875);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3877 = &$tmp3871->value;
frost$core$Object* $tmp3878 = *$tmp3877;
frost$core$Frost$ref$frost$core$Object$Q($tmp3878);
org$frostlang$frostc$Type** $tmp3879 = &((org$frostlang$frostc$Compiler*) $tmp3878)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3880 = *$tmp3879;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3881 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3881);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3853, $tmp3855, $tmp3861, ((frost$core$String*) NULL), $tmp3862, $tmp3867, &$s3882, ((frost$collections$Array*) NULL), $tmp3868, $tmp3880, $tmp3881);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
org$frostlang$frostc$MethodDecl* $tmp3883 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3883));
*(&local5) = $tmp3853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
frost$core$Frost$unref$frost$core$Object$Q($tmp3878);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:846
org$frostlang$frostc$ClassDecl** $tmp3884 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3885 = *$tmp3884;
frost$core$Bit $tmp3886 = (frost$core$Bit) {$tmp3885 != NULL};
bool $tmp3887 = $tmp3886.value;
if ($tmp3887) goto block21; else goto block22;
block22:;
frost$core$Int $tmp3888 = (frost$core$Int) {846u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3889, $tmp3888, &$s3890);
abort(); // unreachable
block21:;
frost$collections$Array** $tmp3891 = &$tmp3885->methods;
frost$collections$Array* $tmp3892 = *$tmp3891;
org$frostlang$frostc$MethodDecl* $tmp3893 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3892, ((frost$core$Object*) $tmp3893));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:847
org$frostlang$frostc$ClassDecl** $tmp3894 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3895 = *$tmp3894;
frost$core$Bit $tmp3896 = (frost$core$Bit) {$tmp3895 != NULL};
bool $tmp3897 = $tmp3896.value;
if ($tmp3897) goto block23; else goto block24;
block24:;
frost$core$Int $tmp3898 = (frost$core$Int) {847u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3899, $tmp3898, &$s3900);
abort(); // unreachable
block23:;
org$frostlang$frostc$SymbolTable** $tmp3901 = &$tmp3895->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3902 = *$tmp3901;
org$frostlang$frostc$MethodDecl* $tmp3903 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:847:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3904 = &((org$frostlang$frostc$Symbol*) $tmp3903)->name;
frost$core$String* $tmp3905 = *$tmp3904;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3902, ((org$frostlang$frostc$Symbol*) $tmp3903), $tmp3905);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:848
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3906 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3907 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3908 = *$tmp3907;
frost$core$Bit $tmp3909 = (frost$core$Bit) {$tmp3908 != NULL};
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block26; else goto block27;
block27:;
frost$core$Int $tmp3911 = (frost$core$Int) {848u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3912, $tmp3911, &$s3913);
abort(); // unreachable
block26:;
org$frostlang$frostc$Position $tmp3914 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3915 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3916 = (frost$core$Int) {32u};
frost$core$Int $tmp3917 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:849:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp3918 = $tmp3916.value;
int64_t $tmp3919 = $tmp3917.value;
int64_t $tmp3920 = $tmp3918 | $tmp3919;
frost$core$Int $tmp3921 = (frost$core$Int) {$tmp3920};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3915, $tmp3921);
frost$core$Int $tmp3922 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:850:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3923 = &(&local7)->$rawValue;
*$tmp3923 = $tmp3922;
org$frostlang$frostc$MethodDecl$Kind $tmp3924 = *(&local7);
*(&local6) = $tmp3924;
org$frostlang$frostc$MethodDecl$Kind $tmp3925 = *(&local6);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3926 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3927 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3926, $tmp3927);
frost$core$Weak** $tmp3928 = &param0->compiler;
frost$core$Weak* $tmp3929 = *$tmp3928;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:850:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3930 = &$tmp3929->_valid;
frost$core$Bit $tmp3931 = *$tmp3930;
bool $tmp3932 = $tmp3931.value;
if ($tmp3932) goto block32; else goto block33;
block33:;
frost$core$Int $tmp3933 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3934, $tmp3933);
abort(); // unreachable
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3935 = &$tmp3929->value;
frost$core$Object* $tmp3936 = *$tmp3935;
frost$core$Frost$ref$frost$core$Object$Q($tmp3936);
org$frostlang$frostc$Type** $tmp3937 = &((org$frostlang$frostc$Compiler*) $tmp3936)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3938 = *$tmp3937;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3939 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3939);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3906, $tmp3908, $tmp3914, ((frost$core$String*) NULL), $tmp3915, $tmp3925, &$s3940, ((frost$collections$Array*) NULL), $tmp3926, $tmp3938, $tmp3939);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
org$frostlang$frostc$MethodDecl* $tmp3941 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3941));
*(&local8) = $tmp3906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
frost$core$Frost$unref$frost$core$Object$Q($tmp3936);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:852
org$frostlang$frostc$ClassDecl** $tmp3942 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3943 = *$tmp3942;
frost$core$Bit $tmp3944 = (frost$core$Bit) {$tmp3943 != NULL};
bool $tmp3945 = $tmp3944.value;
if ($tmp3945) goto block34; else goto block35;
block35:;
frost$core$Int $tmp3946 = (frost$core$Int) {852u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3947, $tmp3946, &$s3948);
abort(); // unreachable
block34:;
frost$collections$Array** $tmp3949 = &$tmp3943->methods;
frost$collections$Array* $tmp3950 = *$tmp3949;
org$frostlang$frostc$MethodDecl* $tmp3951 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp3950, ((frost$core$Object*) $tmp3951));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:853
org$frostlang$frostc$ClassDecl** $tmp3952 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3953 = *$tmp3952;
frost$core$Bit $tmp3954 = (frost$core$Bit) {$tmp3953 != NULL};
bool $tmp3955 = $tmp3954.value;
if ($tmp3955) goto block36; else goto block37;
block37:;
frost$core$Int $tmp3956 = (frost$core$Int) {853u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3957, $tmp3956, &$s3958);
abort(); // unreachable
block36:;
org$frostlang$frostc$SymbolTable** $tmp3959 = &$tmp3953->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3960 = *$tmp3959;
org$frostlang$frostc$MethodDecl* $tmp3961 = *(&local8);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:853:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3962 = &((org$frostlang$frostc$Symbol*) $tmp3961)->name;
frost$core$String* $tmp3963 = *$tmp3962;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3960, ((org$frostlang$frostc$Symbol*) $tmp3961), $tmp3963);
org$frostlang$frostc$MethodDecl* $tmp3964 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3965 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3966 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp3967 = &param0->source;
frost$io$File* $tmp3968 = *$tmp3967;
frost$core$Bit $tmp3969 = (frost$core$Bit) {$tmp3968 != NULL};
bool $tmp3970 = $tmp3969.value;
if ($tmp3970) goto block1; else goto block2;
block2:;
frost$core$Int $tmp3971 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3972, $tmp3971, &$s3973);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3974 = &param0->compiler;
frost$core$Weak* $tmp3975 = *$tmp3974;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3976 = &$tmp3975->_valid;
frost$core$Bit $tmp3977 = *$tmp3976;
bool $tmp3978 = $tmp3977.value;
if ($tmp3978) goto block5; else goto block6;
block6:;
frost$core$Int $tmp3979 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3980, $tmp3979);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3981 = &$tmp3975->value;
frost$core$Object* $tmp3982 = *$tmp3981;
frost$core$Frost$ref$frost$core$Object$Q($tmp3982);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3982), param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3982);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:863
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp3983 = &param0->source;
frost$io$File* $tmp3984 = *$tmp3983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
frost$io$File** $tmp3985 = &param0->source;
*$tmp3985 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:864
frost$core$Int* $tmp3986 = &param2->$rawValue;
frost$core$Int $tmp3987 = *$tmp3986;
frost$core$Int $tmp3988 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:865:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3989 = $tmp3987.value;
int64_t $tmp3990 = $tmp3988.value;
bool $tmp3991 = $tmp3989 == $tmp3990;
frost$core$Bit $tmp3992 = (frost$core$Bit) {$tmp3991};
bool $tmp3993 = $tmp3992.value;
if ($tmp3993) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp3994 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3995 = *$tmp3994;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
org$frostlang$frostc$FixedArray* $tmp3996 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
*(&local0) = $tmp3995;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:866
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3997 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3997);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
frost$collections$Array* $tmp3998 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local1) = $tmp3997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:867
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3999));
frost$core$String* $tmp4000 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4000));
*(&local2) = &$s4001;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:868
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp4002 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp4002);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4002));
frost$collections$HashMap* $tmp4003 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4003));
*(&local3) = $tmp4002;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4002));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:869
org$frostlang$frostc$FixedArray* $tmp4004 = *(&local0);
ITable* $tmp4005 = ((frost$collections$Iterable*) $tmp4004)->$class->itable;
while ($tmp4005->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4005 = $tmp4005->next;
}
$fn4007 $tmp4006 = $tmp4005->methods[0];
frost$collections$Iterator* $tmp4008 = $tmp4006(((frost$collections$Iterable*) $tmp4004));
goto block4;
block4:;
ITable* $tmp4009 = $tmp4008->$class->itable;
while ($tmp4009->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4009 = $tmp4009->next;
}
$fn4011 $tmp4010 = $tmp4009->methods[0];
frost$core$Bit $tmp4012 = $tmp4010($tmp4008);
bool $tmp4013 = $tmp4012.value;
if ($tmp4013) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp4014 = $tmp4008->$class->itable;
while ($tmp4014->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4014 = $tmp4014->next;
}
$fn4016 $tmp4015 = $tmp4014->methods[1];
frost$core$Object* $tmp4017 = $tmp4015($tmp4008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp4017)));
org$frostlang$frostc$ASTNode* $tmp4018 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4018));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp4017);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:870
org$frostlang$frostc$ASTNode* $tmp4019 = *(&local4);
frost$core$Int* $tmp4020 = &$tmp4019->$rawValue;
frost$core$Int $tmp4021 = *$tmp4020;
frost$core$Int $tmp4022 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:871:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4023 = $tmp4021.value;
int64_t $tmp4024 = $tmp4022.value;
bool $tmp4025 = $tmp4023 == $tmp4024;
frost$core$Bit $tmp4026 = (frost$core$Bit) {$tmp4025};
bool $tmp4027 = $tmp4026.value;
if ($tmp4027) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp4028 = (org$frostlang$frostc$Position*) ($tmp4019->$data + 0);
org$frostlang$frostc$Position $tmp4029 = *$tmp4028;
frost$core$String** $tmp4030 = (frost$core$String**) ($tmp4019->$data + 24);
frost$core$String* $tmp4031 = *$tmp4030;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
frost$core$String* $tmp4032 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
*(&local5) = $tmp4031;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:872
frost$core$String* $tmp4033 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
frost$core$String* $tmp4034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
*(&local2) = $tmp4033;
frost$core$String* $tmp4035 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int $tmp4036 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:874:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4037 = $tmp4021.value;
int64_t $tmp4038 = $tmp4036.value;
bool $tmp4039 = $tmp4037 == $tmp4038;
frost$core$Bit $tmp4040 = (frost$core$Bit) {$tmp4039};
bool $tmp4041 = $tmp4040.value;
if ($tmp4041) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp4042 = (org$frostlang$frostc$Position*) ($tmp4019->$data + 0);
org$frostlang$frostc$Position $tmp4043 = *$tmp4042;
frost$core$String** $tmp4044 = (frost$core$String**) ($tmp4019->$data + 24);
frost$core$String* $tmp4045 = *$tmp4044;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$String* $tmp4046 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
*(&local6) = $tmp4045;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:875
frost$core$String* $tmp4047 = *(&local6);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from Scanner.frost:875:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp4048 = &$tmp4047->_length;
frost$core$Int $tmp4049 = *$tmp4048;
frost$core$String$Index $tmp4050 = frost$core$String$Index$init$frost$core$Int($tmp4049);
frost$core$String$Index$nullable $tmp4051 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp4047, &$s4052, $tmp4050);
*(&local7) = $tmp4051;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:876
*(&local8) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:877
frost$core$String$Index$nullable $tmp4053 = *(&local7);
frost$core$Bit $tmp4054 = (frost$core$Bit) {$tmp4053.nonnull};
bool $tmp4055 = $tmp4054.value;
if ($tmp4055) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:878
frost$core$String* $tmp4056 = *(&local6);
frost$core$String* $tmp4057 = *(&local6);
frost$core$String$Index$nullable $tmp4058 = *(&local7);
frost$core$Bit $tmp4059 = (frost$core$Bit) {$tmp4058.nonnull};
bool $tmp4060 = $tmp4059.value;
if ($tmp4060) goto block19; else goto block20;
block20:;
frost$core$Int $tmp4061 = (frost$core$Int) {878u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4062, $tmp4061, &$s4063);
abort(); // unreachable
block19:;
frost$core$String$Index $tmp4064 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp4057, ((frost$core$String$Index) $tmp4058.value));
frost$core$Bit $tmp4065 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp4066 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp4064, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp4065);
frost$core$String* $tmp4067 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp4056, $tmp4066);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4067));
frost$core$String* $tmp4068 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
*(&local8) = $tmp4067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4067));
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:881
frost$core$String* $tmp4069 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4069));
frost$core$String* $tmp4070 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
*(&local8) = $tmp4069;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:883
frost$collections$HashMap* $tmp4071 = *(&local3);
frost$core$String* $tmp4072 = *(&local8);
frost$core$String* $tmp4073 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4071, ((frost$collections$HashKey*) $tmp4072), ((frost$core$Object*) $tmp4073));
frost$core$String* $tmp4074 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4074));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp4075 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block12:;
frost$core$Int $tmp4076 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:885:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4077 = $tmp4021.value;
int64_t $tmp4078 = $tmp4076.value;
bool $tmp4079 = $tmp4077 == $tmp4078;
frost$core$Bit $tmp4080 = (frost$core$Bit) {$tmp4079};
bool $tmp4081 = $tmp4080.value;
if ($tmp4081) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Position* $tmp4082 = (org$frostlang$frostc$Position*) ($tmp4019->$data + 0);
org$frostlang$frostc$Position $tmp4083 = *$tmp4082;
*(&local9) = $tmp4083;
org$frostlang$frostc$ASTNode** $tmp4084 = (org$frostlang$frostc$ASTNode**) ($tmp4019->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4085 = *$tmp4084;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
org$frostlang$frostc$ASTNode* $tmp4086 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4086));
*(&local10) = $tmp4085;
org$frostlang$frostc$FixedArray** $tmp4087 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4088 = *$tmp4087;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4088));
org$frostlang$frostc$FixedArray* $tmp4089 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
*(&local11) = $tmp4088;
org$frostlang$frostc$ClassDecl$Kind* $tmp4090 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp4019->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp4091 = *$tmp4090;
*(&local12) = $tmp4091;
frost$core$String** $tmp4092 = (frost$core$String**) ($tmp4019->$data + 48);
frost$core$String* $tmp4093 = *$tmp4092;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
frost$core$String* $tmp4094 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
*(&local13) = $tmp4093;
org$frostlang$frostc$FixedArray** $tmp4095 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 56);
org$frostlang$frostc$FixedArray* $tmp4096 = *$tmp4095;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
org$frostlang$frostc$FixedArray* $tmp4097 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
*(&local14) = $tmp4096;
org$frostlang$frostc$FixedArray** $tmp4098 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 64);
org$frostlang$frostc$FixedArray* $tmp4099 = *$tmp4098;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
org$frostlang$frostc$FixedArray* $tmp4100 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
*(&local15) = $tmp4099;
org$frostlang$frostc$FixedArray** $tmp4101 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 72);
org$frostlang$frostc$FixedArray* $tmp4102 = *$tmp4101;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
org$frostlang$frostc$FixedArray* $tmp4103 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
*(&local16) = $tmp4102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:887
frost$collections$HashMap* $tmp4104 = *(&local3);
frost$core$String* $tmp4105 = *(&local2);
org$frostlang$frostc$Position $tmp4106 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp4107 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp4108 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp4109 = *(&local12);
frost$core$String* $tmp4110 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp4111 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp4112 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp4113 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp4114 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp4104), $tmp4105, $tmp4106, $tmp4107, $tmp4108, $tmp4109, $tmp4110, $tmp4111, $tmp4112, $tmp4113);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
org$frostlang$frostc$ClassDecl* $tmp4115 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4115));
*(&local17) = $tmp4114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:889
org$frostlang$frostc$ClassDecl* $tmp4116 = *(&local17);
frost$core$Bit $tmp4117 = (frost$core$Bit) {$tmp4116 != NULL};
bool $tmp4118 = $tmp4117.value;
if ($tmp4118) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:890
org$frostlang$frostc$ClassDecl* $tmp4119 = *(&local17);
frost$core$Bit $tmp4120 = (frost$core$Bit) {$tmp4119 != NULL};
bool $tmp4121 = $tmp4120.value;
if ($tmp4121) goto block26; else goto block27;
block27:;
frost$core$Int $tmp4122 = (frost$core$Int) {890u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4123, $tmp4122, &$s4124);
abort(); // unreachable
block26:;
frost$collections$Array* $tmp4125 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:890:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T($tmp4125, ((frost$core$Object*) $tmp4119));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp4126 = &$tmp4119->classes;
frost$collections$Array* $tmp4127 = *$tmp4126;
ITable* $tmp4128 = ((frost$collections$Iterable*) $tmp4127)->$class->itable;
while ($tmp4128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4128 = $tmp4128->next;
}
$fn4130 $tmp4129 = $tmp4128->methods[0];
frost$collections$Iterator* $tmp4131 = $tmp4129(((frost$collections$Iterable*) $tmp4127));
goto block29;
block29:;
ITable* $tmp4132 = $tmp4131->$class->itable;
while ($tmp4132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4132 = $tmp4132->next;
}
$fn4134 $tmp4133 = $tmp4132->methods[0];
frost$core$Bit $tmp4135 = $tmp4133($tmp4131);
bool $tmp4136 = $tmp4135.value;
if ($tmp4136) goto block31; else goto block30;
block30:;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp4137 = $tmp4131->$class->itable;
while ($tmp4137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4137 = $tmp4137->next;
}
$fn4139 $tmp4138 = $tmp4137->methods[1];
frost$core$Object* $tmp4140 = $tmp4138($tmp4131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp4140)));
org$frostlang$frostc$ClassDecl* $tmp4141 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4141));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) $tmp4140);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp4142 = *(&local18);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:825:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T($tmp4125, ((frost$core$Object*) $tmp4142));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp4143 = &$tmp4142->classes;
frost$collections$Array* $tmp4144 = *$tmp4143;
ITable* $tmp4145 = ((frost$collections$Iterable*) $tmp4144)->$class->itable;
while ($tmp4145->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4145 = $tmp4145->next;
}
$fn4147 $tmp4146 = $tmp4145->methods[0];
frost$collections$Iterator* $tmp4148 = $tmp4146(((frost$collections$Iterable*) $tmp4144));
goto block33;
block33:;
ITable* $tmp4149 = $tmp4148->$class->itable;
while ($tmp4149->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4149 = $tmp4149->next;
}
$fn4151 $tmp4150 = $tmp4149->methods[0];
frost$core$Bit $tmp4152 = $tmp4150($tmp4148);
bool $tmp4153 = $tmp4152.value;
if ($tmp4153) goto block35; else goto block34;
block34:;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp4154 = $tmp4148->$class->itable;
while ($tmp4154->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4154 = $tmp4154->next;
}
$fn4156 $tmp4155 = $tmp4154->methods[1];
frost$core$Object* $tmp4157 = $tmp4155($tmp4148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp4157)));
org$frostlang$frostc$ClassDecl* $tmp4158 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4158));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) $tmp4157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp4159 = *(&local19);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp4159, $tmp4125);
frost$core$Frost$unref$frost$core$Object$Q($tmp4157);
org$frostlang$frostc$ClassDecl* $tmp4160 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4160));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4148));
frost$core$Frost$unref$frost$core$Object$Q($tmp4140);
org$frostlang$frostc$ClassDecl* $tmp4161 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4161));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4131));
goto block25;
block25:;
org$frostlang$frostc$ClassDecl* $tmp4162 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4162));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp4163 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4163));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4164 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4164));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4165 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4165));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4166 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4166));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4167 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4167));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4168 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block22:;
frost$core$Int $tmp4169 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:893:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4170 = $tmp4021.value;
int64_t $tmp4171 = $tmp4169.value;
bool $tmp4172 = $tmp4170 == $tmp4171;
frost$core$Bit $tmp4173 = (frost$core$Bit) {$tmp4172};
bool $tmp4174 = $tmp4173.value;
if ($tmp4174) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp4175 = (org$frostlang$frostc$Position*) ($tmp4019->$data + 0);
org$frostlang$frostc$Position $tmp4176 = *$tmp4175;
*(&local20) = $tmp4176;
org$frostlang$frostc$ASTNode** $tmp4177 = (org$frostlang$frostc$ASTNode**) ($tmp4019->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4178 = *$tmp4177;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4178));
org$frostlang$frostc$ASTNode* $tmp4179 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4179));
*(&local21) = $tmp4178;
org$frostlang$frostc$FixedArray** $tmp4180 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4181 = *$tmp4180;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4181));
org$frostlang$frostc$FixedArray* $tmp4182 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4182));
*(&local22) = $tmp4181;
org$frostlang$frostc$MethodDecl$Kind* $tmp4183 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp4019->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp4184 = *$tmp4183;
*(&local23) = $tmp4184;
frost$core$String** $tmp4185 = (frost$core$String**) ($tmp4019->$data + 48);
frost$core$String* $tmp4186 = *$tmp4185;
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
frost$core$String* $tmp4187 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4187));
*(&local24) = $tmp4186;
org$frostlang$frostc$FixedArray** $tmp4188 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 56);
org$frostlang$frostc$FixedArray* $tmp4189 = *$tmp4188;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
org$frostlang$frostc$FixedArray* $tmp4190 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
*(&local25) = $tmp4189;
org$frostlang$frostc$FixedArray** $tmp4191 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 64);
org$frostlang$frostc$FixedArray* $tmp4192 = *$tmp4191;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
org$frostlang$frostc$FixedArray* $tmp4193 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
*(&local26) = $tmp4192;
org$frostlang$frostc$ASTNode** $tmp4194 = (org$frostlang$frostc$ASTNode**) ($tmp4019->$data + 72);
org$frostlang$frostc$ASTNode* $tmp4195 = *$tmp4194;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4195));
org$frostlang$frostc$ASTNode* $tmp4196 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
*(&local27) = $tmp4195;
org$frostlang$frostc$FixedArray** $tmp4197 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 80);
org$frostlang$frostc$FixedArray* $tmp4198 = *$tmp4197;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4198));
org$frostlang$frostc$FixedArray* $tmp4199 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4199));
*(&local28) = $tmp4198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:895
org$frostlang$frostc$MethodDecl$Kind $tmp4200 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp4201;
$tmp4201 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp4201->value = $tmp4200;
frost$core$Int $tmp4202 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:895:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp4203 = &(&local30)->$rawValue;
*$tmp4203 = $tmp4202;
org$frostlang$frostc$MethodDecl$Kind $tmp4204 = *(&local30);
*(&local29) = $tmp4204;
org$frostlang$frostc$MethodDecl$Kind $tmp4205 = *(&local29);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp4206;
$tmp4206 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp4206->value = $tmp4205;
ITable* $tmp4207 = ((frost$core$Equatable*) $tmp4201)->$class->itable;
while ($tmp4207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4207 = $tmp4207->next;
}
$fn4209 $tmp4208 = $tmp4207->methods[0];
frost$core$Bit $tmp4210 = $tmp4208(((frost$core$Equatable*) $tmp4201), ((frost$core$Equatable*) $tmp4206));
bool $tmp4211 = $tmp4210.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4201)));
if ($tmp4211) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:896
org$frostlang$frostc$Position $tmp4212 = *(&local20);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:896:38
frost$io$File** $tmp4213 = &param0->source;
frost$io$File* $tmp4214 = *$tmp4213;
frost$core$Bit $tmp4215 = (frost$core$Bit) {$tmp4214 != NULL};
bool $tmp4216 = $tmp4215.value;
if ($tmp4216) goto block43; else goto block44;
block44:;
frost$core$Int $tmp4217 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4218, $tmp4217, &$s4219);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp4220 = &param0->compiler;
frost$core$Weak* $tmp4221 = *$tmp4220;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4222 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4221);
bool $tmp4223 = $tmp4222.value;
if ($tmp4223) goto block46; else goto block47;
block47:;
frost$core$Int $tmp4224 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4225, $tmp4224);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4226 = &$tmp4221->value;
frost$core$Object* $tmp4227 = *$tmp4226;
frost$core$Frost$ref$frost$core$Object$Q($tmp4227);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4227), $tmp4212, &$s4228);
frost$core$Frost$unref$frost$core$Object$Q($tmp4227);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:897
org$frostlang$frostc$FixedArray* $tmp4229 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4229));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4230 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4230));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4231 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4232 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4233 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4233));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4234 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4234));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4235 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp4017);
org$frostlang$frostc$ASTNode* $tmp4236 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:899
frost$collections$HashMap* $tmp4237 = *(&local3);
frost$core$String* $tmp4238 = *(&local2);
frost$collections$Array* $tmp4239 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp4237), $tmp4238, ((frost$collections$List*) $tmp4239));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:900
*(&local31) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:901
frost$core$String* $tmp4240 = *(&local24);
frost$core$Bit $tmp4241 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4240, &$s4242);
bool $tmp4243 = $tmp4241.value;
if ($tmp4243) goto block48; else goto block50;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:902
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4244));
frost$core$String* $tmp4245 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
*(&local31) = &$s4246;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:903
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4247 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4247);
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
frost$collections$Array* $tmp4248 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
*(&local32) = $tmp4247;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:904
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4249 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4249);
*(&local33) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
frost$collections$Array* $tmp4250 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4250));
*(&local33) = $tmp4249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:905
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4251 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4251);
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
frost$collections$Array* $tmp4252 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
*(&local34) = $tmp4251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:906
org$frostlang$frostc$FixedArray* $tmp4253 = *(&local26);
ITable* $tmp4254 = ((frost$collections$Iterable*) $tmp4253)->$class->itable;
while ($tmp4254->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4254 = $tmp4254->next;
}
$fn4256 $tmp4255 = $tmp4254->methods[0];
frost$collections$Iterator* $tmp4257 = $tmp4255(((frost$collections$Iterable*) $tmp4253));
goto block51;
block51:;
ITable* $tmp4258 = $tmp4257->$class->itable;
while ($tmp4258->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4258 = $tmp4258->next;
}
$fn4260 $tmp4259 = $tmp4258->methods[0];
frost$core$Bit $tmp4261 = $tmp4259($tmp4257);
bool $tmp4262 = $tmp4261.value;
if ($tmp4262) goto block53; else goto block52;
block52:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp4263 = $tmp4257->$class->itable;
while ($tmp4263->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4263 = $tmp4263->next;
}
$fn4265 $tmp4264 = $tmp4263->methods[1];
frost$core$Object* $tmp4266 = $tmp4264($tmp4257);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp4266)));
org$frostlang$frostc$ASTNode* $tmp4267 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp4266);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:907
org$frostlang$frostc$ASTNode* $tmp4268 = *(&local35);
frost$core$Int* $tmp4269 = &$tmp4268->$rawValue;
frost$core$Int $tmp4270 = *$tmp4269;
frost$core$Int $tmp4271 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:908:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4272 = $tmp4270.value;
int64_t $tmp4273 = $tmp4271.value;
bool $tmp4274 = $tmp4272 == $tmp4273;
frost$core$Bit $tmp4275 = (frost$core$Bit) {$tmp4274};
bool $tmp4276 = $tmp4275.value;
if ($tmp4276) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp4277 = (org$frostlang$frostc$Position*) ($tmp4268->$data + 0);
org$frostlang$frostc$Position $tmp4278 = *$tmp4277;
*(&local36) = $tmp4278;
frost$core$String** $tmp4279 = (frost$core$String**) ($tmp4268->$data + 24);
frost$core$String* $tmp4280 = *$tmp4279;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
frost$core$String* $tmp4281 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4281));
*(&local37) = $tmp4280;
org$frostlang$frostc$ASTNode** $tmp4282 = (org$frostlang$frostc$ASTNode**) ($tmp4268->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4283 = *$tmp4282;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
org$frostlang$frostc$ASTNode* $tmp4284 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
*(&local38) = $tmp4283;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:909
frost$collections$Array* $tmp4285 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp4286 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp4287 = *(&local37);
org$frostlang$frostc$ASTNode* $tmp4288 = *(&local38);
org$frostlang$frostc$Type* $tmp4289 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4288);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp4286, $tmp4287, $tmp4289);
frost$collections$Array$add$frost$collections$Array$T($tmp4285, ((frost$core$Object*) $tmp4286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:911
frost$collections$Array* $tmp4290 = *(&local34);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4291 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4292 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp4293 = *(&local36);
frost$core$String* $tmp4294 = *(&local37);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp4291, $tmp4292, $tmp4293, $tmp4294);
frost$collections$Array$add$frost$collections$Array$T($tmp4290, ((frost$core$Object*) $tmp4291));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
org$frostlang$frostc$ASTNode* $tmp4295 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4296 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp4266);
org$frostlang$frostc$ASTNode* $tmp4297 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block51;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:914
frost$core$Int $tmp4298 = (frost$core$Int) {914u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4299, $tmp4298);
abort(); // unreachable
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4257));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:918
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4300 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4301 = (frost$core$Int) {9u};
org$frostlang$frostc$Position $tmp4302 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4303 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4304 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp4305 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp4303, $tmp4304, $tmp4305, &$s4306);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp4307 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4307);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4300, $tmp4301, $tmp4302, $tmp4303, $tmp4307);
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
org$frostlang$frostc$ASTNode* $tmp4308 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
*(&local39) = $tmp4300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:921
frost$collections$Array* $tmp4309 = *(&local33);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4310 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4311 = (frost$core$Int) {9u};
org$frostlang$frostc$Position $tmp4312 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4313 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4314 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp4315 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4316 = *(&local39);
frost$core$String* $tmp4317 = *(&local31);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4313, $tmp4314, $tmp4315, $tmp4316, $tmp4317);
frost$collections$Array* $tmp4318 = *(&local34);
org$frostlang$frostc$FixedArray* $tmp4319 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4318);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4310, $tmp4311, $tmp4312, $tmp4313, $tmp4319);
frost$collections$Array$add$frost$collections$Array$T($tmp4309, ((frost$core$Object*) $tmp4310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:924
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:925
org$frostlang$frostc$ASTNode* $tmp4320 = *(&local27);
frost$core$Bit $tmp4321 = (frost$core$Bit) {$tmp4320 != NULL};
bool $tmp4322 = $tmp4321.value;
if ($tmp4322) goto block58; else goto block60;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:926
org$frostlang$frostc$ASTNode* $tmp4323 = *(&local27);
frost$core$Bit $tmp4324 = (frost$core$Bit) {$tmp4323 != NULL};
bool $tmp4325 = $tmp4324.value;
if ($tmp4325) goto block61; else goto block62;
block62:;
frost$core$Int $tmp4326 = (frost$core$Int) {926u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4327, $tmp4326, &$s4328);
abort(); // unreachable
block61:;
org$frostlang$frostc$Type* $tmp4329 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4323);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
org$frostlang$frostc$Type* $tmp4330 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
*(&local40) = $tmp4329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
goto block59;
block60:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:929
frost$core$Weak** $tmp4331 = &param0->compiler;
frost$core$Weak* $tmp4332 = *$tmp4331;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:929:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4333 = &$tmp4332->_valid;
frost$core$Bit $tmp4334 = *$tmp4333;
bool $tmp4335 = $tmp4334.value;
if ($tmp4335) goto block65; else goto block66;
block66:;
frost$core$Int $tmp4336 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4337, $tmp4336);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4338 = &$tmp4332->value;
frost$core$Object* $tmp4339 = *$tmp4338;
frost$core$Frost$ref$frost$core$Object$Q($tmp4339);
org$frostlang$frostc$Type** $tmp4340 = &((org$frostlang$frostc$Compiler*) $tmp4339)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp4341 = *$tmp4340;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
org$frostlang$frostc$Type* $tmp4342 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
*(&local40) = $tmp4341;
frost$core$Frost$unref$frost$core$Object$Q($tmp4339);
goto block59;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:931
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp4343 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp4344 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4345 = *$tmp4344;
frost$core$Bit $tmp4346 = (frost$core$Bit) {$tmp4345 != NULL};
bool $tmp4347 = $tmp4346.value;
if ($tmp4347) goto block67; else goto block68;
block68:;
frost$core$Int $tmp4348 = (frost$core$Int) {931u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4349, $tmp4348, &$s4350);
abort(); // unreachable
block67:;
org$frostlang$frostc$Position $tmp4351 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp4352 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp4353 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp4352, $tmp4353);
frost$core$Int $tmp4354 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:932:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp4355 = &(&local42)->$rawValue;
*$tmp4355 = $tmp4354;
org$frostlang$frostc$MethodDecl$Kind $tmp4356 = *(&local42);
*(&local41) = $tmp4356;
org$frostlang$frostc$MethodDecl$Kind $tmp4357 = *(&local41);
frost$collections$Array* $tmp4358 = *(&local32);
org$frostlang$frostc$Type* $tmp4359 = *(&local40);
frost$collections$Array* $tmp4360 = *(&local33);
org$frostlang$frostc$FixedArray* $tmp4361 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4360);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4343, $tmp4345, $tmp4351, ((frost$core$String*) NULL), $tmp4352, $tmp4357, &$s4362, ((frost$collections$Array*) NULL), $tmp4358, $tmp4359, $tmp4361);
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
org$frostlang$frostc$MethodDecl* $tmp4363 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4363));
*(&local43) = $tmp4343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:935
org$frostlang$frostc$ClassDecl** $tmp4364 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4365 = *$tmp4364;
frost$core$Bit $tmp4366 = (frost$core$Bit) {$tmp4365 != NULL};
bool $tmp4367 = $tmp4366.value;
if ($tmp4367) goto block70; else goto block71;
block71:;
frost$core$Int $tmp4368 = (frost$core$Int) {935u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4369, $tmp4368, &$s4370);
abort(); // unreachable
block70:;
frost$collections$Array** $tmp4371 = &$tmp4365->methods;
frost$collections$Array* $tmp4372 = *$tmp4371;
org$frostlang$frostc$MethodDecl* $tmp4373 = *(&local43);
frost$collections$Array$add$frost$collections$Array$T($tmp4372, ((frost$core$Object*) $tmp4373));
org$frostlang$frostc$MethodDecl* $tmp4374 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp4375 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp4376 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4376));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4377 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4377));
*(&local34) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4378 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4378));
*(&local33) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4379 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4379));
*(&local32) = ((frost$collections$Array*) NULL);
goto block49;
block50:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:938
frost$core$String* $tmp4380 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
frost$core$String* $tmp4381 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4381));
*(&local31) = $tmp4380;
goto block49;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:940
frost$core$Weak** $tmp4382 = &param0->compiler;
frost$core$Weak* $tmp4383 = *$tmp4382;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:940:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4384 = &$tmp4383->_valid;
frost$core$Bit $tmp4385 = *$tmp4384;
bool $tmp4386 = $tmp4385.value;
if ($tmp4386) goto block74; else goto block75;
block75:;
frost$core$Int $tmp4387 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4388, $tmp4387);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4389 = &$tmp4383->value;
frost$core$Object* $tmp4390 = *$tmp4389;
frost$core$Frost$ref$frost$core$Object$Q($tmp4390);
frost$collections$Stack** $tmp4391 = &((org$frostlang$frostc$Compiler*) $tmp4390)->currentClass;
frost$collections$Stack* $tmp4392 = *$tmp4391;
org$frostlang$frostc$ClassDecl** $tmp4393 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4394 = *$tmp4393;
frost$core$Bit $tmp4395 = (frost$core$Bit) {$tmp4394 != NULL};
bool $tmp4396 = $tmp4395.value;
if ($tmp4396) goto block76; else goto block77;
block77:;
frost$core$Int $tmp4397 = (frost$core$Int) {940u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4398, $tmp4397, &$s4399);
abort(); // unreachable
block76:;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:940:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp4400 = &$tmp4392->contents;
frost$collections$Array* $tmp4401 = *$tmp4400;
frost$collections$Array$add$frost$collections$Array$T($tmp4401, ((frost$core$Object*) $tmp4394));
frost$core$Frost$unref$frost$core$Object$Q($tmp4390);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:941
org$frostlang$frostc$ClassDecl** $tmp4402 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4403 = *$tmp4402;
frost$core$Bit $tmp4404 = (frost$core$Bit) {$tmp4403 != NULL};
bool $tmp4405 = $tmp4404.value;
if ($tmp4405) goto block79; else goto block80;
block80:;
frost$core$Int $tmp4406 = (frost$core$Int) {941u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4407, $tmp4406, &$s4408);
abort(); // unreachable
block79:;
org$frostlang$frostc$Position $tmp4409 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4410 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp4411 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind $tmp4412 = *(&local23);
frost$core$String* $tmp4413 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp4414 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp4415 = *(&local26);
org$frostlang$frostc$ASTNode* $tmp4416 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp4417 = *(&local28);
org$frostlang$frostc$MethodDecl* $tmp4418 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp4403, $tmp4409, $tmp4410, $tmp4411, $tmp4412, $tmp4413, $tmp4414, $tmp4415, $tmp4416, $tmp4417);
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
org$frostlang$frostc$MethodDecl* $tmp4419 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
*(&local44) = $tmp4418;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:943
org$frostlang$frostc$MethodDecl* $tmp4420 = *(&local44);
frost$core$Bit $tmp4421 = (frost$core$Bit) {$tmp4420 != NULL};
bool $tmp4422 = $tmp4421.value;
if ($tmp4422) goto block83; else goto block84;
block84:;
frost$core$Int $tmp4423 = (frost$core$Int) {943u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4424, $tmp4423, &$s4425);
abort(); // unreachable
block83:;
org$frostlang$frostc$Annotations** $tmp4426 = &$tmp4420->annotations;
org$frostlang$frostc$Annotations* $tmp4427 = *$tmp4426;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:943:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp4428 = &$tmp4427->flags;
frost$core$Int $tmp4429 = *$tmp4428;
frost$core$Int $tmp4430 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4431 = $tmp4429.value;
int64_t $tmp4432 = $tmp4430.value;
int64_t $tmp4433 = $tmp4431 & $tmp4432;
frost$core$Int $tmp4434 = (frost$core$Int) {$tmp4433};
frost$core$Int $tmp4435 = (frost$core$Int) {0u};
int64_t $tmp4436 = $tmp4434.value;
int64_t $tmp4437 = $tmp4435.value;
bool $tmp4438 = $tmp4436 != $tmp4437;
frost$core$Bit $tmp4439 = (frost$core$Bit) {$tmp4438};
bool $tmp4440 = $tmp4439.value;
if ($tmp4440) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:944
org$frostlang$frostc$MethodDecl* $tmp4441 = *(&local44);
frost$core$Bit $tmp4442 = (frost$core$Bit) {$tmp4441 != NULL};
bool $tmp4443 = $tmp4442.value;
if ($tmp4443) goto block87; else goto block88;
block88:;
frost$core$Int $tmp4444 = (frost$core$Int) {944u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4445, $tmp4444, &$s4446);
abort(); // unreachable
block87:;
org$frostlang$frostc$Position* $tmp4447 = &((org$frostlang$frostc$Symbol*) $tmp4441)->position;
org$frostlang$frostc$Position $tmp4448 = *$tmp4447;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:944:38
frost$io$File** $tmp4449 = &param0->source;
frost$io$File* $tmp4450 = *$tmp4449;
frost$core$Bit $tmp4451 = (frost$core$Bit) {$tmp4450 != NULL};
bool $tmp4452 = $tmp4451.value;
if ($tmp4452) goto block90; else goto block91;
block91:;
frost$core$Int $tmp4453 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4454, $tmp4453, &$s4455);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp4456 = &param0->compiler;
frost$core$Weak* $tmp4457 = *$tmp4456;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4458 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4457);
bool $tmp4459 = $tmp4458.value;
if ($tmp4459) goto block93; else goto block94;
block94:;
frost$core$Int $tmp4460 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4461, $tmp4460);
abort(); // unreachable
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4462 = &$tmp4457->value;
frost$core$Object* $tmp4463 = *$tmp4462;
frost$core$Frost$ref$frost$core$Object$Q($tmp4463);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4463), $tmp4448, &$s4464);
frost$core$Frost$unref$frost$core$Object$Q($tmp4463);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:946
org$frostlang$frostc$MethodDecl* $tmp4465 = *(&local44);
frost$core$Bit $tmp4466 = (frost$core$Bit) {$tmp4465 != NULL};
bool $tmp4467 = $tmp4466.value;
if ($tmp4467) goto block95; else goto block96;
block96:;
frost$core$Int $tmp4468 = (frost$core$Int) {946u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4469, $tmp4468, &$s4470);
abort(); // unreachable
block95:;
org$frostlang$frostc$Annotations** $tmp4471 = &$tmp4465->annotations;
org$frostlang$frostc$Annotations* $tmp4472 = *$tmp4471;
frost$core$Int* $tmp4473 = &$tmp4472->flags;
frost$core$Int $tmp4474 = *$tmp4473;
frost$core$Int $tmp4475 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.!!():frost.core.Int from Scanner.frost:946:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:275
int64_t $tmp4476 = $tmp4475.value;
int64_t $tmp4477 = !$tmp4476;
frost$core$Int $tmp4478 = (frost$core$Int) {$tmp4477};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:946:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4479 = $tmp4474.value;
int64_t $tmp4480 = $tmp4478.value;
int64_t $tmp4481 = $tmp4479 & $tmp4480;
frost$core$Int $tmp4482 = (frost$core$Int) {$tmp4481};
frost$core$Int* $tmp4483 = &$tmp4472->flags;
*$tmp4483 = $tmp4482;
goto block82;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:948
frost$core$Weak** $tmp4484 = &param0->compiler;
frost$core$Weak* $tmp4485 = *$tmp4484;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:948:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4486 = &$tmp4485->_valid;
frost$core$Bit $tmp4487 = *$tmp4486;
bool $tmp4488 = $tmp4487.value;
if ($tmp4488) goto block101; else goto block102;
block102:;
frost$core$Int $tmp4489 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4490, $tmp4489);
abort(); // unreachable
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4491 = &$tmp4485->value;
frost$core$Object* $tmp4492 = *$tmp4491;
frost$core$Frost$ref$frost$core$Object$Q($tmp4492);
frost$collections$Stack** $tmp4493 = &((org$frostlang$frostc$Compiler*) $tmp4492)->currentClass;
frost$collections$Stack* $tmp4494 = *$tmp4493;
frost$core$Int $tmp4495 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Scanner.frost:948:57
frost$core$Int $tmp4496 = (frost$core$Int) {0u};
int64_t $tmp4497 = $tmp4495.value;
int64_t $tmp4498 = $tmp4496.value;
bool $tmp4499 = $tmp4497 >= $tmp4498;
frost$core$Bit $tmp4500 = (frost$core$Bit) {$tmp4499};
bool $tmp4501 = $tmp4500.value;
if ($tmp4501) goto block106; else goto block105;
block106:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp4502 = &$tmp4494->contents;
frost$collections$Array* $tmp4503 = *$tmp4502;
ITable* $tmp4504 = ((frost$collections$CollectionView*) $tmp4503)->$class->itable;
while ($tmp4504->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4504 = $tmp4504->next;
}
$fn4506 $tmp4505 = $tmp4504->methods[0];
frost$core$Int $tmp4507 = $tmp4505(((frost$collections$CollectionView*) $tmp4503));
int64_t $tmp4508 = $tmp4495.value;
int64_t $tmp4509 = $tmp4507.value;
bool $tmp4510 = $tmp4508 < $tmp4509;
frost$core$Bit $tmp4511 = (frost$core$Bit) {$tmp4510};
bool $tmp4512 = $tmp4511.value;
if ($tmp4512) goto block104; else goto block105;
block105:;
frost$core$Int $tmp4513 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4514, $tmp4513, &$s4515);
abort(); // unreachable
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp4516 = &$tmp4494->contents;
frost$collections$Array* $tmp4517 = *$tmp4516;
ITable* $tmp4518 = ((frost$collections$CollectionView*) $tmp4517)->$class->itable;
while ($tmp4518->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4518 = $tmp4518->next;
}
$fn4520 $tmp4519 = $tmp4518->methods[0];
frost$core$Int $tmp4521 = $tmp4519(((frost$collections$CollectionView*) $tmp4517));
int64_t $tmp4522 = $tmp4521.value;
int64_t $tmp4523 = $tmp4495.value;
bool $tmp4524 = $tmp4522 > $tmp4523;
frost$core$Bit $tmp4525 = (frost$core$Bit) {$tmp4524};
bool $tmp4526 = $tmp4525.value;
if ($tmp4526) goto block108; else goto block109;
block109:;
frost$core$Int $tmp4527 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4528, $tmp4527);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp4529 = &$tmp4494->contents;
frost$collections$Array* $tmp4530 = *$tmp4529;
frost$collections$Array** $tmp4531 = &$tmp4494->contents;
frost$collections$Array* $tmp4532 = *$tmp4531;
ITable* $tmp4533 = ((frost$collections$CollectionView*) $tmp4532)->$class->itable;
while ($tmp4533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4533 = $tmp4533->next;
}
$fn4535 $tmp4534 = $tmp4533->methods[0];
frost$core$Int $tmp4536 = $tmp4534(((frost$collections$CollectionView*) $tmp4532));
frost$core$Int $tmp4537 = (frost$core$Int) {1u};
int64_t $tmp4538 = $tmp4536.value;
int64_t $tmp4539 = $tmp4537.value;
int64_t $tmp4540 = $tmp4538 - $tmp4539;
frost$core$Int $tmp4541 = (frost$core$Int) {$tmp4540};
int64_t $tmp4542 = $tmp4541.value;
int64_t $tmp4543 = $tmp4495.value;
int64_t $tmp4544 = $tmp4542 - $tmp4543;
frost$core$Int $tmp4545 = (frost$core$Int) {$tmp4544};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp4546 = (frost$core$Int) {0u};
int64_t $tmp4547 = $tmp4545.value;
int64_t $tmp4548 = $tmp4546.value;
bool $tmp4549 = $tmp4547 >= $tmp4548;
frost$core$Bit $tmp4550 = (frost$core$Bit) {$tmp4549};
bool $tmp4551 = $tmp4550.value;
if ($tmp4551) goto block113; else goto block112;
block113:;
ITable* $tmp4552 = ((frost$collections$CollectionView*) $tmp4530)->$class->itable;
while ($tmp4552->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4552 = $tmp4552->next;
}
$fn4554 $tmp4553 = $tmp4552->methods[0];
frost$core$Int $tmp4555 = $tmp4553(((frost$collections$CollectionView*) $tmp4530));
int64_t $tmp4556 = $tmp4545.value;
int64_t $tmp4557 = $tmp4555.value;
bool $tmp4558 = $tmp4556 < $tmp4557;
frost$core$Bit $tmp4559 = (frost$core$Bit) {$tmp4558};
bool $tmp4560 = $tmp4559.value;
if ($tmp4560) goto block111; else goto block112;
block112:;
frost$core$Int $tmp4561 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4562, $tmp4561, &$s4563);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp4564 = &$tmp4530->data;
frost$core$Object** $tmp4565 = *$tmp4564;
frost$core$Int64 $tmp4566 = frost$core$Int64$init$frost$core$Int($tmp4545);
int64_t $tmp4567 = $tmp4566.value;
frost$core$Object* $tmp4568 = $tmp4565[$tmp4567];
frost$core$Frost$ref$frost$core$Object$Q($tmp4568);
frost$core$Frost$ref$frost$core$Object$Q($tmp4568);
frost$core$Frost$unref$frost$core$Object$Q($tmp4568);
org$frostlang$frostc$ClassDecl** $tmp4569 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4570 = *$tmp4569;
bool $tmp4571 = ((org$frostlang$frostc$ClassDecl*) $tmp4568) == $tmp4570;
frost$core$Bit $tmp4572 = (frost$core$Bit) {$tmp4571};
bool $tmp4573 = $tmp4572.value;
if ($tmp4573) goto block114; else goto block115;
block115:;
frost$core$Int $tmp4574 = (frost$core$Int) {948u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4575, $tmp4574);
abort(); // unreachable
block114:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4568);
frost$core$Frost$unref$frost$core$Object$Q($tmp4492);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:949
frost$core$Weak** $tmp4576 = &param0->compiler;
frost$core$Weak* $tmp4577 = *$tmp4576;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:949:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4578 = &$tmp4577->_valid;
frost$core$Bit $tmp4579 = *$tmp4578;
bool $tmp4580 = $tmp4579.value;
if ($tmp4580) goto block118; else goto block119;
block119:;
frost$core$Int $tmp4581 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4582, $tmp4581);
abort(); // unreachable
block118:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4583 = &$tmp4577->value;
frost$core$Object* $tmp4584 = *$tmp4583;
frost$core$Frost$ref$frost$core$Object$Q($tmp4584);
frost$collections$Stack** $tmp4585 = &((org$frostlang$frostc$Compiler*) $tmp4584)->currentClass;
frost$collections$Stack* $tmp4586 = *$tmp4585;
frost$core$Object* $tmp4587 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4586);
frost$core$Frost$unref$frost$core$Object$Q($tmp4587);
frost$core$Frost$unref$frost$core$Object$Q($tmp4584);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:950
org$frostlang$frostc$ClassDecl** $tmp4588 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4589 = *$tmp4588;
frost$core$Bit $tmp4590 = (frost$core$Bit) {$tmp4589 != NULL};
bool $tmp4591 = $tmp4590.value;
if ($tmp4591) goto block120; else goto block121;
block121:;
frost$core$Int $tmp4592 = (frost$core$Int) {950u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4593, $tmp4592, &$s4594);
abort(); // unreachable
block120:;
frost$collections$Array** $tmp4595 = &$tmp4589->methods;
frost$collections$Array* $tmp4596 = *$tmp4595;
org$frostlang$frostc$MethodDecl* $tmp4597 = *(&local44);
frost$core$Bit $tmp4598 = (frost$core$Bit) {$tmp4597 != NULL};
bool $tmp4599 = $tmp4598.value;
if ($tmp4599) goto block122; else goto block123;
block123:;
frost$core$Int $tmp4600 = (frost$core$Int) {950u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4601, $tmp4600, &$s4602);
abort(); // unreachable
block122:;
frost$collections$Array$add$frost$collections$Array$T($tmp4596, ((frost$core$Object*) $tmp4597));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:951
org$frostlang$frostc$ClassDecl** $tmp4603 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4604 = *$tmp4603;
frost$core$Bit $tmp4605 = (frost$core$Bit) {$tmp4604 != NULL};
bool $tmp4606 = $tmp4605.value;
if ($tmp4606) goto block124; else goto block125;
block125:;
frost$core$Int $tmp4607 = (frost$core$Int) {951u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4608, $tmp4607, &$s4609);
abort(); // unreachable
block124:;
org$frostlang$frostc$SymbolTable** $tmp4610 = &$tmp4604->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4611 = *$tmp4610;
org$frostlang$frostc$MethodDecl* $tmp4612 = *(&local44);
frost$core$Bit $tmp4613 = (frost$core$Bit) {$tmp4612 != NULL};
bool $tmp4614 = $tmp4613.value;
if ($tmp4614) goto block126; else goto block127;
block127:;
frost$core$Int $tmp4615 = (frost$core$Int) {951u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4616, $tmp4615, &$s4617);
abort(); // unreachable
block126:;
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:951:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp4618 = &((org$frostlang$frostc$Symbol*) $tmp4612)->name;
frost$core$String* $tmp4619 = *$tmp4618;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp4611, ((org$frostlang$frostc$Symbol*) $tmp4612), $tmp4619);
org$frostlang$frostc$MethodDecl* $tmp4620 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp4621 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4621));
*(&local31) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4622 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4622));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4623 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4623));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4624 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4624));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4625 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4625));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4626 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4626));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4627 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4627));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4628 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4628));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block37:;
frost$core$Int $tmp4629 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:953:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4630 = $tmp4021.value;
int64_t $tmp4631 = $tmp4629.value;
bool $tmp4632 = $tmp4630 == $tmp4631;
frost$core$Bit $tmp4633 = (frost$core$Bit) {$tmp4632};
bool $tmp4634 = $tmp4633.value;
if ($tmp4634) goto block129; else goto block130;
block129:;
org$frostlang$frostc$Position* $tmp4635 = (org$frostlang$frostc$Position*) ($tmp4019->$data + 0);
org$frostlang$frostc$Position $tmp4636 = *$tmp4635;
*(&local45) = $tmp4636;
org$frostlang$frostc$ASTNode** $tmp4637 = (org$frostlang$frostc$ASTNode**) ($tmp4019->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4638 = *$tmp4637;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4638));
org$frostlang$frostc$ASTNode* $tmp4639 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
*(&local46) = $tmp4638;
org$frostlang$frostc$FixedArray** $tmp4640 = (org$frostlang$frostc$FixedArray**) ($tmp4019->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4641 = *$tmp4640;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
org$frostlang$frostc$FixedArray* $tmp4642 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
*(&local47) = $tmp4641;
org$frostlang$frostc$ASTNode** $tmp4643 = (org$frostlang$frostc$ASTNode**) ($tmp4019->$data + 40);
org$frostlang$frostc$ASTNode* $tmp4644 = *$tmp4643;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
org$frostlang$frostc$ASTNode* $tmp4645 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4645));
*(&local48) = $tmp4644;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:954
frost$collections$HashMap* $tmp4646 = *(&local3);
frost$core$String* $tmp4647 = *(&local2);
frost$collections$Array* $tmp4648 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp4646), $tmp4647, ((frost$collections$List*) $tmp4648));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:955
org$frostlang$frostc$ClassDecl** $tmp4649 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4650 = *$tmp4649;
frost$core$Bit $tmp4651 = (frost$core$Bit) {$tmp4650 != NULL};
bool $tmp4652 = $tmp4651.value;
if ($tmp4652) goto block132; else goto block133;
block133:;
frost$core$Int $tmp4653 = (frost$core$Int) {955u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4654, $tmp4653, &$s4655);
abort(); // unreachable
block132:;
frost$collections$Array** $tmp4656 = &$tmp4650->fields;
frost$collections$Array* $tmp4657 = *$tmp4656;
ITable* $tmp4658 = ((frost$collections$CollectionView*) $tmp4657)->$class->itable;
while ($tmp4658->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4658 = $tmp4658->next;
}
$fn4660 $tmp4659 = $tmp4658->methods[0];
frost$core$Int $tmp4661 = $tmp4659(((frost$collections$CollectionView*) $tmp4657));
*(&local49) = $tmp4661;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:956
org$frostlang$frostc$ClassDecl** $tmp4662 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4663 = *$tmp4662;
frost$core$Bit $tmp4664 = (frost$core$Bit) {$tmp4663 != NULL};
bool $tmp4665 = $tmp4664.value;
if ($tmp4665) goto block134; else goto block135;
block135:;
frost$core$Int $tmp4666 = (frost$core$Int) {956u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4667, $tmp4666, &$s4668);
abort(); // unreachable
block134:;
org$frostlang$frostc$Position $tmp4669 = *(&local45);
org$frostlang$frostc$ASTNode* $tmp4670 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp4671 = *(&local47);
org$frostlang$frostc$ASTNode* $tmp4672 = *(&local48);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp4663, $tmp4669, $tmp4670, $tmp4671, $tmp4672);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:957
frost$core$Int $tmp4673 = *(&local49);
org$frostlang$frostc$ClassDecl** $tmp4674 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4675 = *$tmp4674;
frost$core$Bit $tmp4676 = (frost$core$Bit) {$tmp4675 != NULL};
bool $tmp4677 = $tmp4676.value;
if ($tmp4677) goto block136; else goto block137;
block137:;
frost$core$Int $tmp4678 = (frost$core$Int) {957u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4679, $tmp4678, &$s4680);
abort(); // unreachable
block136:;
frost$collections$Array** $tmp4681 = &$tmp4675->fields;
frost$collections$Array* $tmp4682 = *$tmp4681;
ITable* $tmp4683 = ((frost$collections$CollectionView*) $tmp4682)->$class->itable;
while ($tmp4683->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4683 = $tmp4683->next;
}
$fn4685 $tmp4684 = $tmp4683->methods[0];
frost$core$Int $tmp4686 = $tmp4684(((frost$collections$CollectionView*) $tmp4682));
frost$core$Bit $tmp4687 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp4688 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp4673, $tmp4686, $tmp4687);
frost$core$Int $tmp4689 = $tmp4688.min;
*(&local50) = $tmp4689;
frost$core$Int $tmp4690 = $tmp4688.max;
frost$core$Bit $tmp4691 = $tmp4688.inclusive;
bool $tmp4692 = $tmp4691.value;
frost$core$Int $tmp4693 = (frost$core$Int) {1u};
if ($tmp4692) goto block141; else goto block142;
block141:;
int64_t $tmp4694 = $tmp4689.value;
int64_t $tmp4695 = $tmp4690.value;
bool $tmp4696 = $tmp4694 <= $tmp4695;
frost$core$Bit $tmp4697 = (frost$core$Bit) {$tmp4696};
bool $tmp4698 = $tmp4697.value;
if ($tmp4698) goto block138; else goto block139;
block142:;
int64_t $tmp4699 = $tmp4689.value;
int64_t $tmp4700 = $tmp4690.value;
bool $tmp4701 = $tmp4699 < $tmp4700;
frost$core$Bit $tmp4702 = (frost$core$Bit) {$tmp4701};
bool $tmp4703 = $tmp4702.value;
if ($tmp4703) goto block138; else goto block139;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:958
org$frostlang$frostc$ClassDecl** $tmp4704 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4705 = *$tmp4704;
frost$core$Bit $tmp4706 = (frost$core$Bit) {$tmp4705 != NULL};
bool $tmp4707 = $tmp4706.value;
if ($tmp4707) goto block143; else goto block144;
block144:;
frost$core$Int $tmp4708 = (frost$core$Int) {958u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4709, $tmp4708, &$s4710);
abort(); // unreachable
block143:;
frost$collections$Array** $tmp4711 = &$tmp4705->fields;
frost$collections$Array* $tmp4712 = *$tmp4711;
frost$core$Int $tmp4713 = *(&local50);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Scanner.frost:958:62
frost$core$Int $tmp4714 = (frost$core$Int) {0u};
int64_t $tmp4715 = $tmp4713.value;
int64_t $tmp4716 = $tmp4714.value;
bool $tmp4717 = $tmp4715 >= $tmp4716;
frost$core$Bit $tmp4718 = (frost$core$Bit) {$tmp4717};
bool $tmp4719 = $tmp4718.value;
if ($tmp4719) goto block148; else goto block147;
block148:;
ITable* $tmp4720 = ((frost$collections$CollectionView*) $tmp4712)->$class->itable;
while ($tmp4720->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4720 = $tmp4720->next;
}
$fn4722 $tmp4721 = $tmp4720->methods[0];
frost$core$Int $tmp4723 = $tmp4721(((frost$collections$CollectionView*) $tmp4712));
int64_t $tmp4724 = $tmp4713.value;
int64_t $tmp4725 = $tmp4723.value;
bool $tmp4726 = $tmp4724 < $tmp4725;
frost$core$Bit $tmp4727 = (frost$core$Bit) {$tmp4726};
bool $tmp4728 = $tmp4727.value;
if ($tmp4728) goto block146; else goto block147;
block147:;
frost$core$Int $tmp4729 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4730, $tmp4729, &$s4731);
abort(); // unreachable
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp4732 = &$tmp4712->data;
frost$core$Object** $tmp4733 = *$tmp4732;
frost$core$Int64 $tmp4734 = frost$core$Int64$init$frost$core$Int($tmp4713);
int64_t $tmp4735 = $tmp4734.value;
frost$core$Object* $tmp4736 = $tmp4733[$tmp4735];
frost$core$Frost$ref$frost$core$Object$Q($tmp4736);
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4736)));
org$frostlang$frostc$FieldDecl* $tmp4737 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4737));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) $tmp4736);
frost$core$Frost$unref$frost$core$Object$Q($tmp4736);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:959
org$frostlang$frostc$FieldDecl* $tmp4738 = *(&local51);
org$frostlang$frostc$FieldDecl$Kind* $tmp4739 = &$tmp4738->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp4740 = *$tmp4739;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4741;
$tmp4741 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4741->value = $tmp4740;
frost$core$Int $tmp4742 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:959:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp4743 = &(&local53)->$rawValue;
*$tmp4743 = $tmp4742;
org$frostlang$frostc$FieldDecl$Kind $tmp4744 = *(&local53);
*(&local52) = $tmp4744;
org$frostlang$frostc$FieldDecl$Kind $tmp4745 = *(&local52);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4746;
$tmp4746 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4746->value = $tmp4745;
ITable* $tmp4747 = ((frost$core$Equatable*) $tmp4741)->$class->itable;
while ($tmp4747->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4747 = $tmp4747->next;
}
$fn4749 $tmp4748 = $tmp4747->methods[1];
frost$core$Bit $tmp4750 = $tmp4748(((frost$core$Equatable*) $tmp4741), ((frost$core$Equatable*) $tmp4746));
bool $tmp4751 = $tmp4750.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4746)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4741)));
if ($tmp4751) goto block151; else goto block150;
block151:;
org$frostlang$frostc$FieldDecl* $tmp4752 = *(&local51);
org$frostlang$frostc$Annotations** $tmp4753 = &$tmp4752->annotations;
org$frostlang$frostc$Annotations* $tmp4754 = *$tmp4753;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:960:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp4755 = &$tmp4754->flags;
frost$core$Int $tmp4756 = *$tmp4755;
frost$core$Int $tmp4757 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4758 = $tmp4756.value;
int64_t $tmp4759 = $tmp4757.value;
int64_t $tmp4760 = $tmp4758 & $tmp4759;
frost$core$Int $tmp4761 = (frost$core$Int) {$tmp4760};
frost$core$Int $tmp4762 = (frost$core$Int) {0u};
int64_t $tmp4763 = $tmp4761.value;
int64_t $tmp4764 = $tmp4762.value;
bool $tmp4765 = $tmp4763 != $tmp4764;
frost$core$Bit $tmp4766 = (frost$core$Bit) {$tmp4765};
bool $tmp4767 = $tmp4766.value;
if ($tmp4767) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:961
org$frostlang$frostc$FieldDecl* $tmp4768 = *(&local51);
org$frostlang$frostc$Position* $tmp4769 = &((org$frostlang$frostc$Symbol*) $tmp4768)->position;
org$frostlang$frostc$Position $tmp4770 = *$tmp4769;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:961:42
frost$io$File** $tmp4771 = &param0->source;
frost$io$File* $tmp4772 = *$tmp4771;
frost$core$Bit $tmp4773 = (frost$core$Bit) {$tmp4772 != NULL};
bool $tmp4774 = $tmp4773.value;
if ($tmp4774) goto block156; else goto block157;
block157:;
frost$core$Int $tmp4775 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4776, $tmp4775, &$s4777);
abort(); // unreachable
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp4778 = &param0->compiler;
frost$core$Weak* $tmp4779 = *$tmp4778;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4780 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4779);
bool $tmp4781 = $tmp4780.value;
if ($tmp4781) goto block159; else goto block160;
block160:;
frost$core$Int $tmp4782 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4783, $tmp4782);
abort(); // unreachable
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4784 = &$tmp4779->value;
frost$core$Object* $tmp4785 = *$tmp4784;
frost$core$Frost$ref$frost$core$Object$Q($tmp4785);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4785), $tmp4770, &$s4786);
frost$core$Frost$unref$frost$core$Object$Q($tmp4785);
goto block150;
block150:;
org$frostlang$frostc$FieldDecl* $tmp4787 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Int $tmp4788 = *(&local50);
int64_t $tmp4789 = $tmp4690.value;
int64_t $tmp4790 = $tmp4788.value;
int64_t $tmp4791 = $tmp4789 - $tmp4790;
frost$core$Int $tmp4792 = (frost$core$Int) {$tmp4791};
if ($tmp4692) goto block162; else goto block163;
block162:;
int64_t $tmp4793 = $tmp4792.value;
int64_t $tmp4794 = $tmp4693.value;
bool $tmp4795 = $tmp4793 >= $tmp4794;
frost$core$Bit $tmp4796 = (frost$core$Bit) {$tmp4795};
bool $tmp4797 = $tmp4796.value;
if ($tmp4797) goto block161; else goto block139;
block163:;
int64_t $tmp4798 = $tmp4792.value;
int64_t $tmp4799 = $tmp4693.value;
bool $tmp4800 = $tmp4798 > $tmp4799;
frost$core$Bit $tmp4801 = (frost$core$Bit) {$tmp4800};
bool $tmp4802 = $tmp4801.value;
if ($tmp4802) goto block161; else goto block139;
block161:;
int64_t $tmp4803 = $tmp4788.value;
int64_t $tmp4804 = $tmp4693.value;
int64_t $tmp4805 = $tmp4803 + $tmp4804;
frost$core$Int $tmp4806 = (frost$core$Int) {$tmp4805};
*(&local50) = $tmp4806;
goto block138;
block139:;
org$frostlang$frostc$ASTNode* $tmp4807 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4807));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4808 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4808));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4809 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4809));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:967
frost$core$Int $tmp4810 = (frost$core$Int) {967u};
org$frostlang$frostc$ASTNode* $tmp4811 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:967:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4813 $tmp4812 = ($fn4813) ((frost$core$Object*) $tmp4811)->$class->vtable[0];
frost$core$String* $tmp4814 = $tmp4812(((frost$core$Object*) $tmp4811));
frost$core$String* $tmp4815 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4816, $tmp4814);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$String* $tmp4817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4815, &$s4818);
org$frostlang$frostc$ASTNode* $tmp4819 = *(&local4);
frost$core$Int* $tmp4820 = &$tmp4819->$rawValue;
frost$core$Int $tmp4821 = *$tmp4820;
frost$core$Int$wrapper* $tmp4822;
$tmp4822 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4822->value = $tmp4821;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:967:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4824 $tmp4823 = ($fn4824) ((frost$core$Object*) $tmp4822)->$class->vtable[0];
frost$core$String* $tmp4825 = $tmp4823(((frost$core$Object*) $tmp4822));
frost$core$String* $tmp4826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4817, $tmp4825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4825));
frost$core$String* $tmp4827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4826, &$s4828);
org$frostlang$frostc$ASTNode* $tmp4829 = *(&local4);
$fn4831 $tmp4830 = ($fn4831) $tmp4829->$class->vtable[2];
org$frostlang$frostc$Position $tmp4832 = $tmp4830($tmp4829);
org$frostlang$frostc$Position$wrapper* $tmp4833;
$tmp4833 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp4833->value = $tmp4832;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:967:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4835 $tmp4834 = ($fn4835) ((frost$core$Object*) $tmp4833)->$class->vtable[0];
frost$core$String* $tmp4836 = $tmp4834(((frost$core$Object*) $tmp4833));
frost$core$String* $tmp4837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4827, $tmp4836);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$String* $tmp4838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4837, &$s4839);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4840, $tmp4810, $tmp4838);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4815));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4017);
org$frostlang$frostc$ASTNode* $tmp4841 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:971
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp4842 = &param0->source;
frost$io$File* $tmp4843 = *$tmp4842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4843));
frost$io$File** $tmp4844 = &param0->source;
*$tmp4844 = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:972
frost$collections$Array* $tmp4845 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp4845)));
frost$collections$HashMap* $tmp4846 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp4847 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp4848 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4848));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp4849 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4849));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp4845);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:975
frost$core$Int $tmp4850 = (frost$core$Int) {975u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4851, $tmp4850);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp4852 = &param0->compiler;
frost$core$Weak* $tmp4853 = *$tmp4852;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4853));
org$frostlang$frostc$ClassDecl** $tmp4854 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4855 = *$tmp4854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
frost$io$File** $tmp4856 = &param0->source;
frost$io$File* $tmp4857 = *$tmp4856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4857));
return;

}

