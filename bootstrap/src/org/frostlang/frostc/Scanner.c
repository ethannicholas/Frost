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
typedef frost$core$Bit (*$fn749)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn751)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn778)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn780)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn807)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn809)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn836)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn838)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn865)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn867)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1026)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1030)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1035)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1192)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1196)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1201)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1297)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1301)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1306)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1345)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1349)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1354)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1435)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1439)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1444)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1515)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1519)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1524)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1574)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1578)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1583)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1632)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1636)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1641)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1676)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1680)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1685)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1702)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1706)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1711)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1901)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1905)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1910)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1941)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1945)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1950)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1964)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1968)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1973)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2008)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2012)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2017)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2084)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2088)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2093)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2146)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2201)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2205)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2210)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2269)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn2283)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2287)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2292)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2346)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2375)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2421)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2655)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn2659)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2736)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2768)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2772)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2777)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn2790)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2808)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2847)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2851)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2856)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2915)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2935)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2956)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2960)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2965)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3012)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3087)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3091)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3096)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3201)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3205)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3210)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3224)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3239)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3256)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3289)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3298)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3349)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3360)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3369)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3420)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn3429)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3442)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3446)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3451)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn3459)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3538)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3542)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3547)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3555)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3559)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3564)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3572)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3576)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3581)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3595)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn3632)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3757)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3761)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3766)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3870)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3874)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3879)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3887)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3891)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3896)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3949)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3996)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4000)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4005)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn4206)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4220)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4235)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4254)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4335)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4350)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4382)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4409)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4473)(frost$core$Object*);
typedef frost$core$String* (*$fn4484)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn4491)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn4495)(frost$core$Object*);

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
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e", 9, 5956652778682659450, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 134526994446166888, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 5031055877270038133, NULL };
static frost$core$String $s791 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, -1205915675663244815, NULL };
static frost$core$String $s820 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 6601423246907155994, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 3008583721667412327, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, 5029378179413211882, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 3933979906453277221, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s913 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s954 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -2702568160131628339, NULL };
static frost$core$String $s2640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3479509698475155476, NULL };
static frost$core$String $s2741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2910 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2953 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -3719689727633176608, NULL };
static frost$core$String $s2984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s2996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3037 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s3066 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 8996675876247625211, NULL };
static frost$core$String $s3157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, -3178355849381906807, NULL };
static frost$core$String $s3180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -8426410652778701193, NULL };
static frost$core$String $s3232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 1323168004075572057, NULL };
static frost$core$String $s3295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -157497934161719815, NULL };
static frost$core$String $s3507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 4069187544645537896, NULL };
static frost$core$String $s3601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s3751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s3802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s3958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3965 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s3968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, 4149591465855488060, NULL };
static frost$core$String $s3982 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s3984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s3986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s4039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 6449659721254005836, NULL };
static frost$core$String $s4072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s4113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s4215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s4228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s4262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s4263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s4275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s4391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s4436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s4446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3524753437392098394, NULL };
static frost$core$String $s4478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s4488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a", 2, 566763092841805498, NULL };
static frost$core$String $s4499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s4500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };

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
frost$core$Int $tmp540 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s541, $tmp540, &$s542);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp543 = &param0->compiler;
frost$core$Weak* $tmp544 = *$tmp543;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
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
frost$core$Int $tmp567 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s568, $tmp567, &$s569);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
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
org$frostlang$frostc$Position $tmp728 = *(&local4);
frost$core$Int $tmp729 = *(&local0);
frost$core$Int $tmp730 = (frost$core$Int) {262144u};
frost$core$Int $tmp731 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int$frost$core$Int$R$frost$core$Int(param0, $tmp728, $tmp729, $tmp730);
*(&local0) = $tmp731;
goto block9;
block41:;
frost$core$Bit $tmp732 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s733);
bool $tmp734 = $tmp732.value;
if ($tmp734) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:181
frost$collections$Array* $tmp735 = *(&local1);
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735 == NULL};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:182
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp738 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp738);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$collections$Array* $tmp739 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local1) = $tmp738;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:184
frost$core$Method* $tmp740 = *(&local2);
org$frostlang$frostc$Position $tmp741 = *(&local4);
frost$core$String* $tmp742 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp743 = *(&local8);
frost$core$Int8** $tmp744 = &$tmp740->pointer;
frost$core$Int8* $tmp745 = *$tmp744;
frost$core$Immutable** $tmp746 = &$tmp740->target;
frost$core$Immutable* $tmp747 = *$tmp746;
bool $tmp748 = $tmp747 != ((frost$core$Immutable*) NULL);
if ($tmp748) goto block48; else goto block49;
block49:;
frost$core$Bit $tmp750 = (($fn749) $tmp745)(param0, $tmp741, $tmp742, $tmp743);
*(&local9) = $tmp750;
goto block50;
block48:;
frost$core$Bit $tmp752 = (($fn751) $tmp745)($tmp747, param0, $tmp741, $tmp742, $tmp743);
*(&local9) = $tmp752;
goto block50;
block50:;
frost$core$Bit $tmp753 = *(&local9);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:185
frost$collections$Array* $tmp755 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp756 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp757 = (frost$core$Int) {0u};
frost$core$String* $tmp758 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp759 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp756, $tmp757, $tmp758, $tmp759);
frost$collections$Array$add$frost$collections$Array$T($tmp755, ((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:186
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp760 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block47:;
goto block9;
block43:;
frost$core$Bit $tmp761 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s762);
bool $tmp763 = $tmp761.value;
if ($tmp763) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:190
frost$collections$Array* $tmp764 = *(&local1);
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764 == NULL};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:191
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp767 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp767);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$collections$Array* $tmp768 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local1) = $tmp767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:193
frost$core$Method* $tmp769 = *(&local2);
org$frostlang$frostc$Position $tmp770 = *(&local4);
frost$core$String* $tmp771 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp772 = *(&local8);
frost$core$Int8** $tmp773 = &$tmp769->pointer;
frost$core$Int8* $tmp774 = *$tmp773;
frost$core$Immutable** $tmp775 = &$tmp769->target;
frost$core$Immutable* $tmp776 = *$tmp775;
bool $tmp777 = $tmp776 != ((frost$core$Immutable*) NULL);
if ($tmp777) goto block57; else goto block58;
block58:;
frost$core$Bit $tmp779 = (($fn778) $tmp774)(param0, $tmp770, $tmp771, $tmp772);
*(&local10) = $tmp779;
goto block59;
block57:;
frost$core$Bit $tmp781 = (($fn780) $tmp774)($tmp776, param0, $tmp770, $tmp771, $tmp772);
*(&local10) = $tmp781;
goto block59;
block59:;
frost$core$Bit $tmp782 = *(&local10);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:194
frost$collections$Array* $tmp784 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp785 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp786 = (frost$core$Int) {1u};
frost$core$String* $tmp787 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp788 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp785, $tmp786, $tmp787, $tmp788);
frost$collections$Array$add$frost$collections$Array$T($tmp784, ((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp789 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block56;
block56:;
goto block9;
block52:;
frost$core$Bit $tmp790 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s791);
bool $tmp792 = $tmp790.value;
if ($tmp792) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:199
frost$collections$Array* $tmp793 = *(&local1);
frost$core$Bit $tmp794 = (frost$core$Bit) {$tmp793 == NULL};
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:200
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp796 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp796);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$collections$Array* $tmp797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local1) = $tmp796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:202
frost$core$Method* $tmp798 = *(&local2);
org$frostlang$frostc$Position $tmp799 = *(&local4);
frost$core$String* $tmp800 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp801 = *(&local8);
frost$core$Int8** $tmp802 = &$tmp798->pointer;
frost$core$Int8* $tmp803 = *$tmp802;
frost$core$Immutable** $tmp804 = &$tmp798->target;
frost$core$Immutable* $tmp805 = *$tmp804;
bool $tmp806 = $tmp805 != ((frost$core$Immutable*) NULL);
if ($tmp806) goto block66; else goto block67;
block67:;
frost$core$Bit $tmp808 = (($fn807) $tmp803)(param0, $tmp799, $tmp800, $tmp801);
*(&local11) = $tmp808;
goto block68;
block66:;
frost$core$Bit $tmp810 = (($fn809) $tmp803)($tmp805, param0, $tmp799, $tmp800, $tmp801);
*(&local11) = $tmp810;
goto block68;
block68:;
frost$core$Bit $tmp811 = *(&local11);
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:203
frost$collections$Array* $tmp813 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp814 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp815 = (frost$core$Int) {2u};
frost$core$String* $tmp816 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp817 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp814, $tmp815, $tmp816, $tmp817);
frost$collections$Array$add$frost$collections$Array$T($tmp813, ((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:204
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp818 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block65;
block65:;
goto block9;
block61:;
frost$core$Bit $tmp819 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s820);
bool $tmp821 = $tmp819.value;
if ($tmp821) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:208
frost$collections$Array* $tmp822 = *(&local1);
frost$core$Bit $tmp823 = (frost$core$Bit) {$tmp822 == NULL};
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:209
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp825 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp825);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$collections$Array* $tmp826 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local1) = $tmp825;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
goto block72;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:211
frost$core$Method* $tmp827 = *(&local2);
org$frostlang$frostc$Position $tmp828 = *(&local4);
frost$core$String* $tmp829 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp830 = *(&local8);
frost$core$Int8** $tmp831 = &$tmp827->pointer;
frost$core$Int8* $tmp832 = *$tmp831;
frost$core$Immutable** $tmp833 = &$tmp827->target;
frost$core$Immutable* $tmp834 = *$tmp833;
bool $tmp835 = $tmp834 != ((frost$core$Immutable*) NULL);
if ($tmp835) goto block75; else goto block76;
block76:;
frost$core$Bit $tmp837 = (($fn836) $tmp832)(param0, $tmp828, $tmp829, $tmp830);
*(&local12) = $tmp837;
goto block77;
block75:;
frost$core$Bit $tmp839 = (($fn838) $tmp832)($tmp834, param0, $tmp828, $tmp829, $tmp830);
*(&local12) = $tmp839;
goto block77;
block77:;
frost$core$Bit $tmp840 = *(&local12);
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:212
frost$collections$Array* $tmp842 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp843 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp844 = (frost$core$Int) {3u};
frost$core$String* $tmp845 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp846 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp843, $tmp844, $tmp845, $tmp846);
frost$collections$Array$add$frost$collections$Array$T($tmp842, ((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp847 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block74;
block74:;
goto block9;
block70:;
frost$core$Bit $tmp848 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp619, &$s849);
bool $tmp850 = $tmp848.value;
if ($tmp850) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:217
frost$collections$Array* $tmp851 = *(&local1);
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851 == NULL};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:218
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp854 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp854);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$collections$Array* $tmp855 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local1) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
goto block81;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:220
frost$core$Method* $tmp856 = *(&local2);
org$frostlang$frostc$Position $tmp857 = *(&local4);
frost$core$String* $tmp858 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp859 = *(&local8);
frost$core$Int8** $tmp860 = &$tmp856->pointer;
frost$core$Int8* $tmp861 = *$tmp860;
frost$core$Immutable** $tmp862 = &$tmp856->target;
frost$core$Immutable* $tmp863 = *$tmp862;
bool $tmp864 = $tmp863 != ((frost$core$Immutable*) NULL);
if ($tmp864) goto block84; else goto block85;
block85:;
frost$core$Bit $tmp866 = (($fn865) $tmp861)(param0, $tmp857, $tmp858, $tmp859);
*(&local13) = $tmp866;
goto block86;
block84:;
frost$core$Bit $tmp868 = (($fn867) $tmp861)($tmp863, param0, $tmp857, $tmp858, $tmp859);
*(&local13) = $tmp868;
goto block86;
block86:;
frost$core$Bit $tmp869 = *(&local13);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block82; else goto block83;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:221
frost$collections$Array* $tmp871 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp872 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int $tmp873 = (frost$core$Int) {4u};
frost$core$String* $tmp874 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp875 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode($tmp872, $tmp873, $tmp874, $tmp875);
frost$collections$Array$add$frost$collections$Array$T($tmp871, ((frost$core$Object*) $tmp872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp876 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block83;
block83:;
goto block9;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:226
org$frostlang$frostc$Position $tmp877 = *(&local4);
frost$core$String* $tmp878 = *(&local5);
frost$core$String* $tmp879 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s880, $tmp878);
frost$core$String* $tmp881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp879, &$s882);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:226:34
frost$io$File** $tmp883 = &param0->source;
frost$io$File* $tmp884 = *$tmp883;
frost$core$Bit $tmp885 = (frost$core$Bit) {$tmp884 != NULL};
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block88; else goto block89;
block89:;
frost$core$Int $tmp887 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s888, $tmp887, &$s889);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp890 = &param0->compiler;
frost$core$Weak* $tmp891 = *$tmp890;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp892 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp891);
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block91; else goto block92;
block92:;
frost$core$Int $tmp894 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s895, $tmp894);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp896 = &$tmp891->value;
frost$core$Object* $tmp897 = *$tmp896;
frost$core$Frost$ref$frost$core$Object$Q($tmp897);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp897), $tmp877, $tmp881);
frost$core$Frost$unref$frost$core$Object$Q($tmp897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:229
org$frostlang$frostc$ASTNode* $tmp898 = *(&local8);
frost$core$Bit $tmp899 = (frost$core$Bit) {$tmp898 != NULL};
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block93; else goto block94;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:230
org$frostlang$frostc$Position $tmp901 = *(&local4);
frost$core$String* $tmp902 = *(&local5);
frost$core$String* $tmp903 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s904, $tmp902);
frost$core$String* $tmp905 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp903, &$s906);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:230:30
frost$io$File** $tmp907 = &param0->source;
frost$io$File* $tmp908 = *$tmp907;
frost$core$Bit $tmp909 = (frost$core$Bit) {$tmp908 != NULL};
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block96; else goto block97;
block97:;
frost$core$Int $tmp911 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s912, $tmp911, &$s913);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp914 = &param0->compiler;
frost$core$Weak* $tmp915 = *$tmp914;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp916 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp915);
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block99; else goto block100;
block100:;
frost$core$Int $tmp918 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s919, $tmp918);
abort(); // unreachable
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp920 = &$tmp915->value;
frost$core$Object* $tmp921 = *$tmp920;
frost$core$Frost$ref$frost$core$Object$Q($tmp921);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp921), $tmp901, $tmp905);
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
goto block94;
block94:;
org$frostlang$frostc$ASTNode* $tmp922 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp923 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp924 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp925 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp595);
org$frostlang$frostc$ASTNode* $tmp926 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:234
frost$core$Int $tmp927 = (frost$core$Int) {234u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s928, $tmp927);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:238
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp929 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp930 = *(&local0);
frost$collections$Array* $tmp931 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp929, $tmp930, ((frost$collections$ListView*) $tmp931));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$core$Method* $tmp932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$collections$Array* $tmp933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp929;

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
frost$core$Bit $tmp934 = (frost$core$Bit) {param3 == NULL};
bool $tmp935 = $tmp934.value;
if ($tmp935) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:246
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp936 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:249
frost$core$Int* $tmp937 = &param3->$rawValue;
frost$core$Int $tmp938 = *$tmp937;
frost$core$Int $tmp939 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:250:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp940 = $tmp938.value;
int64_t $tmp941 = $tmp939.value;
bool $tmp942 = $tmp940 == $tmp941;
frost$core$Bit $tmp943 = (frost$core$Bit) {$tmp942};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp945 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp946 = *$tmp945;
*(&local1) = $tmp946;
frost$core$String** $tmp947 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp948 = *$tmp947;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
frost$core$String* $tmp949 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
*(&local2) = $tmp948;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:251
frost$core$String* $tmp950 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
frost$core$String* $tmp951 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
*(&local0) = $tmp950;
frost$core$String* $tmp952 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:254
frost$core$Int $tmp953 = (frost$core$Int) {254u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s954, $tmp953);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:258
org$frostlang$frostc$Annotations* $tmp955 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
org$frostlang$frostc$Annotations* $tmp956 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local3) = $tmp955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:259
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:260
frost$core$Int* $tmp957 = &param5->$rawValue;
frost$core$Int $tmp958 = *$tmp957;
frost$core$Int $tmp959 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:261:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp960 = $tmp958.value;
int64_t $tmp961 = $tmp959.value;
bool $tmp962 = $tmp960 == $tmp961;
frost$core$Bit $tmp963 = (frost$core$Bit) {$tmp962};
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp965 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp966 = *$tmp965;
org$frostlang$frostc$Variable$Kind* $tmp967 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp968 = *$tmp967;
*(&local5) = $tmp968;
org$frostlang$frostc$FixedArray** $tmp969 = (org$frostlang$frostc$FixedArray**) (param5->$data + 32);
org$frostlang$frostc$FixedArray* $tmp970 = *$tmp969;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp970));
org$frostlang$frostc$FixedArray* $tmp971 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp971));
*(&local6) = $tmp970;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:262
org$frostlang$frostc$Variable$Kind $tmp972 = *(&local5);
frost$core$Int $tmp973 = $tmp972.$rawValue;
frost$core$Int $tmp974 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:263:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp975 = $tmp973.value;
int64_t $tmp976 = $tmp974.value;
bool $tmp977 = $tmp975 == $tmp976;
frost$core$Bit $tmp978 = (frost$core$Bit) {$tmp977};
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:264
frost$core$Int $tmp980 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:264:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp981 = &(&local8)->$rawValue;
*$tmp981 = $tmp980;
org$frostlang$frostc$FieldDecl$Kind $tmp982 = *(&local8);
*(&local7) = $tmp982;
org$frostlang$frostc$FieldDecl$Kind $tmp983 = *(&local7);
*(&local4) = $tmp983;
goto block12;
block14:;
frost$core$Int $tmp984 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:266:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp985 = $tmp973.value;
int64_t $tmp986 = $tmp984.value;
bool $tmp987 = $tmp985 == $tmp986;
frost$core$Bit $tmp988 = (frost$core$Bit) {$tmp987};
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:267
frost$core$Int $tmp990 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:267:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp991 = &(&local10)->$rawValue;
*$tmp991 = $tmp990;
org$frostlang$frostc$FieldDecl$Kind $tmp992 = *(&local10);
*(&local9) = $tmp992;
org$frostlang$frostc$FieldDecl$Kind $tmp993 = *(&local9);
*(&local4) = $tmp993;
goto block12;
block18:;
frost$core$Int $tmp994 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:269:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp995 = $tmp973.value;
int64_t $tmp996 = $tmp994.value;
bool $tmp997 = $tmp995 == $tmp996;
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997};
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:270
frost$core$Int $tmp1000 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:270:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1001 = &(&local12)->$rawValue;
*$tmp1001 = $tmp1000;
org$frostlang$frostc$FieldDecl$Kind $tmp1002 = *(&local12);
*(&local11) = $tmp1002;
org$frostlang$frostc$FieldDecl$Kind $tmp1003 = *(&local11);
*(&local4) = $tmp1003;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:271
org$frostlang$frostc$Annotations* $tmp1004 = *(&local3);
frost$core$Int* $tmp1005 = &$tmp1004->flags;
frost$core$Int $tmp1006 = *$tmp1005;
frost$core$Int $tmp1007 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:271:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp1008 = $tmp1006.value;
int64_t $tmp1009 = $tmp1007.value;
int64_t $tmp1010 = $tmp1008 | $tmp1009;
frost$core$Int $tmp1011 = (frost$core$Int) {$tmp1010};
frost$core$Int* $tmp1012 = &$tmp1004->flags;
*$tmp1012 = $tmp1011;
goto block12;
block22:;
frost$core$Int $tmp1013 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:273:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1014 = $tmp973.value;
int64_t $tmp1015 = $tmp1013.value;
bool $tmp1016 = $tmp1014 == $tmp1015;
frost$core$Bit $tmp1017 = (frost$core$Bit) {$tmp1016};
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block26; else goto block12;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:274
frost$core$Int $tmp1019 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:274:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp1020 = &(&local14)->$rawValue;
*$tmp1020 = $tmp1019;
org$frostlang$frostc$FieldDecl$Kind $tmp1021 = *(&local14);
*(&local13) = $tmp1021;
org$frostlang$frostc$FieldDecl$Kind $tmp1022 = *(&local13);
*(&local4) = $tmp1022;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:277
org$frostlang$frostc$FixedArray* $tmp1023 = *(&local6);
ITable* $tmp1024 = ((frost$collections$Iterable*) $tmp1023)->$class->itable;
while ($tmp1024->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1024 = $tmp1024->next;
}
$fn1026 $tmp1025 = $tmp1024->methods[0];
frost$collections$Iterator* $tmp1027 = $tmp1025(((frost$collections$Iterable*) $tmp1023));
goto block29;
block29:;
ITable* $tmp1028 = $tmp1027->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$core$Bit $tmp1031 = $tmp1029($tmp1027);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block31; else goto block30;
block30:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1033 = $tmp1027->$class->itable;
while ($tmp1033->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1033 = $tmp1033->next;
}
$fn1035 $tmp1034 = $tmp1033->methods[1];
frost$core$Object* $tmp1036 = $tmp1034($tmp1027);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1036)));
org$frostlang$frostc$ASTNode* $tmp1037 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1036);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:278
org$frostlang$frostc$ASTNode* $tmp1038 = *(&local15);
frost$core$Int* $tmp1039 = &$tmp1038->$rawValue;
frost$core$Int $tmp1040 = *$tmp1039;
frost$core$Int $tmp1041 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:279:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1042 = $tmp1040.value;
int64_t $tmp1043 = $tmp1041.value;
bool $tmp1044 = $tmp1042 == $tmp1043;
frost$core$Bit $tmp1045 = (frost$core$Bit) {$tmp1044};
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp1047 = (org$frostlang$frostc$Position*) ($tmp1038->$data + 0);
org$frostlang$frostc$Position $tmp1048 = *$tmp1047;
*(&local16) = $tmp1048;
org$frostlang$frostc$ASTNode** $tmp1049 = (org$frostlang$frostc$ASTNode**) ($tmp1038->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1050 = *$tmp1049;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
org$frostlang$frostc$ASTNode* $tmp1051 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local17) = $tmp1050;
org$frostlang$frostc$ASTNode** $tmp1052 = (org$frostlang$frostc$ASTNode**) ($tmp1038->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1053 = *$tmp1052;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
org$frostlang$frostc$ASTNode* $tmp1054 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local18) = $tmp1053;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:280
*(&local19) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:281
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:282
org$frostlang$frostc$ASTNode* $tmp1055 = *(&local17);
frost$core$Int* $tmp1056 = &$tmp1055->$rawValue;
frost$core$Int $tmp1057 = *$tmp1056;
frost$core$Int $tmp1058 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:283:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1059 = $tmp1057.value;
int64_t $tmp1060 = $tmp1058.value;
bool $tmp1061 = $tmp1059 == $tmp1060;
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp1064 = (org$frostlang$frostc$Position*) ($tmp1055->$data + 0);
org$frostlang$frostc$Position $tmp1065 = *$tmp1064;
frost$core$String** $tmp1066 = (frost$core$String**) ($tmp1055->$data + 24);
frost$core$String* $tmp1067 = *$tmp1066;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$String* $tmp1068 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local21) = $tmp1067;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:284
frost$core$String* $tmp1069 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
frost$core$String* $tmp1070 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local19) = $tmp1069;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:285
frost$core$Weak** $tmp1071 = &param0->compiler;
frost$core$Weak* $tmp1072 = *$tmp1071;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:285:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1073 = &$tmp1072->_valid;
frost$core$Bit $tmp1074 = *$tmp1073;
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block42; else goto block43;
block43:;
frost$core$Int $tmp1076 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1077, $tmp1076);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1078 = &$tmp1072->value;
frost$core$Object* $tmp1079 = *$tmp1078;
frost$core$Frost$ref$frost$core$Object$Q($tmp1079);
org$frostlang$frostc$Type** $tmp1080 = &((org$frostlang$frostc$Compiler*) $tmp1079)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1081 = *$tmp1080;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
org$frostlang$frostc$Type* $tmp1082 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local20) = $tmp1081;
frost$core$Frost$unref$frost$core$Object$Q($tmp1079);
frost$core$String* $tmp1083 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local21) = ((frost$core$String*) NULL);
goto block36;
block38:;
frost$core$Int $tmp1084 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:287:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1085 = $tmp1057.value;
int64_t $tmp1086 = $tmp1084.value;
bool $tmp1087 = $tmp1085 == $tmp1086;
frost$core$Bit $tmp1088 = (frost$core$Bit) {$tmp1087};
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1090 = (org$frostlang$frostc$Position*) ($tmp1055->$data + 0);
org$frostlang$frostc$Position $tmp1091 = *$tmp1090;
frost$core$String** $tmp1092 = (frost$core$String**) ($tmp1055->$data + 24);
frost$core$String* $tmp1093 = *$tmp1092;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$String* $tmp1094 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local22) = $tmp1093;
org$frostlang$frostc$ASTNode** $tmp1095 = (org$frostlang$frostc$ASTNode**) ($tmp1055->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1096 = *$tmp1095;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
org$frostlang$frostc$ASTNode* $tmp1097 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local23) = $tmp1096;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:288
frost$core$String* $tmp1098 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
frost$core$String* $tmp1099 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local19) = $tmp1098;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:289
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local23);
org$frostlang$frostc$Type* $tmp1101 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1100);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
org$frostlang$frostc$Type* $tmp1102 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local20) = $tmp1101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
org$frostlang$frostc$ASTNode* $tmp1103 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1104 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1104));
*(&local22) = ((frost$core$String*) NULL);
goto block36;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:292
frost$core$Int $tmp1105 = (frost$core$Int) {292u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1106, $tmp1105);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:295
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:296
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local18);
frost$core$Bit $tmp1108 = (frost$core$Bit) {$tmp1107 == NULL};
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block51; else goto block49;
block51:;
org$frostlang$frostc$Annotations* $tmp1110 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Scanner.frost:296:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:154
frost$core$Int* $tmp1111 = &$tmp1110->flags;
frost$core$Int $tmp1112 = *$tmp1111;
frost$core$Int $tmp1113 = (frost$core$Int) {4096u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1114 = $tmp1112.value;
int64_t $tmp1115 = $tmp1113.value;
int64_t $tmp1116 = $tmp1114 & $tmp1115;
frost$core$Int $tmp1117 = (frost$core$Int) {$tmp1116};
frost$core$Int $tmp1118 = (frost$core$Int) {0u};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
bool $tmp1121 = $tmp1119 != $tmp1120;
frost$core$Bit $tmp1122 = (frost$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block50; else goto block49;
block50:;
org$frostlang$frostc$Type* $tmp1124 = *(&local20);
org$frostlang$frostc$Type$Kind* $tmp1125 = &$tmp1124->typeKind;
org$frostlang$frostc$Type$Kind $tmp1126 = *$tmp1125;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1127;
$tmp1127 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1127->value = $tmp1126;
frost$core$Int $tmp1128 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Scanner.frost:297:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp1129 = &(&local26)->$rawValue;
*$tmp1129 = $tmp1128;
org$frostlang$frostc$Type$Kind $tmp1130 = *(&local26);
*(&local25) = $tmp1130;
org$frostlang$frostc$Type$Kind $tmp1131 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1132;
$tmp1132 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1132->value = $tmp1131;
ITable* $tmp1133 = ((frost$core$Equatable*) $tmp1127)->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
frost$core$Bit $tmp1136 = $tmp1134(((frost$core$Equatable*) $tmp1127), ((frost$core$Equatable*) $tmp1132));
bool $tmp1137 = $tmp1136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1132)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1127)));
if ($tmp1137) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:298
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1138 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1139 = (frost$core$Int) {31u};
org$frostlang$frostc$Position $tmp1140 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position($tmp1138, $tmp1139, $tmp1140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
org$frostlang$frostc$ASTNode* $tmp1141 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local24) = $tmp1138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
goto block48;
block49:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:301
org$frostlang$frostc$ASTNode* $tmp1142 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
org$frostlang$frostc$ASTNode* $tmp1143 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local24) = $tmp1142;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:303
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp1144 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp1145 = *(&local16);
frost$core$String* $tmp1146 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1147 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp1148 = *(&local4);
frost$core$String* $tmp1149 = *(&local19);
org$frostlang$frostc$Type* $tmp1150 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp1151 = *(&local24);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp1144, param1, $tmp1145, $tmp1146, $tmp1147, $tmp1148, $tmp1149, $tmp1150, $tmp1151);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
org$frostlang$frostc$FieldDecl* $tmp1152 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local27) = $tmp1144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:305
org$frostlang$frostc$SymbolTable** $tmp1153 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1154 = *$tmp1153;
org$frostlang$frostc$FieldDecl* $tmp1155 = *(&local27);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:305:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1156 = &((org$frostlang$frostc$Symbol*) $tmp1155)->name;
frost$core$String* $tmp1157 = *$tmp1156;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1154, ((org$frostlang$frostc$Symbol*) $tmp1155), $tmp1157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:306
frost$collections$Array** $tmp1158 = &param1->fields;
frost$collections$Array* $tmp1159 = *$tmp1158;
org$frostlang$frostc$FieldDecl* $tmp1160 = *(&local27);
frost$collections$Array$add$frost$collections$Array$T($tmp1159, ((frost$core$Object*) $tmp1160));
org$frostlang$frostc$FieldDecl* $tmp1161 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1162 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp1163 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1164 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1165 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1166 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1036);
org$frostlang$frostc$ASTNode* $tmp1167 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:309
frost$core$Int $tmp1168 = (frost$core$Int) {309u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1169, $tmp1168);
abort(); // unreachable
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
org$frostlang$frostc$FixedArray* $tmp1170 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$Annotations* $tmp1171 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local0) = ((frost$core$String*) NULL);
return;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:315
frost$core$Int $tmp1173 = (frost$core$Int) {315u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1174, $tmp1173);
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
frost$core$Int* $tmp1175 = &param1->$rawValue;
frost$core$Int $tmp1176 = *$tmp1175;
frost$core$Int $tmp1177 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:323:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1178 = $tmp1176.value;
int64_t $tmp1179 = $tmp1177.value;
bool $tmp1180 = $tmp1178 == $tmp1179;
frost$core$Bit $tmp1181 = (frost$core$Bit) {$tmp1180};
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1183 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1184 = *$tmp1183;
org$frostlang$frostc$FixedArray** $tmp1185 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1186 = *$tmp1185;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
org$frostlang$frostc$FixedArray* $tmp1187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local0) = $tmp1186;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:324
frost$core$Int $tmp1188 = (frost$core$Int) {0u};
*(&local1) = $tmp1188;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:325
org$frostlang$frostc$FixedArray* $tmp1189 = *(&local0);
ITable* $tmp1190 = ((frost$collections$Iterable*) $tmp1189)->$class->itable;
while ($tmp1190->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1190 = $tmp1190->next;
}
$fn1192 $tmp1191 = $tmp1190->methods[0];
frost$collections$Iterator* $tmp1193 = $tmp1191(((frost$collections$Iterable*) $tmp1189));
goto block5;
block5:;
ITable* $tmp1194 = $tmp1193->$class->itable;
while ($tmp1194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1194 = $tmp1194->next;
}
$fn1196 $tmp1195 = $tmp1194->methods[0];
frost$core$Bit $tmp1197 = $tmp1195($tmp1193);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1199 = $tmp1193->$class->itable;
while ($tmp1199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1199 = $tmp1199->next;
}
$fn1201 $tmp1200 = $tmp1199->methods[1];
frost$core$Object* $tmp1202 = $tmp1200($tmp1193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1202)));
org$frostlang$frostc$ASTNode* $tmp1203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1202);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:326
frost$core$Int $tmp1204 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1205 = *(&local2);
frost$core$Int $tmp1206 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1205);
int64_t $tmp1207 = $tmp1204.value;
int64_t $tmp1208 = $tmp1206.value;
int64_t $tmp1209 = $tmp1207 + $tmp1208;
frost$core$Int $tmp1210 = (frost$core$Int) {$tmp1209};
*(&local1) = $tmp1210;
frost$core$Frost$unref$frost$core$Object$Q($tmp1202);
org$frostlang$frostc$ASTNode* $tmp1211 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:328
frost$core$Int $tmp1212 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1213 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1212;
block3:;
frost$core$Int $tmp1214 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:330:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1215 = $tmp1176.value;
int64_t $tmp1216 = $tmp1214.value;
bool $tmp1217 = $tmp1215 == $tmp1216;
frost$core$Bit $tmp1218 = (frost$core$Bit) {$tmp1217};
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1220 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1221 = *$tmp1220;
org$frostlang$frostc$ASTNode** $tmp1222 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1223 = *$tmp1222;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
org$frostlang$frostc$ASTNode* $tmp1224 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local3) = $tmp1223;
org$frostlang$frostc$ASTNode** $tmp1225 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1226 = *$tmp1225;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:331
org$frostlang$frostc$ASTNode* $tmp1227 = *(&local3);
frost$core$Int $tmp1228 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1227);
org$frostlang$frostc$ASTNode* $tmp1229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1228;
block9:;
frost$core$Int $tmp1230 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:333:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1231 = $tmp1176.value;
int64_t $tmp1232 = $tmp1230.value;
bool $tmp1233 = $tmp1231 == $tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:334
frost$core$Int $tmp1236 = (frost$core$Int) {0u};
return $tmp1236;
block12:;
frost$core$Int $tmp1237 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:336:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1238 = $tmp1176.value;
int64_t $tmp1239 = $tmp1237.value;
bool $tmp1240 = $tmp1238 == $tmp1239;
frost$core$Bit $tmp1241 = (frost$core$Bit) {$tmp1240};
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:337
frost$core$Int $tmp1243 = (frost$core$Int) {0u};
return $tmp1243;
block15:;
frost$core$Int $tmp1244 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:339:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1245 = $tmp1176.value;
int64_t $tmp1246 = $tmp1244.value;
bool $tmp1247 = $tmp1245 == $tmp1246;
frost$core$Bit $tmp1248 = (frost$core$Bit) {$tmp1247};
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp1250 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1251 = *$tmp1250;
org$frostlang$frostc$ASTNode** $tmp1252 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1253 = *$tmp1252;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local4) = $tmp1253;
org$frostlang$frostc$expression$Binary$Operator* $tmp1255 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp1256 = *$tmp1255;
org$frostlang$frostc$ASTNode** $tmp1257 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1258 = *$tmp1257;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
org$frostlang$frostc$ASTNode* $tmp1259 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1259));
*(&local5) = $tmp1258;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:340
frost$core$Int $tmp1260 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode* $tmp1261 = *(&local4);
frost$core$Int $tmp1262 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1261);
int64_t $tmp1263 = $tmp1260.value;
int64_t $tmp1264 = $tmp1262.value;
int64_t $tmp1265 = $tmp1263 + $tmp1264;
frost$core$Int $tmp1266 = (frost$core$Int) {$tmp1265};
org$frostlang$frostc$ASTNode* $tmp1267 = *(&local5);
frost$core$Int $tmp1268 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1267);
int64_t $tmp1269 = $tmp1266.value;
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269 + $tmp1270;
frost$core$Int $tmp1272 = (frost$core$Int) {$tmp1271};
org$frostlang$frostc$ASTNode* $tmp1273 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1274 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1272;
block18:;
frost$core$Int $tmp1275 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:342:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1276 = $tmp1176.value;
int64_t $tmp1277 = $tmp1275.value;
bool $tmp1278 = $tmp1276 == $tmp1277;
frost$core$Bit $tmp1279 = (frost$core$Bit) {$tmp1278};
bool $tmp1280 = $tmp1279.value;
if ($tmp1280) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:343
frost$core$Int $tmp1281 = (frost$core$Int) {1u};
return $tmp1281;
block21:;
frost$core$Int $tmp1282 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:345:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1283 = $tmp1176.value;
int64_t $tmp1284 = $tmp1282.value;
bool $tmp1285 = $tmp1283 == $tmp1284;
frost$core$Bit $tmp1286 = (frost$core$Bit) {$tmp1285};
bool $tmp1287 = $tmp1286.value;
if ($tmp1287) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp1288 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1289 = *$tmp1288;
org$frostlang$frostc$FixedArray** $tmp1290 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1291 = *$tmp1290;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
org$frostlang$frostc$FixedArray* $tmp1292 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local6) = $tmp1291;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:346
frost$core$Int $tmp1293 = (frost$core$Int) {0u};
*(&local7) = $tmp1293;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:347
org$frostlang$frostc$FixedArray* $tmp1294 = *(&local6);
ITable* $tmp1295 = ((frost$collections$Iterable*) $tmp1294)->$class->itable;
while ($tmp1295->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1295 = $tmp1295->next;
}
$fn1297 $tmp1296 = $tmp1295->methods[0];
frost$collections$Iterator* $tmp1298 = $tmp1296(((frost$collections$Iterable*) $tmp1294));
goto block26;
block26:;
ITable* $tmp1299 = $tmp1298->$class->itable;
while ($tmp1299->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1299 = $tmp1299->next;
}
$fn1301 $tmp1300 = $tmp1299->methods[0];
frost$core$Bit $tmp1302 = $tmp1300($tmp1298);
bool $tmp1303 = $tmp1302.value;
if ($tmp1303) goto block28; else goto block27;
block27:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1304 = $tmp1298->$class->itable;
while ($tmp1304->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1304 = $tmp1304->next;
}
$fn1306 $tmp1305 = $tmp1304->methods[1];
frost$core$Object* $tmp1307 = $tmp1305($tmp1298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1307)));
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1307);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:348
frost$core$Int $tmp1309 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp1310 = *(&local8);
frost$core$Int $tmp1311 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1310);
int64_t $tmp1312 = $tmp1309.value;
int64_t $tmp1313 = $tmp1311.value;
int64_t $tmp1314 = $tmp1312 + $tmp1313;
frost$core$Int $tmp1315 = (frost$core$Int) {$tmp1314};
*(&local7) = $tmp1315;
frost$core$Frost$unref$frost$core$Object$Q($tmp1307);
org$frostlang$frostc$ASTNode* $tmp1316 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:350
frost$core$Int $tmp1317 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1318 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1317;
block24:;
frost$core$Int $tmp1319 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:352:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1320 = $tmp1176.value;
int64_t $tmp1321 = $tmp1319.value;
bool $tmp1322 = $tmp1320 == $tmp1321;
frost$core$Bit $tmp1323 = (frost$core$Bit) {$tmp1322};
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:353
frost$core$Int $tmp1325 = (frost$core$Int) {1u};
return $tmp1325;
block30:;
frost$core$Int $tmp1326 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:355:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1327 = $tmp1176.value;
int64_t $tmp1328 = $tmp1326.value;
bool $tmp1329 = $tmp1327 == $tmp1328;
frost$core$Bit $tmp1330 = (frost$core$Bit) {$tmp1329};
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp1332 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1333 = *$tmp1332;
org$frostlang$frostc$ASTNode** $tmp1334 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1335 = *$tmp1334;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
org$frostlang$frostc$ASTNode* $tmp1336 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local9) = $tmp1335;
org$frostlang$frostc$FixedArray** $tmp1337 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1338 = *$tmp1337;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
org$frostlang$frostc$FixedArray* $tmp1339 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local10) = $tmp1338;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:356
org$frostlang$frostc$ASTNode* $tmp1340 = *(&local9);
frost$core$Int $tmp1341 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1340);
*(&local11) = $tmp1341;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:357
org$frostlang$frostc$FixedArray* $tmp1342 = *(&local10);
ITable* $tmp1343 = ((frost$collections$Iterable*) $tmp1342)->$class->itable;
while ($tmp1343->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[0];
frost$collections$Iterator* $tmp1346 = $tmp1344(((frost$collections$Iterable*) $tmp1342));
goto block35;
block35:;
ITable* $tmp1347 = $tmp1346->$class->itable;
while ($tmp1347->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1347 = $tmp1347->next;
}
$fn1349 $tmp1348 = $tmp1347->methods[0];
frost$core$Bit $tmp1350 = $tmp1348($tmp1346);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block37; else goto block36;
block36:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1352 = $tmp1346->$class->itable;
while ($tmp1352->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1352 = $tmp1352->next;
}
$fn1354 $tmp1353 = $tmp1352->methods[1];
frost$core$Object* $tmp1355 = $tmp1353($tmp1346);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1355)));
org$frostlang$frostc$ASTNode* $tmp1356 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1355);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:358
frost$core$Int $tmp1357 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1358 = *(&local12);
frost$core$Int $tmp1359 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1358);
int64_t $tmp1360 = $tmp1357.value;
int64_t $tmp1361 = $tmp1359.value;
int64_t $tmp1362 = $tmp1360 + $tmp1361;
frost$core$Int $tmp1363 = (frost$core$Int) {$tmp1362};
*(&local11) = $tmp1363;
frost$core$Frost$unref$frost$core$Object$Q($tmp1355);
org$frostlang$frostc$ASTNode* $tmp1364 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:360
frost$core$Int $tmp1365 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1366 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1367 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1365;
block33:;
frost$core$Int $tmp1368 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:362:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1369 = $tmp1176.value;
int64_t $tmp1370 = $tmp1368.value;
bool $tmp1371 = $tmp1369 == $tmp1370;
frost$core$Bit $tmp1372 = (frost$core$Bit) {$tmp1371};
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp1374 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1375 = *$tmp1374;
org$frostlang$frostc$ASTNode** $tmp1376 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1377 = *$tmp1376;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
org$frostlang$frostc$ASTNode* $tmp1378 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local13) = $tmp1377;
org$frostlang$frostc$ChoiceCase** $tmp1379 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1380 = *$tmp1379;
frost$core$Int* $tmp1381 = (frost$core$Int*) (param1->$data + 40);
frost$core$Int $tmp1382 = *$tmp1381;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:363
org$frostlang$frostc$ASTNode* $tmp1383 = *(&local13);
frost$core$Int $tmp1384 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1383);
org$frostlang$frostc$ASTNode* $tmp1385 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1384;
block39:;
frost$core$Int $tmp1386 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1387 = $tmp1176.value;
int64_t $tmp1388 = $tmp1386.value;
bool $tmp1389 = $tmp1387 == $tmp1388;
frost$core$Bit $tmp1390 = (frost$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:366
frost$core$Int $tmp1392 = (frost$core$Int) {1u};
return $tmp1392;
block42:;
frost$core$Int $tmp1393 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:368:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1394 = $tmp1176.value;
int64_t $tmp1395 = $tmp1393.value;
bool $tmp1396 = $tmp1394 == $tmp1395;
frost$core$Bit $tmp1397 = (frost$core$Bit) {$tmp1396};
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1399 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1400 = *$tmp1399;
org$frostlang$frostc$ASTNode** $tmp1401 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1402 = *$tmp1401;
org$frostlang$frostc$ASTNode** $tmp1403 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1404 = *$tmp1403;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local14) = $tmp1404;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:369
org$frostlang$frostc$ASTNode* $tmp1406 = *(&local14);
frost$core$Bit $tmp1407 = (frost$core$Bit) {$tmp1406 == NULL};
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:370
frost$core$Int $tmp1409 = (frost$core$Int) {0u};
org$frostlang$frostc$ASTNode* $tmp1410 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1409;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:372
org$frostlang$frostc$ASTNode* $tmp1411 = *(&local14);
frost$core$Int $tmp1412 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1411);
org$frostlang$frostc$ASTNode* $tmp1413 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1412;
block45:;
frost$core$Int $tmp1414 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:374:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1415 = $tmp1176.value;
int64_t $tmp1416 = $tmp1414.value;
bool $tmp1417 = $tmp1415 == $tmp1416;
frost$core$Bit $tmp1418 = (frost$core$Bit) {$tmp1417};
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Position* $tmp1420 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1421 = *$tmp1420;
frost$core$String** $tmp1422 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1423 = *$tmp1422;
org$frostlang$frostc$FixedArray** $tmp1424 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1425 = *$tmp1424;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
org$frostlang$frostc$FixedArray* $tmp1426 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local15) = $tmp1425;
org$frostlang$frostc$ASTNode** $tmp1427 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1428 = *$tmp1427;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
org$frostlang$frostc$ASTNode* $tmp1429 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local16) = $tmp1428;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:375
org$frostlang$frostc$ASTNode* $tmp1430 = *(&local16);
frost$core$Int $tmp1431 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1430);
*(&local17) = $tmp1431;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:376
org$frostlang$frostc$FixedArray* $tmp1432 = *(&local15);
ITable* $tmp1433 = ((frost$collections$Iterable*) $tmp1432)->$class->itable;
while ($tmp1433->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1433 = $tmp1433->next;
}
$fn1435 $tmp1434 = $tmp1433->methods[0];
frost$collections$Iterator* $tmp1436 = $tmp1434(((frost$collections$Iterable*) $tmp1432));
goto block52;
block52:;
ITable* $tmp1437 = $tmp1436->$class->itable;
while ($tmp1437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1437 = $tmp1437->next;
}
$fn1439 $tmp1438 = $tmp1437->methods[0];
frost$core$Bit $tmp1440 = $tmp1438($tmp1436);
bool $tmp1441 = $tmp1440.value;
if ($tmp1441) goto block54; else goto block53;
block53:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1442 = $tmp1436->$class->itable;
while ($tmp1442->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1442 = $tmp1442->next;
}
$fn1444 $tmp1443 = $tmp1442->methods[1];
frost$core$Object* $tmp1445 = $tmp1443($tmp1436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1445)));
org$frostlang$frostc$ASTNode* $tmp1446 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:377
frost$core$Int $tmp1447 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1448 = *(&local18);
frost$core$Int $tmp1449 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1448);
int64_t $tmp1450 = $tmp1447.value;
int64_t $tmp1451 = $tmp1449.value;
int64_t $tmp1452 = $tmp1450 + $tmp1451;
frost$core$Int $tmp1453 = (frost$core$Int) {$tmp1452};
*(&local17) = $tmp1453;
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
org$frostlang$frostc$ASTNode* $tmp1454 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:379
frost$core$Int $tmp1455 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1456 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1457 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1455;
block50:;
frost$core$Int $tmp1458 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:381:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1459 = $tmp1176.value;
int64_t $tmp1460 = $tmp1458.value;
bool $tmp1461 = $tmp1459 == $tmp1460;
frost$core$Bit $tmp1462 = (frost$core$Bit) {$tmp1461};
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1464 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1465 = *$tmp1464;
org$frostlang$frostc$ASTNode** $tmp1466 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1467 = *$tmp1466;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
org$frostlang$frostc$ASTNode* $tmp1468 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local19) = $tmp1467;
frost$core$String** $tmp1469 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1470 = *$tmp1469;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:382
org$frostlang$frostc$ASTNode* $tmp1471 = *(&local19);
frost$core$Int $tmp1472 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1471);
org$frostlang$frostc$ASTNode* $tmp1473 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1472;
block56:;
frost$core$Int $tmp1474 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:384:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1475 = $tmp1176.value;
int64_t $tmp1476 = $tmp1474.value;
bool $tmp1477 = $tmp1475 == $tmp1476;
frost$core$Bit $tmp1478 = (frost$core$Bit) {$tmp1477};
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp1480 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1481 = *$tmp1480;
org$frostlang$frostc$ASTNode** $tmp1482 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1483 = *$tmp1482;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
org$frostlang$frostc$ASTNode* $tmp1484 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
*(&local20) = $tmp1483;
frost$core$String** $tmp1485 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1486 = *$tmp1485;
org$frostlang$frostc$FixedArray** $tmp1487 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1488 = *$tmp1487;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:385
org$frostlang$frostc$ASTNode* $tmp1489 = *(&local20);
frost$core$Int $tmp1490 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1489);
org$frostlang$frostc$ASTNode* $tmp1491 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1490;
block59:;
frost$core$Int $tmp1492 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:387:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1493 = $tmp1176.value;
int64_t $tmp1494 = $tmp1492.value;
bool $tmp1495 = $tmp1493 == $tmp1494;
frost$core$Bit $tmp1496 = (frost$core$Bit) {$tmp1495};
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Position* $tmp1498 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1499 = *$tmp1498;
frost$core$String** $tmp1500 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1501 = *$tmp1500;
org$frostlang$frostc$ASTNode** $tmp1502 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1503 = *$tmp1502;
org$frostlang$frostc$ASTNode** $tmp1504 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1505 = *$tmp1504;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
org$frostlang$frostc$ASTNode* $tmp1506 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local21) = $tmp1505;
org$frostlang$frostc$FixedArray** $tmp1507 = (org$frostlang$frostc$FixedArray**) (param1->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1508 = *$tmp1507;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
org$frostlang$frostc$FixedArray* $tmp1509 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
*(&local22) = $tmp1508;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:388
org$frostlang$frostc$ASTNode* $tmp1510 = *(&local21);
frost$core$Int $tmp1511 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1510);
*(&local23) = $tmp1511;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:389
org$frostlang$frostc$FixedArray* $tmp1512 = *(&local22);
ITable* $tmp1513 = ((frost$collections$Iterable*) $tmp1512)->$class->itable;
while ($tmp1513->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1513 = $tmp1513->next;
}
$fn1515 $tmp1514 = $tmp1513->methods[0];
frost$collections$Iterator* $tmp1516 = $tmp1514(((frost$collections$Iterable*) $tmp1512));
goto block64;
block64:;
ITable* $tmp1517 = $tmp1516->$class->itable;
while ($tmp1517->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1517 = $tmp1517->next;
}
$fn1519 $tmp1518 = $tmp1517->methods[0];
frost$core$Bit $tmp1520 = $tmp1518($tmp1516);
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block66; else goto block65;
block65:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1522 = $tmp1516->$class->itable;
while ($tmp1522->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1522 = $tmp1522->next;
}
$fn1524 $tmp1523 = $tmp1522->methods[1];
frost$core$Object* $tmp1525 = $tmp1523($tmp1516);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1525)));
org$frostlang$frostc$ASTNode* $tmp1526 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1525);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:390
frost$core$Int $tmp1527 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1528 = *(&local24);
frost$core$Int $tmp1529 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1528);
int64_t $tmp1530 = $tmp1527.value;
int64_t $tmp1531 = $tmp1529.value;
int64_t $tmp1532 = $tmp1530 + $tmp1531;
frost$core$Int $tmp1533 = (frost$core$Int) {$tmp1532};
*(&local23) = $tmp1533;
frost$core$Frost$unref$frost$core$Object$Q($tmp1525);
org$frostlang$frostc$ASTNode* $tmp1534 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block64;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:392
frost$core$Int $tmp1535 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1536 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1537 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1535;
block62:;
frost$core$Int $tmp1538 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:394:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1539 = $tmp1176.value;
int64_t $tmp1540 = $tmp1538.value;
bool $tmp1541 = $tmp1539 == $tmp1540;
frost$core$Bit $tmp1542 = (frost$core$Bit) {$tmp1541};
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:395
frost$core$Int $tmp1544 = (frost$core$Int) {0u};
return $tmp1544;
block68:;
frost$core$Int $tmp1545 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:397:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1546 = $tmp1176.value;
int64_t $tmp1547 = $tmp1545.value;
bool $tmp1548 = $tmp1546 == $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:398
frost$core$Int $tmp1551 = (frost$core$Int) {1u};
return $tmp1551;
block71:;
frost$core$Int $tmp1552 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:400:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1553 = $tmp1176.value;
int64_t $tmp1554 = $tmp1552.value;
bool $tmp1555 = $tmp1553 == $tmp1554;
frost$core$Bit $tmp1556 = (frost$core$Bit) {$tmp1555};
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1558 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1559 = *$tmp1558;
org$frostlang$frostc$ASTNode** $tmp1560 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1561 = *$tmp1560;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
org$frostlang$frostc$ASTNode* $tmp1562 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local25) = $tmp1561;
org$frostlang$frostc$FixedArray** $tmp1563 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1564 = *$tmp1563;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1564));
org$frostlang$frostc$FixedArray* $tmp1565 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
*(&local26) = $tmp1564;
org$frostlang$frostc$ASTNode** $tmp1566 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1567 = *$tmp1566;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
org$frostlang$frostc$ASTNode* $tmp1568 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
*(&local27) = $tmp1567;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:401
org$frostlang$frostc$ASTNode* $tmp1569 = *(&local25);
frost$core$Int $tmp1570 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1569);
*(&local28) = $tmp1570;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:402
org$frostlang$frostc$FixedArray* $tmp1571 = *(&local26);
ITable* $tmp1572 = ((frost$collections$Iterable*) $tmp1571)->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
frost$collections$Iterator* $tmp1575 = $tmp1573(((frost$collections$Iterable*) $tmp1571));
goto block76;
block76:;
ITable* $tmp1576 = $tmp1575->$class->itable;
while ($tmp1576->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[0];
frost$core$Bit $tmp1579 = $tmp1577($tmp1575);
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block78; else goto block77;
block77:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1581 = $tmp1575->$class->itable;
while ($tmp1581->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[1];
frost$core$Object* $tmp1584 = $tmp1582($tmp1575);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1584)));
org$frostlang$frostc$ASTNode* $tmp1585 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1584);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:403
frost$core$Int $tmp1586 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1587 = *(&local29);
frost$core$Int $tmp1588 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1587);
int64_t $tmp1589 = $tmp1586.value;
int64_t $tmp1590 = $tmp1588.value;
int64_t $tmp1591 = $tmp1589 + $tmp1590;
frost$core$Int $tmp1592 = (frost$core$Int) {$tmp1591};
*(&local28) = $tmp1592;
frost$core$Frost$unref$frost$core$Object$Q($tmp1584);
org$frostlang$frostc$ASTNode* $tmp1593 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:405
org$frostlang$frostc$ASTNode* $tmp1594 = *(&local27);
frost$core$Bit $tmp1595 = (frost$core$Bit) {$tmp1594 != NULL};
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:406
frost$core$Int $tmp1597 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1598 = *(&local27);
frost$core$Int $tmp1599 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1598);
int64_t $tmp1600 = $tmp1597.value;
int64_t $tmp1601 = $tmp1599.value;
int64_t $tmp1602 = $tmp1600 + $tmp1601;
frost$core$Int $tmp1603 = (frost$core$Int) {$tmp1602};
*(&local28) = $tmp1603;
goto block80;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:408
frost$core$Int $tmp1604 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1605 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1606 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1607 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1604;
block74:;
frost$core$Int $tmp1608 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:410:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1609 = $tmp1176.value;
int64_t $tmp1610 = $tmp1608.value;
bool $tmp1611 = $tmp1609 == $tmp1610;
frost$core$Bit $tmp1612 = (frost$core$Bit) {$tmp1611};
bool $tmp1613 = $tmp1612.value;
if ($tmp1613) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:411
frost$core$Int $tmp1614 = (frost$core$Int) {1u};
return $tmp1614;
block82:;
frost$core$Int $tmp1615 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:413:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1616 = $tmp1176.value;
int64_t $tmp1617 = $tmp1615.value;
bool $tmp1618 = $tmp1616 == $tmp1617;
frost$core$Bit $tmp1619 = (frost$core$Bit) {$tmp1618};
bool $tmp1620 = $tmp1619.value;
if ($tmp1620) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp1621 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1622 = *$tmp1621;
frost$core$String** $tmp1623 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1624 = *$tmp1623;
org$frostlang$frostc$FixedArray** $tmp1625 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1626 = *$tmp1625;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
org$frostlang$frostc$FixedArray* $tmp1627 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
*(&local30) = $tmp1626;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:414
frost$core$Int $tmp1628 = (frost$core$Int) {0u};
*(&local31) = $tmp1628;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:415
org$frostlang$frostc$FixedArray* $tmp1629 = *(&local30);
ITable* $tmp1630 = ((frost$collections$Iterable*) $tmp1629)->$class->itable;
while ($tmp1630->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1630 = $tmp1630->next;
}
$fn1632 $tmp1631 = $tmp1630->methods[0];
frost$collections$Iterator* $tmp1633 = $tmp1631(((frost$collections$Iterable*) $tmp1629));
goto block87;
block87:;
ITable* $tmp1634 = $tmp1633->$class->itable;
while ($tmp1634->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1634 = $tmp1634->next;
}
$fn1636 $tmp1635 = $tmp1634->methods[0];
frost$core$Bit $tmp1637 = $tmp1635($tmp1633);
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block89; else goto block88;
block88:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1639 = $tmp1633->$class->itable;
while ($tmp1639->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1639 = $tmp1639->next;
}
$fn1641 $tmp1640 = $tmp1639->methods[1];
frost$core$Object* $tmp1642 = $tmp1640($tmp1633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1642)));
org$frostlang$frostc$ASTNode* $tmp1643 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1642);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:416
frost$core$Int $tmp1644 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1645 = *(&local32);
frost$core$Int $tmp1646 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1645);
int64_t $tmp1647 = $tmp1644.value;
int64_t $tmp1648 = $tmp1646.value;
int64_t $tmp1649 = $tmp1647 + $tmp1648;
frost$core$Int $tmp1650 = (frost$core$Int) {$tmp1649};
*(&local31) = $tmp1650;
frost$core$Frost$unref$frost$core$Object$Q($tmp1642);
org$frostlang$frostc$ASTNode* $tmp1651 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1651));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:418
frost$core$Int $tmp1652 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1653 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1653));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1652;
block85:;
frost$core$Int $tmp1654 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:420:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1655 = $tmp1176.value;
int64_t $tmp1656 = $tmp1654.value;
bool $tmp1657 = $tmp1655 == $tmp1656;
frost$core$Bit $tmp1658 = (frost$core$Bit) {$tmp1657};
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1660 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1661 = *$tmp1660;
org$frostlang$frostc$ASTNode** $tmp1662 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1663 = *$tmp1662;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
org$frostlang$frostc$ASTNode* $tmp1664 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local33) = $tmp1663;
org$frostlang$frostc$FixedArray** $tmp1665 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1666 = *$tmp1665;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
org$frostlang$frostc$FixedArray* $tmp1667 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local34) = $tmp1666;
org$frostlang$frostc$FixedArray** $tmp1668 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1669 = *$tmp1668;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
org$frostlang$frostc$FixedArray* $tmp1670 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local35) = $tmp1669;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:421
org$frostlang$frostc$ASTNode* $tmp1671 = *(&local33);
frost$core$Int $tmp1672 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1671);
*(&local36) = $tmp1672;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:422
org$frostlang$frostc$FixedArray* $tmp1673 = *(&local34);
ITable* $tmp1674 = ((frost$collections$Iterable*) $tmp1673)->$class->itable;
while ($tmp1674->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1674 = $tmp1674->next;
}
$fn1676 $tmp1675 = $tmp1674->methods[0];
frost$collections$Iterator* $tmp1677 = $tmp1675(((frost$collections$Iterable*) $tmp1673));
goto block93;
block93:;
ITable* $tmp1678 = $tmp1677->$class->itable;
while ($tmp1678->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1678 = $tmp1678->next;
}
$fn1680 $tmp1679 = $tmp1678->methods[0];
frost$core$Bit $tmp1681 = $tmp1679($tmp1677);
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block95; else goto block94;
block94:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1683 = $tmp1677->$class->itable;
while ($tmp1683->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1683 = $tmp1683->next;
}
$fn1685 $tmp1684 = $tmp1683->methods[1];
frost$core$Object* $tmp1686 = $tmp1684($tmp1677);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1686)));
org$frostlang$frostc$ASTNode* $tmp1687 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1686);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:423
frost$core$Int $tmp1688 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1689 = *(&local37);
frost$core$Int $tmp1690 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1689);
int64_t $tmp1691 = $tmp1688.value;
int64_t $tmp1692 = $tmp1690.value;
int64_t $tmp1693 = $tmp1691 + $tmp1692;
frost$core$Int $tmp1694 = (frost$core$Int) {$tmp1693};
*(&local36) = $tmp1694;
frost$core$Frost$unref$frost$core$Object$Q($tmp1686);
org$frostlang$frostc$ASTNode* $tmp1695 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:425
org$frostlang$frostc$FixedArray* $tmp1696 = *(&local35);
frost$core$Bit $tmp1697 = (frost$core$Bit) {$tmp1696 != NULL};
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:426
org$frostlang$frostc$FixedArray* $tmp1699 = *(&local35);
ITable* $tmp1700 = ((frost$collections$Iterable*) $tmp1699)->$class->itable;
while ($tmp1700->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1700 = $tmp1700->next;
}
$fn1702 $tmp1701 = $tmp1700->methods[0];
frost$collections$Iterator* $tmp1703 = $tmp1701(((frost$collections$Iterable*) $tmp1699));
goto block98;
block98:;
ITable* $tmp1704 = $tmp1703->$class->itable;
while ($tmp1704->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1704 = $tmp1704->next;
}
$fn1706 $tmp1705 = $tmp1704->methods[0];
frost$core$Bit $tmp1707 = $tmp1705($tmp1703);
bool $tmp1708 = $tmp1707.value;
if ($tmp1708) goto block100; else goto block99;
block99:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1709 = $tmp1703->$class->itable;
while ($tmp1709->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1709 = $tmp1709->next;
}
$fn1711 $tmp1710 = $tmp1709->methods[1];
frost$core$Object* $tmp1712 = $tmp1710($tmp1703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1712)));
org$frostlang$frostc$ASTNode* $tmp1713 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1712);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:427
frost$core$Int $tmp1714 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1715 = *(&local38);
frost$core$Int $tmp1716 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1715);
int64_t $tmp1717 = $tmp1714.value;
int64_t $tmp1718 = $tmp1716.value;
int64_t $tmp1719 = $tmp1717 + $tmp1718;
frost$core$Int $tmp1720 = (frost$core$Int) {$tmp1719};
*(&local36) = $tmp1720;
frost$core$Frost$unref$frost$core$Object$Q($tmp1712);
org$frostlang$frostc$ASTNode* $tmp1721 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block98;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:430
frost$core$Int $tmp1722 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1723 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1724 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1725 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1722;
block91:;
frost$core$Int $tmp1726 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1727 = $tmp1176.value;
int64_t $tmp1728 = $tmp1726.value;
bool $tmp1729 = $tmp1727 == $tmp1728;
frost$core$Bit $tmp1730 = (frost$core$Bit) {$tmp1729};
bool $tmp1731 = $tmp1730.value;
if ($tmp1731) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:433
frost$core$Int $tmp1732 = (frost$core$Int) {10u};
frost$core$Int $tmp1733 = (frost$core$Int) {1u};
int64_t $tmp1734 = $tmp1732.value;
int64_t $tmp1735 = $tmp1733.value;
int64_t $tmp1736 = $tmp1734 + $tmp1735;
frost$core$Int $tmp1737 = (frost$core$Int) {$tmp1736};
return $tmp1737;
block102:;
frost$core$Int $tmp1738 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1739 = $tmp1176.value;
int64_t $tmp1740 = $tmp1738.value;
bool $tmp1741 = $tmp1739 == $tmp1740;
frost$core$Bit $tmp1742 = (frost$core$Bit) {$tmp1741};
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:436
frost$core$Int $tmp1744 = (frost$core$Int) {1u};
return $tmp1744;
block105:;
frost$core$Int $tmp1745 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:438:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1746 = $tmp1176.value;
int64_t $tmp1747 = $tmp1745.value;
bool $tmp1748 = $tmp1746 == $tmp1747;
frost$core$Bit $tmp1749 = (frost$core$Bit) {$tmp1748};
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:439
frost$core$Int $tmp1751 = (frost$core$Int) {0u};
return $tmp1751;
block108:;
frost$core$Int $tmp1752 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:441:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1753 = $tmp1176.value;
int64_t $tmp1754 = $tmp1752.value;
bool $tmp1755 = $tmp1753 == $tmp1754;
frost$core$Bit $tmp1756 = (frost$core$Bit) {$tmp1755};
bool $tmp1757 = $tmp1756.value;
if ($tmp1757) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:442
frost$core$Int $tmp1758 = (frost$core$Int) {1u};
return $tmp1758;
block111:;
frost$core$Int $tmp1759 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:444:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1760 = $tmp1176.value;
int64_t $tmp1761 = $tmp1759.value;
bool $tmp1762 = $tmp1760 == $tmp1761;
frost$core$Bit $tmp1763 = (frost$core$Bit) {$tmp1762};
bool $tmp1764 = $tmp1763.value;
if ($tmp1764) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:445
frost$core$Int $tmp1765 = (frost$core$Int) {1u};
return $tmp1765;
block114:;
frost$core$Int $tmp1766 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:447:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1767 = $tmp1176.value;
int64_t $tmp1768 = $tmp1766.value;
bool $tmp1769 = $tmp1767 == $tmp1768;
frost$core$Bit $tmp1770 = (frost$core$Bit) {$tmp1769};
bool $tmp1771 = $tmp1770.value;
if ($tmp1771) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:448
frost$core$Int $tmp1772 = (frost$core$Int) {1u};
return $tmp1772;
block117:;
frost$core$Int $tmp1773 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:450:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1774 = $tmp1176.value;
int64_t $tmp1775 = $tmp1773.value;
bool $tmp1776 = $tmp1774 == $tmp1775;
frost$core$Bit $tmp1777 = (frost$core$Bit) {$tmp1776};
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1779 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1780 = *$tmp1779;
org$frostlang$frostc$ASTNode** $tmp1781 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1782 = *$tmp1781;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
org$frostlang$frostc$ASTNode* $tmp1783 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local39) = $tmp1782;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:451
org$frostlang$frostc$ASTNode* $tmp1784 = *(&local39);
frost$core$Bit $tmp1785 = (frost$core$Bit) {$tmp1784 == NULL};
bool $tmp1786 = $tmp1785.value;
if ($tmp1786) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:452
frost$core$Int $tmp1787 = (frost$core$Int) {0u};
org$frostlang$frostc$ASTNode* $tmp1788 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1787;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:454
org$frostlang$frostc$ASTNode* $tmp1789 = *(&local39);
frost$core$Int $tmp1790 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1789);
org$frostlang$frostc$ASTNode* $tmp1791 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1790;
block120:;
frost$core$Int $tmp1792 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:456:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1793 = $tmp1176.value;
int64_t $tmp1794 = $tmp1792.value;
bool $tmp1795 = $tmp1793 == $tmp1794;
frost$core$Bit $tmp1796 = (frost$core$Bit) {$tmp1795};
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:457
frost$core$Int $tmp1798 = (frost$core$Int) {1u};
return $tmp1798;
block125:;
frost$core$Int $tmp1799 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:459:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1800 = $tmp1176.value;
int64_t $tmp1801 = $tmp1799.value;
bool $tmp1802 = $tmp1800 == $tmp1801;
frost$core$Bit $tmp1803 = (frost$core$Bit) {$tmp1802};
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block127; else goto block128;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:460
frost$core$Int $tmp1805 = (frost$core$Int) {1u};
return $tmp1805;
block128:;
frost$core$Int $tmp1806 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:462:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1807 = $tmp1176.value;
int64_t $tmp1808 = $tmp1806.value;
bool $tmp1809 = $tmp1807 == $tmp1808;
frost$core$Bit $tmp1810 = (frost$core$Bit) {$tmp1809};
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:463
frost$core$Int $tmp1812 = (frost$core$Int) {1u};
return $tmp1812;
block131:;
frost$core$Int $tmp1813 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:465:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1814 = $tmp1176.value;
int64_t $tmp1815 = $tmp1813.value;
bool $tmp1816 = $tmp1814 == $tmp1815;
frost$core$Bit $tmp1817 = (frost$core$Bit) {$tmp1816};
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:466
frost$core$Int $tmp1819 = (frost$core$Int) {10u};
frost$core$Int $tmp1820 = (frost$core$Int) {1u};
int64_t $tmp1821 = $tmp1819.value;
int64_t $tmp1822 = $tmp1820.value;
int64_t $tmp1823 = $tmp1821 + $tmp1822;
frost$core$Int $tmp1824 = (frost$core$Int) {$tmp1823};
return $tmp1824;
block134:;
frost$core$Int $tmp1825 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:468:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1826 = $tmp1176.value;
int64_t $tmp1827 = $tmp1825.value;
bool $tmp1828 = $tmp1826 == $tmp1827;
frost$core$Bit $tmp1829 = (frost$core$Bit) {$tmp1828};
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:469
frost$core$Int $tmp1831 = (frost$core$Int) {0u};
return $tmp1831;
block137:;
frost$core$Int $tmp1832 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:471:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1833 = $tmp1176.value;
int64_t $tmp1834 = $tmp1832.value;
bool $tmp1835 = $tmp1833 == $tmp1834;
frost$core$Bit $tmp1836 = (frost$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:472
frost$core$Int $tmp1838 = (frost$core$Int) {10u};
frost$core$Int $tmp1839 = (frost$core$Int) {1u};
int64_t $tmp1840 = $tmp1838.value;
int64_t $tmp1841 = $tmp1839.value;
int64_t $tmp1842 = $tmp1840 + $tmp1841;
frost$core$Int $tmp1843 = (frost$core$Int) {$tmp1842};
return $tmp1843;
block140:;
frost$core$Int $tmp1844 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:474:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1845 = $tmp1176.value;
int64_t $tmp1846 = $tmp1844.value;
bool $tmp1847 = $tmp1845 == $tmp1846;
frost$core$Bit $tmp1848 = (frost$core$Bit) {$tmp1847};
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1850 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1851 = *$tmp1850;
org$frostlang$frostc$expression$Unary$Operator* $tmp1852 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp1853 = *$tmp1852;
org$frostlang$frostc$ASTNode** $tmp1854 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1855 = *$tmp1854;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1855));
org$frostlang$frostc$ASTNode* $tmp1856 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local40) = $tmp1855;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:475
frost$core$Int $tmp1857 = (frost$core$Int) {1u};
org$frostlang$frostc$ASTNode* $tmp1858 = *(&local40);
frost$core$Int $tmp1859 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1858);
int64_t $tmp1860 = $tmp1857.value;
int64_t $tmp1861 = $tmp1859.value;
int64_t $tmp1862 = $tmp1860 + $tmp1861;
frost$core$Int $tmp1863 = (frost$core$Int) {$tmp1862};
org$frostlang$frostc$ASTNode* $tmp1864 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1863;
block143:;
frost$core$Int $tmp1865 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:477:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1866 = $tmp1176.value;
int64_t $tmp1867 = $tmp1865.value;
bool $tmp1868 = $tmp1866 == $tmp1867;
frost$core$Bit $tmp1869 = (frost$core$Bit) {$tmp1868};
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:478
frost$core$Int $tmp1871 = (frost$core$Int) {0u};
return $tmp1871;
block146:;
frost$core$Int $tmp1872 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:480:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1873 = $tmp1176.value;
int64_t $tmp1874 = $tmp1872.value;
bool $tmp1875 = $tmp1873 == $tmp1874;
frost$core$Bit $tmp1876 = (frost$core$Bit) {$tmp1875};
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:481
frost$core$Int $tmp1878 = (frost$core$Int) {10u};
frost$core$Int $tmp1879 = (frost$core$Int) {1u};
int64_t $tmp1880 = $tmp1878.value;
int64_t $tmp1881 = $tmp1879.value;
int64_t $tmp1882 = $tmp1880 + $tmp1881;
frost$core$Int $tmp1883 = (frost$core$Int) {$tmp1882};
return $tmp1883;
block149:;
frost$core$Int $tmp1884 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:483:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1885 = $tmp1176.value;
int64_t $tmp1886 = $tmp1884.value;
bool $tmp1887 = $tmp1885 == $tmp1886;
frost$core$Bit $tmp1888 = (frost$core$Bit) {$tmp1887};
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block151; else goto block152;
block151:;
org$frostlang$frostc$Position* $tmp1890 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1891 = *$tmp1890;
org$frostlang$frostc$Variable$Kind* $tmp1892 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp1893 = *$tmp1892;
org$frostlang$frostc$FixedArray** $tmp1894 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1895 = *$tmp1894;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
org$frostlang$frostc$FixedArray* $tmp1896 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
*(&local41) = $tmp1895;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:484
frost$core$Int $tmp1897 = (frost$core$Int) {0u};
*(&local42) = $tmp1897;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:485
org$frostlang$frostc$FixedArray* $tmp1898 = *(&local41);
ITable* $tmp1899 = ((frost$collections$Iterable*) $tmp1898)->$class->itable;
while ($tmp1899->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1899 = $tmp1899->next;
}
$fn1901 $tmp1900 = $tmp1899->methods[0];
frost$collections$Iterator* $tmp1902 = $tmp1900(((frost$collections$Iterable*) $tmp1898));
goto block154;
block154:;
ITable* $tmp1903 = $tmp1902->$class->itable;
while ($tmp1903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1903 = $tmp1903->next;
}
$fn1905 $tmp1904 = $tmp1903->methods[0];
frost$core$Bit $tmp1906 = $tmp1904($tmp1902);
bool $tmp1907 = $tmp1906.value;
if ($tmp1907) goto block156; else goto block155;
block155:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1908 = $tmp1902->$class->itable;
while ($tmp1908->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1908 = $tmp1908->next;
}
$fn1910 $tmp1909 = $tmp1908->methods[1];
frost$core$Object* $tmp1911 = $tmp1909($tmp1902);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1911)));
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1911);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:486
frost$core$Int $tmp1913 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1914 = *(&local43);
frost$core$Int $tmp1915 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1914);
int64_t $tmp1916 = $tmp1913.value;
int64_t $tmp1917 = $tmp1915.value;
int64_t $tmp1918 = $tmp1916 + $tmp1917;
frost$core$Int $tmp1919 = (frost$core$Int) {$tmp1918};
*(&local42) = $tmp1919;
frost$core$Frost$unref$frost$core$Object$Q($tmp1911);
org$frostlang$frostc$ASTNode* $tmp1920 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1920));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block154;
block156:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1902));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:488
frost$core$Int $tmp1921 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1922 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1921;
block152:;
frost$core$Int $tmp1923 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:490:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1924 = $tmp1176.value;
int64_t $tmp1925 = $tmp1923.value;
bool $tmp1926 = $tmp1924 == $tmp1925;
frost$core$Bit $tmp1927 = (frost$core$Bit) {$tmp1926};
bool $tmp1928 = $tmp1927.value;
if ($tmp1928) goto block157; else goto block158;
block157:;
org$frostlang$frostc$Position* $tmp1929 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1930 = *$tmp1929;
org$frostlang$frostc$FixedArray** $tmp1931 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1932 = *$tmp1931;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
org$frostlang$frostc$FixedArray* $tmp1933 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
*(&local44) = $tmp1932;
org$frostlang$frostc$FixedArray** $tmp1934 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1935 = *$tmp1934;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
org$frostlang$frostc$FixedArray* $tmp1936 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
*(&local45) = $tmp1935;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:491
frost$core$Int $tmp1937 = (frost$core$Int) {0u};
*(&local46) = $tmp1937;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:492
org$frostlang$frostc$FixedArray* $tmp1938 = *(&local44);
ITable* $tmp1939 = ((frost$collections$Iterable*) $tmp1938)->$class->itable;
while ($tmp1939->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1939 = $tmp1939->next;
}
$fn1941 $tmp1940 = $tmp1939->methods[0];
frost$collections$Iterator* $tmp1942 = $tmp1940(((frost$collections$Iterable*) $tmp1938));
goto block160;
block160:;
ITable* $tmp1943 = $tmp1942->$class->itable;
while ($tmp1943->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1943 = $tmp1943->next;
}
$fn1945 $tmp1944 = $tmp1943->methods[0];
frost$core$Bit $tmp1946 = $tmp1944($tmp1942);
bool $tmp1947 = $tmp1946.value;
if ($tmp1947) goto block162; else goto block161;
block161:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1948 = $tmp1942->$class->itable;
while ($tmp1948->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1948 = $tmp1948->next;
}
$fn1950 $tmp1949 = $tmp1948->methods[1];
frost$core$Object* $tmp1951 = $tmp1949($tmp1942);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1951)));
org$frostlang$frostc$ASTNode* $tmp1952 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1951);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:493
frost$core$Int $tmp1953 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1954 = *(&local47);
frost$core$Int $tmp1955 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1954);
int64_t $tmp1956 = $tmp1953.value;
int64_t $tmp1957 = $tmp1955.value;
int64_t $tmp1958 = $tmp1956 + $tmp1957;
frost$core$Int $tmp1959 = (frost$core$Int) {$tmp1958};
*(&local46) = $tmp1959;
frost$core$Frost$unref$frost$core$Object$Q($tmp1951);
org$frostlang$frostc$ASTNode* $tmp1960 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1960));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block160;
block162:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:495
org$frostlang$frostc$FixedArray* $tmp1961 = *(&local45);
ITable* $tmp1962 = ((frost$collections$Iterable*) $tmp1961)->$class->itable;
while ($tmp1962->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1962 = $tmp1962->next;
}
$fn1964 $tmp1963 = $tmp1962->methods[0];
frost$collections$Iterator* $tmp1965 = $tmp1963(((frost$collections$Iterable*) $tmp1961));
goto block163;
block163:;
ITable* $tmp1966 = $tmp1965->$class->itable;
while ($tmp1966->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1966 = $tmp1966->next;
}
$fn1968 $tmp1967 = $tmp1966->methods[0];
frost$core$Bit $tmp1969 = $tmp1967($tmp1965);
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block165; else goto block164;
block164:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1971 = $tmp1965->$class->itable;
while ($tmp1971->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1971 = $tmp1971->next;
}
$fn1973 $tmp1972 = $tmp1971->methods[1];
frost$core$Object* $tmp1974 = $tmp1972($tmp1965);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1974)));
org$frostlang$frostc$ASTNode* $tmp1975 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1974);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:496
frost$core$Int $tmp1976 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1977 = *(&local48);
frost$core$Int $tmp1978 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp1977);
int64_t $tmp1979 = $tmp1976.value;
int64_t $tmp1980 = $tmp1978.value;
int64_t $tmp1981 = $tmp1979 + $tmp1980;
frost$core$Int $tmp1982 = (frost$core$Int) {$tmp1981};
*(&local46) = $tmp1982;
frost$core$Frost$unref$frost$core$Object$Q($tmp1974);
org$frostlang$frostc$ASTNode* $tmp1983 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block163;
block165:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:498
frost$core$Int $tmp1984 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1985 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1986 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1984;
block158:;
frost$core$Int $tmp1987 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:500:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1988 = $tmp1176.value;
int64_t $tmp1989 = $tmp1987.value;
bool $tmp1990 = $tmp1988 == $tmp1989;
frost$core$Bit $tmp1991 = (frost$core$Bit) {$tmp1990};
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1993 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1994 = *$tmp1993;
frost$core$String** $tmp1995 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1996 = *$tmp1995;
org$frostlang$frostc$ASTNode** $tmp1997 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1998 = *$tmp1997;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
org$frostlang$frostc$ASTNode* $tmp1999 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
*(&local49) = $tmp1998;
org$frostlang$frostc$FixedArray** $tmp2000 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2001 = *$tmp2000;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
org$frostlang$frostc$FixedArray* $tmp2002 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
*(&local50) = $tmp2001;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:501
org$frostlang$frostc$ASTNode* $tmp2003 = *(&local49);
frost$core$Int $tmp2004 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2003);
*(&local51) = $tmp2004;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:502
org$frostlang$frostc$FixedArray* $tmp2005 = *(&local50);
ITable* $tmp2006 = ((frost$collections$Iterable*) $tmp2005)->$class->itable;
while ($tmp2006->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2006 = $tmp2006->next;
}
$fn2008 $tmp2007 = $tmp2006->methods[0];
frost$collections$Iterator* $tmp2009 = $tmp2007(((frost$collections$Iterable*) $tmp2005));
goto block169;
block169:;
ITable* $tmp2010 = $tmp2009->$class->itable;
while ($tmp2010->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2010 = $tmp2010->next;
}
$fn2012 $tmp2011 = $tmp2010->methods[0];
frost$core$Bit $tmp2013 = $tmp2011($tmp2009);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block171; else goto block170;
block170:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2015 = $tmp2009->$class->itable;
while ($tmp2015->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2015 = $tmp2015->next;
}
$fn2017 $tmp2016 = $tmp2015->methods[1];
frost$core$Object* $tmp2018 = $tmp2016($tmp2009);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2018)));
org$frostlang$frostc$ASTNode* $tmp2019 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp2018);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:503
frost$core$Int $tmp2020 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp2021 = *(&local52);
frost$core$Int $tmp2022 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2021);
int64_t $tmp2023 = $tmp2020.value;
int64_t $tmp2024 = $tmp2022.value;
int64_t $tmp2025 = $tmp2023 + $tmp2024;
frost$core$Int $tmp2026 = (frost$core$Int) {$tmp2025};
*(&local51) = $tmp2026;
frost$core$Frost$unref$frost$core$Object$Q($tmp2018);
org$frostlang$frostc$ASTNode* $tmp2027 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block169;
block171:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:505
frost$core$Int $tmp2028 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp2029 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2030 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2028;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:508
frost$core$Int $tmp2031 = (frost$core$Int) {508u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2032, $tmp2031);
abort(); // unreachable
block1:;
goto block172;
block172:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:514
frost$core$Weak** $tmp2033 = &param0->compiler;
frost$core$Weak* $tmp2034 = *$tmp2033;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:514:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2035 = &$tmp2034->_valid;
frost$core$Bit $tmp2036 = *$tmp2035;
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block7; else goto block8;
block8:;
frost$core$Int $tmp2038 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2039, $tmp2038);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2040 = &$tmp2034->value;
frost$core$Object* $tmp2041 = *$tmp2040;
frost$core$Frost$ref$frost$core$Object$Q($tmp2041);
org$frostlang$frostc$Compiler$Settings** $tmp2042 = &((org$frostlang$frostc$Compiler*) $tmp2041)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp2043 = *$tmp2042;
frost$core$Int* $tmp2044 = &$tmp2043->optimizationLevel;
frost$core$Int $tmp2045 = *$tmp2044;
frost$core$Int $tmp2046 = (frost$core$Int) {0u};
int64_t $tmp2047 = $tmp2045.value;
int64_t $tmp2048 = $tmp2046.value;
bool $tmp2049 = $tmp2047 > $tmp2048;
frost$core$Bit $tmp2050 = (frost$core$Bit) {$tmp2049};
bool $tmp2051 = $tmp2050.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2041);
if ($tmp2051) goto block4; else goto block2;
block4:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Scanner.frost:514:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp2052 = &param1->flags;
frost$core$Int $tmp2053 = *$tmp2052;
frost$core$Int $tmp2054 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2055 = $tmp2053.value;
int64_t $tmp2056 = $tmp2054.value;
int64_t $tmp2057 = $tmp2055 & $tmp2056;
frost$core$Int $tmp2058 = (frost$core$Int) {$tmp2057};
frost$core$Int $tmp2059 = (frost$core$Int) {0u};
int64_t $tmp2060 = $tmp2058.value;
int64_t $tmp2061 = $tmp2059.value;
bool $tmp2062 = $tmp2060 != $tmp2061;
frost$core$Bit $tmp2063 = (frost$core$Bit) {$tmp2062};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:514:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2064 = $tmp2063.value;
bool $tmp2065 = !$tmp2064;
frost$core$Bit $tmp2066 = (frost$core$Bit) {$tmp2065};
bool $tmp2067 = $tmp2066.value;
if ($tmp2067) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:515:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp2068 = &param1->flags;
frost$core$Int $tmp2069 = *$tmp2068;
frost$core$Int $tmp2070 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2071 = $tmp2069.value;
int64_t $tmp2072 = $tmp2070.value;
int64_t $tmp2073 = $tmp2071 & $tmp2072;
frost$core$Int $tmp2074 = (frost$core$Int) {$tmp2073};
frost$core$Int $tmp2075 = (frost$core$Int) {0u};
int64_t $tmp2076 = $tmp2074.value;
int64_t $tmp2077 = $tmp2075.value;
bool $tmp2078 = $tmp2076 != $tmp2077;
frost$core$Bit $tmp2079 = (frost$core$Bit) {$tmp2078};
bool $tmp2080 = $tmp2079.value;
if ($tmp2080) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:516
frost$core$Int $tmp2081 = (frost$core$Int) {0u};
*(&local0) = $tmp2081;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:517
ITable* $tmp2082 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp2082->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2082 = $tmp2082->next;
}
$fn2084 $tmp2083 = $tmp2082->methods[0];
frost$collections$Iterator* $tmp2085 = $tmp2083(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp2086 = $tmp2085->$class->itable;
while ($tmp2086->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2086 = $tmp2086->next;
}
$fn2088 $tmp2087 = $tmp2086->methods[0];
frost$core$Bit $tmp2089 = $tmp2087($tmp2085);
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block16; else goto block15;
block15:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2091 = $tmp2085->$class->itable;
while ($tmp2091->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2091 = $tmp2091->next;
}
$fn2093 $tmp2092 = $tmp2091->methods[1];
frost$core$Object* $tmp2094 = $tmp2092($tmp2085);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2094)));
org$frostlang$frostc$ASTNode* $tmp2095 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp2094);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:518
frost$core$Int $tmp2096 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2097 = *(&local1);
frost$core$Int $tmp2098 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int(param0, $tmp2097);
int64_t $tmp2099 = $tmp2096.value;
int64_t $tmp2100 = $tmp2098.value;
int64_t $tmp2101 = $tmp2099 + $tmp2100;
frost$core$Int $tmp2102 = (frost$core$Int) {$tmp2101};
*(&local0) = $tmp2102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:519
frost$core$Int $tmp2103 = *(&local0);
frost$core$Int $tmp2104 = (frost$core$Int) {10u};
int64_t $tmp2105 = $tmp2103.value;
int64_t $tmp2106 = $tmp2104.value;
bool $tmp2107 = $tmp2105 > $tmp2106;
frost$core$Bit $tmp2108 = (frost$core$Bit) {$tmp2107};
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:520
frost$core$Bit $tmp2110 = (frost$core$Bit) {false};
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
org$frostlang$frostc$ASTNode* $tmp2111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
return $tmp2110;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
org$frostlang$frostc$ASTNode* $tmp2112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:523
frost$core$Bit $tmp2113 = (frost$core$Bit) {true};
return $tmp2113;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:525
frost$core$Bit $tmp2114 = (frost$core$Bit) {false};
return $tmp2114;

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
frost$core$Bit $tmp2115 = (frost$core$Bit) {param3 == NULL};
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:535
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:538
frost$core$Int* $tmp2118 = &param3->$rawValue;
frost$core$Int $tmp2119 = *$tmp2118;
frost$core$Int $tmp2120 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:539:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2121 = $tmp2119.value;
int64_t $tmp2122 = $tmp2120.value;
bool $tmp2123 = $tmp2121 == $tmp2122;
frost$core$Bit $tmp2124 = (frost$core$Bit) {$tmp2123};
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2126 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2127 = *$tmp2126;
*(&local1) = $tmp2127;
frost$core$String** $tmp2128 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2129 = *$tmp2128;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$String* $tmp2130 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local2) = $tmp2129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:540
frost$core$String* $tmp2131 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
frost$core$String* $tmp2132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
*(&local0) = $tmp2131;
frost$core$String* $tmp2133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:543
frost$core$Int $tmp2134 = (frost$core$Int) {543u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2135, $tmp2134);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:547
org$frostlang$frostc$Annotations* $tmp2136 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
org$frostlang$frostc$Annotations* $tmp2137 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
*(&local3) = $tmp2136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:548
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2138;
$tmp2138 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2138->value = param5;
frost$core$Int $tmp2139 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:548:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2140 = &(&local5)->$rawValue;
*$tmp2140 = $tmp2139;
org$frostlang$frostc$MethodDecl$Kind $tmp2141 = *(&local5);
*(&local4) = $tmp2141;
org$frostlang$frostc$MethodDecl$Kind $tmp2142 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2143;
$tmp2143 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2143->value = $tmp2142;
ITable* $tmp2144 = ((frost$core$Equatable*) $tmp2138)->$class->itable;
while ($tmp2144->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2144 = $tmp2144->next;
}
$fn2146 $tmp2145 = $tmp2144->methods[1];
frost$core$Bit $tmp2147 = $tmp2145(((frost$core$Equatable*) $tmp2138), ((frost$core$Equatable*) $tmp2143));
bool $tmp2148 = $tmp2147.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2143)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2138)));
if ($tmp2148) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Annotations** $tmp2149 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2150 = *$tmp2149;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:548:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:138
frost$core$Int* $tmp2151 = &$tmp2150->flags;
frost$core$Int $tmp2152 = *$tmp2151;
frost$core$Int $tmp2153 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2154 = $tmp2152.value;
int64_t $tmp2155 = $tmp2153.value;
int64_t $tmp2156 = $tmp2154 & $tmp2155;
frost$core$Int $tmp2157 = (frost$core$Int) {$tmp2156};
frost$core$Int $tmp2158 = (frost$core$Int) {0u};
int64_t $tmp2159 = $tmp2157.value;
int64_t $tmp2160 = $tmp2158.value;
bool $tmp2161 = $tmp2159 != $tmp2160;
frost$core$Bit $tmp2162 = (frost$core$Bit) {$tmp2161};
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block8; else goto block10;
block10:;
org$frostlang$frostc$Annotations* $tmp2164 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Scanner.frost:548:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:110
frost$core$Int* $tmp2165 = &$tmp2164->flags;
frost$core$Int $tmp2166 = *$tmp2165;
frost$core$Int $tmp2167 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:110:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2168 = $tmp2166.value;
int64_t $tmp2169 = $tmp2167.value;
int64_t $tmp2170 = $tmp2168 & $tmp2169;
frost$core$Int $tmp2171 = (frost$core$Int) {$tmp2170};
frost$core$Int $tmp2172 = (frost$core$Int) {0u};
int64_t $tmp2173 = $tmp2171.value;
int64_t $tmp2174 = $tmp2172.value;
bool $tmp2175 = $tmp2173 != $tmp2174;
frost$core$Bit $tmp2176 = (frost$core$Bit) {$tmp2175};
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:549
org$frostlang$frostc$Annotations* $tmp2178 = *(&local3);
frost$core$Int* $tmp2179 = &$tmp2178->flags;
frost$core$Int $tmp2180 = *$tmp2179;
frost$core$Int $tmp2181 = (frost$core$Int) {256u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:549:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2182 = $tmp2180.value;
int64_t $tmp2183 = $tmp2181.value;
int64_t $tmp2184 = $tmp2182 | $tmp2183;
frost$core$Int $tmp2185 = (frost$core$Int) {$tmp2184};
frost$core$Int* $tmp2186 = &$tmp2178->flags;
*$tmp2186 = $tmp2185;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:551
*(&local6) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:552
frost$core$Bit $tmp2187 = (frost$core$Bit) {param7 != NULL};
bool $tmp2188 = $tmp2187.value;
if ($tmp2188) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:553
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2189 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2189);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
frost$collections$Array* $tmp2190 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local6) = $tmp2189;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:554
frost$core$String** $tmp2191 = &param1->name;
frost$core$String* $tmp2192 = *$tmp2191;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:554:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
frost$core$String* $tmp2193 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2192, &$s2194);
frost$core$String* $tmp2195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2193, param6);
frost$core$String* $tmp2196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2195, &$s2197);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$String* $tmp2198 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
*(&local7) = $tmp2196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2192));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:555
ITable* $tmp2199 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp2199->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2199 = $tmp2199->next;
}
$fn2201 $tmp2200 = $tmp2199->methods[0];
frost$collections$Iterator* $tmp2202 = $tmp2200(((frost$collections$Iterable*) param7));
goto block22;
block22:;
ITable* $tmp2203 = $tmp2202->$class->itable;
while ($tmp2203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2203 = $tmp2203->next;
}
$fn2205 $tmp2204 = $tmp2203->methods[0];
frost$core$Bit $tmp2206 = $tmp2204($tmp2202);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block24; else goto block23;
block23:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2208 = $tmp2202->$class->itable;
while ($tmp2208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2208 = $tmp2208->next;
}
$fn2210 $tmp2209 = $tmp2208->methods[1];
frost$core$Object* $tmp2211 = $tmp2209($tmp2202);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2211)));
org$frostlang$frostc$ASTNode* $tmp2212 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2212));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp2211);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:556
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:557
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:558
org$frostlang$frostc$ASTNode* $tmp2213 = *(&local8);
frost$core$Int* $tmp2214 = &$tmp2213->$rawValue;
frost$core$Int $tmp2215 = *$tmp2214;
frost$core$Int $tmp2216 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:559:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2217 = $tmp2215.value;
int64_t $tmp2218 = $tmp2216.value;
bool $tmp2219 = $tmp2217 == $tmp2218;
frost$core$Bit $tmp2220 = (frost$core$Bit) {$tmp2219};
bool $tmp2221 = $tmp2220.value;
if ($tmp2221) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2222 = (org$frostlang$frostc$Position*) ($tmp2213->$data + 0);
org$frostlang$frostc$Position $tmp2223 = *$tmp2222;
frost$core$String** $tmp2224 = (frost$core$String**) ($tmp2213->$data + 24);
frost$core$String* $tmp2225 = *$tmp2224;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2225));
frost$core$String* $tmp2226 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local11) = $tmp2225;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:560
frost$core$String* $tmp2227 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
frost$core$String* $tmp2228 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2228));
*(&local9) = $tmp2227;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:561
frost$core$Weak** $tmp2229 = &param0->compiler;
frost$core$Weak* $tmp2230 = *$tmp2229;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:561:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2231 = &$tmp2230->_valid;
frost$core$Bit $tmp2232 = *$tmp2231;
bool $tmp2233 = $tmp2232.value;
if ($tmp2233) goto block31; else goto block32;
block32:;
frost$core$Int $tmp2234 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2235, $tmp2234);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2236 = &$tmp2230->value;
frost$core$Object* $tmp2237 = *$tmp2236;
frost$core$Frost$ref$frost$core$Object$Q($tmp2237);
org$frostlang$frostc$Type** $tmp2238 = &((org$frostlang$frostc$Compiler*) $tmp2237)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2239 = *$tmp2238;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
org$frostlang$frostc$Type* $tmp2240 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
*(&local10) = $tmp2239;
frost$core$Frost$unref$frost$core$Object$Q($tmp2237);
frost$core$String* $tmp2241 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
*(&local11) = ((frost$core$String*) NULL);
goto block25;
block27:;
frost$core$Int $tmp2242 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:563:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2243 = $tmp2215.value;
int64_t $tmp2244 = $tmp2242.value;
bool $tmp2245 = $tmp2243 == $tmp2244;
frost$core$Bit $tmp2246 = (frost$core$Bit) {$tmp2245};
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp2248 = (org$frostlang$frostc$Position*) ($tmp2213->$data + 0);
org$frostlang$frostc$Position $tmp2249 = *$tmp2248;
frost$core$String** $tmp2250 = (frost$core$String**) ($tmp2213->$data + 24);
frost$core$String* $tmp2251 = *$tmp2250;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
frost$core$String* $tmp2252 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local12) = $tmp2251;
org$frostlang$frostc$ASTNode** $tmp2253 = (org$frostlang$frostc$ASTNode**) ($tmp2213->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2254 = *$tmp2253;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
org$frostlang$frostc$ASTNode* $tmp2255 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
*(&local13) = $tmp2254;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:564
frost$core$String* $tmp2256 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
frost$core$String* $tmp2257 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
*(&local9) = $tmp2256;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:565
org$frostlang$frostc$ASTNode* $tmp2258 = *(&local13);
org$frostlang$frostc$Type* $tmp2259 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2258);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
org$frostlang$frostc$Type* $tmp2260 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local10) = $tmp2259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
org$frostlang$frostc$ASTNode* $tmp2261 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2262 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local12) = ((frost$core$String*) NULL);
goto block25;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:568
frost$core$Int $tmp2263 = (frost$core$Int) {568u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2264, $tmp2263);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:571
frost$collections$Array* $tmp2265 = *(&local6);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$MethodDecl$GenericParameter));
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp2266 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2267 = *(&local8);
$fn2269 $tmp2268 = ($fn2269) $tmp2267->$class->vtable[2];
org$frostlang$frostc$Position $tmp2270 = $tmp2268($tmp2267);
frost$core$String* $tmp2271 = *(&local7);
frost$core$String* $tmp2272 = *(&local9);
org$frostlang$frostc$Type* $tmp2273 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2266, $tmp2270, $tmp2271, $tmp2272, $tmp2273);
frost$collections$Array$add$frost$collections$Array$T($tmp2265, ((frost$core$Object*) $tmp2266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
org$frostlang$frostc$Type* $tmp2274 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2275 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2275));
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2211);
org$frostlang$frostc$ASTNode* $tmp2276 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
frost$core$String* $tmp2277 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local7) = ((frost$core$String*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:576
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp2278 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local6) = ((frost$collections$Array*) NULL);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:578
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2279 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2279);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
frost$collections$Array* $tmp2280 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local14) = $tmp2279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:579
ITable* $tmp2281 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp2281->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2281 = $tmp2281->next;
}
$fn2283 $tmp2282 = $tmp2281->methods[0];
frost$collections$Iterator* $tmp2284 = $tmp2282(((frost$collections$Iterable*) param8));
goto block36;
block36:;
ITable* $tmp2285 = $tmp2284->$class->itable;
while ($tmp2285->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2285 = $tmp2285->next;
}
$fn2287 $tmp2286 = $tmp2285->methods[0];
frost$core$Bit $tmp2288 = $tmp2286($tmp2284);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block38; else goto block37;
block37:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2290 = $tmp2284->$class->itable;
while ($tmp2290->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2290 = $tmp2290->next;
}
$fn2292 $tmp2291 = $tmp2290->methods[1];
frost$core$Object* $tmp2293 = $tmp2291($tmp2284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2293)));
org$frostlang$frostc$ASTNode* $tmp2294 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2293);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:580
org$frostlang$frostc$ASTNode* $tmp2295 = *(&local15);
frost$core$Int* $tmp2296 = &$tmp2295->$rawValue;
frost$core$Int $tmp2297 = *$tmp2296;
frost$core$Int $tmp2298 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:581:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2299 = $tmp2297.value;
int64_t $tmp2300 = $tmp2298.value;
bool $tmp2301 = $tmp2299 == $tmp2300;
frost$core$Bit $tmp2302 = (frost$core$Bit) {$tmp2301};
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp2304 = (org$frostlang$frostc$Position*) ($tmp2295->$data + 0);
org$frostlang$frostc$Position $tmp2305 = *$tmp2304;
frost$core$String** $tmp2306 = (frost$core$String**) ($tmp2295->$data + 24);
frost$core$String* $tmp2307 = *$tmp2306;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
frost$core$String* $tmp2308 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
*(&local16) = $tmp2307;
org$frostlang$frostc$ASTNode** $tmp2309 = (org$frostlang$frostc$ASTNode**) ($tmp2295->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2310 = *$tmp2309;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
org$frostlang$frostc$ASTNode* $tmp2311 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local17) = $tmp2310;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:582
frost$collections$Array* $tmp2312 = *(&local14);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2313 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2314 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp2315 = *(&local17);
org$frostlang$frostc$Type* $tmp2316 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2315);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2313, $tmp2314, $tmp2316);
frost$collections$Array$add$frost$collections$Array$T($tmp2312, ((frost$core$Object*) $tmp2313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2313));
org$frostlang$frostc$ASTNode* $tmp2317 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2318 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2293);
org$frostlang$frostc$ASTNode* $tmp2319 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:585
frost$core$Int $tmp2320 = (frost$core$Int) {585u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2321, $tmp2320);
abort(); // unreachable
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:589
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:590
frost$core$Bit $tmp2322 = (frost$core$Bit) {param9 != NULL};
bool $tmp2323 = $tmp2322.value;
if ($tmp2323) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:591
org$frostlang$frostc$Type* $tmp2324 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
org$frostlang$frostc$Type* $tmp2325 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local18) = $tmp2324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:594
frost$core$Weak** $tmp2326 = &param0->compiler;
frost$core$Weak* $tmp2327 = *$tmp2326;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:594:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2328 = &$tmp2327->_valid;
frost$core$Bit $tmp2329 = *$tmp2328;
bool $tmp2330 = $tmp2329.value;
if ($tmp2330) goto block48; else goto block49;
block49:;
frost$core$Int $tmp2331 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2332, $tmp2331);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2333 = &$tmp2327->value;
frost$core$Object* $tmp2334 = *$tmp2333;
frost$core$Frost$ref$frost$core$Object$Q($tmp2334);
org$frostlang$frostc$Type** $tmp2335 = &((org$frostlang$frostc$Compiler*) $tmp2334)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2336 = *$tmp2335;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
org$frostlang$frostc$Type* $tmp2337 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2337));
*(&local18) = $tmp2336;
frost$core$Frost$unref$frost$core$Object$Q($tmp2334);
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:596
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2338;
$tmp2338 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2338->value = param5;
frost$core$Int $tmp2339 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:596:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp2340 = &(&local20)->$rawValue;
*$tmp2340 = $tmp2339;
org$frostlang$frostc$MethodDecl$Kind $tmp2341 = *(&local20);
*(&local19) = $tmp2341;
org$frostlang$frostc$MethodDecl$Kind $tmp2342 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2343;
$tmp2343 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2343->value = $tmp2342;
ITable* $tmp2344 = ((frost$core$Equatable*) $tmp2338)->$class->itable;
while ($tmp2344->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2344 = $tmp2344->next;
}
$fn2346 $tmp2345 = $tmp2344->methods[0];
frost$core$Bit $tmp2347 = $tmp2345(((frost$core$Equatable*) $tmp2338), ((frost$core$Equatable*) $tmp2343));
bool $tmp2348 = $tmp2347.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2343)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2338)));
if ($tmp2348) goto block52; else goto block51;
block52:;
org$frostlang$frostc$Type* $tmp2349 = *(&local18);
frost$core$Weak** $tmp2350 = &param0->compiler;
frost$core$Weak* $tmp2351 = *$tmp2350;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:596:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2352 = &$tmp2351->_valid;
frost$core$Bit $tmp2353 = *$tmp2352;
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block56; else goto block57;
block57:;
frost$core$Int $tmp2355 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2356, $tmp2355);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2357 = &$tmp2351->value;
frost$core$Object* $tmp2358 = *$tmp2357;
frost$core$Frost$ref$frost$core$Object$Q($tmp2358);
org$frostlang$frostc$Type** $tmp2359 = &((org$frostlang$frostc$Compiler*) $tmp2358)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2360 = *$tmp2359;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Scanner.frost:596:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:252
frost$core$String** $tmp2361 = &((org$frostlang$frostc$Symbol*) $tmp2349)->name;
frost$core$String* $tmp2362 = *$tmp2361;
frost$core$String** $tmp2363 = &((org$frostlang$frostc$Symbol*) $tmp2360)->name;
frost$core$String* $tmp2364 = *$tmp2363;
frost$core$Bit $tmp2365 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2362, $tmp2364);
bool $tmp2366 = $tmp2365.value;
if ($tmp2366) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Type$Kind* $tmp2367 = &$tmp2349->typeKind;
org$frostlang$frostc$Type$Kind $tmp2368 = *$tmp2367;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2369;
$tmp2369 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2369->value = $tmp2368;
org$frostlang$frostc$Type$Kind* $tmp2370 = &$tmp2360->typeKind;
org$frostlang$frostc$Type$Kind $tmp2371 = *$tmp2370;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2372;
$tmp2372 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2372->value = $tmp2371;
ITable* $tmp2373 = ((frost$core$Equatable*) $tmp2369)->$class->itable;
while ($tmp2373->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2373 = $tmp2373->next;
}
$fn2375 $tmp2374 = $tmp2373->methods[0];
frost$core$Bit $tmp2376 = $tmp2374(((frost$core$Equatable*) $tmp2369), ((frost$core$Equatable*) $tmp2372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2372)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2369)));
*(&local21) = $tmp2376;
goto block61;
block60:;
*(&local21) = $tmp2365;
goto block61;
block61:;
frost$core$Bit $tmp2377 = *(&local21);
bool $tmp2378 = $tmp2377.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2358);
if ($tmp2378) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:597
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:597:18
frost$io$File** $tmp2379 = &param0->source;
frost$io$File* $tmp2380 = *$tmp2379;
frost$core$Bit $tmp2381 = (frost$core$Bit) {$tmp2380 != NULL};
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block63; else goto block64;
block64:;
frost$core$Int $tmp2383 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2384, $tmp2383, &$s2385);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp2386 = &param0->compiler;
frost$core$Weak* $tmp2387 = *$tmp2386;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2388 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2387);
bool $tmp2389 = $tmp2388.value;
if ($tmp2389) goto block66; else goto block67;
block67:;
frost$core$Int $tmp2390 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2391, $tmp2390);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2392 = &$tmp2387->value;
frost$core$Object* $tmp2393 = *$tmp2392;
frost$core$Frost$ref$frost$core$Object$Q($tmp2393);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2393), param2, &$s2394);
frost$core$Frost$unref$frost$core$Object$Q($tmp2393);
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:599
frost$core$Bit $tmp2395 = (frost$core$Bit) {param10 != NULL};
bool $tmp2396 = $tmp2395.value;
if ($tmp2396) goto block70; else goto block69;
block70:;
org$frostlang$frostc$Annotations* $tmp2397 = *(&local3);
frost$core$Bit $tmp2398 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp2397, ((frost$collections$ListView*) param10));
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:600
org$frostlang$frostc$Annotations* $tmp2400 = *(&local3);
frost$core$Int* $tmp2401 = &$tmp2400->flags;
frost$core$Int $tmp2402 = *$tmp2401;
frost$core$Int $tmp2403 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:600:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2404 = $tmp2402.value;
int64_t $tmp2405 = $tmp2403.value;
int64_t $tmp2406 = $tmp2404 | $tmp2405;
frost$core$Int $tmp2407 = (frost$core$Int) {$tmp2406};
frost$core$Int* $tmp2408 = &$tmp2400->flags;
*$tmp2408 = $tmp2407;
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:602
frost$core$Bit $tmp2409 = (frost$core$Bit) {param10 == NULL};
bool $tmp2410 = $tmp2409.value;
if ($tmp2410) goto block75; else goto block73;
block75:;
org$frostlang$frostc$ClassDecl$Kind* $tmp2411 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2412 = *$tmp2411;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2413;
$tmp2413 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2413->value = $tmp2412;
frost$core$Int $tmp2414 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:602:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp2415 = &(&local23)->$rawValue;
*$tmp2415 = $tmp2414;
org$frostlang$frostc$ClassDecl$Kind $tmp2416 = *(&local23);
*(&local22) = $tmp2416;
org$frostlang$frostc$ClassDecl$Kind $tmp2417 = *(&local22);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2418;
$tmp2418 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2418->value = $tmp2417;
ITable* $tmp2419 = ((frost$core$Equatable*) $tmp2413)->$class->itable;
while ($tmp2419->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2419 = $tmp2419->next;
}
$fn2421 $tmp2420 = $tmp2419->methods[0];
frost$core$Bit $tmp2422 = $tmp2420(((frost$core$Equatable*) $tmp2413), ((frost$core$Equatable*) $tmp2418));
bool $tmp2423 = $tmp2422.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2418)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2413)));
if ($tmp2423) goto block74; else goto block73;
block74:;
org$frostlang$frostc$Annotations** $tmp2424 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2425 = *$tmp2424;
// begin inline call to function org.frostlang.frostc.Annotations.get_isStub():frost.core.Bit from Scanner.frost:603:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:174
frost$core$Int* $tmp2426 = &$tmp2425->flags;
frost$core$Int $tmp2427 = *$tmp2426;
frost$core$Int $tmp2428 = (frost$core$Int) {131072u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2429 = $tmp2427.value;
int64_t $tmp2430 = $tmp2428.value;
int64_t $tmp2431 = $tmp2429 & $tmp2430;
frost$core$Int $tmp2432 = (frost$core$Int) {$tmp2431};
frost$core$Int $tmp2433 = (frost$core$Int) {0u};
int64_t $tmp2434 = $tmp2432.value;
int64_t $tmp2435 = $tmp2433.value;
bool $tmp2436 = $tmp2434 != $tmp2435;
frost$core$Bit $tmp2437 = (frost$core$Bit) {$tmp2436};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:603:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2438 = $tmp2437.value;
bool $tmp2439 = !$tmp2438;
frost$core$Bit $tmp2440 = (frost$core$Bit) {$tmp2439};
bool $tmp2441 = $tmp2440.value;
if ($tmp2441) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:604
org$frostlang$frostc$Annotations* $tmp2442 = *(&local3);
frost$core$Int* $tmp2443 = &$tmp2442->flags;
frost$core$Int $tmp2444 = *$tmp2443;
frost$core$Int $tmp2445 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:604:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp2446 = $tmp2444.value;
int64_t $tmp2447 = $tmp2445.value;
int64_t $tmp2448 = $tmp2446 & $tmp2447;
frost$core$Int $tmp2449 = (frost$core$Int) {$tmp2448};
frost$core$Int $tmp2450 = (frost$core$Int) {0u};
int64_t $tmp2451 = $tmp2449.value;
int64_t $tmp2452 = $tmp2450.value;
bool $tmp2453 = $tmp2451 != $tmp2452;
frost$core$Bit $tmp2454 = (frost$core$Bit) {$tmp2453};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:605
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:605:22
frost$io$File** $tmp2456 = &param0->source;
frost$io$File* $tmp2457 = *$tmp2456;
frost$core$Bit $tmp2458 = (frost$core$Bit) {$tmp2457 != NULL};
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block84; else goto block85;
block85:;
frost$core$Int $tmp2460 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2461, $tmp2460, &$s2462);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp2463 = &param0->compiler;
frost$core$Weak* $tmp2464 = *$tmp2463;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2465 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2464);
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block87; else goto block88;
block88:;
frost$core$Int $tmp2467 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2468, $tmp2467);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2469 = &$tmp2464->value;
frost$core$Object* $tmp2470 = *$tmp2469;
frost$core$Frost$ref$frost$core$Object$Q($tmp2470);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2470), param2, &$s2471);
frost$core$Frost$unref$frost$core$Object$Q($tmp2470);
goto block81;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:608
org$frostlang$frostc$Annotations* $tmp2472 = *(&local3);
frost$core$Int* $tmp2473 = &$tmp2472->flags;
frost$core$Int $tmp2474 = *$tmp2473;
frost$core$Int $tmp2475 = (frost$core$Int) {512u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:608:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp2476 = $tmp2474.value;
int64_t $tmp2477 = $tmp2475.value;
int64_t $tmp2478 = $tmp2476 | $tmp2477;
frost$core$Int $tmp2479 = (frost$core$Int) {$tmp2478};
frost$core$Int* $tmp2480 = &$tmp2472->flags;
*$tmp2480 = $tmp2479;
goto block73;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:610
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2481 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp2482 = *(&local0);
org$frostlang$frostc$Annotations* $tmp2483 = *(&local3);
frost$collections$Array* $tmp2484 = *(&local6);
frost$collections$Array* $tmp2485 = *(&local14);
org$frostlang$frostc$Type* $tmp2486 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2481, param1, param2, $tmp2482, $tmp2483, param5, param6, $tmp2484, $tmp2485, $tmp2486, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
org$frostlang$frostc$Type* $tmp2487 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2488 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2489 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2490 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2491 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2481;

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
frost$core$Int* $tmp2492 = &param2->$rawValue;
frost$core$Int $tmp2493 = *$tmp2492;
frost$core$Int $tmp2494 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:616:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2495 = $tmp2493.value;
int64_t $tmp2496 = $tmp2494.value;
bool $tmp2497 = $tmp2495 == $tmp2496;
frost$core$Bit $tmp2498 = (frost$core$Bit) {$tmp2497};
bool $tmp2499 = $tmp2498.value;
if ($tmp2499) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2500 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2501 = *$tmp2500;
*(&local0) = $tmp2501;
org$frostlang$frostc$ASTNode** $tmp2502 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2503 = *$tmp2502;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local1) = $tmp2503;
org$frostlang$frostc$FixedArray** $tmp2505 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2506 = *$tmp2505;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
org$frostlang$frostc$FixedArray* $tmp2507 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local2) = $tmp2506;
org$frostlang$frostc$ASTNode** $tmp2508 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2509 = *$tmp2508;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
org$frostlang$frostc$ASTNode* $tmp2510 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local3) = $tmp2509;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:617
org$frostlang$frostc$Position $tmp2511 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2512 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2513 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2514 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp2511, $tmp2512, $tmp2513, $tmp2514);
org$frostlang$frostc$ASTNode* $tmp2515 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2516 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2517 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int $tmp2518 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:619:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2519 = $tmp2493.value;
int64_t $tmp2520 = $tmp2518.value;
bool $tmp2521 = $tmp2519 == $tmp2520;
frost$core$Bit $tmp2522 = (frost$core$Bit) {$tmp2521};
bool $tmp2523 = $tmp2522.value;
if ($tmp2523) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2524 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2525 = *$tmp2524;
*(&local4) = $tmp2525;
org$frostlang$frostc$ASTNode** $tmp2526 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2527 = *$tmp2526;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
org$frostlang$frostc$ASTNode* $tmp2528 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local5) = $tmp2527;
org$frostlang$frostc$FixedArray** $tmp2529 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2530 = *$tmp2529;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
org$frostlang$frostc$FixedArray* $tmp2531 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local6) = $tmp2530;
org$frostlang$frostc$MethodDecl$Kind* $tmp2532 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp2533 = *$tmp2532;
*(&local7) = $tmp2533;
frost$core$String** $tmp2534 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2535 = *$tmp2534;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$String* $tmp2536 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local8) = $tmp2535;
org$frostlang$frostc$FixedArray** $tmp2537 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2538 = *$tmp2537;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
org$frostlang$frostc$FixedArray* $tmp2539 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
*(&local9) = $tmp2538;
org$frostlang$frostc$FixedArray** $tmp2540 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2541 = *$tmp2540;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
org$frostlang$frostc$FixedArray* $tmp2542 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local10) = $tmp2541;
org$frostlang$frostc$ASTNode** $tmp2543 = (org$frostlang$frostc$ASTNode**) (param2->$data + 72);
org$frostlang$frostc$ASTNode* $tmp2544 = *$tmp2543;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
org$frostlang$frostc$ASTNode* $tmp2545 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local11) = $tmp2544;
org$frostlang$frostc$FixedArray** $tmp2546 = (org$frostlang$frostc$FixedArray**) (param2->$data + 80);
org$frostlang$frostc$FixedArray* $tmp2547 = *$tmp2546;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
org$frostlang$frostc$FixedArray* $tmp2548 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local12) = $tmp2547;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:621
org$frostlang$frostc$Position $tmp2549 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2550 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2551 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp2552 = *(&local7);
frost$core$String* $tmp2553 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2554 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp2555 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2556 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2557 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp2558 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp2549, $tmp2550, $tmp2551, $tmp2552, $tmp2553, $tmp2554, $tmp2555, $tmp2556, $tmp2557);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
org$frostlang$frostc$MethodDecl* $tmp2559 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
*(&local13) = $tmp2558;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:623
org$frostlang$frostc$MethodDecl* $tmp2560 = *(&local13);
frost$core$Bit $tmp2561 = (frost$core$Bit) {$tmp2560 != NULL};
bool $tmp2562 = $tmp2561.value;
if ($tmp2562) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:624
org$frostlang$frostc$SymbolTable** $tmp2563 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2564 = *$tmp2563;
org$frostlang$frostc$MethodDecl* $tmp2565 = *(&local13);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:624:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2566 = &((org$frostlang$frostc$Symbol*) $tmp2565)->name;
frost$core$String* $tmp2567 = *$tmp2566;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2564, ((org$frostlang$frostc$Symbol*) $tmp2565), $tmp2567);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:625
frost$collections$Array** $tmp2568 = &param1->methods;
frost$collections$Array* $tmp2569 = *$tmp2568;
org$frostlang$frostc$MethodDecl* $tmp2570 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp2569, ((frost$core$Object*) $tmp2570));
goto block9;
block9:;
org$frostlang$frostc$MethodDecl* $tmp2571 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2572 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2573 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2573));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2574 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2574));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2575 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2575));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2576 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2577 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2578 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
frost$core$Int $tmp2579 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:628:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2580 = $tmp2493.value;
int64_t $tmp2581 = $tmp2579.value;
bool $tmp2582 = $tmp2580 == $tmp2581;
frost$core$Bit $tmp2583 = (frost$core$Bit) {$tmp2582};
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp2585 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2586 = *$tmp2585;
*(&local14) = $tmp2586;
org$frostlang$frostc$ASTNode** $tmp2587 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2588 = *$tmp2587;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
org$frostlang$frostc$ASTNode* $tmp2589 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local15) = $tmp2588;
org$frostlang$frostc$FixedArray** $tmp2590 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2591 = *$tmp2590;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
org$frostlang$frostc$FixedArray* $tmp2592 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local16) = $tmp2591;
org$frostlang$frostc$ClassDecl$Kind* $tmp2593 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp2594 = *$tmp2593;
*(&local17) = $tmp2594;
frost$core$String** $tmp2595 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2596 = *$tmp2595;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
frost$core$String* $tmp2597 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local18) = $tmp2596;
org$frostlang$frostc$FixedArray** $tmp2598 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2599 = *$tmp2598;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2599));
org$frostlang$frostc$FixedArray* $tmp2600 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
*(&local19) = $tmp2599;
org$frostlang$frostc$FixedArray** $tmp2601 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2602 = *$tmp2601;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
org$frostlang$frostc$FixedArray* $tmp2603 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local20) = $tmp2602;
org$frostlang$frostc$FixedArray** $tmp2604 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2605 = *$tmp2604;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
org$frostlang$frostc$FixedArray* $tmp2606 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
*(&local21) = $tmp2605;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:630
frost$io$File** $tmp2607 = &param1->source;
frost$io$File* $tmp2608 = *$tmp2607;
frost$collections$MapView** $tmp2609 = &param1->aliases;
frost$collections$MapView* $tmp2610 = *$tmp2609;
frost$core$String** $tmp2611 = &param1->name;
frost$core$String* $tmp2612 = *$tmp2611;
org$frostlang$frostc$Position $tmp2613 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2614 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2615 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2616 = *(&local17);
frost$core$String* $tmp2617 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2618 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2619 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2620 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2621 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2608, $tmp2610, $tmp2612, $tmp2613, $tmp2614, $tmp2615, $tmp2616, $tmp2617, $tmp2618, $tmp2619, $tmp2620);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
org$frostlang$frostc$ClassDecl* $tmp2622 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
*(&local22) = $tmp2621;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:632
org$frostlang$frostc$ClassDecl* $tmp2623 = *(&local22);
frost$core$Bit $tmp2624 = (frost$core$Bit) {$tmp2623 != NULL};
bool $tmp2625 = $tmp2624.value;
if ($tmp2625) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:633
org$frostlang$frostc$ClassDecl* $tmp2626 = *(&local22);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2627 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2627, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
frost$core$Weak** $tmp2628 = &$tmp2626->owner;
frost$core$Weak* $tmp2629 = *$tmp2628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
frost$core$Weak** $tmp2630 = &$tmp2626->owner;
*$tmp2630 = $tmp2627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:634
frost$collections$Array** $tmp2631 = &param1->classes;
frost$collections$Array* $tmp2632 = *$tmp2631;
org$frostlang$frostc$ClassDecl* $tmp2633 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp2632, ((frost$core$Object*) $tmp2633));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:635
org$frostlang$frostc$ClassDecl* $tmp2634 = *(&local22);
frost$core$String** $tmp2635 = &$tmp2634->name;
frost$core$String* $tmp2636 = *$tmp2635;
frost$core$String** $tmp2637 = &param1->name;
frost$core$String* $tmp2638 = *$tmp2637;
frost$core$String* $tmp2639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2638, &$s2640);
frost$core$Bit $tmp2641 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2636, $tmp2639);
bool $tmp2642 = $tmp2641.value;
if ($tmp2642) goto block16; else goto block17;
block17:;
frost$core$Int $tmp2643 = (frost$core$Int) {635u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2644, $tmp2643);
abort(); // unreachable
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:636
org$frostlang$frostc$SymbolTable** $tmp2645 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2646 = *$tmp2645;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2647 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2648 = *(&local22);
frost$core$String** $tmp2649 = &$tmp2648->name;
frost$core$String* $tmp2650 = *$tmp2649;
frost$core$String** $tmp2651 = &param1->name;
frost$core$String* $tmp2652 = *$tmp2651;
// begin inline call to function frost.core.String.get_length():frost.core.Int from Scanner.frost:636:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp2653 = ((frost$collections$Iterable*) $tmp2652)->$class->itable;
while ($tmp2653->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2653 = $tmp2653->next;
}
$fn2655 $tmp2654 = $tmp2653->methods[0];
frost$collections$Iterator* $tmp2656 = $tmp2654(((frost$collections$Iterable*) $tmp2652));
ITable* $tmp2657 = $tmp2656->$class->itable;
while ($tmp2657->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2657 = $tmp2657->next;
}
$fn2659 $tmp2658 = $tmp2657->methods[2];
frost$core$Int $tmp2660 = $tmp2658($tmp2656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
frost$core$Int $tmp2661 = (frost$core$Int) {1u};
int64_t $tmp2662 = $tmp2660.value;
int64_t $tmp2663 = $tmp2661.value;
int64_t $tmp2664 = $tmp2662 + $tmp2663;
frost$core$Int $tmp2665 = (frost$core$Int) {$tmp2664};
frost$core$Bit $tmp2666 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp2667 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp2665, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp2666);
frost$core$String* $tmp2668 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp2650, $tmp2667);
org$frostlang$frostc$ClassDecl* $tmp2669 = *(&local22);
org$frostlang$frostc$Type** $tmp2670 = &$tmp2669->type;
org$frostlang$frostc$Type* $tmp2671 = *$tmp2670;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2647, $tmp2668, $tmp2671);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:636:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2672 = &((org$frostlang$frostc$Symbol*) $tmp2647)->name;
frost$core$String* $tmp2673 = *$tmp2672;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2646, ((org$frostlang$frostc$Symbol*) $tmp2647), $tmp2673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:637
org$frostlang$frostc$ClassDecl* $tmp2674 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp2675 = &$tmp2674->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2676 = *$tmp2675;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2677 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
// begin inline call to function org.frostlang.frostc.ClassDecl.simpleName():frost.core.String from Scanner.frost:637:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp2678 = &param1->name;
frost$core$String* $tmp2679 = *$tmp2678;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp2680 = frost$core$String$get_end$R$frost$core$String$Index($tmp2679);
frost$core$String$Index$nullable $tmp2681 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp2679, &$s2682, $tmp2680);
*(&local24) = $tmp2681;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp2683 = *(&local24);
frost$core$Bit $tmp2684 = (frost$core$Bit) {!$tmp2683.nonnull};
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp2686 = &param1->name;
frost$core$String* $tmp2687 = *$tmp2686;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local23) = $tmp2687;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
goto block20;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp2688 = &param1->name;
frost$core$String* $tmp2689 = *$tmp2688;
frost$core$String** $tmp2690 = &param1->name;
frost$core$String* $tmp2691 = *$tmp2690;
frost$core$String$Index$nullable $tmp2692 = *(&local24);
frost$core$String$Index $tmp2693 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2691, ((frost$core$String$Index) $tmp2692.value));
frost$core$Bit $tmp2694 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2695 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2693, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2694);
frost$core$String* $tmp2696 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2689, $tmp2695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local23) = $tmp2696;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
goto block20;
block20:;
frost$core$String* $tmp2697 = *(&local23);
org$frostlang$frostc$Type** $tmp2698 = &param1->type;
org$frostlang$frostc$Type* $tmp2699 = *$tmp2698;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2677, $tmp2697, $tmp2699);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:637:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2700 = &((org$frostlang$frostc$Symbol*) $tmp2677)->name;
frost$core$String* $tmp2701 = *$tmp2700;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2676, ((org$frostlang$frostc$Symbol*) $tmp2677), $tmp2701);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
frost$core$String* $tmp2702 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2703 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2704 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2705 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2706 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2706));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2707 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2708 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2709 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int $tmp2710 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:640:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2711 = $tmp2493.value;
int64_t $tmp2712 = $tmp2710.value;
bool $tmp2713 = $tmp2711 == $tmp2712;
frost$core$Bit $tmp2714 = (frost$core$Bit) {$tmp2713};
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2716 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2717 = *$tmp2716;
*(&local25) = $tmp2717;
org$frostlang$frostc$ASTNode** $tmp2718 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2719 = *$tmp2718;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2720));
*(&local26) = $tmp2719;
frost$core$String** $tmp2721 = (frost$core$String**) (param2->$data + 32);
frost$core$String* $tmp2722 = *$tmp2721;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
frost$core$String* $tmp2723 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local27) = $tmp2722;
org$frostlang$frostc$FixedArray** $tmp2724 = (org$frostlang$frostc$FixedArray**) (param2->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2725 = *$tmp2724;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
org$frostlang$frostc$FixedArray* $tmp2726 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
*(&local28) = $tmp2725;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:641
org$frostlang$frostc$Position $tmp2727 = *(&local25);
org$frostlang$frostc$ASTNode* $tmp2728 = *(&local26);
frost$core$String* $tmp2729 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp2730 = *(&local28);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2727, $tmp2728, $tmp2729, $tmp2730);
org$frostlang$frostc$FixedArray* $tmp2731 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2732 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2733 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:644
frost$core$Int $tmp2734 = (frost$core$Int) {644u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:644:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn2736 $tmp2735 = ($fn2736) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp2737 = $tmp2735(((frost$core$Object*) param2));
frost$core$String* $tmp2738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2739, $tmp2737);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
frost$core$String* $tmp2740 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2738, &$s2741);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2742, $tmp2734, $tmp2740);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2738));
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
frost$core$Bit $tmp2743 = (frost$core$Bit) {param3 == NULL};
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:657
frost$core$Int* $tmp2746 = &param3->$rawValue;
frost$core$Int $tmp2747 = *$tmp2746;
frost$core$Int $tmp2748 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:658:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2749 = $tmp2747.value;
int64_t $tmp2750 = $tmp2748.value;
bool $tmp2751 = $tmp2749 == $tmp2750;
frost$core$Bit $tmp2752 = (frost$core$Bit) {$tmp2751};
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2754 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2755 = *$tmp2754;
*(&local1) = $tmp2755;
frost$core$String** $tmp2756 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2757 = *$tmp2756;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
frost$core$String* $tmp2758 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local2) = $tmp2757;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:659
frost$core$String* $tmp2759 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
frost$core$String* $tmp2760 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local0) = $tmp2759;
frost$core$String* $tmp2761 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:662
frost$core$Int $tmp2762 = (frost$core$Int) {662u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2763, $tmp2762);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:666
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2764 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2764);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
frost$collections$Array* $tmp2765 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
*(&local3) = $tmp2764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:667
ITable* $tmp2766 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2766->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2766 = $tmp2766->next;
}
$fn2768 $tmp2767 = $tmp2766->methods[0];
frost$collections$Iterator* $tmp2769 = $tmp2767(((frost$collections$Iterable*) param5));
goto block8;
block8:;
ITable* $tmp2770 = $tmp2769->$class->itable;
while ($tmp2770->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2770 = $tmp2770->next;
}
$fn2772 $tmp2771 = $tmp2770->methods[0];
frost$core$Bit $tmp2773 = $tmp2771($tmp2769);
bool $tmp2774 = $tmp2773.value;
if ($tmp2774) goto block10; else goto block9;
block9:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2775 = $tmp2769->$class->itable;
while ($tmp2775->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2775 = $tmp2775->next;
}
$fn2777 $tmp2776 = $tmp2775->methods[1];
frost$core$Object* $tmp2778 = $tmp2776($tmp2769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2778)));
org$frostlang$frostc$ASTNode* $tmp2779 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2778);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:668
frost$collections$Array* $tmp2780 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2781 = *(&local4);
org$frostlang$frostc$Type* $tmp2782 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2781);
frost$collections$Array$add$frost$collections$Array$T($tmp2780, ((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
frost$core$Frost$unref$frost$core$Object$Q($tmp2778);
org$frostlang$frostc$ASTNode* $tmp2783 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2769));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:670
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ChoiceCase));
org$frostlang$frostc$ChoiceCase* $tmp2784 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2785 = *(&local0);
frost$collections$Array** $tmp2786 = &param1->choiceCases;
frost$collections$Array* $tmp2787 = *$tmp2786;
ITable* $tmp2788 = ((frost$collections$CollectionView*) $tmp2787)->$class->itable;
while ($tmp2788->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2788 = $tmp2788->next;
}
$fn2790 $tmp2789 = $tmp2788->methods[0];
frost$core$Int $tmp2791 = $tmp2789(((frost$collections$CollectionView*) $tmp2787));
frost$collections$Array* $tmp2792 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2784, param1, param2, param4, $tmp2785, $tmp2791, ((frost$collections$ListView*) $tmp2792));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
org$frostlang$frostc$ChoiceCase* $tmp2793 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local5) = $tmp2784;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:672
frost$collections$Array** $tmp2794 = &param1->choiceCases;
frost$collections$Array* $tmp2795 = *$tmp2794;
org$frostlang$frostc$ChoiceCase* $tmp2796 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2795, ((frost$core$Object*) $tmp2796));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:673
org$frostlang$frostc$SymbolTable** $tmp2797 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2798 = *$tmp2797;
org$frostlang$frostc$ChoiceCase* $tmp2799 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:673:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2800 = &((org$frostlang$frostc$Symbol*) $tmp2799)->name;
frost$core$String* $tmp2801 = *$tmp2800;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2798, ((org$frostlang$frostc$Symbol*) $tmp2799), $tmp2801);
org$frostlang$frostc$ChoiceCase* $tmp2802 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2802));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2803 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
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
ITable* $tmp2806 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2806->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2806 = $tmp2806->next;
}
$fn2808 $tmp2807 = $tmp2806->methods[1];
frost$core$Bit $tmp2809 = $tmp2807(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2805));
bool $tmp2810 = $tmp2809.value;
if ($tmp2810) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:682
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:682:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp2811 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s2812);
frost$core$String* $tmp2813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2811, param8);
frost$core$String* $tmp2814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2813, &$s2815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$core$String* $tmp2816 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local0) = $tmp2814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:685
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2817 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local0) = param8;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:687
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:689
frost$core$Bit $tmp2818 = (frost$core$Bit) {param5 == NULL};
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2820 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:693
frost$core$Int* $tmp2821 = &param5->$rawValue;
frost$core$Int $tmp2822 = *$tmp2821;
frost$core$Int $tmp2823 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:694:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2824 = $tmp2822.value;
int64_t $tmp2825 = $tmp2823.value;
bool $tmp2826 = $tmp2824 == $tmp2825;
frost$core$Bit $tmp2827 = (frost$core$Bit) {$tmp2826};
bool $tmp2828 = $tmp2827.value;
if ($tmp2828) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2829 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2830 = *$tmp2829;
*(&local2) = $tmp2830;
frost$core$String** $tmp2831 = (frost$core$String**) (param5->$data + 24);
frost$core$String* $tmp2832 = *$tmp2831;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
frost$core$String* $tmp2833 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local3) = $tmp2832;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:695
frost$core$String* $tmp2834 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
frost$core$String* $tmp2835 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local1) = $tmp2834;
frost$core$String* $tmp2836 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2836));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:698
frost$core$Int $tmp2837 = (frost$core$Int) {698u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2838, $tmp2837);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:702
org$frostlang$frostc$Annotations* $tmp2839 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
org$frostlang$frostc$Annotations* $tmp2840 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
*(&local4) = $tmp2839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2839));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:703
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2841 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2841);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$collections$Array* $tmp2842 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
*(&local5) = $tmp2841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:704
frost$core$Bit $tmp2843 = (frost$core$Bit) {param9 != NULL};
bool $tmp2844 = $tmp2843.value;
if ($tmp2844) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:705
ITable* $tmp2845 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2845->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2845 = $tmp2845->next;
}
$fn2847 $tmp2846 = $tmp2845->methods[0];
frost$collections$Iterator* $tmp2848 = $tmp2846(((frost$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2849 = $tmp2848->$class->itable;
while ($tmp2849->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2849 = $tmp2849->next;
}
$fn2851 $tmp2850 = $tmp2849->methods[0];
frost$core$Bit $tmp2852 = $tmp2850($tmp2848);
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2854 = $tmp2848->$class->itable;
while ($tmp2854->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2854 = $tmp2854->next;
}
$fn2856 $tmp2855 = $tmp2854->methods[1];
frost$core$Object* $tmp2857 = $tmp2855($tmp2848);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2857)));
org$frostlang$frostc$ASTNode* $tmp2858 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2857);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:706
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:707
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:708
org$frostlang$frostc$ASTNode* $tmp2859 = *(&local6);
frost$core$Int* $tmp2860 = &$tmp2859->$rawValue;
frost$core$Int $tmp2861 = *$tmp2860;
frost$core$Int $tmp2862 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:709:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2863 = $tmp2861.value;
int64_t $tmp2864 = $tmp2862.value;
bool $tmp2865 = $tmp2863 == $tmp2864;
frost$core$Bit $tmp2866 = (frost$core$Bit) {$tmp2865};
bool $tmp2867 = $tmp2866.value;
if ($tmp2867) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2868 = (org$frostlang$frostc$Position*) ($tmp2859->$data + 0);
org$frostlang$frostc$Position $tmp2869 = *$tmp2868;
frost$core$String** $tmp2870 = (frost$core$String**) ($tmp2859->$data + 24);
frost$core$String* $tmp2871 = *$tmp2870;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2871));
frost$core$String* $tmp2872 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local9) = $tmp2871;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:710
frost$core$String* $tmp2873 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2873));
frost$core$String* $tmp2874 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2874));
*(&local7) = $tmp2873;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:711
frost$core$Weak** $tmp2875 = &param0->compiler;
frost$core$Weak* $tmp2876 = *$tmp2875;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:711:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2877 = &$tmp2876->_valid;
frost$core$Bit $tmp2878 = *$tmp2877;
bool $tmp2879 = $tmp2878.value;
if ($tmp2879) goto block23; else goto block24;
block24:;
frost$core$Int $tmp2880 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2881, $tmp2880);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2882 = &$tmp2876->value;
frost$core$Object* $tmp2883 = *$tmp2882;
frost$core$Frost$ref$frost$core$Object$Q($tmp2883);
org$frostlang$frostc$Type** $tmp2884 = &((org$frostlang$frostc$Compiler*) $tmp2883)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2885 = *$tmp2884;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
org$frostlang$frostc$Type* $tmp2886 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
*(&local8) = $tmp2885;
frost$core$Frost$unref$frost$core$Object$Q($tmp2883);
frost$core$String* $tmp2887 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int $tmp2888 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:713:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp2889 = $tmp2861.value;
int64_t $tmp2890 = $tmp2888.value;
bool $tmp2891 = $tmp2889 == $tmp2890;
frost$core$Bit $tmp2892 = (frost$core$Bit) {$tmp2891};
bool $tmp2893 = $tmp2892.value;
if ($tmp2893) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2894 = (org$frostlang$frostc$Position*) ($tmp2859->$data + 0);
org$frostlang$frostc$Position $tmp2895 = *$tmp2894;
frost$core$String** $tmp2896 = (frost$core$String**) ($tmp2859->$data + 24);
frost$core$String* $tmp2897 = *$tmp2896;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
frost$core$String* $tmp2898 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local10) = $tmp2897;
org$frostlang$frostc$ASTNode** $tmp2899 = (org$frostlang$frostc$ASTNode**) ($tmp2859->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2900 = *$tmp2899;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
org$frostlang$frostc$ASTNode* $tmp2901 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
*(&local11) = $tmp2900;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:714
frost$core$String* $tmp2902 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2902));
frost$core$String* $tmp2903 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2903));
*(&local7) = $tmp2902;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:715
org$frostlang$frostc$ASTNode* $tmp2904 = *(&local11);
org$frostlang$frostc$Type* $tmp2905 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2904);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
org$frostlang$frostc$Type* $tmp2906 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2906));
*(&local8) = $tmp2905;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2905));
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2908 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2908));
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:718
frost$core$Int $tmp2909 = (frost$core$Int) {718u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2910, $tmp2909);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:721
frost$collections$Array* $tmp2911 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$ClassDecl$GenericParameter));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2912 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2913 = *(&local6);
$fn2915 $tmp2914 = ($fn2915) $tmp2913->$class->vtable[2];
org$frostlang$frostc$Position $tmp2916 = $tmp2914($tmp2913);
frost$core$String* $tmp2917 = *(&local0);
frost$core$String* $tmp2918 = *(&local7);
org$frostlang$frostc$Type* $tmp2919 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2912, $tmp2916, $tmp2917, $tmp2918, $tmp2919);
frost$collections$Array$add$frost$collections$Array$T($tmp2911, ((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
org$frostlang$frostc$Type* $tmp2920 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2921 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2857);
org$frostlang$frostc$ASTNode* $tmp2922 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:724
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2923 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2923);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
frost$collections$Array* $tmp2924 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
*(&local12) = $tmp2923;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:725
frost$core$Bit $tmp2925 = (frost$core$Bit) {param10 != NULL};
bool $tmp2926 = $tmp2925.value;
if ($tmp2926) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:726
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2927;
$tmp2927 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2927->value = param7;
frost$core$Int $tmp2928 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:726:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp2929 = &(&local14)->$rawValue;
*$tmp2929 = $tmp2928;
org$frostlang$frostc$ClassDecl$Kind $tmp2930 = *(&local14);
*(&local13) = $tmp2930;
org$frostlang$frostc$ClassDecl$Kind $tmp2931 = *(&local13);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2932;
$tmp2932 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2932->value = $tmp2931;
ITable* $tmp2933 = ((frost$core$Equatable*) $tmp2927)->$class->itable;
while ($tmp2933->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2933 = $tmp2933->next;
}
$fn2935 $tmp2934 = $tmp2933->methods[0];
frost$core$Bit $tmp2936 = $tmp2934(((frost$core$Equatable*) $tmp2927), ((frost$core$Equatable*) $tmp2932));
bool $tmp2937 = $tmp2936.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2932)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2927)));
if ($tmp2937) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:727
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:727:22
frost$io$File** $tmp2938 = &param0->source;
frost$io$File* $tmp2939 = *$tmp2938;
frost$core$Bit $tmp2940 = (frost$core$Bit) {$tmp2939 != NULL};
bool $tmp2941 = $tmp2940.value;
if ($tmp2941) goto block34; else goto block35;
block35:;
frost$core$Int $tmp2942 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s2943, $tmp2942, &$s2944);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp2945 = &param0->compiler;
frost$core$Weak* $tmp2946 = *$tmp2945;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp2947 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2946);
bool $tmp2948 = $tmp2947.value;
if ($tmp2948) goto block37; else goto block38;
block38:;
frost$core$Int $tmp2949 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2950, $tmp2949);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2951 = &$tmp2946->value;
frost$core$Object* $tmp2952 = *$tmp2951;
frost$core$Frost$ref$frost$core$Object$Q($tmp2952);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2952), param4, &$s2953);
frost$core$Frost$unref$frost$core$Object$Q($tmp2952);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:729
ITable* $tmp2954 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2954->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2954 = $tmp2954->next;
}
$fn2956 $tmp2955 = $tmp2954->methods[0];
frost$collections$Iterator* $tmp2957 = $tmp2955(((frost$collections$Iterable*) param10));
goto block39;
block39:;
ITable* $tmp2958 = $tmp2957->$class->itable;
while ($tmp2958->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2958 = $tmp2958->next;
}
$fn2960 $tmp2959 = $tmp2958->methods[0];
frost$core$Bit $tmp2961 = $tmp2959($tmp2957);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block41; else goto block40;
block40:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2963 = $tmp2957->$class->itable;
while ($tmp2963->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2963 = $tmp2963->next;
}
$fn2965 $tmp2964 = $tmp2963->methods[1];
frost$core$Object* $tmp2966 = $tmp2964($tmp2957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2966)));
org$frostlang$frostc$ASTNode* $tmp2967 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2966);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:730
frost$collections$Array* $tmp2968 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2969 = *(&local15);
org$frostlang$frostc$Type* $tmp2970 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2969);
frost$collections$Array$add$frost$collections$Array$T($tmp2968, ((frost$core$Object*) $tmp2970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
frost$core$Frost$unref$frost$core$Object$Q($tmp2966);
org$frostlang$frostc$ASTNode* $tmp2971 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:733
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp2972 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2973 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2974 = *(&local4);
frost$core$String* $tmp2975 = *(&local0);
frost$collections$Array* $tmp2976 = *(&local12);
frost$collections$Array* $tmp2977 = *(&local5);
frost$core$Weak** $tmp2978 = &param0->compiler;
frost$core$Weak* $tmp2979 = *$tmp2978;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:734:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2980 = &$tmp2979->_valid;
frost$core$Bit $tmp2981 = *$tmp2980;
bool $tmp2982 = $tmp2981.value;
if ($tmp2982) goto block44; else goto block45;
block45:;
frost$core$Int $tmp2983 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2984, $tmp2983);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2985 = &$tmp2979->value;
frost$core$Object* $tmp2986 = *$tmp2985;
frost$core$Frost$ref$frost$core$Object$Q($tmp2986);
org$frostlang$frostc$SymbolTable** $tmp2987 = &((org$frostlang$frostc$Compiler*) $tmp2986)->root;
org$frostlang$frostc$SymbolTable* $tmp2988 = *$tmp2987;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2972, param1, param4, param2, $tmp2973, $tmp2974, param7, $tmp2975, ((frost$collections$ListView*) $tmp2976), $tmp2977, $tmp2988);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
org$frostlang$frostc$ClassDecl* $tmp2989 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
*(&local16) = $tmp2972;
frost$core$Frost$unref$frost$core$Object$Q($tmp2986);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:735
frost$core$Weak** $tmp2990 = &param0->compiler;
frost$core$Weak* $tmp2991 = *$tmp2990;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:735:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp2992 = &$tmp2991->_valid;
frost$core$Bit $tmp2993 = *$tmp2992;
bool $tmp2994 = $tmp2993.value;
if ($tmp2994) goto block48; else goto block49;
block49:;
frost$core$Int $tmp2995 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2996, $tmp2995);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp2997 = &$tmp2991->value;
frost$core$Object* $tmp2998 = *$tmp2997;
frost$core$Frost$ref$frost$core$Object$Q($tmp2998);
frost$collections$Stack** $tmp2999 = &((org$frostlang$frostc$Compiler*) $tmp2998)->currentClass;
frost$collections$Stack* $tmp3000 = *$tmp2999;
org$frostlang$frostc$ClassDecl* $tmp3001 = *(&local16);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:735:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp3002 = &$tmp3000->contents;
frost$collections$Array* $tmp3003 = *$tmp3002;
frost$collections$Array$add$frost$collections$Array$T($tmp3003, ((frost$core$Object*) $tmp3001));
frost$core$Frost$unref$frost$core$Object$Q($tmp2998);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:736
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3004;
$tmp3004 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3004->value = param7;
frost$core$Int $tmp3005 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:736:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3006 = &(&local18)->$rawValue;
*$tmp3006 = $tmp3005;
org$frostlang$frostc$ClassDecl$Kind $tmp3007 = *(&local18);
*(&local17) = $tmp3007;
org$frostlang$frostc$ClassDecl$Kind $tmp3008 = *(&local17);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3009;
$tmp3009 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3009->value = $tmp3008;
ITable* $tmp3010 = ((frost$core$Equatable*) $tmp3004)->$class->itable;
while ($tmp3010->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3010 = $tmp3010->next;
}
$fn3012 $tmp3011 = $tmp3010->methods[0];
frost$core$Bit $tmp3013 = $tmp3011(((frost$core$Equatable*) $tmp3004), ((frost$core$Equatable*) $tmp3009));
bool $tmp3014 = $tmp3013.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3009)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3004)));
if ($tmp3014) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:737
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3015 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3016 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3017 = *(&local16);
org$frostlang$frostc$Position* $tmp3018 = &$tmp3017->position;
org$frostlang$frostc$Position $tmp3019 = *$tmp3018;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3020 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3021 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3020, $tmp3021);
frost$core$Int $tmp3022 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:738:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp3023 = &(&local20)->$rawValue;
*$tmp3023 = $tmp3022;
org$frostlang$frostc$FieldDecl$Kind $tmp3024 = *(&local20);
*(&local19) = $tmp3024;
org$frostlang$frostc$FieldDecl$Kind $tmp3025 = *(&local19);
frost$core$Weak** $tmp3026 = &param0->compiler;
frost$core$Weak* $tmp3027 = *$tmp3026;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:739:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3028 = &$tmp3027->_valid;
frost$core$Bit $tmp3029 = *$tmp3028;
bool $tmp3030 = $tmp3029.value;
if ($tmp3030) goto block57; else goto block58;
block58:;
frost$core$Int $tmp3031 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3032, $tmp3031);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3033 = &$tmp3027->value;
frost$core$Object* $tmp3034 = *$tmp3033;
frost$core$Frost$ref$frost$core$Object$Q($tmp3034);
org$frostlang$frostc$Type** $tmp3035 = &((org$frostlang$frostc$Compiler*) $tmp3034)->INT_TYPE;
org$frostlang$frostc$Type* $tmp3036 = *$tmp3035;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3015, $tmp3016, $tmp3019, ((frost$core$String*) NULL), $tmp3020, $tmp3025, &$s3037, $tmp3036, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
org$frostlang$frostc$FieldDecl* $tmp3038 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local21) = $tmp3015;
frost$core$Frost$unref$frost$core$Object$Q($tmp3034);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3020));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:740
org$frostlang$frostc$ClassDecl* $tmp3039 = *(&local16);
frost$collections$Array** $tmp3040 = &$tmp3039->fields;
frost$collections$Array* $tmp3041 = *$tmp3040;
org$frostlang$frostc$FieldDecl* $tmp3042 = *(&local21);
frost$collections$Array$add$frost$collections$Array$T($tmp3041, ((frost$core$Object*) $tmp3042));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:741
org$frostlang$frostc$ClassDecl* $tmp3043 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3044 = &$tmp3043->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3045 = *$tmp3044;
org$frostlang$frostc$FieldDecl* $tmp3046 = *(&local21);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:741:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3047 = &((org$frostlang$frostc$Symbol*) $tmp3046)->name;
frost$core$String* $tmp3048 = *$tmp3047;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3045, ((org$frostlang$frostc$Symbol*) $tmp3046), $tmp3048);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:742
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3049 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3050 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3051 = *(&local16);
org$frostlang$frostc$Position* $tmp3052 = &$tmp3051->position;
org$frostlang$frostc$Position $tmp3053 = *$tmp3052;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3054 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3055 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3054, $tmp3055);
frost$core$Int $tmp3056 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:743:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp3057 = &(&local23)->$rawValue;
*$tmp3057 = $tmp3056;
org$frostlang$frostc$FieldDecl$Kind $tmp3058 = *(&local23);
*(&local22) = $tmp3058;
org$frostlang$frostc$FieldDecl$Kind $tmp3059 = *(&local22);
frost$core$Weak** $tmp3060 = &param0->compiler;
frost$core$Weak* $tmp3061 = *$tmp3060;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:744:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3062 = &$tmp3061->_valid;
frost$core$Bit $tmp3063 = *$tmp3062;
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block63; else goto block64;
block64:;
frost$core$Int $tmp3065 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3066, $tmp3065);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3067 = &$tmp3061->value;
frost$core$Object* $tmp3068 = *$tmp3067;
frost$core$Frost$ref$frost$core$Object$Q($tmp3068);
org$frostlang$frostc$Type** $tmp3069 = &((org$frostlang$frostc$Compiler*) $tmp3068)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp3070 = *$tmp3069;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3049, $tmp3050, $tmp3053, ((frost$core$String*) NULL), $tmp3054, $tmp3059, &$s3071, $tmp3070, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
org$frostlang$frostc$FieldDecl* $tmp3072 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local24) = $tmp3049;
frost$core$Frost$unref$frost$core$Object$Q($tmp3068);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:745
org$frostlang$frostc$ClassDecl* $tmp3073 = *(&local16);
frost$collections$Array** $tmp3074 = &$tmp3073->fields;
frost$collections$Array* $tmp3075 = *$tmp3074;
org$frostlang$frostc$FieldDecl* $tmp3076 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp3075, ((frost$core$Object*) $tmp3076));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:746
org$frostlang$frostc$ClassDecl* $tmp3077 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3078 = &$tmp3077->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3079 = *$tmp3078;
org$frostlang$frostc$FieldDecl* $tmp3080 = *(&local24);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:746:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3081 = &((org$frostlang$frostc$Symbol*) $tmp3080)->name;
frost$core$String* $tmp3082 = *$tmp3081;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3079, ((org$frostlang$frostc$Symbol*) $tmp3080), $tmp3082);
org$frostlang$frostc$FieldDecl* $tmp3083 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp3084 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:748
ITable* $tmp3085 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp3085->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3085 = $tmp3085->next;
}
$fn3087 $tmp3086 = $tmp3085->methods[0];
frost$collections$Iterator* $tmp3088 = $tmp3086(((frost$collections$Iterable*) param11));
goto block66;
block66:;
ITable* $tmp3089 = $tmp3088->$class->itable;
while ($tmp3089->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3089 = $tmp3089->next;
}
$fn3091 $tmp3090 = $tmp3089->methods[0];
frost$core$Bit $tmp3092 = $tmp3090($tmp3088);
bool $tmp3093 = $tmp3092.value;
if ($tmp3093) goto block68; else goto block67;
block67:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3094 = $tmp3088->$class->itable;
while ($tmp3094->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3094 = $tmp3094->next;
}
$fn3096 $tmp3095 = $tmp3094->methods[1];
frost$core$Object* $tmp3097 = $tmp3095($tmp3088);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3097)));
org$frostlang$frostc$ASTNode* $tmp3098 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp3097);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:749
org$frostlang$frostc$ASTNode* $tmp3099 = *(&local25);
frost$core$Int* $tmp3100 = &$tmp3099->$rawValue;
frost$core$Int $tmp3101 = *$tmp3100;
frost$core$Int $tmp3102 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:750:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3103 = $tmp3101.value;
int64_t $tmp3104 = $tmp3102.value;
bool $tmp3105 = $tmp3103 == $tmp3104;
frost$core$Bit $tmp3106 = (frost$core$Bit) {$tmp3105};
bool $tmp3107 = $tmp3106.value;
if ($tmp3107) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp3108 = (org$frostlang$frostc$Position*) ($tmp3099->$data + 0);
org$frostlang$frostc$Position $tmp3109 = *$tmp3108;
*(&local26) = $tmp3109;
org$frostlang$frostc$ASTNode** $tmp3110 = (org$frostlang$frostc$ASTNode**) ($tmp3099->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3111 = *$tmp3110;
org$frostlang$frostc$FixedArray** $tmp3112 = (org$frostlang$frostc$FixedArray**) ($tmp3099->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3113 = *$tmp3112;
org$frostlang$frostc$MethodDecl$Kind* $tmp3114 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3099->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3115 = *$tmp3114;
*(&local27) = $tmp3115;
frost$core$String** $tmp3116 = (frost$core$String**) ($tmp3099->$data + 48);
frost$core$String* $tmp3117 = *$tmp3116;
org$frostlang$frostc$FixedArray** $tmp3118 = (org$frostlang$frostc$FixedArray**) ($tmp3099->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3119 = *$tmp3118;
org$frostlang$frostc$FixedArray** $tmp3120 = (org$frostlang$frostc$FixedArray**) ($tmp3099->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3121 = *$tmp3120;
org$frostlang$frostc$ASTNode** $tmp3122 = (org$frostlang$frostc$ASTNode**) ($tmp3099->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3123 = *$tmp3122;
org$frostlang$frostc$FixedArray** $tmp3124 = (org$frostlang$frostc$FixedArray**) ($tmp3099->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3125 = *$tmp3124;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:751
org$frostlang$frostc$MethodDecl$Kind $tmp3126 = *(&local27);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3127;
$tmp3127 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3127->value = $tmp3126;
frost$core$Int $tmp3128 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:751:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3129 = &(&local29)->$rawValue;
*$tmp3129 = $tmp3128;
org$frostlang$frostc$MethodDecl$Kind $tmp3130 = *(&local29);
*(&local28) = $tmp3130;
org$frostlang$frostc$MethodDecl$Kind $tmp3131 = *(&local28);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3132;
$tmp3132 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3132->value = $tmp3131;
ITable* $tmp3133 = ((frost$core$Equatable*) $tmp3127)->$class->itable;
while ($tmp3133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3133 = $tmp3133->next;
}
$fn3135 $tmp3134 = $tmp3133->methods[0];
frost$core$Bit $tmp3136 = $tmp3134(((frost$core$Equatable*) $tmp3127), ((frost$core$Equatable*) $tmp3132));
bool $tmp3137 = $tmp3136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3132)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3127)));
if ($tmp3137) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:752
frost$core$Int $tmp3138 = param7.$rawValue;
frost$core$Int $tmp3139 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:753:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3140 = $tmp3138.value;
int64_t $tmp3141 = $tmp3139.value;
bool $tmp3142 = $tmp3140 == $tmp3141;
frost$core$Bit $tmp3143 = (frost$core$Bit) {$tmp3142};
bool $tmp3144 = $tmp3143.value;
if ($tmp3144) goto block77; else goto block78;
block77:;
goto block76;
block78:;
frost$core$Int $tmp3145 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:756:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3146 = $tmp3138.value;
int64_t $tmp3147 = $tmp3145.value;
bool $tmp3148 = $tmp3146 == $tmp3147;
frost$core$Bit $tmp3149 = (frost$core$Bit) {$tmp3148};
bool $tmp3150 = $tmp3149.value;
if ($tmp3150) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:757
org$frostlang$frostc$Position $tmp3151 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:757:38
frost$io$File** $tmp3152 = &param0->source;
frost$io$File* $tmp3153 = *$tmp3152;
frost$core$Bit $tmp3154 = (frost$core$Bit) {$tmp3153 != NULL};
bool $tmp3155 = $tmp3154.value;
if ($tmp3155) goto block84; else goto block85;
block85:;
frost$core$Int $tmp3156 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3157, $tmp3156, &$s3158);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3159 = &param0->compiler;
frost$core$Weak* $tmp3160 = *$tmp3159;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3161 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3160);
bool $tmp3162 = $tmp3161.value;
if ($tmp3162) goto block87; else goto block88;
block88:;
frost$core$Int $tmp3163 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3164, $tmp3163);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3165 = &$tmp3160->value;
frost$core$Object* $tmp3166 = *$tmp3165;
frost$core$Frost$ref$frost$core$Object$Q($tmp3166);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3166), $tmp3151, &$s3167);
frost$core$Frost$unref$frost$core$Object$Q($tmp3166);
goto block76;
block81:;
frost$core$Int $tmp3168 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:759:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3169 = $tmp3138.value;
int64_t $tmp3170 = $tmp3168.value;
bool $tmp3171 = $tmp3169 == $tmp3170;
frost$core$Bit $tmp3172 = (frost$core$Bit) {$tmp3171};
bool $tmp3173 = $tmp3172.value;
if ($tmp3173) goto block89; else goto block76;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:760
org$frostlang$frostc$Position $tmp3174 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:760:38
frost$io$File** $tmp3175 = &param0->source;
frost$io$File* $tmp3176 = *$tmp3175;
frost$core$Bit $tmp3177 = (frost$core$Bit) {$tmp3176 != NULL};
bool $tmp3178 = $tmp3177.value;
if ($tmp3178) goto block92; else goto block93;
block93:;
frost$core$Int $tmp3179 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3180, $tmp3179, &$s3181);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3182 = &param0->compiler;
frost$core$Weak* $tmp3183 = *$tmp3182;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3184 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3183);
bool $tmp3185 = $tmp3184.value;
if ($tmp3185) goto block95; else goto block96;
block96:;
frost$core$Int $tmp3186 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3187, $tmp3186);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3188 = &$tmp3183->value;
frost$core$Object* $tmp3189 = *$tmp3188;
frost$core$Frost$ref$frost$core$Object$Q($tmp3189);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3189), $tmp3174, &$s3190);
frost$core$Frost$unref$frost$core$Object$Q($tmp3189);
goto block76;
block76:;
goto block74;
block74:;
goto block69;
block71:;
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:769
org$frostlang$frostc$ClassDecl* $tmp3191 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp3192 = *(&local25);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp3191, $tmp3192);
frost$core$Frost$unref$frost$core$Object$Q($tmp3097);
org$frostlang$frostc$ASTNode* $tmp3193 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:771
frost$core$Bit $tmp3194 = (frost$core$Bit) {false};
*(&local30) = $tmp3194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:772
frost$core$Bit $tmp3195 = (frost$core$Bit) {false};
*(&local31) = $tmp3195;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:773
org$frostlang$frostc$ClassDecl* $tmp3196 = *(&local16);
frost$collections$Array** $tmp3197 = &$tmp3196->methods;
frost$collections$Array* $tmp3198 = *$tmp3197;
ITable* $tmp3199 = ((frost$collections$Iterable*) $tmp3198)->$class->itable;
while ($tmp3199->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3199 = $tmp3199->next;
}
$fn3201 $tmp3200 = $tmp3199->methods[0];
frost$collections$Iterator* $tmp3202 = $tmp3200(((frost$collections$Iterable*) $tmp3198));
goto block97;
block97:;
ITable* $tmp3203 = $tmp3202->$class->itable;
while ($tmp3203->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3203 = $tmp3203->next;
}
$fn3205 $tmp3204 = $tmp3203->methods[0];
frost$core$Bit $tmp3206 = $tmp3204($tmp3202);
bool $tmp3207 = $tmp3206.value;
if ($tmp3207) goto block99; else goto block98;
block98:;
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp3208 = $tmp3202->$class->itable;
while ($tmp3208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3208 = $tmp3208->next;
}
$fn3210 $tmp3209 = $tmp3208->methods[1];
frost$core$Object* $tmp3211 = $tmp3209($tmp3202);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp3211)));
org$frostlang$frostc$MethodDecl* $tmp3212 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3212));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) $tmp3211);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:774
org$frostlang$frostc$MethodDecl* $tmp3213 = *(&local32);
org$frostlang$frostc$MethodDecl$Kind* $tmp3214 = &$tmp3213->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3215 = *$tmp3214;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3216;
$tmp3216 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3216->value = $tmp3215;
frost$core$Int $tmp3217 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:774:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3218 = &(&local34)->$rawValue;
*$tmp3218 = $tmp3217;
org$frostlang$frostc$MethodDecl$Kind $tmp3219 = *(&local34);
*(&local33) = $tmp3219;
org$frostlang$frostc$MethodDecl$Kind $tmp3220 = *(&local33);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3221;
$tmp3221 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3221->value = $tmp3220;
ITable* $tmp3222 = ((frost$core$Equatable*) $tmp3216)->$class->itable;
while ($tmp3222->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3222 = $tmp3222->next;
}
$fn3224 $tmp3223 = $tmp3222->methods[0];
frost$core$Bit $tmp3225 = $tmp3223(((frost$core$Equatable*) $tmp3216), ((frost$core$Equatable*) $tmp3221));
bool $tmp3226 = $tmp3225.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3221)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3216)));
if ($tmp3226) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:775
frost$core$Bit $tmp3227 = (frost$core$Bit) {true};
*(&local30) = $tmp3227;
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:777
org$frostlang$frostc$MethodDecl* $tmp3228 = *(&local32);
frost$core$String** $tmp3229 = &((org$frostlang$frostc$Symbol*) $tmp3228)->name;
frost$core$String* $tmp3230 = *$tmp3229;
frost$core$Bit $tmp3231 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3230, &$s3232);
bool $tmp3233 = $tmp3231.value;
if ($tmp3233) goto block105; else goto block104;
block105:;
org$frostlang$frostc$MethodDecl* $tmp3234 = *(&local32);
frost$collections$Array** $tmp3235 = &$tmp3234->parameters;
frost$collections$Array* $tmp3236 = *$tmp3235;
ITable* $tmp3237 = ((frost$collections$CollectionView*) $tmp3236)->$class->itable;
while ($tmp3237->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3237 = $tmp3237->next;
}
$fn3239 $tmp3238 = $tmp3237->methods[0];
frost$core$Int $tmp3240 = $tmp3238(((frost$collections$CollectionView*) $tmp3236));
frost$core$Int $tmp3241 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:777:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3242 = $tmp3240.value;
int64_t $tmp3243 = $tmp3241.value;
bool $tmp3244 = $tmp3242 == $tmp3243;
frost$core$Bit $tmp3245 = (frost$core$Bit) {$tmp3244};
bool $tmp3246 = $tmp3245.value;
if ($tmp3246) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:778
frost$core$Bit $tmp3247 = (frost$core$Bit) {true};
*(&local31) = $tmp3247;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:779
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3248;
$tmp3248 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3248->value = param7;
frost$core$Int $tmp3249 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:779:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3250 = &(&local36)->$rawValue;
*$tmp3250 = $tmp3249;
org$frostlang$frostc$ClassDecl$Kind $tmp3251 = *(&local36);
*(&local35) = $tmp3251;
org$frostlang$frostc$ClassDecl$Kind $tmp3252 = *(&local35);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3253;
$tmp3253 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3253->value = $tmp3252;
ITable* $tmp3254 = ((frost$core$Equatable*) $tmp3248)->$class->itable;
while ($tmp3254->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3254 = $tmp3254->next;
}
$fn3256 $tmp3255 = $tmp3254->methods[0];
frost$core$Bit $tmp3257 = $tmp3255(((frost$core$Equatable*) $tmp3248), ((frost$core$Equatable*) $tmp3253));
bool $tmp3258 = $tmp3257.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3253)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3248)));
if ($tmp3258) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:780
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:780:26
frost$io$File** $tmp3259 = &param0->source;
frost$io$File* $tmp3260 = *$tmp3259;
frost$core$Bit $tmp3261 = (frost$core$Bit) {$tmp3260 != NULL};
bool $tmp3262 = $tmp3261.value;
if ($tmp3262) goto block111; else goto block112;
block112:;
frost$core$Int $tmp3263 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3264, $tmp3263, &$s3265);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3266 = &param0->compiler;
frost$core$Weak* $tmp3267 = *$tmp3266;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3268 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3267);
bool $tmp3269 = $tmp3268.value;
if ($tmp3269) goto block114; else goto block115;
block115:;
frost$core$Int $tmp3270 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3271, $tmp3270);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3272 = &$tmp3267->value;
frost$core$Object* $tmp3273 = *$tmp3272;
frost$core$Frost$ref$frost$core$Object$Q($tmp3273);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3273), param4, &$s3274);
frost$core$Frost$unref$frost$core$Object$Q($tmp3273);
goto block108;
block108:;
goto block104;
block104:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3211);
org$frostlang$frostc$MethodDecl* $tmp3275 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3275));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:784
frost$core$Bit $tmp3276 = *(&local30);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:784:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3277 = $tmp3276.value;
bool $tmp3278 = !$tmp3277;
frost$core$Bit $tmp3279 = (frost$core$Bit) {$tmp3278};
bool $tmp3280 = $tmp3279.value;
if ($tmp3280) goto block119; else goto block117;
block119:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3281;
$tmp3281 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3281->value = param7;
frost$core$Int $tmp3282 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:784:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3283 = &(&local38)->$rawValue;
*$tmp3283 = $tmp3282;
org$frostlang$frostc$ClassDecl$Kind $tmp3284 = *(&local38);
*(&local37) = $tmp3284;
org$frostlang$frostc$ClassDecl$Kind $tmp3285 = *(&local37);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3286;
$tmp3286 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3286->value = $tmp3285;
ITable* $tmp3287 = ((frost$core$Equatable*) $tmp3281)->$class->itable;
while ($tmp3287->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3287 = $tmp3287->next;
}
$fn3289 $tmp3288 = $tmp3287->methods[0];
frost$core$Bit $tmp3290 = $tmp3288(((frost$core$Equatable*) $tmp3281), ((frost$core$Equatable*) $tmp3286));
bool $tmp3291 = $tmp3290.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3286)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3281)));
if ($tmp3291) goto block118; else goto block117;
block118:;
org$frostlang$frostc$ClassDecl* $tmp3292 = *(&local16);
frost$core$String** $tmp3293 = &$tmp3292->name;
frost$core$String* $tmp3294 = *$tmp3293;
ITable* $tmp3296 = ((frost$core$Equatable*) $tmp3294)->$class->itable;
while ($tmp3296->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3296 = $tmp3296->next;
}
$fn3298 $tmp3297 = $tmp3296->methods[1];
frost$core$Bit $tmp3299 = $tmp3297(((frost$core$Equatable*) $tmp3294), ((frost$core$Equatable*) &$s3295));
bool $tmp3300 = $tmp3299.value;
if ($tmp3300) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:785
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3301 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3302 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3303 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3304 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3303, $tmp3304);
frost$core$Int $tmp3305 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:786:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3306 = &(&local40)->$rawValue;
*$tmp3306 = $tmp3305;
org$frostlang$frostc$MethodDecl$Kind $tmp3307 = *(&local40);
*(&local39) = $tmp3307;
org$frostlang$frostc$MethodDecl$Kind $tmp3308 = *(&local39);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3309 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3310 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3309, $tmp3310);
frost$core$Weak** $tmp3311 = &param0->compiler;
frost$core$Weak* $tmp3312 = *$tmp3311;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:787:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3313 = &$tmp3312->_valid;
frost$core$Bit $tmp3314 = *$tmp3313;
bool $tmp3315 = $tmp3314.value;
if ($tmp3315) goto block125; else goto block126;
block126:;
frost$core$Int $tmp3316 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3317, $tmp3316);
abort(); // unreachable
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3318 = &$tmp3312->value;
frost$core$Object* $tmp3319 = *$tmp3318;
frost$core$Frost$ref$frost$core$Object$Q($tmp3319);
org$frostlang$frostc$Type** $tmp3320 = &((org$frostlang$frostc$Compiler*) $tmp3319)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3321 = *$tmp3320;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3322 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3322);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3301, $tmp3302, param4, ((frost$core$String*) NULL), $tmp3303, $tmp3308, &$s3323, ((frost$collections$Array*) NULL), $tmp3309, $tmp3321, $tmp3322);
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
org$frostlang$frostc$MethodDecl* $tmp3324 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
*(&local41) = $tmp3301;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
frost$core$Frost$unref$frost$core$Object$Q($tmp3319);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:788
org$frostlang$frostc$ClassDecl* $tmp3325 = *(&local16);
frost$collections$Array** $tmp3326 = &$tmp3325->methods;
frost$collections$Array* $tmp3327 = *$tmp3326;
org$frostlang$frostc$MethodDecl* $tmp3328 = *(&local41);
frost$collections$Array$add$frost$collections$Array$T($tmp3327, ((frost$core$Object*) $tmp3328));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:789
org$frostlang$frostc$ClassDecl* $tmp3329 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3330 = &$tmp3329->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3331 = *$tmp3330;
org$frostlang$frostc$MethodDecl* $tmp3332 = *(&local41);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:789:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3333 = &((org$frostlang$frostc$Symbol*) $tmp3332)->name;
frost$core$String* $tmp3334 = *$tmp3333;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3331, ((org$frostlang$frostc$Symbol*) $tmp3332), $tmp3334);
org$frostlang$frostc$MethodDecl* $tmp3335 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block117;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:791
frost$core$Bit $tmp3336 = *(&local31);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:791:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3337 = $tmp3336.value;
bool $tmp3338 = !$tmp3337;
frost$core$Bit $tmp3339 = (frost$core$Bit) {$tmp3338};
bool $tmp3340 = $tmp3339.value;
if ($tmp3340) goto block131; else goto block129;
block131:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3341;
$tmp3341 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3341->value = param7;
frost$core$Int $tmp3342 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:791:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3343 = &(&local43)->$rawValue;
*$tmp3343 = $tmp3342;
org$frostlang$frostc$ClassDecl$Kind $tmp3344 = *(&local43);
*(&local42) = $tmp3344;
org$frostlang$frostc$ClassDecl$Kind $tmp3345 = *(&local42);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3346;
$tmp3346 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3346->value = $tmp3345;
ITable* $tmp3347 = ((frost$core$Equatable*) $tmp3341)->$class->itable;
while ($tmp3347->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3347 = $tmp3347->next;
}
$fn3349 $tmp3348 = $tmp3347->methods[0];
frost$core$Bit $tmp3350 = $tmp3348(((frost$core$Equatable*) $tmp3341), ((frost$core$Equatable*) $tmp3346));
bool $tmp3351 = $tmp3350.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3346)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3341)));
if ($tmp3351) goto block130; else goto block133;
block133:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3352;
$tmp3352 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3352->value = param7;
frost$core$Int $tmp3353 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:791:80
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3354 = &(&local45)->$rawValue;
*$tmp3354 = $tmp3353;
org$frostlang$frostc$ClassDecl$Kind $tmp3355 = *(&local45);
*(&local44) = $tmp3355;
org$frostlang$frostc$ClassDecl$Kind $tmp3356 = *(&local44);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3357;
$tmp3357 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3357->value = $tmp3356;
ITable* $tmp3358 = ((frost$core$Equatable*) $tmp3352)->$class->itable;
while ($tmp3358->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3358 = $tmp3358->next;
}
$fn3360 $tmp3359 = $tmp3358->methods[0];
frost$core$Bit $tmp3361 = $tmp3359(((frost$core$Equatable*) $tmp3352), ((frost$core$Equatable*) $tmp3357));
bool $tmp3362 = $tmp3361.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3357)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3352)));
if ($tmp3362) goto block130; else goto block129;
block130:;
org$frostlang$frostc$ClassDecl* $tmp3363 = *(&local16);
frost$core$String** $tmp3364 = &$tmp3363->name;
frost$core$String* $tmp3365 = *$tmp3364;
ITable* $tmp3367 = ((frost$core$Equatable*) $tmp3365)->$class->itable;
while ($tmp3367->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3367 = $tmp3367->next;
}
$fn3369 $tmp3368 = $tmp3367->methods[1];
frost$core$Bit $tmp3370 = $tmp3368(((frost$core$Equatable*) $tmp3365), ((frost$core$Equatable*) &$s3366));
bool $tmp3371 = $tmp3370.value;
if ($tmp3371) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:793
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3372 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3373 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3374 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3375 = (frost$core$Int) {32u};
frost$core$Int $tmp3376 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:794:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp3377 = $tmp3375.value;
int64_t $tmp3378 = $tmp3376.value;
int64_t $tmp3379 = $tmp3377 | $tmp3378;
frost$core$Int $tmp3380 = (frost$core$Int) {$tmp3379};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3374, $tmp3380);
frost$core$Int $tmp3381 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:795:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3382 = &(&local47)->$rawValue;
*$tmp3382 = $tmp3381;
org$frostlang$frostc$MethodDecl$Kind $tmp3383 = *(&local47);
*(&local46) = $tmp3383;
org$frostlang$frostc$MethodDecl$Kind $tmp3384 = *(&local46);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3385 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3386 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3385, $tmp3386);
frost$core$Weak** $tmp3387 = &param0->compiler;
frost$core$Weak* $tmp3388 = *$tmp3387;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:795:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3389 = &$tmp3388->_valid;
frost$core$Bit $tmp3390 = *$tmp3389;
bool $tmp3391 = $tmp3390.value;
if ($tmp3391) goto block140; else goto block141;
block141:;
frost$core$Int $tmp3392 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3393, $tmp3392);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3394 = &$tmp3388->value;
frost$core$Object* $tmp3395 = *$tmp3394;
frost$core$Frost$ref$frost$core$Object$Q($tmp3395);
org$frostlang$frostc$Type** $tmp3396 = &((org$frostlang$frostc$Compiler*) $tmp3395)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3397 = *$tmp3396;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3398 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3398);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3372, $tmp3373, param4, ((frost$core$String*) NULL), $tmp3374, $tmp3384, &$s3399, ((frost$collections$Array*) NULL), $tmp3385, $tmp3397, $tmp3398);
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
org$frostlang$frostc$MethodDecl* $tmp3400 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3400));
*(&local48) = $tmp3372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3398));
frost$core$Frost$unref$frost$core$Object$Q($tmp3395);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:797
org$frostlang$frostc$ClassDecl* $tmp3401 = *(&local16);
frost$collections$Array** $tmp3402 = &$tmp3401->methods;
frost$collections$Array* $tmp3403 = *$tmp3402;
org$frostlang$frostc$MethodDecl* $tmp3404 = *(&local48);
frost$collections$Array$add$frost$collections$Array$T($tmp3403, ((frost$core$Object*) $tmp3404));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:798
org$frostlang$frostc$ClassDecl* $tmp3405 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3406 = &$tmp3405->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3407 = *$tmp3406;
org$frostlang$frostc$MethodDecl* $tmp3408 = *(&local48);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:798:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3409 = &((org$frostlang$frostc$Symbol*) $tmp3408)->name;
frost$core$String* $tmp3410 = *$tmp3409;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3407, ((org$frostlang$frostc$Symbol*) $tmp3408), $tmp3410);
org$frostlang$frostc$MethodDecl* $tmp3411 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block129;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:800
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3412;
$tmp3412 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3412->value = param7;
frost$core$Int $tmp3413 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:800:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3414 = &(&local50)->$rawValue;
*$tmp3414 = $tmp3413;
org$frostlang$frostc$ClassDecl$Kind $tmp3415 = *(&local50);
*(&local49) = $tmp3415;
org$frostlang$frostc$ClassDecl$Kind $tmp3416 = *(&local49);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3417;
$tmp3417 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3417->value = $tmp3416;
ITable* $tmp3418 = ((frost$core$Equatable*) $tmp3412)->$class->itable;
while ($tmp3418->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3418 = $tmp3418->next;
}
$fn3420 $tmp3419 = $tmp3418->methods[0];
frost$core$Bit $tmp3421 = $tmp3419(((frost$core$Equatable*) $tmp3412), ((frost$core$Equatable*) $tmp3417));
bool $tmp3422 = $tmp3421.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3412)));
if ($tmp3422) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:801
frost$core$Bit $tmp3423 = (frost$core$Bit) {false};
*(&local51) = $tmp3423;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:802
org$frostlang$frostc$ClassDecl* $tmp3424 = *(&local16);
frost$collections$Array** $tmp3425 = &$tmp3424->choiceCases;
frost$collections$Array* $tmp3426 = *$tmp3425;
ITable* $tmp3427 = ((frost$collections$CollectionView*) $tmp3426)->$class->itable;
while ($tmp3427->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3427 = $tmp3427->next;
}
$fn3429 $tmp3428 = $tmp3427->methods[0];
frost$core$Int $tmp3430 = $tmp3428(((frost$collections$CollectionView*) $tmp3426));
frost$core$Int $tmp3431 = (frost$core$Int) {0u};
int64_t $tmp3432 = $tmp3430.value;
int64_t $tmp3433 = $tmp3431.value;
bool $tmp3434 = $tmp3432 > $tmp3433;
frost$core$Bit $tmp3435 = (frost$core$Bit) {$tmp3434};
bool $tmp3436 = $tmp3435.value;
if ($tmp3436) goto block146; else goto block148;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:803
org$frostlang$frostc$ClassDecl* $tmp3437 = *(&local16);
frost$collections$Array** $tmp3438 = &$tmp3437->choiceCases;
frost$collections$Array* $tmp3439 = *$tmp3438;
ITable* $tmp3440 = ((frost$collections$Iterable*) $tmp3439)->$class->itable;
while ($tmp3440->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3440 = $tmp3440->next;
}
$fn3442 $tmp3441 = $tmp3440->methods[0];
frost$collections$Iterator* $tmp3443 = $tmp3441(((frost$collections$Iterable*) $tmp3439));
goto block149;
block149:;
ITable* $tmp3444 = $tmp3443->$class->itable;
while ($tmp3444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3444 = $tmp3444->next;
}
$fn3446 $tmp3445 = $tmp3444->methods[0];
frost$core$Bit $tmp3447 = $tmp3445($tmp3443);
bool $tmp3448 = $tmp3447.value;
if ($tmp3448) goto block151; else goto block150;
block150:;
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp3449 = $tmp3443->$class->itable;
while ($tmp3449->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3449 = $tmp3449->next;
}
$fn3451 $tmp3450 = $tmp3449->methods[1];
frost$core$Object* $tmp3452 = $tmp3450($tmp3443);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp3452)));
org$frostlang$frostc$ChoiceCase* $tmp3453 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) $tmp3452);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:804
org$frostlang$frostc$ChoiceCase* $tmp3454 = *(&local52);
frost$collections$Array** $tmp3455 = &$tmp3454->fields;
frost$collections$Array* $tmp3456 = *$tmp3455;
ITable* $tmp3457 = ((frost$collections$CollectionView*) $tmp3456)->$class->itable;
while ($tmp3457->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3457 = $tmp3457->next;
}
$fn3459 $tmp3458 = $tmp3457->methods[0];
frost$core$Int $tmp3460 = $tmp3458(((frost$collections$CollectionView*) $tmp3456));
frost$core$Int $tmp3461 = (frost$core$Int) {0u};
int64_t $tmp3462 = $tmp3460.value;
int64_t $tmp3463 = $tmp3461.value;
bool $tmp3464 = $tmp3462 > $tmp3463;
frost$core$Bit $tmp3465 = (frost$core$Bit) {$tmp3464};
bool $tmp3466 = $tmp3465.value;
if ($tmp3466) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:805
frost$core$Bit $tmp3467 = (frost$core$Bit) {true};
*(&local51) = $tmp3467;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:806
frost$core$Frost$unref$frost$core$Object$Q($tmp3452);
org$frostlang$frostc$ChoiceCase* $tmp3468 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3452);
org$frostlang$frostc$ChoiceCase* $tmp3469 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block149;
block151:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:814
frost$core$Bit $tmp3470 = *(&local51);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:814:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3471 = $tmp3470.value;
bool $tmp3472 = !$tmp3471;
frost$core$Bit $tmp3473 = (frost$core$Bit) {$tmp3472};
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block160; else goto block161;
block148:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:811
org$frostlang$frostc$ClassDecl* $tmp3475 = *(&local16);
org$frostlang$frostc$Position* $tmp3476 = &$tmp3475->position;
org$frostlang$frostc$Position $tmp3477 = *$tmp3476;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:811:22
frost$io$File** $tmp3478 = &param0->source;
frost$io$File* $tmp3479 = *$tmp3478;
frost$core$Bit $tmp3480 = (frost$core$Bit) {$tmp3479 != NULL};
bool $tmp3481 = $tmp3480.value;
if ($tmp3481) goto block155; else goto block156;
block156:;
frost$core$Int $tmp3482 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3483, $tmp3482, &$s3484);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3485 = &param0->compiler;
frost$core$Weak* $tmp3486 = *$tmp3485;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3487 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3486);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block158; else goto block159;
block159:;
frost$core$Int $tmp3489 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3490, $tmp3489);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3491 = &$tmp3486->value;
frost$core$Object* $tmp3492 = *$tmp3491;
frost$core$Frost$ref$frost$core$Object$Q($tmp3492);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3492), $tmp3477, &$s3493);
frost$core$Frost$unref$frost$core$Object$Q($tmp3492);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:812
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3494 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3495 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3496 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3497 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3498 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3499 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:815
org$frostlang$frostc$ClassDecl* $tmp3500 = *(&local16);
frost$core$Weak** $tmp3501 = &param0->compiler;
frost$core$Weak* $tmp3502 = *$tmp3501;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:815:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3503 = &$tmp3502->_valid;
frost$core$Bit $tmp3504 = *$tmp3503;
bool $tmp3505 = $tmp3504.value;
if ($tmp3505) goto block165; else goto block166;
block166:;
frost$core$Int $tmp3506 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3507, $tmp3506);
abort(); // unreachable
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3508 = &$tmp3502->value;
frost$core$Object* $tmp3509 = *$tmp3508;
frost$core$Frost$ref$frost$core$Object$Q($tmp3509);
org$frostlang$frostc$Type** $tmp3510 = &((org$frostlang$frostc$Compiler*) $tmp3509)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp3511 = *$tmp3510;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
org$frostlang$frostc$Type** $tmp3512 = &$tmp3500->rawSuper;
org$frostlang$frostc$Type* $tmp3513 = *$tmp3512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
org$frostlang$frostc$Type** $tmp3514 = &$tmp3500->rawSuper;
*$tmp3514 = $tmp3511;
frost$core$Frost$unref$frost$core$Object$Q($tmp3509);
goto block161;
block161:;
goto block144;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:818
frost$core$Weak** $tmp3515 = &param0->compiler;
frost$core$Weak* $tmp3516 = *$tmp3515;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:818:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3517 = &$tmp3516->_valid;
frost$core$Bit $tmp3518 = *$tmp3517;
bool $tmp3519 = $tmp3518.value;
if ($tmp3519) goto block169; else goto block170;
block170:;
frost$core$Int $tmp3520 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3521, $tmp3520);
abort(); // unreachable
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3522 = &$tmp3516->value;
frost$core$Object* $tmp3523 = *$tmp3522;
frost$core$Frost$ref$frost$core$Object$Q($tmp3523);
frost$collections$Stack** $tmp3524 = &((org$frostlang$frostc$Compiler*) $tmp3523)->currentClass;
frost$collections$Stack* $tmp3525 = *$tmp3524;
frost$core$Object* $tmp3526 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3525);
frost$core$Frost$unref$frost$core$Object$Q($tmp3526);
frost$core$Frost$unref$frost$core$Object$Q($tmp3523);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:819
org$frostlang$frostc$ClassDecl* $tmp3527 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
org$frostlang$frostc$ClassDecl* $tmp3528 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3529 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3530 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3531 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3532));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3533 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3533));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3527;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3534 = &param1->classes;
frost$collections$Array* $tmp3535 = *$tmp3534;
ITable* $tmp3536 = ((frost$collections$Iterable*) $tmp3535)->$class->itable;
while ($tmp3536->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3536 = $tmp3536->next;
}
$fn3538 $tmp3537 = $tmp3536->methods[0];
frost$collections$Iterator* $tmp3539 = $tmp3537(((frost$collections$Iterable*) $tmp3535));
goto block1;
block1:;
ITable* $tmp3540 = $tmp3539->$class->itable;
while ($tmp3540->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3540 = $tmp3540->next;
}
$fn3542 $tmp3541 = $tmp3540->methods[0];
frost$core$Bit $tmp3543 = $tmp3541($tmp3539);
bool $tmp3544 = $tmp3543.value;
if ($tmp3544) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3545 = $tmp3539->$class->itable;
while ($tmp3545->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3545 = $tmp3545->next;
}
$fn3547 $tmp3546 = $tmp3545->methods[1];
frost$core$Object* $tmp3548 = $tmp3546($tmp3539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3548)));
org$frostlang$frostc$ClassDecl* $tmp3549 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp3548);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3550 = *(&local0);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:825:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3550));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3551 = &$tmp3550->classes;
frost$collections$Array* $tmp3552 = *$tmp3551;
ITable* $tmp3553 = ((frost$collections$Iterable*) $tmp3552)->$class->itable;
while ($tmp3553->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3553 = $tmp3553->next;
}
$fn3555 $tmp3554 = $tmp3553->methods[0];
frost$collections$Iterator* $tmp3556 = $tmp3554(((frost$collections$Iterable*) $tmp3552));
goto block5;
block5:;
ITable* $tmp3557 = $tmp3556->$class->itable;
while ($tmp3557->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3557 = $tmp3557->next;
}
$fn3559 $tmp3558 = $tmp3557->methods[0];
frost$core$Bit $tmp3560 = $tmp3558($tmp3556);
bool $tmp3561 = $tmp3560.value;
if ($tmp3561) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3562 = $tmp3556->$class->itable;
while ($tmp3562->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3562 = $tmp3562->next;
}
$fn3564 $tmp3563 = $tmp3562->methods[1];
frost$core$Object* $tmp3565 = $tmp3563($tmp3556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3565)));
org$frostlang$frostc$ClassDecl* $tmp3566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3566));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp3565);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3567 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:825:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3568 = &$tmp3567->classes;
frost$collections$Array* $tmp3569 = *$tmp3568;
ITable* $tmp3570 = ((frost$collections$Iterable*) $tmp3569)->$class->itable;
while ($tmp3570->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3570 = $tmp3570->next;
}
$fn3572 $tmp3571 = $tmp3570->methods[0];
frost$collections$Iterator* $tmp3573 = $tmp3571(((frost$collections$Iterable*) $tmp3569));
goto block9;
block9:;
ITable* $tmp3574 = $tmp3573->$class->itable;
while ($tmp3574->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3574 = $tmp3574->next;
}
$fn3576 $tmp3575 = $tmp3574->methods[0];
frost$core$Bit $tmp3577 = $tmp3575($tmp3573);
bool $tmp3578 = $tmp3577.value;
if ($tmp3578) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3579 = $tmp3573->$class->itable;
while ($tmp3579->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3579 = $tmp3579->next;
}
$fn3581 $tmp3580 = $tmp3579->methods[1];
frost$core$Object* $tmp3582 = $tmp3580($tmp3573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3582)));
org$frostlang$frostc$ClassDecl* $tmp3583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3583));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) $tmp3582);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3584 = *(&local2);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3584, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3582);
org$frostlang$frostc$ClassDecl* $tmp3585 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3585));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$core$Frost$unref$frost$core$Object$Q($tmp3565);
org$frostlang$frostc$ClassDecl* $tmp3586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
frost$core$Frost$unref$frost$core$Object$Q($tmp3548);
org$frostlang$frostc$ClassDecl* $tmp3587 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3539));
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
org$frostlang$frostc$ClassDecl** $tmp3588 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3589 = *$tmp3588;
frost$core$Bit $tmp3590 = (frost$core$Bit) {$tmp3589 == NULL};
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:832
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:833
ITable* $tmp3593 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp3593->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3593 = $tmp3593->next;
}
$fn3595 $tmp3594 = $tmp3593->methods[1];
frost$core$Bit $tmp3596 = $tmp3594(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s3592));
bool $tmp3597 = $tmp3596.value;
if ($tmp3597) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:834
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:834:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp3598 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s3599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
frost$core$String* $tmp3600 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3600));
*(&local0) = $tmp3598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:837
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3601));
frost$core$String* $tmp3602 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3602));
*(&local0) = &$s3603;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:839
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp3604 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp3605 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3606 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp3606);
frost$core$Int $tmp3607 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:840:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp3608 = &(&local2)->$rawValue;
*$tmp3608 = $tmp3607;
org$frostlang$frostc$ClassDecl$Kind $tmp3609 = *(&local2);
*(&local1) = $tmp3609;
org$frostlang$frostc$ClassDecl$Kind $tmp3610 = *(&local1);
frost$core$String* $tmp3611 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3612 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3612);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3613 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3613);
frost$core$Weak** $tmp3614 = &param0->compiler;
frost$core$Weak* $tmp3615 = *$tmp3614;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:841:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3616 = &$tmp3615->_valid;
frost$core$Bit $tmp3617 = *$tmp3616;
bool $tmp3618 = $tmp3617.value;
if ($tmp3618) goto block10; else goto block11;
block11:;
frost$core$Int $tmp3619 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3620, $tmp3619);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3621 = &$tmp3615->value;
frost$core$Object* $tmp3622 = *$tmp3621;
frost$core$Frost$ref$frost$core$Object$Q($tmp3622);
org$frostlang$frostc$SymbolTable** $tmp3623 = &((org$frostlang$frostc$Compiler*) $tmp3622)->root;
org$frostlang$frostc$SymbolTable* $tmp3624 = *$tmp3623;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp3604, param1, $tmp3605, param2, ((frost$core$String*) NULL), $tmp3606, $tmp3610, $tmp3611, ((frost$collections$ListView*) $tmp3612), $tmp3613, $tmp3624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
org$frostlang$frostc$ClassDecl** $tmp3625 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3626 = *$tmp3625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
org$frostlang$frostc$ClassDecl** $tmp3627 = &param0->bareCodeClass;
*$tmp3627 = $tmp3604;
frost$core$Frost$unref$frost$core$Object$Q($tmp3622);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:842
org$frostlang$frostc$ClassDecl** $tmp3628 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3629 = *$tmp3628;
ITable* $tmp3630 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp3630->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp3630 = $tmp3630->next;
}
$fn3632 $tmp3631 = $tmp3630->methods[1];
$tmp3631(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp3629));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:843
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3633 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3634 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3635 = *$tmp3634;
org$frostlang$frostc$Position $tmp3636 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3637 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3638 = (frost$core$Int) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3637, $tmp3638);
frost$core$Int $tmp3639 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:844:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3640 = &(&local4)->$rawValue;
*$tmp3640 = $tmp3639;
org$frostlang$frostc$MethodDecl$Kind $tmp3641 = *(&local4);
*(&local3) = $tmp3641;
org$frostlang$frostc$MethodDecl$Kind $tmp3642 = *(&local3);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3643 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3644 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3643, $tmp3644);
frost$core$Weak** $tmp3645 = &param0->compiler;
frost$core$Weak* $tmp3646 = *$tmp3645;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:845:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3647 = &$tmp3646->_valid;
frost$core$Bit $tmp3648 = *$tmp3647;
bool $tmp3649 = $tmp3648.value;
if ($tmp3649) goto block15; else goto block16;
block16:;
frost$core$Int $tmp3650 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3651, $tmp3650);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3652 = &$tmp3646->value;
frost$core$Object* $tmp3653 = *$tmp3652;
frost$core$Frost$ref$frost$core$Object$Q($tmp3653);
org$frostlang$frostc$Type** $tmp3654 = &((org$frostlang$frostc$Compiler*) $tmp3653)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3655 = *$tmp3654;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3656 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3656);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3633, $tmp3635, $tmp3636, ((frost$core$String*) NULL), $tmp3637, $tmp3642, &$s3657, ((frost$collections$Array*) NULL), $tmp3643, $tmp3655, $tmp3656);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
org$frostlang$frostc$MethodDecl* $tmp3658 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3658));
*(&local5) = $tmp3633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
frost$core$Frost$unref$frost$core$Object$Q($tmp3653);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:846
org$frostlang$frostc$ClassDecl** $tmp3659 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3660 = *$tmp3659;
frost$collections$Array** $tmp3661 = &$tmp3660->methods;
frost$collections$Array* $tmp3662 = *$tmp3661;
org$frostlang$frostc$MethodDecl* $tmp3663 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3662, ((frost$core$Object*) $tmp3663));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:847
org$frostlang$frostc$ClassDecl** $tmp3664 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3665 = *$tmp3664;
org$frostlang$frostc$SymbolTable** $tmp3666 = &$tmp3665->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3667 = *$tmp3666;
org$frostlang$frostc$MethodDecl* $tmp3668 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:847:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3669 = &((org$frostlang$frostc$Symbol*) $tmp3668)->name;
frost$core$String* $tmp3670 = *$tmp3669;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3667, ((org$frostlang$frostc$Symbol*) $tmp3668), $tmp3670);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:848
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3671 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3672 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3673 = *$tmp3672;
org$frostlang$frostc$Position $tmp3674 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3675 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp3676 = (frost$core$Int) {32u};
frost$core$Int $tmp3677 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.||(other:frost.core.Int):frost.core.Int from Scanner.frost:849:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
int64_t $tmp3678 = $tmp3676.value;
int64_t $tmp3679 = $tmp3677.value;
int64_t $tmp3680 = $tmp3678 | $tmp3679;
frost$core$Int $tmp3681 = (frost$core$Int) {$tmp3680};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp3675, $tmp3681);
frost$core$Int $tmp3682 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:850:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3683 = &(&local7)->$rawValue;
*$tmp3683 = $tmp3682;
org$frostlang$frostc$MethodDecl$Kind $tmp3684 = *(&local7);
*(&local6) = $tmp3684;
org$frostlang$frostc$MethodDecl$Kind $tmp3685 = *(&local6);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3686 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int $tmp3687 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int($tmp3686, $tmp3687);
frost$core$Weak** $tmp3688 = &param0->compiler;
frost$core$Weak* $tmp3689 = *$tmp3688;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:850:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3690 = &$tmp3689->_valid;
frost$core$Bit $tmp3691 = *$tmp3690;
bool $tmp3692 = $tmp3691.value;
if ($tmp3692) goto block22; else goto block23;
block23:;
frost$core$Int $tmp3693 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3694, $tmp3693);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3695 = &$tmp3689->value;
frost$core$Object* $tmp3696 = *$tmp3695;
frost$core$Frost$ref$frost$core$Object$Q($tmp3696);
org$frostlang$frostc$Type** $tmp3697 = &((org$frostlang$frostc$Compiler*) $tmp3696)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3698 = *$tmp3697;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3699 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3699);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3671, $tmp3673, $tmp3674, ((frost$core$String*) NULL), $tmp3675, $tmp3685, &$s3700, ((frost$collections$Array*) NULL), $tmp3686, $tmp3698, $tmp3699);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
org$frostlang$frostc$MethodDecl* $tmp3701 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3701));
*(&local8) = $tmp3671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
frost$core$Frost$unref$frost$core$Object$Q($tmp3696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3671));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:852
org$frostlang$frostc$ClassDecl** $tmp3702 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3703 = *$tmp3702;
frost$collections$Array** $tmp3704 = &$tmp3703->methods;
frost$collections$Array* $tmp3705 = *$tmp3704;
org$frostlang$frostc$MethodDecl* $tmp3706 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp3705, ((frost$core$Object*) $tmp3706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:853
org$frostlang$frostc$ClassDecl** $tmp3707 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3708 = *$tmp3707;
org$frostlang$frostc$SymbolTable** $tmp3709 = &$tmp3708->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3710 = *$tmp3709;
org$frostlang$frostc$MethodDecl* $tmp3711 = *(&local8);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:853:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3712 = &((org$frostlang$frostc$Symbol*) $tmp3711)->name;
frost$core$String* $tmp3713 = *$tmp3712;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3710, ((org$frostlang$frostc$Symbol*) $tmp3711), $tmp3713);
org$frostlang$frostc$MethodDecl* $tmp3714 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3715 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp3717 = &param0->source;
frost$io$File* $tmp3718 = *$tmp3717;
frost$core$Bit $tmp3719 = (frost$core$Bit) {$tmp3718 != NULL};
bool $tmp3720 = $tmp3719.value;
if ($tmp3720) goto block1; else goto block2;
block2:;
frost$core$Int $tmp3721 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3722, $tmp3721, &$s3723);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3724 = &param0->compiler;
frost$core$Weak* $tmp3725 = *$tmp3724;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp3726 = &$tmp3725->_valid;
frost$core$Bit $tmp3727 = *$tmp3726;
bool $tmp3728 = $tmp3727.value;
if ($tmp3728) goto block5; else goto block6;
block6:;
frost$core$Int $tmp3729 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3730, $tmp3729);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3731 = &$tmp3725->value;
frost$core$Object* $tmp3732 = *$tmp3731;
frost$core$Frost$ref$frost$core$Object$Q($tmp3732);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3732), param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3732);
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
frost$io$File** $tmp3733 = &param0->source;
frost$io$File* $tmp3734 = *$tmp3733;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3734));
frost$io$File** $tmp3735 = &param0->source;
*$tmp3735 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:864
frost$core$Int* $tmp3736 = &param2->$rawValue;
frost$core$Int $tmp3737 = *$tmp3736;
frost$core$Int $tmp3738 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:865:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3739 = $tmp3737.value;
int64_t $tmp3740 = $tmp3738.value;
bool $tmp3741 = $tmp3739 == $tmp3740;
frost$core$Bit $tmp3742 = (frost$core$Bit) {$tmp3741};
bool $tmp3743 = $tmp3742.value;
if ($tmp3743) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp3744 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3745 = *$tmp3744;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
org$frostlang$frostc$FixedArray* $tmp3746 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local0) = $tmp3745;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:866
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3747 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3747);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
frost$collections$Array* $tmp3748 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
*(&local1) = $tmp3747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:867
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3749));
frost$core$String* $tmp3750 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
*(&local2) = &$s3751;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:868
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp3752 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp3752);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
frost$collections$HashMap* $tmp3753 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
*(&local3) = $tmp3752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:869
org$frostlang$frostc$FixedArray* $tmp3754 = *(&local0);
ITable* $tmp3755 = ((frost$collections$Iterable*) $tmp3754)->$class->itable;
while ($tmp3755->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3755 = $tmp3755->next;
}
$fn3757 $tmp3756 = $tmp3755->methods[0];
frost$collections$Iterator* $tmp3758 = $tmp3756(((frost$collections$Iterable*) $tmp3754));
goto block4;
block4:;
ITable* $tmp3759 = $tmp3758->$class->itable;
while ($tmp3759->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3759 = $tmp3759->next;
}
$fn3761 $tmp3760 = $tmp3759->methods[0];
frost$core$Bit $tmp3762 = $tmp3760($tmp3758);
bool $tmp3763 = $tmp3762.value;
if ($tmp3763) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3764 = $tmp3758->$class->itable;
while ($tmp3764->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3764 = $tmp3764->next;
}
$fn3766 $tmp3765 = $tmp3764->methods[1];
frost$core$Object* $tmp3767 = $tmp3765($tmp3758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3767)));
org$frostlang$frostc$ASTNode* $tmp3768 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp3767);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:870
org$frostlang$frostc$ASTNode* $tmp3769 = *(&local4);
frost$core$Int* $tmp3770 = &$tmp3769->$rawValue;
frost$core$Int $tmp3771 = *$tmp3770;
frost$core$Int $tmp3772 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:871:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3773 = $tmp3771.value;
int64_t $tmp3774 = $tmp3772.value;
bool $tmp3775 = $tmp3773 == $tmp3774;
frost$core$Bit $tmp3776 = (frost$core$Bit) {$tmp3775};
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3778 = (org$frostlang$frostc$Position*) ($tmp3769->$data + 0);
org$frostlang$frostc$Position $tmp3779 = *$tmp3778;
frost$core$String** $tmp3780 = (frost$core$String**) ($tmp3769->$data + 24);
frost$core$String* $tmp3781 = *$tmp3780;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
frost$core$String* $tmp3782 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
*(&local5) = $tmp3781;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:872
frost$core$String* $tmp3783 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
frost$core$String* $tmp3784 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
*(&local2) = $tmp3783;
frost$core$String* $tmp3785 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int $tmp3786 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:874:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3787 = $tmp3771.value;
int64_t $tmp3788 = $tmp3786.value;
bool $tmp3789 = $tmp3787 == $tmp3788;
frost$core$Bit $tmp3790 = (frost$core$Bit) {$tmp3789};
bool $tmp3791 = $tmp3790.value;
if ($tmp3791) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3792 = (org$frostlang$frostc$Position*) ($tmp3769->$data + 0);
org$frostlang$frostc$Position $tmp3793 = *$tmp3792;
frost$core$String** $tmp3794 = (frost$core$String**) ($tmp3769->$data + 24);
frost$core$String* $tmp3795 = *$tmp3794;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3795));
frost$core$String* $tmp3796 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
*(&local6) = $tmp3795;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:875
frost$core$String* $tmp3797 = *(&local6);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from Scanner.frost:875:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp3798 = &$tmp3797->_length;
frost$core$Int $tmp3799 = *$tmp3798;
frost$core$String$Index $tmp3800 = frost$core$String$Index$init$frost$core$Int($tmp3799);
frost$core$String$Index$nullable $tmp3801 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp3797, &$s3802, $tmp3800);
*(&local7) = $tmp3801;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:876
*(&local8) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:877
frost$core$String$Index$nullable $tmp3803 = *(&local7);
frost$core$Bit $tmp3804 = (frost$core$Bit) {$tmp3803.nonnull};
bool $tmp3805 = $tmp3804.value;
if ($tmp3805) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:878
frost$core$String* $tmp3806 = *(&local6);
frost$core$String* $tmp3807 = *(&local6);
frost$core$String$Index$nullable $tmp3808 = *(&local7);
frost$core$String$Index $tmp3809 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp3807, ((frost$core$String$Index) $tmp3808.value));
frost$core$Bit $tmp3810 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3811 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3809, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3810);
frost$core$String* $tmp3812 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp3806, $tmp3811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
frost$core$String* $tmp3813 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
*(&local8) = $tmp3812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:881
frost$core$String* $tmp3814 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3814));
frost$core$String* $tmp3815 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3815));
*(&local8) = $tmp3814;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:883
frost$collections$HashMap* $tmp3816 = *(&local3);
frost$core$String* $tmp3817 = *(&local8);
frost$core$String* $tmp3818 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3816, ((frost$collections$Key*) $tmp3817), ((frost$core$Object*) $tmp3818));
frost$core$String* $tmp3819 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3819));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp3820 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block12:;
frost$core$Int $tmp3821 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:885:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3822 = $tmp3771.value;
int64_t $tmp3823 = $tmp3821.value;
bool $tmp3824 = $tmp3822 == $tmp3823;
frost$core$Bit $tmp3825 = (frost$core$Bit) {$tmp3824};
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp3827 = (org$frostlang$frostc$Position*) ($tmp3769->$data + 0);
org$frostlang$frostc$Position $tmp3828 = *$tmp3827;
*(&local9) = $tmp3828;
org$frostlang$frostc$ASTNode** $tmp3829 = (org$frostlang$frostc$ASTNode**) ($tmp3769->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3830 = *$tmp3829;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
org$frostlang$frostc$ASTNode* $tmp3831 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
*(&local10) = $tmp3830;
org$frostlang$frostc$FixedArray** $tmp3832 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3833 = *$tmp3832;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
org$frostlang$frostc$FixedArray* $tmp3834 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local11) = $tmp3833;
org$frostlang$frostc$ClassDecl$Kind* $tmp3835 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp3769->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp3836 = *$tmp3835;
*(&local12) = $tmp3836;
frost$core$String** $tmp3837 = (frost$core$String**) ($tmp3769->$data + 48);
frost$core$String* $tmp3838 = *$tmp3837;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3838));
frost$core$String* $tmp3839 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
*(&local13) = $tmp3838;
org$frostlang$frostc$FixedArray** $tmp3840 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3841 = *$tmp3840;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
org$frostlang$frostc$FixedArray* $tmp3842 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3842));
*(&local14) = $tmp3841;
org$frostlang$frostc$FixedArray** $tmp3843 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3844 = *$tmp3843;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3844));
org$frostlang$frostc$FixedArray* $tmp3845 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3845));
*(&local15) = $tmp3844;
org$frostlang$frostc$FixedArray** $tmp3846 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3847 = *$tmp3846;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
org$frostlang$frostc$FixedArray* $tmp3848 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3848));
*(&local16) = $tmp3847;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:887
frost$collections$HashMap* $tmp3849 = *(&local3);
frost$core$String* $tmp3850 = *(&local2);
org$frostlang$frostc$Position $tmp3851 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3852 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3853 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3854 = *(&local12);
frost$core$String* $tmp3855 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3856 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3857 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3858 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3859 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3849), $tmp3850, $tmp3851, $tmp3852, $tmp3853, $tmp3854, $tmp3855, $tmp3856, $tmp3857, $tmp3858);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3859));
org$frostlang$frostc$ClassDecl* $tmp3860 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3860));
*(&local17) = $tmp3859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3859));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:889
org$frostlang$frostc$ClassDecl* $tmp3861 = *(&local17);
frost$core$Bit $tmp3862 = (frost$core$Bit) {$tmp3861 != NULL};
bool $tmp3863 = $tmp3862.value;
if ($tmp3863) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:890
org$frostlang$frostc$ClassDecl* $tmp3864 = *(&local17);
frost$collections$Array* $tmp3865 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:890:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T($tmp3865, ((frost$core$Object*) $tmp3864));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3866 = &$tmp3864->classes;
frost$collections$Array* $tmp3867 = *$tmp3866;
ITable* $tmp3868 = ((frost$collections$Iterable*) $tmp3867)->$class->itable;
while ($tmp3868->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3868 = $tmp3868->next;
}
$fn3870 $tmp3869 = $tmp3868->methods[0];
frost$collections$Iterator* $tmp3871 = $tmp3869(((frost$collections$Iterable*) $tmp3867));
goto block25;
block25:;
ITable* $tmp3872 = $tmp3871->$class->itable;
while ($tmp3872->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3872 = $tmp3872->next;
}
$fn3874 $tmp3873 = $tmp3872->methods[0];
frost$core$Bit $tmp3875 = $tmp3873($tmp3871);
bool $tmp3876 = $tmp3875.value;
if ($tmp3876) goto block27; else goto block26;
block26:;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3877 = $tmp3871->$class->itable;
while ($tmp3877->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3877 = $tmp3877->next;
}
$fn3879 $tmp3878 = $tmp3877->methods[1];
frost$core$Object* $tmp3880 = $tmp3878($tmp3871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3880)));
org$frostlang$frostc$ClassDecl* $tmp3881 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3881));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) $tmp3880);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3882 = *(&local18);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:825:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:823
frost$collections$Array$add$frost$collections$Array$T($tmp3865, ((frost$core$Object*) $tmp3882));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:824
frost$collections$Array** $tmp3883 = &$tmp3882->classes;
frost$collections$Array* $tmp3884 = *$tmp3883;
ITable* $tmp3885 = ((frost$collections$Iterable*) $tmp3884)->$class->itable;
while ($tmp3885->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3885 = $tmp3885->next;
}
$fn3887 $tmp3886 = $tmp3885->methods[0];
frost$collections$Iterator* $tmp3888 = $tmp3886(((frost$collections$Iterable*) $tmp3884));
goto block29;
block29:;
ITable* $tmp3889 = $tmp3888->$class->itable;
while ($tmp3889->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3889 = $tmp3889->next;
}
$fn3891 $tmp3890 = $tmp3889->methods[0];
frost$core$Bit $tmp3892 = $tmp3890($tmp3888);
bool $tmp3893 = $tmp3892.value;
if ($tmp3893) goto block31; else goto block30;
block30:;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3894 = $tmp3888->$class->itable;
while ($tmp3894->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3894 = $tmp3894->next;
}
$fn3896 $tmp3895 = $tmp3894->methods[1];
frost$core$Object* $tmp3897 = $tmp3895($tmp3888);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3897)));
org$frostlang$frostc$ClassDecl* $tmp3898 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) $tmp3897);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:825
org$frostlang$frostc$ClassDecl* $tmp3899 = *(&local19);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3899, $tmp3865);
frost$core$Frost$unref$frost$core$Object$Q($tmp3897);
org$frostlang$frostc$ClassDecl* $tmp3900 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3900));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
frost$core$Frost$unref$frost$core$Object$Q($tmp3880);
org$frostlang$frostc$ClassDecl* $tmp3901 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3901));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
goto block23;
block23:;
org$frostlang$frostc$ClassDecl* $tmp3902 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3903 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3904 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3905 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3906 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3907 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3907));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3908 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block20:;
frost$core$Int $tmp3909 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:893:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp3910 = $tmp3771.value;
int64_t $tmp3911 = $tmp3909.value;
bool $tmp3912 = $tmp3910 == $tmp3911;
frost$core$Bit $tmp3913 = (frost$core$Bit) {$tmp3912};
bool $tmp3914 = $tmp3913.value;
if ($tmp3914) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3915 = (org$frostlang$frostc$Position*) ($tmp3769->$data + 0);
org$frostlang$frostc$Position $tmp3916 = *$tmp3915;
*(&local20) = $tmp3916;
org$frostlang$frostc$ASTNode** $tmp3917 = (org$frostlang$frostc$ASTNode**) ($tmp3769->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3918 = *$tmp3917;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
org$frostlang$frostc$ASTNode* $tmp3919 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
*(&local21) = $tmp3918;
org$frostlang$frostc$FixedArray** $tmp3920 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3921 = *$tmp3920;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
org$frostlang$frostc$FixedArray* $tmp3922 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
*(&local22) = $tmp3921;
org$frostlang$frostc$MethodDecl$Kind* $tmp3923 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3769->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3924 = *$tmp3923;
*(&local23) = $tmp3924;
frost$core$String** $tmp3925 = (frost$core$String**) ($tmp3769->$data + 48);
frost$core$String* $tmp3926 = *$tmp3925;
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
frost$core$String* $tmp3927 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
*(&local24) = $tmp3926;
org$frostlang$frostc$FixedArray** $tmp3928 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3929 = *$tmp3928;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
org$frostlang$frostc$FixedArray* $tmp3930 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3930));
*(&local25) = $tmp3929;
org$frostlang$frostc$FixedArray** $tmp3931 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3932 = *$tmp3931;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3932));
org$frostlang$frostc$FixedArray* $tmp3933 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3933));
*(&local26) = $tmp3932;
org$frostlang$frostc$ASTNode** $tmp3934 = (org$frostlang$frostc$ASTNode**) ($tmp3769->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3935 = *$tmp3934;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3935));
org$frostlang$frostc$ASTNode* $tmp3936 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3936));
*(&local27) = $tmp3935;
org$frostlang$frostc$FixedArray** $tmp3937 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3938 = *$tmp3937;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
org$frostlang$frostc$FixedArray* $tmp3939 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
*(&local28) = $tmp3938;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:895
org$frostlang$frostc$MethodDecl$Kind $tmp3940 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3941;
$tmp3941 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3941->value = $tmp3940;
frost$core$Int $tmp3942 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:895:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp3943 = &(&local30)->$rawValue;
*$tmp3943 = $tmp3942;
org$frostlang$frostc$MethodDecl$Kind $tmp3944 = *(&local30);
*(&local29) = $tmp3944;
org$frostlang$frostc$MethodDecl$Kind $tmp3945 = *(&local29);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3946;
$tmp3946 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3946->value = $tmp3945;
ITable* $tmp3947 = ((frost$core$Equatable*) $tmp3941)->$class->itable;
while ($tmp3947->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3947 = $tmp3947->next;
}
$fn3949 $tmp3948 = $tmp3947->methods[0];
frost$core$Bit $tmp3950 = $tmp3948(((frost$core$Equatable*) $tmp3941), ((frost$core$Equatable*) $tmp3946));
bool $tmp3951 = $tmp3950.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3946)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3941)));
if ($tmp3951) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:896
org$frostlang$frostc$Position $tmp3952 = *(&local20);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:896:38
frost$io$File** $tmp3953 = &param0->source;
frost$io$File* $tmp3954 = *$tmp3953;
frost$core$Bit $tmp3955 = (frost$core$Bit) {$tmp3954 != NULL};
bool $tmp3956 = $tmp3955.value;
if ($tmp3956) goto block39; else goto block40;
block40:;
frost$core$Int $tmp3957 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3958, $tmp3957, &$s3959);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp3960 = &param0->compiler;
frost$core$Weak* $tmp3961 = *$tmp3960;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp3962 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3961);
bool $tmp3963 = $tmp3962.value;
if ($tmp3963) goto block42; else goto block43;
block43:;
frost$core$Int $tmp3964 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3965, $tmp3964);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp3966 = &$tmp3961->value;
frost$core$Object* $tmp3967 = *$tmp3966;
frost$core$Frost$ref$frost$core$Object$Q($tmp3967);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3967), $tmp3952, &$s3968);
frost$core$Frost$unref$frost$core$Object$Q($tmp3967);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:897
org$frostlang$frostc$FixedArray* $tmp3969 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3970 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3970));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3971 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3972 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3972));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3973 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3974 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3974));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3975 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3975));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3767);
org$frostlang$frostc$ASTNode* $tmp3976 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3976));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:899
frost$collections$HashMap* $tmp3977 = *(&local3);
frost$core$String* $tmp3978 = *(&local2);
frost$collections$Array* $tmp3979 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3977), $tmp3978, ((frost$collections$List*) $tmp3979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:900
*(&local31) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:901
frost$core$String* $tmp3980 = *(&local24);
frost$core$Bit $tmp3981 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3980, &$s3982);
bool $tmp3983 = $tmp3981.value;
if ($tmp3983) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:902
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3984));
frost$core$String* $tmp3985 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
*(&local31) = &$s3986;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:903
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3987 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3987);
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
frost$collections$Array* $tmp3988 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local32) = $tmp3987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:904
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3989 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3989);
*(&local33) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
frost$collections$Array* $tmp3990 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
*(&local33) = $tmp3989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:905
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3991 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3991);
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
frost$collections$Array* $tmp3992 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3992));
*(&local34) = $tmp3991;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:906
org$frostlang$frostc$FixedArray* $tmp3993 = *(&local26);
ITable* $tmp3994 = ((frost$collections$Iterable*) $tmp3993)->$class->itable;
while ($tmp3994->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3994 = $tmp3994->next;
}
$fn3996 $tmp3995 = $tmp3994->methods[0];
frost$collections$Iterator* $tmp3997 = $tmp3995(((frost$collections$Iterable*) $tmp3993));
goto block47;
block47:;
ITable* $tmp3998 = $tmp3997->$class->itable;
while ($tmp3998->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3998 = $tmp3998->next;
}
$fn4000 $tmp3999 = $tmp3998->methods[0];
frost$core$Bit $tmp4001 = $tmp3999($tmp3997);
bool $tmp4002 = $tmp4001.value;
if ($tmp4002) goto block49; else goto block48;
block48:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp4003 = $tmp3997->$class->itable;
while ($tmp4003->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4003 = $tmp4003->next;
}
$fn4005 $tmp4004 = $tmp4003->methods[1];
frost$core$Object* $tmp4006 = $tmp4004($tmp3997);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp4006)));
org$frostlang$frostc$ASTNode* $tmp4007 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp4006);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:907
org$frostlang$frostc$ASTNode* $tmp4008 = *(&local35);
frost$core$Int* $tmp4009 = &$tmp4008->$rawValue;
frost$core$Int $tmp4010 = *$tmp4009;
frost$core$Int $tmp4011 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:908:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4012 = $tmp4010.value;
int64_t $tmp4013 = $tmp4011.value;
bool $tmp4014 = $tmp4012 == $tmp4013;
frost$core$Bit $tmp4015 = (frost$core$Bit) {$tmp4014};
bool $tmp4016 = $tmp4015.value;
if ($tmp4016) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Position* $tmp4017 = (org$frostlang$frostc$Position*) ($tmp4008->$data + 0);
org$frostlang$frostc$Position $tmp4018 = *$tmp4017;
*(&local36) = $tmp4018;
frost$core$String** $tmp4019 = (frost$core$String**) ($tmp4008->$data + 24);
frost$core$String* $tmp4020 = *$tmp4019;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
frost$core$String* $tmp4021 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
*(&local37) = $tmp4020;
org$frostlang$frostc$ASTNode** $tmp4022 = (org$frostlang$frostc$ASTNode**) ($tmp4008->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4023 = *$tmp4022;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
org$frostlang$frostc$ASTNode* $tmp4024 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local38) = $tmp4023;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:909
frost$collections$Array* $tmp4025 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp4026 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp4027 = *(&local37);
org$frostlang$frostc$ASTNode* $tmp4028 = *(&local38);
org$frostlang$frostc$Type* $tmp4029 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4028);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp4026, $tmp4027, $tmp4029);
frost$collections$Array$add$frost$collections$Array$T($tmp4025, ((frost$core$Object*) $tmp4026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:911
frost$collections$Array* $tmp4030 = *(&local34);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4031 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4032 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp4033 = *(&local36);
frost$core$String* $tmp4034 = *(&local37);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp4031, $tmp4032, $tmp4033, $tmp4034);
frost$collections$Array$add$frost$collections$Array$T($tmp4030, ((frost$core$Object*) $tmp4031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
org$frostlang$frostc$ASTNode* $tmp4035 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4036 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp4006);
org$frostlang$frostc$ASTNode* $tmp4037 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:914
frost$core$Int $tmp4038 = (frost$core$Int) {914u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4039, $tmp4038);
abort(); // unreachable
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:918
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4040 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4041 = (frost$core$Int) {9u};
org$frostlang$frostc$Position $tmp4042 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4043 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4044 = (frost$core$Int) {22u};
org$frostlang$frostc$Position $tmp4045 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp4043, $tmp4044, $tmp4045, &$s4046);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp4047 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4047);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4040, $tmp4041, $tmp4042, $tmp4043, $tmp4047);
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
org$frostlang$frostc$ASTNode* $tmp4048 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
*(&local39) = $tmp4040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:921
frost$collections$Array* $tmp4049 = *(&local33);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4050 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4051 = (frost$core$Int) {9u};
org$frostlang$frostc$Position $tmp4052 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4053 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp4054 = (frost$core$Int) {16u};
org$frostlang$frostc$Position $tmp4055 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4056 = *(&local39);
frost$core$String* $tmp4057 = *(&local31);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4053, $tmp4054, $tmp4055, $tmp4056, $tmp4057);
frost$collections$Array* $tmp4058 = *(&local34);
org$frostlang$frostc$FixedArray* $tmp4059 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4058);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4050, $tmp4051, $tmp4052, $tmp4053, $tmp4059);
frost$collections$Array$add$frost$collections$Array$T($tmp4049, ((frost$core$Object*) $tmp4050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4050));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:924
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:925
org$frostlang$frostc$ASTNode* $tmp4060 = *(&local27);
frost$core$Bit $tmp4061 = (frost$core$Bit) {$tmp4060 != NULL};
bool $tmp4062 = $tmp4061.value;
if ($tmp4062) goto block54; else goto block56;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:926
org$frostlang$frostc$ASTNode* $tmp4063 = *(&local27);
org$frostlang$frostc$Type* $tmp4064 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
org$frostlang$frostc$Type* $tmp4065 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
*(&local40) = $tmp4064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
goto block55;
block56:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:929
frost$core$Weak** $tmp4066 = &param0->compiler;
frost$core$Weak* $tmp4067 = *$tmp4066;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:929:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4068 = &$tmp4067->_valid;
frost$core$Bit $tmp4069 = *$tmp4068;
bool $tmp4070 = $tmp4069.value;
if ($tmp4070) goto block59; else goto block60;
block60:;
frost$core$Int $tmp4071 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4072, $tmp4071);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4073 = &$tmp4067->value;
frost$core$Object* $tmp4074 = *$tmp4073;
frost$core$Frost$ref$frost$core$Object$Q($tmp4074);
org$frostlang$frostc$Type** $tmp4075 = &((org$frostlang$frostc$Compiler*) $tmp4074)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp4076 = *$tmp4075;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
org$frostlang$frostc$Type* $tmp4077 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4077));
*(&local40) = $tmp4076;
frost$core$Frost$unref$frost$core$Object$Q($tmp4074);
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:931
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp4078 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp4079 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4080 = *$tmp4079;
org$frostlang$frostc$Position $tmp4081 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp4082 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int $tmp4083 = (frost$core$Int) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int($tmp4082, $tmp4083);
frost$core$Int $tmp4084 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:932:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp4085 = &(&local42)->$rawValue;
*$tmp4085 = $tmp4084;
org$frostlang$frostc$MethodDecl$Kind $tmp4086 = *(&local42);
*(&local41) = $tmp4086;
org$frostlang$frostc$MethodDecl$Kind $tmp4087 = *(&local41);
frost$collections$Array* $tmp4088 = *(&local32);
org$frostlang$frostc$Type* $tmp4089 = *(&local40);
frost$collections$Array* $tmp4090 = *(&local33);
org$frostlang$frostc$FixedArray* $tmp4091 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4090);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4078, $tmp4080, $tmp4081, ((frost$core$String*) NULL), $tmp4082, $tmp4087, &$s4092, ((frost$collections$Array*) NULL), $tmp4088, $tmp4089, $tmp4091);
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
org$frostlang$frostc$MethodDecl* $tmp4093 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
*(&local43) = $tmp4078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:935
org$frostlang$frostc$ClassDecl** $tmp4094 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4095 = *$tmp4094;
frost$collections$Array** $tmp4096 = &$tmp4095->methods;
frost$collections$Array* $tmp4097 = *$tmp4096;
org$frostlang$frostc$MethodDecl* $tmp4098 = *(&local43);
frost$collections$Array$add$frost$collections$Array$T($tmp4097, ((frost$core$Object*) $tmp4098));
org$frostlang$frostc$MethodDecl* $tmp4099 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp4100 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp4101 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4102 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
*(&local34) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4103 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
*(&local33) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4104 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4104));
*(&local32) = ((frost$collections$Array*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:938
frost$core$String* $tmp4105 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
frost$core$String* $tmp4106 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
*(&local31) = $tmp4105;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:940
frost$core$Weak** $tmp4107 = &param0->compiler;
frost$core$Weak* $tmp4108 = *$tmp4107;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:940:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4109 = &$tmp4108->_valid;
frost$core$Bit $tmp4110 = *$tmp4109;
bool $tmp4111 = $tmp4110.value;
if ($tmp4111) goto block64; else goto block65;
block65:;
frost$core$Int $tmp4112 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4113, $tmp4112);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4114 = &$tmp4108->value;
frost$core$Object* $tmp4115 = *$tmp4114;
frost$core$Frost$ref$frost$core$Object$Q($tmp4115);
frost$collections$Stack** $tmp4116 = &((org$frostlang$frostc$Compiler*) $tmp4115)->currentClass;
frost$collections$Stack* $tmp4117 = *$tmp4116;
org$frostlang$frostc$ClassDecl** $tmp4118 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4119 = *$tmp4118;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:940:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
frost$collections$Array** $tmp4120 = &$tmp4117->contents;
frost$collections$Array* $tmp4121 = *$tmp4120;
frost$collections$Array$add$frost$collections$Array$T($tmp4121, ((frost$core$Object*) $tmp4119));
frost$core$Frost$unref$frost$core$Object$Q($tmp4115);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:941
org$frostlang$frostc$ClassDecl** $tmp4122 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4123 = *$tmp4122;
org$frostlang$frostc$Position $tmp4124 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4125 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp4126 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind $tmp4127 = *(&local23);
frost$core$String* $tmp4128 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp4129 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp4130 = *(&local26);
org$frostlang$frostc$ASTNode* $tmp4131 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp4132 = *(&local28);
org$frostlang$frostc$MethodDecl* $tmp4133 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp4123, $tmp4124, $tmp4125, $tmp4126, $tmp4127, $tmp4128, $tmp4129, $tmp4130, $tmp4131, $tmp4132);
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4133));
org$frostlang$frostc$MethodDecl* $tmp4134 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4134));
*(&local44) = $tmp4133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4133));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:943
org$frostlang$frostc$MethodDecl* $tmp4135 = *(&local44);
org$frostlang$frostc$Annotations** $tmp4136 = &$tmp4135->annotations;
org$frostlang$frostc$Annotations* $tmp4137 = *$tmp4136;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:943:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp4138 = &$tmp4137->flags;
frost$core$Int $tmp4139 = *$tmp4138;
frost$core$Int $tmp4140 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4141 = $tmp4139.value;
int64_t $tmp4142 = $tmp4140.value;
int64_t $tmp4143 = $tmp4141 & $tmp4142;
frost$core$Int $tmp4144 = (frost$core$Int) {$tmp4143};
frost$core$Int $tmp4145 = (frost$core$Int) {0u};
int64_t $tmp4146 = $tmp4144.value;
int64_t $tmp4147 = $tmp4145.value;
bool $tmp4148 = $tmp4146 != $tmp4147;
frost$core$Bit $tmp4149 = (frost$core$Bit) {$tmp4148};
bool $tmp4150 = $tmp4149.value;
if ($tmp4150) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:944
org$frostlang$frostc$MethodDecl* $tmp4151 = *(&local44);
org$frostlang$frostc$Position* $tmp4152 = &((org$frostlang$frostc$Symbol*) $tmp4151)->position;
org$frostlang$frostc$Position $tmp4153 = *$tmp4152;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:944:38
frost$io$File** $tmp4154 = &param0->source;
frost$io$File* $tmp4155 = *$tmp4154;
frost$core$Bit $tmp4156 = (frost$core$Bit) {$tmp4155 != NULL};
bool $tmp4157 = $tmp4156.value;
if ($tmp4157) goto block72; else goto block73;
block73:;
frost$core$Int $tmp4158 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4159, $tmp4158, &$s4160);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp4161 = &param0->compiler;
frost$core$Weak* $tmp4162 = *$tmp4161;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4163 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4162);
bool $tmp4164 = $tmp4163.value;
if ($tmp4164) goto block75; else goto block76;
block76:;
frost$core$Int $tmp4165 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4166, $tmp4165);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4167 = &$tmp4162->value;
frost$core$Object* $tmp4168 = *$tmp4167;
frost$core$Frost$ref$frost$core$Object$Q($tmp4168);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4168), $tmp4153, &$s4169);
frost$core$Frost$unref$frost$core$Object$Q($tmp4168);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:946
org$frostlang$frostc$MethodDecl* $tmp4170 = *(&local44);
org$frostlang$frostc$Annotations** $tmp4171 = &$tmp4170->annotations;
org$frostlang$frostc$Annotations* $tmp4172 = *$tmp4171;
frost$core$Int* $tmp4173 = &$tmp4172->flags;
frost$core$Int $tmp4174 = *$tmp4173;
frost$core$Int $tmp4175 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.!!():frost.core.Int from Scanner.frost:946:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:275
int64_t $tmp4176 = $tmp4175.value;
int64_t $tmp4177 = !$tmp4176;
frost$core$Int $tmp4178 = (frost$core$Int) {$tmp4177};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Scanner.frost:946:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4179 = $tmp4174.value;
int64_t $tmp4180 = $tmp4178.value;
int64_t $tmp4181 = $tmp4179 & $tmp4180;
frost$core$Int $tmp4182 = (frost$core$Int) {$tmp4181};
frost$core$Int* $tmp4183 = &$tmp4172->flags;
*$tmp4183 = $tmp4182;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:948
frost$core$Weak** $tmp4184 = &param0->compiler;
frost$core$Weak* $tmp4185 = *$tmp4184;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:948:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4186 = &$tmp4185->_valid;
frost$core$Bit $tmp4187 = *$tmp4186;
bool $tmp4188 = $tmp4187.value;
if ($tmp4188) goto block81; else goto block82;
block82:;
frost$core$Int $tmp4189 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4190, $tmp4189);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4191 = &$tmp4185->value;
frost$core$Object* $tmp4192 = *$tmp4191;
frost$core$Frost$ref$frost$core$Object$Q($tmp4192);
frost$collections$Stack** $tmp4193 = &((org$frostlang$frostc$Compiler*) $tmp4192)->currentClass;
frost$collections$Stack* $tmp4194 = *$tmp4193;
frost$core$Int $tmp4195 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Scanner.frost:948:57
frost$core$Int $tmp4196 = (frost$core$Int) {0u};
int64_t $tmp4197 = $tmp4195.value;
int64_t $tmp4198 = $tmp4196.value;
bool $tmp4199 = $tmp4197 >= $tmp4198;
frost$core$Bit $tmp4200 = (frost$core$Bit) {$tmp4199};
bool $tmp4201 = $tmp4200.value;
if ($tmp4201) goto block86; else goto block85;
block86:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
frost$collections$Array** $tmp4202 = &$tmp4194->contents;
frost$collections$Array* $tmp4203 = *$tmp4202;
ITable* $tmp4204 = ((frost$collections$CollectionView*) $tmp4203)->$class->itable;
while ($tmp4204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4204 = $tmp4204->next;
}
$fn4206 $tmp4205 = $tmp4204->methods[0];
frost$core$Int $tmp4207 = $tmp4205(((frost$collections$CollectionView*) $tmp4203));
int64_t $tmp4208 = $tmp4195.value;
int64_t $tmp4209 = $tmp4207.value;
bool $tmp4210 = $tmp4208 < $tmp4209;
frost$core$Bit $tmp4211 = (frost$core$Bit) {$tmp4210};
bool $tmp4212 = $tmp4211.value;
if ($tmp4212) goto block84; else goto block85;
block85:;
frost$core$Int $tmp4213 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4214, $tmp4213, &$s4215);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
frost$collections$Array** $tmp4216 = &$tmp4194->contents;
frost$collections$Array* $tmp4217 = *$tmp4216;
ITable* $tmp4218 = ((frost$collections$CollectionView*) $tmp4217)->$class->itable;
while ($tmp4218->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4218 = $tmp4218->next;
}
$fn4220 $tmp4219 = $tmp4218->methods[0];
frost$core$Int $tmp4221 = $tmp4219(((frost$collections$CollectionView*) $tmp4217));
int64_t $tmp4222 = $tmp4221.value;
int64_t $tmp4223 = $tmp4195.value;
bool $tmp4224 = $tmp4222 > $tmp4223;
frost$core$Bit $tmp4225 = (frost$core$Bit) {$tmp4224};
bool $tmp4226 = $tmp4225.value;
if ($tmp4226) goto block88; else goto block89;
block89:;
frost$core$Int $tmp4227 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4228, $tmp4227);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
frost$collections$Array** $tmp4229 = &$tmp4194->contents;
frost$collections$Array* $tmp4230 = *$tmp4229;
frost$collections$Array** $tmp4231 = &$tmp4194->contents;
frost$collections$Array* $tmp4232 = *$tmp4231;
ITable* $tmp4233 = ((frost$collections$CollectionView*) $tmp4232)->$class->itable;
while ($tmp4233->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4233 = $tmp4233->next;
}
$fn4235 $tmp4234 = $tmp4233->methods[0];
frost$core$Int $tmp4236 = $tmp4234(((frost$collections$CollectionView*) $tmp4232));
frost$core$Int $tmp4237 = (frost$core$Int) {1u};
int64_t $tmp4238 = $tmp4236.value;
int64_t $tmp4239 = $tmp4237.value;
int64_t $tmp4240 = $tmp4238 - $tmp4239;
frost$core$Int $tmp4241 = (frost$core$Int) {$tmp4240};
int64_t $tmp4242 = $tmp4241.value;
int64_t $tmp4243 = $tmp4195.value;
int64_t $tmp4244 = $tmp4242 - $tmp4243;
frost$core$Int $tmp4245 = (frost$core$Int) {$tmp4244};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
frost$core$Int $tmp4246 = (frost$core$Int) {0u};
int64_t $tmp4247 = $tmp4245.value;
int64_t $tmp4248 = $tmp4246.value;
bool $tmp4249 = $tmp4247 >= $tmp4248;
frost$core$Bit $tmp4250 = (frost$core$Bit) {$tmp4249};
bool $tmp4251 = $tmp4250.value;
if ($tmp4251) goto block93; else goto block92;
block93:;
ITable* $tmp4252 = ((frost$collections$CollectionView*) $tmp4230)->$class->itable;
while ($tmp4252->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4252 = $tmp4252->next;
}
$fn4254 $tmp4253 = $tmp4252->methods[0];
frost$core$Int $tmp4255 = $tmp4253(((frost$collections$CollectionView*) $tmp4230));
int64_t $tmp4256 = $tmp4245.value;
int64_t $tmp4257 = $tmp4255.value;
bool $tmp4258 = $tmp4256 < $tmp4257;
frost$core$Bit $tmp4259 = (frost$core$Bit) {$tmp4258};
bool $tmp4260 = $tmp4259.value;
if ($tmp4260) goto block91; else goto block92;
block92:;
frost$core$Int $tmp4261 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4262, $tmp4261, &$s4263);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp4264 = &$tmp4230->data;
frost$core$Object** $tmp4265 = *$tmp4264;
frost$core$Int64 $tmp4266 = frost$core$Int64$init$frost$core$Int($tmp4245);
int64_t $tmp4267 = $tmp4266.value;
frost$core$Object* $tmp4268 = $tmp4265[$tmp4267];
frost$core$Frost$ref$frost$core$Object$Q($tmp4268);
frost$core$Frost$ref$frost$core$Object$Q($tmp4268);
frost$core$Frost$unref$frost$core$Object$Q($tmp4268);
org$frostlang$frostc$ClassDecl** $tmp4269 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4270 = *$tmp4269;
bool $tmp4271 = ((org$frostlang$frostc$ClassDecl*) $tmp4268) == $tmp4270;
frost$core$Bit $tmp4272 = (frost$core$Bit) {$tmp4271};
bool $tmp4273 = $tmp4272.value;
if ($tmp4273) goto block94; else goto block95;
block95:;
frost$core$Int $tmp4274 = (frost$core$Int) {948u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4275, $tmp4274);
abort(); // unreachable
block94:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4268);
frost$core$Frost$unref$frost$core$Object$Q($tmp4192);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:949
frost$core$Weak** $tmp4276 = &param0->compiler;
frost$core$Weak* $tmp4277 = *$tmp4276;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:949:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp4278 = &$tmp4277->_valid;
frost$core$Bit $tmp4279 = *$tmp4278;
bool $tmp4280 = $tmp4279.value;
if ($tmp4280) goto block98; else goto block99;
block99:;
frost$core$Int $tmp4281 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4282, $tmp4281);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4283 = &$tmp4277->value;
frost$core$Object* $tmp4284 = *$tmp4283;
frost$core$Frost$ref$frost$core$Object$Q($tmp4284);
frost$collections$Stack** $tmp4285 = &((org$frostlang$frostc$Compiler*) $tmp4284)->currentClass;
frost$collections$Stack* $tmp4286 = *$tmp4285;
frost$core$Object* $tmp4287 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4286);
frost$core$Frost$unref$frost$core$Object$Q($tmp4287);
frost$core$Frost$unref$frost$core$Object$Q($tmp4284);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:950
org$frostlang$frostc$ClassDecl** $tmp4288 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4289 = *$tmp4288;
frost$collections$Array** $tmp4290 = &$tmp4289->methods;
frost$collections$Array* $tmp4291 = *$tmp4290;
org$frostlang$frostc$MethodDecl* $tmp4292 = *(&local44);
frost$collections$Array$add$frost$collections$Array$T($tmp4291, ((frost$core$Object*) $tmp4292));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:951
org$frostlang$frostc$ClassDecl** $tmp4293 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4294 = *$tmp4293;
org$frostlang$frostc$SymbolTable** $tmp4295 = &$tmp4294->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4296 = *$tmp4295;
org$frostlang$frostc$MethodDecl* $tmp4297 = *(&local44);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:951:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp4298 = &((org$frostlang$frostc$Symbol*) $tmp4297)->name;
frost$core$String* $tmp4299 = *$tmp4298;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp4296, ((org$frostlang$frostc$Symbol*) $tmp4297), $tmp4299);
org$frostlang$frostc$MethodDecl* $tmp4300 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp4301 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
*(&local31) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4302 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4303 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4304 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4304));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4305 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4305));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4306 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4307 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4308 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block33:;
frost$core$Int $tmp4309 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Scanner.frost:953:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp4310 = $tmp3771.value;
int64_t $tmp4311 = $tmp4309.value;
bool $tmp4312 = $tmp4310 == $tmp4311;
frost$core$Bit $tmp4313 = (frost$core$Bit) {$tmp4312};
bool $tmp4314 = $tmp4313.value;
if ($tmp4314) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp4315 = (org$frostlang$frostc$Position*) ($tmp3769->$data + 0);
org$frostlang$frostc$Position $tmp4316 = *$tmp4315;
*(&local45) = $tmp4316;
org$frostlang$frostc$ASTNode** $tmp4317 = (org$frostlang$frostc$ASTNode**) ($tmp3769->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4318 = *$tmp4317;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
org$frostlang$frostc$ASTNode* $tmp4319 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
*(&local46) = $tmp4318;
org$frostlang$frostc$FixedArray** $tmp4320 = (org$frostlang$frostc$FixedArray**) ($tmp3769->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4321 = *$tmp4320;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4321));
org$frostlang$frostc$FixedArray* $tmp4322 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4322));
*(&local47) = $tmp4321;
org$frostlang$frostc$ASTNode** $tmp4323 = (org$frostlang$frostc$ASTNode**) ($tmp3769->$data + 40);
org$frostlang$frostc$ASTNode* $tmp4324 = *$tmp4323;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4324));
org$frostlang$frostc$ASTNode* $tmp4325 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
*(&local48) = $tmp4324;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:954
frost$collections$HashMap* $tmp4326 = *(&local3);
frost$core$String* $tmp4327 = *(&local2);
frost$collections$Array* $tmp4328 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp4326), $tmp4327, ((frost$collections$List*) $tmp4328));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:955
org$frostlang$frostc$ClassDecl** $tmp4329 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4330 = *$tmp4329;
frost$collections$Array** $tmp4331 = &$tmp4330->fields;
frost$collections$Array* $tmp4332 = *$tmp4331;
ITable* $tmp4333 = ((frost$collections$CollectionView*) $tmp4332)->$class->itable;
while ($tmp4333->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4333 = $tmp4333->next;
}
$fn4335 $tmp4334 = $tmp4333->methods[0];
frost$core$Int $tmp4336 = $tmp4334(((frost$collections$CollectionView*) $tmp4332));
*(&local49) = $tmp4336;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:956
org$frostlang$frostc$ClassDecl** $tmp4337 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4338 = *$tmp4337;
org$frostlang$frostc$Position $tmp4339 = *(&local45);
org$frostlang$frostc$ASTNode* $tmp4340 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp4341 = *(&local47);
org$frostlang$frostc$ASTNode* $tmp4342 = *(&local48);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp4338, $tmp4339, $tmp4340, $tmp4341, $tmp4342);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:957
frost$core$Int $tmp4343 = *(&local49);
org$frostlang$frostc$ClassDecl** $tmp4344 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4345 = *$tmp4344;
frost$collections$Array** $tmp4346 = &$tmp4345->fields;
frost$collections$Array* $tmp4347 = *$tmp4346;
ITable* $tmp4348 = ((frost$collections$CollectionView*) $tmp4347)->$class->itable;
while ($tmp4348->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4348 = $tmp4348->next;
}
$fn4350 $tmp4349 = $tmp4348->methods[0];
frost$core$Int $tmp4351 = $tmp4349(((frost$collections$CollectionView*) $tmp4347));
frost$core$Bit $tmp4352 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp4353 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp4343, $tmp4351, $tmp4352);
frost$core$Int $tmp4354 = $tmp4353.min;
*(&local50) = $tmp4354;
frost$core$Int $tmp4355 = $tmp4353.max;
frost$core$Bit $tmp4356 = $tmp4353.inclusive;
bool $tmp4357 = $tmp4356.value;
frost$core$Int $tmp4358 = (frost$core$Int) {1u};
if ($tmp4357) goto block107; else goto block108;
block107:;
int64_t $tmp4359 = $tmp4354.value;
int64_t $tmp4360 = $tmp4355.value;
bool $tmp4361 = $tmp4359 <= $tmp4360;
frost$core$Bit $tmp4362 = (frost$core$Bit) {$tmp4361};
bool $tmp4363 = $tmp4362.value;
if ($tmp4363) goto block104; else goto block105;
block108:;
int64_t $tmp4364 = $tmp4354.value;
int64_t $tmp4365 = $tmp4355.value;
bool $tmp4366 = $tmp4364 < $tmp4365;
frost$core$Bit $tmp4367 = (frost$core$Bit) {$tmp4366};
bool $tmp4368 = $tmp4367.value;
if ($tmp4368) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:958
org$frostlang$frostc$ClassDecl** $tmp4369 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4370 = *$tmp4369;
frost$collections$Array** $tmp4371 = &$tmp4370->fields;
frost$collections$Array* $tmp4372 = *$tmp4371;
frost$core$Int $tmp4373 = *(&local50);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Scanner.frost:958:62
frost$core$Int $tmp4374 = (frost$core$Int) {0u};
int64_t $tmp4375 = $tmp4373.value;
int64_t $tmp4376 = $tmp4374.value;
bool $tmp4377 = $tmp4375 >= $tmp4376;
frost$core$Bit $tmp4378 = (frost$core$Bit) {$tmp4377};
bool $tmp4379 = $tmp4378.value;
if ($tmp4379) goto block112; else goto block111;
block112:;
ITable* $tmp4380 = ((frost$collections$CollectionView*) $tmp4372)->$class->itable;
while ($tmp4380->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4380 = $tmp4380->next;
}
$fn4382 $tmp4381 = $tmp4380->methods[0];
frost$core$Int $tmp4383 = $tmp4381(((frost$collections$CollectionView*) $tmp4372));
int64_t $tmp4384 = $tmp4373.value;
int64_t $tmp4385 = $tmp4383.value;
bool $tmp4386 = $tmp4384 < $tmp4385;
frost$core$Bit $tmp4387 = (frost$core$Bit) {$tmp4386};
bool $tmp4388 = $tmp4387.value;
if ($tmp4388) goto block110; else goto block111;
block111:;
frost$core$Int $tmp4389 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4390, $tmp4389, &$s4391);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp4392 = &$tmp4372->data;
frost$core$Object** $tmp4393 = *$tmp4392;
frost$core$Int64 $tmp4394 = frost$core$Int64$init$frost$core$Int($tmp4373);
int64_t $tmp4395 = $tmp4394.value;
frost$core$Object* $tmp4396 = $tmp4393[$tmp4395];
frost$core$Frost$ref$frost$core$Object$Q($tmp4396);
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4396)));
org$frostlang$frostc$FieldDecl* $tmp4397 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4397));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) $tmp4396);
frost$core$Frost$unref$frost$core$Object$Q($tmp4396);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:959
org$frostlang$frostc$FieldDecl* $tmp4398 = *(&local51);
org$frostlang$frostc$FieldDecl$Kind* $tmp4399 = &$tmp4398->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp4400 = *$tmp4399;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4401;
$tmp4401 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4401->value = $tmp4400;
frost$core$Int $tmp4402 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:959:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp4403 = &(&local53)->$rawValue;
*$tmp4403 = $tmp4402;
org$frostlang$frostc$FieldDecl$Kind $tmp4404 = *(&local53);
*(&local52) = $tmp4404;
org$frostlang$frostc$FieldDecl$Kind $tmp4405 = *(&local52);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4406;
$tmp4406 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4406->value = $tmp4405;
ITable* $tmp4407 = ((frost$core$Equatable*) $tmp4401)->$class->itable;
while ($tmp4407->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4407 = $tmp4407->next;
}
$fn4409 $tmp4408 = $tmp4407->methods[1];
frost$core$Bit $tmp4410 = $tmp4408(((frost$core$Equatable*) $tmp4401), ((frost$core$Equatable*) $tmp4406));
bool $tmp4411 = $tmp4410.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4406)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4401)));
if ($tmp4411) goto block115; else goto block114;
block115:;
org$frostlang$frostc$FieldDecl* $tmp4412 = *(&local51);
org$frostlang$frostc$Annotations** $tmp4413 = &$tmp4412->annotations;
org$frostlang$frostc$Annotations* $tmp4414 = *$tmp4413;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:960:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
frost$core$Int* $tmp4415 = &$tmp4414->flags;
frost$core$Int $tmp4416 = *$tmp4415;
frost$core$Int $tmp4417 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp4418 = $tmp4416.value;
int64_t $tmp4419 = $tmp4417.value;
int64_t $tmp4420 = $tmp4418 & $tmp4419;
frost$core$Int $tmp4421 = (frost$core$Int) {$tmp4420};
frost$core$Int $tmp4422 = (frost$core$Int) {0u};
int64_t $tmp4423 = $tmp4421.value;
int64_t $tmp4424 = $tmp4422.value;
bool $tmp4425 = $tmp4423 != $tmp4424;
frost$core$Bit $tmp4426 = (frost$core$Bit) {$tmp4425};
bool $tmp4427 = $tmp4426.value;
if ($tmp4427) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:961
org$frostlang$frostc$FieldDecl* $tmp4428 = *(&local51);
org$frostlang$frostc$Position* $tmp4429 = &((org$frostlang$frostc$Symbol*) $tmp4428)->position;
org$frostlang$frostc$Position $tmp4430 = *$tmp4429;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:961:42
frost$io$File** $tmp4431 = &param0->source;
frost$io$File* $tmp4432 = *$tmp4431;
frost$core$Bit $tmp4433 = (frost$core$Bit) {$tmp4432 != NULL};
bool $tmp4434 = $tmp4433.value;
if ($tmp4434) goto block120; else goto block121;
block121:;
frost$core$Int $tmp4435 = (frost$core$Int) {858u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4436, $tmp4435, &$s4437);
abort(); // unreachable
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:859
frost$core$Weak** $tmp4438 = &param0->compiler;
frost$core$Weak* $tmp4439 = *$tmp4438;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:859:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
frost$core$Bit $tmp4440 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4439);
bool $tmp4441 = $tmp4440.value;
if ($tmp4441) goto block123; else goto block124;
block124:;
frost$core$Int $tmp4442 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4443, $tmp4442);
abort(); // unreachable
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp4444 = &$tmp4439->value;
frost$core$Object* $tmp4445 = *$tmp4444;
frost$core$Frost$ref$frost$core$Object$Q($tmp4445);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4445), $tmp4430, &$s4446);
frost$core$Frost$unref$frost$core$Object$Q($tmp4445);
goto block114;
block114:;
org$frostlang$frostc$FieldDecl* $tmp4447 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Int $tmp4448 = *(&local50);
int64_t $tmp4449 = $tmp4355.value;
int64_t $tmp4450 = $tmp4448.value;
int64_t $tmp4451 = $tmp4449 - $tmp4450;
frost$core$Int $tmp4452 = (frost$core$Int) {$tmp4451};
if ($tmp4357) goto block126; else goto block127;
block126:;
int64_t $tmp4453 = $tmp4452.value;
int64_t $tmp4454 = $tmp4358.value;
bool $tmp4455 = $tmp4453 >= $tmp4454;
frost$core$Bit $tmp4456 = (frost$core$Bit) {$tmp4455};
bool $tmp4457 = $tmp4456.value;
if ($tmp4457) goto block125; else goto block105;
block127:;
int64_t $tmp4458 = $tmp4452.value;
int64_t $tmp4459 = $tmp4358.value;
bool $tmp4460 = $tmp4458 > $tmp4459;
frost$core$Bit $tmp4461 = (frost$core$Bit) {$tmp4460};
bool $tmp4462 = $tmp4461.value;
if ($tmp4462) goto block125; else goto block105;
block125:;
int64_t $tmp4463 = $tmp4448.value;
int64_t $tmp4464 = $tmp4358.value;
int64_t $tmp4465 = $tmp4463 + $tmp4464;
frost$core$Int $tmp4466 = (frost$core$Int) {$tmp4465};
*(&local50) = $tmp4466;
goto block104;
block105:;
org$frostlang$frostc$ASTNode* $tmp4467 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4468 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4469 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:967
frost$core$Int $tmp4470 = (frost$core$Int) {967u};
org$frostlang$frostc$ASTNode* $tmp4471 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:967:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4473 $tmp4472 = ($fn4473) ((frost$core$Object*) $tmp4471)->$class->vtable[0];
frost$core$String* $tmp4474 = $tmp4472(((frost$core$Object*) $tmp4471));
frost$core$String* $tmp4475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4476, $tmp4474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4474));
frost$core$String* $tmp4477 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4475, &$s4478);
org$frostlang$frostc$ASTNode* $tmp4479 = *(&local4);
frost$core$Int* $tmp4480 = &$tmp4479->$rawValue;
frost$core$Int $tmp4481 = *$tmp4480;
frost$core$Int$wrapper* $tmp4482;
$tmp4482 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4482->value = $tmp4481;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:967:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4484 $tmp4483 = ($fn4484) ((frost$core$Object*) $tmp4482)->$class->vtable[0];
frost$core$String* $tmp4485 = $tmp4483(((frost$core$Object*) $tmp4482));
frost$core$String* $tmp4486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4477, $tmp4485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
frost$core$String* $tmp4487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4486, &$s4488);
org$frostlang$frostc$ASTNode* $tmp4489 = *(&local4);
$fn4491 $tmp4490 = ($fn4491) $tmp4489->$class->vtable[2];
org$frostlang$frostc$Position $tmp4492 = $tmp4490($tmp4489);
org$frostlang$frostc$Position$wrapper* $tmp4493;
$tmp4493 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp4493->value = $tmp4492;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:967:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn4495 $tmp4494 = ($fn4495) ((frost$core$Object*) $tmp4493)->$class->vtable[0];
frost$core$String* $tmp4496 = $tmp4494(((frost$core$Object*) $tmp4493));
frost$core$String* $tmp4497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4487, $tmp4496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4496));
frost$core$String* $tmp4498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4497, &$s4499);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4500, $tmp4470, $tmp4498);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4475));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3767);
org$frostlang$frostc$ASTNode* $tmp4501 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:971
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp4502 = &param0->source;
frost$io$File* $tmp4503 = *$tmp4502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$io$File** $tmp4504 = &param0->source;
*$tmp4504 = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:972
frost$collections$Array* $tmp4505 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp4505)));
frost$collections$HashMap* $tmp4506 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4506));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp4507 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp4508 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4508));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp4509 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4509));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp4505);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:975
frost$core$Int $tmp4510 = (frost$core$Int) {975u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4511, $tmp4510);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp4512 = &param0->compiler;
frost$core$Weak* $tmp4513 = *$tmp4512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4513));
org$frostlang$frostc$ClassDecl** $tmp4514 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4515 = *$tmp4514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4515));
frost$io$File** $tmp4516 = &param0->source;
frost$io$File* $tmp4517 = *$tmp4516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4517));
return;

}

