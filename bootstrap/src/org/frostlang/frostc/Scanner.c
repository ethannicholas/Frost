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

typedef frost$core$Int64 (*$fn233)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn279)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn283)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn288)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn302)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn340)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn413)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn417)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn422)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn457)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn485)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn489)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn494)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn507)(frost$core$Object*);
typedef frost$core$String* (*$fn517)(frost$core$Object*);
typedef frost$core$Bit (*$fn575)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn584)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn588)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn593)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn741)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn743)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn770)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn772)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn799)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn801)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn828)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn830)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn857)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn859)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1018)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1022)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1027)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1127)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1184)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1188)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1193)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1289)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1293)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1298)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1337)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1341)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1346)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1427)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1431)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1436)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1507)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1511)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1516)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1566)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1570)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1575)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1624)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1628)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1633)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1668)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1672)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1677)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1694)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1698)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1703)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1893)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1897)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1902)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1933)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1937)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1942)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1956)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1960)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1965)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2000)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2004)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2009)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn2076)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2080)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2085)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2138)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2193)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2197)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2202)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2261)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn2275)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2279)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2284)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2338)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2367)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2413)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2647)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn2651)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2728)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2760)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2764)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2769)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2782)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2800)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2839)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2843)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2848)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2907)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2927)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2948)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2952)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2957)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3004)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3079)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3083)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3088)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3127)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3193)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3197)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3202)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3216)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3231)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3281)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3290)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3341)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3352)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3361)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3412)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3421)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3434)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3438)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3443)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3451)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn3530)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3534)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3539)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3547)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3551)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3556)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3564)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3568)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3573)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3587)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn3624)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn3749)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3753)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3758)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3862)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3866)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3871)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn3879)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3883)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3888)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3941)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3988)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3992)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3997)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn4198)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4212)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4227)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4246)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4326)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4341)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4375)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4401)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn4467)(frost$core$Object*);
typedef frost$core$String* (*$fn4478)(frost$core$Object*);
typedef org$frostlang$frostc$Position (*$fn4485)(org$frostlang$frostc$ASTNode*);
typedef frost$core$String* (*$fn4489)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 28, 7937364740017265678, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6541439029621442568, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, -8407340892165143446, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -6941121115643176919, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -6943069450247988361, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -6947880913132093572, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, 1636909511958265571, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 6113830950894022042, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 6115664936289499540, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 6120445612848014843, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -7692517852738059576, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -7695345796645250593, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, 2075497417580251538, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 7272646099210467152, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, -4705630147413002136, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -565795814387083701, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, 1726036079575195661, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, 1659788717951863933, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1094253743368195802, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, 2564706465071019727, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 4364512108910063541, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 6873686358610603073, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 9160589370450948847, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, -3895476746833326716, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 7435792352060934372, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, -507229471558551835, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, -8337610593683542155, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 6536665699122092278, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, 2083579122674506872, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, -1102905984370395173, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, 1659619246779549287, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, -2594619287818381368, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s725 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 134526994446166888, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 5031055877270038133, NULL };
static frost$core$String $s783 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, -1205915675663244815, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 6601423246907155994, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 3008583721667412327, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, 5029378179413211882, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s881 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 3933979906453277221, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s905 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1069 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s1098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 4631530323501320402, NULL };
static frost$core$String $s2453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -2702568160131628339, NULL };
static frost$core$String $s2632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3479509698475155476, NULL };
static frost$core$String $s2733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s2807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s2830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s2936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s2942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -3719689727633176608, NULL };
static frost$core$String $s2976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s2988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3029 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, -2729473888161922992, NULL };
static frost$core$String $s3058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 8996675876247625211, NULL };
static frost$core$String $s3149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, -3178355849381906807, NULL };
static frost$core$String $s3172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -8426410652778701193, NULL };
static frost$core$String $s3224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 1323168004075572057, NULL };
static frost$core$String $s3287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -770938211666792916, NULL };
static frost$core$String $s3385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -157497934161719815, NULL };
static frost$core$String $s3499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s3591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 4069187544645537896, NULL };
static frost$core$String $s3593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 8709918089330709925, NULL };
static frost$core$String $s3612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, -733330526605839853, NULL };
static frost$core$String $s3686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, -6028003110606329165, NULL };
static frost$core$String $s3714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s3743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 1410721983868311694, NULL };
static frost$core$String $s3794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s3950 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s3951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s3957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s3960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, 4149591465855488060, NULL };
static frost$core$String $s3974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s3976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s3978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, -1472219934221974406, NULL };
static frost$core$String $s4031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 6449659721254005836, NULL };
static frost$core$String $s4064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s4105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s4207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s4220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s4254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s4255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s4266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s4384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s4428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, 3424171414808300191, NULL };
static frost$core$String $s4435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, -1038031786811403499, NULL };
static frost$core$String $s4438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 2772314849070967545, NULL };
static frost$core$String $s4470 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3524753437392098394, NULL };
static frost$core$String $s4472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s4482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3a", 2, 566763092841805498, NULL };
static frost$core$String $s4493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s4494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };
static frost$core$String $s4505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, 951771403658311961, NULL };

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
frost$core$Int64* $tmp6 = &param1->$rawValue;
frost$core$Int64 $tmp7 = *$tmp6;
frost$core$Int64 $tmp8 = (frost$core$Int64) {46u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:26:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
frost$core$Int64 $tmp20 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.String.[](index:frost.core.Int64):frost.core.Char32 from Scanner.frost:27:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:190
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from String.stub:190:21
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:283
frost$core$Int64 $tmp21 = (frost$core$Int64) {0u};
frost$core$String$Index $tmp22 = frost$core$String$Index$init$frost$core$Int64($tmp21);
frost$core$String$Index $tmp23 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index($tmp19, $tmp22, $tmp20);
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp38 = &$tmp37->_valid;
frost$core$Bit $tmp39 = *$tmp38;
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp41 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s42, $tmp41);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp53 = &$tmp52->_valid;
frost$core$Bit $tmp54 = *$tmp53;
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s57, $tmp56);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp68 = &$tmp67->_valid;
frost$core$Bit $tmp69 = *$tmp68;
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s72, $tmp71);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp83 = &$tmp82->_valid;
frost$core$Bit $tmp84 = *$tmp83;
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp86 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s87, $tmp86);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp98 = &$tmp97->_valid;
frost$core$Bit $tmp99 = *$tmp98;
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s102, $tmp101);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp113 = &$tmp112->_valid;
frost$core$Bit $tmp114 = *$tmp113;
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s117, $tmp116);
abort(); // unreachable
block45:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp128 = &$tmp127->_valid;
frost$core$Bit $tmp129 = *$tmp128;
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s132, $tmp131);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp143 = &$tmp142->_valid;
frost$core$Bit $tmp144 = *$tmp143;
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp146 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s147, $tmp146);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp158 = &$tmp157->_valid;
frost$core$Bit $tmp159 = *$tmp158;
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp161 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s162, $tmp161);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp173 = &$tmp172->_valid;
frost$core$Bit $tmp174 = *$tmp173;
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp176 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s177, $tmp176);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp188 = &$tmp187->_valid;
frost$core$Bit $tmp189 = *$tmp188;
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp191 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s192, $tmp191);
abort(); // unreachable
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
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
frost$core$Int64 $tmp200 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:42:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp201 = &(&local3)->$rawValue;
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
frost$core$Int64 $tmp206 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:44:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
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
frost$core$Int64 $tmp218 = (frost$core$Int64) {1u};
frost$collections$Array$init$frost$core$Int64($tmp217, $tmp218);
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
frost$core$Int64 $tmp224 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Scanner.frost:46:37
frost$core$Int64 $tmp225 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp234 = $tmp232(((frost$collections$CollectionView*) $tmp223));
int64_t $tmp235 = $tmp224.value;
int64_t $tmp236 = $tmp234.value;
bool $tmp237 = $tmp235 < $tmp236;
frost$core$Bit $tmp238 = (frost$core$Bit) {$tmp237};
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp240 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s241, $tmp240, &$s242);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp243 = &$tmp223->data;
frost$core$Object** $tmp244 = *$tmp243;
int64_t $tmp245 = $tmp224.value;
frost$core$Object* $tmp246 = $tmp244[$tmp245];
frost$core$Frost$ref$frost$core$Object$Q($tmp246);
frost$core$String** $tmp247 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp246))->name;
frost$core$String* $tmp248 = *$tmp247;
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp248, &$s250);
frost$core$Int64 $tmp251 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:46:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp252 = &(&local8)->$rawValue;
*$tmp252 = $tmp251;
org$frostlang$frostc$Type$Kind $tmp253 = *(&local8);
*(&local7) = $tmp253;
org$frostlang$frostc$Type$Kind $tmp254 = *(&local7);
org$frostlang$frostc$Position $tmp255 = *(&local4);
frost$collections$Array* $tmp256 = *(&local6);
frost$core$Bit $tmp257 = (frost$core$Bit) {false};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp222, $tmp249, $tmp254, $tmp255, ((frost$collections$ListView*) $tmp256), $tmp257);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q($tmp246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$collections$Array* $tmp258 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp259 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp222;
block78:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {21u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:48:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp261 = $tmp7.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Position* $tmp266 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp267 = *$tmp266;
*(&local9) = $tmp267;
frost$core$String** $tmp268 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp269 = *$tmp268;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$String* $tmp270 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local10) = $tmp269;
org$frostlang$frostc$FixedArray** $tmp271 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp272 = *$tmp271;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
org$frostlang$frostc$FixedArray* $tmp273 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local11) = $tmp272;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:49
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp274 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp274);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$collections$Array* $tmp275 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local12) = $tmp274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:50
org$frostlang$frostc$FixedArray* $tmp276 = *(&local11);
ITable* $tmp277 = ((frost$collections$Iterable*) $tmp276)->$class->itable;
while ($tmp277->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp277 = $tmp277->next;
}
$fn279 $tmp278 = $tmp277->methods[0];
frost$collections$Iterator* $tmp280 = $tmp278(((frost$collections$Iterable*) $tmp276));
goto block88;
block88:;
ITable* $tmp281 = $tmp280->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[0];
frost$core$Bit $tmp284 = $tmp282($tmp280);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block90; else goto block89;
block89:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp286 = $tmp280->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[1];
frost$core$Object* $tmp289 = $tmp287($tmp280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp289)));
org$frostlang$frostc$ASTNode* $tmp290 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp289);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:51
frost$collections$Array* $tmp291 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp292 = *(&local13);
org$frostlang$frostc$Type* $tmp293 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp292);
frost$collections$Array$add$frost$collections$Array$T($tmp291, ((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q($tmp289);
org$frostlang$frostc$ASTNode* $tmp294 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block88;
block90:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:53
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp295 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp296 = *(&local10);
frost$core$Int64 $tmp297 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:53:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp298 = &(&local15)->$rawValue;
*$tmp298 = $tmp297;
org$frostlang$frostc$Type$Kind $tmp299 = *(&local15);
*(&local14) = $tmp299;
org$frostlang$frostc$Type$Kind $tmp300 = *(&local14);
$fn302 $tmp301 = ($fn302) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp303 = $tmp301(param1);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp295, $tmp296, $tmp300, $tmp303);
frost$collections$Array* $tmp304 = *(&local12);
org$frostlang$frostc$Type* $tmp305 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp295, ((frost$collections$ListView*) $tmp304));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
frost$collections$Array* $tmp306 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local12) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp307 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp308 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local10) = ((frost$core$String*) NULL);
return $tmp305;
block86:;
frost$core$Int64 $tmp309 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:55:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp310 = $tmp7.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 == $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block92; else goto block93;
block92:;
org$frostlang$frostc$Position* $tmp315 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp316 = *$tmp315;
org$frostlang$frostc$IR$Value** $tmp317 = (org$frostlang$frostc$IR$Value**) (param1->$data + 24);
org$frostlang$frostc$IR$Value* $tmp318 = *$tmp317;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
org$frostlang$frostc$IR$Value* $tmp319 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local16) = $tmp318;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:56
org$frostlang$frostc$IR$Value* $tmp320 = *(&local16);
frost$core$Int64* $tmp321 = &$tmp320->$rawValue;
frost$core$Int64 $tmp322 = *$tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:57:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp324 = $tmp322.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 == $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block96; else goto block95;
block96:;
org$frostlang$frostc$Type** $tmp329 = (org$frostlang$frostc$Type**) ($tmp320->$data + 0);
org$frostlang$frostc$Type* $tmp330 = *$tmp329;
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
org$frostlang$frostc$Type* $tmp331 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local17) = $tmp330;
org$frostlang$frostc$Type** $tmp332 = (org$frostlang$frostc$Type**) ($tmp320->$data + 8);
org$frostlang$frostc$Type* $tmp333 = *$tmp332;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:58
org$frostlang$frostc$Type* $tmp334 = *(&local17);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
org$frostlang$frostc$Type* $tmp335 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp336 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp334;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:61
frost$core$Int64 $tmp337 = (frost$core$Int64) {61u};
org$frostlang$frostc$IR$Value* $tmp338 = *(&local16);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:61:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn340 $tmp339 = ($fn340) ((frost$core$Object*) $tmp338)->$class->vtable[0];
frost$core$String* $tmp341 = $tmp339(((frost$core$Object*) $tmp338));
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s343, $tmp341);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$String* $tmp344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp342, &$s345);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s346, $tmp337, $tmp344);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
abort(); // unreachable
block93:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {30u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:63:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp348 = $tmp7.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 == $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp353 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp354 = *$tmp353;
*(&local18) = $tmp354;
org$frostlang$frostc$parser$Token$Kind* $tmp355 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp356 = *$tmp355;
*(&local19) = $tmp356;
org$frostlang$frostc$FixedArray** $tmp357 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp358 = *$tmp357;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
org$frostlang$frostc$FixedArray* $tmp359 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local20) = $tmp358;
org$frostlang$frostc$ASTNode** $tmp360 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp361 = *$tmp360;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
org$frostlang$frostc$ASTNode* $tmp362 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local21) = $tmp361;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:65
org$frostlang$frostc$parser$Token$Kind $tmp363 = *(&local19);
frost$core$Int64 $tmp364 = $tmp363.$rawValue;
frost$core$Int64 $tmp365 = (frost$core$Int64) {95u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:66:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 == $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:67
frost$core$Int64 $tmp371 = (frost$core$Int64) {15u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:67:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp372 = &(&local24)->$rawValue;
*$tmp372 = $tmp371;
org$frostlang$frostc$Type$Kind $tmp373 = *(&local24);
*(&local23) = $tmp373;
org$frostlang$frostc$Type$Kind $tmp374 = *(&local23);
*(&local22) = $tmp374;
goto block102;
block104:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {96u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:69:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp376 = $tmp364.value;
int64_t $tmp377 = $tmp375.value;
bool $tmp378 = $tmp376 == $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:70
frost$core$Int64 $tmp381 = (frost$core$Int64) {16u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:70:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp382 = &(&local26)->$rawValue;
*$tmp382 = $tmp381;
org$frostlang$frostc$Type$Kind $tmp383 = *(&local26);
*(&local25) = $tmp383;
org$frostlang$frostc$Type$Kind $tmp384 = *(&local25);
*(&local22) = $tmp384;
goto block102;
block108:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {97u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:72:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp386 = $tmp364.value;
int64_t $tmp387 = $tmp385.value;
bool $tmp388 = $tmp386 == $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:73
frost$core$Int64 $tmp391 = (frost$core$Int64) {17u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:73:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp392 = &(&local28)->$rawValue;
*$tmp392 = $tmp391;
org$frostlang$frostc$Type$Kind $tmp393 = *(&local28);
*(&local27) = $tmp393;
org$frostlang$frostc$Type$Kind $tmp394 = *(&local27);
*(&local22) = $tmp394;
goto block102;
block112:;
frost$core$Int64 $tmp395 = (frost$core$Int64) {98u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:75:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp396 = $tmp364.value;
int64_t $tmp397 = $tmp395.value;
bool $tmp398 = $tmp396 == $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block115; else goto block116;
block115:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:76
frost$core$Int64 $tmp401 = (frost$core$Int64) {18u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:76:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp402 = &(&local30)->$rawValue;
*$tmp402 = $tmp401;
org$frostlang$frostc$Type$Kind $tmp403 = *(&local30);
*(&local29) = $tmp403;
org$frostlang$frostc$Type$Kind $tmp404 = *(&local29);
*(&local22) = $tmp404;
goto block102;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:79
frost$core$Int64 $tmp405 = (frost$core$Int64) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s406, $tmp405, &$s407);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:82
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp408 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp408);
*(&local31) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$collections$Array* $tmp409 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local31) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:83
org$frostlang$frostc$FixedArray* $tmp410 = *(&local20);
ITable* $tmp411 = ((frost$collections$Iterable*) $tmp410)->$class->itable;
while ($tmp411->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp411 = $tmp411->next;
}
$fn413 $tmp412 = $tmp411->methods[0];
frost$collections$Iterator* $tmp414 = $tmp412(((frost$collections$Iterable*) $tmp410));
goto block119;
block119:;
ITable* $tmp415 = $tmp414->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
frost$core$Bit $tmp418 = $tmp416($tmp414);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block121; else goto block120;
block120:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp420 = $tmp414->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp420 = $tmp420->next;
}
$fn422 $tmp421 = $tmp420->methods[1];
frost$core$Object* $tmp423 = $tmp421($tmp414);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp423)));
org$frostlang$frostc$ASTNode* $tmp424 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp423);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:84
frost$collections$Array* $tmp425 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp426 = *(&local32);
org$frostlang$frostc$Type* $tmp427 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp426);
frost$collections$Array$add$frost$collections$Array$T($tmp425, ((frost$core$Object*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$core$Frost$unref$frost$core$Object$Q($tmp423);
org$frostlang$frostc$ASTNode* $tmp428 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block119;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:86
*(&local33) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:87
org$frostlang$frostc$ASTNode* $tmp429 = *(&local21);
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429 != NULL};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block122; else goto block124;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:88
org$frostlang$frostc$ASTNode* $tmp432 = *(&local21);
org$frostlang$frostc$Type* $tmp433 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp432);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
org$frostlang$frostc$Type* $tmp434 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local33) = $tmp433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
goto block123;
block124:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:91
frost$core$Weak** $tmp435 = &param0->compiler;
frost$core$Weak* $tmp436 = *$tmp435;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:91:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp437 = &$tmp436->_valid;
frost$core$Bit $tmp438 = *$tmp437;
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block127; else goto block128;
block128:;
frost$core$Int64 $tmp440 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s441, $tmp440);
abort(); // unreachable
block127:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp442 = &$tmp436->value;
frost$core$Object* $tmp443 = *$tmp442;
frost$core$Frost$ref$frost$core$Object$Q($tmp443);
org$frostlang$frostc$Type** $tmp444 = &((org$frostlang$frostc$Compiler*) $tmp443)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp445 = *$tmp444;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
org$frostlang$frostc$Type* $tmp446 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local33) = $tmp445;
frost$core$Frost$unref$frost$core$Object$Q($tmp443);
goto block123;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:93
frost$core$Weak** $tmp447 = &param0->compiler;
frost$core$Weak* $tmp448 = *$tmp447;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:93:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp449 = &$tmp448->_valid;
frost$core$Bit $tmp450 = *$tmp449;
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block131; else goto block132;
block132:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s453, $tmp452);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp454 = &$tmp448->value;
frost$core$Object* $tmp455 = *$tmp454;
frost$core$Frost$ref$frost$core$Object$Q($tmp455);
$fn457 $tmp456 = ($fn457) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp458 = $tmp456(param1);
org$frostlang$frostc$Type$Kind $tmp459 = *(&local22);
frost$collections$Array* $tmp460 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp461 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp460);
org$frostlang$frostc$Type* $tmp462 = *(&local33);
frost$core$Int64 $tmp463 = (frost$core$Int64) {0u};
org$frostlang$frostc$Type* $tmp464 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp455), $tmp458, $tmp459, ((frost$collections$ListView*) $tmp461), $tmp462, $tmp463);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$Frost$unref$frost$core$Object$Q($tmp455);
org$frostlang$frostc$Type* $tmp465 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local33) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp466 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local31) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp467 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp468 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp464;
block100:;
frost$core$Int64 $tmp469 = (frost$core$Int64) {45u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:96:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp470 = $tmp7.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 == $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block133; else goto block134;
block133:;
org$frostlang$frostc$Position* $tmp475 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp476 = *$tmp475;
*(&local34) = $tmp476;
org$frostlang$frostc$FixedArray** $tmp477 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp478 = *$tmp477;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
org$frostlang$frostc$FixedArray* $tmp479 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local35) = $tmp478;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:97
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp480 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp480);
*(&local36) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$collections$Array* $tmp481 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local36) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:98
org$frostlang$frostc$FixedArray* $tmp482 = *(&local35);
ITable* $tmp483 = ((frost$collections$Iterable*) $tmp482)->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$collections$Iterator* $tmp486 = $tmp484(((frost$collections$Iterable*) $tmp482));
goto block136;
block136:;
ITable* $tmp487 = $tmp486->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[0];
frost$core$Bit $tmp490 = $tmp488($tmp486);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block138; else goto block137;
block137:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp492 = $tmp486->$class->itable;
while ($tmp492->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp492 = $tmp492->next;
}
$fn494 $tmp493 = $tmp492->methods[1];
frost$core$Object* $tmp495 = $tmp493($tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp495)));
org$frostlang$frostc$ASTNode* $tmp496 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp495);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:99
frost$collections$Array* $tmp497 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp498 = *(&local37);
org$frostlang$frostc$Type* $tmp499 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp498);
frost$collections$Array$add$frost$collections$Array$T($tmp497, ((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
org$frostlang$frostc$ASTNode* $tmp500 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block136;
block138:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:101
frost$collections$Array* $tmp501 = *(&local36);
org$frostlang$frostc$Type* $tmp502 = org$frostlang$frostc$Type$tuple$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((frost$collections$ListView*) $tmp501));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$collections$Array* $tmp503 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local36) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp504 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp502;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:104
frost$core$Int64 $tmp505 = (frost$core$Int64) {104u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn507 $tmp506 = ($fn507) ((frost$core$Object*) param1)->$class->vtable[0];
frost$core$String* $tmp508 = $tmp506(((frost$core$Object*) param1));
frost$core$String* $tmp509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s510, $tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$String* $tmp511 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp509, &$s512);
frost$core$Int64* $tmp513 = &param1->$rawValue;
frost$core$Int64 $tmp514 = *$tmp513;
frost$core$Int64$wrapper* $tmp515;
$tmp515 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp515->value = $tmp514;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:104:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn517 $tmp516 = ($fn517) ((frost$core$Object*) $tmp515)->$class->vtable[0];
frost$core$String* $tmp518 = $tmp516(((frost$core$Object*) $tmp515));
frost$core$String* $tmp519 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp511, $tmp518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
frost$core$String* $tmp520 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp519, &$s521);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s522, $tmp505, $tmp520);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:107
frost$core$Int64 $tmp523 = (frost$core$Int64) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s524, $tmp523);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:111
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:111:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp525 = param2.value;
int64_t $tmp526 = param3.value;
int64_t $tmp527 = $tmp525 & $tmp526;
frost$core$Int64 $tmp528 = (frost$core$Int64) {$tmp527};
frost$core$Int64 $tmp529 = (frost$core$Int64) {0u};
int64_t $tmp530 = $tmp528.value;
int64_t $tmp531 = $tmp529.value;
bool $tmp532 = $tmp530 != $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:112
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:112:18
frost$io$File** $tmp535 = &param0->source;
frost$io$File* $tmp536 = *$tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536 != NULL};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s540, $tmp539, &$s541);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp542 = &param0->compiler;
frost$core$Weak* $tmp543 = *$tmp542;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp544 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp543);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp546 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s547, $tmp546);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp548 = &$tmp543->value;
frost$core$Object* $tmp549 = *$tmp548;
frost$core$Frost$ref$frost$core$Object$Q($tmp549);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp549), param1, &$s550);
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:114
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:114:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp551 = param2.value;
int64_t $tmp552 = param3.value;
int64_t $tmp553 = $tmp551 | $tmp552;
frost$core$Int64 $tmp554 = (frost$core$Int64) {$tmp553};
return $tmp554;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:121
frost$core$Bit $tmp555 = (frost$core$Bit) {param3 != NULL};
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:122
frost$core$Bit $tmp557 = (frost$core$Bit) {true};
return $tmp557;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:124
frost$core$String* $tmp558 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s559, param2);
frost$core$String* $tmp560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp558, &$s561);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:124:26
frost$io$File** $tmp562 = &param0->source;
frost$io$File* $tmp563 = *$tmp562;
frost$core$Bit $tmp564 = (frost$core$Bit) {$tmp563 != NULL};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp566 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s567, $tmp566, &$s568);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp569 = &param0->compiler;
frost$core$Weak* $tmp570 = *$tmp569;
frost$core$Object* $tmp571 = frost$core$Weak$get$R$frost$core$Weak$T($tmp570);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp571), param1, $tmp560);
frost$core$Frost$unref$frost$core$Object$Q($tmp571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:125
frost$core$Bit $tmp572 = (frost$core$Bit) {false};
return $tmp572;

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
frost$core$Int64 $tmp573 = (frost$core$Int64) {0u};
*(&local0) = $tmp573;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:119
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp574 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local1) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp576 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Scanner.frost:120:9
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
frost$core$Int8** $tmp577 = &$tmp576->pointer;
*$tmp577 = ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable** $tmp578 = &$tmp576->target;
frost$core$Immutable* $tmp579 = *$tmp578;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Immutable** $tmp580 = &$tmp576->target;
*$tmp580 = ((frost$core$Immutable*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:120
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Method* $tmp581 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local2) = $tmp576;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:127
ITable* $tmp582 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp582->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp582 = $tmp582->next;
}
$fn584 $tmp583 = $tmp582->methods[0];
frost$collections$Iterator* $tmp585 = $tmp583(((frost$collections$Iterable*) param1));
goto block2;
block2:;
ITable* $tmp586 = $tmp585->$class->itable;
while ($tmp586->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp586 = $tmp586->next;
}
$fn588 $tmp587 = $tmp586->methods[0];
frost$core$Bit $tmp589 = $tmp587($tmp585);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block4; else goto block3;
block3:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp591 = $tmp585->$class->itable;
while ($tmp591->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp591 = $tmp591->next;
}
$fn593 $tmp592 = $tmp591->methods[1];
frost$core$Object* $tmp594 = $tmp592($tmp585);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp594)));
org$frostlang$frostc$ASTNode* $tmp595 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp594);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:128
org$frostlang$frostc$ASTNode* $tmp596 = *(&local3);
frost$core$Int64* $tmp597 = &$tmp596->$rawValue;
frost$core$Int64 $tmp598 = *$tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:129:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp605 = (org$frostlang$frostc$Position*) ($tmp596->$data + 0);
org$frostlang$frostc$Position $tmp606 = *$tmp605;
*(&local4) = $tmp606;
frost$core$String** $tmp607 = (frost$core$String**) ($tmp596->$data + 24);
frost$core$String* $tmp608 = *$tmp607;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$String* $tmp609 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local5) = $tmp608;
frost$core$String** $tmp610 = (frost$core$String**) ($tmp596->$data + 32);
frost$core$String* $tmp611 = *$tmp610;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$String* $tmp612 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local6) = $tmp611;
org$frostlang$frostc$ASTNode** $tmp613 = (org$frostlang$frostc$ASTNode**) ($tmp596->$data + 40);
org$frostlang$frostc$ASTNode* $tmp614 = *$tmp613;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
org$frostlang$frostc$ASTNode* $tmp615 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local7) = $tmp614;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:130
org$frostlang$frostc$ASTNode* $tmp616 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
org$frostlang$frostc$ASTNode* $tmp617 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local8) = $tmp616;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:131
frost$core$String* $tmp618 = *(&local5);
frost$core$Bit $tmp619 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s620);
bool $tmp621 = $tmp619.value;
if ($tmp621) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:133
org$frostlang$frostc$Position $tmp622 = *(&local4);
frost$core$Int64 $tmp623 = *(&local0);
frost$core$Int64 $tmp624 = (frost$core$Int64) {2u};
frost$core$Int64 $tmp625 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp622, $tmp623, $tmp624);
*(&local0) = $tmp625;
goto block9;
block11:;
frost$core$Bit $tmp626 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s627);
bool $tmp628 = $tmp626.value;
if ($tmp628) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:136
org$frostlang$frostc$Position $tmp629 = *(&local4);
frost$core$Int64 $tmp630 = *(&local0);
frost$core$Int64 $tmp631 = (frost$core$Int64) {4u};
frost$core$Int64 $tmp632 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp629, $tmp630, $tmp631);
*(&local0) = $tmp632;
goto block9;
block13:;
frost$core$Bit $tmp633 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s634);
bool $tmp635 = $tmp633.value;
if ($tmp635) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:139
org$frostlang$frostc$Position $tmp636 = *(&local4);
frost$core$Int64 $tmp637 = *(&local0);
frost$core$Int64 $tmp638 = (frost$core$Int64) {8u};
frost$core$Int64 $tmp639 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp636, $tmp637, $tmp638);
*(&local0) = $tmp639;
goto block9;
block15:;
frost$core$Bit $tmp640 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s641);
bool $tmp642 = $tmp640.value;
if ($tmp642) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:142
org$frostlang$frostc$Position $tmp643 = *(&local4);
frost$core$Int64 $tmp644 = *(&local0);
frost$core$Int64 $tmp645 = (frost$core$Int64) {16u};
frost$core$Int64 $tmp646 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp643, $tmp644, $tmp645);
*(&local0) = $tmp646;
goto block9;
block17:;
frost$core$Bit $tmp647 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s648);
bool $tmp649 = $tmp647.value;
if ($tmp649) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:145
org$frostlang$frostc$Position $tmp650 = *(&local4);
frost$core$Int64 $tmp651 = *(&local0);
frost$core$Int64 $tmp652 = (frost$core$Int64) {32u};
frost$core$Int64 $tmp653 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp650, $tmp651, $tmp652);
*(&local0) = $tmp653;
goto block9;
block19:;
frost$core$Bit $tmp654 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s655);
bool $tmp656 = $tmp654.value;
if ($tmp656) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:148
org$frostlang$frostc$Position $tmp657 = *(&local4);
frost$core$Int64 $tmp658 = *(&local0);
frost$core$Int64 $tmp659 = (frost$core$Int64) {64u};
frost$core$Int64 $tmp660 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp657, $tmp658, $tmp659);
*(&local0) = $tmp660;
goto block9;
block21:;
frost$core$Bit $tmp661 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s662);
bool $tmp663 = $tmp661.value;
if ($tmp663) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:151
org$frostlang$frostc$Position $tmp664 = *(&local4);
frost$core$Int64 $tmp665 = *(&local0);
frost$core$Int64 $tmp666 = (frost$core$Int64) {128u};
frost$core$Int64 $tmp667 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp664, $tmp665, $tmp666);
*(&local0) = $tmp667;
goto block9;
block23:;
frost$core$Bit $tmp668 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s669);
bool $tmp670 = $tmp668.value;
if ($tmp670) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:154
org$frostlang$frostc$Position $tmp671 = *(&local4);
frost$core$Int64 $tmp672 = *(&local0);
frost$core$Int64 $tmp673 = (frost$core$Int64) {256u};
frost$core$Int64 $tmp674 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp671, $tmp672, $tmp673);
*(&local0) = $tmp674;
goto block9;
block25:;
frost$core$Bit $tmp675 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s676);
bool $tmp677 = $tmp675.value;
if ($tmp677) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:157
org$frostlang$frostc$Position $tmp678 = *(&local4);
frost$core$Int64 $tmp679 = *(&local0);
frost$core$Int64 $tmp680 = (frost$core$Int64) {512u};
frost$core$Int64 $tmp681 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp678, $tmp679, $tmp680);
*(&local0) = $tmp681;
goto block9;
block27:;
frost$core$Bit $tmp682 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s683);
bool $tmp684 = $tmp682.value;
if ($tmp684) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:160
org$frostlang$frostc$Position $tmp685 = *(&local4);
frost$core$Int64 $tmp686 = *(&local0);
frost$core$Int64 $tmp687 = (frost$core$Int64) {1024u};
frost$core$Int64 $tmp688 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp685, $tmp686, $tmp687);
*(&local0) = $tmp688;
goto block9;
block29:;
frost$core$Bit $tmp689 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s690);
bool $tmp691 = $tmp689.value;
if ($tmp691) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:163
org$frostlang$frostc$Position $tmp692 = *(&local4);
frost$core$Int64 $tmp693 = *(&local0);
frost$core$Int64 $tmp694 = (frost$core$Int64) {2048u};
frost$core$Int64 $tmp695 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp692, $tmp693, $tmp694);
*(&local0) = $tmp695;
goto block9;
block31:;
frost$core$Bit $tmp696 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s697);
bool $tmp698 = $tmp696.value;
if ($tmp698) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:166
org$frostlang$frostc$Position $tmp699 = *(&local4);
frost$core$Int64 $tmp700 = *(&local0);
frost$core$Int64 $tmp701 = (frost$core$Int64) {4096u};
frost$core$Int64 $tmp702 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp699, $tmp700, $tmp701);
*(&local0) = $tmp702;
goto block9;
block33:;
frost$core$Bit $tmp703 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s704);
bool $tmp705 = $tmp703.value;
if ($tmp705) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:169
org$frostlang$frostc$Position $tmp706 = *(&local4);
frost$core$Int64 $tmp707 = *(&local0);
frost$core$Int64 $tmp708 = (frost$core$Int64) {16384u};
frost$core$Int64 $tmp709 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp706, $tmp707, $tmp708);
*(&local0) = $tmp709;
goto block9;
block35:;
frost$core$Bit $tmp710 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s711);
bool $tmp712 = $tmp710.value;
if ($tmp712) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:172
org$frostlang$frostc$Position $tmp713 = *(&local4);
frost$core$Int64 $tmp714 = *(&local0);
frost$core$Int64 $tmp715 = (frost$core$Int64) {32768u};
frost$core$Int64 $tmp716 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp713, $tmp714, $tmp715);
*(&local0) = $tmp716;
goto block9;
block37:;
frost$core$Bit $tmp717 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s718);
bool $tmp719 = $tmp717.value;
if ($tmp719) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:175
org$frostlang$frostc$Position $tmp720 = *(&local4);
frost$core$Int64 $tmp721 = *(&local0);
frost$core$Int64 $tmp722 = (frost$core$Int64) {131072u};
frost$core$Int64 $tmp723 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp720, $tmp721, $tmp722);
*(&local0) = $tmp723;
goto block9;
block39:;
frost$core$Bit $tmp724 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s725);
bool $tmp726 = $tmp724.value;
if ($tmp726) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:178
frost$collections$Array* $tmp727 = *(&local1);
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727 == NULL};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:179
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp730 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
frost$collections$Array* $tmp731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local1) = $tmp730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:181
frost$core$Method* $tmp732 = *(&local2);
org$frostlang$frostc$Position $tmp733 = *(&local4);
frost$core$String* $tmp734 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp735 = *(&local8);
frost$core$Int8** $tmp736 = &$tmp732->pointer;
frost$core$Int8* $tmp737 = *$tmp736;
frost$core$Immutable** $tmp738 = &$tmp732->target;
frost$core$Immutable* $tmp739 = *$tmp738;
bool $tmp740 = $tmp739 != ((frost$core$Immutable*) NULL);
if ($tmp740) goto block46; else goto block47;
block47:;
frost$core$Bit $tmp742 = (($fn741) $tmp737)(param0, $tmp733, $tmp734, $tmp735);
*(&local9) = $tmp742;
goto block48;
block46:;
frost$core$Bit $tmp744 = (($fn743) $tmp737)($tmp739, param0, $tmp733, $tmp734, $tmp735);
*(&local9) = $tmp744;
goto block48;
block48:;
frost$core$Bit $tmp745 = *(&local9);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:182
frost$collections$Array* $tmp747 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp748 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp749 = (frost$core$Int64) {0u};
frost$core$String* $tmp750 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp751 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp748, $tmp749, $tmp750, $tmp751);
frost$collections$Array$add$frost$collections$Array$T($tmp747, ((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp752 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block45;
block45:;
goto block9;
block41:;
frost$core$Bit $tmp753 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s754);
bool $tmp755 = $tmp753.value;
if ($tmp755) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:187
frost$collections$Array* $tmp756 = *(&local1);
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756 == NULL};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:188
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp759 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp759);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$collections$Array* $tmp760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local1) = $tmp759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:190
frost$core$Method* $tmp761 = *(&local2);
org$frostlang$frostc$Position $tmp762 = *(&local4);
frost$core$String* $tmp763 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp764 = *(&local8);
frost$core$Int8** $tmp765 = &$tmp761->pointer;
frost$core$Int8* $tmp766 = *$tmp765;
frost$core$Immutable** $tmp767 = &$tmp761->target;
frost$core$Immutable* $tmp768 = *$tmp767;
bool $tmp769 = $tmp768 != ((frost$core$Immutable*) NULL);
if ($tmp769) goto block55; else goto block56;
block56:;
frost$core$Bit $tmp771 = (($fn770) $tmp766)(param0, $tmp762, $tmp763, $tmp764);
*(&local10) = $tmp771;
goto block57;
block55:;
frost$core$Bit $tmp773 = (($fn772) $tmp766)($tmp768, param0, $tmp762, $tmp763, $tmp764);
*(&local10) = $tmp773;
goto block57;
block57:;
frost$core$Bit $tmp774 = *(&local10);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:191
frost$collections$Array* $tmp776 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp777 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp778 = (frost$core$Int64) {1u};
frost$core$String* $tmp779 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp780 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp777, $tmp778, $tmp779, $tmp780);
frost$collections$Array$add$frost$collections$Array$T($tmp776, ((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp781 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block54;
block54:;
goto block9;
block50:;
frost$core$Bit $tmp782 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s783);
bool $tmp784 = $tmp782.value;
if ($tmp784) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:196
frost$collections$Array* $tmp785 = *(&local1);
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785 == NULL};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:197
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp788 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$collections$Array* $tmp789 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local1) = $tmp788;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
goto block61;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:199
frost$core$Method* $tmp790 = *(&local2);
org$frostlang$frostc$Position $tmp791 = *(&local4);
frost$core$String* $tmp792 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp793 = *(&local8);
frost$core$Int8** $tmp794 = &$tmp790->pointer;
frost$core$Int8* $tmp795 = *$tmp794;
frost$core$Immutable** $tmp796 = &$tmp790->target;
frost$core$Immutable* $tmp797 = *$tmp796;
bool $tmp798 = $tmp797 != ((frost$core$Immutable*) NULL);
if ($tmp798) goto block64; else goto block65;
block65:;
frost$core$Bit $tmp800 = (($fn799) $tmp795)(param0, $tmp791, $tmp792, $tmp793);
*(&local11) = $tmp800;
goto block66;
block64:;
frost$core$Bit $tmp802 = (($fn801) $tmp795)($tmp797, param0, $tmp791, $tmp792, $tmp793);
*(&local11) = $tmp802;
goto block66;
block66:;
frost$core$Bit $tmp803 = *(&local11);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:200
frost$collections$Array* $tmp805 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp806 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp807 = (frost$core$Int64) {2u};
frost$core$String* $tmp808 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp809 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp806, $tmp807, $tmp808, $tmp809);
frost$collections$Array$add$frost$collections$Array$T($tmp805, ((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp810 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block63;
block63:;
goto block9;
block59:;
frost$core$Bit $tmp811 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s812);
bool $tmp813 = $tmp811.value;
if ($tmp813) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:205
frost$collections$Array* $tmp814 = *(&local1);
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814 == NULL};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:206
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp817 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp817);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
frost$collections$Array* $tmp818 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local1) = $tmp817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
goto block70;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:208
frost$core$Method* $tmp819 = *(&local2);
org$frostlang$frostc$Position $tmp820 = *(&local4);
frost$core$String* $tmp821 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp822 = *(&local8);
frost$core$Int8** $tmp823 = &$tmp819->pointer;
frost$core$Int8* $tmp824 = *$tmp823;
frost$core$Immutable** $tmp825 = &$tmp819->target;
frost$core$Immutable* $tmp826 = *$tmp825;
bool $tmp827 = $tmp826 != ((frost$core$Immutable*) NULL);
if ($tmp827) goto block73; else goto block74;
block74:;
frost$core$Bit $tmp829 = (($fn828) $tmp824)(param0, $tmp820, $tmp821, $tmp822);
*(&local12) = $tmp829;
goto block75;
block73:;
frost$core$Bit $tmp831 = (($fn830) $tmp824)($tmp826, param0, $tmp820, $tmp821, $tmp822);
*(&local12) = $tmp831;
goto block75;
block75:;
frost$core$Bit $tmp832 = *(&local12);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:209
frost$collections$Array* $tmp834 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp835 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp836 = (frost$core$Int64) {3u};
frost$core$String* $tmp837 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp838 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp835, $tmp836, $tmp837, $tmp838);
frost$collections$Array$add$frost$collections$Array$T($tmp834, ((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp839 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block72;
block72:;
goto block9;
block68:;
frost$core$Bit $tmp840 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp618, &$s841);
bool $tmp842 = $tmp840.value;
if ($tmp842) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:214
frost$collections$Array* $tmp843 = *(&local1);
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843 == NULL};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:215
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp846 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
frost$collections$Array* $tmp847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local1) = $tmp846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
goto block79;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:217
frost$core$Method* $tmp848 = *(&local2);
org$frostlang$frostc$Position $tmp849 = *(&local4);
frost$core$String* $tmp850 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp851 = *(&local8);
frost$core$Int8** $tmp852 = &$tmp848->pointer;
frost$core$Int8* $tmp853 = *$tmp852;
frost$core$Immutable** $tmp854 = &$tmp848->target;
frost$core$Immutable* $tmp855 = *$tmp854;
bool $tmp856 = $tmp855 != ((frost$core$Immutable*) NULL);
if ($tmp856) goto block82; else goto block83;
block83:;
frost$core$Bit $tmp858 = (($fn857) $tmp853)(param0, $tmp849, $tmp850, $tmp851);
*(&local13) = $tmp858;
goto block84;
block82:;
frost$core$Bit $tmp860 = (($fn859) $tmp853)($tmp855, param0, $tmp849, $tmp850, $tmp851);
*(&local13) = $tmp860;
goto block84;
block84:;
frost$core$Bit $tmp861 = *(&local13);
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:218
frost$collections$Array* $tmp863 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Annotations$Expression));
org$frostlang$frostc$Annotations$Expression* $tmp864 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp865 = (frost$core$Int64) {4u};
frost$core$String* $tmp866 = *(&local6);
org$frostlang$frostc$ASTNode* $tmp867 = *(&local8);
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp864, $tmp865, $tmp866, $tmp867);
frost$collections$Array$add$frost$collections$Array$T($tmp863, ((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:219
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp868 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block81;
block81:;
goto block9;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:223
org$frostlang$frostc$Position $tmp869 = *(&local4);
frost$core$String* $tmp870 = *(&local5);
frost$core$String* $tmp871 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s872, $tmp870);
frost$core$String* $tmp873 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp871, &$s874);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:223:34
frost$io$File** $tmp875 = &param0->source;
frost$io$File* $tmp876 = *$tmp875;
frost$core$Bit $tmp877 = (frost$core$Bit) {$tmp876 != NULL};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block86; else goto block87;
block87:;
frost$core$Int64 $tmp879 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s880, $tmp879, &$s881);
abort(); // unreachable
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp882 = &param0->compiler;
frost$core$Weak* $tmp883 = *$tmp882;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp884 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp883);
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp886 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s887, $tmp886);
abort(); // unreachable
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp888 = &$tmp883->value;
frost$core$Object* $tmp889 = *$tmp888;
frost$core$Frost$ref$frost$core$Object$Q($tmp889);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp889), $tmp869, $tmp873);
frost$core$Frost$unref$frost$core$Object$Q($tmp889);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp871));
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:226
org$frostlang$frostc$ASTNode* $tmp890 = *(&local8);
frost$core$Bit $tmp891 = (frost$core$Bit) {$tmp890 != NULL};
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block91; else goto block92;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:227
org$frostlang$frostc$Position $tmp893 = *(&local4);
frost$core$String* $tmp894 = *(&local5);
frost$core$String* $tmp895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s896, $tmp894);
frost$core$String* $tmp897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp895, &$s898);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:227:30
frost$io$File** $tmp899 = &param0->source;
frost$io$File* $tmp900 = *$tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900 != NULL};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp903 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s904, $tmp903, &$s905);
abort(); // unreachable
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp906 = &param0->compiler;
frost$core$Weak* $tmp907 = *$tmp906;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp908 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp907);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp910 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s911, $tmp910);
abort(); // unreachable
block97:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp912 = &$tmp907->value;
frost$core$Object* $tmp913 = *$tmp912;
frost$core$Frost$ref$frost$core$Object$Q($tmp913);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp913), $tmp893, $tmp897);
frost$core$Frost$unref$frost$core$Object$Q($tmp913);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
goto block92;
block92:;
org$frostlang$frostc$ASTNode* $tmp914 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp915 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp916 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp917 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp594);
org$frostlang$frostc$ASTNode* $tmp918 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block2;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:231
frost$core$Int64 $tmp919 = (frost$core$Int64) {231u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s920, $tmp919);
abort(); // unreachable
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:235
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp921 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp922 = *(&local0);
frost$collections$Array* $tmp923 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp921, $tmp922, ((frost$collections$ListView*) $tmp923));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
frost$core$Method* $tmp924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$collections$Array* $tmp925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp921;

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
frost$core$Bit $tmp926 = (frost$core$Bit) {param3 == NULL};
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp928 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:246
frost$core$Int64* $tmp929 = &param3->$rawValue;
frost$core$Int64 $tmp930 = *$tmp929;
frost$core$Int64 $tmp931 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:247:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931.value;
bool $tmp934 = $tmp932 == $tmp933;
frost$core$Bit $tmp935 = (frost$core$Bit) {$tmp934};
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp937 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp938 = *$tmp937;
*(&local1) = $tmp938;
frost$core$String** $tmp939 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp940 = *$tmp939;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$core$String* $tmp941 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local2) = $tmp940;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:248
frost$core$String* $tmp942 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
frost$core$String* $tmp943 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local0) = $tmp942;
frost$core$String* $tmp944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:251
frost$core$Int64 $tmp945 = (frost$core$Int64) {251u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s946, $tmp945);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:255
org$frostlang$frostc$Annotations* $tmp947 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
org$frostlang$frostc$Annotations* $tmp948 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
*(&local3) = $tmp947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp947));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:256
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:257
frost$core$Int64* $tmp949 = &param5->$rawValue;
frost$core$Int64 $tmp950 = *$tmp949;
frost$core$Int64 $tmp951 = (frost$core$Int64) {53u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:258:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951.value;
bool $tmp954 = $tmp952 == $tmp953;
frost$core$Bit $tmp955 = (frost$core$Bit) {$tmp954};
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp957 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp958 = *$tmp957;
org$frostlang$frostc$Variable$Kind* $tmp959 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp960 = *$tmp959;
*(&local5) = $tmp960;
org$frostlang$frostc$FixedArray** $tmp961 = (org$frostlang$frostc$FixedArray**) (param5->$data + 32);
org$frostlang$frostc$FixedArray* $tmp962 = *$tmp961;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
org$frostlang$frostc$FixedArray* $tmp963 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local6) = $tmp962;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:259
org$frostlang$frostc$Variable$Kind $tmp964 = *(&local5);
frost$core$Int64 $tmp965 = $tmp964.$rawValue;
frost$core$Int64 $tmp966 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:260:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp967 = $tmp965.value;
int64_t $tmp968 = $tmp966.value;
bool $tmp969 = $tmp967 == $tmp968;
frost$core$Bit $tmp970 = (frost$core$Bit) {$tmp969};
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:261
frost$core$Int64 $tmp972 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:261:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp973 = &(&local8)->$rawValue;
*$tmp973 = $tmp972;
org$frostlang$frostc$FieldDecl$Kind $tmp974 = *(&local8);
*(&local7) = $tmp974;
org$frostlang$frostc$FieldDecl$Kind $tmp975 = *(&local7);
*(&local4) = $tmp975;
goto block12;
block14:;
frost$core$Int64 $tmp976 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:263:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp977 = $tmp965.value;
int64_t $tmp978 = $tmp976.value;
bool $tmp979 = $tmp977 == $tmp978;
frost$core$Bit $tmp980 = (frost$core$Bit) {$tmp979};
bool $tmp981 = $tmp980.value;
if ($tmp981) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:264
frost$core$Int64 $tmp982 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:264:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp983 = &(&local10)->$rawValue;
*$tmp983 = $tmp982;
org$frostlang$frostc$FieldDecl$Kind $tmp984 = *(&local10);
*(&local9) = $tmp984;
org$frostlang$frostc$FieldDecl$Kind $tmp985 = *(&local9);
*(&local4) = $tmp985;
goto block12;
block18:;
frost$core$Int64 $tmp986 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:266:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp987 = $tmp965.value;
int64_t $tmp988 = $tmp986.value;
bool $tmp989 = $tmp987 == $tmp988;
frost$core$Bit $tmp990 = (frost$core$Bit) {$tmp989};
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:267
frost$core$Int64 $tmp992 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:267:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp993 = &(&local12)->$rawValue;
*$tmp993 = $tmp992;
org$frostlang$frostc$FieldDecl$Kind $tmp994 = *(&local12);
*(&local11) = $tmp994;
org$frostlang$frostc$FieldDecl$Kind $tmp995 = *(&local11);
*(&local4) = $tmp995;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:268
org$frostlang$frostc$Annotations* $tmp996 = *(&local3);
frost$core$Int64* $tmp997 = &$tmp996->flags;
frost$core$Int64 $tmp998 = *$tmp997;
frost$core$Int64 $tmp999 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:268:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp1000 = $tmp998.value;
int64_t $tmp1001 = $tmp999.value;
int64_t $tmp1002 = $tmp1000 | $tmp1001;
frost$core$Int64 $tmp1003 = (frost$core$Int64) {$tmp1002};
frost$core$Int64* $tmp1004 = &$tmp996->flags;
*$tmp1004 = $tmp1003;
goto block12;
block22:;
frost$core$Int64 $tmp1005 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:270:39
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1006 = $tmp965.value;
int64_t $tmp1007 = $tmp1005.value;
bool $tmp1008 = $tmp1006 == $tmp1007;
frost$core$Bit $tmp1009 = (frost$core$Bit) {$tmp1008};
bool $tmp1010 = $tmp1009.value;
if ($tmp1010) goto block26; else goto block12;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:271
frost$core$Int64 $tmp1011 = (frost$core$Int64) {3u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:271:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp1012 = &(&local14)->$rawValue;
*$tmp1012 = $tmp1011;
org$frostlang$frostc$FieldDecl$Kind $tmp1013 = *(&local14);
*(&local13) = $tmp1013;
org$frostlang$frostc$FieldDecl$Kind $tmp1014 = *(&local13);
*(&local4) = $tmp1014;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:274
org$frostlang$frostc$FixedArray* $tmp1015 = *(&local6);
ITable* $tmp1016 = ((frost$collections$Iterable*) $tmp1015)->$class->itable;
while ($tmp1016->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[0];
frost$collections$Iterator* $tmp1019 = $tmp1017(((frost$collections$Iterable*) $tmp1015));
goto block29;
block29:;
ITable* $tmp1020 = $tmp1019->$class->itable;
while ($tmp1020->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1020 = $tmp1020->next;
}
$fn1022 $tmp1021 = $tmp1020->methods[0];
frost$core$Bit $tmp1023 = $tmp1021($tmp1019);
bool $tmp1024 = $tmp1023.value;
if ($tmp1024) goto block31; else goto block30;
block30:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1025 = $tmp1019->$class->itable;
while ($tmp1025->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[1];
frost$core$Object* $tmp1028 = $tmp1026($tmp1019);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1028)));
org$frostlang$frostc$ASTNode* $tmp1029 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1028);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:275
org$frostlang$frostc$ASTNode* $tmp1030 = *(&local15);
frost$core$Int64* $tmp1031 = &$tmp1030->$rawValue;
frost$core$Int64 $tmp1032 = *$tmp1031;
frost$core$Int64 $tmp1033 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:276:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1034 = $tmp1032.value;
int64_t $tmp1035 = $tmp1033.value;
bool $tmp1036 = $tmp1034 == $tmp1035;
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp1039 = (org$frostlang$frostc$Position*) ($tmp1030->$data + 0);
org$frostlang$frostc$Position $tmp1040 = *$tmp1039;
*(&local16) = $tmp1040;
org$frostlang$frostc$ASTNode** $tmp1041 = (org$frostlang$frostc$ASTNode**) ($tmp1030->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1042 = *$tmp1041;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
org$frostlang$frostc$ASTNode* $tmp1043 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local17) = $tmp1042;
org$frostlang$frostc$ASTNode** $tmp1044 = (org$frostlang$frostc$ASTNode**) ($tmp1030->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1045 = *$tmp1044;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
org$frostlang$frostc$ASTNode* $tmp1046 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local18) = $tmp1045;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:277
*(&local19) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:278
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:279
org$frostlang$frostc$ASTNode* $tmp1047 = *(&local17);
frost$core$Int64* $tmp1048 = &$tmp1047->$rawValue;
frost$core$Int64 $tmp1049 = *$tmp1048;
frost$core$Int64 $tmp1050 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:280:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1051 = $tmp1049.value;
int64_t $tmp1052 = $tmp1050.value;
bool $tmp1053 = $tmp1051 == $tmp1052;
frost$core$Bit $tmp1054 = (frost$core$Bit) {$tmp1053};
bool $tmp1055 = $tmp1054.value;
if ($tmp1055) goto block37; else goto block38;
block37:;
org$frostlang$frostc$Position* $tmp1056 = (org$frostlang$frostc$Position*) ($tmp1047->$data + 0);
org$frostlang$frostc$Position $tmp1057 = *$tmp1056;
frost$core$String** $tmp1058 = (frost$core$String**) ($tmp1047->$data + 24);
frost$core$String* $tmp1059 = *$tmp1058;
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$String* $tmp1060 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local21) = $tmp1059;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:281
frost$core$String* $tmp1061 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
frost$core$String* $tmp1062 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local19) = $tmp1061;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:282
frost$core$Weak** $tmp1063 = &param0->compiler;
frost$core$Weak* $tmp1064 = *$tmp1063;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:282:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1065 = &$tmp1064->_valid;
frost$core$Bit $tmp1066 = *$tmp1065;
bool $tmp1067 = $tmp1066.value;
if ($tmp1067) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp1068 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1069, $tmp1068);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1070 = &$tmp1064->value;
frost$core$Object* $tmp1071 = *$tmp1070;
frost$core$Frost$ref$frost$core$Object$Q($tmp1071);
org$frostlang$frostc$Type** $tmp1072 = &((org$frostlang$frostc$Compiler*) $tmp1071)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp1073 = *$tmp1072;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
org$frostlang$frostc$Type* $tmp1074 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local20) = $tmp1073;
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
frost$core$String* $tmp1075 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local21) = ((frost$core$String*) NULL);
goto block36;
block38:;
frost$core$Int64 $tmp1076 = (frost$core$Int64) {48u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:284:45
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1077 = $tmp1049.value;
int64_t $tmp1078 = $tmp1076.value;
bool $tmp1079 = $tmp1077 == $tmp1078;
frost$core$Bit $tmp1080 = (frost$core$Bit) {$tmp1079};
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1082 = (org$frostlang$frostc$Position*) ($tmp1047->$data + 0);
org$frostlang$frostc$Position $tmp1083 = *$tmp1082;
frost$core$String** $tmp1084 = (frost$core$String**) ($tmp1047->$data + 24);
frost$core$String* $tmp1085 = *$tmp1084;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$String* $tmp1086 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
*(&local22) = $tmp1085;
org$frostlang$frostc$ASTNode** $tmp1087 = (org$frostlang$frostc$ASTNode**) ($tmp1047->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1088 = *$tmp1087;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
org$frostlang$frostc$ASTNode* $tmp1089 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local23) = $tmp1088;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:285
frost$core$String* $tmp1090 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
frost$core$String* $tmp1091 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local19) = $tmp1090;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:286
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local23);
org$frostlang$frostc$Type* $tmp1093 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1092);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
org$frostlang$frostc$Type* $tmp1094 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local20) = $tmp1093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
org$frostlang$frostc$ASTNode* $tmp1095 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1096 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local22) = ((frost$core$String*) NULL);
goto block36;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:289
frost$core$Int64 $tmp1097 = (frost$core$Int64) {289u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1098, $tmp1097);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:292
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:293
org$frostlang$frostc$ASTNode* $tmp1099 = *(&local18);
frost$core$Bit $tmp1100 = (frost$core$Bit) {$tmp1099 == NULL};
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block51; else goto block49;
block51:;
org$frostlang$frostc$Annotations* $tmp1102 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isWeak():frost.core.Bit from Scanner.frost:293:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:151
frost$core$Int64* $tmp1103 = &$tmp1102->flags;
frost$core$Int64 $tmp1104 = *$tmp1103;
frost$core$Int64 $tmp1105 = (frost$core$Int64) {4096u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp1106 = $tmp1104.value;
int64_t $tmp1107 = $tmp1105.value;
int64_t $tmp1108 = $tmp1106 & $tmp1107;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {$tmp1108};
frost$core$Int64 $tmp1110 = (frost$core$Int64) {0u};
int64_t $tmp1111 = $tmp1109.value;
int64_t $tmp1112 = $tmp1110.value;
bool $tmp1113 = $tmp1111 != $tmp1112;
frost$core$Bit $tmp1114 = (frost$core$Bit) {$tmp1113};
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block50; else goto block49;
block50:;
org$frostlang$frostc$Type* $tmp1116 = *(&local20);
org$frostlang$frostc$Type$Kind* $tmp1117 = &$tmp1116->typeKind;
org$frostlang$frostc$Type$Kind $tmp1118 = *$tmp1117;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1119;
$tmp1119 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1119->value = $tmp1118;
frost$core$Int64 $tmp1120 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Scanner.frost:294:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp1121 = &(&local26)->$rawValue;
*$tmp1121 = $tmp1120;
org$frostlang$frostc$Type$Kind $tmp1122 = *(&local26);
*(&local25) = $tmp1122;
org$frostlang$frostc$Type$Kind $tmp1123 = *(&local25);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1124;
$tmp1124 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1124->value = $tmp1123;
ITable* $tmp1125 = ((frost$core$Equatable*) $tmp1119)->$class->itable;
while ($tmp1125->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1125 = $tmp1125->next;
}
$fn1127 $tmp1126 = $tmp1125->methods[0];
frost$core$Bit $tmp1128 = $tmp1126(((frost$core$Equatable*) $tmp1119), ((frost$core$Equatable*) $tmp1124));
bool $tmp1129 = $tmp1128.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1124)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1119)));
if ($tmp1129) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:295
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1130 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1131 = (frost$core$Int64) {31u};
org$frostlang$frostc$Position $tmp1132 = *(&local16);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp1130, $tmp1131, $tmp1132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
org$frostlang$frostc$ASTNode* $tmp1133 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local24) = $tmp1130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
goto block48;
block49:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:298
org$frostlang$frostc$ASTNode* $tmp1134 = *(&local18);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
org$frostlang$frostc$ASTNode* $tmp1135 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
*(&local24) = $tmp1134;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:300
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp1136 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp1137 = *(&local16);
frost$core$String* $tmp1138 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1139 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp1140 = *(&local4);
frost$core$String* $tmp1141 = *(&local19);
org$frostlang$frostc$Type* $tmp1142 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp1143 = *(&local24);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp1136, param1, $tmp1137, $tmp1138, $tmp1139, $tmp1140, $tmp1141, $tmp1142, $tmp1143);
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
org$frostlang$frostc$FieldDecl* $tmp1144 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local27) = $tmp1136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:302
org$frostlang$frostc$SymbolTable** $tmp1145 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1146 = *$tmp1145;
org$frostlang$frostc$FieldDecl* $tmp1147 = *(&local27);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:302:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp1148 = &((org$frostlang$frostc$Symbol*) $tmp1147)->name;
frost$core$String* $tmp1149 = *$tmp1148;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp1146, ((org$frostlang$frostc$Symbol*) $tmp1147), $tmp1149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:303
frost$collections$Array** $tmp1150 = &param1->fields;
frost$collections$Array* $tmp1151 = *$tmp1150;
org$frostlang$frostc$FieldDecl* $tmp1152 = *(&local27);
frost$collections$Array$add$frost$collections$Array$T($tmp1151, ((frost$core$Object*) $tmp1152));
org$frostlang$frostc$FieldDecl* $tmp1153 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local27) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp1154 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp1155 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1155));
*(&local20) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1156 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1156));
*(&local19) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp1157 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1158 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1028);
org$frostlang$frostc$ASTNode* $tmp1159 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block29;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:306
frost$core$Int64 $tmp1160 = (frost$core$Int64) {306u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1161, $tmp1160);
abort(); // unreachable
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
org$frostlang$frostc$FixedArray* $tmp1162 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$Annotations* $tmp1163 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local0) = ((frost$core$String*) NULL);
return;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:312
frost$core$Int64 $tmp1165 = (frost$core$Int64) {312u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1166, $tmp1165);
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
frost$core$Int64* $tmp1167 = &param1->$rawValue;
frost$core$Int64 $tmp1168 = *$tmp1167;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:320:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1170 = $tmp1168.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = (frost$core$Bit) {$tmp1172};
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1175 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1176 = *$tmp1175;
org$frostlang$frostc$FixedArray** $tmp1177 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1178 = *$tmp1177;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
org$frostlang$frostc$FixedArray* $tmp1179 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local0) = $tmp1178;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:321
frost$core$Int64 $tmp1180 = (frost$core$Int64) {0u};
*(&local1) = $tmp1180;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:322
org$frostlang$frostc$FixedArray* $tmp1181 = *(&local0);
ITable* $tmp1182 = ((frost$collections$Iterable*) $tmp1181)->$class->itable;
while ($tmp1182->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1182 = $tmp1182->next;
}
$fn1184 $tmp1183 = $tmp1182->methods[0];
frost$collections$Iterator* $tmp1185 = $tmp1183(((frost$collections$Iterable*) $tmp1181));
goto block5;
block5:;
ITable* $tmp1186 = $tmp1185->$class->itable;
while ($tmp1186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1186 = $tmp1186->next;
}
$fn1188 $tmp1187 = $tmp1186->methods[0];
frost$core$Bit $tmp1189 = $tmp1187($tmp1185);
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block7; else goto block6;
block6:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1191 = $tmp1185->$class->itable;
while ($tmp1191->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1191 = $tmp1191->next;
}
$fn1193 $tmp1192 = $tmp1191->methods[1];
frost$core$Object* $tmp1194 = $tmp1192($tmp1185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1194)));
org$frostlang$frostc$ASTNode* $tmp1195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp1194);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:323
frost$core$Int64 $tmp1196 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp1197 = *(&local2);
frost$core$Int64 $tmp1198 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1197);
int64_t $tmp1199 = $tmp1196.value;
int64_t $tmp1200 = $tmp1198.value;
int64_t $tmp1201 = $tmp1199 + $tmp1200;
frost$core$Int64 $tmp1202 = (frost$core$Int64) {$tmp1201};
*(&local1) = $tmp1202;
frost$core$Frost$unref$frost$core$Object$Q($tmp1194);
org$frostlang$frostc$ASTNode* $tmp1203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:325
frost$core$Int64 $tmp1204 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1204;
block3:;
frost$core$Int64 $tmp1206 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:327:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1207 = $tmp1168.value;
int64_t $tmp1208 = $tmp1206.value;
bool $tmp1209 = $tmp1207 == $tmp1208;
frost$core$Bit $tmp1210 = (frost$core$Bit) {$tmp1209};
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp1212 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1213 = *$tmp1212;
org$frostlang$frostc$ASTNode** $tmp1214 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1215 = *$tmp1214;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
org$frostlang$frostc$ASTNode* $tmp1216 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local3) = $tmp1215;
org$frostlang$frostc$ASTNode** $tmp1217 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1218 = *$tmp1217;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:328
org$frostlang$frostc$ASTNode* $tmp1219 = *(&local3);
frost$core$Int64 $tmp1220 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1219);
org$frostlang$frostc$ASTNode* $tmp1221 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1220;
block9:;
frost$core$Int64 $tmp1222 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:330:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1223 = $tmp1168.value;
int64_t $tmp1224 = $tmp1222.value;
bool $tmp1225 = $tmp1223 == $tmp1224;
frost$core$Bit $tmp1226 = (frost$core$Bit) {$tmp1225};
bool $tmp1227 = $tmp1226.value;
if ($tmp1227) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:331
frost$core$Int64 $tmp1228 = (frost$core$Int64) {0u};
return $tmp1228;
block12:;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:333:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1230 = $tmp1168.value;
int64_t $tmp1231 = $tmp1229.value;
bool $tmp1232 = $tmp1230 == $tmp1231;
frost$core$Bit $tmp1233 = (frost$core$Bit) {$tmp1232};
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:334
frost$core$Int64 $tmp1235 = (frost$core$Int64) {0u};
return $tmp1235;
block15:;
frost$core$Int64 $tmp1236 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:336:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1237 = $tmp1168.value;
int64_t $tmp1238 = $tmp1236.value;
bool $tmp1239 = $tmp1237 == $tmp1238;
frost$core$Bit $tmp1240 = (frost$core$Bit) {$tmp1239};
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp1242 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1243 = *$tmp1242;
org$frostlang$frostc$ASTNode** $tmp1244 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1245 = *$tmp1244;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1245));
org$frostlang$frostc$ASTNode* $tmp1246 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local4) = $tmp1245;
org$frostlang$frostc$expression$Binary$Operator* $tmp1247 = (org$frostlang$frostc$expression$Binary$Operator*) (param1->$data + 32);
org$frostlang$frostc$expression$Binary$Operator $tmp1248 = *$tmp1247;
org$frostlang$frostc$ASTNode** $tmp1249 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1250 = *$tmp1249;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
org$frostlang$frostc$ASTNode* $tmp1251 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local5) = $tmp1250;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:337
frost$core$Int64 $tmp1252 = (frost$core$Int64) {1u};
org$frostlang$frostc$ASTNode* $tmp1253 = *(&local4);
frost$core$Int64 $tmp1254 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1253);
int64_t $tmp1255 = $tmp1252.value;
int64_t $tmp1256 = $tmp1254.value;
int64_t $tmp1257 = $tmp1255 + $tmp1256;
frost$core$Int64 $tmp1258 = (frost$core$Int64) {$tmp1257};
org$frostlang$frostc$ASTNode* $tmp1259 = *(&local5);
frost$core$Int64 $tmp1260 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1259);
int64_t $tmp1261 = $tmp1258.value;
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261 + $tmp1262;
frost$core$Int64 $tmp1264 = (frost$core$Int64) {$tmp1263};
org$frostlang$frostc$ASTNode* $tmp1265 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp1266 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1264;
block18:;
frost$core$Int64 $tmp1267 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:339:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1268 = $tmp1168.value;
int64_t $tmp1269 = $tmp1267.value;
bool $tmp1270 = $tmp1268 == $tmp1269;
frost$core$Bit $tmp1271 = (frost$core$Bit) {$tmp1270};
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:340
frost$core$Int64 $tmp1273 = (frost$core$Int64) {1u};
return $tmp1273;
block21:;
frost$core$Int64 $tmp1274 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:342:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1275 = $tmp1168.value;
int64_t $tmp1276 = $tmp1274.value;
bool $tmp1277 = $tmp1275 == $tmp1276;
frost$core$Bit $tmp1278 = (frost$core$Bit) {$tmp1277};
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp1280 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1281 = *$tmp1280;
org$frostlang$frostc$FixedArray** $tmp1282 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1283 = *$tmp1282;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
org$frostlang$frostc$FixedArray* $tmp1284 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local6) = $tmp1283;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:343
frost$core$Int64 $tmp1285 = (frost$core$Int64) {0u};
*(&local7) = $tmp1285;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:344
org$frostlang$frostc$FixedArray* $tmp1286 = *(&local6);
ITable* $tmp1287 = ((frost$collections$Iterable*) $tmp1286)->$class->itable;
while ($tmp1287->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1287 = $tmp1287->next;
}
$fn1289 $tmp1288 = $tmp1287->methods[0];
frost$collections$Iterator* $tmp1290 = $tmp1288(((frost$collections$Iterable*) $tmp1286));
goto block26;
block26:;
ITable* $tmp1291 = $tmp1290->$class->itable;
while ($tmp1291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1291 = $tmp1291->next;
}
$fn1293 $tmp1292 = $tmp1291->methods[0];
frost$core$Bit $tmp1294 = $tmp1292($tmp1290);
bool $tmp1295 = $tmp1294.value;
if ($tmp1295) goto block28; else goto block27;
block27:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1296 = $tmp1290->$class->itable;
while ($tmp1296->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[1];
frost$core$Object* $tmp1299 = $tmp1297($tmp1290);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1299)));
org$frostlang$frostc$ASTNode* $tmp1300 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1299);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:345
frost$core$Int64 $tmp1301 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp1302 = *(&local8);
frost$core$Int64 $tmp1303 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1302);
int64_t $tmp1304 = $tmp1301.value;
int64_t $tmp1305 = $tmp1303.value;
int64_t $tmp1306 = $tmp1304 + $tmp1305;
frost$core$Int64 $tmp1307 = (frost$core$Int64) {$tmp1306};
*(&local7) = $tmp1307;
frost$core$Frost$unref$frost$core$Object$Q($tmp1299);
org$frostlang$frostc$ASTNode* $tmp1308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:347
frost$core$Int64 $tmp1309 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp1310 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1309;
block24:;
frost$core$Int64 $tmp1311 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:349:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1312 = $tmp1168.value;
int64_t $tmp1313 = $tmp1311.value;
bool $tmp1314 = $tmp1312 == $tmp1313;
frost$core$Bit $tmp1315 = (frost$core$Bit) {$tmp1314};
bool $tmp1316 = $tmp1315.value;
if ($tmp1316) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:350
frost$core$Int64 $tmp1317 = (frost$core$Int64) {1u};
return $tmp1317;
block30:;
frost$core$Int64 $tmp1318 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:352:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1319 = $tmp1168.value;
int64_t $tmp1320 = $tmp1318.value;
bool $tmp1321 = $tmp1319 == $tmp1320;
frost$core$Bit $tmp1322 = (frost$core$Bit) {$tmp1321};
bool $tmp1323 = $tmp1322.value;
if ($tmp1323) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp1324 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1325 = *$tmp1324;
org$frostlang$frostc$ASTNode** $tmp1326 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1327 = *$tmp1326;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
org$frostlang$frostc$ASTNode* $tmp1328 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local9) = $tmp1327;
org$frostlang$frostc$FixedArray** $tmp1329 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1330 = *$tmp1329;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
org$frostlang$frostc$FixedArray* $tmp1331 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local10) = $tmp1330;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:353
org$frostlang$frostc$ASTNode* $tmp1332 = *(&local9);
frost$core$Int64 $tmp1333 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1332);
*(&local11) = $tmp1333;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:354
org$frostlang$frostc$FixedArray* $tmp1334 = *(&local10);
ITable* $tmp1335 = ((frost$collections$Iterable*) $tmp1334)->$class->itable;
while ($tmp1335->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[0];
frost$collections$Iterator* $tmp1338 = $tmp1336(((frost$collections$Iterable*) $tmp1334));
goto block35;
block35:;
ITable* $tmp1339 = $tmp1338->$class->itable;
while ($tmp1339->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1339 = $tmp1339->next;
}
$fn1341 $tmp1340 = $tmp1339->methods[0];
frost$core$Bit $tmp1342 = $tmp1340($tmp1338);
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block37; else goto block36;
block36:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1344 = $tmp1338->$class->itable;
while ($tmp1344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1344 = $tmp1344->next;
}
$fn1346 $tmp1345 = $tmp1344->methods[1];
frost$core$Object* $tmp1347 = $tmp1345($tmp1338);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1347)));
org$frostlang$frostc$ASTNode* $tmp1348 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp1347);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:355
frost$core$Int64 $tmp1349 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp1350 = *(&local12);
frost$core$Int64 $tmp1351 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1350);
int64_t $tmp1352 = $tmp1349.value;
int64_t $tmp1353 = $tmp1351.value;
int64_t $tmp1354 = $tmp1352 + $tmp1353;
frost$core$Int64 $tmp1355 = (frost$core$Int64) {$tmp1354};
*(&local11) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q($tmp1347);
org$frostlang$frostc$ASTNode* $tmp1356 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block35;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:357
frost$core$Int64 $tmp1357 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1358 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1359 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1359));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1357;
block33:;
frost$core$Int64 $tmp1360 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:359:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1361 = $tmp1168.value;
int64_t $tmp1362 = $tmp1360.value;
bool $tmp1363 = $tmp1361 == $tmp1362;
frost$core$Bit $tmp1364 = (frost$core$Bit) {$tmp1363};
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp1366 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1367 = *$tmp1366;
org$frostlang$frostc$ASTNode** $tmp1368 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1369 = *$tmp1368;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
org$frostlang$frostc$ASTNode* $tmp1370 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
*(&local13) = $tmp1369;
org$frostlang$frostc$ChoiceCase** $tmp1371 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 32);
org$frostlang$frostc$ChoiceCase* $tmp1372 = *$tmp1371;
frost$core$Int64* $tmp1373 = (frost$core$Int64*) (param1->$data + 40);
frost$core$Int64 $tmp1374 = *$tmp1373;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:360
org$frostlang$frostc$ASTNode* $tmp1375 = *(&local13);
frost$core$Int64 $tmp1376 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1375);
org$frostlang$frostc$ASTNode* $tmp1377 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1376;
block39:;
frost$core$Int64 $tmp1378 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:362:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1379 = $tmp1168.value;
int64_t $tmp1380 = $tmp1378.value;
bool $tmp1381 = $tmp1379 == $tmp1380;
frost$core$Bit $tmp1382 = (frost$core$Bit) {$tmp1381};
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:363
frost$core$Int64 $tmp1384 = (frost$core$Int64) {1u};
return $tmp1384;
block42:;
frost$core$Int64 $tmp1385 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1386 = $tmp1168.value;
int64_t $tmp1387 = $tmp1385.value;
bool $tmp1388 = $tmp1386 == $tmp1387;
frost$core$Bit $tmp1389 = (frost$core$Bit) {$tmp1388};
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1391 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1392 = *$tmp1391;
org$frostlang$frostc$ASTNode** $tmp1393 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1394 = *$tmp1393;
org$frostlang$frostc$ASTNode** $tmp1395 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1396 = *$tmp1395;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
org$frostlang$frostc$ASTNode* $tmp1397 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local14) = $tmp1396;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:366
org$frostlang$frostc$ASTNode* $tmp1398 = *(&local14);
frost$core$Bit $tmp1399 = (frost$core$Bit) {$tmp1398 == NULL};
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:367
frost$core$Int64 $tmp1401 = (frost$core$Int64) {0u};
org$frostlang$frostc$ASTNode* $tmp1402 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1401;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:369
org$frostlang$frostc$ASTNode* $tmp1403 = *(&local14);
frost$core$Int64 $tmp1404 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1403);
org$frostlang$frostc$ASTNode* $tmp1405 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1404;
block45:;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:371:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1407 = $tmp1168.value;
int64_t $tmp1408 = $tmp1406.value;
bool $tmp1409 = $tmp1407 == $tmp1408;
frost$core$Bit $tmp1410 = (frost$core$Bit) {$tmp1409};
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block49; else goto block50;
block49:;
org$frostlang$frostc$Position* $tmp1412 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1413 = *$tmp1412;
frost$core$String** $tmp1414 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1415 = *$tmp1414;
org$frostlang$frostc$FixedArray** $tmp1416 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1417 = *$tmp1416;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
org$frostlang$frostc$FixedArray* $tmp1418 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
*(&local15) = $tmp1417;
org$frostlang$frostc$ASTNode** $tmp1419 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1420 = *$tmp1419;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
org$frostlang$frostc$ASTNode* $tmp1421 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local16) = $tmp1420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:372
org$frostlang$frostc$ASTNode* $tmp1422 = *(&local16);
frost$core$Int64 $tmp1423 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1422);
*(&local17) = $tmp1423;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:373
org$frostlang$frostc$FixedArray* $tmp1424 = *(&local15);
ITable* $tmp1425 = ((frost$collections$Iterable*) $tmp1424)->$class->itable;
while ($tmp1425->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[0];
frost$collections$Iterator* $tmp1428 = $tmp1426(((frost$collections$Iterable*) $tmp1424));
goto block52;
block52:;
ITable* $tmp1429 = $tmp1428->$class->itable;
while ($tmp1429->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1429 = $tmp1429->next;
}
$fn1431 $tmp1430 = $tmp1429->methods[0];
frost$core$Bit $tmp1432 = $tmp1430($tmp1428);
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block54; else goto block53;
block53:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1434 = $tmp1428->$class->itable;
while ($tmp1434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[1];
frost$core$Object* $tmp1437 = $tmp1435($tmp1428);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1437)));
org$frostlang$frostc$ASTNode* $tmp1438 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1437);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:374
frost$core$Int64 $tmp1439 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1440 = *(&local18);
frost$core$Int64 $tmp1441 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1440);
int64_t $tmp1442 = $tmp1439.value;
int64_t $tmp1443 = $tmp1441.value;
int64_t $tmp1444 = $tmp1442 + $tmp1443;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {$tmp1444};
*(&local17) = $tmp1445;
frost$core$Frost$unref$frost$core$Object$Q($tmp1437);
org$frostlang$frostc$ASTNode* $tmp1446 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:376
frost$core$Int64 $tmp1447 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1448 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1449 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1447;
block50:;
frost$core$Int64 $tmp1450 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:378:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1451 = $tmp1168.value;
int64_t $tmp1452 = $tmp1450.value;
bool $tmp1453 = $tmp1451 == $tmp1452;
frost$core$Bit $tmp1454 = (frost$core$Bit) {$tmp1453};
bool $tmp1455 = $tmp1454.value;
if ($tmp1455) goto block55; else goto block56;
block55:;
org$frostlang$frostc$Position* $tmp1456 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1457 = *$tmp1456;
org$frostlang$frostc$ASTNode** $tmp1458 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1459 = *$tmp1458;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
org$frostlang$frostc$ASTNode* $tmp1460 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
*(&local19) = $tmp1459;
frost$core$String** $tmp1461 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1462 = *$tmp1461;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:379
org$frostlang$frostc$ASTNode* $tmp1463 = *(&local19);
frost$core$Int64 $tmp1464 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1463);
org$frostlang$frostc$ASTNode* $tmp1465 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1464;
block56:;
frost$core$Int64 $tmp1466 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:381:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1467 = $tmp1168.value;
int64_t $tmp1468 = $tmp1466.value;
bool $tmp1469 = $tmp1467 == $tmp1468;
frost$core$Bit $tmp1470 = (frost$core$Bit) {$tmp1469};
bool $tmp1471 = $tmp1470.value;
if ($tmp1471) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp1472 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1473 = *$tmp1472;
org$frostlang$frostc$ASTNode** $tmp1474 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1475 = *$tmp1474;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
org$frostlang$frostc$ASTNode* $tmp1476 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local20) = $tmp1475;
frost$core$String** $tmp1477 = (frost$core$String**) (param1->$data + 32);
frost$core$String* $tmp1478 = *$tmp1477;
org$frostlang$frostc$FixedArray** $tmp1479 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1480 = *$tmp1479;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:382
org$frostlang$frostc$ASTNode* $tmp1481 = *(&local20);
frost$core$Int64 $tmp1482 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1481);
org$frostlang$frostc$ASTNode* $tmp1483 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1482;
block59:;
frost$core$Int64 $tmp1484 = (frost$core$Int64) {20u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:384:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1485 = $tmp1168.value;
int64_t $tmp1486 = $tmp1484.value;
bool $tmp1487 = $tmp1485 == $tmp1486;
frost$core$Bit $tmp1488 = (frost$core$Bit) {$tmp1487};
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Position* $tmp1490 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1491 = *$tmp1490;
frost$core$String** $tmp1492 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1493 = *$tmp1492;
org$frostlang$frostc$ASTNode** $tmp1494 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1495 = *$tmp1494;
org$frostlang$frostc$ASTNode** $tmp1496 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1497 = *$tmp1496;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
org$frostlang$frostc$ASTNode* $tmp1498 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local21) = $tmp1497;
org$frostlang$frostc$FixedArray** $tmp1499 = (org$frostlang$frostc$FixedArray**) (param1->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1500 = *$tmp1499;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
org$frostlang$frostc$FixedArray* $tmp1501 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
*(&local22) = $tmp1500;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:385
org$frostlang$frostc$ASTNode* $tmp1502 = *(&local21);
frost$core$Int64 $tmp1503 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1502);
*(&local23) = $tmp1503;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:386
org$frostlang$frostc$FixedArray* $tmp1504 = *(&local22);
ITable* $tmp1505 = ((frost$collections$Iterable*) $tmp1504)->$class->itable;
while ($tmp1505->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1505 = $tmp1505->next;
}
$fn1507 $tmp1506 = $tmp1505->methods[0];
frost$collections$Iterator* $tmp1508 = $tmp1506(((frost$collections$Iterable*) $tmp1504));
goto block64;
block64:;
ITable* $tmp1509 = $tmp1508->$class->itable;
while ($tmp1509->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1509 = $tmp1509->next;
}
$fn1511 $tmp1510 = $tmp1509->methods[0];
frost$core$Bit $tmp1512 = $tmp1510($tmp1508);
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block66; else goto block65;
block65:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1514 = $tmp1508->$class->itable;
while ($tmp1514->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1514 = $tmp1514->next;
}
$fn1516 $tmp1515 = $tmp1514->methods[1];
frost$core$Object* $tmp1517 = $tmp1515($tmp1508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1517)));
org$frostlang$frostc$ASTNode* $tmp1518 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1517);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:387
frost$core$Int64 $tmp1519 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1520 = *(&local24);
frost$core$Int64 $tmp1521 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1520);
int64_t $tmp1522 = $tmp1519.value;
int64_t $tmp1523 = $tmp1521.value;
int64_t $tmp1524 = $tmp1522 + $tmp1523;
frost$core$Int64 $tmp1525 = (frost$core$Int64) {$tmp1524};
*(&local23) = $tmp1525;
frost$core$Frost$unref$frost$core$Object$Q($tmp1517);
org$frostlang$frostc$ASTNode* $tmp1526 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block64;
block66:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:389
frost$core$Int64 $tmp1527 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1528 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1529 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1527;
block62:;
frost$core$Int64 $tmp1530 = (frost$core$Int64) {21u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:391:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1531 = $tmp1168.value;
int64_t $tmp1532 = $tmp1530.value;
bool $tmp1533 = $tmp1531 == $tmp1532;
frost$core$Bit $tmp1534 = (frost$core$Bit) {$tmp1533};
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:392
frost$core$Int64 $tmp1536 = (frost$core$Int64) {0u};
return $tmp1536;
block68:;
frost$core$Int64 $tmp1537 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:394:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1538 = $tmp1168.value;
int64_t $tmp1539 = $tmp1537.value;
bool $tmp1540 = $tmp1538 == $tmp1539;
frost$core$Bit $tmp1541 = (frost$core$Bit) {$tmp1540};
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block70; else goto block71;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:395
frost$core$Int64 $tmp1543 = (frost$core$Int64) {1u};
return $tmp1543;
block71:;
frost$core$Int64 $tmp1544 = (frost$core$Int64) {24u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:397:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1545 = $tmp1168.value;
int64_t $tmp1546 = $tmp1544.value;
bool $tmp1547 = $tmp1545 == $tmp1546;
frost$core$Bit $tmp1548 = (frost$core$Bit) {$tmp1547};
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1550 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1551 = *$tmp1550;
org$frostlang$frostc$ASTNode** $tmp1552 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1553 = *$tmp1552;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1553));
org$frostlang$frostc$ASTNode* $tmp1554 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
*(&local25) = $tmp1553;
org$frostlang$frostc$FixedArray** $tmp1555 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1556 = *$tmp1555;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
org$frostlang$frostc$FixedArray* $tmp1557 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local26) = $tmp1556;
org$frostlang$frostc$ASTNode** $tmp1558 = (org$frostlang$frostc$ASTNode**) (param1->$data + 40);
org$frostlang$frostc$ASTNode* $tmp1559 = *$tmp1558;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
org$frostlang$frostc$ASTNode* $tmp1560 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1560));
*(&local27) = $tmp1559;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:398
org$frostlang$frostc$ASTNode* $tmp1561 = *(&local25);
frost$core$Int64 $tmp1562 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1561);
*(&local28) = $tmp1562;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:399
org$frostlang$frostc$FixedArray* $tmp1563 = *(&local26);
ITable* $tmp1564 = ((frost$collections$Iterable*) $tmp1563)->$class->itable;
while ($tmp1564->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
frost$collections$Iterator* $tmp1567 = $tmp1565(((frost$collections$Iterable*) $tmp1563));
goto block76;
block76:;
ITable* $tmp1568 = $tmp1567->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$core$Bit $tmp1571 = $tmp1569($tmp1567);
bool $tmp1572 = $tmp1571.value;
if ($tmp1572) goto block78; else goto block77;
block77:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1573 = $tmp1567->$class->itable;
while ($tmp1573->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1573 = $tmp1573->next;
}
$fn1575 $tmp1574 = $tmp1573->methods[1];
frost$core$Object* $tmp1576 = $tmp1574($tmp1567);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1576)));
org$frostlang$frostc$ASTNode* $tmp1577 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1576);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:400
frost$core$Int64 $tmp1578 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1579 = *(&local29);
frost$core$Int64 $tmp1580 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1579);
int64_t $tmp1581 = $tmp1578.value;
int64_t $tmp1582 = $tmp1580.value;
int64_t $tmp1583 = $tmp1581 + $tmp1582;
frost$core$Int64 $tmp1584 = (frost$core$Int64) {$tmp1583};
*(&local28) = $tmp1584;
frost$core$Frost$unref$frost$core$Object$Q($tmp1576);
org$frostlang$frostc$ASTNode* $tmp1585 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block76;
block78:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:402
org$frostlang$frostc$ASTNode* $tmp1586 = *(&local27);
frost$core$Bit $tmp1587 = (frost$core$Bit) {$tmp1586 != NULL};
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:403
frost$core$Int64 $tmp1589 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1590 = *(&local27);
frost$core$Int64 $tmp1591 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1590);
int64_t $tmp1592 = $tmp1589.value;
int64_t $tmp1593 = $tmp1591.value;
int64_t $tmp1594 = $tmp1592 + $tmp1593;
frost$core$Int64 $tmp1595 = (frost$core$Int64) {$tmp1594};
*(&local28) = $tmp1595;
goto block80;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:405
frost$core$Int64 $tmp1596 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1597 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1598 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1599 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1596;
block74:;
frost$core$Int64 $tmp1600 = (frost$core$Int64) {25u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:407:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1601 = $tmp1168.value;
int64_t $tmp1602 = $tmp1600.value;
bool $tmp1603 = $tmp1601 == $tmp1602;
frost$core$Bit $tmp1604 = (frost$core$Bit) {$tmp1603};
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:408
frost$core$Int64 $tmp1606 = (frost$core$Int64) {1u};
return $tmp1606;
block82:;
frost$core$Int64 $tmp1607 = (frost$core$Int64) {27u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:410:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1608 = $tmp1168.value;
int64_t $tmp1609 = $tmp1607.value;
bool $tmp1610 = $tmp1608 == $tmp1609;
frost$core$Bit $tmp1611 = (frost$core$Bit) {$tmp1610};
bool $tmp1612 = $tmp1611.value;
if ($tmp1612) goto block84; else goto block85;
block84:;
org$frostlang$frostc$Position* $tmp1613 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1614 = *$tmp1613;
frost$core$String** $tmp1615 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1616 = *$tmp1615;
org$frostlang$frostc$FixedArray** $tmp1617 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1618 = *$tmp1617;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
org$frostlang$frostc$FixedArray* $tmp1619 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
*(&local30) = $tmp1618;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:411
frost$core$Int64 $tmp1620 = (frost$core$Int64) {0u};
*(&local31) = $tmp1620;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:412
org$frostlang$frostc$FixedArray* $tmp1621 = *(&local30);
ITable* $tmp1622 = ((frost$collections$Iterable*) $tmp1621)->$class->itable;
while ($tmp1622->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1622 = $tmp1622->next;
}
$fn1624 $tmp1623 = $tmp1622->methods[0];
frost$collections$Iterator* $tmp1625 = $tmp1623(((frost$collections$Iterable*) $tmp1621));
goto block87;
block87:;
ITable* $tmp1626 = $tmp1625->$class->itable;
while ($tmp1626->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1626 = $tmp1626->next;
}
$fn1628 $tmp1627 = $tmp1626->methods[0];
frost$core$Bit $tmp1629 = $tmp1627($tmp1625);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block89; else goto block88;
block88:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1631 = $tmp1625->$class->itable;
while ($tmp1631->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1631 = $tmp1631->next;
}
$fn1633 $tmp1632 = $tmp1631->methods[1];
frost$core$Object* $tmp1634 = $tmp1632($tmp1625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1634)));
org$frostlang$frostc$ASTNode* $tmp1635 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1635));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1634);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:413
frost$core$Int64 $tmp1636 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1637 = *(&local32);
frost$core$Int64 $tmp1638 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1637);
int64_t $tmp1639 = $tmp1636.value;
int64_t $tmp1640 = $tmp1638.value;
int64_t $tmp1641 = $tmp1639 + $tmp1640;
frost$core$Int64 $tmp1642 = (frost$core$Int64) {$tmp1641};
*(&local31) = $tmp1642;
frost$core$Frost$unref$frost$core$Object$Q($tmp1634);
org$frostlang$frostc$ASTNode* $tmp1643 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:415
frost$core$Int64 $tmp1644 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1645 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1645));
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1644;
block85:;
frost$core$Int64 $tmp1646 = (frost$core$Int64) {28u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:417:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1647 = $tmp1168.value;
int64_t $tmp1648 = $tmp1646.value;
bool $tmp1649 = $tmp1647 == $tmp1648;
frost$core$Bit $tmp1650 = (frost$core$Bit) {$tmp1649};
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block90; else goto block91;
block90:;
org$frostlang$frostc$Position* $tmp1652 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1653 = *$tmp1652;
org$frostlang$frostc$ASTNode** $tmp1654 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1655 = *$tmp1654;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1655));
org$frostlang$frostc$ASTNode* $tmp1656 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
*(&local33) = $tmp1655;
org$frostlang$frostc$FixedArray** $tmp1657 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1658 = *$tmp1657;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
org$frostlang$frostc$FixedArray* $tmp1659 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1659));
*(&local34) = $tmp1658;
org$frostlang$frostc$FixedArray** $tmp1660 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1661 = *$tmp1660;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1661));
org$frostlang$frostc$FixedArray* $tmp1662 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local35) = $tmp1661;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:418
org$frostlang$frostc$ASTNode* $tmp1663 = *(&local33);
frost$core$Int64 $tmp1664 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1663);
*(&local36) = $tmp1664;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:419
org$frostlang$frostc$FixedArray* $tmp1665 = *(&local34);
ITable* $tmp1666 = ((frost$collections$Iterable*) $tmp1665)->$class->itable;
while ($tmp1666->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1666 = $tmp1666->next;
}
$fn1668 $tmp1667 = $tmp1666->methods[0];
frost$collections$Iterator* $tmp1669 = $tmp1667(((frost$collections$Iterable*) $tmp1665));
goto block93;
block93:;
ITable* $tmp1670 = $tmp1669->$class->itable;
while ($tmp1670->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1670 = $tmp1670->next;
}
$fn1672 $tmp1671 = $tmp1670->methods[0];
frost$core$Bit $tmp1673 = $tmp1671($tmp1669);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block95; else goto block94;
block94:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1675 = $tmp1669->$class->itable;
while ($tmp1675->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1675 = $tmp1675->next;
}
$fn1677 $tmp1676 = $tmp1675->methods[1];
frost$core$Object* $tmp1678 = $tmp1676($tmp1669);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1678)));
org$frostlang$frostc$ASTNode* $tmp1679 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1678);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:420
frost$core$Int64 $tmp1680 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1681 = *(&local37);
frost$core$Int64 $tmp1682 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1681);
int64_t $tmp1683 = $tmp1680.value;
int64_t $tmp1684 = $tmp1682.value;
int64_t $tmp1685 = $tmp1683 + $tmp1684;
frost$core$Int64 $tmp1686 = (frost$core$Int64) {$tmp1685};
*(&local36) = $tmp1686;
frost$core$Frost$unref$frost$core$Object$Q($tmp1678);
org$frostlang$frostc$ASTNode* $tmp1687 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1669));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:422
org$frostlang$frostc$FixedArray* $tmp1688 = *(&local35);
frost$core$Bit $tmp1689 = (frost$core$Bit) {$tmp1688 != NULL};
bool $tmp1690 = $tmp1689.value;
if ($tmp1690) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:423
org$frostlang$frostc$FixedArray* $tmp1691 = *(&local35);
ITable* $tmp1692 = ((frost$collections$Iterable*) $tmp1691)->$class->itable;
while ($tmp1692->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1692 = $tmp1692->next;
}
$fn1694 $tmp1693 = $tmp1692->methods[0];
frost$collections$Iterator* $tmp1695 = $tmp1693(((frost$collections$Iterable*) $tmp1691));
goto block98;
block98:;
ITable* $tmp1696 = $tmp1695->$class->itable;
while ($tmp1696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1696 = $tmp1696->next;
}
$fn1698 $tmp1697 = $tmp1696->methods[0];
frost$core$Bit $tmp1699 = $tmp1697($tmp1695);
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block100; else goto block99;
block99:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1701 = $tmp1695->$class->itable;
while ($tmp1701->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[1];
frost$core$Object* $tmp1704 = $tmp1702($tmp1695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1704)));
org$frostlang$frostc$ASTNode* $tmp1705 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1704);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:424
frost$core$Int64 $tmp1706 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1707 = *(&local38);
frost$core$Int64 $tmp1708 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1707);
int64_t $tmp1709 = $tmp1706.value;
int64_t $tmp1710 = $tmp1708.value;
int64_t $tmp1711 = $tmp1709 + $tmp1710;
frost$core$Int64 $tmp1712 = (frost$core$Int64) {$tmp1711};
*(&local36) = $tmp1712;
frost$core$Frost$unref$frost$core$Object$Q($tmp1704);
org$frostlang$frostc$ASTNode* $tmp1713 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block98;
block100:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:427
frost$core$Int64 $tmp1714 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1715 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1716 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1717 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1714;
block91:;
frost$core$Int64 $tmp1718 = (frost$core$Int64) {29u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:429:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1719 = $tmp1168.value;
int64_t $tmp1720 = $tmp1718.value;
bool $tmp1721 = $tmp1719 == $tmp1720;
frost$core$Bit $tmp1722 = (frost$core$Bit) {$tmp1721};
bool $tmp1723 = $tmp1722.value;
if ($tmp1723) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:430
frost$core$Int64 $tmp1724 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp1725 = (frost$core$Int64) {1u};
int64_t $tmp1726 = $tmp1724.value;
int64_t $tmp1727 = $tmp1725.value;
int64_t $tmp1728 = $tmp1726 + $tmp1727;
frost$core$Int64 $tmp1729 = (frost$core$Int64) {$tmp1728};
return $tmp1729;
block102:;
frost$core$Int64 $tmp1730 = (frost$core$Int64) {31u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:432:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1731 = $tmp1168.value;
int64_t $tmp1732 = $tmp1730.value;
bool $tmp1733 = $tmp1731 == $tmp1732;
frost$core$Bit $tmp1734 = (frost$core$Bit) {$tmp1733};
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:433
frost$core$Int64 $tmp1736 = (frost$core$Int64) {1u};
return $tmp1736;
block105:;
frost$core$Int64 $tmp1737 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:435:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1738 = $tmp1168.value;
int64_t $tmp1739 = $tmp1737.value;
bool $tmp1740 = $tmp1738 == $tmp1739;
frost$core$Bit $tmp1741 = (frost$core$Bit) {$tmp1740};
bool $tmp1742 = $tmp1741.value;
if ($tmp1742) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:436
frost$core$Int64 $tmp1743 = (frost$core$Int64) {0u};
return $tmp1743;
block108:;
frost$core$Int64 $tmp1744 = (frost$core$Int64) {35u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:438:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1745 = $tmp1168.value;
int64_t $tmp1746 = $tmp1744.value;
bool $tmp1747 = $tmp1745 == $tmp1746;
frost$core$Bit $tmp1748 = (frost$core$Bit) {$tmp1747};
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:439
frost$core$Int64 $tmp1750 = (frost$core$Int64) {1u};
return $tmp1750;
block111:;
frost$core$Int64 $tmp1751 = (frost$core$Int64) {36u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:441:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1752 = $tmp1168.value;
int64_t $tmp1753 = $tmp1751.value;
bool $tmp1754 = $tmp1752 == $tmp1753;
frost$core$Bit $tmp1755 = (frost$core$Bit) {$tmp1754};
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:442
frost$core$Int64 $tmp1757 = (frost$core$Int64) {1u};
return $tmp1757;
block114:;
frost$core$Int64 $tmp1758 = (frost$core$Int64) {37u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:444:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1759 = $tmp1168.value;
int64_t $tmp1760 = $tmp1758.value;
bool $tmp1761 = $tmp1759 == $tmp1760;
frost$core$Bit $tmp1762 = (frost$core$Bit) {$tmp1761};
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:445
frost$core$Int64 $tmp1764 = (frost$core$Int64) {1u};
return $tmp1764;
block117:;
frost$core$Int64 $tmp1765 = (frost$core$Int64) {38u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:447:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1766 = $tmp1168.value;
int64_t $tmp1767 = $tmp1765.value;
bool $tmp1768 = $tmp1766 == $tmp1767;
frost$core$Bit $tmp1769 = (frost$core$Bit) {$tmp1768};
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block119; else goto block120;
block119:;
org$frostlang$frostc$Position* $tmp1771 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1772 = *$tmp1771;
org$frostlang$frostc$ASTNode** $tmp1773 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1774 = *$tmp1773;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
org$frostlang$frostc$ASTNode* $tmp1775 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
*(&local39) = $tmp1774;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:448
org$frostlang$frostc$ASTNode* $tmp1776 = *(&local39);
frost$core$Bit $tmp1777 = (frost$core$Bit) {$tmp1776 == NULL};
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:449
frost$core$Int64 $tmp1779 = (frost$core$Int64) {0u};
org$frostlang$frostc$ASTNode* $tmp1780 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1779;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:451
org$frostlang$frostc$ASTNode* $tmp1781 = *(&local39);
frost$core$Int64 $tmp1782 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1781);
org$frostlang$frostc$ASTNode* $tmp1783 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1782;
block120:;
frost$core$Int64 $tmp1784 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:453:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1785 = $tmp1168.value;
int64_t $tmp1786 = $tmp1784.value;
bool $tmp1787 = $tmp1785 == $tmp1786;
frost$core$Bit $tmp1788 = (frost$core$Bit) {$tmp1787};
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block124; else goto block125;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:454
frost$core$Int64 $tmp1790 = (frost$core$Int64) {1u};
return $tmp1790;
block125:;
frost$core$Int64 $tmp1791 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:456:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1792 = $tmp1168.value;
int64_t $tmp1793 = $tmp1791.value;
bool $tmp1794 = $tmp1792 == $tmp1793;
frost$core$Bit $tmp1795 = (frost$core$Bit) {$tmp1794};
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block127; else goto block128;
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:457
frost$core$Int64 $tmp1797 = (frost$core$Int64) {1u};
return $tmp1797;
block128:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {41u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:459:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1799 = $tmp1168.value;
int64_t $tmp1800 = $tmp1798.value;
bool $tmp1801 = $tmp1799 == $tmp1800;
frost$core$Bit $tmp1802 = (frost$core$Bit) {$tmp1801};
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block130; else goto block131;
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:460
frost$core$Int64 $tmp1804 = (frost$core$Int64) {1u};
return $tmp1804;
block131:;
frost$core$Int64 $tmp1805 = (frost$core$Int64) {42u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:462:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1806 = $tmp1168.value;
int64_t $tmp1807 = $tmp1805.value;
bool $tmp1808 = $tmp1806 == $tmp1807;
frost$core$Bit $tmp1809 = (frost$core$Bit) {$tmp1808};
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block133; else goto block134;
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:463
frost$core$Int64 $tmp1811 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp1812 = (frost$core$Int64) {1u};
int64_t $tmp1813 = $tmp1811.value;
int64_t $tmp1814 = $tmp1812.value;
int64_t $tmp1815 = $tmp1813 + $tmp1814;
frost$core$Int64 $tmp1816 = (frost$core$Int64) {$tmp1815};
return $tmp1816;
block134:;
frost$core$Int64 $tmp1817 = (frost$core$Int64) {46u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:465:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1818 = $tmp1168.value;
int64_t $tmp1819 = $tmp1817.value;
bool $tmp1820 = $tmp1818 == $tmp1819;
frost$core$Bit $tmp1821 = (frost$core$Bit) {$tmp1820};
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:466
frost$core$Int64 $tmp1823 = (frost$core$Int64) {0u};
return $tmp1823;
block137:;
frost$core$Int64 $tmp1824 = (frost$core$Int64) {47u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:468:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1825 = $tmp1168.value;
int64_t $tmp1826 = $tmp1824.value;
bool $tmp1827 = $tmp1825 == $tmp1826;
frost$core$Bit $tmp1828 = (frost$core$Bit) {$tmp1827};
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:469
frost$core$Int64 $tmp1830 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp1831 = (frost$core$Int64) {1u};
int64_t $tmp1832 = $tmp1830.value;
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832 + $tmp1833;
frost$core$Int64 $tmp1835 = (frost$core$Int64) {$tmp1834};
return $tmp1835;
block140:;
frost$core$Int64 $tmp1836 = (frost$core$Int64) {49u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:471:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1837 = $tmp1168.value;
int64_t $tmp1838 = $tmp1836.value;
bool $tmp1839 = $tmp1837 == $tmp1838;
frost$core$Bit $tmp1840 = (frost$core$Bit) {$tmp1839};
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block142; else goto block143;
block142:;
org$frostlang$frostc$Position* $tmp1842 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1843 = *$tmp1842;
org$frostlang$frostc$expression$Unary$Operator* $tmp1844 = (org$frostlang$frostc$expression$Unary$Operator*) (param1->$data + 24);
org$frostlang$frostc$expression$Unary$Operator $tmp1845 = *$tmp1844;
org$frostlang$frostc$ASTNode** $tmp1846 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1847 = *$tmp1846;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
org$frostlang$frostc$ASTNode* $tmp1848 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1848));
*(&local40) = $tmp1847;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:472
frost$core$Int64 $tmp1849 = (frost$core$Int64) {1u};
org$frostlang$frostc$ASTNode* $tmp1850 = *(&local40);
frost$core$Int64 $tmp1851 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1850);
int64_t $tmp1852 = $tmp1849.value;
int64_t $tmp1853 = $tmp1851.value;
int64_t $tmp1854 = $tmp1852 + $tmp1853;
frost$core$Int64 $tmp1855 = (frost$core$Int64) {$tmp1854};
org$frostlang$frostc$ASTNode* $tmp1856 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1855;
block143:;
frost$core$Int64 $tmp1857 = (frost$core$Int64) {50u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:474:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1858 = $tmp1168.value;
int64_t $tmp1859 = $tmp1857.value;
bool $tmp1860 = $tmp1858 == $tmp1859;
frost$core$Bit $tmp1861 = (frost$core$Bit) {$tmp1860};
bool $tmp1862 = $tmp1861.value;
if ($tmp1862) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:475
frost$core$Int64 $tmp1863 = (frost$core$Int64) {0u};
return $tmp1863;
block146:;
frost$core$Int64 $tmp1864 = (frost$core$Int64) {51u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:477:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1865 = $tmp1168.value;
int64_t $tmp1866 = $tmp1864.value;
bool $tmp1867 = $tmp1865 == $tmp1866;
frost$core$Bit $tmp1868 = (frost$core$Bit) {$tmp1867};
bool $tmp1869 = $tmp1868.value;
if ($tmp1869) goto block148; else goto block149;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:478
frost$core$Int64 $tmp1870 = (frost$core$Int64) {10u};
frost$core$Int64 $tmp1871 = (frost$core$Int64) {1u};
int64_t $tmp1872 = $tmp1870.value;
int64_t $tmp1873 = $tmp1871.value;
int64_t $tmp1874 = $tmp1872 + $tmp1873;
frost$core$Int64 $tmp1875 = (frost$core$Int64) {$tmp1874};
return $tmp1875;
block149:;
frost$core$Int64 $tmp1876 = (frost$core$Int64) {53u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:480:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1877 = $tmp1168.value;
int64_t $tmp1878 = $tmp1876.value;
bool $tmp1879 = $tmp1877 == $tmp1878;
frost$core$Bit $tmp1880 = (frost$core$Bit) {$tmp1879};
bool $tmp1881 = $tmp1880.value;
if ($tmp1881) goto block151; else goto block152;
block151:;
org$frostlang$frostc$Position* $tmp1882 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1883 = *$tmp1882;
org$frostlang$frostc$Variable$Kind* $tmp1884 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 24);
org$frostlang$frostc$Variable$Kind $tmp1885 = *$tmp1884;
org$frostlang$frostc$FixedArray** $tmp1886 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1887 = *$tmp1886;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1887));
org$frostlang$frostc$FixedArray* $tmp1888 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
*(&local41) = $tmp1887;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:481
frost$core$Int64 $tmp1889 = (frost$core$Int64) {0u};
*(&local42) = $tmp1889;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:482
org$frostlang$frostc$FixedArray* $tmp1890 = *(&local41);
ITable* $tmp1891 = ((frost$collections$Iterable*) $tmp1890)->$class->itable;
while ($tmp1891->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1891 = $tmp1891->next;
}
$fn1893 $tmp1892 = $tmp1891->methods[0];
frost$collections$Iterator* $tmp1894 = $tmp1892(((frost$collections$Iterable*) $tmp1890));
goto block154;
block154:;
ITable* $tmp1895 = $tmp1894->$class->itable;
while ($tmp1895->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1895 = $tmp1895->next;
}
$fn1897 $tmp1896 = $tmp1895->methods[0];
frost$core$Bit $tmp1898 = $tmp1896($tmp1894);
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block156; else goto block155;
block155:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1900 = $tmp1894->$class->itable;
while ($tmp1900->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1900 = $tmp1900->next;
}
$fn1902 $tmp1901 = $tmp1900->methods[1];
frost$core$Object* $tmp1903 = $tmp1901($tmp1894);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1903)));
org$frostlang$frostc$ASTNode* $tmp1904 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1903);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:483
frost$core$Int64 $tmp1905 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1906 = *(&local43);
frost$core$Int64 $tmp1907 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1906);
int64_t $tmp1908 = $tmp1905.value;
int64_t $tmp1909 = $tmp1907.value;
int64_t $tmp1910 = $tmp1908 + $tmp1909;
frost$core$Int64 $tmp1911 = (frost$core$Int64) {$tmp1910};
*(&local42) = $tmp1911;
frost$core$Frost$unref$frost$core$Object$Q($tmp1903);
org$frostlang$frostc$ASTNode* $tmp1912 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block154;
block156:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:485
frost$core$Int64 $tmp1913 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1914 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1913;
block152:;
frost$core$Int64 $tmp1915 = (frost$core$Int64) {54u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:487:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1916 = $tmp1168.value;
int64_t $tmp1917 = $tmp1915.value;
bool $tmp1918 = $tmp1916 == $tmp1917;
frost$core$Bit $tmp1919 = (frost$core$Bit) {$tmp1918};
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block157; else goto block158;
block157:;
org$frostlang$frostc$Position* $tmp1921 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1922 = *$tmp1921;
org$frostlang$frostc$FixedArray** $tmp1923 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1924 = *$tmp1923;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
org$frostlang$frostc$FixedArray* $tmp1925 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
*(&local44) = $tmp1924;
org$frostlang$frostc$FixedArray** $tmp1926 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1927 = *$tmp1926;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
org$frostlang$frostc$FixedArray* $tmp1928 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
*(&local45) = $tmp1927;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:488
frost$core$Int64 $tmp1929 = (frost$core$Int64) {0u};
*(&local46) = $tmp1929;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:489
org$frostlang$frostc$FixedArray* $tmp1930 = *(&local44);
ITable* $tmp1931 = ((frost$collections$Iterable*) $tmp1930)->$class->itable;
while ($tmp1931->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1931 = $tmp1931->next;
}
$fn1933 $tmp1932 = $tmp1931->methods[0];
frost$collections$Iterator* $tmp1934 = $tmp1932(((frost$collections$Iterable*) $tmp1930));
goto block160;
block160:;
ITable* $tmp1935 = $tmp1934->$class->itable;
while ($tmp1935->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1935 = $tmp1935->next;
}
$fn1937 $tmp1936 = $tmp1935->methods[0];
frost$core$Bit $tmp1938 = $tmp1936($tmp1934);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block162; else goto block161;
block161:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1940 = $tmp1934->$class->itable;
while ($tmp1940->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1940 = $tmp1940->next;
}
$fn1942 $tmp1941 = $tmp1940->methods[1];
frost$core$Object* $tmp1943 = $tmp1941($tmp1934);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1943)));
org$frostlang$frostc$ASTNode* $tmp1944 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1944));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1943);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:490
frost$core$Int64 $tmp1945 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1946 = *(&local47);
frost$core$Int64 $tmp1947 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1946);
int64_t $tmp1948 = $tmp1945.value;
int64_t $tmp1949 = $tmp1947.value;
int64_t $tmp1950 = $tmp1948 + $tmp1949;
frost$core$Int64 $tmp1951 = (frost$core$Int64) {$tmp1950};
*(&local46) = $tmp1951;
frost$core$Frost$unref$frost$core$Object$Q($tmp1943);
org$frostlang$frostc$ASTNode* $tmp1952 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block160;
block162:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:492
org$frostlang$frostc$FixedArray* $tmp1953 = *(&local45);
ITable* $tmp1954 = ((frost$collections$Iterable*) $tmp1953)->$class->itable;
while ($tmp1954->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1954 = $tmp1954->next;
}
$fn1956 $tmp1955 = $tmp1954->methods[0];
frost$collections$Iterator* $tmp1957 = $tmp1955(((frost$collections$Iterable*) $tmp1953));
goto block163;
block163:;
ITable* $tmp1958 = $tmp1957->$class->itable;
while ($tmp1958->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1958 = $tmp1958->next;
}
$fn1960 $tmp1959 = $tmp1958->methods[0];
frost$core$Bit $tmp1961 = $tmp1959($tmp1957);
bool $tmp1962 = $tmp1961.value;
if ($tmp1962) goto block165; else goto block164;
block164:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1963 = $tmp1957->$class->itable;
while ($tmp1963->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1963 = $tmp1963->next;
}
$fn1965 $tmp1964 = $tmp1963->methods[1];
frost$core$Object* $tmp1966 = $tmp1964($tmp1957);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1966)));
org$frostlang$frostc$ASTNode* $tmp1967 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1967));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1966);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:493
frost$core$Int64 $tmp1968 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1969 = *(&local48);
frost$core$Int64 $tmp1970 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1969);
int64_t $tmp1971 = $tmp1968.value;
int64_t $tmp1972 = $tmp1970.value;
int64_t $tmp1973 = $tmp1971 + $tmp1972;
frost$core$Int64 $tmp1974 = (frost$core$Int64) {$tmp1973};
*(&local46) = $tmp1974;
frost$core$Frost$unref$frost$core$Object$Q($tmp1966);
org$frostlang$frostc$ASTNode* $tmp1975 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block163;
block165:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:495
frost$core$Int64 $tmp1976 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1977 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1978 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1976;
block158:;
frost$core$Int64 $tmp1979 = (frost$core$Int64) {55u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:497:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1980 = $tmp1168.value;
int64_t $tmp1981 = $tmp1979.value;
bool $tmp1982 = $tmp1980 == $tmp1981;
frost$core$Bit $tmp1983 = (frost$core$Bit) {$tmp1982};
bool $tmp1984 = $tmp1983.value;
if ($tmp1984) goto block166; else goto block167;
block166:;
org$frostlang$frostc$Position* $tmp1985 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1986 = *$tmp1985;
frost$core$String** $tmp1987 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1988 = *$tmp1987;
org$frostlang$frostc$ASTNode** $tmp1989 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1990 = *$tmp1989;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
org$frostlang$frostc$ASTNode* $tmp1991 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local49) = $tmp1990;
org$frostlang$frostc$FixedArray** $tmp1992 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1993 = *$tmp1992;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
org$frostlang$frostc$FixedArray* $tmp1994 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local50) = $tmp1993;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:498
org$frostlang$frostc$ASTNode* $tmp1995 = *(&local49);
frost$core$Int64 $tmp1996 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1995);
*(&local51) = $tmp1996;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:499
org$frostlang$frostc$FixedArray* $tmp1997 = *(&local50);
ITable* $tmp1998 = ((frost$collections$Iterable*) $tmp1997)->$class->itable;
while ($tmp1998->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1998 = $tmp1998->next;
}
$fn2000 $tmp1999 = $tmp1998->methods[0];
frost$collections$Iterator* $tmp2001 = $tmp1999(((frost$collections$Iterable*) $tmp1997));
goto block169;
block169:;
ITable* $tmp2002 = $tmp2001->$class->itable;
while ($tmp2002->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2002 = $tmp2002->next;
}
$fn2004 $tmp2003 = $tmp2002->methods[0];
frost$core$Bit $tmp2005 = $tmp2003($tmp2001);
bool $tmp2006 = $tmp2005.value;
if ($tmp2006) goto block171; else goto block170;
block170:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2007 = $tmp2001->$class->itable;
while ($tmp2007->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2007 = $tmp2007->next;
}
$fn2009 $tmp2008 = $tmp2007->methods[1];
frost$core$Object* $tmp2010 = $tmp2008($tmp2001);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2010)));
org$frostlang$frostc$ASTNode* $tmp2011 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp2010);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:500
frost$core$Int64 $tmp2012 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp2013 = *(&local52);
frost$core$Int64 $tmp2014 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp2013);
int64_t $tmp2015 = $tmp2012.value;
int64_t $tmp2016 = $tmp2014.value;
int64_t $tmp2017 = $tmp2015 + $tmp2016;
frost$core$Int64 $tmp2018 = (frost$core$Int64) {$tmp2017};
*(&local51) = $tmp2018;
frost$core$Frost$unref$frost$core$Object$Q($tmp2010);
org$frostlang$frostc$ASTNode* $tmp2019 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block169;
block171:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:502
frost$core$Int64 $tmp2020 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp2021 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2021));
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2022 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp2020;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:505
frost$core$Int64 $tmp2023 = (frost$core$Int64) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2024, $tmp2023);
abort(); // unreachable
block1:;
goto block172;
block172:;

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Int64 local0;
org$frostlang$frostc$ASTNode* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:511
frost$core$Weak** $tmp2025 = &param0->compiler;
frost$core$Weak* $tmp2026 = *$tmp2025;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:511:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2027 = &$tmp2026->_valid;
frost$core$Bit $tmp2028 = *$tmp2027;
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2030 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2031, $tmp2030);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2032 = &$tmp2026->value;
frost$core$Object* $tmp2033 = *$tmp2032;
frost$core$Frost$ref$frost$core$Object$Q($tmp2033);
org$frostlang$frostc$Compiler$Settings** $tmp2034 = &((org$frostlang$frostc$Compiler*) $tmp2033)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp2035 = *$tmp2034;
frost$core$Int64* $tmp2036 = &$tmp2035->optimizationLevel;
frost$core$Int64 $tmp2037 = *$tmp2036;
frost$core$Int64 $tmp2038 = (frost$core$Int64) {0u};
int64_t $tmp2039 = $tmp2037.value;
int64_t $tmp2040 = $tmp2038.value;
bool $tmp2041 = $tmp2039 > $tmp2040;
frost$core$Bit $tmp2042 = (frost$core$Bit) {$tmp2041};
bool $tmp2043 = $tmp2042.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2033);
if ($tmp2043) goto block4; else goto block2;
block4:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from Scanner.frost:511:66
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int64* $tmp2044 = &param1->flags;
frost$core$Int64 $tmp2045 = *$tmp2044;
frost$core$Int64 $tmp2046 = (frost$core$Int64) {1024u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2047 = $tmp2045.value;
int64_t $tmp2048 = $tmp2046.value;
int64_t $tmp2049 = $tmp2047 & $tmp2048;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {$tmp2049};
frost$core$Int64 $tmp2051 = (frost$core$Int64) {0u};
int64_t $tmp2052 = $tmp2050.value;
int64_t $tmp2053 = $tmp2051.value;
bool $tmp2054 = $tmp2052 != $tmp2053;
frost$core$Bit $tmp2055 = (frost$core$Bit) {$tmp2054};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:511:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2056 = $tmp2055.value;
bool $tmp2057 = !$tmp2056;
frost$core$Bit $tmp2058 = (frost$core$Bit) {$tmp2057};
bool $tmp2059 = $tmp2058.value;
if ($tmp2059) goto block3; else goto block2;
block3:;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:512:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp2060 = &param1->flags;
frost$core$Int64 $tmp2061 = *$tmp2060;
frost$core$Int64 $tmp2062 = (frost$core$Int64) {256u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2063 = $tmp2061.value;
int64_t $tmp2064 = $tmp2062.value;
int64_t $tmp2065 = $tmp2063 & $tmp2064;
frost$core$Int64 $tmp2066 = (frost$core$Int64) {$tmp2065};
frost$core$Int64 $tmp2067 = (frost$core$Int64) {0u};
int64_t $tmp2068 = $tmp2066.value;
int64_t $tmp2069 = $tmp2067.value;
bool $tmp2070 = $tmp2068 != $tmp2069;
frost$core$Bit $tmp2071 = (frost$core$Bit) {$tmp2070};
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:513
frost$core$Int64 $tmp2073 = (frost$core$Int64) {0u};
*(&local0) = $tmp2073;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:514
ITable* $tmp2074 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp2074->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2074 = $tmp2074->next;
}
$fn2076 $tmp2075 = $tmp2074->methods[0];
frost$collections$Iterator* $tmp2077 = $tmp2075(((frost$collections$Iterable*) param2));
goto block14;
block14:;
ITable* $tmp2078 = $tmp2077->$class->itable;
while ($tmp2078->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2078 = $tmp2078->next;
}
$fn2080 $tmp2079 = $tmp2078->methods[0];
frost$core$Bit $tmp2081 = $tmp2079($tmp2077);
bool $tmp2082 = $tmp2081.value;
if ($tmp2082) goto block16; else goto block15;
block15:;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2083 = $tmp2077->$class->itable;
while ($tmp2083->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2083 = $tmp2083->next;
}
$fn2085 $tmp2084 = $tmp2083->methods[1];
frost$core$Object* $tmp2086 = $tmp2084($tmp2077);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2086)));
org$frostlang$frostc$ASTNode* $tmp2087 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local1) = ((org$frostlang$frostc$ASTNode*) $tmp2086);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:515
frost$core$Int64 $tmp2088 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2089 = *(&local1);
frost$core$Int64 $tmp2090 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp2089);
int64_t $tmp2091 = $tmp2088.value;
int64_t $tmp2092 = $tmp2090.value;
int64_t $tmp2093 = $tmp2091 + $tmp2092;
frost$core$Int64 $tmp2094 = (frost$core$Int64) {$tmp2093};
*(&local0) = $tmp2094;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:516
frost$core$Int64 $tmp2095 = *(&local0);
frost$core$Int64 $tmp2096 = (frost$core$Int64) {10u};
int64_t $tmp2097 = $tmp2095.value;
int64_t $tmp2098 = $tmp2096.value;
bool $tmp2099 = $tmp2097 > $tmp2098;
frost$core$Bit $tmp2100 = (frost$core$Bit) {$tmp2099};
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:517
frost$core$Bit $tmp2102 = (frost$core$Bit) {false};
frost$core$Frost$unref$frost$core$Object$Q($tmp2086);
org$frostlang$frostc$ASTNode* $tmp2103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
return $tmp2102;
block18:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2086);
org$frostlang$frostc$ASTNode* $tmp2104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:520
frost$core$Bit $tmp2105 = (frost$core$Bit) {true};
return $tmp2105;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:522
frost$core$Bit $tmp2106 = (frost$core$Bit) {false};
return $tmp2106;

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
frost$core$Bit $tmp2107 = (frost$core$Bit) {param3 == NULL};
bool $tmp2108 = $tmp2107.value;
if ($tmp2108) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:532
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:535
frost$core$Int64* $tmp2110 = &param3->$rawValue;
frost$core$Int64 $tmp2111 = *$tmp2110;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:536:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2113 = $tmp2111.value;
int64_t $tmp2114 = $tmp2112.value;
bool $tmp2115 = $tmp2113 == $tmp2114;
frost$core$Bit $tmp2116 = (frost$core$Bit) {$tmp2115};
bool $tmp2117 = $tmp2116.value;
if ($tmp2117) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2118 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2119 = *$tmp2118;
*(&local1) = $tmp2119;
frost$core$String** $tmp2120 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2121 = *$tmp2120;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$String* $tmp2122 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local2) = $tmp2121;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:537
frost$core$String* $tmp2123 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$String* $tmp2124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
*(&local0) = $tmp2123;
frost$core$String* $tmp2125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:540
frost$core$Int64 $tmp2126 = (frost$core$Int64) {540u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2127, $tmp2126);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:544
org$frostlang$frostc$Annotations* $tmp2128 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
org$frostlang$frostc$Annotations* $tmp2129 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
*(&local3) = $tmp2128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2128));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:545
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2130;
$tmp2130 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2130->value = param5;
frost$core$Int64 $tmp2131 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:545:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2132 = &(&local5)->$rawValue;
*$tmp2132 = $tmp2131;
org$frostlang$frostc$MethodDecl$Kind $tmp2133 = *(&local5);
*(&local4) = $tmp2133;
org$frostlang$frostc$MethodDecl$Kind $tmp2134 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2135;
$tmp2135 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2135->value = $tmp2134;
ITable* $tmp2136 = ((frost$core$Equatable*) $tmp2130)->$class->itable;
while ($tmp2136->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2136 = $tmp2136->next;
}
$fn2138 $tmp2137 = $tmp2136->methods[1];
frost$core$Bit $tmp2139 = $tmp2137(((frost$core$Equatable*) $tmp2130), ((frost$core$Equatable*) $tmp2135));
bool $tmp2140 = $tmp2139.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2135)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2130)));
if ($tmp2140) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Annotations** $tmp2141 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2142 = *$tmp2141;
// begin inline call to function org.frostlang.frostc.Annotations.get_isFinal():frost.core.Bit from Scanner.frost:545:60
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:135
frost$core$Int64* $tmp2143 = &$tmp2142->flags;
frost$core$Int64 $tmp2144 = *$tmp2143;
frost$core$Int64 $tmp2145 = (frost$core$Int64) {256u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2146 = $tmp2144.value;
int64_t $tmp2147 = $tmp2145.value;
int64_t $tmp2148 = $tmp2146 & $tmp2147;
frost$core$Int64 $tmp2149 = (frost$core$Int64) {$tmp2148};
frost$core$Int64 $tmp2150 = (frost$core$Int64) {0u};
int64_t $tmp2151 = $tmp2149.value;
int64_t $tmp2152 = $tmp2150.value;
bool $tmp2153 = $tmp2151 != $tmp2152;
frost$core$Bit $tmp2154 = (frost$core$Bit) {$tmp2153};
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block8; else goto block10;
block10:;
org$frostlang$frostc$Annotations* $tmp2156 = *(&local3);
// begin inline call to function org.frostlang.frostc.Annotations.get_isPrivate():frost.core.Bit from Scanner.frost:545:82
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:107
frost$core$Int64* $tmp2157 = &$tmp2156->flags;
frost$core$Int64 $tmp2158 = *$tmp2157;
frost$core$Int64 $tmp2159 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:107:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2160 = $tmp2158.value;
int64_t $tmp2161 = $tmp2159.value;
int64_t $tmp2162 = $tmp2160 & $tmp2161;
frost$core$Int64 $tmp2163 = (frost$core$Int64) {$tmp2162};
frost$core$Int64 $tmp2164 = (frost$core$Int64) {0u};
int64_t $tmp2165 = $tmp2163.value;
int64_t $tmp2166 = $tmp2164.value;
bool $tmp2167 = $tmp2165 != $tmp2166;
frost$core$Bit $tmp2168 = (frost$core$Bit) {$tmp2167};
bool $tmp2169 = $tmp2168.value;
if ($tmp2169) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:546
org$frostlang$frostc$Annotations* $tmp2170 = *(&local3);
frost$core$Int64* $tmp2171 = &$tmp2170->flags;
frost$core$Int64 $tmp2172 = *$tmp2171;
frost$core$Int64 $tmp2173 = (frost$core$Int64) {256u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:546:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp2174 = $tmp2172.value;
int64_t $tmp2175 = $tmp2173.value;
int64_t $tmp2176 = $tmp2174 | $tmp2175;
frost$core$Int64 $tmp2177 = (frost$core$Int64) {$tmp2176};
frost$core$Int64* $tmp2178 = &$tmp2170->flags;
*$tmp2178 = $tmp2177;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:548
*(&local6) = ((frost$collections$Array*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:549
frost$core$Bit $tmp2179 = (frost$core$Bit) {param7 != NULL};
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:550
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2181 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
frost$collections$Array* $tmp2182 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local6) = $tmp2181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:551
frost$core$String** $tmp2183 = &param1->name;
frost$core$String* $tmp2184 = *$tmp2183;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:551:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
frost$core$String* $tmp2185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2184, &$s2186);
frost$core$String* $tmp2187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2185, param6);
frost$core$String* $tmp2188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2187, &$s2189);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
frost$core$String* $tmp2190 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
*(&local7) = $tmp2188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2184));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:552
ITable* $tmp2191 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp2191->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2191 = $tmp2191->next;
}
$fn2193 $tmp2192 = $tmp2191->methods[0];
frost$collections$Iterator* $tmp2194 = $tmp2192(((frost$collections$Iterable*) param7));
goto block22;
block22:;
ITable* $tmp2195 = $tmp2194->$class->itable;
while ($tmp2195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2195 = $tmp2195->next;
}
$fn2197 $tmp2196 = $tmp2195->methods[0];
frost$core$Bit $tmp2198 = $tmp2196($tmp2194);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block24; else goto block23;
block23:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2200 = $tmp2194->$class->itable;
while ($tmp2200->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2200 = $tmp2200->next;
}
$fn2202 $tmp2201 = $tmp2200->methods[1];
frost$core$Object* $tmp2203 = $tmp2201($tmp2194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2203)));
org$frostlang$frostc$ASTNode* $tmp2204 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2204));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp2203);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:553
*(&local9) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:554
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:555
org$frostlang$frostc$ASTNode* $tmp2205 = *(&local8);
frost$core$Int64* $tmp2206 = &$tmp2205->$rawValue;
frost$core$Int64 $tmp2207 = *$tmp2206;
frost$core$Int64 $tmp2208 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:556:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2209 = $tmp2207.value;
int64_t $tmp2210 = $tmp2208.value;
bool $tmp2211 = $tmp2209 == $tmp2210;
frost$core$Bit $tmp2212 = (frost$core$Bit) {$tmp2211};
bool $tmp2213 = $tmp2212.value;
if ($tmp2213) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp2214 = (org$frostlang$frostc$Position*) ($tmp2205->$data + 0);
org$frostlang$frostc$Position $tmp2215 = *$tmp2214;
frost$core$String** $tmp2216 = (frost$core$String**) ($tmp2205->$data + 24);
frost$core$String* $tmp2217 = *$tmp2216;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$String* $tmp2218 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local11) = $tmp2217;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:557
frost$core$String* $tmp2219 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
frost$core$String* $tmp2220 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local9) = $tmp2219;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:558
frost$core$Weak** $tmp2221 = &param0->compiler;
frost$core$Weak* $tmp2222 = *$tmp2221;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:558:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2223 = &$tmp2222->_valid;
frost$core$Bit $tmp2224 = *$tmp2223;
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2226 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2227, $tmp2226);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2228 = &$tmp2222->value;
frost$core$Object* $tmp2229 = *$tmp2228;
frost$core$Frost$ref$frost$core$Object$Q($tmp2229);
org$frostlang$frostc$Type** $tmp2230 = &((org$frostlang$frostc$Compiler*) $tmp2229)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2231 = *$tmp2230;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2231));
org$frostlang$frostc$Type* $tmp2232 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
*(&local10) = $tmp2231;
frost$core$Frost$unref$frost$core$Object$Q($tmp2229);
frost$core$String* $tmp2233 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local11) = ((frost$core$String*) NULL);
goto block25;
block27:;
frost$core$Int64 $tmp2234 = (frost$core$Int64) {48u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:560:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2235 = $tmp2207.value;
int64_t $tmp2236 = $tmp2234.value;
bool $tmp2237 = $tmp2235 == $tmp2236;
frost$core$Bit $tmp2238 = (frost$core$Bit) {$tmp2237};
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp2240 = (org$frostlang$frostc$Position*) ($tmp2205->$data + 0);
org$frostlang$frostc$Position $tmp2241 = *$tmp2240;
frost$core$String** $tmp2242 = (frost$core$String**) ($tmp2205->$data + 24);
frost$core$String* $tmp2243 = *$tmp2242;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
frost$core$String* $tmp2244 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
*(&local12) = $tmp2243;
org$frostlang$frostc$ASTNode** $tmp2245 = (org$frostlang$frostc$ASTNode**) ($tmp2205->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2246 = *$tmp2245;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
org$frostlang$frostc$ASTNode* $tmp2247 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
*(&local13) = $tmp2246;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:561
frost$core$String* $tmp2248 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2248));
frost$core$String* $tmp2249 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
*(&local9) = $tmp2248;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:562
org$frostlang$frostc$ASTNode* $tmp2250 = *(&local13);
org$frostlang$frostc$Type* $tmp2251 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2250);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
org$frostlang$frostc$Type* $tmp2252 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local10) = $tmp2251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
org$frostlang$frostc$ASTNode* $tmp2253 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2254 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local12) = ((frost$core$String*) NULL);
goto block25;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:565
frost$core$Int64 $tmp2255 = (frost$core$Int64) {565u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2256, $tmp2255);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:568
frost$collections$Array* $tmp2257 = *(&local6);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$MethodDecl$GenericParameter));
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp2258 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2259 = *(&local8);
$fn2261 $tmp2260 = ($fn2261) $tmp2259->$class->vtable[2];
org$frostlang$frostc$Position $tmp2262 = $tmp2260($tmp2259);
frost$core$String* $tmp2263 = *(&local7);
frost$core$String* $tmp2264 = *(&local9);
org$frostlang$frostc$Type* $tmp2265 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2258, $tmp2262, $tmp2263, $tmp2264, $tmp2265);
frost$collections$Array$add$frost$collections$Array$T($tmp2257, ((frost$core$Object*) $tmp2258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
org$frostlang$frostc$Type* $tmp2266 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2267 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2203);
org$frostlang$frostc$ASTNode* $tmp2268 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
frost$core$String* $tmp2269 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local7) = ((frost$core$String*) NULL);
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp2270 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local6) = ((frost$collections$Array*) NULL);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:575
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2271 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2271);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$collections$Array* $tmp2272 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local14) = $tmp2271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:576
ITable* $tmp2273 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp2273->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2273 = $tmp2273->next;
}
$fn2275 $tmp2274 = $tmp2273->methods[0];
frost$collections$Iterator* $tmp2276 = $tmp2274(((frost$collections$Iterable*) param8));
goto block36;
block36:;
ITable* $tmp2277 = $tmp2276->$class->itable;
while ($tmp2277->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2277 = $tmp2277->next;
}
$fn2279 $tmp2278 = $tmp2277->methods[0];
frost$core$Bit $tmp2280 = $tmp2278($tmp2276);
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block38; else goto block37;
block37:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2282 = $tmp2276->$class->itable;
while ($tmp2282->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2282 = $tmp2282->next;
}
$fn2284 $tmp2283 = $tmp2282->methods[1];
frost$core$Object* $tmp2285 = $tmp2283($tmp2276);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2285)));
org$frostlang$frostc$ASTNode* $tmp2286 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2285);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:577
org$frostlang$frostc$ASTNode* $tmp2287 = *(&local15);
frost$core$Int64* $tmp2288 = &$tmp2287->$rawValue;
frost$core$Int64 $tmp2289 = *$tmp2288;
frost$core$Int64 $tmp2290 = (frost$core$Int64) {34u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:578:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2291 = $tmp2289.value;
int64_t $tmp2292 = $tmp2290.value;
bool $tmp2293 = $tmp2291 == $tmp2292;
frost$core$Bit $tmp2294 = (frost$core$Bit) {$tmp2293};
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp2296 = (org$frostlang$frostc$Position*) ($tmp2287->$data + 0);
org$frostlang$frostc$Position $tmp2297 = *$tmp2296;
frost$core$String** $tmp2298 = (frost$core$String**) ($tmp2287->$data + 24);
frost$core$String* $tmp2299 = *$tmp2298;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
frost$core$String* $tmp2300 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local16) = $tmp2299;
org$frostlang$frostc$ASTNode** $tmp2301 = (org$frostlang$frostc$ASTNode**) ($tmp2287->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2302 = *$tmp2301;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
org$frostlang$frostc$ASTNode* $tmp2303 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
*(&local17) = $tmp2302;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:579
frost$collections$Array* $tmp2304 = *(&local14);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp2305 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp2306 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp2307 = *(&local17);
org$frostlang$frostc$Type* $tmp2308 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2307);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp2305, $tmp2306, $tmp2308);
frost$collections$Array$add$frost$collections$Array$T($tmp2304, ((frost$core$Object*) $tmp2305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
org$frostlang$frostc$ASTNode* $tmp2309 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2310 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2285);
org$frostlang$frostc$ASTNode* $tmp2311 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:582
frost$core$Int64 $tmp2312 = (frost$core$Int64) {582u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2313, $tmp2312);
abort(); // unreachable
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:586
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:587
frost$core$Bit $tmp2314 = (frost$core$Bit) {param9 != NULL};
bool $tmp2315 = $tmp2314.value;
if ($tmp2315) goto block43; else goto block45;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:588
org$frostlang$frostc$Type* $tmp2316 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
org$frostlang$frostc$Type* $tmp2317 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local18) = $tmp2316;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
goto block44;
block45:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:591
frost$core$Weak** $tmp2318 = &param0->compiler;
frost$core$Weak* $tmp2319 = *$tmp2318;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:591:27
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2320 = &$tmp2319->_valid;
frost$core$Bit $tmp2321 = *$tmp2320;
bool $tmp2322 = $tmp2321.value;
if ($tmp2322) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp2323 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2324, $tmp2323);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2325 = &$tmp2319->value;
frost$core$Object* $tmp2326 = *$tmp2325;
frost$core$Frost$ref$frost$core$Object$Q($tmp2326);
org$frostlang$frostc$Type** $tmp2327 = &((org$frostlang$frostc$Compiler*) $tmp2326)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2328 = *$tmp2327;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
org$frostlang$frostc$Type* $tmp2329 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
*(&local18) = $tmp2328;
frost$core$Frost$unref$frost$core$Object$Q($tmp2326);
goto block44;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:593
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2330;
$tmp2330 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2330->value = param5;
frost$core$Int64 $tmp2331 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:593:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp2332 = &(&local20)->$rawValue;
*$tmp2332 = $tmp2331;
org$frostlang$frostc$MethodDecl$Kind $tmp2333 = *(&local20);
*(&local19) = $tmp2333;
org$frostlang$frostc$MethodDecl$Kind $tmp2334 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2335;
$tmp2335 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2335->value = $tmp2334;
ITable* $tmp2336 = ((frost$core$Equatable*) $tmp2330)->$class->itable;
while ($tmp2336->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2336 = $tmp2336->next;
}
$fn2338 $tmp2337 = $tmp2336->methods[0];
frost$core$Bit $tmp2339 = $tmp2337(((frost$core$Equatable*) $tmp2330), ((frost$core$Equatable*) $tmp2335));
bool $tmp2340 = $tmp2339.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2335)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2330)));
if ($tmp2340) goto block52; else goto block51;
block52:;
org$frostlang$frostc$Type* $tmp2341 = *(&local18);
frost$core$Weak** $tmp2342 = &param0->compiler;
frost$core$Weak* $tmp2343 = *$tmp2342;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:593:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2344 = &$tmp2343->_valid;
frost$core$Bit $tmp2345 = *$tmp2344;
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block56; else goto block57;
block57:;
frost$core$Int64 $tmp2347 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2348, $tmp2347);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2349 = &$tmp2343->value;
frost$core$Object* $tmp2350 = *$tmp2349;
frost$core$Frost$ref$frost$core$Object$Q($tmp2350);
org$frostlang$frostc$Type** $tmp2351 = &((org$frostlang$frostc$Compiler*) $tmp2350)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp2352 = *$tmp2351;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Scanner.frost:593:57
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:253
frost$core$String** $tmp2353 = &((org$frostlang$frostc$Symbol*) $tmp2341)->name;
frost$core$String* $tmp2354 = *$tmp2353;
frost$core$String** $tmp2355 = &((org$frostlang$frostc$Symbol*) $tmp2352)->name;
frost$core$String* $tmp2356 = *$tmp2355;
frost$core$Bit $tmp2357 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2354, $tmp2356);
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block59; else goto block60;
block59:;
org$frostlang$frostc$Type$Kind* $tmp2359 = &$tmp2341->typeKind;
org$frostlang$frostc$Type$Kind $tmp2360 = *$tmp2359;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2361;
$tmp2361 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2361->value = $tmp2360;
org$frostlang$frostc$Type$Kind* $tmp2362 = &$tmp2352->typeKind;
org$frostlang$frostc$Type$Kind $tmp2363 = *$tmp2362;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2364;
$tmp2364 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2364->value = $tmp2363;
ITable* $tmp2365 = ((frost$core$Equatable*) $tmp2361)->$class->itable;
while ($tmp2365->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2365 = $tmp2365->next;
}
$fn2367 $tmp2366 = $tmp2365->methods[0];
frost$core$Bit $tmp2368 = $tmp2366(((frost$core$Equatable*) $tmp2361), ((frost$core$Equatable*) $tmp2364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2364)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2361)));
*(&local21) = $tmp2368;
goto block61;
block60:;
*(&local21) = $tmp2357;
goto block61;
block61:;
frost$core$Bit $tmp2369 = *(&local21);
bool $tmp2370 = $tmp2369.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2350);
if ($tmp2370) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:594
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:594:18
frost$io$File** $tmp2371 = &param0->source;
frost$io$File* $tmp2372 = *$tmp2371;
frost$core$Bit $tmp2373 = (frost$core$Bit) {$tmp2372 != NULL};
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp2375 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2376, $tmp2375, &$s2377);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp2378 = &param0->compiler;
frost$core$Weak* $tmp2379 = *$tmp2378;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp2380 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2379);
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp2382 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2383, $tmp2382);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2384 = &$tmp2379->value;
frost$core$Object* $tmp2385 = *$tmp2384;
frost$core$Frost$ref$frost$core$Object$Q($tmp2385);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2385), param2, &$s2386);
frost$core$Frost$unref$frost$core$Object$Q($tmp2385);
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:596
frost$core$Bit $tmp2387 = (frost$core$Bit) {param10 != NULL};
bool $tmp2388 = $tmp2387.value;
if ($tmp2388) goto block70; else goto block69;
block70:;
org$frostlang$frostc$Annotations* $tmp2389 = *(&local3);
frost$core$Bit $tmp2390 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp2389, ((frost$collections$ListView*) param10));
bool $tmp2391 = $tmp2390.value;
if ($tmp2391) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:597
org$frostlang$frostc$Annotations* $tmp2392 = *(&local3);
frost$core$Int64* $tmp2393 = &$tmp2392->flags;
frost$core$Int64 $tmp2394 = *$tmp2393;
frost$core$Int64 $tmp2395 = (frost$core$Int64) {1024u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:597:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp2396 = $tmp2394.value;
int64_t $tmp2397 = $tmp2395.value;
int64_t $tmp2398 = $tmp2396 | $tmp2397;
frost$core$Int64 $tmp2399 = (frost$core$Int64) {$tmp2398};
frost$core$Int64* $tmp2400 = &$tmp2392->flags;
*$tmp2400 = $tmp2399;
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:599
frost$core$Bit $tmp2401 = (frost$core$Bit) {param10 == NULL};
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block75; else goto block73;
block75:;
org$frostlang$frostc$ClassDecl$Kind* $tmp2403 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2404 = *$tmp2403;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2405;
$tmp2405 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2405->value = $tmp2404;
frost$core$Int64 $tmp2406 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:599:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp2407 = &(&local23)->$rawValue;
*$tmp2407 = $tmp2406;
org$frostlang$frostc$ClassDecl$Kind $tmp2408 = *(&local23);
*(&local22) = $tmp2408;
org$frostlang$frostc$ClassDecl$Kind $tmp2409 = *(&local22);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2410;
$tmp2410 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2410->value = $tmp2409;
ITable* $tmp2411 = ((frost$core$Equatable*) $tmp2405)->$class->itable;
while ($tmp2411->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2411 = $tmp2411->next;
}
$fn2413 $tmp2412 = $tmp2411->methods[0];
frost$core$Bit $tmp2414 = $tmp2412(((frost$core$Equatable*) $tmp2405), ((frost$core$Equatable*) $tmp2410));
bool $tmp2415 = $tmp2414.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2410)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2405)));
if ($tmp2415) goto block74; else goto block73;
block74:;
org$frostlang$frostc$Annotations** $tmp2416 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2417 = *$tmp2416;
// begin inline call to function org.frostlang.frostc.Annotations.get_isStub():frost.core.Bit from Scanner.frost:600:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:171
frost$core$Int64* $tmp2418 = &$tmp2417->flags;
frost$core$Int64 $tmp2419 = *$tmp2418;
frost$core$Int64 $tmp2420 = (frost$core$Int64) {131072u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2421 = $tmp2419.value;
int64_t $tmp2422 = $tmp2420.value;
int64_t $tmp2423 = $tmp2421 & $tmp2422;
frost$core$Int64 $tmp2424 = (frost$core$Int64) {$tmp2423};
frost$core$Int64 $tmp2425 = (frost$core$Int64) {0u};
int64_t $tmp2426 = $tmp2424.value;
int64_t $tmp2427 = $tmp2425.value;
bool $tmp2428 = $tmp2426 != $tmp2427;
frost$core$Bit $tmp2429 = (frost$core$Bit) {$tmp2428};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:600:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp2430 = $tmp2429.value;
bool $tmp2431 = !$tmp2430;
frost$core$Bit $tmp2432 = (frost$core$Bit) {$tmp2431};
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:601
org$frostlang$frostc$Annotations* $tmp2434 = *(&local3);
frost$core$Int64* $tmp2435 = &$tmp2434->flags;
frost$core$Int64 $tmp2436 = *$tmp2435;
frost$core$Int64 $tmp2437 = (frost$core$Int64) {512u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:601:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp2438 = $tmp2436.value;
int64_t $tmp2439 = $tmp2437.value;
int64_t $tmp2440 = $tmp2438 & $tmp2439;
frost$core$Int64 $tmp2441 = (frost$core$Int64) {$tmp2440};
frost$core$Int64 $tmp2442 = (frost$core$Int64) {0u};
int64_t $tmp2443 = $tmp2441.value;
int64_t $tmp2444 = $tmp2442.value;
bool $tmp2445 = $tmp2443 != $tmp2444;
frost$core$Bit $tmp2446 = (frost$core$Bit) {$tmp2445};
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:602
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:602:22
frost$io$File** $tmp2448 = &param0->source;
frost$io$File* $tmp2449 = *$tmp2448;
frost$core$Bit $tmp2450 = (frost$core$Bit) {$tmp2449 != NULL};
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp2452 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2453, $tmp2452, &$s2454);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp2455 = &param0->compiler;
frost$core$Weak* $tmp2456 = *$tmp2455;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp2457 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2456);
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp2459 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2460, $tmp2459);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2461 = &$tmp2456->value;
frost$core$Object* $tmp2462 = *$tmp2461;
frost$core$Frost$ref$frost$core$Object$Q($tmp2462);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2462), param2, &$s2463);
frost$core$Frost$unref$frost$core$Object$Q($tmp2462);
goto block81;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:605
org$frostlang$frostc$Annotations* $tmp2464 = *(&local3);
frost$core$Int64* $tmp2465 = &$tmp2464->flags;
frost$core$Int64 $tmp2466 = *$tmp2465;
frost$core$Int64 $tmp2467 = (frost$core$Int64) {512u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:605:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp2468 = $tmp2466.value;
int64_t $tmp2469 = $tmp2467.value;
int64_t $tmp2470 = $tmp2468 | $tmp2469;
frost$core$Int64 $tmp2471 = (frost$core$Int64) {$tmp2470};
frost$core$Int64* $tmp2472 = &$tmp2464->flags;
*$tmp2472 = $tmp2471;
goto block73;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:607
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp2473 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp2474 = *(&local0);
org$frostlang$frostc$Annotations* $tmp2475 = *(&local3);
frost$collections$Array* $tmp2476 = *(&local6);
frost$collections$Array* $tmp2477 = *(&local14);
org$frostlang$frostc$Type* $tmp2478 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2473, param1, param2, $tmp2474, $tmp2475, param5, param6, $tmp2476, $tmp2477, $tmp2478, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
org$frostlang$frostc$Type* $tmp2479 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2479));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2480 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2481 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2482 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2483 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2473;

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
frost$core$Int64* $tmp2484 = &param2->$rawValue;
frost$core$Int64 $tmp2485 = *$tmp2484;
frost$core$Int64 $tmp2486 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:613:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2487 = $tmp2485.value;
int64_t $tmp2488 = $tmp2486.value;
bool $tmp2489 = $tmp2487 == $tmp2488;
frost$core$Bit $tmp2490 = (frost$core$Bit) {$tmp2489};
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp2492 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2493 = *$tmp2492;
*(&local0) = $tmp2493;
org$frostlang$frostc$ASTNode** $tmp2494 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2495 = *$tmp2494;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
org$frostlang$frostc$ASTNode* $tmp2496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local1) = $tmp2495;
org$frostlang$frostc$FixedArray** $tmp2497 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2498 = *$tmp2497;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
org$frostlang$frostc$FixedArray* $tmp2499 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local2) = $tmp2498;
org$frostlang$frostc$ASTNode** $tmp2500 = (org$frostlang$frostc$ASTNode**) (param2->$data + 40);
org$frostlang$frostc$ASTNode* $tmp2501 = *$tmp2500;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
org$frostlang$frostc$ASTNode* $tmp2502 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
*(&local3) = $tmp2501;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:614
org$frostlang$frostc$Position $tmp2503 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp2505 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp2506 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp2503, $tmp2504, $tmp2505, $tmp2506);
org$frostlang$frostc$ASTNode* $tmp2507 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2508 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2509 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp2510 = (frost$core$Int64) {29u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:616:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2511 = $tmp2485.value;
int64_t $tmp2512 = $tmp2510.value;
bool $tmp2513 = $tmp2511 == $tmp2512;
frost$core$Bit $tmp2514 = (frost$core$Bit) {$tmp2513};
bool $tmp2515 = $tmp2514.value;
if ($tmp2515) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2516 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2517 = *$tmp2516;
*(&local4) = $tmp2517;
org$frostlang$frostc$ASTNode** $tmp2518 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2519 = *$tmp2518;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
org$frostlang$frostc$ASTNode* $tmp2520 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local5) = $tmp2519;
org$frostlang$frostc$FixedArray** $tmp2521 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2522 = *$tmp2521;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
org$frostlang$frostc$FixedArray* $tmp2523 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local6) = $tmp2522;
org$frostlang$frostc$MethodDecl$Kind* $tmp2524 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp2525 = *$tmp2524;
*(&local7) = $tmp2525;
frost$core$String** $tmp2526 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2527 = *$tmp2526;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
frost$core$String* $tmp2528 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local8) = $tmp2527;
org$frostlang$frostc$FixedArray** $tmp2529 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2530 = *$tmp2529;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
org$frostlang$frostc$FixedArray* $tmp2531 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local9) = $tmp2530;
org$frostlang$frostc$FixedArray** $tmp2532 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2533 = *$tmp2532;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
org$frostlang$frostc$FixedArray* $tmp2534 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
*(&local10) = $tmp2533;
org$frostlang$frostc$ASTNode** $tmp2535 = (org$frostlang$frostc$ASTNode**) (param2->$data + 72);
org$frostlang$frostc$ASTNode* $tmp2536 = *$tmp2535;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
org$frostlang$frostc$ASTNode* $tmp2537 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local11) = $tmp2536;
org$frostlang$frostc$FixedArray** $tmp2538 = (org$frostlang$frostc$FixedArray**) (param2->$data + 80);
org$frostlang$frostc$FixedArray* $tmp2539 = *$tmp2538;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
org$frostlang$frostc$FixedArray* $tmp2540 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
*(&local12) = $tmp2539;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:618
org$frostlang$frostc$Position $tmp2541 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp2542 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp2543 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp2544 = *(&local7);
frost$core$String* $tmp2545 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2546 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp2547 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp2548 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2549 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp2550 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp2541, $tmp2542, $tmp2543, $tmp2544, $tmp2545, $tmp2546, $tmp2547, $tmp2548, $tmp2549);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
org$frostlang$frostc$MethodDecl* $tmp2551 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local13) = $tmp2550;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:620
org$frostlang$frostc$MethodDecl* $tmp2552 = *(&local13);
frost$core$Bit $tmp2553 = (frost$core$Bit) {$tmp2552 != NULL};
bool $tmp2554 = $tmp2553.value;
if ($tmp2554) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:621
org$frostlang$frostc$SymbolTable** $tmp2555 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2556 = *$tmp2555;
org$frostlang$frostc$MethodDecl* $tmp2557 = *(&local13);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:621:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2558 = &((org$frostlang$frostc$Symbol*) $tmp2557)->name;
frost$core$String* $tmp2559 = *$tmp2558;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2556, ((org$frostlang$frostc$Symbol*) $tmp2557), $tmp2559);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:622
frost$collections$Array** $tmp2560 = &param1->methods;
frost$collections$Array* $tmp2561 = *$tmp2560;
org$frostlang$frostc$MethodDecl* $tmp2562 = *(&local13);
frost$collections$Array$add$frost$collections$Array$T($tmp2561, ((frost$core$Object*) $tmp2562));
goto block9;
block9:;
org$frostlang$frostc$MethodDecl* $tmp2563 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2564 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2565 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp2566 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2567 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2568 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2569 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2570 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2570));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block6:;
frost$core$Int64 $tmp2571 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:625:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2572 = $tmp2485.value;
int64_t $tmp2573 = $tmp2571.value;
bool $tmp2574 = $tmp2572 == $tmp2573;
frost$core$Bit $tmp2575 = (frost$core$Bit) {$tmp2574};
bool $tmp2576 = $tmp2575.value;
if ($tmp2576) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp2577 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2578 = *$tmp2577;
*(&local14) = $tmp2578;
org$frostlang$frostc$ASTNode** $tmp2579 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2580 = *$tmp2579;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
org$frostlang$frostc$ASTNode* $tmp2581 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local15) = $tmp2580;
org$frostlang$frostc$FixedArray** $tmp2582 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2583 = *$tmp2582;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
org$frostlang$frostc$FixedArray* $tmp2584 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
*(&local16) = $tmp2583;
org$frostlang$frostc$ClassDecl$Kind* $tmp2585 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp2586 = *$tmp2585;
*(&local17) = $tmp2586;
frost$core$String** $tmp2587 = (frost$core$String**) (param2->$data + 48);
frost$core$String* $tmp2588 = *$tmp2587;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
frost$core$String* $tmp2589 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local18) = $tmp2588;
org$frostlang$frostc$FixedArray** $tmp2590 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2591 = *$tmp2590;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
org$frostlang$frostc$FixedArray* $tmp2592 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
*(&local19) = $tmp2591;
org$frostlang$frostc$FixedArray** $tmp2593 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2594 = *$tmp2593;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
org$frostlang$frostc$FixedArray* $tmp2595 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local20) = $tmp2594;
org$frostlang$frostc$FixedArray** $tmp2596 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2597 = *$tmp2596;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
org$frostlang$frostc$FixedArray* $tmp2598 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local21) = $tmp2597;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:627
frost$io$File** $tmp2599 = &param1->source;
frost$io$File* $tmp2600 = *$tmp2599;
frost$collections$MapView** $tmp2601 = &param1->aliases;
frost$collections$MapView* $tmp2602 = *$tmp2601;
frost$core$String** $tmp2603 = &param1->name;
frost$core$String* $tmp2604 = *$tmp2603;
org$frostlang$frostc$Position $tmp2605 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2606 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2607 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2608 = *(&local17);
frost$core$String* $tmp2609 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2610 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2611 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2612 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2613 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2600, $tmp2602, $tmp2604, $tmp2605, $tmp2606, $tmp2607, $tmp2608, $tmp2609, $tmp2610, $tmp2611, $tmp2612);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
org$frostlang$frostc$ClassDecl* $tmp2614 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
*(&local22) = $tmp2613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:629
org$frostlang$frostc$ClassDecl* $tmp2615 = *(&local22);
frost$core$Bit $tmp2616 = (frost$core$Bit) {$tmp2615 != NULL};
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:630
org$frostlang$frostc$ClassDecl* $tmp2618 = *(&local22);
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2619 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2619, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
frost$core$Weak** $tmp2620 = &$tmp2618->owner;
frost$core$Weak* $tmp2621 = *$tmp2620;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
frost$core$Weak** $tmp2622 = &$tmp2618->owner;
*$tmp2622 = $tmp2619;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:631
frost$collections$Array** $tmp2623 = &param1->classes;
frost$collections$Array* $tmp2624 = *$tmp2623;
org$frostlang$frostc$ClassDecl* $tmp2625 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp2624, ((frost$core$Object*) $tmp2625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:632
org$frostlang$frostc$ClassDecl* $tmp2626 = *(&local22);
frost$core$String** $tmp2627 = &$tmp2626->name;
frost$core$String* $tmp2628 = *$tmp2627;
frost$core$String** $tmp2629 = &param1->name;
frost$core$String* $tmp2630 = *$tmp2629;
frost$core$String* $tmp2631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2630, &$s2632);
frost$core$Bit $tmp2633 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2628, $tmp2631);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2635 = (frost$core$Int64) {632u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2636, $tmp2635);
abort(); // unreachable
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2631));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:633
org$frostlang$frostc$SymbolTable** $tmp2637 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2638 = *$tmp2637;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2639 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2640 = *(&local22);
frost$core$String** $tmp2641 = &$tmp2640->name;
frost$core$String* $tmp2642 = *$tmp2641;
frost$core$String** $tmp2643 = &param1->name;
frost$core$String* $tmp2644 = *$tmp2643;
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from Scanner.frost:633:64
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:138
ITable* $tmp2645 = ((frost$collections$Iterable*) $tmp2644)->$class->itable;
while ($tmp2645->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2645 = $tmp2645->next;
}
$fn2647 $tmp2646 = $tmp2645->methods[0];
frost$collections$Iterator* $tmp2648 = $tmp2646(((frost$collections$Iterable*) $tmp2644));
ITable* $tmp2649 = $tmp2648->$class->itable;
while ($tmp2649->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2649 = $tmp2649->next;
}
$fn2651 $tmp2650 = $tmp2649->methods[2];
frost$core$Int64 $tmp2652 = $tmp2650($tmp2648);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
frost$core$Int64 $tmp2653 = (frost$core$Int64) {1u};
int64_t $tmp2654 = $tmp2652.value;
int64_t $tmp2655 = $tmp2653.value;
int64_t $tmp2656 = $tmp2654 + $tmp2655;
frost$core$Int64 $tmp2657 = (frost$core$Int64) {$tmp2656};
frost$core$Bit $tmp2658 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2659 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2657, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2658);
frost$core$String* $tmp2660 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2642, $tmp2659);
org$frostlang$frostc$ClassDecl* $tmp2661 = *(&local22);
org$frostlang$frostc$Type** $tmp2662 = &$tmp2661->type;
org$frostlang$frostc$Type* $tmp2663 = *$tmp2662;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2639, $tmp2660, $tmp2663);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:633:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2664 = &((org$frostlang$frostc$Symbol*) $tmp2639)->name;
frost$core$String* $tmp2665 = *$tmp2664;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2638, ((org$frostlang$frostc$Symbol*) $tmp2639), $tmp2665);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:634
org$frostlang$frostc$ClassDecl* $tmp2666 = *(&local22);
org$frostlang$frostc$SymbolTable** $tmp2667 = &$tmp2666->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2668 = *$tmp2667;
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Alias));
org$frostlang$frostc$Alias* $tmp2669 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
// begin inline call to function org.frostlang.frostc.ClassDecl.simpleName():frost.core.String from Scanner.frost:634:62
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:146
frost$core$String** $tmp2670 = &param1->name;
frost$core$String* $tmp2671 = *$tmp2670;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from ClassDecl.frost:146:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp2672 = frost$core$String$get_end$R$frost$core$String$Index($tmp2671);
frost$core$String$Index$nullable $tmp2673 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp2671, &$s2674, $tmp2672);
*(&local24) = $tmp2673;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:147
frost$core$String$Index$nullable $tmp2675 = *(&local24);
frost$core$Bit $tmp2676 = (frost$core$Bit) {!$tmp2675.nonnull};
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:148
frost$core$String** $tmp2678 = &param1->name;
frost$core$String* $tmp2679 = *$tmp2678;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local23) = $tmp2679;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
goto block20;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:150
frost$core$String** $tmp2680 = &param1->name;
frost$core$String* $tmp2681 = *$tmp2680;
frost$core$String** $tmp2682 = &param1->name;
frost$core$String* $tmp2683 = *$tmp2682;
frost$core$String$Index$nullable $tmp2684 = *(&local24);
frost$core$String$Index $tmp2685 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2683, ((frost$core$String$Index) $tmp2684.value));
frost$core$Bit $tmp2686 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2687 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2685, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2686);
frost$core$String* $tmp2688 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2681, $tmp2687);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local23) = $tmp2688;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
goto block20;
block20:;
frost$core$String* $tmp2689 = *(&local23);
org$frostlang$frostc$Type** $tmp2690 = &param1->type;
org$frostlang$frostc$Type* $tmp2691 = *$tmp2690;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2669, $tmp2689, $tmp2691);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:634:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2692 = &((org$frostlang$frostc$Symbol*) $tmp2669)->name;
frost$core$String* $tmp2693 = *$tmp2692;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2668, ((org$frostlang$frostc$Symbol*) $tmp2669), $tmp2693);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2689));
frost$core$String* $tmp2694 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2669));
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2695 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2695));
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2696 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2697 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2698 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2699 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2700 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2701 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp2702 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:637:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2703 = $tmp2485.value;
int64_t $tmp2704 = $tmp2702.value;
bool $tmp2705 = $tmp2703 == $tmp2704;
frost$core$Bit $tmp2706 = (frost$core$Bit) {$tmp2705};
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2708 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2709 = *$tmp2708;
*(&local25) = $tmp2709;
org$frostlang$frostc$ASTNode** $tmp2710 = (org$frostlang$frostc$ASTNode**) (param2->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2711 = *$tmp2710;
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
org$frostlang$frostc$ASTNode* $tmp2712 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
*(&local26) = $tmp2711;
frost$core$String** $tmp2713 = (frost$core$String**) (param2->$data + 32);
frost$core$String* $tmp2714 = *$tmp2713;
*(&local27) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
frost$core$String* $tmp2715 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
*(&local27) = $tmp2714;
org$frostlang$frostc$FixedArray** $tmp2716 = (org$frostlang$frostc$FixedArray**) (param2->$data + 40);
org$frostlang$frostc$FixedArray* $tmp2717 = *$tmp2716;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2717));
org$frostlang$frostc$FixedArray* $tmp2718 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
*(&local28) = $tmp2717;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:638
org$frostlang$frostc$Position $tmp2719 = *(&local25);
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local26);
frost$core$String* $tmp2721 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp2722 = *(&local28);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2719, $tmp2720, $tmp2721, $tmp2722);
org$frostlang$frostc$FixedArray* $tmp2723 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2724 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2725 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
*(&local26) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:641
frost$core$Int64 $tmp2726 = (frost$core$Int64) {641u};
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:641:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn2728 $tmp2727 = ($fn2728) ((frost$core$Object*) param2)->$class->vtable[0];
frost$core$String* $tmp2729 = $tmp2727(((frost$core$Object*) param2));
frost$core$String* $tmp2730 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2731, $tmp2729);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
frost$core$String* $tmp2732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2730, &$s2733);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2734, $tmp2726, $tmp2732);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
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
frost$core$Bit $tmp2735 = (frost$core$Bit) {param3 == NULL};
bool $tmp2736 = $tmp2735.value;
if ($tmp2736) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:651
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2737 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2737));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:654
frost$core$Int64* $tmp2738 = &param3->$rawValue;
frost$core$Int64 $tmp2739 = *$tmp2738;
frost$core$Int64 $tmp2740 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:655:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2741 = $tmp2739.value;
int64_t $tmp2742 = $tmp2740.value;
bool $tmp2743 = $tmp2741 == $tmp2742;
frost$core$Bit $tmp2744 = (frost$core$Bit) {$tmp2743};
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp2746 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2747 = *$tmp2746;
*(&local1) = $tmp2747;
frost$core$String** $tmp2748 = (frost$core$String**) (param3->$data + 24);
frost$core$String* $tmp2749 = *$tmp2748;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
frost$core$String* $tmp2750 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local2) = $tmp2749;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:656
frost$core$String* $tmp2751 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
frost$core$String* $tmp2752 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
*(&local0) = $tmp2751;
frost$core$String* $tmp2753 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:659
frost$core$Int64 $tmp2754 = (frost$core$Int64) {659u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2755, $tmp2754);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:663
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2756 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2756);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
frost$collections$Array* $tmp2757 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local3) = $tmp2756;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:664
ITable* $tmp2758 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2758->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2758 = $tmp2758->next;
}
$fn2760 $tmp2759 = $tmp2758->methods[0];
frost$collections$Iterator* $tmp2761 = $tmp2759(((frost$collections$Iterable*) param5));
goto block8;
block8:;
ITable* $tmp2762 = $tmp2761->$class->itable;
while ($tmp2762->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2762 = $tmp2762->next;
}
$fn2764 $tmp2763 = $tmp2762->methods[0];
frost$core$Bit $tmp2765 = $tmp2763($tmp2761);
bool $tmp2766 = $tmp2765.value;
if ($tmp2766) goto block10; else goto block9;
block9:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2767 = $tmp2761->$class->itable;
while ($tmp2767->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2767 = $tmp2767->next;
}
$fn2769 $tmp2768 = $tmp2767->methods[1];
frost$core$Object* $tmp2770 = $tmp2768($tmp2761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2770)));
org$frostlang$frostc$ASTNode* $tmp2771 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2770);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:665
frost$collections$Array* $tmp2772 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2773 = *(&local4);
org$frostlang$frostc$Type* $tmp2774 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2773);
frost$collections$Array$add$frost$collections$Array$T($tmp2772, ((frost$core$Object*) $tmp2774));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
frost$core$Frost$unref$frost$core$Object$Q($tmp2770);
org$frostlang$frostc$ASTNode* $tmp2775 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:667
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ChoiceCase));
org$frostlang$frostc$ChoiceCase* $tmp2776 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2777 = *(&local0);
frost$collections$Array** $tmp2778 = &param1->choiceCases;
frost$collections$Array* $tmp2779 = *$tmp2778;
ITable* $tmp2780 = ((frost$collections$CollectionView*) $tmp2779)->$class->itable;
while ($tmp2780->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2780 = $tmp2780->next;
}
$fn2782 $tmp2781 = $tmp2780->methods[0];
frost$core$Int64 $tmp2783 = $tmp2781(((frost$collections$CollectionView*) $tmp2779));
frost$collections$Array* $tmp2784 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2776, param1, param2, param4, $tmp2777, $tmp2783, ((frost$collections$ListView*) $tmp2784));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
org$frostlang$frostc$ChoiceCase* $tmp2785 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
*(&local5) = $tmp2776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:669
frost$collections$Array** $tmp2786 = &param1->choiceCases;
frost$collections$Array* $tmp2787 = *$tmp2786;
org$frostlang$frostc$ChoiceCase* $tmp2788 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2787, ((frost$core$Object*) $tmp2788));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:670
org$frostlang$frostc$SymbolTable** $tmp2789 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2790 = *$tmp2789;
org$frostlang$frostc$ChoiceCase* $tmp2791 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:670:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp2792 = &((org$frostlang$frostc$Symbol*) $tmp2791)->name;
frost$core$String* $tmp2793 = *$tmp2792;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp2790, ((org$frostlang$frostc$Symbol*) $tmp2791), $tmp2793);
org$frostlang$frostc$ChoiceCase* $tmp2794 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2795 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2796 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
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
ITable* $tmp2798 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2798->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2798 = $tmp2798->next;
}
$fn2800 $tmp2799 = $tmp2798->methods[1];
frost$core$Bit $tmp2801 = $tmp2799(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2797));
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:679
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:679:28
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp2803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s2804);
frost$core$String* $tmp2805 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2803, param8);
frost$core$String* $tmp2806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2805, &$s2807);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
frost$core$String* $tmp2808 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
*(&local0) = $tmp2806;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:682
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2809 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local0) = param8;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:684
*(&local1) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:686
frost$core$Bit $tmp2810 = (frost$core$Bit) {param5 == NULL};
bool $tmp2811 = $tmp2810.value;
if ($tmp2811) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:687
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2812 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:690
frost$core$Int64* $tmp2813 = &param5->$rawValue;
frost$core$Int64 $tmp2814 = *$tmp2813;
frost$core$Int64 $tmp2815 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:691:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2816 = $tmp2814.value;
int64_t $tmp2817 = $tmp2815.value;
bool $tmp2818 = $tmp2816 == $tmp2817;
frost$core$Bit $tmp2819 = (frost$core$Bit) {$tmp2818};
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block9; else goto block10;
block9:;
org$frostlang$frostc$Position* $tmp2821 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2822 = *$tmp2821;
*(&local2) = $tmp2822;
frost$core$String** $tmp2823 = (frost$core$String**) (param5->$data + 24);
frost$core$String* $tmp2824 = *$tmp2823;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
frost$core$String* $tmp2825 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local3) = $tmp2824;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:692
frost$core$String* $tmp2826 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
frost$core$String* $tmp2827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local1) = $tmp2826;
frost$core$String* $tmp2828 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:695
frost$core$Int64 $tmp2829 = (frost$core$Int64) {695u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2830, $tmp2829);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:699
org$frostlang$frostc$Annotations* $tmp2831 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
org$frostlang$frostc$Annotations* $tmp2832 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local4) = $tmp2831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:700
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2833 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2833);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$collections$Array* $tmp2834 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local5) = $tmp2833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:701
frost$core$Bit $tmp2835 = (frost$core$Bit) {param9 != NULL};
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:702
ITable* $tmp2837 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2837->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2837 = $tmp2837->next;
}
$fn2839 $tmp2838 = $tmp2837->methods[0];
frost$collections$Iterator* $tmp2840 = $tmp2838(((frost$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2841 = $tmp2840->$class->itable;
while ($tmp2841->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2841 = $tmp2841->next;
}
$fn2843 $tmp2842 = $tmp2841->methods[0];
frost$core$Bit $tmp2844 = $tmp2842($tmp2840);
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block16; else goto block15;
block15:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2846 = $tmp2840->$class->itable;
while ($tmp2846->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2846 = $tmp2846->next;
}
$fn2848 $tmp2847 = $tmp2846->methods[1];
frost$core$Object* $tmp2849 = $tmp2847($tmp2840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2849)));
org$frostlang$frostc$ASTNode* $tmp2850 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2849);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:703
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:704
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:705
org$frostlang$frostc$ASTNode* $tmp2851 = *(&local6);
frost$core$Int64* $tmp2852 = &$tmp2851->$rawValue;
frost$core$Int64 $tmp2853 = *$tmp2852;
frost$core$Int64 $tmp2854 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:706:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2855 = $tmp2853.value;
int64_t $tmp2856 = $tmp2854.value;
bool $tmp2857 = $tmp2855 == $tmp2856;
frost$core$Bit $tmp2858 = (frost$core$Bit) {$tmp2857};
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp2860 = (org$frostlang$frostc$Position*) ($tmp2851->$data + 0);
org$frostlang$frostc$Position $tmp2861 = *$tmp2860;
frost$core$String** $tmp2862 = (frost$core$String**) ($tmp2851->$data + 24);
frost$core$String* $tmp2863 = *$tmp2862;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
frost$core$String* $tmp2864 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local9) = $tmp2863;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:707
frost$core$String* $tmp2865 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
frost$core$String* $tmp2866 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
*(&local7) = $tmp2865;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:708
frost$core$Weak** $tmp2867 = &param0->compiler;
frost$core$Weak* $tmp2868 = *$tmp2867;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:708:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2869 = &$tmp2868->_valid;
frost$core$Bit $tmp2870 = *$tmp2869;
bool $tmp2871 = $tmp2870.value;
if ($tmp2871) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp2872 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2873, $tmp2872);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2874 = &$tmp2868->value;
frost$core$Object* $tmp2875 = *$tmp2874;
frost$core$Frost$ref$frost$core$Object$Q($tmp2875);
org$frostlang$frostc$Type** $tmp2876 = &((org$frostlang$frostc$Compiler*) $tmp2875)->ANY_TYPE;
org$frostlang$frostc$Type* $tmp2877 = *$tmp2876;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2877));
org$frostlang$frostc$Type* $tmp2878 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2878));
*(&local8) = $tmp2877;
frost$core$Frost$unref$frost$core$Object$Q($tmp2875);
frost$core$String* $tmp2879 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
*(&local9) = ((frost$core$String*) NULL);
goto block17;
block19:;
frost$core$Int64 $tmp2880 = (frost$core$Int64) {48u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:710:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp2881 = $tmp2853.value;
int64_t $tmp2882 = $tmp2880.value;
bool $tmp2883 = $tmp2881 == $tmp2882;
frost$core$Bit $tmp2884 = (frost$core$Bit) {$tmp2883};
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block25; else goto block26;
block25:;
org$frostlang$frostc$Position* $tmp2886 = (org$frostlang$frostc$Position*) ($tmp2851->$data + 0);
org$frostlang$frostc$Position $tmp2887 = *$tmp2886;
frost$core$String** $tmp2888 = (frost$core$String**) ($tmp2851->$data + 24);
frost$core$String* $tmp2889 = *$tmp2888;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
frost$core$String* $tmp2890 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
*(&local10) = $tmp2889;
org$frostlang$frostc$ASTNode** $tmp2891 = (org$frostlang$frostc$ASTNode**) ($tmp2851->$data + 32);
org$frostlang$frostc$ASTNode* $tmp2892 = *$tmp2891;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
org$frostlang$frostc$ASTNode* $tmp2893 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local11) = $tmp2892;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:711
frost$core$String* $tmp2894 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
frost$core$String* $tmp2895 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
*(&local7) = $tmp2894;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:712
org$frostlang$frostc$ASTNode* $tmp2896 = *(&local11);
org$frostlang$frostc$Type* $tmp2897 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2896);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
org$frostlang$frostc$Type* $tmp2898 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local8) = $tmp2897;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
org$frostlang$frostc$ASTNode* $tmp2899 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2900 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local10) = ((frost$core$String*) NULL);
goto block17;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:715
frost$core$Int64 $tmp2901 = (frost$core$Int64) {715u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2902, $tmp2901);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:718
frost$collections$Array* $tmp2903 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$ClassDecl$GenericParameter));
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2904 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2905 = *(&local6);
$fn2907 $tmp2906 = ($fn2907) $tmp2905->$class->vtable[2];
org$frostlang$frostc$Position $tmp2908 = $tmp2906($tmp2905);
frost$core$String* $tmp2909 = *(&local0);
frost$core$String* $tmp2910 = *(&local7);
org$frostlang$frostc$Type* $tmp2911 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2904, $tmp2908, $tmp2909, $tmp2910, $tmp2911);
frost$collections$Array$add$frost$collections$Array$T($tmp2903, ((frost$core$Object*) $tmp2904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2904));
org$frostlang$frostc$Type* $tmp2912 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2913 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2849);
org$frostlang$frostc$ASTNode* $tmp2914 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:721
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2915 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2915);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
frost$collections$Array* $tmp2916 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2916));
*(&local12) = $tmp2915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:722
frost$core$Bit $tmp2917 = (frost$core$Bit) {param10 != NULL};
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:723
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2919;
$tmp2919 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2919->value = param7;
frost$core$Int64 $tmp2920 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:723:37
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp2921 = &(&local14)->$rawValue;
*$tmp2921 = $tmp2920;
org$frostlang$frostc$ClassDecl$Kind $tmp2922 = *(&local14);
*(&local13) = $tmp2922;
org$frostlang$frostc$ClassDecl$Kind $tmp2923 = *(&local13);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2924;
$tmp2924 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2924->value = $tmp2923;
ITable* $tmp2925 = ((frost$core$Equatable*) $tmp2919)->$class->itable;
while ($tmp2925->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2925 = $tmp2925->next;
}
$fn2927 $tmp2926 = $tmp2925->methods[0];
frost$core$Bit $tmp2928 = $tmp2926(((frost$core$Equatable*) $tmp2919), ((frost$core$Equatable*) $tmp2924));
bool $tmp2929 = $tmp2928.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2924)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2919)));
if ($tmp2929) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:724
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:724:22
frost$io$File** $tmp2930 = &param0->source;
frost$io$File* $tmp2931 = *$tmp2930;
frost$core$Bit $tmp2932 = (frost$core$Bit) {$tmp2931 != NULL};
bool $tmp2933 = $tmp2932.value;
if ($tmp2933) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2934 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2935, $tmp2934, &$s2936);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp2937 = &param0->compiler;
frost$core$Weak* $tmp2938 = *$tmp2937;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp2939 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp2938);
bool $tmp2940 = $tmp2939.value;
if ($tmp2940) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp2941 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2942, $tmp2941);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2943 = &$tmp2938->value;
frost$core$Object* $tmp2944 = *$tmp2943;
frost$core$Frost$ref$frost$core$Object$Q($tmp2944);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2944), param4, &$s2945);
frost$core$Frost$unref$frost$core$Object$Q($tmp2944);
goto block31;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:726
ITable* $tmp2946 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2946->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2946 = $tmp2946->next;
}
$fn2948 $tmp2947 = $tmp2946->methods[0];
frost$collections$Iterator* $tmp2949 = $tmp2947(((frost$collections$Iterable*) param10));
goto block39;
block39:;
ITable* $tmp2950 = $tmp2949->$class->itable;
while ($tmp2950->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2950 = $tmp2950->next;
}
$fn2952 $tmp2951 = $tmp2950->methods[0];
frost$core$Bit $tmp2953 = $tmp2951($tmp2949);
bool $tmp2954 = $tmp2953.value;
if ($tmp2954) goto block41; else goto block40;
block40:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2955 = $tmp2949->$class->itable;
while ($tmp2955->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2955 = $tmp2955->next;
}
$fn2957 $tmp2956 = $tmp2955->methods[1];
frost$core$Object* $tmp2958 = $tmp2956($tmp2949);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2958)));
org$frostlang$frostc$ASTNode* $tmp2959 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2958);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:727
frost$collections$Array* $tmp2960 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2961 = *(&local15);
org$frostlang$frostc$Type* $tmp2962 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2961);
frost$collections$Array$add$frost$collections$Array$T($tmp2960, ((frost$core$Object*) $tmp2962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
frost$core$Frost$unref$frost$core$Object$Q($tmp2958);
org$frostlang$frostc$ASTNode* $tmp2963 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:730
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp2964 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2965 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2966 = *(&local4);
frost$core$String* $tmp2967 = *(&local0);
frost$collections$Array* $tmp2968 = *(&local12);
frost$collections$Array* $tmp2969 = *(&local5);
frost$core$Weak** $tmp2970 = &param0->compiler;
frost$core$Weak* $tmp2971 = *$tmp2970;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:731:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2972 = &$tmp2971->_valid;
frost$core$Bit $tmp2973 = *$tmp2972;
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp2975 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2976, $tmp2975);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2977 = &$tmp2971->value;
frost$core$Object* $tmp2978 = *$tmp2977;
frost$core$Frost$ref$frost$core$Object$Q($tmp2978);
org$frostlang$frostc$SymbolTable** $tmp2979 = &((org$frostlang$frostc$Compiler*) $tmp2978)->root;
org$frostlang$frostc$SymbolTable* $tmp2980 = *$tmp2979;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2964, param1, param4, param2, $tmp2965, $tmp2966, param7, $tmp2967, ((frost$collections$ListView*) $tmp2968), $tmp2969, $tmp2980);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
org$frostlang$frostc$ClassDecl* $tmp2981 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
*(&local16) = $tmp2964;
frost$core$Frost$unref$frost$core$Object$Q($tmp2978);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:732
frost$core$Weak** $tmp2982 = &param0->compiler;
frost$core$Weak* $tmp2983 = *$tmp2982;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:732:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp2984 = &$tmp2983->_valid;
frost$core$Bit $tmp2985 = *$tmp2984;
bool $tmp2986 = $tmp2985.value;
if ($tmp2986) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp2987 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2988, $tmp2987);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp2989 = &$tmp2983->value;
frost$core$Object* $tmp2990 = *$tmp2989;
frost$core$Frost$ref$frost$core$Object$Q($tmp2990);
frost$collections$Stack** $tmp2991 = &((org$frostlang$frostc$Compiler*) $tmp2990)->currentClass;
frost$collections$Stack* $tmp2992 = *$tmp2991;
org$frostlang$frostc$ClassDecl* $tmp2993 = *(&local16);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:732:35
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp2994 = &$tmp2992->contents;
frost$collections$Array* $tmp2995 = *$tmp2994;
frost$collections$Array$add$frost$collections$Array$T($tmp2995, ((frost$core$Object*) $tmp2993));
frost$core$Frost$unref$frost$core$Object$Q($tmp2990);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:733
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2996;
$tmp2996 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2996->value = param7;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:733:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp2998 = &(&local18)->$rawValue;
*$tmp2998 = $tmp2997;
org$frostlang$frostc$ClassDecl$Kind $tmp2999 = *(&local18);
*(&local17) = $tmp2999;
org$frostlang$frostc$ClassDecl$Kind $tmp3000 = *(&local17);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3001;
$tmp3001 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3001->value = $tmp3000;
ITable* $tmp3002 = ((frost$core$Equatable*) $tmp2996)->$class->itable;
while ($tmp3002->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3002 = $tmp3002->next;
}
$fn3004 $tmp3003 = $tmp3002->methods[0];
frost$core$Bit $tmp3005 = $tmp3003(((frost$core$Equatable*) $tmp2996), ((frost$core$Equatable*) $tmp3001));
bool $tmp3006 = $tmp3005.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3001)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2996)));
if ($tmp3006) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:734
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3007 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3008 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3009 = *(&local16);
org$frostlang$frostc$Position* $tmp3010 = &$tmp3009->position;
org$frostlang$frostc$Position $tmp3011 = *$tmp3010;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3012 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3013 = (frost$core$Int64) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3012, $tmp3013);
frost$core$Int64 $tmp3014 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:735:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp3015 = &(&local20)->$rawValue;
*$tmp3015 = $tmp3014;
org$frostlang$frostc$FieldDecl$Kind $tmp3016 = *(&local20);
*(&local19) = $tmp3016;
org$frostlang$frostc$FieldDecl$Kind $tmp3017 = *(&local19);
frost$core$Weak** $tmp3018 = &param0->compiler;
frost$core$Weak* $tmp3019 = *$tmp3018;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:736:47
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3020 = &$tmp3019->_valid;
frost$core$Bit $tmp3021 = *$tmp3020;
bool $tmp3022 = $tmp3021.value;
if ($tmp3022) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp3023 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3024, $tmp3023);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3025 = &$tmp3019->value;
frost$core$Object* $tmp3026 = *$tmp3025;
frost$core$Frost$ref$frost$core$Object$Q($tmp3026);
org$frostlang$frostc$Type** $tmp3027 = &((org$frostlang$frostc$Compiler*) $tmp3026)->INT64_TYPE;
org$frostlang$frostc$Type* $tmp3028 = *$tmp3027;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3007, $tmp3008, $tmp3011, ((frost$core$String*) NULL), $tmp3012, $tmp3017, &$s3029, $tmp3028, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
org$frostlang$frostc$FieldDecl* $tmp3030 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
*(&local21) = $tmp3007;
frost$core$Frost$unref$frost$core$Object$Q($tmp3026);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:737
org$frostlang$frostc$ClassDecl* $tmp3031 = *(&local16);
frost$collections$Array** $tmp3032 = &$tmp3031->fields;
frost$collections$Array* $tmp3033 = *$tmp3032;
org$frostlang$frostc$FieldDecl* $tmp3034 = *(&local21);
frost$collections$Array$add$frost$collections$Array$T($tmp3033, ((frost$core$Object*) $tmp3034));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:738
org$frostlang$frostc$ClassDecl* $tmp3035 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3036 = &$tmp3035->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3037 = *$tmp3036;
org$frostlang$frostc$FieldDecl* $tmp3038 = *(&local21);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:738:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3039 = &((org$frostlang$frostc$Symbol*) $tmp3038)->name;
frost$core$String* $tmp3040 = *$tmp3039;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3037, ((org$frostlang$frostc$Symbol*) $tmp3038), $tmp3040);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:739
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$FieldDecl));
org$frostlang$frostc$FieldDecl* $tmp3041 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3042 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3043 = *(&local16);
org$frostlang$frostc$Position* $tmp3044 = &$tmp3043->position;
org$frostlang$frostc$Position $tmp3045 = *$tmp3044;
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3046 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3047 = (frost$core$Int64) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3046, $tmp3047);
frost$core$Int64 $tmp3048 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:740:76
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp3049 = &(&local23)->$rawValue;
*$tmp3049 = $tmp3048;
org$frostlang$frostc$FieldDecl$Kind $tmp3050 = *(&local23);
*(&local22) = $tmp3050;
org$frostlang$frostc$FieldDecl$Kind $tmp3051 = *(&local22);
frost$core$Weak** $tmp3052 = &param0->compiler;
frost$core$Weak* $tmp3053 = *$tmp3052;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:741:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3054 = &$tmp3053->_valid;
frost$core$Bit $tmp3055 = *$tmp3054;
bool $tmp3056 = $tmp3055.value;
if ($tmp3056) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp3057 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3058, $tmp3057);
abort(); // unreachable
block63:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3059 = &$tmp3053->value;
frost$core$Object* $tmp3060 = *$tmp3059;
frost$core$Frost$ref$frost$core$Object$Q($tmp3060);
org$frostlang$frostc$Type** $tmp3061 = &((org$frostlang$frostc$Compiler*) $tmp3060)->CHOICE_DATA_TYPE;
org$frostlang$frostc$Type* $tmp3062 = *$tmp3061;
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp3041, $tmp3042, $tmp3045, ((frost$core$String*) NULL), $tmp3046, $tmp3051, &$s3063, $tmp3062, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
org$frostlang$frostc$FieldDecl* $tmp3064 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
*(&local24) = $tmp3041;
frost$core$Frost$unref$frost$core$Object$Q($tmp3060);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:742
org$frostlang$frostc$ClassDecl* $tmp3065 = *(&local16);
frost$collections$Array** $tmp3066 = &$tmp3065->fields;
frost$collections$Array* $tmp3067 = *$tmp3066;
org$frostlang$frostc$FieldDecl* $tmp3068 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp3067, ((frost$core$Object*) $tmp3068));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:743
org$frostlang$frostc$ClassDecl* $tmp3069 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3070 = &$tmp3069->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3071 = *$tmp3070;
org$frostlang$frostc$FieldDecl* $tmp3072 = *(&local24);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:743:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3073 = &((org$frostlang$frostc$Symbol*) $tmp3072)->name;
frost$core$String* $tmp3074 = *$tmp3073;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3071, ((org$frostlang$frostc$Symbol*) $tmp3072), $tmp3074);
org$frostlang$frostc$FieldDecl* $tmp3075 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3075));
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp3076 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
*(&local21) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:745
ITable* $tmp3077 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp3077->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3077 = $tmp3077->next;
}
$fn3079 $tmp3078 = $tmp3077->methods[0];
frost$collections$Iterator* $tmp3080 = $tmp3078(((frost$collections$Iterable*) param11));
goto block66;
block66:;
ITable* $tmp3081 = $tmp3080->$class->itable;
while ($tmp3081->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3081 = $tmp3081->next;
}
$fn3083 $tmp3082 = $tmp3081->methods[0];
frost$core$Bit $tmp3084 = $tmp3082($tmp3080);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block68; else goto block67;
block67:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3086 = $tmp3080->$class->itable;
while ($tmp3086->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3086 = $tmp3086->next;
}
$fn3088 $tmp3087 = $tmp3086->methods[1];
frost$core$Object* $tmp3089 = $tmp3087($tmp3080);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3089)));
org$frostlang$frostc$ASTNode* $tmp3090 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp3089);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:746
org$frostlang$frostc$ASTNode* $tmp3091 = *(&local25);
frost$core$Int64* $tmp3092 = &$tmp3091->$rawValue;
frost$core$Int64 $tmp3093 = *$tmp3092;
frost$core$Int64 $tmp3094 = (frost$core$Int64) {29u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:747:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3095 = $tmp3093.value;
int64_t $tmp3096 = $tmp3094.value;
bool $tmp3097 = $tmp3095 == $tmp3096;
frost$core$Bit $tmp3098 = (frost$core$Bit) {$tmp3097};
bool $tmp3099 = $tmp3098.value;
if ($tmp3099) goto block70; else goto block71;
block70:;
org$frostlang$frostc$Position* $tmp3100 = (org$frostlang$frostc$Position*) ($tmp3091->$data + 0);
org$frostlang$frostc$Position $tmp3101 = *$tmp3100;
*(&local26) = $tmp3101;
org$frostlang$frostc$ASTNode** $tmp3102 = (org$frostlang$frostc$ASTNode**) ($tmp3091->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3103 = *$tmp3102;
org$frostlang$frostc$FixedArray** $tmp3104 = (org$frostlang$frostc$FixedArray**) ($tmp3091->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3105 = *$tmp3104;
org$frostlang$frostc$MethodDecl$Kind* $tmp3106 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3091->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3107 = *$tmp3106;
*(&local27) = $tmp3107;
frost$core$String** $tmp3108 = (frost$core$String**) ($tmp3091->$data + 48);
frost$core$String* $tmp3109 = *$tmp3108;
org$frostlang$frostc$FixedArray** $tmp3110 = (org$frostlang$frostc$FixedArray**) ($tmp3091->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3111 = *$tmp3110;
org$frostlang$frostc$FixedArray** $tmp3112 = (org$frostlang$frostc$FixedArray**) ($tmp3091->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3113 = *$tmp3112;
org$frostlang$frostc$ASTNode** $tmp3114 = (org$frostlang$frostc$ASTNode**) ($tmp3091->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3115 = *$tmp3114;
org$frostlang$frostc$FixedArray** $tmp3116 = (org$frostlang$frostc$FixedArray**) ($tmp3091->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3117 = *$tmp3116;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:748
org$frostlang$frostc$MethodDecl$Kind $tmp3118 = *(&local27);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3119;
$tmp3119 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3119->value = $tmp3118;
frost$core$Int64 $tmp3120 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:748:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3121 = &(&local29)->$rawValue;
*$tmp3121 = $tmp3120;
org$frostlang$frostc$MethodDecl$Kind $tmp3122 = *(&local29);
*(&local28) = $tmp3122;
org$frostlang$frostc$MethodDecl$Kind $tmp3123 = *(&local28);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3124;
$tmp3124 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3124->value = $tmp3123;
ITable* $tmp3125 = ((frost$core$Equatable*) $tmp3119)->$class->itable;
while ($tmp3125->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3125 = $tmp3125->next;
}
$fn3127 $tmp3126 = $tmp3125->methods[0];
frost$core$Bit $tmp3128 = $tmp3126(((frost$core$Equatable*) $tmp3119), ((frost$core$Equatable*) $tmp3124));
bool $tmp3129 = $tmp3128.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3124)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3119)));
if ($tmp3129) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:749
frost$core$Int64 $tmp3130 = param7.$rawValue;
frost$core$Int64 $tmp3131 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:750:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3132 = $tmp3130.value;
int64_t $tmp3133 = $tmp3131.value;
bool $tmp3134 = $tmp3132 == $tmp3133;
frost$core$Bit $tmp3135 = (frost$core$Bit) {$tmp3134};
bool $tmp3136 = $tmp3135.value;
if ($tmp3136) goto block77; else goto block78;
block77:;
goto block76;
block78:;
frost$core$Int64 $tmp3137 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:753:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3138 = $tmp3130.value;
int64_t $tmp3139 = $tmp3137.value;
bool $tmp3140 = $tmp3138 == $tmp3139;
frost$core$Bit $tmp3141 = (frost$core$Bit) {$tmp3140};
bool $tmp3142 = $tmp3141.value;
if ($tmp3142) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:754
org$frostlang$frostc$Position $tmp3143 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:754:38
frost$io$File** $tmp3144 = &param0->source;
frost$io$File* $tmp3145 = *$tmp3144;
frost$core$Bit $tmp3146 = (frost$core$Bit) {$tmp3145 != NULL};
bool $tmp3147 = $tmp3146.value;
if ($tmp3147) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp3148 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3149, $tmp3148, &$s3150);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3151 = &param0->compiler;
frost$core$Weak* $tmp3152 = *$tmp3151;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3153 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3152);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block87; else goto block88;
block88:;
frost$core$Int64 $tmp3155 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3156, $tmp3155);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3157 = &$tmp3152->value;
frost$core$Object* $tmp3158 = *$tmp3157;
frost$core$Frost$ref$frost$core$Object$Q($tmp3158);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3158), $tmp3143, &$s3159);
frost$core$Frost$unref$frost$core$Object$Q($tmp3158);
goto block76;
block81:;
frost$core$Int64 $tmp3160 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:756:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3161 = $tmp3130.value;
int64_t $tmp3162 = $tmp3160.value;
bool $tmp3163 = $tmp3161 == $tmp3162;
frost$core$Bit $tmp3164 = (frost$core$Bit) {$tmp3163};
bool $tmp3165 = $tmp3164.value;
if ($tmp3165) goto block89; else goto block76;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:757
org$frostlang$frostc$Position $tmp3166 = *(&local26);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:757:38
frost$io$File** $tmp3167 = &param0->source;
frost$io$File* $tmp3168 = *$tmp3167;
frost$core$Bit $tmp3169 = (frost$core$Bit) {$tmp3168 != NULL};
bool $tmp3170 = $tmp3169.value;
if ($tmp3170) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp3171 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3172, $tmp3171, &$s3173);
abort(); // unreachable
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3174 = &param0->compiler;
frost$core$Weak* $tmp3175 = *$tmp3174;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3176 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3175);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block95; else goto block96;
block96:;
frost$core$Int64 $tmp3178 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3179, $tmp3178);
abort(); // unreachable
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3180 = &$tmp3175->value;
frost$core$Object* $tmp3181 = *$tmp3180;
frost$core$Frost$ref$frost$core$Object$Q($tmp3181);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3181), $tmp3166, &$s3182);
frost$core$Frost$unref$frost$core$Object$Q($tmp3181);
goto block76;
block76:;
goto block74;
block74:;
goto block69;
block71:;
goto block69;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:766
org$frostlang$frostc$ClassDecl* $tmp3183 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp3184 = *(&local25);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp3183, $tmp3184);
frost$core$Frost$unref$frost$core$Object$Q($tmp3089);
org$frostlang$frostc$ASTNode* $tmp3185 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block66;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:768
frost$core$Bit $tmp3186 = (frost$core$Bit) {false};
*(&local30) = $tmp3186;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:769
frost$core$Bit $tmp3187 = (frost$core$Bit) {false};
*(&local31) = $tmp3187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:770
org$frostlang$frostc$ClassDecl* $tmp3188 = *(&local16);
frost$collections$Array** $tmp3189 = &$tmp3188->methods;
frost$collections$Array* $tmp3190 = *$tmp3189;
ITable* $tmp3191 = ((frost$collections$Iterable*) $tmp3190)->$class->itable;
while ($tmp3191->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3191 = $tmp3191->next;
}
$fn3193 $tmp3192 = $tmp3191->methods[0];
frost$collections$Iterator* $tmp3194 = $tmp3192(((frost$collections$Iterable*) $tmp3190));
goto block97;
block97:;
ITable* $tmp3195 = $tmp3194->$class->itable;
while ($tmp3195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3195 = $tmp3195->next;
}
$fn3197 $tmp3196 = $tmp3195->methods[0];
frost$core$Bit $tmp3198 = $tmp3196($tmp3194);
bool $tmp3199 = $tmp3198.value;
if ($tmp3199) goto block99; else goto block98;
block98:;
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp3200 = $tmp3194->$class->itable;
while ($tmp3200->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3200 = $tmp3200->next;
}
$fn3202 $tmp3201 = $tmp3200->methods[1];
frost$core$Object* $tmp3203 = $tmp3201($tmp3194);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp3203)));
org$frostlang$frostc$MethodDecl* $tmp3204 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) $tmp3203);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:771
org$frostlang$frostc$MethodDecl* $tmp3205 = *(&local32);
org$frostlang$frostc$MethodDecl$Kind* $tmp3206 = &$tmp3205->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3207 = *$tmp3206;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3208;
$tmp3208 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3208->value = $tmp3207;
frost$core$Int64 $tmp3209 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:771:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3210 = &(&local34)->$rawValue;
*$tmp3210 = $tmp3209;
org$frostlang$frostc$MethodDecl$Kind $tmp3211 = *(&local34);
*(&local33) = $tmp3211;
org$frostlang$frostc$MethodDecl$Kind $tmp3212 = *(&local33);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3213;
$tmp3213 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3213->value = $tmp3212;
ITable* $tmp3214 = ((frost$core$Equatable*) $tmp3208)->$class->itable;
while ($tmp3214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3214 = $tmp3214->next;
}
$fn3216 $tmp3215 = $tmp3214->methods[0];
frost$core$Bit $tmp3217 = $tmp3215(((frost$core$Equatable*) $tmp3208), ((frost$core$Equatable*) $tmp3213));
bool $tmp3218 = $tmp3217.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3213)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3208)));
if ($tmp3218) goto block100; else goto block101;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:772
frost$core$Bit $tmp3219 = (frost$core$Bit) {true};
*(&local30) = $tmp3219;
goto block101;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:774
org$frostlang$frostc$MethodDecl* $tmp3220 = *(&local32);
frost$core$String** $tmp3221 = &((org$frostlang$frostc$Symbol*) $tmp3220)->name;
frost$core$String* $tmp3222 = *$tmp3221;
frost$core$Bit $tmp3223 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3222, &$s3224);
bool $tmp3225 = $tmp3223.value;
if ($tmp3225) goto block105; else goto block104;
block105:;
org$frostlang$frostc$MethodDecl* $tmp3226 = *(&local32);
frost$collections$Array** $tmp3227 = &$tmp3226->parameters;
frost$collections$Array* $tmp3228 = *$tmp3227;
ITable* $tmp3229 = ((frost$collections$CollectionView*) $tmp3228)->$class->itable;
while ($tmp3229->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3229 = $tmp3229->next;
}
$fn3231 $tmp3230 = $tmp3229->methods[0];
frost$core$Int64 $tmp3232 = $tmp3230(((frost$collections$CollectionView*) $tmp3228));
frost$core$Int64 $tmp3233 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:774:56
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3234 = $tmp3232.value;
int64_t $tmp3235 = $tmp3233.value;
bool $tmp3236 = $tmp3234 == $tmp3235;
frost$core$Bit $tmp3237 = (frost$core$Bit) {$tmp3236};
bool $tmp3238 = $tmp3237.value;
if ($tmp3238) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:775
frost$core$Bit $tmp3239 = (frost$core$Bit) {true};
*(&local31) = $tmp3239;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:776
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3240;
$tmp3240 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3240->value = param7;
frost$core$Int64 $tmp3241 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:776:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3242 = &(&local36)->$rawValue;
*$tmp3242 = $tmp3241;
org$frostlang$frostc$ClassDecl$Kind $tmp3243 = *(&local36);
*(&local35) = $tmp3243;
org$frostlang$frostc$ClassDecl$Kind $tmp3244 = *(&local35);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3245;
$tmp3245 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3245->value = $tmp3244;
ITable* $tmp3246 = ((frost$core$Equatable*) $tmp3240)->$class->itable;
while ($tmp3246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3246 = $tmp3246->next;
}
$fn3248 $tmp3247 = $tmp3246->methods[0];
frost$core$Bit $tmp3249 = $tmp3247(((frost$core$Equatable*) $tmp3240), ((frost$core$Equatable*) $tmp3245));
bool $tmp3250 = $tmp3249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3240)));
if ($tmp3250) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:777
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:777:26
frost$io$File** $tmp3251 = &param0->source;
frost$io$File* $tmp3252 = *$tmp3251;
frost$core$Bit $tmp3253 = (frost$core$Bit) {$tmp3252 != NULL};
bool $tmp3254 = $tmp3253.value;
if ($tmp3254) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp3255 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3256, $tmp3255, &$s3257);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3258 = &param0->compiler;
frost$core$Weak* $tmp3259 = *$tmp3258;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3260 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3259);
bool $tmp3261 = $tmp3260.value;
if ($tmp3261) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp3262 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3263, $tmp3262);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3264 = &$tmp3259->value;
frost$core$Object* $tmp3265 = *$tmp3264;
frost$core$Frost$ref$frost$core$Object$Q($tmp3265);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3265), param4, &$s3266);
frost$core$Frost$unref$frost$core$Object$Q($tmp3265);
goto block108;
block108:;
goto block104;
block104:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3203);
org$frostlang$frostc$MethodDecl* $tmp3267 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3267));
*(&local32) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:781
frost$core$Bit $tmp3268 = *(&local30);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:781:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3269 = $tmp3268.value;
bool $tmp3270 = !$tmp3269;
frost$core$Bit $tmp3271 = (frost$core$Bit) {$tmp3270};
bool $tmp3272 = $tmp3271.value;
if ($tmp3272) goto block119; else goto block117;
block119:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3273;
$tmp3273 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3273->value = param7;
frost$core$Int64 $tmp3274 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:781:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3275 = &(&local38)->$rawValue;
*$tmp3275 = $tmp3274;
org$frostlang$frostc$ClassDecl$Kind $tmp3276 = *(&local38);
*(&local37) = $tmp3276;
org$frostlang$frostc$ClassDecl$Kind $tmp3277 = *(&local37);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3278;
$tmp3278 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3278->value = $tmp3277;
ITable* $tmp3279 = ((frost$core$Equatable*) $tmp3273)->$class->itable;
while ($tmp3279->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3279 = $tmp3279->next;
}
$fn3281 $tmp3280 = $tmp3279->methods[0];
frost$core$Bit $tmp3282 = $tmp3280(((frost$core$Equatable*) $tmp3273), ((frost$core$Equatable*) $tmp3278));
bool $tmp3283 = $tmp3282.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3278)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3273)));
if ($tmp3283) goto block118; else goto block117;
block118:;
org$frostlang$frostc$ClassDecl* $tmp3284 = *(&local16);
frost$core$String** $tmp3285 = &$tmp3284->name;
frost$core$String* $tmp3286 = *$tmp3285;
ITable* $tmp3288 = ((frost$core$Equatable*) $tmp3286)->$class->itable;
while ($tmp3288->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3288 = $tmp3288->next;
}
$fn3290 $tmp3289 = $tmp3288->methods[1];
frost$core$Bit $tmp3291 = $tmp3289(((frost$core$Equatable*) $tmp3286), ((frost$core$Equatable*) &$s3287));
bool $tmp3292 = $tmp3291.value;
if ($tmp3292) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:782
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3293 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3294 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3295 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3296 = (frost$core$Int64) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3295, $tmp3296);
frost$core$Int64 $tmp3297 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:783:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3298 = &(&local40)->$rawValue;
*$tmp3298 = $tmp3297;
org$frostlang$frostc$MethodDecl$Kind $tmp3299 = *(&local40);
*(&local39) = $tmp3299;
org$frostlang$frostc$MethodDecl$Kind $tmp3300 = *(&local39);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3301 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3302 = (frost$core$Int64) {0u};
frost$collections$Array$init$frost$core$Int64($tmp3301, $tmp3302);
frost$core$Weak** $tmp3303 = &param0->compiler;
frost$core$Weak* $tmp3304 = *$tmp3303;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:784:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3305 = &$tmp3304->_valid;
frost$core$Bit $tmp3306 = *$tmp3305;
bool $tmp3307 = $tmp3306.value;
if ($tmp3307) goto block125; else goto block126;
block126:;
frost$core$Int64 $tmp3308 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3309, $tmp3308);
abort(); // unreachable
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3310 = &$tmp3304->value;
frost$core$Object* $tmp3311 = *$tmp3310;
frost$core$Frost$ref$frost$core$Object$Q($tmp3311);
org$frostlang$frostc$Type** $tmp3312 = &((org$frostlang$frostc$Compiler*) $tmp3311)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3313 = *$tmp3312;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3314 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3314);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3293, $tmp3294, param4, ((frost$core$String*) NULL), $tmp3295, $tmp3300, &$s3315, ((frost$collections$Array*) NULL), $tmp3301, $tmp3313, $tmp3314);
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
org$frostlang$frostc$MethodDecl* $tmp3316 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
*(&local41) = $tmp3293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
frost$core$Frost$unref$frost$core$Object$Q($tmp3311);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3293));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:785
org$frostlang$frostc$ClassDecl* $tmp3317 = *(&local16);
frost$collections$Array** $tmp3318 = &$tmp3317->methods;
frost$collections$Array* $tmp3319 = *$tmp3318;
org$frostlang$frostc$MethodDecl* $tmp3320 = *(&local41);
frost$collections$Array$add$frost$collections$Array$T($tmp3319, ((frost$core$Object*) $tmp3320));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:786
org$frostlang$frostc$ClassDecl* $tmp3321 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3322 = &$tmp3321->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3323 = *$tmp3322;
org$frostlang$frostc$MethodDecl* $tmp3324 = *(&local41);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:786:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3325 = &((org$frostlang$frostc$Symbol*) $tmp3324)->name;
frost$core$String* $tmp3326 = *$tmp3325;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3323, ((org$frostlang$frostc$Symbol*) $tmp3324), $tmp3326);
org$frostlang$frostc$MethodDecl* $tmp3327 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
*(&local41) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block117;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:788
frost$core$Bit $tmp3328 = *(&local31);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:788:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3329 = $tmp3328.value;
bool $tmp3330 = !$tmp3329;
frost$core$Bit $tmp3331 = (frost$core$Bit) {$tmp3330};
bool $tmp3332 = $tmp3331.value;
if ($tmp3332) goto block131; else goto block129;
block131:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3333;
$tmp3333 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3333->value = param7;
frost$core$Int64 $tmp3334 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:788:50
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3335 = &(&local43)->$rawValue;
*$tmp3335 = $tmp3334;
org$frostlang$frostc$ClassDecl$Kind $tmp3336 = *(&local43);
*(&local42) = $tmp3336;
org$frostlang$frostc$ClassDecl$Kind $tmp3337 = *(&local42);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3338;
$tmp3338 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3338->value = $tmp3337;
ITable* $tmp3339 = ((frost$core$Equatable*) $tmp3333)->$class->itable;
while ($tmp3339->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3339 = $tmp3339->next;
}
$fn3341 $tmp3340 = $tmp3339->methods[0];
frost$core$Bit $tmp3342 = $tmp3340(((frost$core$Equatable*) $tmp3333), ((frost$core$Equatable*) $tmp3338));
bool $tmp3343 = $tmp3342.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3338)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3333)));
if ($tmp3343) goto block130; else goto block133;
block133:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3344;
$tmp3344 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3344->value = param7;
frost$core$Int64 $tmp3345 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:788:80
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3346 = &(&local45)->$rawValue;
*$tmp3346 = $tmp3345;
org$frostlang$frostc$ClassDecl$Kind $tmp3347 = *(&local45);
*(&local44) = $tmp3347;
org$frostlang$frostc$ClassDecl$Kind $tmp3348 = *(&local44);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3349;
$tmp3349 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3349->value = $tmp3348;
ITable* $tmp3350 = ((frost$core$Equatable*) $tmp3344)->$class->itable;
while ($tmp3350->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3350 = $tmp3350->next;
}
$fn3352 $tmp3351 = $tmp3350->methods[0];
frost$core$Bit $tmp3353 = $tmp3351(((frost$core$Equatable*) $tmp3344), ((frost$core$Equatable*) $tmp3349));
bool $tmp3354 = $tmp3353.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3349)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3344)));
if ($tmp3354) goto block130; else goto block129;
block130:;
org$frostlang$frostc$ClassDecl* $tmp3355 = *(&local16);
frost$core$String** $tmp3356 = &$tmp3355->name;
frost$core$String* $tmp3357 = *$tmp3356;
ITable* $tmp3359 = ((frost$core$Equatable*) $tmp3357)->$class->itable;
while ($tmp3359->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3359 = $tmp3359->next;
}
$fn3361 $tmp3360 = $tmp3359->methods[1];
frost$core$Bit $tmp3362 = $tmp3360(((frost$core$Equatable*) $tmp3357), ((frost$core$Equatable*) &$s3358));
bool $tmp3363 = $tmp3362.value;
if ($tmp3363) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:790
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3364 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp3365 = *(&local16);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3366 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3367 = (frost$core$Int64) {32u};
frost$core$Int64 $tmp3368 = (frost$core$Int64) {8192u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:791:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp3369 = $tmp3367.value;
int64_t $tmp3370 = $tmp3368.value;
int64_t $tmp3371 = $tmp3369 | $tmp3370;
frost$core$Int64 $tmp3372 = (frost$core$Int64) {$tmp3371};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3366, $tmp3372);
frost$core$Int64 $tmp3373 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:792:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3374 = &(&local47)->$rawValue;
*$tmp3374 = $tmp3373;
org$frostlang$frostc$MethodDecl$Kind $tmp3375 = *(&local47);
*(&local46) = $tmp3375;
org$frostlang$frostc$MethodDecl$Kind $tmp3376 = *(&local46);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3377 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3378 = (frost$core$Int64) {0u};
frost$collections$Array$init$frost$core$Int64($tmp3377, $tmp3378);
frost$core$Weak** $tmp3379 = &param0->compiler;
frost$core$Weak* $tmp3380 = *$tmp3379;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:792:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3381 = &$tmp3380->_valid;
frost$core$Bit $tmp3382 = *$tmp3381;
bool $tmp3383 = $tmp3382.value;
if ($tmp3383) goto block140; else goto block141;
block141:;
frost$core$Int64 $tmp3384 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3385, $tmp3384);
abort(); // unreachable
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3386 = &$tmp3380->value;
frost$core$Object* $tmp3387 = *$tmp3386;
frost$core$Frost$ref$frost$core$Object$Q($tmp3387);
org$frostlang$frostc$Type** $tmp3388 = &((org$frostlang$frostc$Compiler*) $tmp3387)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3389 = *$tmp3388;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3390 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3390);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3364, $tmp3365, param4, ((frost$core$String*) NULL), $tmp3366, $tmp3376, &$s3391, ((frost$collections$Array*) NULL), $tmp3377, $tmp3389, $tmp3390);
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
org$frostlang$frostc$MethodDecl* $tmp3392 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
*(&local48) = $tmp3364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
frost$core$Frost$unref$frost$core$Object$Q($tmp3387);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:794
org$frostlang$frostc$ClassDecl* $tmp3393 = *(&local16);
frost$collections$Array** $tmp3394 = &$tmp3393->methods;
frost$collections$Array* $tmp3395 = *$tmp3394;
org$frostlang$frostc$MethodDecl* $tmp3396 = *(&local48);
frost$collections$Array$add$frost$collections$Array$T($tmp3395, ((frost$core$Object*) $tmp3396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:795
org$frostlang$frostc$ClassDecl* $tmp3397 = *(&local16);
org$frostlang$frostc$SymbolTable** $tmp3398 = &$tmp3397->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3399 = *$tmp3398;
org$frostlang$frostc$MethodDecl* $tmp3400 = *(&local48);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:795:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3401 = &((org$frostlang$frostc$Symbol*) $tmp3400)->name;
frost$core$String* $tmp3402 = *$tmp3401;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3399, ((org$frostlang$frostc$Symbol*) $tmp3400), $tmp3402);
org$frostlang$frostc$MethodDecl* $tmp3403 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
*(&local48) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block129;
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:797
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3404;
$tmp3404 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3404->value = param7;
frost$core$Int64 $tmp3405 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:797:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3406 = &(&local50)->$rawValue;
*$tmp3406 = $tmp3405;
org$frostlang$frostc$ClassDecl$Kind $tmp3407 = *(&local50);
*(&local49) = $tmp3407;
org$frostlang$frostc$ClassDecl$Kind $tmp3408 = *(&local49);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3409;
$tmp3409 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3409->value = $tmp3408;
ITable* $tmp3410 = ((frost$core$Equatable*) $tmp3404)->$class->itable;
while ($tmp3410->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3410 = $tmp3410->next;
}
$fn3412 $tmp3411 = $tmp3410->methods[0];
frost$core$Bit $tmp3413 = $tmp3411(((frost$core$Equatable*) $tmp3404), ((frost$core$Equatable*) $tmp3409));
bool $tmp3414 = $tmp3413.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3409)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3404)));
if ($tmp3414) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:798
frost$core$Bit $tmp3415 = (frost$core$Bit) {false};
*(&local51) = $tmp3415;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:799
org$frostlang$frostc$ClassDecl* $tmp3416 = *(&local16);
frost$collections$Array** $tmp3417 = &$tmp3416->choiceCases;
frost$collections$Array* $tmp3418 = *$tmp3417;
ITable* $tmp3419 = ((frost$collections$CollectionView*) $tmp3418)->$class->itable;
while ($tmp3419->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3419 = $tmp3419->next;
}
$fn3421 $tmp3420 = $tmp3419->methods[0];
frost$core$Int64 $tmp3422 = $tmp3420(((frost$collections$CollectionView*) $tmp3418));
frost$core$Int64 $tmp3423 = (frost$core$Int64) {0u};
int64_t $tmp3424 = $tmp3422.value;
int64_t $tmp3425 = $tmp3423.value;
bool $tmp3426 = $tmp3424 > $tmp3425;
frost$core$Bit $tmp3427 = (frost$core$Bit) {$tmp3426};
bool $tmp3428 = $tmp3427.value;
if ($tmp3428) goto block146; else goto block148;
block146:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:800
org$frostlang$frostc$ClassDecl* $tmp3429 = *(&local16);
frost$collections$Array** $tmp3430 = &$tmp3429->choiceCases;
frost$collections$Array* $tmp3431 = *$tmp3430;
ITable* $tmp3432 = ((frost$collections$Iterable*) $tmp3431)->$class->itable;
while ($tmp3432->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3432 = $tmp3432->next;
}
$fn3434 $tmp3433 = $tmp3432->methods[0];
frost$collections$Iterator* $tmp3435 = $tmp3433(((frost$collections$Iterable*) $tmp3431));
goto block149;
block149:;
ITable* $tmp3436 = $tmp3435->$class->itable;
while ($tmp3436->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3436 = $tmp3436->next;
}
$fn3438 $tmp3437 = $tmp3436->methods[0];
frost$core$Bit $tmp3439 = $tmp3437($tmp3435);
bool $tmp3440 = $tmp3439.value;
if ($tmp3440) goto block151; else goto block150;
block150:;
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp3441 = $tmp3435->$class->itable;
while ($tmp3441->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3441 = $tmp3441->next;
}
$fn3443 $tmp3442 = $tmp3441->methods[1];
frost$core$Object* $tmp3444 = $tmp3442($tmp3435);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp3444)));
org$frostlang$frostc$ChoiceCase* $tmp3445 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) $tmp3444);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:801
org$frostlang$frostc$ChoiceCase* $tmp3446 = *(&local52);
frost$collections$Array** $tmp3447 = &$tmp3446->fields;
frost$collections$Array* $tmp3448 = *$tmp3447;
ITable* $tmp3449 = ((frost$collections$CollectionView*) $tmp3448)->$class->itable;
while ($tmp3449->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3449 = $tmp3449->next;
}
$fn3451 $tmp3450 = $tmp3449->methods[0];
frost$core$Int64 $tmp3452 = $tmp3450(((frost$collections$CollectionView*) $tmp3448));
frost$core$Int64 $tmp3453 = (frost$core$Int64) {0u};
int64_t $tmp3454 = $tmp3452.value;
int64_t $tmp3455 = $tmp3453.value;
bool $tmp3456 = $tmp3454 > $tmp3455;
frost$core$Bit $tmp3457 = (frost$core$Bit) {$tmp3456};
bool $tmp3458 = $tmp3457.value;
if ($tmp3458) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:802
frost$core$Bit $tmp3459 = (frost$core$Bit) {true};
*(&local51) = $tmp3459;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:803
frost$core$Frost$unref$frost$core$Object$Q($tmp3444);
org$frostlang$frostc$ChoiceCase* $tmp3460 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block151;
block153:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3444);
org$frostlang$frostc$ChoiceCase* $tmp3461 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
*(&local52) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block149;
block151:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:811
frost$core$Bit $tmp3462 = *(&local51);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Scanner.frost:811:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp3463 = $tmp3462.value;
bool $tmp3464 = !$tmp3463;
frost$core$Bit $tmp3465 = (frost$core$Bit) {$tmp3464};
bool $tmp3466 = $tmp3465.value;
if ($tmp3466) goto block160; else goto block161;
block148:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:808
org$frostlang$frostc$ClassDecl* $tmp3467 = *(&local16);
org$frostlang$frostc$Position* $tmp3468 = &$tmp3467->position;
org$frostlang$frostc$Position $tmp3469 = *$tmp3468;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:808:22
frost$io$File** $tmp3470 = &param0->source;
frost$io$File* $tmp3471 = *$tmp3470;
frost$core$Bit $tmp3472 = (frost$core$Bit) {$tmp3471 != NULL};
bool $tmp3473 = $tmp3472.value;
if ($tmp3473) goto block155; else goto block156;
block156:;
frost$core$Int64 $tmp3474 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3475, $tmp3474, &$s3476);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3477 = &param0->compiler;
frost$core$Weak* $tmp3478 = *$tmp3477;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3479 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3478);
bool $tmp3480 = $tmp3479.value;
if ($tmp3480) goto block158; else goto block159;
block159:;
frost$core$Int64 $tmp3481 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3482, $tmp3481);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3483 = &$tmp3478->value;
frost$core$Object* $tmp3484 = *$tmp3483;
frost$core$Frost$ref$frost$core$Object$Q($tmp3484);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3484), $tmp3469, &$s3485);
frost$core$Frost$unref$frost$core$Object$Q($tmp3484);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:809
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3486 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3486));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3487 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3488 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3489 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3490 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3491 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3491));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:812
org$frostlang$frostc$ClassDecl* $tmp3492 = *(&local16);
frost$core$Weak** $tmp3493 = &param0->compiler;
frost$core$Weak* $tmp3494 = *$tmp3493;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:812:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3495 = &$tmp3494->_valid;
frost$core$Bit $tmp3496 = *$tmp3495;
bool $tmp3497 = $tmp3496.value;
if ($tmp3497) goto block165; else goto block166;
block166:;
frost$core$Int64 $tmp3498 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3499, $tmp3498);
abort(); // unreachable
block165:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3500 = &$tmp3494->value;
frost$core$Object* $tmp3501 = *$tmp3500;
frost$core$Frost$ref$frost$core$Object$Q($tmp3501);
org$frostlang$frostc$Type** $tmp3502 = &((org$frostlang$frostc$Compiler*) $tmp3501)->VALUE_TYPE;
org$frostlang$frostc$Type* $tmp3503 = *$tmp3502;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
org$frostlang$frostc$Type** $tmp3504 = &$tmp3492->rawSuper;
org$frostlang$frostc$Type* $tmp3505 = *$tmp3504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3505));
org$frostlang$frostc$Type** $tmp3506 = &$tmp3492->rawSuper;
*$tmp3506 = $tmp3503;
frost$core$Frost$unref$frost$core$Object$Q($tmp3501);
goto block161;
block161:;
goto block144;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:815
frost$core$Weak** $tmp3507 = &param0->compiler;
frost$core$Weak* $tmp3508 = *$tmp3507;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:815:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3509 = &$tmp3508->_valid;
frost$core$Bit $tmp3510 = *$tmp3509;
bool $tmp3511 = $tmp3510.value;
if ($tmp3511) goto block169; else goto block170;
block170:;
frost$core$Int64 $tmp3512 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3513, $tmp3512);
abort(); // unreachable
block169:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3514 = &$tmp3508->value;
frost$core$Object* $tmp3515 = *$tmp3514;
frost$core$Frost$ref$frost$core$Object$Q($tmp3515);
frost$collections$Stack** $tmp3516 = &((org$frostlang$frostc$Compiler*) $tmp3515)->currentClass;
frost$collections$Stack* $tmp3517 = *$tmp3516;
frost$core$Object* $tmp3518 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3517);
frost$core$Frost$unref$frost$core$Object$Q($tmp3518);
frost$core$Frost$unref$frost$core$Object$Q($tmp3515);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:816
org$frostlang$frostc$ClassDecl* $tmp3519 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
org$frostlang$frostc$ClassDecl* $tmp3520 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp3521 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3522 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp3523 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp3524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3525 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3519;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
org$frostlang$frostc$ClassDecl* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3526 = &param1->classes;
frost$collections$Array* $tmp3527 = *$tmp3526;
ITable* $tmp3528 = ((frost$collections$Iterable*) $tmp3527)->$class->itable;
while ($tmp3528->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3528 = $tmp3528->next;
}
$fn3530 $tmp3529 = $tmp3528->methods[0];
frost$collections$Iterator* $tmp3531 = $tmp3529(((frost$collections$Iterable*) $tmp3527));
goto block1;
block1:;
ITable* $tmp3532 = $tmp3531->$class->itable;
while ($tmp3532->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3532 = $tmp3532->next;
}
$fn3534 $tmp3533 = $tmp3532->methods[0];
frost$core$Bit $tmp3535 = $tmp3533($tmp3531);
bool $tmp3536 = $tmp3535.value;
if ($tmp3536) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3537 = $tmp3531->$class->itable;
while ($tmp3537->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3537 = $tmp3537->next;
}
$fn3539 $tmp3538 = $tmp3537->methods[1];
frost$core$Object* $tmp3540 = $tmp3538($tmp3531);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3540)));
org$frostlang$frostc$ClassDecl* $tmp3541 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp3540);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3542 = *(&local0);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:822:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3542));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3543 = &$tmp3542->classes;
frost$collections$Array* $tmp3544 = *$tmp3543;
ITable* $tmp3545 = ((frost$collections$Iterable*) $tmp3544)->$class->itable;
while ($tmp3545->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3545 = $tmp3545->next;
}
$fn3547 $tmp3546 = $tmp3545->methods[0];
frost$collections$Iterator* $tmp3548 = $tmp3546(((frost$collections$Iterable*) $tmp3544));
goto block5;
block5:;
ITable* $tmp3549 = $tmp3548->$class->itable;
while ($tmp3549->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3549 = $tmp3549->next;
}
$fn3551 $tmp3550 = $tmp3549->methods[0];
frost$core$Bit $tmp3552 = $tmp3550($tmp3548);
bool $tmp3553 = $tmp3552.value;
if ($tmp3553) goto block7; else goto block6;
block6:;
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3554 = $tmp3548->$class->itable;
while ($tmp3554->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3554 = $tmp3554->next;
}
$fn3556 $tmp3555 = $tmp3554->methods[1];
frost$core$Object* $tmp3557 = $tmp3555($tmp3548);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3557)));
org$frostlang$frostc$ClassDecl* $tmp3558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) $tmp3557);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3559 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:822:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) $tmp3559));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3560 = &$tmp3559->classes;
frost$collections$Array* $tmp3561 = *$tmp3560;
ITable* $tmp3562 = ((frost$collections$Iterable*) $tmp3561)->$class->itable;
while ($tmp3562->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3562 = $tmp3562->next;
}
$fn3564 $tmp3563 = $tmp3562->methods[0];
frost$collections$Iterator* $tmp3565 = $tmp3563(((frost$collections$Iterable*) $tmp3561));
goto block9;
block9:;
ITable* $tmp3566 = $tmp3565->$class->itable;
while ($tmp3566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3566 = $tmp3566->next;
}
$fn3568 $tmp3567 = $tmp3566->methods[0];
frost$core$Bit $tmp3569 = $tmp3567($tmp3565);
bool $tmp3570 = $tmp3569.value;
if ($tmp3570) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3571 = $tmp3565->$class->itable;
while ($tmp3571->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3571 = $tmp3571->next;
}
$fn3573 $tmp3572 = $tmp3571->methods[1];
frost$core$Object* $tmp3574 = $tmp3572($tmp3565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3574)));
org$frostlang$frostc$ClassDecl* $tmp3575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3575));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) $tmp3574);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3576 = *(&local2);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3576, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3574);
org$frostlang$frostc$ClassDecl* $tmp3577 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
*(&local2) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
frost$core$Frost$unref$frost$core$Object$Q($tmp3557);
org$frostlang$frostc$ClassDecl* $tmp3578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3578));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3548));
frost$core$Frost$unref$frost$core$Object$Q($tmp3540);
org$frostlang$frostc$ClassDecl* $tmp3579 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3531));
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
org$frostlang$frostc$ClassDecl** $tmp3580 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3581 = *$tmp3580;
frost$core$Bit $tmp3582 = (frost$core$Bit) {$tmp3581 == NULL};
bool $tmp3583 = $tmp3582.value;
if ($tmp3583) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:829
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:830
ITable* $tmp3585 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp3585->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3585 = $tmp3585->next;
}
$fn3587 $tmp3586 = $tmp3585->methods[1];
frost$core$Bit $tmp3588 = $tmp3586(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s3584));
bool $tmp3589 = $tmp3588.value;
if ($tmp3589) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:831
// begin inline call to function frost.core.String.get_asString():frost.core.String from Scanner.frost:831:32
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String* $tmp3590 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param3, &$s3591);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
frost$core$String* $tmp3592 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
*(&local0) = $tmp3590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) param3));
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:834
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3593));
frost$core$String* $tmp3594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3594));
*(&local0) = &$s3595;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:836
FROST_ASSERT(208 == sizeof(org$frostlang$frostc$ClassDecl));
org$frostlang$frostc$ClassDecl* $tmp3596 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp3597 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3598 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp3598);
frost$core$Int64 $tmp3599 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from Scanner.frost:837:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp3600 = &(&local2)->$rawValue;
*$tmp3600 = $tmp3599;
org$frostlang$frostc$ClassDecl$Kind $tmp3601 = *(&local2);
*(&local1) = $tmp3601;
org$frostlang$frostc$ClassDecl$Kind $tmp3602 = *(&local1);
frost$core$String* $tmp3603 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3604 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3604);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3605 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3605);
frost$core$Weak** $tmp3606 = &param0->compiler;
frost$core$Weak* $tmp3607 = *$tmp3606;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:838:58
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3608 = &$tmp3607->_valid;
frost$core$Bit $tmp3609 = *$tmp3608;
bool $tmp3610 = $tmp3609.value;
if ($tmp3610) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp3611 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3612, $tmp3611);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3613 = &$tmp3607->value;
frost$core$Object* $tmp3614 = *$tmp3613;
frost$core$Frost$ref$frost$core$Object$Q($tmp3614);
org$frostlang$frostc$SymbolTable** $tmp3615 = &((org$frostlang$frostc$Compiler*) $tmp3614)->root;
org$frostlang$frostc$SymbolTable* $tmp3616 = *$tmp3615;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp3596, param1, $tmp3597, param2, ((frost$core$String*) NULL), $tmp3598, $tmp3602, $tmp3603, ((frost$collections$ListView*) $tmp3604), $tmp3605, $tmp3616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
org$frostlang$frostc$ClassDecl** $tmp3617 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3618 = *$tmp3617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
org$frostlang$frostc$ClassDecl** $tmp3619 = &param0->bareCodeClass;
*$tmp3619 = $tmp3596;
frost$core$Frost$unref$frost$core$Object$Q($tmp3614);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3596));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:839
org$frostlang$frostc$ClassDecl** $tmp3620 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3621 = *$tmp3620;
ITable* $tmp3622 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp3622->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp3622 = $tmp3622->next;
}
$fn3624 $tmp3623 = $tmp3622->methods[0];
$tmp3623(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp3621));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:840
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3625 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3626 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3627 = *$tmp3626;
org$frostlang$frostc$Position $tmp3628 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3629 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3630 = (frost$core$Int64) {8192u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3629, $tmp3630);
frost$core$Int64 $tmp3631 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:841:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3632 = &(&local4)->$rawValue;
*$tmp3632 = $tmp3631;
org$frostlang$frostc$MethodDecl$Kind $tmp3633 = *(&local4);
*(&local3) = $tmp3633;
org$frostlang$frostc$MethodDecl$Kind $tmp3634 = *(&local3);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3635 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3636 = (frost$core$Int64) {0u};
frost$collections$Array$init$frost$core$Int64($tmp3635, $tmp3636);
frost$core$Weak** $tmp3637 = &param0->compiler;
frost$core$Weak* $tmp3638 = *$tmp3637;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:842:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3639 = &$tmp3638->_valid;
frost$core$Bit $tmp3640 = *$tmp3639;
bool $tmp3641 = $tmp3640.value;
if ($tmp3641) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp3642 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3643, $tmp3642);
abort(); // unreachable
block15:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3644 = &$tmp3638->value;
frost$core$Object* $tmp3645 = *$tmp3644;
frost$core$Frost$ref$frost$core$Object$Q($tmp3645);
org$frostlang$frostc$Type** $tmp3646 = &((org$frostlang$frostc$Compiler*) $tmp3645)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3647 = *$tmp3646;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3648 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3648);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3625, $tmp3627, $tmp3628, ((frost$core$String*) NULL), $tmp3629, $tmp3634, &$s3649, ((frost$collections$Array*) NULL), $tmp3635, $tmp3647, $tmp3648);
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
org$frostlang$frostc$MethodDecl* $tmp3650 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
*(&local5) = $tmp3625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
frost$core$Frost$unref$frost$core$Object$Q($tmp3645);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:843
org$frostlang$frostc$ClassDecl** $tmp3651 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3652 = *$tmp3651;
frost$collections$Array** $tmp3653 = &$tmp3652->methods;
frost$collections$Array* $tmp3654 = *$tmp3653;
org$frostlang$frostc$MethodDecl* $tmp3655 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp3654, ((frost$core$Object*) $tmp3655));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:844
org$frostlang$frostc$ClassDecl** $tmp3656 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3657 = *$tmp3656;
org$frostlang$frostc$SymbolTable** $tmp3658 = &$tmp3657->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3659 = *$tmp3658;
org$frostlang$frostc$MethodDecl* $tmp3660 = *(&local5);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:844:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3661 = &((org$frostlang$frostc$Symbol*) $tmp3660)->name;
frost$core$String* $tmp3662 = *$tmp3661;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3659, ((org$frostlang$frostc$Symbol*) $tmp3660), $tmp3662);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:845
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp3663 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3664 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3665 = *$tmp3664;
org$frostlang$frostc$Position $tmp3666 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp3667 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3668 = (frost$core$Int64) {32u};
frost$core$Int64 $tmp3669 = (frost$core$Int64) {8192u};
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:846:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:133
int64_t $tmp3670 = $tmp3668.value;
int64_t $tmp3671 = $tmp3669.value;
int64_t $tmp3672 = $tmp3670 | $tmp3671;
frost$core$Int64 $tmp3673 = (frost$core$Int64) {$tmp3672};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3667, $tmp3673);
frost$core$Int64 $tmp3674 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:847:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3675 = &(&local7)->$rawValue;
*$tmp3675 = $tmp3674;
org$frostlang$frostc$MethodDecl$Kind $tmp3676 = *(&local7);
*(&local6) = $tmp3676;
org$frostlang$frostc$MethodDecl$Kind $tmp3677 = *(&local6);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3678 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp3679 = (frost$core$Int64) {0u};
frost$collections$Array$init$frost$core$Int64($tmp3678, $tmp3679);
frost$core$Weak** $tmp3680 = &param0->compiler;
frost$core$Weak* $tmp3681 = *$tmp3680;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:847:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3682 = &$tmp3681->_valid;
frost$core$Bit $tmp3683 = *$tmp3682;
bool $tmp3684 = $tmp3683.value;
if ($tmp3684) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp3685 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3686, $tmp3685);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3687 = &$tmp3681->value;
frost$core$Object* $tmp3688 = *$tmp3687;
frost$core$Frost$ref$frost$core$Object$Q($tmp3688);
org$frostlang$frostc$Type** $tmp3689 = &((org$frostlang$frostc$Compiler*) $tmp3688)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp3690 = *$tmp3689;
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp3691 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3691);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3663, $tmp3665, $tmp3666, ((frost$core$String*) NULL), $tmp3667, $tmp3677, &$s3692, ((frost$collections$Array*) NULL), $tmp3678, $tmp3690, $tmp3691);
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
org$frostlang$frostc$MethodDecl* $tmp3693 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3693));
*(&local8) = $tmp3663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
frost$core$Frost$unref$frost$core$Object$Q($tmp3688);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:849
org$frostlang$frostc$ClassDecl** $tmp3694 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3695 = *$tmp3694;
frost$collections$Array** $tmp3696 = &$tmp3695->methods;
frost$collections$Array* $tmp3697 = *$tmp3696;
org$frostlang$frostc$MethodDecl* $tmp3698 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp3697, ((frost$core$Object*) $tmp3698));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:850
org$frostlang$frostc$ClassDecl** $tmp3699 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3700 = *$tmp3699;
org$frostlang$frostc$SymbolTable** $tmp3701 = &$tmp3700->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3702 = *$tmp3701;
org$frostlang$frostc$MethodDecl* $tmp3703 = *(&local8);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:850:42
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp3704 = &((org$frostlang$frostc$Symbol*) $tmp3703)->name;
frost$core$String* $tmp3705 = *$tmp3704;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp3702, ((org$frostlang$frostc$Symbol*) $tmp3703), $tmp3705);
org$frostlang$frostc$MethodDecl* $tmp3706 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp3707 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3708 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp3709 = &param0->source;
frost$io$File* $tmp3710 = *$tmp3709;
frost$core$Bit $tmp3711 = (frost$core$Bit) {$tmp3710 != NULL};
bool $tmp3712 = $tmp3711.value;
if ($tmp3712) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3713 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3714, $tmp3713, &$s3715);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3716 = &param0->compiler;
frost$core$Weak* $tmp3717 = *$tmp3716;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp3718 = &$tmp3717->_valid;
frost$core$Bit $tmp3719 = *$tmp3718;
bool $tmp3720 = $tmp3719.value;
if ($tmp3720) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3721 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3722, $tmp3721);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3723 = &$tmp3717->value;
frost$core$Object* $tmp3724 = *$tmp3723;
frost$core$Frost$ref$frost$core$Object$Q($tmp3724);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3724), param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp3724);
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
frost$core$Int64 local49;
frost$core$Int64 local50;
org$frostlang$frostc$FieldDecl* local51 = NULL;
org$frostlang$frostc$FieldDecl$Kind local52;
org$frostlang$frostc$FieldDecl$Kind local53;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:860
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp3725 = &param0->source;
frost$io$File* $tmp3726 = *$tmp3725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3726));
frost$io$File** $tmp3727 = &param0->source;
*$tmp3727 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:861
frost$core$Int64* $tmp3728 = &param2->$rawValue;
frost$core$Int64 $tmp3729 = *$tmp3728;
frost$core$Int64 $tmp3730 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:862:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3731 = $tmp3729.value;
int64_t $tmp3732 = $tmp3730.value;
bool $tmp3733 = $tmp3731 == $tmp3732;
frost$core$Bit $tmp3734 = (frost$core$Bit) {$tmp3733};
bool $tmp3735 = $tmp3734.value;
if ($tmp3735) goto block2; else goto block1;
block2:;
org$frostlang$frostc$FixedArray** $tmp3736 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp3737 = *$tmp3736;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3737));
org$frostlang$frostc$FixedArray* $tmp3738 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3738));
*(&local0) = $tmp3737;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:863
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3739 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3739);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
frost$collections$Array* $tmp3740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
*(&local1) = $tmp3739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3739));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:864
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3741));
frost$core$String* $tmp3742 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
*(&local2) = &$s3743;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:865
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp3744 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp3744);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
frost$collections$HashMap* $tmp3745 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
*(&local3) = $tmp3744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:866
org$frostlang$frostc$FixedArray* $tmp3746 = *(&local0);
ITable* $tmp3747 = ((frost$collections$Iterable*) $tmp3746)->$class->itable;
while ($tmp3747->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3747 = $tmp3747->next;
}
$fn3749 $tmp3748 = $tmp3747->methods[0];
frost$collections$Iterator* $tmp3750 = $tmp3748(((frost$collections$Iterable*) $tmp3746));
goto block4;
block4:;
ITable* $tmp3751 = $tmp3750->$class->itable;
while ($tmp3751->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3751 = $tmp3751->next;
}
$fn3753 $tmp3752 = $tmp3751->methods[0];
frost$core$Bit $tmp3754 = $tmp3752($tmp3750);
bool $tmp3755 = $tmp3754.value;
if ($tmp3755) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3756 = $tmp3750->$class->itable;
while ($tmp3756->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3756 = $tmp3756->next;
}
$fn3758 $tmp3757 = $tmp3756->methods[1];
frost$core$Object* $tmp3759 = $tmp3757($tmp3750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3759)));
org$frostlang$frostc$ASTNode* $tmp3760 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3760));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp3759);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:867
org$frostlang$frostc$ASTNode* $tmp3761 = *(&local4);
frost$core$Int64* $tmp3762 = &$tmp3761->$rawValue;
frost$core$Int64 $tmp3763 = *$tmp3762;
frost$core$Int64 $tmp3764 = (frost$core$Int64) {33u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:868:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3765 = $tmp3763.value;
int64_t $tmp3766 = $tmp3764.value;
bool $tmp3767 = $tmp3765 == $tmp3766;
frost$core$Bit $tmp3768 = (frost$core$Bit) {$tmp3767};
bool $tmp3769 = $tmp3768.value;
if ($tmp3769) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp3770 = (org$frostlang$frostc$Position*) ($tmp3761->$data + 0);
org$frostlang$frostc$Position $tmp3771 = *$tmp3770;
frost$core$String** $tmp3772 = (frost$core$String**) ($tmp3761->$data + 24);
frost$core$String* $tmp3773 = *$tmp3772;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
frost$core$String* $tmp3774 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
*(&local5) = $tmp3773;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:869
frost$core$String* $tmp3775 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
frost$core$String* $tmp3776 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
*(&local2) = $tmp3775;
frost$core$String* $tmp3777 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp3778 = (frost$core$Int64) {52u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:871:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3779 = $tmp3763.value;
int64_t $tmp3780 = $tmp3778.value;
bool $tmp3781 = $tmp3779 == $tmp3780;
frost$core$Bit $tmp3782 = (frost$core$Bit) {$tmp3781};
bool $tmp3783 = $tmp3782.value;
if ($tmp3783) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp3784 = (org$frostlang$frostc$Position*) ($tmp3761->$data + 0);
org$frostlang$frostc$Position $tmp3785 = *$tmp3784;
frost$core$String** $tmp3786 = (frost$core$String**) ($tmp3761->$data + 24);
frost$core$String* $tmp3787 = *$tmp3786;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
frost$core$String* $tmp3788 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
*(&local6) = $tmp3787;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:872
frost$core$String* $tmp3789 = *(&local6);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from Scanner.frost:872:60
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.stub:229:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp3790 = &$tmp3789->_length;
frost$core$Int64 $tmp3791 = *$tmp3790;
frost$core$String$Index $tmp3792 = frost$core$String$Index$init$frost$core$Int64($tmp3791);
frost$core$String$Index$nullable $tmp3793 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp3789, &$s3794, $tmp3792);
*(&local7) = $tmp3793;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:873
*(&local8) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:874
frost$core$String$Index$nullable $tmp3795 = *(&local7);
frost$core$Bit $tmp3796 = (frost$core$Bit) {$tmp3795.nonnull};
bool $tmp3797 = $tmp3796.value;
if ($tmp3797) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:875
frost$core$String* $tmp3798 = *(&local6);
frost$core$String* $tmp3799 = *(&local6);
frost$core$String$Index$nullable $tmp3800 = *(&local7);
frost$core$String$Index $tmp3801 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp3799, ((frost$core$String$Index) $tmp3800.value));
frost$core$Bit $tmp3802 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp3803 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp3801, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp3802);
frost$core$String* $tmp3804 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp3798, $tmp3803);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
frost$core$String* $tmp3805 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3805));
*(&local8) = $tmp3804;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:878
frost$core$String* $tmp3806 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3806));
frost$core$String* $tmp3807 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
*(&local8) = $tmp3806;
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:880
frost$collections$HashMap* $tmp3808 = *(&local3);
frost$core$String* $tmp3809 = *(&local8);
frost$core$String* $tmp3810 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3808, ((frost$collections$Key*) $tmp3809), ((frost$core$Object*) $tmp3810));
frost$core$String* $tmp3811 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp3812 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block12:;
frost$core$Int64 $tmp3813 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:882:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3814 = $tmp3763.value;
int64_t $tmp3815 = $tmp3813.value;
bool $tmp3816 = $tmp3814 == $tmp3815;
frost$core$Bit $tmp3817 = (frost$core$Bit) {$tmp3816};
bool $tmp3818 = $tmp3817.value;
if ($tmp3818) goto block19; else goto block20;
block19:;
org$frostlang$frostc$Position* $tmp3819 = (org$frostlang$frostc$Position*) ($tmp3761->$data + 0);
org$frostlang$frostc$Position $tmp3820 = *$tmp3819;
*(&local9) = $tmp3820;
org$frostlang$frostc$ASTNode** $tmp3821 = (org$frostlang$frostc$ASTNode**) ($tmp3761->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3822 = *$tmp3821;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
org$frostlang$frostc$ASTNode* $tmp3823 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local10) = $tmp3822;
org$frostlang$frostc$FixedArray** $tmp3824 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3825 = *$tmp3824;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
org$frostlang$frostc$FixedArray* $tmp3826 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3826));
*(&local11) = $tmp3825;
org$frostlang$frostc$ClassDecl$Kind* $tmp3827 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp3761->$data + 40);
org$frostlang$frostc$ClassDecl$Kind $tmp3828 = *$tmp3827;
*(&local12) = $tmp3828;
frost$core$String** $tmp3829 = (frost$core$String**) ($tmp3761->$data + 48);
frost$core$String* $tmp3830 = *$tmp3829;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
frost$core$String* $tmp3831 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
*(&local13) = $tmp3830;
org$frostlang$frostc$FixedArray** $tmp3832 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3833 = *$tmp3832;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
org$frostlang$frostc$FixedArray* $tmp3834 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3834));
*(&local14) = $tmp3833;
org$frostlang$frostc$FixedArray** $tmp3835 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3836 = *$tmp3835;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
org$frostlang$frostc$FixedArray* $tmp3837 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
*(&local15) = $tmp3836;
org$frostlang$frostc$FixedArray** $tmp3838 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3839 = *$tmp3838;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
org$frostlang$frostc$FixedArray* $tmp3840 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
*(&local16) = $tmp3839;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:884
frost$collections$HashMap* $tmp3841 = *(&local3);
frost$core$String* $tmp3842 = *(&local2);
org$frostlang$frostc$Position $tmp3843 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3844 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3845 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3846 = *(&local12);
frost$core$String* $tmp3847 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3848 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3849 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3850 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3851 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3841), $tmp3842, $tmp3843, $tmp3844, $tmp3845, $tmp3846, $tmp3847, $tmp3848, $tmp3849, $tmp3850);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
org$frostlang$frostc$ClassDecl* $tmp3852 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3852));
*(&local17) = $tmp3851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:886
org$frostlang$frostc$ClassDecl* $tmp3853 = *(&local17);
frost$core$Bit $tmp3854 = (frost$core$Bit) {$tmp3853 != NULL};
bool $tmp3855 = $tmp3854.value;
if ($tmp3855) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:887
org$frostlang$frostc$ClassDecl* $tmp3856 = *(&local17);
frost$collections$Array* $tmp3857 = *(&local1);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:887:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T($tmp3857, ((frost$core$Object*) $tmp3856));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3858 = &$tmp3856->classes;
frost$collections$Array* $tmp3859 = *$tmp3858;
ITable* $tmp3860 = ((frost$collections$Iterable*) $tmp3859)->$class->itable;
while ($tmp3860->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3860 = $tmp3860->next;
}
$fn3862 $tmp3861 = $tmp3860->methods[0];
frost$collections$Iterator* $tmp3863 = $tmp3861(((frost$collections$Iterable*) $tmp3859));
goto block25;
block25:;
ITable* $tmp3864 = $tmp3863->$class->itable;
while ($tmp3864->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3864 = $tmp3864->next;
}
$fn3866 $tmp3865 = $tmp3864->methods[0];
frost$core$Bit $tmp3867 = $tmp3865($tmp3863);
bool $tmp3868 = $tmp3867.value;
if ($tmp3868) goto block27; else goto block26;
block26:;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3869 = $tmp3863->$class->itable;
while ($tmp3869->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3869 = $tmp3869->next;
}
$fn3871 $tmp3870 = $tmp3869->methods[1];
frost$core$Object* $tmp3872 = $tmp3870($tmp3863);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3872)));
org$frostlang$frostc$ClassDecl* $tmp3873 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3873));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) $tmp3872);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3874 = *(&local18);
// begin inline call to method org.frostlang.frostc.Scanner.addClass(cl:org.frostlang.frostc.ClassDecl, arr:frost.collections.Array<org.frostlang.frostc.ClassDecl>) from Scanner.frost:822:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:820
frost$collections$Array$add$frost$collections$Array$T($tmp3857, ((frost$core$Object*) $tmp3874));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:821
frost$collections$Array** $tmp3875 = &$tmp3874->classes;
frost$collections$Array* $tmp3876 = *$tmp3875;
ITable* $tmp3877 = ((frost$collections$Iterable*) $tmp3876)->$class->itable;
while ($tmp3877->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3877 = $tmp3877->next;
}
$fn3879 $tmp3878 = $tmp3877->methods[0];
frost$collections$Iterator* $tmp3880 = $tmp3878(((frost$collections$Iterable*) $tmp3876));
goto block29;
block29:;
ITable* $tmp3881 = $tmp3880->$class->itable;
while ($tmp3881->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3881 = $tmp3881->next;
}
$fn3883 $tmp3882 = $tmp3881->methods[0];
frost$core$Bit $tmp3884 = $tmp3882($tmp3880);
bool $tmp3885 = $tmp3884.value;
if ($tmp3885) goto block31; else goto block30;
block30:;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp3886 = $tmp3880->$class->itable;
while ($tmp3886->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3886 = $tmp3886->next;
}
$fn3888 $tmp3887 = $tmp3886->methods[1];
frost$core$Object* $tmp3889 = $tmp3887($tmp3880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp3889)));
org$frostlang$frostc$ClassDecl* $tmp3890 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3890));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) $tmp3889);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:822
org$frostlang$frostc$ClassDecl* $tmp3891 = *(&local19);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3891, $tmp3857);
frost$core$Frost$unref$frost$core$Object$Q($tmp3889);
org$frostlang$frostc$ClassDecl* $tmp3892 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block29;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
frost$core$Frost$unref$frost$core$Object$Q($tmp3872);
org$frostlang$frostc$ClassDecl* $tmp3893 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block25;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3863));
goto block23;
block23:;
org$frostlang$frostc$ClassDecl* $tmp3894 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3895 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3895));
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3896 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3897 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3897));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3898 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3899 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3900 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3900));
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block20:;
frost$core$Int64 $tmp3901 = (frost$core$Int64) {29u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:890:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp3902 = $tmp3763.value;
int64_t $tmp3903 = $tmp3901.value;
bool $tmp3904 = $tmp3902 == $tmp3903;
frost$core$Bit $tmp3905 = (frost$core$Bit) {$tmp3904};
bool $tmp3906 = $tmp3905.value;
if ($tmp3906) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp3907 = (org$frostlang$frostc$Position*) ($tmp3761->$data + 0);
org$frostlang$frostc$Position $tmp3908 = *$tmp3907;
*(&local20) = $tmp3908;
org$frostlang$frostc$ASTNode** $tmp3909 = (org$frostlang$frostc$ASTNode**) ($tmp3761->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3910 = *$tmp3909;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
org$frostlang$frostc$ASTNode* $tmp3911 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
*(&local21) = $tmp3910;
org$frostlang$frostc$FixedArray** $tmp3912 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 32);
org$frostlang$frostc$FixedArray* $tmp3913 = *$tmp3912;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
org$frostlang$frostc$FixedArray* $tmp3914 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3914));
*(&local22) = $tmp3913;
org$frostlang$frostc$MethodDecl$Kind* $tmp3915 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp3761->$data + 40);
org$frostlang$frostc$MethodDecl$Kind $tmp3916 = *$tmp3915;
*(&local23) = $tmp3916;
frost$core$String** $tmp3917 = (frost$core$String**) ($tmp3761->$data + 48);
frost$core$String* $tmp3918 = *$tmp3917;
*(&local24) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3918));
frost$core$String* $tmp3919 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
*(&local24) = $tmp3918;
org$frostlang$frostc$FixedArray** $tmp3920 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3921 = *$tmp3920;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
org$frostlang$frostc$FixedArray* $tmp3922 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
*(&local25) = $tmp3921;
org$frostlang$frostc$FixedArray** $tmp3923 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3924 = *$tmp3923;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3924));
org$frostlang$frostc$FixedArray* $tmp3925 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
*(&local26) = $tmp3924;
org$frostlang$frostc$ASTNode** $tmp3926 = (org$frostlang$frostc$ASTNode**) ($tmp3761->$data + 72);
org$frostlang$frostc$ASTNode* $tmp3927 = *$tmp3926;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
org$frostlang$frostc$ASTNode* $tmp3928 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local27) = $tmp3927;
org$frostlang$frostc$FixedArray** $tmp3929 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 80);
org$frostlang$frostc$FixedArray* $tmp3930 = *$tmp3929;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3930));
org$frostlang$frostc$FixedArray* $tmp3931 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3931));
*(&local28) = $tmp3930;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:892
org$frostlang$frostc$MethodDecl$Kind $tmp3932 = *(&local23);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3933;
$tmp3933 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3933->value = $tmp3932;
frost$core$Int64 $tmp3934 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:892:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp3935 = &(&local30)->$rawValue;
*$tmp3935 = $tmp3934;
org$frostlang$frostc$MethodDecl$Kind $tmp3936 = *(&local30);
*(&local29) = $tmp3936;
org$frostlang$frostc$MethodDecl$Kind $tmp3937 = *(&local29);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3938;
$tmp3938 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3938->value = $tmp3937;
ITable* $tmp3939 = ((frost$core$Equatable*) $tmp3933)->$class->itable;
while ($tmp3939->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3939 = $tmp3939->next;
}
$fn3941 $tmp3940 = $tmp3939->methods[0];
frost$core$Bit $tmp3942 = $tmp3940(((frost$core$Equatable*) $tmp3933), ((frost$core$Equatable*) $tmp3938));
bool $tmp3943 = $tmp3942.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3938)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3933)));
if ($tmp3943) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:893
org$frostlang$frostc$Position $tmp3944 = *(&local20);
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:893:38
frost$io$File** $tmp3945 = &param0->source;
frost$io$File* $tmp3946 = *$tmp3945;
frost$core$Bit $tmp3947 = (frost$core$Bit) {$tmp3946 != NULL};
bool $tmp3948 = $tmp3947.value;
if ($tmp3948) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp3949 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3950, $tmp3949, &$s3951);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp3952 = &param0->compiler;
frost$core$Weak* $tmp3953 = *$tmp3952;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp3954 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp3953);
bool $tmp3955 = $tmp3954.value;
if ($tmp3955) goto block42; else goto block43;
block43:;
frost$core$Int64 $tmp3956 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3957, $tmp3956);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp3958 = &$tmp3953->value;
frost$core$Object* $tmp3959 = *$tmp3958;
frost$core$Frost$ref$frost$core$Object$Q($tmp3959);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp3959), $tmp3944, &$s3960);
frost$core$Frost$unref$frost$core$Object$Q($tmp3959);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:894
org$frostlang$frostc$FixedArray* $tmp3961 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3962 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3963 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3964 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3964));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3965 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3965));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3966 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3966));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3967 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3759);
org$frostlang$frostc$ASTNode* $tmp3968 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:896
frost$collections$HashMap* $tmp3969 = *(&local3);
frost$core$String* $tmp3970 = *(&local2);
frost$collections$Array* $tmp3971 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3969), $tmp3970, ((frost$collections$List*) $tmp3971));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:897
*(&local31) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:898
frost$core$String* $tmp3972 = *(&local24);
frost$core$Bit $tmp3973 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3972, &$s3974);
bool $tmp3975 = $tmp3973.value;
if ($tmp3975) goto block44; else goto block46;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:899
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3976));
frost$core$String* $tmp3977 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
*(&local31) = &$s3978;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:900
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3979 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3979);
*(&local32) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
frost$collections$Array* $tmp3980 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local32) = $tmp3979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:901
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3981 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3981);
*(&local33) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3981));
frost$collections$Array* $tmp3982 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
*(&local33) = $tmp3981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3981));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:902
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3983 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3983);
*(&local34) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
frost$collections$Array* $tmp3984 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
*(&local34) = $tmp3983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:903
org$frostlang$frostc$FixedArray* $tmp3985 = *(&local26);
ITable* $tmp3986 = ((frost$collections$Iterable*) $tmp3985)->$class->itable;
while ($tmp3986->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3986 = $tmp3986->next;
}
$fn3988 $tmp3987 = $tmp3986->methods[0];
frost$collections$Iterator* $tmp3989 = $tmp3987(((frost$collections$Iterable*) $tmp3985));
goto block47;
block47:;
ITable* $tmp3990 = $tmp3989->$class->itable;
while ($tmp3990->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3990 = $tmp3990->next;
}
$fn3992 $tmp3991 = $tmp3990->methods[0];
frost$core$Bit $tmp3993 = $tmp3991($tmp3989);
bool $tmp3994 = $tmp3993.value;
if ($tmp3994) goto block49; else goto block48;
block48:;
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3995 = $tmp3989->$class->itable;
while ($tmp3995->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3995 = $tmp3995->next;
}
$fn3997 $tmp3996 = $tmp3995->methods[1];
frost$core$Object* $tmp3998 = $tmp3996($tmp3989);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3998)));
org$frostlang$frostc$ASTNode* $tmp3999 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3999));
*(&local35) = ((org$frostlang$frostc$ASTNode*) $tmp3998);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:904
org$frostlang$frostc$ASTNode* $tmp4000 = *(&local35);
frost$core$Int64* $tmp4001 = &$tmp4000->$rawValue;
frost$core$Int64 $tmp4002 = *$tmp4001;
frost$core$Int64 $tmp4003 = (frost$core$Int64) {34u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:905:53
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp4004 = $tmp4002.value;
int64_t $tmp4005 = $tmp4003.value;
bool $tmp4006 = $tmp4004 == $tmp4005;
frost$core$Bit $tmp4007 = (frost$core$Bit) {$tmp4006};
bool $tmp4008 = $tmp4007.value;
if ($tmp4008) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Position* $tmp4009 = (org$frostlang$frostc$Position*) ($tmp4000->$data + 0);
org$frostlang$frostc$Position $tmp4010 = *$tmp4009;
*(&local36) = $tmp4010;
frost$core$String** $tmp4011 = (frost$core$String**) ($tmp4000->$data + 24);
frost$core$String* $tmp4012 = *$tmp4011;
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
frost$core$String* $tmp4013 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
*(&local37) = $tmp4012;
org$frostlang$frostc$ASTNode** $tmp4014 = (org$frostlang$frostc$ASTNode**) ($tmp4000->$data + 32);
org$frostlang$frostc$ASTNode* $tmp4015 = *$tmp4014;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
org$frostlang$frostc$ASTNode* $tmp4016 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
*(&local38) = $tmp4015;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:906
frost$collections$Array* $tmp4017 = *(&local32);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$MethodDecl$Parameter));
org$frostlang$frostc$MethodDecl$Parameter* $tmp4018 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp4019 = *(&local37);
org$frostlang$frostc$ASTNode* $tmp4020 = *(&local38);
org$frostlang$frostc$Type* $tmp4021 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4020);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp4018, $tmp4019, $tmp4021);
frost$collections$Array$add$frost$collections$Array$T($tmp4017, ((frost$core$Object*) $tmp4018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4018));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:908
frost$collections$Array* $tmp4022 = *(&local34);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4023 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4024 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp4025 = *(&local36);
frost$core$String* $tmp4026 = *(&local37);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4023, $tmp4024, $tmp4025, $tmp4026);
frost$collections$Array$add$frost$collections$Array$T($tmp4022, ((frost$core$Object*) $tmp4023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
org$frostlang$frostc$ASTNode* $tmp4027 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp4028 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local37) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp3998);
org$frostlang$frostc$ASTNode* $tmp4029 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:911
frost$core$Int64 $tmp4030 = (frost$core$Int64) {911u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4031, $tmp4030);
abort(); // unreachable
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:915
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4032 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4033 = (frost$core$Int64) {9u};
org$frostlang$frostc$Position $tmp4034 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4035 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4036 = (frost$core$Int64) {22u};
org$frostlang$frostc$Position $tmp4037 = *(&local20);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4035, $tmp4036, $tmp4037, &$s4038);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp4039 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp4039);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4032, $tmp4033, $tmp4034, $tmp4035, $tmp4039);
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
org$frostlang$frostc$ASTNode* $tmp4040 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
*(&local39) = $tmp4032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:918
frost$collections$Array* $tmp4041 = *(&local33);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4042 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4043 = (frost$core$Int64) {9u};
org$frostlang$frostc$Position $tmp4044 = *(&local20);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4045 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4046 = (frost$core$Int64) {16u};
org$frostlang$frostc$Position $tmp4047 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4048 = *(&local39);
frost$core$String* $tmp4049 = *(&local31);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4045, $tmp4046, $tmp4047, $tmp4048, $tmp4049);
frost$collections$Array* $tmp4050 = *(&local34);
org$frostlang$frostc$FixedArray* $tmp4051 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4050);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4042, $tmp4043, $tmp4044, $tmp4045, $tmp4051);
frost$collections$Array$add$frost$collections$Array$T($tmp4041, ((frost$core$Object*) $tmp4042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4051));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4042));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:921
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:922
org$frostlang$frostc$ASTNode* $tmp4052 = *(&local27);
frost$core$Bit $tmp4053 = (frost$core$Bit) {$tmp4052 != NULL};
bool $tmp4054 = $tmp4053.value;
if ($tmp4054) goto block54; else goto block56;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:923
org$frostlang$frostc$ASTNode* $tmp4055 = *(&local27);
org$frostlang$frostc$Type* $tmp4056 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp4055);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
org$frostlang$frostc$Type* $tmp4057 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
*(&local40) = $tmp4056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
goto block55;
block56:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:926
frost$core$Weak** $tmp4058 = &param0->compiler;
frost$core$Weak* $tmp4059 = *$tmp4058;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:926:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4060 = &$tmp4059->_valid;
frost$core$Bit $tmp4061 = *$tmp4060;
bool $tmp4062 = $tmp4061.value;
if ($tmp4062) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp4063 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4064, $tmp4063);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4065 = &$tmp4059->value;
frost$core$Object* $tmp4066 = *$tmp4065;
frost$core$Frost$ref$frost$core$Object$Q($tmp4066);
org$frostlang$frostc$Type** $tmp4067 = &((org$frostlang$frostc$Compiler*) $tmp4066)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp4068 = *$tmp4067;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
org$frostlang$frostc$Type* $tmp4069 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4069));
*(&local40) = $tmp4068;
frost$core$Frost$unref$frost$core$Object$Q($tmp4066);
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:928
FROST_ASSERT(144 == sizeof(org$frostlang$frostc$MethodDecl));
org$frostlang$frostc$MethodDecl* $tmp4070 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp4071 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4072 = *$tmp4071;
org$frostlang$frostc$Position $tmp4073 = org$frostlang$frostc$Position$init();
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Annotations));
org$frostlang$frostc$Annotations* $tmp4074 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp4075 = (frost$core$Int64) {16u};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp4074, $tmp4075);
frost$core$Int64 $tmp4076 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from Scanner.frost:929:93
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp4077 = &(&local42)->$rawValue;
*$tmp4077 = $tmp4076;
org$frostlang$frostc$MethodDecl$Kind $tmp4078 = *(&local42);
*(&local41) = $tmp4078;
org$frostlang$frostc$MethodDecl$Kind $tmp4079 = *(&local41);
frost$collections$Array* $tmp4080 = *(&local32);
org$frostlang$frostc$Type* $tmp4081 = *(&local40);
frost$collections$Array* $tmp4082 = *(&local33);
org$frostlang$frostc$FixedArray* $tmp4083 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4082);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp4070, $tmp4072, $tmp4073, ((frost$core$String*) NULL), $tmp4074, $tmp4079, &$s4084, ((frost$collections$Array*) NULL), $tmp4080, $tmp4081, $tmp4083);
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
org$frostlang$frostc$MethodDecl* $tmp4085 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
*(&local43) = $tmp4070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4074));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:932
org$frostlang$frostc$ClassDecl** $tmp4086 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4087 = *$tmp4086;
frost$collections$Array** $tmp4088 = &$tmp4087->methods;
frost$collections$Array* $tmp4089 = *$tmp4088;
org$frostlang$frostc$MethodDecl* $tmp4090 = *(&local43);
frost$collections$Array$add$frost$collections$Array$T($tmp4089, ((frost$core$Object*) $tmp4090));
org$frostlang$frostc$MethodDecl* $tmp4091 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
*(&local43) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp4092 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp4093 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4094 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
*(&local34) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4095 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4095));
*(&local33) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp4096 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
*(&local32) = ((frost$collections$Array*) NULL);
goto block45;
block46:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:935
frost$core$String* $tmp4097 = *(&local24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
frost$core$String* $tmp4098 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4098));
*(&local31) = $tmp4097;
goto block45;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:937
frost$core$Weak** $tmp4099 = &param0->compiler;
frost$core$Weak* $tmp4100 = *$tmp4099;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:937:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4101 = &$tmp4100->_valid;
frost$core$Bit $tmp4102 = *$tmp4101;
bool $tmp4103 = $tmp4102.value;
if ($tmp4103) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp4104 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4105, $tmp4104);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4106 = &$tmp4100->value;
frost$core$Object* $tmp4107 = *$tmp4106;
frost$core$Frost$ref$frost$core$Object$Q($tmp4107);
frost$collections$Stack** $tmp4108 = &((org$frostlang$frostc$Compiler*) $tmp4107)->currentClass;
frost$collections$Stack* $tmp4109 = *$tmp4108;
org$frostlang$frostc$ClassDecl** $tmp4110 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4111 = *$tmp4110;
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Scanner.frost:937:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:16
frost$collections$Array** $tmp4112 = &$tmp4109->contents;
frost$collections$Array* $tmp4113 = *$tmp4112;
frost$collections$Array$add$frost$collections$Array$T($tmp4113, ((frost$core$Object*) $tmp4111));
frost$core$Frost$unref$frost$core$Object$Q($tmp4107);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:938
org$frostlang$frostc$ClassDecl** $tmp4114 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4115 = *$tmp4114;
org$frostlang$frostc$Position $tmp4116 = *(&local20);
org$frostlang$frostc$ASTNode* $tmp4117 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp4118 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind $tmp4119 = *(&local23);
frost$core$String* $tmp4120 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp4121 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp4122 = *(&local26);
org$frostlang$frostc$ASTNode* $tmp4123 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp4124 = *(&local28);
org$frostlang$frostc$MethodDecl* $tmp4125 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp4115, $tmp4116, $tmp4117, $tmp4118, $tmp4119, $tmp4120, $tmp4121, $tmp4122, $tmp4123, $tmp4124);
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
org$frostlang$frostc$MethodDecl* $tmp4126 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4126));
*(&local44) = $tmp4125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4125));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:940
org$frostlang$frostc$MethodDecl* $tmp4127 = *(&local44);
org$frostlang$frostc$Annotations** $tmp4128 = &$tmp4127->annotations;
org$frostlang$frostc$Annotations* $tmp4129 = *$tmp4128;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:940:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp4130 = &$tmp4129->flags;
frost$core$Int64 $tmp4131 = *$tmp4130;
frost$core$Int64 $tmp4132 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp4133 = $tmp4131.value;
int64_t $tmp4134 = $tmp4132.value;
int64_t $tmp4135 = $tmp4133 & $tmp4134;
frost$core$Int64 $tmp4136 = (frost$core$Int64) {$tmp4135};
frost$core$Int64 $tmp4137 = (frost$core$Int64) {0u};
int64_t $tmp4138 = $tmp4136.value;
int64_t $tmp4139 = $tmp4137.value;
bool $tmp4140 = $tmp4138 != $tmp4139;
frost$core$Bit $tmp4141 = (frost$core$Bit) {$tmp4140};
bool $tmp4142 = $tmp4141.value;
if ($tmp4142) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:941
org$frostlang$frostc$MethodDecl* $tmp4143 = *(&local44);
org$frostlang$frostc$Position* $tmp4144 = &((org$frostlang$frostc$Symbol*) $tmp4143)->position;
org$frostlang$frostc$Position $tmp4145 = *$tmp4144;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:941:38
frost$io$File** $tmp4146 = &param0->source;
frost$io$File* $tmp4147 = *$tmp4146;
frost$core$Bit $tmp4148 = (frost$core$Bit) {$tmp4147 != NULL};
bool $tmp4149 = $tmp4148.value;
if ($tmp4149) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp4150 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4151, $tmp4150, &$s4152);
abort(); // unreachable
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp4153 = &param0->compiler;
frost$core$Weak* $tmp4154 = *$tmp4153;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp4155 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4154);
bool $tmp4156 = $tmp4155.value;
if ($tmp4156) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp4157 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4158, $tmp4157);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4159 = &$tmp4154->value;
frost$core$Object* $tmp4160 = *$tmp4159;
frost$core$Frost$ref$frost$core$Object$Q($tmp4160);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4160), $tmp4145, &$s4161);
frost$core$Frost$unref$frost$core$Object$Q($tmp4160);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:943
org$frostlang$frostc$MethodDecl* $tmp4162 = *(&local44);
org$frostlang$frostc$Annotations** $tmp4163 = &$tmp4162->annotations;
org$frostlang$frostc$Annotations* $tmp4164 = *$tmp4163;
frost$core$Int64* $tmp4165 = &$tmp4164->flags;
frost$core$Int64 $tmp4166 = *$tmp4165;
frost$core$Int64 $tmp4167 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.!!():frost.core.Int64 from Scanner.frost:943:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:118
int64_t $tmp4168 = $tmp4167.value;
int64_t $tmp4169 = !$tmp4168;
frost$core$Int64 $tmp4170 = (frost$core$Int64) {$tmp4169};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Scanner.frost:943:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp4171 = $tmp4166.value;
int64_t $tmp4172 = $tmp4170.value;
int64_t $tmp4173 = $tmp4171 & $tmp4172;
frost$core$Int64 $tmp4174 = (frost$core$Int64) {$tmp4173};
frost$core$Int64* $tmp4175 = &$tmp4164->flags;
*$tmp4175 = $tmp4174;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:945
frost$core$Weak** $tmp4176 = &param0->compiler;
frost$core$Weak* $tmp4177 = *$tmp4176;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:945:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4178 = &$tmp4177->_valid;
frost$core$Bit $tmp4179 = *$tmp4178;
bool $tmp4180 = $tmp4179.value;
if ($tmp4180) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp4181 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4182, $tmp4181);
abort(); // unreachable
block81:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4183 = &$tmp4177->value;
frost$core$Object* $tmp4184 = *$tmp4183;
frost$core$Frost$ref$frost$core$Object$Q($tmp4184);
frost$collections$Stack** $tmp4185 = &((org$frostlang$frostc$Compiler*) $tmp4184)->currentClass;
frost$collections$Stack* $tmp4186 = *$tmp4185;
frost$core$Int64 $tmp4187 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Scanner.frost:945:57
frost$core$Int64 $tmp4188 = (frost$core$Int64) {0u};
int64_t $tmp4189 = $tmp4187.value;
int64_t $tmp4190 = $tmp4188.value;
bool $tmp4191 = $tmp4189 >= $tmp4190;
frost$core$Bit $tmp4192 = (frost$core$Bit) {$tmp4191};
bool $tmp4193 = $tmp4192.value;
if ($tmp4193) goto block86; else goto block85;
block86:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp4194 = &$tmp4186->contents;
frost$collections$Array* $tmp4195 = *$tmp4194;
ITable* $tmp4196 = ((frost$collections$CollectionView*) $tmp4195)->$class->itable;
while ($tmp4196->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4196 = $tmp4196->next;
}
$fn4198 $tmp4197 = $tmp4196->methods[0];
frost$core$Int64 $tmp4199 = $tmp4197(((frost$collections$CollectionView*) $tmp4195));
int64_t $tmp4200 = $tmp4187.value;
int64_t $tmp4201 = $tmp4199.value;
bool $tmp4202 = $tmp4200 < $tmp4201;
frost$core$Bit $tmp4203 = (frost$core$Bit) {$tmp4202};
bool $tmp4204 = $tmp4203.value;
if ($tmp4204) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp4205 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4206, $tmp4205, &$s4207);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp4208 = &$tmp4186->contents;
frost$collections$Array* $tmp4209 = *$tmp4208;
ITable* $tmp4210 = ((frost$collections$CollectionView*) $tmp4209)->$class->itable;
while ($tmp4210->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4210 = $tmp4210->next;
}
$fn4212 $tmp4211 = $tmp4210->methods[0];
frost$core$Int64 $tmp4213 = $tmp4211(((frost$collections$CollectionView*) $tmp4209));
int64_t $tmp4214 = $tmp4213.value;
int64_t $tmp4215 = $tmp4187.value;
bool $tmp4216 = $tmp4214 > $tmp4215;
frost$core$Bit $tmp4217 = (frost$core$Bit) {$tmp4216};
bool $tmp4218 = $tmp4217.value;
if ($tmp4218) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp4219 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4220, $tmp4219);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp4221 = &$tmp4186->contents;
frost$collections$Array* $tmp4222 = *$tmp4221;
frost$collections$Array** $tmp4223 = &$tmp4186->contents;
frost$collections$Array* $tmp4224 = *$tmp4223;
ITable* $tmp4225 = ((frost$collections$CollectionView*) $tmp4224)->$class->itable;
while ($tmp4225->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4225 = $tmp4225->next;
}
$fn4227 $tmp4226 = $tmp4225->methods[0];
frost$core$Int64 $tmp4228 = $tmp4226(((frost$collections$CollectionView*) $tmp4224));
frost$core$Int64 $tmp4229 = (frost$core$Int64) {1u};
int64_t $tmp4230 = $tmp4228.value;
int64_t $tmp4231 = $tmp4229.value;
int64_t $tmp4232 = $tmp4230 - $tmp4231;
frost$core$Int64 $tmp4233 = (frost$core$Int64) {$tmp4232};
int64_t $tmp4234 = $tmp4233.value;
int64_t $tmp4235 = $tmp4187.value;
int64_t $tmp4236 = $tmp4234 - $tmp4235;
frost$core$Int64 $tmp4237 = (frost$core$Int64) {$tmp4236};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp4238 = (frost$core$Int64) {0u};
int64_t $tmp4239 = $tmp4237.value;
int64_t $tmp4240 = $tmp4238.value;
bool $tmp4241 = $tmp4239 >= $tmp4240;
frost$core$Bit $tmp4242 = (frost$core$Bit) {$tmp4241};
bool $tmp4243 = $tmp4242.value;
if ($tmp4243) goto block93; else goto block92;
block93:;
ITable* $tmp4244 = ((frost$collections$CollectionView*) $tmp4222)->$class->itable;
while ($tmp4244->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4244 = $tmp4244->next;
}
$fn4246 $tmp4245 = $tmp4244->methods[0];
frost$core$Int64 $tmp4247 = $tmp4245(((frost$collections$CollectionView*) $tmp4222));
int64_t $tmp4248 = $tmp4237.value;
int64_t $tmp4249 = $tmp4247.value;
bool $tmp4250 = $tmp4248 < $tmp4249;
frost$core$Bit $tmp4251 = (frost$core$Bit) {$tmp4250};
bool $tmp4252 = $tmp4251.value;
if ($tmp4252) goto block91; else goto block92;
block92:;
frost$core$Int64 $tmp4253 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4254, $tmp4253, &$s4255);
abort(); // unreachable
block91:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp4256 = &$tmp4222->data;
frost$core$Object** $tmp4257 = *$tmp4256;
int64_t $tmp4258 = $tmp4237.value;
frost$core$Object* $tmp4259 = $tmp4257[$tmp4258];
frost$core$Frost$ref$frost$core$Object$Q($tmp4259);
frost$core$Frost$ref$frost$core$Object$Q($tmp4259);
frost$core$Frost$unref$frost$core$Object$Q($tmp4259);
org$frostlang$frostc$ClassDecl** $tmp4260 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4261 = *$tmp4260;
bool $tmp4262 = ((org$frostlang$frostc$ClassDecl*) $tmp4259) == $tmp4261;
frost$core$Bit $tmp4263 = (frost$core$Bit) {$tmp4262};
bool $tmp4264 = $tmp4263.value;
if ($tmp4264) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp4265 = (frost$core$Int64) {945u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4266, $tmp4265);
abort(); // unreachable
block94:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4259);
frost$core$Frost$unref$frost$core$Object$Q($tmp4184);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:946
frost$core$Weak** $tmp4267 = &param0->compiler;
frost$core$Weak* $tmp4268 = *$tmp4267;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:946:29
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp4269 = &$tmp4268->_valid;
frost$core$Bit $tmp4270 = *$tmp4269;
bool $tmp4271 = $tmp4270.value;
if ($tmp4271) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp4272 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4273, $tmp4272);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4274 = &$tmp4268->value;
frost$core$Object* $tmp4275 = *$tmp4274;
frost$core$Frost$ref$frost$core$Object$Q($tmp4275);
frost$collections$Stack** $tmp4276 = &((org$frostlang$frostc$Compiler*) $tmp4275)->currentClass;
frost$collections$Stack* $tmp4277 = *$tmp4276;
frost$core$Object* $tmp4278 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp4277);
frost$core$Frost$unref$frost$core$Object$Q($tmp4278);
frost$core$Frost$unref$frost$core$Object$Q($tmp4275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:947
org$frostlang$frostc$ClassDecl** $tmp4279 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4280 = *$tmp4279;
frost$collections$Array** $tmp4281 = &$tmp4280->methods;
frost$collections$Array* $tmp4282 = *$tmp4281;
org$frostlang$frostc$MethodDecl* $tmp4283 = *(&local44);
frost$collections$Array$add$frost$collections$Array$T($tmp4282, ((frost$core$Object*) $tmp4283));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:948
org$frostlang$frostc$ClassDecl** $tmp4284 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4285 = *$tmp4284;
org$frostlang$frostc$SymbolTable** $tmp4286 = &$tmp4285->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4287 = *$tmp4286;
org$frostlang$frostc$MethodDecl* $tmp4288 = *(&local44);
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Scanner.frost:948:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
frost$core$String** $tmp4289 = &((org$frostlang$frostc$Symbol*) $tmp4288)->name;
frost$core$String* $tmp4290 = *$tmp4289;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String($tmp4287, ((org$frostlang$frostc$Symbol*) $tmp4288), $tmp4290);
org$frostlang$frostc$MethodDecl* $tmp4291 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4291));
*(&local44) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp4292 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
*(&local31) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4293 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4293));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4294 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4295 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp4296 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4297 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
*(&local24) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp4298 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4299 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block33:;
frost$core$Int64 $tmp4300 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Scanner.frost:950:37
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp4301 = $tmp3763.value;
int64_t $tmp4302 = $tmp4300.value;
bool $tmp4303 = $tmp4301 == $tmp4302;
frost$core$Bit $tmp4304 = (frost$core$Bit) {$tmp4303};
bool $tmp4305 = $tmp4304.value;
if ($tmp4305) goto block101; else goto block102;
block101:;
org$frostlang$frostc$Position* $tmp4306 = (org$frostlang$frostc$Position*) ($tmp3761->$data + 0);
org$frostlang$frostc$Position $tmp4307 = *$tmp4306;
*(&local45) = $tmp4307;
org$frostlang$frostc$ASTNode** $tmp4308 = (org$frostlang$frostc$ASTNode**) ($tmp3761->$data + 24);
org$frostlang$frostc$ASTNode* $tmp4309 = *$tmp4308;
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
org$frostlang$frostc$ASTNode* $tmp4310 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
*(&local46) = $tmp4309;
org$frostlang$frostc$FixedArray** $tmp4311 = (org$frostlang$frostc$FixedArray**) ($tmp3761->$data + 32);
org$frostlang$frostc$FixedArray* $tmp4312 = *$tmp4311;
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4312));
org$frostlang$frostc$FixedArray* $tmp4313 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
*(&local47) = $tmp4312;
org$frostlang$frostc$ASTNode** $tmp4314 = (org$frostlang$frostc$ASTNode**) ($tmp3761->$data + 40);
org$frostlang$frostc$ASTNode* $tmp4315 = *$tmp4314;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
org$frostlang$frostc$ASTNode* $tmp4316 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4316));
*(&local48) = $tmp4315;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:951
frost$collections$HashMap* $tmp4317 = *(&local3);
frost$core$String* $tmp4318 = *(&local2);
frost$collections$Array* $tmp4319 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp4317), $tmp4318, ((frost$collections$List*) $tmp4319));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:952
org$frostlang$frostc$ClassDecl** $tmp4320 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4321 = *$tmp4320;
frost$collections$Array** $tmp4322 = &$tmp4321->fields;
frost$collections$Array* $tmp4323 = *$tmp4322;
ITable* $tmp4324 = ((frost$collections$CollectionView*) $tmp4323)->$class->itable;
while ($tmp4324->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4324 = $tmp4324->next;
}
$fn4326 $tmp4325 = $tmp4324->methods[0];
frost$core$Int64 $tmp4327 = $tmp4325(((frost$collections$CollectionView*) $tmp4323));
*(&local49) = $tmp4327;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:953
org$frostlang$frostc$ClassDecl** $tmp4328 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4329 = *$tmp4328;
org$frostlang$frostc$Position $tmp4330 = *(&local45);
org$frostlang$frostc$ASTNode* $tmp4331 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp4332 = *(&local47);
org$frostlang$frostc$ASTNode* $tmp4333 = *(&local48);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp4329, $tmp4330, $tmp4331, $tmp4332, $tmp4333);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:954
frost$core$Int64 $tmp4334 = *(&local49);
org$frostlang$frostc$ClassDecl** $tmp4335 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4336 = *$tmp4335;
frost$collections$Array** $tmp4337 = &$tmp4336->fields;
frost$collections$Array* $tmp4338 = *$tmp4337;
ITable* $tmp4339 = ((frost$collections$CollectionView*) $tmp4338)->$class->itable;
while ($tmp4339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4339 = $tmp4339->next;
}
$fn4341 $tmp4340 = $tmp4339->methods[0];
frost$core$Int64 $tmp4342 = $tmp4340(((frost$collections$CollectionView*) $tmp4338));
frost$core$Bit $tmp4343 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp4344 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp4334, $tmp4342, $tmp4343);
frost$core$Int64 $tmp4345 = $tmp4344.min;
*(&local50) = $tmp4345;
frost$core$Int64 $tmp4346 = $tmp4344.max;
frost$core$Bit $tmp4347 = $tmp4344.inclusive;
bool $tmp4348 = $tmp4347.value;
frost$core$Int64 $tmp4349 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp4350 = $tmp4349.value;
frost$core$UInt64 $tmp4351 = (frost$core$UInt64) {((uint64_t) $tmp4350)};
if ($tmp4348) goto block108; else goto block109;
block108:;
int64_t $tmp4352 = $tmp4345.value;
int64_t $tmp4353 = $tmp4346.value;
bool $tmp4354 = $tmp4352 <= $tmp4353;
frost$core$Bit $tmp4355 = (frost$core$Bit) {$tmp4354};
bool $tmp4356 = $tmp4355.value;
if ($tmp4356) goto block105; else goto block106;
block109:;
int64_t $tmp4357 = $tmp4345.value;
int64_t $tmp4358 = $tmp4346.value;
bool $tmp4359 = $tmp4357 < $tmp4358;
frost$core$Bit $tmp4360 = (frost$core$Bit) {$tmp4359};
bool $tmp4361 = $tmp4360.value;
if ($tmp4361) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:955
org$frostlang$frostc$ClassDecl** $tmp4362 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4363 = *$tmp4362;
frost$collections$Array** $tmp4364 = &$tmp4363->fields;
frost$collections$Array* $tmp4365 = *$tmp4364;
frost$core$Int64 $tmp4366 = *(&local50);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Scanner.frost:955:62
frost$core$Int64 $tmp4367 = (frost$core$Int64) {0u};
int64_t $tmp4368 = $tmp4366.value;
int64_t $tmp4369 = $tmp4367.value;
bool $tmp4370 = $tmp4368 >= $tmp4369;
frost$core$Bit $tmp4371 = (frost$core$Bit) {$tmp4370};
bool $tmp4372 = $tmp4371.value;
if ($tmp4372) goto block113; else goto block112;
block113:;
ITable* $tmp4373 = ((frost$collections$CollectionView*) $tmp4365)->$class->itable;
while ($tmp4373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4373 = $tmp4373->next;
}
$fn4375 $tmp4374 = $tmp4373->methods[0];
frost$core$Int64 $tmp4376 = $tmp4374(((frost$collections$CollectionView*) $tmp4365));
int64_t $tmp4377 = $tmp4366.value;
int64_t $tmp4378 = $tmp4376.value;
bool $tmp4379 = $tmp4377 < $tmp4378;
frost$core$Bit $tmp4380 = (frost$core$Bit) {$tmp4379};
bool $tmp4381 = $tmp4380.value;
if ($tmp4381) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp4382 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4383, $tmp4382, &$s4384);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp4385 = &$tmp4365->data;
frost$core$Object** $tmp4386 = *$tmp4385;
int64_t $tmp4387 = $tmp4366.value;
frost$core$Object* $tmp4388 = $tmp4386[$tmp4387];
frost$core$Frost$ref$frost$core$Object$Q($tmp4388);
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4388)));
org$frostlang$frostc$FieldDecl* $tmp4389 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) $tmp4388);
frost$core$Frost$unref$frost$core$Object$Q($tmp4388);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:956
org$frostlang$frostc$FieldDecl* $tmp4390 = *(&local51);
org$frostlang$frostc$FieldDecl$Kind* $tmp4391 = &$tmp4390->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp4392 = *$tmp4391;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4393;
$tmp4393 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4393->value = $tmp4392;
frost$core$Int64 $tmp4394 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from Scanner.frost:956:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp4395 = &(&local53)->$rawValue;
*$tmp4395 = $tmp4394;
org$frostlang$frostc$FieldDecl$Kind $tmp4396 = *(&local53);
*(&local52) = $tmp4396;
org$frostlang$frostc$FieldDecl$Kind $tmp4397 = *(&local52);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp4398;
$tmp4398 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp4398->value = $tmp4397;
ITable* $tmp4399 = ((frost$core$Equatable*) $tmp4393)->$class->itable;
while ($tmp4399->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4399 = $tmp4399->next;
}
$fn4401 $tmp4400 = $tmp4399->methods[1];
frost$core$Bit $tmp4402 = $tmp4400(((frost$core$Equatable*) $tmp4393), ((frost$core$Equatable*) $tmp4398));
bool $tmp4403 = $tmp4402.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4398)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4393)));
if ($tmp4403) goto block116; else goto block115;
block116:;
org$frostlang$frostc$FieldDecl* $tmp4404 = *(&local51);
org$frostlang$frostc$Annotations** $tmp4405 = &$tmp4404->annotations;
org$frostlang$frostc$Annotations* $tmp4406 = *$tmp4405;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Scanner.frost:957:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:119
frost$core$Int64* $tmp4407 = &$tmp4406->flags;
frost$core$Int64 $tmp4408 = *$tmp4407;
frost$core$Int64 $tmp4409 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:119:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:123
int64_t $tmp4410 = $tmp4408.value;
int64_t $tmp4411 = $tmp4409.value;
int64_t $tmp4412 = $tmp4410 & $tmp4411;
frost$core$Int64 $tmp4413 = (frost$core$Int64) {$tmp4412};
frost$core$Int64 $tmp4414 = (frost$core$Int64) {0u};
int64_t $tmp4415 = $tmp4413.value;
int64_t $tmp4416 = $tmp4414.value;
bool $tmp4417 = $tmp4415 != $tmp4416;
frost$core$Bit $tmp4418 = (frost$core$Bit) {$tmp4417};
bool $tmp4419 = $tmp4418.value;
if ($tmp4419) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:958
org$frostlang$frostc$FieldDecl* $tmp4420 = *(&local51);
org$frostlang$frostc$Position* $tmp4421 = &((org$frostlang$frostc$Symbol*) $tmp4420)->position;
org$frostlang$frostc$Position $tmp4422 = *$tmp4421;
// begin inline call to method org.frostlang.frostc.Scanner.error(position:org.frostlang.frostc.Position, msg:frost.core.String) from Scanner.frost:958:42
frost$io$File** $tmp4423 = &param0->source;
frost$io$File* $tmp4424 = *$tmp4423;
frost$core$Bit $tmp4425 = (frost$core$Bit) {$tmp4424 != NULL};
bool $tmp4426 = $tmp4425.value;
if ($tmp4426) goto block121; else goto block122;
block122:;
frost$core$Int64 $tmp4427 = (frost$core$Int64) {855u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4428, $tmp4427, &$s4429);
abort(); // unreachable
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:856
frost$core$Weak** $tmp4430 = &param0->compiler;
frost$core$Weak* $tmp4431 = *$tmp4430;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Scanner.frost:856:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
frost$core$Bit $tmp4432 = frost$core$Weak$get_valid$R$frost$core$Bit($tmp4431);
bool $tmp4433 = $tmp4432.value;
if ($tmp4433) goto block124; else goto block125;
block125:;
frost$core$Int64 $tmp4434 = (frost$core$Int64) {16u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4435, $tmp4434);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp4436 = &$tmp4431->value;
frost$core$Object* $tmp4437 = *$tmp4436;
frost$core$Frost$ref$frost$core$Object$Q($tmp4437);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp4437), $tmp4422, &$s4438);
frost$core$Frost$unref$frost$core$Object$Q($tmp4437);
goto block115;
block115:;
org$frostlang$frostc$FieldDecl* $tmp4439 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
*(&local51) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Int64 $tmp4440 = *(&local50);
int64_t $tmp4441 = $tmp4346.value;
int64_t $tmp4442 = $tmp4440.value;
int64_t $tmp4443 = $tmp4441 - $tmp4442;
frost$core$Int64 $tmp4444 = (frost$core$Int64) {$tmp4443};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp4445 = $tmp4444.value;
frost$core$UInt64 $tmp4446 = (frost$core$UInt64) {((uint64_t) $tmp4445)};
if ($tmp4348) goto block128; else goto block129;
block128:;
uint64_t $tmp4447 = $tmp4446.value;
uint64_t $tmp4448 = $tmp4351.value;
bool $tmp4449 = $tmp4447 >= $tmp4448;
frost$core$Bit $tmp4450 = (frost$core$Bit) {$tmp4449};
bool $tmp4451 = $tmp4450.value;
if ($tmp4451) goto block126; else goto block106;
block129:;
uint64_t $tmp4452 = $tmp4446.value;
uint64_t $tmp4453 = $tmp4351.value;
bool $tmp4454 = $tmp4452 > $tmp4453;
frost$core$Bit $tmp4455 = (frost$core$Bit) {$tmp4454};
bool $tmp4456 = $tmp4455.value;
if ($tmp4456) goto block126; else goto block106;
block126:;
int64_t $tmp4457 = $tmp4440.value;
int64_t $tmp4458 = $tmp4349.value;
int64_t $tmp4459 = $tmp4457 + $tmp4458;
frost$core$Int64 $tmp4460 = (frost$core$Int64) {$tmp4459};
*(&local50) = $tmp4460;
goto block105;
block106:;
org$frostlang$frostc$ASTNode* $tmp4461 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4461));
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp4462 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4462));
*(&local47) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp4463 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4463));
*(&local46) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:964
frost$core$Int64 $tmp4464 = (frost$core$Int64) {964u};
org$frostlang$frostc$ASTNode* $tmp4465 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:964:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4467 $tmp4466 = ($fn4467) ((frost$core$Object*) $tmp4465)->$class->vtable[0];
frost$core$String* $tmp4468 = $tmp4466(((frost$core$Object*) $tmp4465));
frost$core$String* $tmp4469 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4470, $tmp4468);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
frost$core$String* $tmp4471 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4469, &$s4472);
org$frostlang$frostc$ASTNode* $tmp4473 = *(&local4);
frost$core$Int64* $tmp4474 = &$tmp4473->$rawValue;
frost$core$Int64 $tmp4475 = *$tmp4474;
frost$core$Int64$wrapper* $tmp4476;
$tmp4476 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4476->value = $tmp4475;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:964:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4478 $tmp4477 = ($fn4478) ((frost$core$Object*) $tmp4476)->$class->vtable[0];
frost$core$String* $tmp4479 = $tmp4477(((frost$core$Object*) $tmp4476));
frost$core$String* $tmp4480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4471, $tmp4479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
frost$core$String* $tmp4481 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4480, &$s4482);
org$frostlang$frostc$ASTNode* $tmp4483 = *(&local4);
$fn4485 $tmp4484 = ($fn4485) $tmp4483->$class->vtable[2];
org$frostlang$frostc$Position $tmp4486 = $tmp4484($tmp4483);
org$frostlang$frostc$Position$wrapper* $tmp4487;
$tmp4487 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp4487->value = $tmp4486;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Scanner.frost:964:42
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn4489 $tmp4488 = ($fn4489) ((frost$core$Object*) $tmp4487)->$class->vtable[0];
frost$core$String* $tmp4490 = $tmp4488(((frost$core$Object*) $tmp4487));
frost$core$String* $tmp4491 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4481, $tmp4490);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4490));
frost$core$String* $tmp4492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4491, &$s4493);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4494, $tmp4464, $tmp4492);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4469));
abort(); // unreachable
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3759);
org$frostlang$frostc$ASTNode* $tmp4495 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4495));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:968
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp4496 = &param0->source;
frost$io$File* $tmp4497 = *$tmp4496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$io$File** $tmp4498 = &param0->source;
*$tmp4498 = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:969
frost$collections$Array* $tmp4499 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp4499)));
frost$collections$HashMap* $tmp4500 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4500));
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp4501 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4501));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp4502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp4503 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp4499);
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:972
frost$core$Int64 $tmp4504 = (frost$core$Int64) {972u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4505, $tmp4504);
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Scanner.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp4506 = &param0->compiler;
frost$core$Weak* $tmp4507 = *$tmp4506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
org$frostlang$frostc$ClassDecl** $tmp4508 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp4509 = *$tmp4508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4509));
frost$io$File** $tmp4510 = &param0->source;
frost$io$File* $tmp4511 = *$tmp4510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4511));
return;

}

