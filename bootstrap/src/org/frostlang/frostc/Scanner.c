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
#include "org/frostlang/frostc/ChoiceCase.h"
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
org$frostlang$frostc$Scanner$class_type org$frostlang$frostc$Scanner$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$Scanner$cleanup, org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type, org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations, org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64, org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit, org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q, org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode, org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q, org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q, org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT, org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String, org$frostlang$frostc$Scanner$scan$frost$io$File$org$frostlang$frostc$ASTNode$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT} };

typedef frost$collections$Iterator* (*$fn66)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn70)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn75)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn87)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn169)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn173)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn178)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn199)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn249)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn254)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn258)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn263)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn401)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn403)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn445)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn447)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn489)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn491)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn533)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn535)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn577)(org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn579)(frost$core$Immutable*, org$frostlang$frostc$Scanner*, org$frostlang$frostc$Position, frost$core$String*, org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn703)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn707)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn712)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn788)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn845)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn849)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn854)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn932)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn936)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn941)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn974)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn978)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn983)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1057)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1061)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1066)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1128)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1132)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1137)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1178)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1182)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1187)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1235)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1239)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1244)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1276)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1280)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1285)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1307)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1311)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1316)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1432)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1436)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1441)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1469)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1473)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1478)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1492)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1496)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1501)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1533)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1537)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1542)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1592)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1596)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1601)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1656)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1694)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1698)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1703)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn1758)(org$frostlang$frostc$ASTNode*);
typedef frost$collections$Iterator* (*$fn1772)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1776)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1781)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1827)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1863)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2175)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2179)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2184)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2197)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2213)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2262)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2266)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2271)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Position (*$fn2321)(org$frostlang$frostc$ASTNode*);
typedef frost$core$Bit (*$fn2339)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2350)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2354)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2359)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2390)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2437)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2441)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2446)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2480)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn2507)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2511)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2516)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2528)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2543)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2556)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2570)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2580)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2614)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2623)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2634)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2667)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2676)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2689)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2693)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2698)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn2706)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn2752)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2756)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2761)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn2773)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn2808)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn2930)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2934)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2939)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn3079)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn3111)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3120)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn3374)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3399)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3440)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Position (*$fn3494)(org$frostlang$frostc$ASTNode*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 28, 5772521929446391734, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -5660819477936753254, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 130, 8748136197459498508, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static frost$core$String $s1562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -4969590453849429027, NULL };
static frost$core$String $s1629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1691 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s1739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1754 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 135, -5799500546547409163, NULL };
static frost$core$String $s1808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, -4207800433812468905, NULL };
static frost$core$String $s1878 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1968 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s1975 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s1976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s2033 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2045 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2046 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2051 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2058 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2062 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2071 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static frost$core$String $s2139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2231 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static frost$core$String $s2346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 8545549524367827092, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s2491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static frost$core$String $s2496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static frost$core$String $s2536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s2650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static frost$core$String $s2770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2778 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static frost$core$String $s2780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static frost$core$String $s2804 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static frost$core$String $s2874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2897 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2898 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 129, -9027970139522093597, NULL };
static frost$core$String $s2907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s2922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2924 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static frost$core$String $s2966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s2976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s2977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, 1085691622909842075, NULL };
static frost$core$String $s3034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static frost$core$String $s3097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3099 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static frost$core$String $s3152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static frost$core$String $s3181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };
static frost$core$String $s3193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static frost$core$String $s3211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3258 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s3272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3278 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, -3290155743948325893, NULL };
static frost$core$String $s3327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 97, -8085247999762319848, NULL };
static frost$core$String $s3368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static frost$core$String $s3482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static frost$core$String $s3484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static frost$core$String $s3499 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static frost$core$String $s3518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 181, -4455204424448464455, NULL };

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
org$frostlang$frostc$Type* $tmp16 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp17 = *(&local1);
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp19 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp18);
org$frostlang$frostc$Position $tmp20 = *(&local0);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp16, $tmp17, $tmp19, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// unreffing REF($20:org.frostlang.frostc.Type)
frost$core$String* $tmp21 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing name
*(&local1) = ((frost$core$String*) NULL);
return $tmp16;
block3:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {32};
frost$core$Bit $tmp23 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp25 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$frostlang$frostc$ASTNode** $tmp27 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$ASTNode* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 30
frost$collections$Array* $tmp30 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp30);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$collections$Array* $tmp31 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local4) = $tmp30;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($54:frost.collections.Array<org.frostlang.frostc.Type>)
// line 31
frost$collections$Array* $tmp32 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp33 = *(&local3);
org$frostlang$frostc$Type* $tmp34 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp33);
frost$collections$Array$add$frost$collections$Array$T($tmp32, ((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($71:org.frostlang.frostc.Type)
// line 32
org$frostlang$frostc$Type* $tmp35 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$collections$Array* $tmp36 = *(&local4);
frost$core$Int64 $tmp37 = (frost$core$Int64) {0};
frost$core$Object* $tmp38 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp36, $tmp37);
frost$core$String** $tmp39 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp38))->name;
frost$core$String* $tmp40 = *$tmp39;
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, &$s42);
frost$core$Int64 $tmp43 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp44 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp43);
org$frostlang$frostc$Position $tmp45 = *(&local2);
frost$collections$Array* $tmp46 = *(&local4);
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$Bit($tmp35, $tmp41, $tmp44, $tmp45, ((frost$collections$ListView*) $tmp46), $tmp47);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp38);
// unreffing REF($82:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($78:org.frostlang.frostc.Type)
frost$collections$Array* $tmp48 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing subtypes
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp49 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing base
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp35;
block5:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {21};
frost$core$Bit $tmp51 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp53 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp54 = *$tmp53;
*(&local5) = $tmp54;
frost$core$String** $tmp55 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp56 = *$tmp55;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$String* $tmp57 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local6) = $tmp56;
org$frostlang$frostc$FixedArray** $tmp58 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp59 = *$tmp58;
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
org$frostlang$frostc$FixedArray* $tmp60 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local7) = $tmp59;
// line 35
frost$collections$Array* $tmp61 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp61);
*(&local8) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$collections$Array* $tmp62 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local8) = $tmp61;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($143:frost.collections.Array<org.frostlang.frostc.Type>)
// line 36
org$frostlang$frostc$FixedArray* $tmp63 = *(&local7);
ITable* $tmp64 = ((frost$collections$Iterable*) $tmp63)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
frost$collections$Iterator* $tmp67 = $tmp65(((frost$collections$Iterable*) $tmp63));
goto block8;
block8:;
ITable* $tmp68 = $tmp67->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$core$Bit $tmp71 = $tmp69($tmp67);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block10; else goto block9;
block9:;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp73 = $tmp67->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[1];
frost$core$Object* $tmp76 = $tmp74($tmp67);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp76)));
org$frostlang$frostc$ASTNode* $tmp77 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local9) = ((org$frostlang$frostc$ASTNode*) $tmp76);
// line 37
frost$collections$Array* $tmp78 = *(&local8);
org$frostlang$frostc$ASTNode* $tmp79 = *(&local9);
org$frostlang$frostc$Type* $tmp80 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp79);
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// unreffing REF($184:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
// unreffing REF($172:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp81 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing arg
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($161:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 39
org$frostlang$frostc$Type* $tmp82 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$String* $tmp83 = *(&local6);
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
org$frostlang$frostc$Type$Kind $tmp85 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp84);
$fn87 $tmp86 = ($fn87) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp88 = $tmp86(param1);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position($tmp82, $tmp83, $tmp85, $tmp88);
frost$collections$Array* $tmp89 = *(&local8);
org$frostlang$frostc$Type* $tmp90 = org$frostlang$frostc$Type$generic$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp82, ((frost$collections$ListView*) $tmp89));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($212:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($203:org.frostlang.frostc.Type)
frost$collections$Array* $tmp91 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing finalArgs
*(&local8) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp92 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing args
*(&local7) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp93 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing base
*(&local6) = ((frost$core$String*) NULL);
return $tmp90;
block7:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {26};
frost$core$Bit $tmp95 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block11; else goto block12;
block11:;
org$frostlang$frostc$Position* $tmp97 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp98 = *$tmp97;
org$frostlang$frostc$IR$Value** $tmp99 = (org$frostlang$frostc$IR$Value**) (param1->$data + 16);
org$frostlang$frostc$IR$Value* $tmp100 = *$tmp99;
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$IR$Value* $tmp101 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local10) = $tmp100;
// line 42
org$frostlang$frostc$IR$Value* $tmp102 = *(&local10);
frost$core$Int64* $tmp103 = &$tmp102->$rawValue;
frost$core$Int64 $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {14};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block14; else goto block13;
block14:;
org$frostlang$frostc$Type** $tmp108 = (org$frostlang$frostc$Type**) ($tmp102->$data + 0);
org$frostlang$frostc$Type* $tmp109 = *$tmp108;
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
org$frostlang$frostc$Type* $tmp110 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local11) = $tmp109;
// line 44
org$frostlang$frostc$Type* $tmp111 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlang$frostc$Type* $tmp112 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing t
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp113 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing type
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp111;
block13:;
// line 47
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {47};
org$frostlang$frostc$IR$Value* $tmp117 = *(&local10);
frost$core$String* $tmp118 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s119, ((frost$core$Object*) $tmp117));
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp118, &$s121);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s122, $tmp116, $tmp120);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($292:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// unreffing REF($291:frost.core.String)
abort(); // unreachable
block15:;
org$frostlang$frostc$IR$Value* $tmp123 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing type
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block12:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {30};
frost$core$Bit $tmp125 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp7, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp127 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp128 = *$tmp127;
*(&local12) = $tmp128;
org$frostlang$frostc$parser$Token$Kind* $tmp129 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp130 = *$tmp129;
*(&local13) = $tmp130;
org$frostlang$frostc$FixedArray** $tmp131 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp132 = *$tmp131;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
org$frostlang$frostc$FixedArray* $tmp133 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local14) = $tmp132;
org$frostlang$frostc$ASTNode** $tmp134 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp135 = *$tmp134;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$ASTNode* $tmp136 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local15) = $tmp135;
// line 50
// line 51
org$frostlang$frostc$parser$Token$Kind $tmp137 = *(&local13);
frost$core$Int64 $tmp138 = $tmp137.$rawValue;
frost$core$Int64 $tmp139 = (frost$core$Int64) {91};
frost$core$Bit $tmp140 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block20; else goto block21;
block20:;
// line 53
frost$core$Int64 $tmp142 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp143 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp142);
*(&local16) = $tmp143;
goto block19;
block21:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {92};
frost$core$Bit $tmp145 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block22; else goto block23;
block22:;
// line 56
frost$core$Int64 $tmp147 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp148 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp147);
*(&local16) = $tmp148;
goto block19;
block23:;
frost$core$Int64 $tmp149 = (frost$core$Int64) {93};
frost$core$Bit $tmp150 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block24; else goto block25;
block24:;
// line 59
frost$core$Int64 $tmp152 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp153 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp152);
*(&local16) = $tmp153;
goto block19;
block25:;
frost$core$Int64 $tmp154 = (frost$core$Int64) {94};
frost$core$Bit $tmp155 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp138, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block26; else goto block27;
block26:;
// line 62
frost$core$Int64 $tmp157 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp158 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp157);
*(&local16) = $tmp158;
goto block19;
block27:;
// line 65
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(false);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp161 = (frost$core$Int64) {65};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s162, $tmp161, &$s163);
abort(); // unreachable
block28:;
goto block19;
block19:;
// line 68
frost$collections$Array* $tmp164 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp164);
*(&local17) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$collections$Array* $tmp165 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local17) = $tmp164;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// unreffing REF($384:frost.collections.Array<org.frostlang.frostc.Type>)
// line 69
org$frostlang$frostc$FixedArray* $tmp166 = *(&local14);
ITable* $tmp167 = ((frost$collections$Iterable*) $tmp166)->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
frost$collections$Iterator* $tmp170 = $tmp168(((frost$collections$Iterable*) $tmp166));
goto block30;
block30:;
ITable* $tmp171 = $tmp170->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
frost$core$Bit $tmp174 = $tmp172($tmp170);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block32; else goto block31;
block31:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp176 = $tmp170->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[1];
frost$core$Object* $tmp179 = $tmp177($tmp170);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp179)));
org$frostlang$frostc$ASTNode* $tmp180 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp179);
// line 70
frost$collections$Array* $tmp181 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp182 = *(&local18);
org$frostlang$frostc$Type* $tmp183 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp182);
frost$collections$Array$add$frost$collections$Array$T($tmp181, ((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing REF($425:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp179);
// unreffing REF($413:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp184 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing p
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
// unreffing REF($402:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 72
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
// line 73
org$frostlang$frostc$ASTNode* $tmp185 = *(&local15);
frost$core$Bit $tmp186 = frost$core$Bit$init$builtin_bit($tmp185 != NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block33; else goto block35;
block33:;
// line 74
org$frostlang$frostc$ASTNode* $tmp188 = *(&local15);
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit($tmp188 != NULL);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp191 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s192, $tmp191, &$s193);
abort(); // unreachable
block36:;
org$frostlang$frostc$Type* $tmp194 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp188);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlang$frostc$Type* $tmp195 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
*(&local19) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing REF($461:org.frostlang.frostc.Type)
goto block34;
block35:;
// line 1
// line 77
org$frostlang$frostc$Type* $tmp196 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
org$frostlang$frostc$Type* $tmp197 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local19) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing REF($474:org.frostlang.frostc.Type)
goto block34;
block34:;
// line 79
$fn199 $tmp198 = ($fn199) param1->$class->vtable[2];
org$frostlang$frostc$Position $tmp200 = $tmp198(param1);
org$frostlang$frostc$Type$Kind $tmp201 = *(&local16);
frost$collections$Array* $tmp202 = *(&local17);
org$frostlang$frostc$FixedArray* $tmp203 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp202);
org$frostlang$frostc$Type* $tmp204 = *(&local19);
frost$core$Int64 $tmp205 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp206 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp200, $tmp201, ((frost$collections$ListView*) $tmp203), $tmp204, $tmp205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($496:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing REF($491:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
org$frostlang$frostc$Type* $tmp207 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing returnType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp208 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
// unreffing parameters
*(&local17) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$ASTNode* $tmp209 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
// unreffing rawReturnType
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp210 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing rawParameters
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp206;
block18:;
// line 83
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit(false);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {83};
frost$core$String* $tmp214 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s215, ((frost$core$Object*) param1));
frost$core$String* $tmp216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp214, &$s217);
frost$core$Int64* $tmp218 = &param1->$rawValue;
frost$core$Int64 $tmp219 = *$tmp218;
frost$core$Int64$wrapper* $tmp220;
$tmp220 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp220->value = $tmp219;
frost$core$String* $tmp221 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp216, ((frost$core$Object*) $tmp220));
frost$core$String* $tmp222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp221, &$s223);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s224, $tmp213, $tmp222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($538:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($537:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($536:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing REF($533:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($532:frost.core.String)
abort(); // unreachable
block38:;
goto block1;
block1:;
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit(false);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {24};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block40:;
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$Int64 param2, frost$core$Int64 param3) {

// line 89
frost$core$Int64 $tmp230 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param2, param3);
frost$core$Int64 $tmp231 = (frost$core$Int64) {0};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
bool $tmp234 = $tmp232 != $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 90
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s237);
goto block2;
block2:;
// line 92
frost$core$Int64 $tmp238 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(param2, param3);
return $tmp238;

}
frost$core$Bit org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 99
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// line 100
frost$core$Bit $tmp241 = frost$core$Bit$init$builtin_bit(true);
return $tmp241;
block2:;
// line 102
frost$core$String* $tmp242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s243, param2);
frost$core$String* $tmp244 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp242, &$s245);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp244);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($10:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($9:frost.core.String)
// line 103
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(false);
return $tmp246;

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
// line 96
frost$core$Int64 $tmp247 = (frost$core$Int64) {0};
*(&local0) = $tmp247;
// line 97
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp248 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
*(&local1) = ((frost$collections$Array*) NULL);
// line 98
frost$core$Method* $tmp250 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp250, ((frost$core$Int8*) org$frostlang$frostc$Scanner$$anonymous1$org$frostlang$frostc$Scanner$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$ASTNode$Q$R$frost$core$Bit), ((frost$core$Immutable*) NULL));
// line 98
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$core$Method* $tmp251 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local2) = $tmp250;
// line 105
ITable* $tmp252 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
frost$collections$Iterator* $tmp255 = $tmp253(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp256 = $tmp255->$class->itable;
while ($tmp256->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
frost$core$Bit $tmp259 = $tmp257($tmp255);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block3; else goto block2;
block2:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp261 = $tmp255->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[1];
frost$core$Object* $tmp264 = $tmp262($tmp255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp264)));
org$frostlang$frostc$ASTNode* $tmp265 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp264);
// line 106
org$frostlang$frostc$ASTNode* $tmp266 = *(&local3);
frost$core$Int64* $tmp267 = &$tmp266->$rawValue;
frost$core$Int64 $tmp268 = *$tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {0};
frost$core$Bit $tmp270 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp268, $tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Position* $tmp272 = (org$frostlang$frostc$Position*) ($tmp266->$data + 0);
org$frostlang$frostc$Position $tmp273 = *$tmp272;
*(&local4) = $tmp273;
frost$core$String** $tmp274 = (frost$core$String**) ($tmp266->$data + 16);
frost$core$String* $tmp275 = *$tmp274;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$String* $tmp276 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local5) = $tmp275;
frost$core$String** $tmp277 = (frost$core$String**) ($tmp266->$data + 24);
frost$core$String* $tmp278 = *$tmp277;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$String* $tmp279 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local6) = $tmp278;
org$frostlang$frostc$ASTNode** $tmp280 = (org$frostlang$frostc$ASTNode**) ($tmp266->$data + 32);
org$frostlang$frostc$ASTNode* $tmp281 = *$tmp280;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
org$frostlang$frostc$ASTNode* $tmp282 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local7) = $tmp281;
// line 108
org$frostlang$frostc$ASTNode* $tmp283 = *(&local7);
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
org$frostlang$frostc$ASTNode* $tmp284 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local8) = $tmp283;
// line 109
frost$core$String* $tmp285 = *(&local5);
frost$core$Bit $tmp286 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s287);
bool $tmp288 = $tmp286.value;
if ($tmp288) goto block8; else goto block9;
block8:;
// line 111
org$frostlang$frostc$Position $tmp289 = *(&local4);
frost$core$Int64 $tmp290 = *(&local0);
frost$core$Int64 $tmp291 = (frost$core$Int64) {2};
frost$core$Int64 $tmp292 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp289, $tmp290, $tmp291);
*(&local0) = $tmp292;
goto block7;
block9:;
frost$core$Bit $tmp293 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s294);
bool $tmp295 = $tmp293.value;
if ($tmp295) goto block10; else goto block11;
block10:;
// line 114
org$frostlang$frostc$Position $tmp296 = *(&local4);
frost$core$Int64 $tmp297 = *(&local0);
frost$core$Int64 $tmp298 = (frost$core$Int64) {4};
frost$core$Int64 $tmp299 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp296, $tmp297, $tmp298);
*(&local0) = $tmp299;
goto block7;
block11:;
frost$core$Bit $tmp300 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s301);
bool $tmp302 = $tmp300.value;
if ($tmp302) goto block12; else goto block13;
block12:;
// line 117
org$frostlang$frostc$Position $tmp303 = *(&local4);
frost$core$Int64 $tmp304 = *(&local0);
frost$core$Int64 $tmp305 = (frost$core$Int64) {8};
frost$core$Int64 $tmp306 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp303, $tmp304, $tmp305);
*(&local0) = $tmp306;
goto block7;
block13:;
frost$core$Bit $tmp307 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s308);
bool $tmp309 = $tmp307.value;
if ($tmp309) goto block14; else goto block15;
block14:;
// line 120
org$frostlang$frostc$Position $tmp310 = *(&local4);
frost$core$Int64 $tmp311 = *(&local0);
frost$core$Int64 $tmp312 = (frost$core$Int64) {16};
frost$core$Int64 $tmp313 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp310, $tmp311, $tmp312);
*(&local0) = $tmp313;
goto block7;
block15:;
frost$core$Bit $tmp314 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s315);
bool $tmp316 = $tmp314.value;
if ($tmp316) goto block16; else goto block17;
block16:;
// line 123
org$frostlang$frostc$Position $tmp317 = *(&local4);
frost$core$Int64 $tmp318 = *(&local0);
frost$core$Int64 $tmp319 = (frost$core$Int64) {32};
frost$core$Int64 $tmp320 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp317, $tmp318, $tmp319);
*(&local0) = $tmp320;
goto block7;
block17:;
frost$core$Bit $tmp321 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s322);
bool $tmp323 = $tmp321.value;
if ($tmp323) goto block18; else goto block19;
block18:;
// line 126
org$frostlang$frostc$Position $tmp324 = *(&local4);
frost$core$Int64 $tmp325 = *(&local0);
frost$core$Int64 $tmp326 = (frost$core$Int64) {64};
frost$core$Int64 $tmp327 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp324, $tmp325, $tmp326);
*(&local0) = $tmp327;
goto block7;
block19:;
frost$core$Bit $tmp328 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s329);
bool $tmp330 = $tmp328.value;
if ($tmp330) goto block20; else goto block21;
block20:;
// line 129
org$frostlang$frostc$Position $tmp331 = *(&local4);
frost$core$Int64 $tmp332 = *(&local0);
frost$core$Int64 $tmp333 = (frost$core$Int64) {128};
frost$core$Int64 $tmp334 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp331, $tmp332, $tmp333);
*(&local0) = $tmp334;
goto block7;
block21:;
frost$core$Bit $tmp335 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s336);
bool $tmp337 = $tmp335.value;
if ($tmp337) goto block22; else goto block23;
block22:;
// line 132
org$frostlang$frostc$Position $tmp338 = *(&local4);
frost$core$Int64 $tmp339 = *(&local0);
frost$core$Int64 $tmp340 = (frost$core$Int64) {256};
frost$core$Int64 $tmp341 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp338, $tmp339, $tmp340);
*(&local0) = $tmp341;
goto block7;
block23:;
frost$core$Bit $tmp342 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s343);
bool $tmp344 = $tmp342.value;
if ($tmp344) goto block24; else goto block25;
block24:;
// line 135
org$frostlang$frostc$Position $tmp345 = *(&local4);
frost$core$Int64 $tmp346 = *(&local0);
frost$core$Int64 $tmp347 = (frost$core$Int64) {512};
frost$core$Int64 $tmp348 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp345, $tmp346, $tmp347);
*(&local0) = $tmp348;
goto block7;
block25:;
frost$core$Bit $tmp349 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s350);
bool $tmp351 = $tmp349.value;
if ($tmp351) goto block26; else goto block27;
block26:;
// line 138
org$frostlang$frostc$Position $tmp352 = *(&local4);
frost$core$Int64 $tmp353 = *(&local0);
frost$core$Int64 $tmp354 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp355 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp352, $tmp353, $tmp354);
*(&local0) = $tmp355;
goto block7;
block27:;
frost$core$Bit $tmp356 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s357);
bool $tmp358 = $tmp356.value;
if ($tmp358) goto block28; else goto block29;
block28:;
// line 141
org$frostlang$frostc$Position $tmp359 = *(&local4);
frost$core$Int64 $tmp360 = *(&local0);
frost$core$Int64 $tmp361 = (frost$core$Int64) {2048};
frost$core$Int64 $tmp362 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp359, $tmp360, $tmp361);
*(&local0) = $tmp362;
goto block7;
block29:;
frost$core$Bit $tmp363 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s364);
bool $tmp365 = $tmp363.value;
if ($tmp365) goto block30; else goto block31;
block30:;
// line 144
org$frostlang$frostc$Position $tmp366 = *(&local4);
frost$core$Int64 $tmp367 = *(&local0);
frost$core$Int64 $tmp368 = (frost$core$Int64) {4096};
frost$core$Int64 $tmp369 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp366, $tmp367, $tmp368);
*(&local0) = $tmp369;
goto block7;
block31:;
frost$core$Bit $tmp370 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s371);
bool $tmp372 = $tmp370.value;
if ($tmp372) goto block32; else goto block33;
block32:;
// line 147
org$frostlang$frostc$Position $tmp373 = *(&local4);
frost$core$Int64 $tmp374 = *(&local0);
frost$core$Int64 $tmp375 = (frost$core$Int64) {16384};
frost$core$Int64 $tmp376 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp373, $tmp374, $tmp375);
*(&local0) = $tmp376;
goto block7;
block33:;
frost$core$Bit $tmp377 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s378);
bool $tmp379 = $tmp377.value;
if ($tmp379) goto block34; else goto block35;
block34:;
// line 150
org$frostlang$frostc$Position $tmp380 = *(&local4);
frost$core$Int64 $tmp381 = *(&local0);
frost$core$Int64 $tmp382 = (frost$core$Int64) {32768};
frost$core$Int64 $tmp383 = org$frostlang$frostc$Scanner$add$org$frostlang$frostc$Position$frost$core$Int64$frost$core$Int64$R$frost$core$Int64(param0, $tmp380, $tmp381, $tmp382);
*(&local0) = $tmp383;
goto block7;
block35:;
frost$core$Bit $tmp384 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s385);
bool $tmp386 = $tmp384.value;
if ($tmp386) goto block36; else goto block37;
block36:;
// line 153
frost$collections$Array* $tmp387 = *(&local1);
frost$core$Bit $tmp388 = frost$core$Bit$init$builtin_bit($tmp387 == NULL);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block38; else goto block39;
block38:;
// line 154
frost$collections$Array* $tmp390 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$collections$Array* $tmp391 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local1) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($246:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block39;
block39:;
// line 156
frost$core$Method* $tmp392 = *(&local2);
org$frostlang$frostc$Position $tmp393 = *(&local4);
frost$core$String* $tmp394 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp395 = *(&local8);
frost$core$Int8** $tmp396 = &$tmp392->pointer;
frost$core$Int8* $tmp397 = *$tmp396;
frost$core$Immutable** $tmp398 = &$tmp392->target;
frost$core$Immutable* $tmp399 = *$tmp398;
bool $tmp400 = $tmp399 != ((frost$core$Immutable*) NULL);
if ($tmp400) goto block42; else goto block43;
block43:;
frost$core$Bit $tmp402 = (($fn401) $tmp397)(param0, $tmp393, $tmp394, $tmp395);
*(&local9) = $tmp402;
goto block44;
block42:;
frost$core$Bit $tmp404 = (($fn403) $tmp397)($tmp399, param0, $tmp393, $tmp394, $tmp395);
*(&local9) = $tmp404;
goto block44;
block44:;
frost$core$Bit $tmp405 = *(&local9);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block40; else goto block41;
block40:;
// line 157
frost$collections$Array* $tmp407 = *(&local1);
frost$core$Bit $tmp408 = frost$core$Bit$init$builtin_bit($tmp407 != NULL);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp410 = (frost$core$Int64) {157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s411, $tmp410, &$s412);
abort(); // unreachable
block45:;
org$frostlang$frostc$Annotations$Expression* $tmp413 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp414 = (frost$core$Int64) {0};
frost$core$String* $tmp415 = *(&local6);
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit($tmp415 != NULL);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp418 = (frost$core$Int64) {157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s419, $tmp418, &$s420);
abort(); // unreachable
block47:;
org$frostlang$frostc$ASTNode* $tmp421 = *(&local8);
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit($tmp421 != NULL);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp424 = (frost$core$Int64) {157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s425, $tmp424, &$s426);
abort(); // unreachable
block49:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp413, $tmp414, $tmp415, $tmp421);
frost$collections$Array$add$frost$collections$Array$T($tmp407, ((frost$core$Object*) $tmp413));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
// unreffing REF($293:org.frostlang.frostc.Annotations.Expression)
// line 158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp427 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block41;
block41:;
goto block7;
block37:;
frost$core$Bit $tmp428 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s429);
bool $tmp430 = $tmp428.value;
if ($tmp430) goto block51; else goto block52;
block51:;
// line 162
frost$collections$Array* $tmp431 = *(&local1);
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit($tmp431 == NULL);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block53; else goto block54;
block53:;
// line 163
frost$collections$Array* $tmp434 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp434);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$collections$Array* $tmp435 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local1) = $tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// unreffing REF($338:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block54;
block54:;
// line 165
frost$core$Method* $tmp436 = *(&local2);
org$frostlang$frostc$Position $tmp437 = *(&local4);
frost$core$String* $tmp438 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp439 = *(&local8);
frost$core$Int8** $tmp440 = &$tmp436->pointer;
frost$core$Int8* $tmp441 = *$tmp440;
frost$core$Immutable** $tmp442 = &$tmp436->target;
frost$core$Immutable* $tmp443 = *$tmp442;
bool $tmp444 = $tmp443 != ((frost$core$Immutable*) NULL);
if ($tmp444) goto block57; else goto block58;
block58:;
frost$core$Bit $tmp446 = (($fn445) $tmp441)(param0, $tmp437, $tmp438, $tmp439);
*(&local10) = $tmp446;
goto block59;
block57:;
frost$core$Bit $tmp448 = (($fn447) $tmp441)($tmp443, param0, $tmp437, $tmp438, $tmp439);
*(&local10) = $tmp448;
goto block59;
block59:;
frost$core$Bit $tmp449 = *(&local10);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block55; else goto block56;
block55:;
// line 166
frost$collections$Array* $tmp451 = *(&local1);
frost$core$Bit $tmp452 = frost$core$Bit$init$builtin_bit($tmp451 != NULL);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp454 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s455, $tmp454, &$s456);
abort(); // unreachable
block60:;
org$frostlang$frostc$Annotations$Expression* $tmp457 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp458 = (frost$core$Int64) {1};
frost$core$String* $tmp459 = *(&local6);
frost$core$Bit $tmp460 = frost$core$Bit$init$builtin_bit($tmp459 != NULL);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp462 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s463, $tmp462, &$s464);
abort(); // unreachable
block62:;
org$frostlang$frostc$ASTNode* $tmp465 = *(&local8);
frost$core$Bit $tmp466 = frost$core$Bit$init$builtin_bit($tmp465 != NULL);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s469, $tmp468, &$s470);
abort(); // unreachable
block64:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp457, $tmp458, $tmp459, $tmp465);
frost$collections$Array$add$frost$collections$Array$T($tmp451, ((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
// unreffing REF($385:org.frostlang.frostc.Annotations.Expression)
// line 167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp471 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block56;
block56:;
goto block7;
block52:;
frost$core$Bit $tmp472 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s473);
bool $tmp474 = $tmp472.value;
if ($tmp474) goto block66; else goto block67;
block66:;
// line 171
frost$collections$Array* $tmp475 = *(&local1);
frost$core$Bit $tmp476 = frost$core$Bit$init$builtin_bit($tmp475 == NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block68; else goto block69;
block68:;
// line 172
frost$collections$Array* $tmp478 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp478);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$collections$Array* $tmp479 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local1) = $tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($430:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block69;
block69:;
// line 174
frost$core$Method* $tmp480 = *(&local2);
org$frostlang$frostc$Position $tmp481 = *(&local4);
frost$core$String* $tmp482 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp483 = *(&local8);
frost$core$Int8** $tmp484 = &$tmp480->pointer;
frost$core$Int8* $tmp485 = *$tmp484;
frost$core$Immutable** $tmp486 = &$tmp480->target;
frost$core$Immutable* $tmp487 = *$tmp486;
bool $tmp488 = $tmp487 != ((frost$core$Immutable*) NULL);
if ($tmp488) goto block72; else goto block73;
block73:;
frost$core$Bit $tmp490 = (($fn489) $tmp485)(param0, $tmp481, $tmp482, $tmp483);
*(&local11) = $tmp490;
goto block74;
block72:;
frost$core$Bit $tmp492 = (($fn491) $tmp485)($tmp487, param0, $tmp481, $tmp482, $tmp483);
*(&local11) = $tmp492;
goto block74;
block74:;
frost$core$Bit $tmp493 = *(&local11);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block70; else goto block71;
block70:;
// line 175
frost$collections$Array* $tmp495 = *(&local1);
frost$core$Bit $tmp496 = frost$core$Bit$init$builtin_bit($tmp495 != NULL);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp498 = (frost$core$Int64) {175};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s499, $tmp498, &$s500);
abort(); // unreachable
block75:;
org$frostlang$frostc$Annotations$Expression* $tmp501 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp502 = (frost$core$Int64) {2};
frost$core$String* $tmp503 = *(&local6);
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit($tmp503 != NULL);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {175};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s507, $tmp506, &$s508);
abort(); // unreachable
block77:;
org$frostlang$frostc$ASTNode* $tmp509 = *(&local8);
frost$core$Bit $tmp510 = frost$core$Bit$init$builtin_bit($tmp509 != NULL);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp512 = (frost$core$Int64) {175};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s513, $tmp512, &$s514);
abort(); // unreachable
block79:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp501, $tmp502, $tmp503, $tmp509);
frost$collections$Array$add$frost$collections$Array$T($tmp495, ((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($477:org.frostlang.frostc.Annotations.Expression)
// line 176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp515 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block71:;
goto block7;
block67:;
frost$core$Bit $tmp516 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s517);
bool $tmp518 = $tmp516.value;
if ($tmp518) goto block81; else goto block82;
block81:;
// line 180
frost$collections$Array* $tmp519 = *(&local1);
frost$core$Bit $tmp520 = frost$core$Bit$init$builtin_bit($tmp519 == NULL);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block83; else goto block84;
block83:;
// line 181
frost$collections$Array* $tmp522 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp522);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$collections$Array* $tmp523 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local1) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($522:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block84;
block84:;
// line 183
frost$core$Method* $tmp524 = *(&local2);
org$frostlang$frostc$Position $tmp525 = *(&local4);
frost$core$String* $tmp526 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp527 = *(&local8);
frost$core$Int8** $tmp528 = &$tmp524->pointer;
frost$core$Int8* $tmp529 = *$tmp528;
frost$core$Immutable** $tmp530 = &$tmp524->target;
frost$core$Immutable* $tmp531 = *$tmp530;
bool $tmp532 = $tmp531 != ((frost$core$Immutable*) NULL);
if ($tmp532) goto block87; else goto block88;
block88:;
frost$core$Bit $tmp534 = (($fn533) $tmp529)(param0, $tmp525, $tmp526, $tmp527);
*(&local12) = $tmp534;
goto block89;
block87:;
frost$core$Bit $tmp536 = (($fn535) $tmp529)($tmp531, param0, $tmp525, $tmp526, $tmp527);
*(&local12) = $tmp536;
goto block89;
block89:;
frost$core$Bit $tmp537 = *(&local12);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block85; else goto block86;
block85:;
// line 184
frost$collections$Array* $tmp539 = *(&local1);
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit($tmp539 != NULL);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s543, $tmp542, &$s544);
abort(); // unreachable
block90:;
org$frostlang$frostc$Annotations$Expression* $tmp545 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp546 = (frost$core$Int64) {3};
frost$core$String* $tmp547 = *(&local6);
frost$core$Bit $tmp548 = frost$core$Bit$init$builtin_bit($tmp547 != NULL);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s551, $tmp550, &$s552);
abort(); // unreachable
block92:;
org$frostlang$frostc$ASTNode* $tmp553 = *(&local8);
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit($tmp553 != NULL);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {184};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s557, $tmp556, &$s558);
abort(); // unreachable
block94:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp545, $tmp546, $tmp547, $tmp553);
frost$collections$Array$add$frost$collections$Array$T($tmp539, ((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing REF($569:org.frostlang.frostc.Annotations.Expression)
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp559 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block86;
block86:;
goto block7;
block82:;
frost$core$Bit $tmp560 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp285, &$s561);
bool $tmp562 = $tmp560.value;
if ($tmp562) goto block96; else goto block97;
block96:;
// line 189
frost$collections$Array* $tmp563 = *(&local1);
frost$core$Bit $tmp564 = frost$core$Bit$init$builtin_bit($tmp563 == NULL);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block98; else goto block99;
block98:;
// line 190
frost$collections$Array* $tmp566 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$collections$Array* $tmp567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local1) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// unreffing REF($614:frost.collections.Array<org.frostlang.frostc.Annotations.Expression>)
goto block99;
block99:;
// line 192
frost$core$Method* $tmp568 = *(&local2);
org$frostlang$frostc$Position $tmp569 = *(&local4);
frost$core$String* $tmp570 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp571 = *(&local8);
frost$core$Int8** $tmp572 = &$tmp568->pointer;
frost$core$Int8* $tmp573 = *$tmp572;
frost$core$Immutable** $tmp574 = &$tmp568->target;
frost$core$Immutable* $tmp575 = *$tmp574;
bool $tmp576 = $tmp575 != ((frost$core$Immutable*) NULL);
if ($tmp576) goto block102; else goto block103;
block103:;
frost$core$Bit $tmp578 = (($fn577) $tmp573)(param0, $tmp569, $tmp570, $tmp571);
*(&local13) = $tmp578;
goto block104;
block102:;
frost$core$Bit $tmp580 = (($fn579) $tmp573)($tmp575, param0, $tmp569, $tmp570, $tmp571);
*(&local13) = $tmp580;
goto block104;
block104:;
frost$core$Bit $tmp581 = *(&local13);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block100; else goto block101;
block100:;
// line 193
frost$collections$Array* $tmp583 = *(&local1);
frost$core$Bit $tmp584 = frost$core$Bit$init$builtin_bit($tmp583 != NULL);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block105; else goto block106;
block106:;
frost$core$Int64 $tmp586 = (frost$core$Int64) {193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s587, $tmp586, &$s588);
abort(); // unreachable
block105:;
org$frostlang$frostc$Annotations$Expression* $tmp589 = (org$frostlang$frostc$Annotations$Expression*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Annotations$Expression$class);
frost$core$Int64 $tmp590 = (frost$core$Int64) {4};
frost$core$String* $tmp591 = *(&local6);
frost$core$Bit $tmp592 = frost$core$Bit$init$builtin_bit($tmp591 != NULL);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp594 = (frost$core$Int64) {193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s595, $tmp594, &$s596);
abort(); // unreachable
block107:;
org$frostlang$frostc$ASTNode* $tmp597 = *(&local8);
frost$core$Bit $tmp598 = frost$core$Bit$init$builtin_bit($tmp597 != NULL);
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp600 = (frost$core$Int64) {193};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s601, $tmp600, &$s602);
abort(); // unreachable
block109:;
org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode($tmp589, $tmp590, $tmp591, $tmp597);
frost$collections$Array$add$frost$collections$Array$T($tmp583, ((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($661:org.frostlang.frostc.Annotations.Expression)
// line 194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
org$frostlang$frostc$ASTNode* $tmp603 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block101;
block101:;
goto block7;
block97:;
// line 198
org$frostlang$frostc$Position $tmp604 = *(&local4);
frost$core$String* $tmp605 = *(&local5);
frost$core$String* $tmp606 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s607, $tmp605);
frost$core$String* $tmp608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp606, &$s609);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp604, $tmp608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
// unreffing REF($700:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($699:frost.core.String)
goto block7;
block7:;
// line 201
org$frostlang$frostc$ASTNode* $tmp610 = *(&local8);
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit($tmp610 != NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block111; else goto block112;
block111:;
// line 202
org$frostlang$frostc$Position $tmp613 = *(&local4);
frost$core$String* $tmp614 = *(&local5);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s616, $tmp614);
frost$core$String* $tmp617 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp615, &$s618);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp613, $tmp617);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($719:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($718:frost.core.String)
goto block112;
block112:;
org$frostlang$frostc$ASTNode* $tmp619 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing expr
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp620 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing rawExpr
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp621 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing exprText
*(&local6) = ((frost$core$String*) NULL);
frost$core$String* $tmp622 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing text
*(&local5) = ((frost$core$String*) NULL);
goto block4;
block6:;
// line 206
frost$core$Bit $tmp623 = frost$core$Bit$init$builtin_bit(false);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block113; else goto block114;
block114:;
frost$core$Int64 $tmp625 = (frost$core$Int64) {206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s626, $tmp625);
abort(); // unreachable
block113:;
goto block4;
block4:;
frost$core$Frost$unref$frost$core$Object$Q($tmp264);
// unreffing REF($39:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp627 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing c
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($28:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 210
org$frostlang$frostc$Annotations* $tmp628 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp629 = *(&local0);
frost$collections$Array* $tmp630 = *(&local1);
org$frostlang$frostc$Annotations$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Annotations$Expression$GT$Q($tmp628, $tmp629, ((frost$collections$ListView*) $tmp630));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing REF($770:org.frostlang.frostc.Annotations)
frost$core$Method* $tmp631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing checkExpression
*(&local2) = ((frost$core$Method*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($13:frost.core.Method)
frost$collections$Array* $tmp632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing expressions
*(&local1) = ((frost$collections$Array*) NULL);
return $tmp628;

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
// line 215
*(&local0) = ((frost$core$String*) NULL);
// line 217
frost$core$Bit $tmp633 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block1; else goto block3;
block1:;
// line 218
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp635 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 221
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {221};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s639, $tmp638, &$s640);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp641 = &param3->$rawValue;
frost$core$Int64 $tmp642 = *$tmp641;
frost$core$Int64 $tmp643 = (frost$core$Int64) {41};
frost$core$Bit $tmp644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp642, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp646 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp647 = *$tmp646;
*(&local1) = $tmp647;
frost$core$String** $tmp648 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp649 = *$tmp648;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$String* $tmp650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local2) = $tmp649;
// line 223
frost$core$String* $tmp651 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$String* $tmp652 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local0) = $tmp651;
frost$core$String* $tmp653 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 226
frost$core$Bit $tmp654 = frost$core$Bit$init$builtin_bit(false);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {226};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s657, $tmp656);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 230
org$frostlang$frostc$Annotations* $tmp658 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$Annotations* $tmp659 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local3) = $tmp658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// unreffing REF($68:org.frostlang.frostc.Annotations)
// line 231
// line 232
frost$core$Int64* $tmp660 = &param5->$rawValue;
frost$core$Int64 $tmp661 = *$tmp660;
frost$core$Int64 $tmp662 = (frost$core$Int64) {50};
frost$core$Bit $tmp663 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp661, $tmp662);
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp665 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp666 = *$tmp665;
org$frostlang$frostc$Variable$Kind* $tmp667 = (org$frostlang$frostc$Variable$Kind*) (param5->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp668 = *$tmp667;
*(&local5) = $tmp668;
org$frostlang$frostc$FixedArray** $tmp669 = (org$frostlang$frostc$FixedArray**) (param5->$data + 24);
org$frostlang$frostc$FixedArray* $tmp670 = *$tmp669;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
org$frostlang$frostc$FixedArray* $tmp671 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
*(&local6) = $tmp670;
// line 234
org$frostlang$frostc$Variable$Kind $tmp672 = *(&local5);
frost$core$Int64 $tmp673 = $tmp672.$rawValue;
frost$core$Int64 $tmp674 = (frost$core$Int64) {0};
frost$core$Bit $tmp675 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp673, $tmp674);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block15; else goto block16;
block15:;
// line 236
frost$core$Int64 $tmp677 = (frost$core$Int64) {0};
org$frostlang$frostc$FieldDecl$Kind $tmp678 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp677);
*(&local4) = $tmp678;
goto block14;
block16:;
frost$core$Int64 $tmp679 = (frost$core$Int64) {1};
frost$core$Bit $tmp680 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp673, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block17; else goto block18;
block17:;
// line 239
frost$core$Int64 $tmp682 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp683 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp682);
*(&local4) = $tmp683;
goto block14;
block18:;
frost$core$Int64 $tmp684 = (frost$core$Int64) {2};
frost$core$Bit $tmp685 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp673, $tmp684);
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block19; else goto block20;
block19:;
// line 242
frost$core$Int64 $tmp687 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp688 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp687);
*(&local4) = $tmp688;
// line 243
org$frostlang$frostc$Annotations* $tmp689 = *(&local3);
frost$core$Int64* $tmp690 = &$tmp689->flags;
frost$core$Int64 $tmp691 = *$tmp690;
frost$core$Int64 $tmp692 = (frost$core$Int64) {16};
frost$core$Int64 $tmp693 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp691, $tmp692);
frost$core$Int64* $tmp694 = &$tmp689->flags;
*$tmp694 = $tmp693;
goto block14;
block20:;
frost$core$Int64 $tmp695 = (frost$core$Int64) {3};
frost$core$Bit $tmp696 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp673, $tmp695);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block21; else goto block14;
block21:;
// line 246
frost$core$Int64 $tmp698 = (frost$core$Int64) {3};
org$frostlang$frostc$FieldDecl$Kind $tmp699 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp698);
*(&local4) = $tmp699;
goto block14;
block14:;
// line 249
org$frostlang$frostc$FixedArray* $tmp700 = *(&local6);
ITable* $tmp701 = ((frost$collections$Iterable*) $tmp700)->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
frost$collections$Iterator* $tmp704 = $tmp702(((frost$collections$Iterable*) $tmp700));
goto block22;
block22:;
ITable* $tmp705 = $tmp704->$class->itable;
while ($tmp705->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[0];
frost$core$Bit $tmp708 = $tmp706($tmp704);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block24; else goto block23;
block23:;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp710 = $tmp704->$class->itable;
while ($tmp710->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[1];
frost$core$Object* $tmp713 = $tmp711($tmp704);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp713)));
org$frostlang$frostc$ASTNode* $tmp714 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local7) = ((org$frostlang$frostc$ASTNode*) $tmp713);
// line 250
org$frostlang$frostc$ASTNode* $tmp715 = *(&local7);
frost$core$Int64* $tmp716 = &$tmp715->$rawValue;
frost$core$Int64 $tmp717 = *$tmp716;
frost$core$Int64 $tmp718 = (frost$core$Int64) {14};
frost$core$Bit $tmp719 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp717, $tmp718);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp721 = (org$frostlang$frostc$Position*) ($tmp715->$data + 0);
org$frostlang$frostc$Position $tmp722 = *$tmp721;
*(&local8) = $tmp722;
org$frostlang$frostc$ASTNode** $tmp723 = (org$frostlang$frostc$ASTNode**) ($tmp715->$data + 16);
org$frostlang$frostc$ASTNode* $tmp724 = *$tmp723;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
org$frostlang$frostc$ASTNode* $tmp725 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local9) = $tmp724;
org$frostlang$frostc$ASTNode** $tmp726 = (org$frostlang$frostc$ASTNode**) ($tmp715->$data + 24);
org$frostlang$frostc$ASTNode* $tmp727 = *$tmp726;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
org$frostlang$frostc$ASTNode* $tmp728 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
*(&local10) = $tmp727;
// line 252
*(&local11) = ((frost$core$String*) NULL);
// line 253
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 254
org$frostlang$frostc$ASTNode* $tmp729 = *(&local9);
frost$core$Int64* $tmp730 = &$tmp729->$rawValue;
frost$core$Int64 $tmp731 = *$tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {22};
frost$core$Bit $tmp733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp731, $tmp732);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp735 = (org$frostlang$frostc$Position*) ($tmp729->$data + 0);
org$frostlang$frostc$Position $tmp736 = *$tmp735;
frost$core$String** $tmp737 = (frost$core$String**) ($tmp729->$data + 16);
frost$core$String* $tmp738 = *$tmp737;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$String* $tmp739 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local13) = $tmp738;
// line 256
frost$core$String* $tmp740 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$String* $tmp741 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local11) = $tmp740;
// line 257
org$frostlang$frostc$Type* $tmp742 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
org$frostlang$frostc$Type* $tmp743 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local12) = $tmp742;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
// unreffing REF($233:org.frostlang.frostc.Type)
frost$core$String* $tmp744 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing id
*(&local13) = ((frost$core$String*) NULL);
goto block28;
block30:;
frost$core$Int64 $tmp745 = (frost$core$Int64) {47};
frost$core$Bit $tmp746 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp731, $tmp745);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block31; else goto block32;
block31:;
org$frostlang$frostc$Position* $tmp748 = (org$frostlang$frostc$Position*) ($tmp729->$data + 0);
org$frostlang$frostc$Position $tmp749 = *$tmp748;
frost$core$String** $tmp750 = (frost$core$String**) ($tmp729->$data + 16);
frost$core$String* $tmp751 = *$tmp750;
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$String* $tmp752 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local14) = $tmp751;
org$frostlang$frostc$ASTNode** $tmp753 = (org$frostlang$frostc$ASTNode**) ($tmp729->$data + 24);
org$frostlang$frostc$ASTNode* $tmp754 = *$tmp753;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
org$frostlang$frostc$ASTNode* $tmp755 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local15) = $tmp754;
// line 260
frost$core$String* $tmp756 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$String* $tmp757 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local11) = $tmp756;
// line 261
org$frostlang$frostc$ASTNode* $tmp758 = *(&local15);
frost$core$Bit $tmp759 = frost$core$Bit$init$builtin_bit($tmp758 != NULL);
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp761 = (frost$core$Int64) {261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s762, $tmp761, &$s763);
abort(); // unreachable
block33:;
org$frostlang$frostc$Type* $tmp764 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
org$frostlang$frostc$Type* $tmp765 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local12) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// unreffing REF($291:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp766 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// unreffing idType
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp767 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing id
*(&local14) = ((frost$core$String*) NULL);
goto block28;
block32:;
// line 264
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(false);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp770 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s771, $tmp770);
abort(); // unreachable
block35:;
goto block28;
block28:;
// line 267
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 268
org$frostlang$frostc$ASTNode* $tmp772 = *(&local10);
frost$core$Bit $tmp773 = frost$core$Bit$init$builtin_bit($tmp772 == NULL);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Annotations* $tmp775 = *(&local3);
frost$core$Bit $tmp776 = org$frostlang$frostc$Annotations$get_isWeak$R$frost$core$Bit($tmp775);
*(&local18) = $tmp776;
goto block41;
block40:;
*(&local18) = $tmp773;
goto block41;
block41:;
frost$core$Bit $tmp777 = *(&local18);
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Type* $tmp779 = *(&local12);
org$frostlang$frostc$Type$Kind* $tmp780 = &$tmp779->typeKind;
org$frostlang$frostc$Type$Kind $tmp781 = *$tmp780;
org$frostlang$frostc$Type$Kind$wrapper* $tmp782;
$tmp782 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp782->value = $tmp781;
frost$core$Int64 $tmp783 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp784 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp783);
org$frostlang$frostc$Type$Kind$wrapper* $tmp785;
$tmp785 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp785->value = $tmp784;
ITable* $tmp786 = ((frost$core$Equatable*) $tmp782)->$class->itable;
while ($tmp786->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[0];
frost$core$Bit $tmp789 = $tmp787(((frost$core$Equatable*) $tmp782), ((frost$core$Equatable*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp785)));
// unreffing REF($344:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp782)));
// unreffing REF($340:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local17) = $tmp789;
goto block44;
block43:;
*(&local17) = $tmp777;
goto block44;
block44:;
frost$core$Bit $tmp790 = *(&local17);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block37; else goto block45;
block37:;
// line 270
org$frostlang$frostc$ASTNode* $tmp792 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp793 = (frost$core$Int64) {31};
org$frostlang$frostc$Position $tmp794 = *(&local8);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position($tmp792, $tmp793, $tmp794);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
org$frostlang$frostc$ASTNode* $tmp795 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
*(&local16) = $tmp792;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing REF($361:org.frostlang.frostc.ASTNode)
goto block38;
block45:;
// line 1
// line 273
org$frostlang$frostc$ASTNode* $tmp796 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
org$frostlang$frostc$ASTNode* $tmp797 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local16) = $tmp796;
goto block38;
block38:;
// line 275
org$frostlang$frostc$FieldDecl* $tmp798 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$Position $tmp799 = *(&local8);
frost$core$String* $tmp800 = *(&local0);
org$frostlang$frostc$Annotations* $tmp801 = *(&local3);
org$frostlang$frostc$FieldDecl$Kind $tmp802 = *(&local4);
frost$core$String* $tmp803 = *(&local11);
org$frostlang$frostc$Type* $tmp804 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp805 = *(&local16);
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp798, param1, $tmp799, $tmp800, $tmp801, $tmp802, $tmp803, $tmp804, $tmp805);
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
org$frostlang$frostc$FieldDecl* $tmp806 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local19) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing REF($387:org.frostlang.frostc.FieldDecl)
// line 277
org$frostlang$frostc$SymbolTable** $tmp807 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp808 = *$tmp807;
org$frostlang$frostc$FieldDecl* $tmp809 = *(&local19);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp808, ((org$frostlang$frostc$Symbol*) $tmp809));
// line 278
frost$collections$Array** $tmp810 = &param1->fields;
frost$collections$Array* $tmp811 = *$tmp810;
org$frostlang$frostc$FieldDecl* $tmp812 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp811, ((frost$core$Object*) $tmp812));
org$frostlang$frostc$FieldDecl* $tmp813 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
// unreffing field
*(&local19) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$ASTNode* $tmp814 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing value
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Type* $tmp815 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing type
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp816 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
// unreffing name
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp817 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing rawValue
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp818 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
// unreffing target
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block25;
block27:;
// line 281
frost$core$Bit $tmp819 = frost$core$Bit$init$builtin_bit(false);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp821 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s822, $tmp821);
abort(); // unreachable
block46:;
goto block25;
block25:;
frost$core$Frost$unref$frost$core$Object$Q($tmp713);
// unreffing REF($164:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp823 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing decl
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing REF($153:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$FixedArray* $tmp824 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing decls
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
goto block11;
block13:;
// line 287
frost$core$Bit $tmp825 = frost$core$Bit$init$builtin_bit(false);
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp827 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s828, $tmp827);
abort(); // unreachable
block48:;
goto block11;
block11:;
org$frostlang$frostc$Annotations* $tmp829 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing annotations
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp830 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
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
// line 294
frost$core$Int64* $tmp831 = &param1->$rawValue;
frost$core$Int64 $tmp832 = *$tmp831;
frost$core$Int64 $tmp833 = (frost$core$Int64) {1};
frost$core$Bit $tmp834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp833);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp836 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp837 = *$tmp836;
org$frostlang$frostc$FixedArray** $tmp838 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp839 = *$tmp838;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
org$frostlang$frostc$FixedArray* $tmp840 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local0) = $tmp839;
// line 296
frost$core$Int64 $tmp841 = (frost$core$Int64) {0};
*(&local1) = $tmp841;
// line 297
org$frostlang$frostc$FixedArray* $tmp842 = *(&local0);
ITable* $tmp843 = ((frost$collections$Iterable*) $tmp842)->$class->itable;
while ($tmp843->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[0];
frost$collections$Iterator* $tmp846 = $tmp844(((frost$collections$Iterable*) $tmp842));
goto block4;
block4:;
ITable* $tmp847 = $tmp846->$class->itable;
while ($tmp847->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
frost$core$Bit $tmp850 = $tmp848($tmp846);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block6; else goto block5;
block5:;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp852 = $tmp846->$class->itable;
while ($tmp852->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp852 = $tmp852->next;
}
$fn854 $tmp853 = $tmp852->methods[1];
frost$core$Object* $tmp855 = $tmp853($tmp846);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp855)));
org$frostlang$frostc$ASTNode* $tmp856 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local2) = ((org$frostlang$frostc$ASTNode*) $tmp855);
// line 298
frost$core$Int64 $tmp857 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp858 = *(&local2);
frost$core$Int64 $tmp859 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp858);
int64_t $tmp860 = $tmp857.value;
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860 + $tmp861;
frost$core$Int64 $tmp863 = (frost$core$Int64) {$tmp862};
*(&local1) = $tmp863;
frost$core$Frost$unref$frost$core$Object$Q($tmp855);
// unreffing REF($37:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp864 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing e
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($26:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 300
frost$core$Int64 $tmp865 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp866 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing elements
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp865;
block3:;
frost$core$Int64 $tmp867 = (frost$core$Int64) {2};
frost$core$Bit $tmp868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp867);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp870 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp871 = *$tmp870;
org$frostlang$frostc$ASTNode** $tmp872 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp873 = *$tmp872;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
org$frostlang$frostc$ASTNode* $tmp874 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local3) = $tmp873;
org$frostlang$frostc$ASTNode** $tmp875 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp876 = *$tmp875;
// line 303
org$frostlang$frostc$ASTNode* $tmp877 = *(&local3);
frost$core$Int64 $tmp878 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp877);
org$frostlang$frostc$ASTNode* $tmp879 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing test
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp878;
block8:;
frost$core$Int64 $tmp880 = (frost$core$Int64) {3};
frost$core$Bit $tmp881 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp880);
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block9; else goto block10;
block9:;
// line 306
frost$core$Int64 $tmp883 = (frost$core$Int64) {0};
return $tmp883;
block10:;
frost$core$Int64 $tmp884 = (frost$core$Int64) {4};
frost$core$Bit $tmp885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp884);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block11; else goto block12;
block11:;
// line 309
frost$core$Int64 $tmp887 = (frost$core$Int64) {0};
return $tmp887;
block12:;
frost$core$Int64 $tmp888 = (frost$core$Int64) {5};
frost$core$Bit $tmp889 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp888);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Position* $tmp891 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp892 = *$tmp891;
org$frostlang$frostc$ASTNode** $tmp893 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp894 = *$tmp893;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
org$frostlang$frostc$ASTNode* $tmp895 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local4) = $tmp894;
org$frostlang$frostc$parser$Token$Kind* $tmp896 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 24);
org$frostlang$frostc$parser$Token$Kind $tmp897 = *$tmp896;
org$frostlang$frostc$ASTNode** $tmp898 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp899 = *$tmp898;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
org$frostlang$frostc$ASTNode* $tmp900 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local5) = $tmp899;
// line 312
frost$core$Int64 $tmp901 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp902 = *(&local4);
frost$core$Int64 $tmp903 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp902);
int64_t $tmp904 = $tmp901.value;
int64_t $tmp905 = $tmp903.value;
int64_t $tmp906 = $tmp904 + $tmp905;
frost$core$Int64 $tmp907 = (frost$core$Int64) {$tmp906};
org$frostlang$frostc$ASTNode* $tmp908 = *(&local5);
frost$core$Int64 $tmp909 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp908);
int64_t $tmp910 = $tmp907.value;
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910 + $tmp911;
frost$core$Int64 $tmp913 = (frost$core$Int64) {$tmp912};
org$frostlang$frostc$ASTNode* $tmp914 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing right
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$ASTNode* $tmp915 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// unreffing left
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp913;
block14:;
frost$core$Int64 $tmp916 = (frost$core$Int64) {6};
frost$core$Bit $tmp917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp916);
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block15; else goto block16;
block15:;
// line 315
frost$core$Int64 $tmp919 = (frost$core$Int64) {1};
return $tmp919;
block16:;
frost$core$Int64 $tmp920 = (frost$core$Int64) {7};
frost$core$Bit $tmp921 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp923 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp924 = *$tmp923;
org$frostlang$frostc$FixedArray** $tmp925 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp926 = *$tmp925;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
org$frostlang$frostc$FixedArray* $tmp927 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
*(&local6) = $tmp926;
// line 318
frost$core$Int64 $tmp928 = (frost$core$Int64) {0};
*(&local7) = $tmp928;
// line 319
org$frostlang$frostc$FixedArray* $tmp929 = *(&local6);
ITable* $tmp930 = ((frost$collections$Iterable*) $tmp929)->$class->itable;
while ($tmp930->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[0];
frost$collections$Iterator* $tmp933 = $tmp931(((frost$collections$Iterable*) $tmp929));
goto block19;
block19:;
ITable* $tmp934 = $tmp933->$class->itable;
while ($tmp934->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp934 = $tmp934->next;
}
$fn936 $tmp935 = $tmp934->methods[0];
frost$core$Bit $tmp937 = $tmp935($tmp933);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block21; else goto block20;
block20:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp939 = $tmp933->$class->itable;
while ($tmp939->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
frost$core$Object* $tmp942 = $tmp940($tmp933);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp942)));
org$frostlang$frostc$ASTNode* $tmp943 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp942);
// line 320
frost$core$Int64 $tmp944 = *(&local7);
org$frostlang$frostc$ASTNode* $tmp945 = *(&local8);
frost$core$Int64 $tmp946 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp945);
int64_t $tmp947 = $tmp944.value;
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947 + $tmp948;
frost$core$Int64 $tmp950 = (frost$core$Int64) {$tmp949};
*(&local7) = $tmp950;
frost$core$Frost$unref$frost$core$Object$Q($tmp942);
// unreffing REF($206:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp951 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing s
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($195:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 322
frost$core$Int64 $tmp952 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp953 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing statements
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp952;
block18:;
frost$core$Int64 $tmp954 = (frost$core$Int64) {8};
frost$core$Bit $tmp955 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp954);
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block22; else goto block23;
block22:;
// line 325
frost$core$Int64 $tmp957 = (frost$core$Int64) {1};
return $tmp957;
block23:;
frost$core$Int64 $tmp958 = (frost$core$Int64) {9};
frost$core$Bit $tmp959 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp961 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp962 = *$tmp961;
org$frostlang$frostc$ASTNode** $tmp963 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp964 = *$tmp963;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
org$frostlang$frostc$ASTNode* $tmp965 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
*(&local9) = $tmp964;
org$frostlang$frostc$FixedArray** $tmp966 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp967 = *$tmp966;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
org$frostlang$frostc$FixedArray* $tmp968 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
*(&local10) = $tmp967;
// line 328
org$frostlang$frostc$ASTNode* $tmp969 = *(&local9);
frost$core$Int64 $tmp970 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp969);
*(&local11) = $tmp970;
// line 329
org$frostlang$frostc$FixedArray* $tmp971 = *(&local10);
ITable* $tmp972 = ((frost$collections$Iterable*) $tmp971)->$class->itable;
while ($tmp972->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
frost$collections$Iterator* $tmp975 = $tmp973(((frost$collections$Iterable*) $tmp971));
goto block26;
block26:;
ITable* $tmp976 = $tmp975->$class->itable;
while ($tmp976->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
frost$core$Bit $tmp979 = $tmp977($tmp975);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block28; else goto block27;
block27:;
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp981 = $tmp975->$class->itable;
while ($tmp981->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp981 = $tmp981->next;
}
$fn983 $tmp982 = $tmp981->methods[1];
frost$core$Object* $tmp984 = $tmp982($tmp975);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp984)));
org$frostlang$frostc$ASTNode* $tmp985 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
*(&local12) = ((org$frostlang$frostc$ASTNode*) $tmp984);
// line 330
frost$core$Int64 $tmp986 = *(&local11);
org$frostlang$frostc$ASTNode* $tmp987 = *(&local12);
frost$core$Int64 $tmp988 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp987);
int64_t $tmp989 = $tmp986.value;
int64_t $tmp990 = $tmp988.value;
int64_t $tmp991 = $tmp989 + $tmp990;
frost$core$Int64 $tmp992 = (frost$core$Int64) {$tmp991};
*(&local11) = $tmp992;
frost$core$Frost$unref$frost$core$Object$Q($tmp984);
// unreffing REF($294:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp993 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// unreffing a
*(&local12) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block26;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
// unreffing REF($283:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 332
frost$core$Int64 $tmp994 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp995 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
// unreffing args
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp996 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
// unreffing target
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp994;
block25:;
frost$core$Int64 $tmp997 = (frost$core$Int64) {11};
frost$core$Bit $tmp998 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp997);
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block29; else goto block30;
block29:;
org$frostlang$frostc$Position* $tmp1000 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1001 = *$tmp1000;
org$frostlang$frostc$ASTNode** $tmp1002 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1003 = *$tmp1002;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
org$frostlang$frostc$ASTNode* $tmp1004 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local13) = $tmp1003;
org$frostlang$frostc$ChoiceCase** $tmp1005 = (org$frostlang$frostc$ChoiceCase**) (param1->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp1006 = *$tmp1005;
frost$core$Int64* $tmp1007 = (frost$core$Int64*) (param1->$data + 32);
frost$core$Int64 $tmp1008 = *$tmp1007;
// line 335
org$frostlang$frostc$ASTNode* $tmp1009 = *(&local13);
frost$core$Int64 $tmp1010 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1009);
org$frostlang$frostc$ASTNode* $tmp1011 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// unreffing base
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1010;
block30:;
frost$core$Int64 $tmp1012 = (frost$core$Int64) {13};
frost$core$Bit $tmp1013 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1012);
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block31; else goto block32;
block31:;
// line 338
frost$core$Int64 $tmp1015 = (frost$core$Int64) {1};
return $tmp1015;
block32:;
frost$core$Int64 $tmp1016 = (frost$core$Int64) {14};
frost$core$Bit $tmp1017 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1016);
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block33; else goto block34;
block33:;
org$frostlang$frostc$Position* $tmp1019 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1020 = *$tmp1019;
org$frostlang$frostc$ASTNode** $tmp1021 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1022 = *$tmp1021;
org$frostlang$frostc$ASTNode** $tmp1023 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1024 = *$tmp1023;
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
org$frostlang$frostc$ASTNode* $tmp1025 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
*(&local14) = $tmp1024;
// line 341
org$frostlang$frostc$ASTNode* $tmp1026 = *(&local14);
frost$core$Bit $tmp1027 = frost$core$Bit$init$builtin_bit($tmp1026 == NULL);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block35; else goto block36;
block35:;
// line 342
frost$core$Int64 $tmp1029 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1030 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
// unreffing value
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1029;
block36:;
// line 344
org$frostlang$frostc$ASTNode* $tmp1031 = *(&local14);
frost$core$Bit $tmp1032 = frost$core$Bit$init$builtin_bit($tmp1031 != NULL);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1034 = (frost$core$Int64) {344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1035, $tmp1034, &$s1036);
abort(); // unreachable
block37:;
frost$core$Int64 $tmp1037 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1031);
org$frostlang$frostc$ASTNode* $tmp1038 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
// unreffing value
*(&local14) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1037;
block34:;
frost$core$Int64 $tmp1039 = (frost$core$Int64) {15};
frost$core$Bit $tmp1040 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1039);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block39; else goto block40;
block39:;
org$frostlang$frostc$Position* $tmp1042 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1043 = *$tmp1042;
frost$core$String** $tmp1044 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1045 = *$tmp1044;
org$frostlang$frostc$FixedArray** $tmp1046 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1047 = *$tmp1046;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
org$frostlang$frostc$FixedArray* $tmp1048 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
*(&local15) = $tmp1047;
org$frostlang$frostc$ASTNode** $tmp1049 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1050 = *$tmp1049;
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
org$frostlang$frostc$ASTNode* $tmp1051 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
*(&local16) = $tmp1050;
// line 347
org$frostlang$frostc$ASTNode* $tmp1052 = *(&local16);
frost$core$Int64 $tmp1053 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1052);
*(&local17) = $tmp1053;
// line 348
org$frostlang$frostc$FixedArray* $tmp1054 = *(&local15);
ITable* $tmp1055 = ((frost$collections$Iterable*) $tmp1054)->$class->itable;
while ($tmp1055->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1055 = $tmp1055->next;
}
$fn1057 $tmp1056 = $tmp1055->methods[0];
frost$collections$Iterator* $tmp1058 = $tmp1056(((frost$collections$Iterable*) $tmp1054));
goto block41;
block41:;
ITable* $tmp1059 = $tmp1058->$class->itable;
while ($tmp1059->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
frost$core$Bit $tmp1062 = $tmp1060($tmp1058);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block43; else goto block42;
block42:;
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1064 = $tmp1058->$class->itable;
while ($tmp1064->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1064 = $tmp1064->next;
}
$fn1066 $tmp1065 = $tmp1064->methods[1];
frost$core$Object* $tmp1067 = $tmp1065($tmp1058);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1067)));
org$frostlang$frostc$ASTNode* $tmp1068 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local18) = ((org$frostlang$frostc$ASTNode*) $tmp1067);
// line 349
frost$core$Int64 $tmp1069 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1070 = *(&local18);
frost$core$Int64 $tmp1071 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1070);
int64_t $tmp1072 = $tmp1069.value;
int64_t $tmp1073 = $tmp1071.value;
int64_t $tmp1074 = $tmp1072 + $tmp1073;
frost$core$Int64 $tmp1075 = (frost$core$Int64) {$tmp1074};
*(&local17) = $tmp1075;
frost$core$Frost$unref$frost$core$Object$Q($tmp1067);
// unreffing REF($465:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1076 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
// unreffing s
*(&local18) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($454:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 351
frost$core$Int64 $tmp1077 = *(&local17);
org$frostlang$frostc$ASTNode* $tmp1078 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
// unreffing test
*(&local16) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1079 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
// unreffing statements
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1077;
block40:;
frost$core$Int64 $tmp1080 = (frost$core$Int64) {16};
frost$core$Bit $tmp1081 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1080);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp1083 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1084 = *$tmp1083;
org$frostlang$frostc$ASTNode** $tmp1085 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1086 = *$tmp1085;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
org$frostlang$frostc$ASTNode* $tmp1087 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
*(&local19) = $tmp1086;
frost$core$String** $tmp1088 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1089 = *$tmp1088;
// line 354
org$frostlang$frostc$ASTNode* $tmp1090 = *(&local19);
frost$core$Int64 $tmp1091 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1090);
org$frostlang$frostc$ASTNode* $tmp1092 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
// unreffing base
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1091;
block45:;
frost$core$Int64 $tmp1093 = (frost$core$Int64) {17};
frost$core$Bit $tmp1094 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1093);
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp1096 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1097 = *$tmp1096;
org$frostlang$frostc$ASTNode** $tmp1098 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1099 = *$tmp1098;
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
org$frostlang$frostc$ASTNode* $tmp1100 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local20) = $tmp1099;
frost$core$String** $tmp1101 = (frost$core$String**) (param1->$data + 24);
frost$core$String* $tmp1102 = *$tmp1101;
org$frostlang$frostc$FixedArray** $tmp1103 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1104 = *$tmp1103;
// line 357
org$frostlang$frostc$ASTNode* $tmp1105 = *(&local20);
frost$core$Int64 $tmp1106 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1105);
org$frostlang$frostc$ASTNode* $tmp1107 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// unreffing base
*(&local20) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1106;
block47:;
frost$core$Int64 $tmp1108 = (frost$core$Int64) {20};
frost$core$Bit $tmp1109 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1108);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp1111 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1112 = *$tmp1111;
frost$core$String** $tmp1113 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1114 = *$tmp1113;
org$frostlang$frostc$ASTNode** $tmp1115 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1116 = *$tmp1115;
org$frostlang$frostc$ASTNode** $tmp1117 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1118 = *$tmp1117;
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
org$frostlang$frostc$ASTNode* $tmp1119 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local21) = $tmp1118;
org$frostlang$frostc$FixedArray** $tmp1120 = (org$frostlang$frostc$FixedArray**) (param1->$data + 40);
org$frostlang$frostc$FixedArray* $tmp1121 = *$tmp1120;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
org$frostlang$frostc$FixedArray* $tmp1122 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
*(&local22) = $tmp1121;
// line 360
org$frostlang$frostc$ASTNode* $tmp1123 = *(&local21);
frost$core$Int64 $tmp1124 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1123);
*(&local23) = $tmp1124;
// line 361
org$frostlang$frostc$FixedArray* $tmp1125 = *(&local22);
ITable* $tmp1126 = ((frost$collections$Iterable*) $tmp1125)->$class->itable;
while ($tmp1126->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1126 = $tmp1126->next;
}
$fn1128 $tmp1127 = $tmp1126->methods[0];
frost$collections$Iterator* $tmp1129 = $tmp1127(((frost$collections$Iterable*) $tmp1125));
goto block50;
block50:;
ITable* $tmp1130 = $tmp1129->$class->itable;
while ($tmp1130->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1130 = $tmp1130->next;
}
$fn1132 $tmp1131 = $tmp1130->methods[0];
frost$core$Bit $tmp1133 = $tmp1131($tmp1129);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block52; else goto block51;
block51:;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1135 = $tmp1129->$class->itable;
while ($tmp1135->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1135 = $tmp1135->next;
}
$fn1137 $tmp1136 = $tmp1135->methods[1];
frost$core$Object* $tmp1138 = $tmp1136($tmp1129);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1138)));
org$frostlang$frostc$ASTNode* $tmp1139 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local24) = ((org$frostlang$frostc$ASTNode*) $tmp1138);
// line 362
frost$core$Int64 $tmp1140 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp1141 = *(&local24);
frost$core$Int64 $tmp1142 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1141);
int64_t $tmp1143 = $tmp1140.value;
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143 + $tmp1144;
frost$core$Int64 $tmp1146 = (frost$core$Int64) {$tmp1145};
*(&local23) = $tmp1146;
frost$core$Frost$unref$frost$core$Object$Q($tmp1138);
// unreffing REF($609:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1147 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
// unreffing s
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
// unreffing REF($598:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 364
frost$core$Int64 $tmp1148 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp1149 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
// unreffing statements
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1150 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// unreffing list
*(&local21) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1148;
block49:;
frost$core$Int64 $tmp1151 = (frost$core$Int64) {21};
frost$core$Bit $tmp1152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1151);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block53; else goto block54;
block53:;
// line 367
frost$core$Int64 $tmp1154 = (frost$core$Int64) {0};
return $tmp1154;
block54:;
frost$core$Int64 $tmp1155 = (frost$core$Int64) {22};
frost$core$Bit $tmp1156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1155);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block55; else goto block56;
block55:;
// line 370
frost$core$Int64 $tmp1158 = (frost$core$Int64) {1};
return $tmp1158;
block56:;
frost$core$Int64 $tmp1159 = (frost$core$Int64) {24};
frost$core$Bit $tmp1160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1159);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Position* $tmp1162 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1163 = *$tmp1162;
org$frostlang$frostc$ASTNode** $tmp1164 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1165 = *$tmp1164;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
org$frostlang$frostc$ASTNode* $tmp1166 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1166));
*(&local25) = $tmp1165;
org$frostlang$frostc$FixedArray** $tmp1167 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1168 = *$tmp1167;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
org$frostlang$frostc$FixedArray* $tmp1169 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local26) = $tmp1168;
org$frostlang$frostc$ASTNode** $tmp1170 = (org$frostlang$frostc$ASTNode**) (param1->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1171 = *$tmp1170;
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
org$frostlang$frostc$ASTNode* $tmp1172 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local27) = $tmp1171;
// line 373
org$frostlang$frostc$ASTNode* $tmp1173 = *(&local25);
frost$core$Int64 $tmp1174 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1173);
*(&local28) = $tmp1174;
// line 374
org$frostlang$frostc$FixedArray* $tmp1175 = *(&local26);
ITable* $tmp1176 = ((frost$collections$Iterable*) $tmp1175)->$class->itable;
while ($tmp1176->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1176 = $tmp1176->next;
}
$fn1178 $tmp1177 = $tmp1176->methods[0];
frost$collections$Iterator* $tmp1179 = $tmp1177(((frost$collections$Iterable*) $tmp1175));
goto block59;
block59:;
ITable* $tmp1180 = $tmp1179->$class->itable;
while ($tmp1180->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1180 = $tmp1180->next;
}
$fn1182 $tmp1181 = $tmp1180->methods[0];
frost$core$Bit $tmp1183 = $tmp1181($tmp1179);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block61; else goto block60;
block60:;
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1185 = $tmp1179->$class->itable;
while ($tmp1185->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1185 = $tmp1185->next;
}
$fn1187 $tmp1186 = $tmp1185->methods[1];
frost$core$Object* $tmp1188 = $tmp1186($tmp1179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1188)));
org$frostlang$frostc$ASTNode* $tmp1189 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
*(&local29) = ((org$frostlang$frostc$ASTNode*) $tmp1188);
// line 375
frost$core$Int64 $tmp1190 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1191 = *(&local29);
frost$core$Int64 $tmp1192 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1191);
int64_t $tmp1193 = $tmp1190.value;
int64_t $tmp1194 = $tmp1192.value;
int64_t $tmp1195 = $tmp1193 + $tmp1194;
frost$core$Int64 $tmp1196 = (frost$core$Int64) {$tmp1195};
*(&local28) = $tmp1196;
frost$core$Frost$unref$frost$core$Object$Q($tmp1188);
// unreffing REF($718:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1197 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1197));
// unreffing s
*(&local29) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block59;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
// unreffing REF($707:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 377
org$frostlang$frostc$ASTNode* $tmp1198 = *(&local27);
frost$core$Bit $tmp1199 = frost$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block62; else goto block63;
block62:;
// line 378
frost$core$Int64 $tmp1201 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1202 = *(&local27);
frost$core$Bit $tmp1203 = frost$core$Bit$init$builtin_bit($tmp1202 != NULL);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1206, $tmp1205, &$s1207);
abort(); // unreachable
block64:;
frost$core$Int64 $tmp1208 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1202);
int64_t $tmp1209 = $tmp1201.value;
int64_t $tmp1210 = $tmp1208.value;
int64_t $tmp1211 = $tmp1209 + $tmp1210;
frost$core$Int64 $tmp1212 = (frost$core$Int64) {$tmp1211};
*(&local28) = $tmp1212;
goto block63;
block63:;
// line 380
frost$core$Int64 $tmp1213 = *(&local28);
org$frostlang$frostc$ASTNode* $tmp1214 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
// unreffing ifFalse
*(&local27) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1215 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
// unreffing ifTrue
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1216 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
// unreffing test
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1213;
block58:;
frost$core$Int64 $tmp1217 = (frost$core$Int64) {25};
frost$core$Bit $tmp1218 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block66; else goto block67;
block66:;
// line 383
frost$core$Int64 $tmp1220 = (frost$core$Int64) {1};
return $tmp1220;
block67:;
frost$core$Int64 $tmp1221 = (frost$core$Int64) {27};
frost$core$Bit $tmp1222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1221);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block68; else goto block69;
block68:;
org$frostlang$frostc$Position* $tmp1224 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1225 = *$tmp1224;
frost$core$String** $tmp1226 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1227 = *$tmp1226;
org$frostlang$frostc$FixedArray** $tmp1228 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1229 = *$tmp1228;
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
org$frostlang$frostc$FixedArray* $tmp1230 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local30) = $tmp1229;
// line 386
frost$core$Int64 $tmp1231 = (frost$core$Int64) {0};
*(&local31) = $tmp1231;
// line 387
org$frostlang$frostc$FixedArray* $tmp1232 = *(&local30);
ITable* $tmp1233 = ((frost$collections$Iterable*) $tmp1232)->$class->itable;
while ($tmp1233->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1233 = $tmp1233->next;
}
$fn1235 $tmp1234 = $tmp1233->methods[0];
frost$collections$Iterator* $tmp1236 = $tmp1234(((frost$collections$Iterable*) $tmp1232));
goto block70;
block70:;
ITable* $tmp1237 = $tmp1236->$class->itable;
while ($tmp1237->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1237 = $tmp1237->next;
}
$fn1239 $tmp1238 = $tmp1237->methods[0];
frost$core$Bit $tmp1240 = $tmp1238($tmp1236);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block72; else goto block71;
block71:;
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1242 = $tmp1236->$class->itable;
while ($tmp1242->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1242 = $tmp1242->next;
}
$fn1244 $tmp1243 = $tmp1242->methods[1];
frost$core$Object* $tmp1245 = $tmp1243($tmp1236);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1245)));
org$frostlang$frostc$ASTNode* $tmp1246 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
*(&local32) = ((org$frostlang$frostc$ASTNode*) $tmp1245);
// line 388
frost$core$Int64 $tmp1247 = *(&local31);
org$frostlang$frostc$ASTNode* $tmp1248 = *(&local32);
frost$core$Int64 $tmp1249 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1248);
int64_t $tmp1250 = $tmp1247.value;
int64_t $tmp1251 = $tmp1249.value;
int64_t $tmp1252 = $tmp1250 + $tmp1251;
frost$core$Int64 $tmp1253 = (frost$core$Int64) {$tmp1252};
*(&local31) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q($tmp1245);
// unreffing REF($832:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1254 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
// unreffing s
*(&local32) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block70;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
// unreffing REF($821:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 390
frost$core$Int64 $tmp1255 = *(&local31);
org$frostlang$frostc$FixedArray* $tmp1256 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// unreffing statements
*(&local30) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1255;
block69:;
frost$core$Int64 $tmp1257 = (frost$core$Int64) {28};
frost$core$Bit $tmp1258 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1257);
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block73; else goto block74;
block73:;
org$frostlang$frostc$Position* $tmp1260 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1261 = *$tmp1260;
org$frostlang$frostc$ASTNode** $tmp1262 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1263 = *$tmp1262;
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
org$frostlang$frostc$ASTNode* $tmp1264 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
*(&local33) = $tmp1263;
org$frostlang$frostc$FixedArray** $tmp1265 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1266 = *$tmp1265;
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
org$frostlang$frostc$FixedArray* $tmp1267 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
*(&local34) = $tmp1266;
org$frostlang$frostc$FixedArray** $tmp1268 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1269 = *$tmp1268;
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
org$frostlang$frostc$FixedArray* $tmp1270 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local35) = $tmp1269;
// line 393
org$frostlang$frostc$ASTNode* $tmp1271 = *(&local33);
frost$core$Int64 $tmp1272 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1271);
*(&local36) = $tmp1272;
// line 394
org$frostlang$frostc$FixedArray* $tmp1273 = *(&local34);
ITable* $tmp1274 = ((frost$collections$Iterable*) $tmp1273)->$class->itable;
while ($tmp1274->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[0];
frost$collections$Iterator* $tmp1277 = $tmp1275(((frost$collections$Iterable*) $tmp1273));
goto block75;
block75:;
ITable* $tmp1278 = $tmp1277->$class->itable;
while ($tmp1278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1278 = $tmp1278->next;
}
$fn1280 $tmp1279 = $tmp1278->methods[0];
frost$core$Bit $tmp1281 = $tmp1279($tmp1277);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block77; else goto block76;
block76:;
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1283 = $tmp1277->$class->itable;
while ($tmp1283->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1283 = $tmp1283->next;
}
$fn1285 $tmp1284 = $tmp1283->methods[1];
frost$core$Object* $tmp1286 = $tmp1284($tmp1277);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1286)));
org$frostlang$frostc$ASTNode* $tmp1287 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local37) = ((org$frostlang$frostc$ASTNode*) $tmp1286);
// line 395
frost$core$Int64 $tmp1288 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1289 = *(&local37);
frost$core$Int64 $tmp1290 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1289);
int64_t $tmp1291 = $tmp1288.value;
int64_t $tmp1292 = $tmp1290.value;
int64_t $tmp1293 = $tmp1291 + $tmp1292;
frost$core$Int64 $tmp1294 = (frost$core$Int64) {$tmp1293};
*(&local36) = $tmp1294;
frost$core$Frost$unref$frost$core$Object$Q($tmp1286);
// unreffing REF($922:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1295 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
// unreffing w
*(&local37) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block75;
block77:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
// unreffing REF($911:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 397
org$frostlang$frostc$FixedArray* $tmp1296 = *(&local35);
frost$core$Bit $tmp1297 = frost$core$Bit$init$builtin_bit($tmp1296 != NULL);
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block78; else goto block79;
block78:;
// line 398
org$frostlang$frostc$FixedArray* $tmp1299 = *(&local35);
frost$core$Bit $tmp1300 = frost$core$Bit$init$builtin_bit($tmp1299 != NULL);
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp1302 = (frost$core$Int64) {398};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1303, $tmp1302, &$s1304);
abort(); // unreachable
block80:;
ITable* $tmp1305 = ((frost$collections$Iterable*) $tmp1299)->$class->itable;
while ($tmp1305->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1305 = $tmp1305->next;
}
$fn1307 $tmp1306 = $tmp1305->methods[0];
frost$collections$Iterator* $tmp1308 = $tmp1306(((frost$collections$Iterable*) $tmp1299));
goto block82;
block82:;
ITable* $tmp1309 = $tmp1308->$class->itable;
while ($tmp1309->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[0];
frost$core$Bit $tmp1312 = $tmp1310($tmp1308);
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block84; else goto block83;
block83:;
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1314 = $tmp1308->$class->itable;
while ($tmp1314->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1314 = $tmp1314->next;
}
$fn1316 $tmp1315 = $tmp1314->methods[1];
frost$core$Object* $tmp1317 = $tmp1315($tmp1308);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1317)));
org$frostlang$frostc$ASTNode* $tmp1318 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local38) = ((org$frostlang$frostc$ASTNode*) $tmp1317);
// line 399
frost$core$Int64 $tmp1319 = *(&local36);
org$frostlang$frostc$ASTNode* $tmp1320 = *(&local38);
frost$core$Int64 $tmp1321 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1320);
int64_t $tmp1322 = $tmp1319.value;
int64_t $tmp1323 = $tmp1321.value;
int64_t $tmp1324 = $tmp1322 + $tmp1323;
frost$core$Int64 $tmp1325 = (frost$core$Int64) {$tmp1324};
*(&local36) = $tmp1325;
frost$core$Frost$unref$frost$core$Object$Q($tmp1317);
// unreffing REF($980:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1326 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing s
*(&local38) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block82;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// unreffing REF($969:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block79;
block79:;
// line 402
frost$core$Int64 $tmp1327 = *(&local36);
org$frostlang$frostc$FixedArray* $tmp1328 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
// unreffing other
*(&local35) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1329 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
// unreffing whens
*(&local34) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1330 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
// unreffing value
*(&local33) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1327;
block74:;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {29};
frost$core$Bit $tmp1332 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1331);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block85; else goto block86;
block85:;
// line 405
frost$core$Int64 $tmp1334 = (frost$core$Int64) {10};
return $tmp1334;
block86:;
frost$core$Int64 $tmp1335 = (frost$core$Int64) {31};
frost$core$Bit $tmp1336 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1335);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block87; else goto block88;
block87:;
// line 408
frost$core$Int64 $tmp1338 = (frost$core$Int64) {1};
return $tmp1338;
block88:;
frost$core$Int64 $tmp1339 = (frost$core$Int64) {32};
frost$core$Bit $tmp1340 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1339);
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block89; else goto block90;
block89:;
// line 411
frost$core$Int64 $tmp1342 = (frost$core$Int64) {0};
return $tmp1342;
block90:;
frost$core$Int64 $tmp1343 = (frost$core$Int64) {35};
frost$core$Bit $tmp1344 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1343);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block91; else goto block92;
block91:;
org$frostlang$frostc$Position* $tmp1346 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1347 = *$tmp1346;
org$frostlang$frostc$parser$Token$Kind* $tmp1348 = (org$frostlang$frostc$parser$Token$Kind*) (param1->$data + 16);
org$frostlang$frostc$parser$Token$Kind $tmp1349 = *$tmp1348;
org$frostlang$frostc$ASTNode** $tmp1350 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1351 = *$tmp1350;
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
org$frostlang$frostc$ASTNode* $tmp1352 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local39) = $tmp1351;
// line 414
frost$core$Int64 $tmp1353 = (frost$core$Int64) {1};
org$frostlang$frostc$ASTNode* $tmp1354 = *(&local39);
frost$core$Int64 $tmp1355 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1354);
int64_t $tmp1356 = $tmp1353.value;
int64_t $tmp1357 = $tmp1355.value;
int64_t $tmp1358 = $tmp1356 + $tmp1357;
frost$core$Int64 $tmp1359 = (frost$core$Int64) {$tmp1358};
org$frostlang$frostc$ASTNode* $tmp1360 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
// unreffing base
*(&local39) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1359;
block92:;
frost$core$Int64 $tmp1361 = (frost$core$Int64) {36};
frost$core$Bit $tmp1362 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1361);
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block93; else goto block94;
block93:;
// line 417
frost$core$Int64 $tmp1364 = (frost$core$Int64) {1};
return $tmp1364;
block94:;
frost$core$Int64 $tmp1365 = (frost$core$Int64) {37};
frost$core$Bit $tmp1366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1365);
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block95; else goto block96;
block95:;
// line 420
frost$core$Int64 $tmp1368 = (frost$core$Int64) {1};
return $tmp1368;
block96:;
frost$core$Int64 $tmp1369 = (frost$core$Int64) {38};
frost$core$Bit $tmp1370 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1369);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block97; else goto block98;
block97:;
// line 423
frost$core$Int64 $tmp1372 = (frost$core$Int64) {1};
return $tmp1372;
block98:;
frost$core$Int64 $tmp1373 = (frost$core$Int64) {39};
frost$core$Bit $tmp1374 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1373);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block99; else goto block100;
block99:;
org$frostlang$frostc$Position* $tmp1376 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1377 = *$tmp1376;
org$frostlang$frostc$ASTNode** $tmp1378 = (org$frostlang$frostc$ASTNode**) (param1->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1379 = *$tmp1378;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
org$frostlang$frostc$ASTNode* $tmp1380 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local40) = $tmp1379;
// line 426
org$frostlang$frostc$ASTNode* $tmp1381 = *(&local40);
frost$core$Bit $tmp1382 = frost$core$Bit$init$builtin_bit($tmp1381 == NULL);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block101; else goto block102;
block101:;
// line 427
frost$core$Int64 $tmp1384 = (frost$core$Int64) {0};
org$frostlang$frostc$ASTNode* $tmp1385 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
// unreffing value
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1384;
block102:;
// line 429
org$frostlang$frostc$ASTNode* $tmp1386 = *(&local40);
frost$core$Bit $tmp1387 = frost$core$Bit$init$builtin_bit($tmp1386 != NULL);
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp1389 = (frost$core$Int64) {429};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1390, $tmp1389, &$s1391);
abort(); // unreachable
block103:;
frost$core$Int64 $tmp1392 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1386);
org$frostlang$frostc$ASTNode* $tmp1393 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1393));
// unreffing value
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1392;
block100:;
frost$core$Int64 $tmp1394 = (frost$core$Int64) {40};
frost$core$Bit $tmp1395 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block105; else goto block106;
block105:;
// line 432
frost$core$Int64 $tmp1397 = (frost$core$Int64) {1};
return $tmp1397;
block106:;
frost$core$Int64 $tmp1398 = (frost$core$Int64) {41};
frost$core$Bit $tmp1399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1398);
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block107; else goto block108;
block107:;
// line 435
frost$core$Int64 $tmp1401 = (frost$core$Int64) {1};
return $tmp1401;
block108:;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {42};
frost$core$Bit $tmp1403 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1402);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block109; else goto block110;
block109:;
// line 438
frost$core$Int64 $tmp1405 = (frost$core$Int64) {1};
return $tmp1405;
block110:;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {45};
frost$core$Bit $tmp1407 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block111; else goto block112;
block111:;
// line 441
frost$core$Int64 $tmp1409 = (frost$core$Int64) {0};
return $tmp1409;
block112:;
frost$core$Int64 $tmp1410 = (frost$core$Int64) {46};
frost$core$Bit $tmp1411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1410);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block113; else goto block114;
block113:;
// line 444
frost$core$Int64 $tmp1413 = (frost$core$Int64) {10};
return $tmp1413;
block114:;
frost$core$Int64 $tmp1414 = (frost$core$Int64) {48};
frost$core$Bit $tmp1415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1414);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block115; else goto block116;
block115:;
// line 447
frost$core$Int64 $tmp1417 = (frost$core$Int64) {10};
return $tmp1417;
block116:;
frost$core$Int64 $tmp1418 = (frost$core$Int64) {50};
frost$core$Bit $tmp1419 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1418);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block117; else goto block118;
block117:;
org$frostlang$frostc$Position* $tmp1421 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1422 = *$tmp1421;
org$frostlang$frostc$Variable$Kind* $tmp1423 = (org$frostlang$frostc$Variable$Kind*) (param1->$data + 16);
org$frostlang$frostc$Variable$Kind $tmp1424 = *$tmp1423;
org$frostlang$frostc$FixedArray** $tmp1425 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1426 = *$tmp1425;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
org$frostlang$frostc$FixedArray* $tmp1427 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local41) = $tmp1426;
// line 450
frost$core$Int64 $tmp1428 = (frost$core$Int64) {0};
*(&local42) = $tmp1428;
// line 451
org$frostlang$frostc$FixedArray* $tmp1429 = *(&local41);
ITable* $tmp1430 = ((frost$collections$Iterable*) $tmp1429)->$class->itable;
while ($tmp1430->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[0];
frost$collections$Iterator* $tmp1433 = $tmp1431(((frost$collections$Iterable*) $tmp1429));
goto block119;
block119:;
ITable* $tmp1434 = $tmp1433->$class->itable;
while ($tmp1434->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[0];
frost$core$Bit $tmp1437 = $tmp1435($tmp1433);
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block121; else goto block120;
block120:;
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1439 = $tmp1433->$class->itable;
while ($tmp1439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1439 = $tmp1439->next;
}
$fn1441 $tmp1440 = $tmp1439->methods[1];
frost$core$Object* $tmp1442 = $tmp1440($tmp1433);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1442)));
org$frostlang$frostc$ASTNode* $tmp1443 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local43) = ((org$frostlang$frostc$ASTNode*) $tmp1442);
// line 452
frost$core$Int64 $tmp1444 = *(&local42);
org$frostlang$frostc$ASTNode* $tmp1445 = *(&local43);
frost$core$Int64 $tmp1446 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1445);
int64_t $tmp1447 = $tmp1444.value;
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447 + $tmp1448;
frost$core$Int64 $tmp1450 = (frost$core$Int64) {$tmp1449};
*(&local42) = $tmp1450;
frost$core$Frost$unref$frost$core$Object$Q($tmp1442);
// unreffing REF($1225:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1451 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing decl
*(&local43) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block119;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// unreffing REF($1214:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 454
frost$core$Int64 $tmp1452 = *(&local42);
org$frostlang$frostc$FixedArray* $tmp1453 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
// unreffing decls
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1452;
block118:;
frost$core$Int64 $tmp1454 = (frost$core$Int64) {51};
frost$core$Bit $tmp1455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1454);
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block122; else goto block123;
block122:;
org$frostlang$frostc$Position* $tmp1457 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1458 = *$tmp1457;
org$frostlang$frostc$FixedArray** $tmp1459 = (org$frostlang$frostc$FixedArray**) (param1->$data + 16);
org$frostlang$frostc$FixedArray* $tmp1460 = *$tmp1459;
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1460));
org$frostlang$frostc$FixedArray* $tmp1461 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local44) = $tmp1460;
org$frostlang$frostc$FixedArray** $tmp1462 = (org$frostlang$frostc$FixedArray**) (param1->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1463 = *$tmp1462;
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
org$frostlang$frostc$FixedArray* $tmp1464 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local45) = $tmp1463;
// line 457
frost$core$Int64 $tmp1465 = (frost$core$Int64) {0};
*(&local46) = $tmp1465;
// line 458
org$frostlang$frostc$FixedArray* $tmp1466 = *(&local44);
ITable* $tmp1467 = ((frost$collections$Iterable*) $tmp1466)->$class->itable;
while ($tmp1467->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1467 = $tmp1467->next;
}
$fn1469 $tmp1468 = $tmp1467->methods[0];
frost$collections$Iterator* $tmp1470 = $tmp1468(((frost$collections$Iterable*) $tmp1466));
goto block124;
block124:;
ITable* $tmp1471 = $tmp1470->$class->itable;
while ($tmp1471->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1471 = $tmp1471->next;
}
$fn1473 $tmp1472 = $tmp1471->methods[0];
frost$core$Bit $tmp1474 = $tmp1472($tmp1470);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block126; else goto block125;
block125:;
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1476 = $tmp1470->$class->itable;
while ($tmp1476->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[1];
frost$core$Object* $tmp1479 = $tmp1477($tmp1470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1479)));
org$frostlang$frostc$ASTNode* $tmp1480 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
*(&local47) = ((org$frostlang$frostc$ASTNode*) $tmp1479);
// line 459
frost$core$Int64 $tmp1481 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1482 = *(&local47);
frost$core$Int64 $tmp1483 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1482);
int64_t $tmp1484 = $tmp1481.value;
int64_t $tmp1485 = $tmp1483.value;
int64_t $tmp1486 = $tmp1484 + $tmp1485;
frost$core$Int64 $tmp1487 = (frost$core$Int64) {$tmp1486};
*(&local46) = $tmp1487;
frost$core$Frost$unref$frost$core$Object$Q($tmp1479);
// unreffing REF($1305:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1488 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
// unreffing test
*(&local47) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block124;
block126:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
// unreffing REF($1294:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 461
org$frostlang$frostc$FixedArray* $tmp1489 = *(&local45);
ITable* $tmp1490 = ((frost$collections$Iterable*) $tmp1489)->$class->itable;
while ($tmp1490->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1490 = $tmp1490->next;
}
$fn1492 $tmp1491 = $tmp1490->methods[0];
frost$collections$Iterator* $tmp1493 = $tmp1491(((frost$collections$Iterable*) $tmp1489));
goto block127;
block127:;
ITable* $tmp1494 = $tmp1493->$class->itable;
while ($tmp1494->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1494 = $tmp1494->next;
}
$fn1496 $tmp1495 = $tmp1494->methods[0];
frost$core$Bit $tmp1497 = $tmp1495($tmp1493);
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block129; else goto block128;
block128:;
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1499 = $tmp1493->$class->itable;
while ($tmp1499->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1499 = $tmp1499->next;
}
$fn1501 $tmp1500 = $tmp1499->methods[1];
frost$core$Object* $tmp1502 = $tmp1500($tmp1493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1502)));
org$frostlang$frostc$ASTNode* $tmp1503 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
*(&local48) = ((org$frostlang$frostc$ASTNode*) $tmp1502);
// line 462
frost$core$Int64 $tmp1504 = *(&local46);
org$frostlang$frostc$ASTNode* $tmp1505 = *(&local48);
frost$core$Int64 $tmp1506 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1505);
int64_t $tmp1507 = $tmp1504.value;
int64_t $tmp1508 = $tmp1506.value;
int64_t $tmp1509 = $tmp1507 + $tmp1508;
frost$core$Int64 $tmp1510 = (frost$core$Int64) {$tmp1509};
*(&local46) = $tmp1510;
frost$core$Frost$unref$frost$core$Object$Q($tmp1502);
// unreffing REF($1350:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1511 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1511));
// unreffing s
*(&local48) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block127;
block129:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
// unreffing REF($1339:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 464
frost$core$Int64 $tmp1512 = *(&local46);
org$frostlang$frostc$FixedArray* $tmp1513 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
// unreffing statements
*(&local45) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1514 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
// unreffing tests
*(&local44) = ((org$frostlang$frostc$FixedArray*) NULL);
return $tmp1512;
block123:;
frost$core$Int64 $tmp1515 = (frost$core$Int64) {52};
frost$core$Bit $tmp1516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp832, $tmp1515);
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block130; else goto block131;
block130:;
org$frostlang$frostc$Position* $tmp1518 = (org$frostlang$frostc$Position*) (param1->$data + 0);
org$frostlang$frostc$Position $tmp1519 = *$tmp1518;
frost$core$String** $tmp1520 = (frost$core$String**) (param1->$data + 16);
frost$core$String* $tmp1521 = *$tmp1520;
org$frostlang$frostc$ASTNode** $tmp1522 = (org$frostlang$frostc$ASTNode**) (param1->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1523 = *$tmp1522;
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
org$frostlang$frostc$ASTNode* $tmp1524 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local49) = $tmp1523;
org$frostlang$frostc$FixedArray** $tmp1525 = (org$frostlang$frostc$FixedArray**) (param1->$data + 32);
org$frostlang$frostc$FixedArray* $tmp1526 = *$tmp1525;
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
org$frostlang$frostc$FixedArray* $tmp1527 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
*(&local50) = $tmp1526;
// line 467
org$frostlang$frostc$ASTNode* $tmp1528 = *(&local49);
frost$core$Int64 $tmp1529 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1528);
*(&local51) = $tmp1529;
// line 468
org$frostlang$frostc$FixedArray* $tmp1530 = *(&local50);
ITable* $tmp1531 = ((frost$collections$Iterable*) $tmp1530)->$class->itable;
while ($tmp1531->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
frost$collections$Iterator* $tmp1534 = $tmp1532(((frost$collections$Iterable*) $tmp1530));
goto block132;
block132:;
ITable* $tmp1535 = $tmp1534->$class->itable;
while ($tmp1535->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1535 = $tmp1535->next;
}
$fn1537 $tmp1536 = $tmp1535->methods[0];
frost$core$Bit $tmp1538 = $tmp1536($tmp1534);
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block134; else goto block133;
block133:;
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1540 = $tmp1534->$class->itable;
while ($tmp1540->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1540 = $tmp1540->next;
}
$fn1542 $tmp1541 = $tmp1540->methods[1];
frost$core$Object* $tmp1543 = $tmp1541($tmp1534);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1543)));
org$frostlang$frostc$ASTNode* $tmp1544 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
*(&local52) = ((org$frostlang$frostc$ASTNode*) $tmp1543);
// line 469
frost$core$Int64 $tmp1545 = *(&local51);
org$frostlang$frostc$ASTNode* $tmp1546 = *(&local52);
frost$core$Int64 $tmp1547 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1546);
int64_t $tmp1548 = $tmp1545.value;
int64_t $tmp1549 = $tmp1547.value;
int64_t $tmp1550 = $tmp1548 + $tmp1549;
frost$core$Int64 $tmp1551 = (frost$core$Int64) {$tmp1550};
*(&local51) = $tmp1551;
frost$core$Frost$unref$frost$core$Object$Q($tmp1543);
// unreffing REF($1438:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1552 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1552));
// unreffing s
*(&local52) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block132;
block134:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
// unreffing REF($1427:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 471
frost$core$Int64 $tmp1553 = *(&local51);
org$frostlang$frostc$FixedArray* $tmp1554 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1554));
// unreffing statements
*(&local50) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1555 = *(&local49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1555));
// unreffing test
*(&local49) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp1553;
block131:;
// line 474
frost$core$Bit $tmp1556 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block135; else goto block136;
block136:;
frost$core$Int64 $tmp1558 = (frost$core$Int64) {474};
frost$core$String* $tmp1559 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1560, ((frost$core$Object*) param1));
frost$core$String* $tmp1561 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1559, &$s1562);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1563, $tmp1558, $tmp1561);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
// unreffing REF($1487:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
// unreffing REF($1486:frost.core.String)
abort(); // unreachable
block135:;
goto block1;
block1:;
frost$core$Bit $tmp1564 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block137; else goto block138;
block138:;
frost$core$Int64 $tmp1566 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1567, $tmp1566, &$s1568);
abort(); // unreachable
block137:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Annotations* param1, frost$collections$ListView* param2) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$ASTNode* local3 = NULL;
// line 480
frost$core$Weak** $tmp1569 = &param0->compiler;
frost$core$Weak* $tmp1570 = *$tmp1569;
frost$core$Object* $tmp1571 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1570);
org$frostlang$frostc$Compiler$Settings** $tmp1572 = &((org$frostlang$frostc$Compiler*) $tmp1571)->settings;
org$frostlang$frostc$Compiler$Settings* $tmp1573 = *$tmp1572;
frost$core$Int64* $tmp1574 = &$tmp1573->optimizationLevel;
frost$core$Int64 $tmp1575 = *$tmp1574;
frost$core$Int64 $tmp1576 = (frost$core$Int64) {0};
int64_t $tmp1577 = $tmp1575.value;
int64_t $tmp1578 = $tmp1576.value;
bool $tmp1579 = $tmp1577 > $tmp1578;
frost$core$Bit $tmp1580 = (frost$core$Bit) {$tmp1579};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block3; else goto block4;
block3:;
frost$core$Bit $tmp1582 = org$frostlang$frostc$Annotations$get_isInline$R$frost$core$Bit(param1);
frost$core$Bit $tmp1583 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1582);
*(&local1) = $tmp1583;
goto block5;
block4:;
*(&local1) = $tmp1580;
goto block5;
block5:;
frost$core$Bit $tmp1584 = *(&local1);
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block6; else goto block7;
block6:;
frost$core$Bit $tmp1586 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit(param1);
*(&local0) = $tmp1586;
goto block8;
block7:;
*(&local0) = $tmp1584;
goto block8;
block8:;
frost$core$Bit $tmp1587 = *(&local0);
bool $tmp1588 = $tmp1587.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1571);
// unreffing REF($4:frost.core.Weak.T)
if ($tmp1588) goto block1; else goto block2;
block1:;
// line 482
frost$core$Int64 $tmp1589 = (frost$core$Int64) {0};
*(&local2) = $tmp1589;
// line 483
ITable* $tmp1590 = ((frost$collections$Iterable*) param2)->$class->itable;
while ($tmp1590->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1590 = $tmp1590->next;
}
$fn1592 $tmp1591 = $tmp1590->methods[0];
frost$collections$Iterator* $tmp1593 = $tmp1591(((frost$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1594 = $tmp1593->$class->itable;
while ($tmp1594->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1594 = $tmp1594->next;
}
$fn1596 $tmp1595 = $tmp1594->methods[0];
frost$core$Bit $tmp1597 = $tmp1595($tmp1593);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block11; else goto block10;
block10:;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1599 = $tmp1593->$class->itable;
while ($tmp1599->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1599 = $tmp1599->next;
}
$fn1601 $tmp1600 = $tmp1599->methods[1];
frost$core$Object* $tmp1602 = $tmp1600($tmp1593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1602)));
org$frostlang$frostc$ASTNode* $tmp1603 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
*(&local3) = ((org$frostlang$frostc$ASTNode*) $tmp1602);
// line 484
frost$core$Int64 $tmp1604 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1605 = *(&local3);
frost$core$Int64 $tmp1606 = org$frostlang$frostc$Scanner$complexity$org$frostlang$frostc$ASTNode$R$frost$core$Int64(param0, $tmp1605);
int64_t $tmp1607 = $tmp1604.value;
int64_t $tmp1608 = $tmp1606.value;
int64_t $tmp1609 = $tmp1607 + $tmp1608;
frost$core$Int64 $tmp1610 = (frost$core$Int64) {$tmp1609};
*(&local2) = $tmp1610;
// line 485
frost$core$Int64 $tmp1611 = *(&local2);
frost$core$Int64 $tmp1612 = (frost$core$Int64) {10};
int64_t $tmp1613 = $tmp1611.value;
int64_t $tmp1614 = $tmp1612.value;
bool $tmp1615 = $tmp1613 > $tmp1614;
frost$core$Bit $tmp1616 = (frost$core$Bit) {$tmp1615};
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block12; else goto block13;
block12:;
// line 486
frost$core$Bit $tmp1618 = frost$core$Bit$init$builtin_bit(false);
frost$core$Frost$unref$frost$core$Object$Q($tmp1602);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1619 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
// unreffing s
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
return $tmp1618;
block13:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1602);
// unreffing REF($55:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1620 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
// unreffing s
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// unreffing REF($44:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 489
frost$core$Bit $tmp1621 = frost$core$Bit$init$builtin_bit(true);
return $tmp1621;
block2:;
// line 491
frost$core$Bit $tmp1622 = frost$core$Bit$init$builtin_bit(false);
return $tmp1622;

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
// line 498
*(&local0) = ((frost$core$String*) NULL);
// line 500
frost$core$Bit $tmp1623 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block1; else goto block3;
block1:;
// line 501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp1625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 504
frost$core$Bit $tmp1626 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1628 = (frost$core$Int64) {504};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1629, $tmp1628, &$s1630);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp1631 = &param3->$rawValue;
frost$core$Int64 $tmp1632 = *$tmp1631;
frost$core$Int64 $tmp1633 = (frost$core$Int64) {41};
frost$core$Bit $tmp1634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1632, $tmp1633);
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp1636 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp1637 = *$tmp1636;
*(&local1) = $tmp1637;
frost$core$String** $tmp1638 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp1639 = *$tmp1638;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
frost$core$String* $tmp1640 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
*(&local2) = $tmp1639;
// line 506
frost$core$String* $tmp1641 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$String* $tmp1642 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local0) = $tmp1641;
frost$core$String* $tmp1643 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 509
frost$core$Bit $tmp1644 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1646 = (frost$core$Int64) {509};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1647, $tmp1646);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 513
org$frostlang$frostc$Annotations* $tmp1648 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param4);
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
org$frostlang$frostc$Annotations* $tmp1649 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1649));
*(&local3) = $tmp1648;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
// unreffing REF($68:org.frostlang.frostc.Annotations)
// line 514
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1650;
$tmp1650 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1650->value = param5;
frost$core$Int64 $tmp1651 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1652 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1651);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1653;
$tmp1653 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1653->value = $tmp1652;
ITable* $tmp1654 = ((frost$core$Equatable*) $tmp1650)->$class->itable;
while ($tmp1654->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1654 = $tmp1654->next;
}
$fn1656 $tmp1655 = $tmp1654->methods[1];
frost$core$Bit $tmp1657 = $tmp1655(((frost$core$Equatable*) $tmp1650), ((frost$core$Equatable*) $tmp1653));
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Annotations** $tmp1659 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1660 = *$tmp1659;
frost$core$Bit $tmp1661 = org$frostlang$frostc$Annotations$get_isFinal$R$frost$core$Bit($tmp1660);
*(&local5) = $tmp1661;
goto block15;
block14:;
*(&local5) = $tmp1657;
goto block15;
block15:;
frost$core$Bit $tmp1662 = *(&local5);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block16; else goto block17;
block16:;
*(&local4) = $tmp1662;
goto block18;
block17:;
org$frostlang$frostc$Annotations* $tmp1664 = *(&local3);
frost$core$Bit $tmp1665 = org$frostlang$frostc$Annotations$get_isPrivate$R$frost$core$Bit($tmp1664);
*(&local4) = $tmp1665;
goto block18;
block18:;
frost$core$Bit $tmp1666 = *(&local4);
bool $tmp1667 = $tmp1666.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1653)));
// unreffing REF($84:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1650)));
// unreffing REF($80:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1667) goto block11; else goto block12;
block11:;
// line 515
org$frostlang$frostc$Annotations* $tmp1668 = *(&local3);
frost$core$Int64* $tmp1669 = &$tmp1668->flags;
frost$core$Int64 $tmp1670 = *$tmp1669;
frost$core$Int64 $tmp1671 = (frost$core$Int64) {256};
frost$core$Int64 $tmp1672 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1670, $tmp1671);
frost$core$Int64* $tmp1673 = &$tmp1668->flags;
*$tmp1673 = $tmp1672;
goto block12;
block12:;
// line 517
*(&local6) = ((frost$collections$Array*) NULL);
// line 518
frost$core$Bit $tmp1674 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block19; else goto block21;
block19:;
// line 519
frost$collections$Array* $tmp1676 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1676);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
frost$collections$Array* $tmp1677 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local6) = $tmp1676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1676));
// unreffing REF($131:frost.collections.Array<org.frostlang.frostc.MethodDecl.GenericParameter>)
// line 520
frost$core$String** $tmp1678 = &param1->name;
frost$core$String* $tmp1679 = *$tmp1678;
frost$core$String* $tmp1680 = frost$core$String$convert$R$frost$core$String($tmp1679);
frost$core$String* $tmp1681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1680, &$s1682);
frost$core$String* $tmp1683 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1681, param6);
frost$core$String* $tmp1684 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1683, &$s1685);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$String* $tmp1686 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1686));
*(&local7) = $tmp1684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
// unreffing REF($150:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
// unreffing REF($149:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
// unreffing REF($148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
// unreffing REF($147:frost.core.String)
// line 521
frost$core$Bit $tmp1687 = frost$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp1689 = (frost$core$Int64) {521};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1690, $tmp1689, &$s1691);
abort(); // unreachable
block22:;
ITable* $tmp1692 = ((frost$collections$Iterable*) param7)->$class->itable;
while ($tmp1692->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1692 = $tmp1692->next;
}
$fn1694 $tmp1693 = $tmp1692->methods[0];
frost$collections$Iterator* $tmp1695 = $tmp1693(((frost$collections$Iterable*) param7));
goto block24;
block24:;
ITable* $tmp1696 = $tmp1695->$class->itable;
while ($tmp1696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1696 = $tmp1696->next;
}
$fn1698 $tmp1697 = $tmp1696->methods[0];
frost$core$Bit $tmp1699 = $tmp1697($tmp1695);
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block26; else goto block25;
block25:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1701 = $tmp1695->$class->itable;
while ($tmp1701->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[1];
frost$core$Object* $tmp1704 = $tmp1702($tmp1695);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1704)));
org$frostlang$frostc$ASTNode* $tmp1705 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp1704);
// line 522
*(&local9) = ((frost$core$String*) NULL);
// line 523
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 524
org$frostlang$frostc$ASTNode* $tmp1706 = *(&local8);
frost$core$Int64* $tmp1707 = &$tmp1706->$rawValue;
frost$core$Int64 $tmp1708 = *$tmp1707;
frost$core$Int64 $tmp1709 = (frost$core$Int64) {22};
frost$core$Bit $tmp1710 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1708, $tmp1709);
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp1712 = (org$frostlang$frostc$Position*) ($tmp1706->$data + 0);
org$frostlang$frostc$Position $tmp1713 = *$tmp1712;
frost$core$String** $tmp1714 = (frost$core$String**) ($tmp1706->$data + 16);
frost$core$String* $tmp1715 = *$tmp1714;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1715));
frost$core$String* $tmp1716 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local11) = $tmp1715;
// line 526
frost$core$String* $tmp1717 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
frost$core$String* $tmp1718 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
*(&local9) = $tmp1717;
// line 527
org$frostlang$frostc$Type* $tmp1719 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
org$frostlang$frostc$Type* $tmp1720 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1720));
*(&local10) = $tmp1719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1719));
// unreffing REF($232:org.frostlang.frostc.Type)
frost$core$String* $tmp1721 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// unreffing id
*(&local11) = ((frost$core$String*) NULL);
goto block27;
block29:;
frost$core$Int64 $tmp1722 = (frost$core$Int64) {47};
frost$core$Bit $tmp1723 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1708, $tmp1722);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp1725 = (org$frostlang$frostc$Position*) ($tmp1706->$data + 0);
org$frostlang$frostc$Position $tmp1726 = *$tmp1725;
frost$core$String** $tmp1727 = (frost$core$String**) ($tmp1706->$data + 16);
frost$core$String* $tmp1728 = *$tmp1727;
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
frost$core$String* $tmp1729 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local12) = $tmp1728;
org$frostlang$frostc$ASTNode** $tmp1730 = (org$frostlang$frostc$ASTNode**) ($tmp1706->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1731 = *$tmp1730;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
org$frostlang$frostc$ASTNode* $tmp1732 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
*(&local13) = $tmp1731;
// line 530
frost$core$String* $tmp1733 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
frost$core$String* $tmp1734 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
*(&local9) = $tmp1733;
// line 531
org$frostlang$frostc$ASTNode* $tmp1735 = *(&local13);
frost$core$Bit $tmp1736 = frost$core$Bit$init$builtin_bit($tmp1735 != NULL);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp1738 = (frost$core$Int64) {531};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1739, $tmp1738, &$s1740);
abort(); // unreachable
block32:;
org$frostlang$frostc$Type* $tmp1741 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1735);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
org$frostlang$frostc$Type* $tmp1742 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local10) = $tmp1741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
// unreffing REF($290:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp1743 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
// unreffing type
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1744 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
// unreffing id
*(&local12) = ((frost$core$String*) NULL);
goto block27;
block31:;
// line 534
frost$core$Bit $tmp1745 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp1747 = (frost$core$Int64) {534};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1748, $tmp1747);
abort(); // unreachable
block34:;
goto block27;
block27:;
// line 537
frost$collections$Array* $tmp1749 = *(&local6);
frost$core$Bit $tmp1750 = frost$core$Bit$init$builtin_bit($tmp1749 != NULL);
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1752 = (frost$core$Int64) {537};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1753, $tmp1752, &$s1754);
abort(); // unreachable
block36:;
org$frostlang$frostc$MethodDecl$GenericParameter* $tmp1755 = (org$frostlang$frostc$MethodDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp1756 = *(&local8);
$fn1758 $tmp1757 = ($fn1758) $tmp1756->$class->vtable[2];
org$frostlang$frostc$Position $tmp1759 = $tmp1757($tmp1756);
frost$core$String* $tmp1760 = *(&local7);
frost$core$String* $tmp1761 = *(&local9);
org$frostlang$frostc$Type* $tmp1762 = *(&local10);
org$frostlang$frostc$MethodDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp1755, $tmp1759, $tmp1760, $tmp1761, $tmp1762);
frost$collections$Array$add$frost$collections$Array$T($tmp1749, ((frost$core$Object*) $tmp1755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
// unreffing REF($329:org.frostlang.frostc.MethodDecl.GenericParameter)
org$frostlang$frostc$Type* $tmp1763 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
// unreffing bound
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1764 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
// unreffing parameterName
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1704);
// unreffing REF($192:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1765 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
// unreffing p
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
// unreffing REF($181:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$String* $tmp1766 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
// unreffing fullName
*(&local7) = ((frost$core$String*) NULL);
goto block20;
block21:;
// line 1
// line 542
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1767 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local6) = ((frost$collections$Array*) NULL);
goto block20;
block20:;
// line 544
frost$collections$Array* $tmp1768 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1768);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
frost$collections$Array* $tmp1769 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
*(&local14) = $tmp1768;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1768));
// unreffing REF($380:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 545
ITable* $tmp1770 = ((frost$collections$Iterable*) param8)->$class->itable;
while ($tmp1770->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1770 = $tmp1770->next;
}
$fn1772 $tmp1771 = $tmp1770->methods[0];
frost$collections$Iterator* $tmp1773 = $tmp1771(((frost$collections$Iterable*) param8));
goto block38;
block38:;
ITable* $tmp1774 = $tmp1773->$class->itable;
while ($tmp1774->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1774 = $tmp1774->next;
}
$fn1776 $tmp1775 = $tmp1774->methods[0];
frost$core$Bit $tmp1777 = $tmp1775($tmp1773);
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block40; else goto block39;
block39:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp1779 = $tmp1773->$class->itable;
while ($tmp1779->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1779 = $tmp1779->next;
}
$fn1781 $tmp1780 = $tmp1779->methods[1];
frost$core$Object* $tmp1782 = $tmp1780($tmp1773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1782)));
org$frostlang$frostc$ASTNode* $tmp1783 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp1782);
// line 546
org$frostlang$frostc$ASTNode* $tmp1784 = *(&local15);
frost$core$Int64* $tmp1785 = &$tmp1784->$rawValue;
frost$core$Int64 $tmp1786 = *$tmp1785;
frost$core$Int64 $tmp1787 = (frost$core$Int64) {34};
frost$core$Bit $tmp1788 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1786, $tmp1787);
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp1790 = (org$frostlang$frostc$Position*) ($tmp1784->$data + 0);
org$frostlang$frostc$Position $tmp1791 = *$tmp1790;
frost$core$String** $tmp1792 = (frost$core$String**) ($tmp1784->$data + 16);
frost$core$String* $tmp1793 = *$tmp1792;
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
frost$core$String* $tmp1794 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local16) = $tmp1793;
org$frostlang$frostc$ASTNode** $tmp1795 = (org$frostlang$frostc$ASTNode**) ($tmp1784->$data + 24);
org$frostlang$frostc$ASTNode* $tmp1796 = *$tmp1795;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
org$frostlang$frostc$ASTNode* $tmp1797 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local17) = $tmp1796;
// line 548
frost$collections$Array* $tmp1798 = *(&local14);
org$frostlang$frostc$MethodDecl$Parameter* $tmp1799 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp1800 = *(&local16);
org$frostlang$frostc$ASTNode* $tmp1801 = *(&local17);
org$frostlang$frostc$Type* $tmp1802 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp1801);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp1799, $tmp1800, $tmp1802);
frost$collections$Array$add$frost$collections$Array$T($tmp1798, ((frost$core$Object*) $tmp1799));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
// unreffing REF($450:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
// unreffing REF($447:org.frostlang.frostc.MethodDecl.Parameter)
org$frostlang$frostc$ASTNode* $tmp1803 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
// unreffing type
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp1804 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
// unreffing name
*(&local16) = ((frost$core$String*) NULL);
goto block41;
block43:;
// line 551
frost$core$Bit $tmp1805 = frost$core$Bit$init$builtin_bit(false);
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp1807 = (frost$core$Int64) {551};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1808, $tmp1807);
abort(); // unreachable
block44:;
goto block41;
block41:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1782);
// unreffing REF($408:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp1809 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
// unreffing p
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1773));
// unreffing REF($397:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 555
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// line 556
frost$core$Bit $tmp1810 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block46; else goto block48;
block46:;
// line 557
frost$core$Bit $tmp1812 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp1814 = (frost$core$Int64) {557};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1815, $tmp1814, &$s1816);
abort(); // unreachable
block49:;
org$frostlang$frostc$Type* $tmp1817 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, param9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
org$frostlang$frostc$Type* $tmp1818 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local18) = $tmp1817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
// unreffing REF($507:org.frostlang.frostc.Type)
goto block47;
block48:;
// line 1
// line 560
org$frostlang$frostc$Type* $tmp1819 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
org$frostlang$frostc$Type* $tmp1820 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1820));
*(&local18) = $tmp1819;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
// unreffing REF($520:org.frostlang.frostc.Type)
goto block47;
block47:;
// line 562
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1821;
$tmp1821 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1821->value = param5;
frost$core$Int64 $tmp1822 = (frost$core$Int64) {1};
org$frostlang$frostc$MethodDecl$Kind $tmp1823 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1822);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1824;
$tmp1824 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1824->value = $tmp1823;
ITable* $tmp1825 = ((frost$core$Equatable*) $tmp1821)->$class->itable;
while ($tmp1825->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1825 = $tmp1825->next;
}
$fn1827 $tmp1826 = $tmp1825->methods[0];
frost$core$Bit $tmp1828 = $tmp1826(((frost$core$Equatable*) $tmp1821), ((frost$core$Equatable*) $tmp1824));
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block53; else goto block54;
block53:;
org$frostlang$frostc$Type* $tmp1830 = *(&local18);
org$frostlang$frostc$Type* $tmp1831 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1832 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1830, $tmp1831);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1831));
// unreffing REF($542:org.frostlang.frostc.Type)
*(&local19) = $tmp1832;
goto block55;
block54:;
*(&local19) = $tmp1828;
goto block55;
block55:;
frost$core$Bit $tmp1833 = *(&local19);
bool $tmp1834 = $tmp1833.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1824)));
// unreffing REF($536:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1821)));
// unreffing REF($532:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp1834) goto block51; else goto block52;
block51:;
// line 563
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1835);
goto block52;
block52:;
// line 565
frost$core$Bit $tmp1836 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Annotations* $tmp1838 = *(&local3);
frost$core$Bit $tmp1839 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp1841 = (frost$core$Int64) {565};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1842, $tmp1841, &$s1843);
abort(); // unreachable
block61:;
frost$core$Bit $tmp1844 = org$frostlang$frostc$Scanner$shouldInline$org$frostlang$frostc$Annotations$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$frost$core$Bit(param0, $tmp1838, ((frost$collections$ListView*) param10));
*(&local20) = $tmp1844;
goto block60;
block59:;
*(&local20) = $tmp1836;
goto block60;
block60:;
frost$core$Bit $tmp1845 = *(&local20);
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block56; else goto block57;
block56:;
// line 566
org$frostlang$frostc$Annotations* $tmp1847 = *(&local3);
frost$core$Int64* $tmp1848 = &$tmp1847->flags;
frost$core$Int64 $tmp1849 = *$tmp1848;
frost$core$Int64 $tmp1850 = (frost$core$Int64) {1024};
frost$core$Int64 $tmp1851 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1849, $tmp1850);
frost$core$Int64* $tmp1852 = &$tmp1847->flags;
*$tmp1852 = $tmp1851;
goto block57;
block57:;
// line 568
frost$core$Bit $tmp1853 = frost$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block65; else goto block66;
block65:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1855 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1856 = *$tmp1855;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1857;
$tmp1857 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1857->value = $tmp1856;
frost$core$Int64 $tmp1858 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp1859 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp1858);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1860;
$tmp1860 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1860->value = $tmp1859;
ITable* $tmp1861 = ((frost$core$Equatable*) $tmp1857)->$class->itable;
while ($tmp1861->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1861 = $tmp1861->next;
}
$fn1863 $tmp1862 = $tmp1861->methods[0];
frost$core$Bit $tmp1864 = $tmp1862(((frost$core$Equatable*) $tmp1857), ((frost$core$Equatable*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1860)));
// unreffing REF($605:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1857)));
// unreffing REF($601:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local21) = $tmp1864;
goto block67;
block66:;
*(&local21) = $tmp1853;
goto block67;
block67:;
frost$core$Bit $tmp1865 = *(&local21);
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block63; else goto block64;
block63:;
// line 569
org$frostlang$frostc$Annotations* $tmp1867 = *(&local3);
frost$core$Int64* $tmp1868 = &$tmp1867->flags;
frost$core$Int64 $tmp1869 = *$tmp1868;
frost$core$Int64 $tmp1870 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1871 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp1869, $tmp1870);
frost$core$Int64 $tmp1872 = (frost$core$Int64) {0};
int64_t $tmp1873 = $tmp1871.value;
int64_t $tmp1874 = $tmp1872.value;
bool $tmp1875 = $tmp1873 != $tmp1874;
frost$core$Bit $tmp1876 = (frost$core$Bit) {$tmp1875};
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block68; else goto block69;
block68:;
// line 570
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param2, &$s1878);
goto block69;
block69:;
// line 573
org$frostlang$frostc$Annotations* $tmp1879 = *(&local3);
frost$core$Int64* $tmp1880 = &$tmp1879->flags;
frost$core$Int64 $tmp1881 = *$tmp1880;
frost$core$Int64 $tmp1882 = (frost$core$Int64) {512};
frost$core$Int64 $tmp1883 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp1881, $tmp1882);
frost$core$Int64* $tmp1884 = &$tmp1879->flags;
*$tmp1884 = $tmp1883;
goto block64;
block64:;
// line 575
org$frostlang$frostc$MethodDecl* $tmp1885 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
frost$core$String* $tmp1886 = *(&local0);
org$frostlang$frostc$Annotations* $tmp1887 = *(&local3);
frost$collections$Array* $tmp1888 = *(&local6);
frost$collections$Array* $tmp1889 = *(&local14);
org$frostlang$frostc$Type* $tmp1890 = *(&local18);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp1885, param1, param2, $tmp1886, $tmp1887, param5, param6, $tmp1888, $tmp1889, $tmp1890, param10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1885));
// unreffing REF($647:org.frostlang.frostc.MethodDecl)
org$frostlang$frostc$Type* $tmp1891 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// unreffing returnType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1892 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
// unreffing parameters
*(&local14) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1893 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
// unreffing generics
*(&local6) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp1894 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
// unreffing annotations
*(&local3) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp1895 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
// unreffing doccomment
*(&local0) = ((frost$core$String*) NULL);
return $tmp1885;

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
// line 580
frost$core$Int64* $tmp1896 = &param2->$rawValue;
frost$core$Int64 $tmp1897 = *$tmp1896;
frost$core$Int64 $tmp1898 = (frost$core$Int64) {18};
frost$core$Bit $tmp1899 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1897, $tmp1898);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block2; else goto block3;
block2:;
org$frostlang$frostc$Position* $tmp1901 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1902 = *$tmp1901;
*(&local0) = $tmp1902;
org$frostlang$frostc$ASTNode** $tmp1903 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1904 = *$tmp1903;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
org$frostlang$frostc$ASTNode* $tmp1905 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
*(&local1) = $tmp1904;
org$frostlang$frostc$FixedArray** $tmp1906 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1907 = *$tmp1906;
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
org$frostlang$frostc$FixedArray* $tmp1908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local2) = $tmp1907;
org$frostlang$frostc$ASTNode** $tmp1909 = (org$frostlang$frostc$ASTNode**) (param2->$data + 32);
org$frostlang$frostc$ASTNode* $tmp1910 = *$tmp1909;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
org$frostlang$frostc$ASTNode* $tmp1911 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
*(&local3) = $tmp1910;
// line 582
org$frostlang$frostc$Position $tmp1912 = *(&local0);
org$frostlang$frostc$ASTNode* $tmp1913 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp1914 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp1915 = *(&local3);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, param1, $tmp1912, $tmp1913, $tmp1914, $tmp1915);
org$frostlang$frostc$ASTNode* $tmp1916 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
// unreffing varDecl
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1917 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
// unreffing annotations
*(&local2) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1918 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
// unreffing dc
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp1919 = (frost$core$Int64) {29};
frost$core$Bit $tmp1920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1897, $tmp1919);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp1922 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1923 = *$tmp1922;
*(&local4) = $tmp1923;
org$frostlang$frostc$ASTNode** $tmp1924 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1925 = *$tmp1924;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
org$frostlang$frostc$ASTNode* $tmp1926 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
*(&local5) = $tmp1925;
org$frostlang$frostc$FixedArray** $tmp1927 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1928 = *$tmp1927;
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
org$frostlang$frostc$FixedArray* $tmp1929 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
*(&local6) = $tmp1928;
org$frostlang$frostc$MethodDecl$Kind* $tmp1930 = (org$frostlang$frostc$MethodDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp1931 = *$tmp1930;
*(&local7) = $tmp1931;
frost$core$String** $tmp1932 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1933 = *$tmp1932;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
frost$core$String* $tmp1934 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1934));
*(&local8) = $tmp1933;
org$frostlang$frostc$FixedArray** $tmp1935 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp1936 = *$tmp1935;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
org$frostlang$frostc$FixedArray* $tmp1937 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
*(&local9) = $tmp1936;
org$frostlang$frostc$FixedArray** $tmp1938 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp1939 = *$tmp1938;
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
org$frostlang$frostc$FixedArray* $tmp1940 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local10) = $tmp1939;
org$frostlang$frostc$ASTNode** $tmp1941 = (org$frostlang$frostc$ASTNode**) (param2->$data + 64);
org$frostlang$frostc$ASTNode* $tmp1942 = *$tmp1941;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
org$frostlang$frostc$ASTNode* $tmp1943 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
*(&local11) = $tmp1942;
org$frostlang$frostc$FixedArray** $tmp1944 = (org$frostlang$frostc$FixedArray**) (param2->$data + 72);
org$frostlang$frostc$FixedArray* $tmp1945 = *$tmp1944;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1945));
org$frostlang$frostc$FixedArray* $tmp1946 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1946));
*(&local12) = $tmp1945;
// line 586
org$frostlang$frostc$Position $tmp1947 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp1948 = *(&local5);
org$frostlang$frostc$FixedArray* $tmp1949 = *(&local6);
org$frostlang$frostc$MethodDecl$Kind $tmp1950 = *(&local7);
frost$core$String* $tmp1951 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp1952 = *(&local9);
org$frostlang$frostc$FixedArray* $tmp1953 = *(&local10);
org$frostlang$frostc$ASTNode* $tmp1954 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp1955 = *(&local12);
org$frostlang$frostc$MethodDecl* $tmp1956 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, param1, $tmp1947, $tmp1948, $tmp1949, $tmp1950, $tmp1951, $tmp1952, $tmp1953, $tmp1954, $tmp1955);
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
org$frostlang$frostc$MethodDecl* $tmp1957 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1957));
*(&local13) = $tmp1956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1956));
// unreffing REF($142:org.frostlang.frostc.MethodDecl?)
// line 588
org$frostlang$frostc$MethodDecl* $tmp1958 = *(&local13);
frost$core$Bit $tmp1959 = frost$core$Bit$init$builtin_bit($tmp1958 != NULL);
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block6; else goto block7;
block6:;
// line 589
org$frostlang$frostc$SymbolTable** $tmp1961 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp1962 = *$tmp1961;
org$frostlang$frostc$MethodDecl* $tmp1963 = *(&local13);
frost$core$Bit $tmp1964 = frost$core$Bit$init$builtin_bit($tmp1963 != NULL);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp1966 = (frost$core$Int64) {589};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1967, $tmp1966, &$s1968);
abort(); // unreachable
block8:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp1962, ((org$frostlang$frostc$Symbol*) $tmp1963));
// line 590
frost$collections$Array** $tmp1969 = &param1->methods;
frost$collections$Array* $tmp1970 = *$tmp1969;
org$frostlang$frostc$MethodDecl* $tmp1971 = *(&local13);
frost$core$Bit $tmp1972 = frost$core$Bit$init$builtin_bit($tmp1971 != NULL);
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1974 = (frost$core$Int64) {590};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1975, $tmp1974, &$s1976);
abort(); // unreachable
block10:;
frost$collections$Array$add$frost$collections$Array$T($tmp1970, ((frost$core$Object*) $tmp1971));
goto block7;
block7:;
org$frostlang$frostc$MethodDecl* $tmp1977 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
// unreffing m
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp1978 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
// unreffing statements
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1979 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
// unreffing returnType
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp1980 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
// unreffing parameters
*(&local10) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp1981 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
// unreffing generics
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp1982 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
// unreffing name
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp1983 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
// unreffing annotations
*(&local6) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp1984 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// unreffing dc
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp1985 = (frost$core$Int64) {12};
frost$core$Bit $tmp1986 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1897, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Position* $tmp1988 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp1989 = *$tmp1988;
*(&local14) = $tmp1989;
org$frostlang$frostc$ASTNode** $tmp1990 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp1991 = *$tmp1990;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
org$frostlang$frostc$ASTNode* $tmp1992 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local15) = $tmp1991;
org$frostlang$frostc$FixedArray** $tmp1993 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp1994 = *$tmp1993;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
org$frostlang$frostc$FixedArray* $tmp1995 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local16) = $tmp1994;
org$frostlang$frostc$ClassDecl$Kind* $tmp1996 = (org$frostlang$frostc$ClassDecl$Kind*) (param2->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp1997 = *$tmp1996;
*(&local17) = $tmp1997;
frost$core$String** $tmp1998 = (frost$core$String**) (param2->$data + 40);
frost$core$String* $tmp1999 = *$tmp1998;
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
frost$core$String* $tmp2000 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
*(&local18) = $tmp1999;
org$frostlang$frostc$FixedArray** $tmp2001 = (org$frostlang$frostc$FixedArray**) (param2->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2002 = *$tmp2001;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2002));
org$frostlang$frostc$FixedArray* $tmp2003 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
*(&local19) = $tmp2002;
org$frostlang$frostc$FixedArray** $tmp2004 = (org$frostlang$frostc$FixedArray**) (param2->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2005 = *$tmp2004;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2005));
org$frostlang$frostc$FixedArray* $tmp2006 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
*(&local20) = $tmp2005;
org$frostlang$frostc$FixedArray** $tmp2007 = (org$frostlang$frostc$FixedArray**) (param2->$data + 64);
org$frostlang$frostc$FixedArray* $tmp2008 = *$tmp2007;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2008));
org$frostlang$frostc$FixedArray* $tmp2009 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
*(&local21) = $tmp2008;
// line 595
frost$io$File** $tmp2010 = &param1->source;
frost$io$File* $tmp2011 = *$tmp2010;
frost$collections$MapView** $tmp2012 = &param1->aliases;
frost$collections$MapView* $tmp2013 = *$tmp2012;
frost$core$String** $tmp2014 = &param1->name;
frost$core$String* $tmp2015 = *$tmp2014;
org$frostlang$frostc$Position $tmp2016 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2017 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp2018 = *(&local16);
org$frostlang$frostc$ClassDecl$Kind $tmp2019 = *(&local17);
frost$core$String* $tmp2020 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2021 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2022 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2023 = *(&local21);
org$frostlang$frostc$ClassDecl* $tmp2024 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2011, $tmp2013, $tmp2015, $tmp2016, $tmp2017, $tmp2018, $tmp2019, $tmp2020, $tmp2021, $tmp2022, $tmp2023);
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
org$frostlang$frostc$ClassDecl* $tmp2025 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
*(&local22) = $tmp2024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
// unreffing REF($308:org.frostlang.frostc.ClassDecl?)
// line 597
org$frostlang$frostc$ClassDecl* $tmp2026 = *(&local22);
frost$core$Bit $tmp2027 = frost$core$Bit$init$builtin_bit($tmp2026 != NULL);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block14; else goto block15;
block14:;
// line 598
org$frostlang$frostc$ClassDecl* $tmp2029 = *(&local22);
frost$core$Bit $tmp2030 = frost$core$Bit$init$builtin_bit($tmp2029 != NULL);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2032 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2033, $tmp2032, &$s2034);
abort(); // unreachable
block16:;
frost$core$Weak* $tmp2035 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2035, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
frost$core$Weak** $tmp2036 = &$tmp2029->owner;
frost$core$Weak* $tmp2037 = *$tmp2036;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$Weak** $tmp2038 = &$tmp2029->owner;
*$tmp2038 = $tmp2035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
// unreffing REF($336:frost.core.Weak<org.frostlang.frostc.ClassDecl?>)
// line 599
frost$collections$Array** $tmp2039 = &param1->classes;
frost$collections$Array* $tmp2040 = *$tmp2039;
org$frostlang$frostc$ClassDecl* $tmp2041 = *(&local22);
frost$core$Bit $tmp2042 = frost$core$Bit$init$builtin_bit($tmp2041 != NULL);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2044 = (frost$core$Int64) {599};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2045, $tmp2044, &$s2046);
abort(); // unreachable
block18:;
frost$collections$Array$add$frost$collections$Array$T($tmp2040, ((frost$core$Object*) $tmp2041));
// line 600
org$frostlang$frostc$ClassDecl* $tmp2047 = *(&local22);
frost$core$Bit $tmp2048 = frost$core$Bit$init$builtin_bit($tmp2047 != NULL);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2050 = (frost$core$Int64) {600};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2051, $tmp2050, &$s2052);
abort(); // unreachable
block20:;
frost$core$String** $tmp2053 = &$tmp2047->name;
frost$core$String* $tmp2054 = *$tmp2053;
frost$core$String** $tmp2055 = &param1->name;
frost$core$String* $tmp2056 = *$tmp2055;
frost$core$String* $tmp2057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2056, &$s2058);
frost$core$Bit $tmp2059 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2054, $tmp2057);
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp2061 = (frost$core$Int64) {600};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2062, $tmp2061);
abort(); // unreachable
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
// unreffing REF($380:frost.core.String)
// line 601
org$frostlang$frostc$SymbolTable** $tmp2063 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2064 = *$tmp2063;
org$frostlang$frostc$Alias* $tmp2065 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
org$frostlang$frostc$ClassDecl* $tmp2066 = *(&local22);
frost$core$Bit $tmp2067 = frost$core$Bit$init$builtin_bit($tmp2066 != NULL);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2069 = (frost$core$Int64) {601};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2070, $tmp2069, &$s2071);
abort(); // unreachable
block24:;
frost$core$String** $tmp2072 = &$tmp2066->name;
frost$core$String* $tmp2073 = *$tmp2072;
frost$core$String** $tmp2074 = &param1->name;
frost$core$String* $tmp2075 = *$tmp2074;
frost$core$Int64 $tmp2076 = frost$core$String$get_length$R$frost$core$Int64($tmp2075);
frost$core$Int64 $tmp2077 = (frost$core$Int64) {1};
int64_t $tmp2078 = $tmp2076.value;
int64_t $tmp2079 = $tmp2077.value;
int64_t $tmp2080 = $tmp2078 + $tmp2079;
frost$core$Int64 $tmp2081 = (frost$core$Int64) {$tmp2080};
frost$core$Bit $tmp2082 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2083 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2081, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2082);
frost$core$String* $tmp2084 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2073, $tmp2083);
org$frostlang$frostc$ClassDecl* $tmp2085 = *(&local22);
frost$core$Bit $tmp2086 = frost$core$Bit$init$builtin_bit($tmp2085 != NULL);
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2088 = (frost$core$Int64) {601};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2089, $tmp2088, &$s2090);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type** $tmp2091 = &$tmp2085->type;
org$frostlang$frostc$Type* $tmp2092 = *$tmp2091;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2065, $tmp2084, $tmp2092);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2064, ((org$frostlang$frostc$Symbol*) $tmp2065));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// unreffing REF($416:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
// unreffing REF($393:org.frostlang.frostc.Alias)
// line 602
org$frostlang$frostc$ClassDecl* $tmp2093 = *(&local22);
frost$core$Bit $tmp2094 = frost$core$Bit$init$builtin_bit($tmp2093 != NULL);
bool $tmp2095 = $tmp2094.value;
if ($tmp2095) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2096 = (frost$core$Int64) {602};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2097, $tmp2096, &$s2098);
abort(); // unreachable
block28:;
org$frostlang$frostc$SymbolTable** $tmp2099 = &$tmp2093->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2100 = *$tmp2099;
org$frostlang$frostc$Alias* $tmp2101 = (org$frostlang$frostc$Alias*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Alias$class);
frost$core$String* $tmp2102 = org$frostlang$frostc$ClassDecl$simpleName$R$frost$core$String(param1);
org$frostlang$frostc$Type** $tmp2103 = &param1->type;
org$frostlang$frostc$Type* $tmp2104 = *$tmp2103;
org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type($tmp2101, $tmp2102, $tmp2104);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2100, ((org$frostlang$frostc$Symbol*) $tmp2101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
// unreffing REF($450:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2101));
// unreffing REF($449:org.frostlang.frostc.Alias)
goto block15;
block15:;
org$frostlang$frostc$ClassDecl* $tmp2105 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// unreffing inner
*(&local22) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp2106 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// unreffing members
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2107 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
// unreffing supertypes
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2108 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// unreffing generics
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2109 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
// unreffing name
*(&local18) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp2110 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2110));
// unreffing annotations
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp2111 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
// unreffing dc
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block13:;
frost$core$Int64 $tmp2112 = (frost$core$Int64) {10};
frost$core$Bit $tmp2113 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1897, $tmp2112);
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp2115 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp2116 = *$tmp2115;
*(&local23) = $tmp2116;
org$frostlang$frostc$ASTNode** $tmp2117 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2118 = *$tmp2117;
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
org$frostlang$frostc$ASTNode* $tmp2119 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local24) = $tmp2118;
frost$core$String** $tmp2120 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp2121 = *$tmp2120;
*(&local25) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$String* $tmp2122 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local25) = $tmp2121;
org$frostlang$frostc$FixedArray** $tmp2123 = (org$frostlang$frostc$FixedArray**) (param2->$data + 32);
org$frostlang$frostc$FixedArray* $tmp2124 = *$tmp2123;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
org$frostlang$frostc$FixedArray* $tmp2125 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local26) = $tmp2124;
// line 606
org$frostlang$frostc$Position $tmp2126 = *(&local23);
org$frostlang$frostc$ASTNode* $tmp2127 = *(&local24);
frost$core$String* $tmp2128 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp2129 = *(&local26);
org$frostlang$frostc$Scanner$scanChoiceCase$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q(param0, param1, $tmp2126, $tmp2127, $tmp2128, $tmp2129);
org$frostlang$frostc$FixedArray* $tmp2130 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
// unreffing fields
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp2131 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
// unreffing name
*(&local25) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp2132 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// unreffing dc
*(&local24) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block31:;
// line 609
frost$core$Bit $tmp2133 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp2135 = (frost$core$Int64) {609};
frost$core$String* $tmp2136 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2137, ((frost$core$Object*) param2));
frost$core$String* $tmp2138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2136, &$s2139);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2140, $tmp2135, $tmp2138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing REF($562:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
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
// line 616
*(&local0) = ((frost$core$String*) NULL);
// line 618
frost$core$Bit $tmp2141 = frost$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2142 = $tmp2141.value;
if ($tmp2142) goto block1; else goto block3;
block1:;
// line 619
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2143));
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 622
frost$core$Bit $tmp2144 = frost$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp2145 = $tmp2144.value;
if ($tmp2145) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2146 = (frost$core$Int64) {622};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2147, $tmp2146, &$s2148);
abort(); // unreachable
block4:;
frost$core$Int64* $tmp2149 = &param3->$rawValue;
frost$core$Int64 $tmp2150 = *$tmp2149;
frost$core$Int64 $tmp2151 = (frost$core$Int64) {41};
frost$core$Bit $tmp2152 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2150, $tmp2151);
bool $tmp2153 = $tmp2152.value;
if ($tmp2153) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Position* $tmp2154 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp2155 = *$tmp2154;
*(&local1) = $tmp2155;
frost$core$String** $tmp2156 = (frost$core$String**) (param3->$data + 16);
frost$core$String* $tmp2157 = *$tmp2156;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$String* $tmp2158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local2) = $tmp2157;
// line 624
frost$core$String* $tmp2159 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$String* $tmp2160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
*(&local0) = $tmp2159;
frost$core$String* $tmp2161 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
// unreffing text
*(&local2) = ((frost$core$String*) NULL);
goto block6;
block8:;
// line 627
frost$core$Bit $tmp2162 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2164 = (frost$core$Int64) {627};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2165, $tmp2164);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 631
frost$collections$Array* $tmp2166 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2166);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
frost$collections$Array* $tmp2167 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2167));
*(&local3) = $tmp2166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
// unreffing REF($68:frost.collections.Array<org.frostlang.frostc.Type>)
// line 632
frost$core$Bit $tmp2168 = frost$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2169 = $tmp2168.value;
if ($tmp2169) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2170 = (frost$core$Int64) {632};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2171, $tmp2170, &$s2172);
abort(); // unreachable
block11:;
ITable* $tmp2173 = ((frost$collections$Iterable*) param5)->$class->itable;
while ($tmp2173->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2173 = $tmp2173->next;
}
$fn2175 $tmp2174 = $tmp2173->methods[0];
frost$collections$Iterator* $tmp2176 = $tmp2174(((frost$collections$Iterable*) param5));
goto block13;
block13:;
ITable* $tmp2177 = $tmp2176->$class->itable;
while ($tmp2177->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2177 = $tmp2177->next;
}
$fn2179 $tmp2178 = $tmp2177->methods[0];
frost$core$Bit $tmp2180 = $tmp2178($tmp2176);
bool $tmp2181 = $tmp2180.value;
if ($tmp2181) goto block15; else goto block14;
block14:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2182 = $tmp2176->$class->itable;
while ($tmp2182->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2182 = $tmp2182->next;
}
$fn2184 $tmp2183 = $tmp2182->methods[1];
frost$core$Object* $tmp2185 = $tmp2183($tmp2176);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2185)));
org$frostlang$frostc$ASTNode* $tmp2186 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2185);
// line 633
frost$collections$Array* $tmp2187 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp2188 = *(&local4);
org$frostlang$frostc$Type* $tmp2189 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2188);
frost$collections$Array$add$frost$collections$Array$T($tmp2187, ((frost$core$Object*) $tmp2189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2189));
// unreffing REF($115:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2185);
// unreffing REF($103:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
// unreffing t
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
// unreffing REF($92:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 635
org$frostlang$frostc$ChoiceCase* $tmp2191 = (org$frostlang$frostc$ChoiceCase*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ChoiceCase$class);
frost$core$String* $tmp2192 = *(&local0);
frost$collections$Array** $tmp2193 = &param1->choiceCases;
frost$collections$Array* $tmp2194 = *$tmp2193;
ITable* $tmp2195 = ((frost$collections$CollectionView*) $tmp2194)->$class->itable;
while ($tmp2195->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2195 = $tmp2195->next;
}
$fn2197 $tmp2196 = $tmp2195->methods[0];
frost$core$Int64 $tmp2198 = $tmp2196(((frost$collections$CollectionView*) $tmp2194));
frost$collections$Array* $tmp2199 = *(&local3);
org$frostlang$frostc$ChoiceCase$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$frost$core$String$Q$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT($tmp2191, param1, param2, param4, $tmp2192, $tmp2198, ((frost$collections$ListView*) $tmp2199));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
org$frostlang$frostc$ChoiceCase* $tmp2200 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2200));
*(&local5) = $tmp2191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
// unreffing REF($134:org.frostlang.frostc.ChoiceCase)
// line 637
frost$collections$Array** $tmp2201 = &param1->choiceCases;
frost$collections$Array* $tmp2202 = *$tmp2201;
org$frostlang$frostc$ChoiceCase* $tmp2203 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp2202, ((frost$core$Object*) $tmp2203));
// line 638
org$frostlang$frostc$SymbolTable** $tmp2204 = &param1->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2205 = *$tmp2204;
org$frostlang$frostc$ChoiceCase* $tmp2206 = *(&local5);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2205, ((org$frostlang$frostc$Symbol*) $tmp2206));
org$frostlang$frostc$ChoiceCase* $tmp2207 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
// unreffing entry
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$collections$Array* $tmp2208 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2208));
// unreffing fields
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$String* $tmp2209 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2209));
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
// line 645
*(&local0) = ((frost$core$String*) NULL);
// line 646
ITable* $tmp2211 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2211->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[1];
frost$core$Bit $tmp2214 = $tmp2212(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2210));
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block1; else goto block3;
block1:;
// line 647
frost$core$String* $tmp2216 = frost$core$String$convert$R$frost$core$String(param3);
frost$core$String* $tmp2217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2216, &$s2218);
frost$core$String* $tmp2219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2217, param8);
frost$core$String* $tmp2220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2219, &$s2221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
frost$core$String* $tmp2222 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2222));
*(&local0) = $tmp2220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
// unreffing REF($11:frost.core.String)
goto block2;
block3:;
// line 1
// line 650
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param8));
frost$core$String* $tmp2223 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
*(&local0) = param8;
goto block2;
block2:;
// line 652
*(&local1) = ((frost$core$String*) NULL);
// line 654
frost$core$Bit $tmp2224 = frost$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block4; else goto block6;
block4:;
// line 655
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp2226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 658
frost$core$Bit $tmp2227 = frost$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2228 = $tmp2227.value;
if ($tmp2228) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2229 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2230, $tmp2229, &$s2231);
abort(); // unreachable
block7:;
frost$core$Int64* $tmp2232 = &param5->$rawValue;
frost$core$Int64 $tmp2233 = *$tmp2232;
frost$core$Int64 $tmp2234 = (frost$core$Int64) {41};
frost$core$Bit $tmp2235 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2233, $tmp2234);
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2237 = (org$frostlang$frostc$Position*) (param5->$data + 0);
org$frostlang$frostc$Position $tmp2238 = *$tmp2237;
*(&local2) = $tmp2238;
frost$core$String** $tmp2239 = (frost$core$String**) (param5->$data + 16);
frost$core$String* $tmp2240 = *$tmp2239;
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
frost$core$String* $tmp2241 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
*(&local3) = $tmp2240;
// line 660
frost$core$String* $tmp2242 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2242));
frost$core$String* $tmp2243 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2243));
*(&local1) = $tmp2242;
frost$core$String* $tmp2244 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
// unreffing text
*(&local3) = ((frost$core$String*) NULL);
goto block9;
block11:;
// line 663
frost$core$Bit $tmp2245 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2247 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2248, $tmp2247);
abort(); // unreachable
block12:;
goto block9;
block9:;
goto block5;
block5:;
// line 667
org$frostlang$frostc$Annotations* $tmp2249 = org$frostlang$frostc$Scanner$convertAnnotations$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Annotations(param0, param6);
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
org$frostlang$frostc$Annotations* $tmp2250 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local4) = $tmp2249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
// unreffing REF($111:org.frostlang.frostc.Annotations)
// line 668
frost$collections$Array* $tmp2251 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2251);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
frost$collections$Array* $tmp2252 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local5) = $tmp2251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
// unreffing REF($123:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
// line 669
frost$core$Bit $tmp2253 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2254 = $tmp2253.value;
if ($tmp2254) goto block14; else goto block15;
block14:;
// line 670
frost$core$Bit $tmp2255 = frost$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2257 = (frost$core$Int64) {670};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2258, $tmp2257, &$s2259);
abort(); // unreachable
block16:;
ITable* $tmp2260 = ((frost$collections$Iterable*) param9)->$class->itable;
while ($tmp2260->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2260 = $tmp2260->next;
}
$fn2262 $tmp2261 = $tmp2260->methods[0];
frost$collections$Iterator* $tmp2263 = $tmp2261(((frost$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp2264 = $tmp2263->$class->itable;
while ($tmp2264->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2264 = $tmp2264->next;
}
$fn2266 $tmp2265 = $tmp2264->methods[0];
frost$core$Bit $tmp2267 = $tmp2265($tmp2263);
bool $tmp2268 = $tmp2267.value;
if ($tmp2268) goto block20; else goto block19;
block19:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2269 = $tmp2263->$class->itable;
while ($tmp2269->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2269 = $tmp2269->next;
}
$fn2271 $tmp2270 = $tmp2269->methods[1];
frost$core$Object* $tmp2272 = $tmp2270($tmp2263);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2272)));
org$frostlang$frostc$ASTNode* $tmp2273 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp2272);
// line 671
*(&local7) = ((frost$core$String*) NULL);
// line 672
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 673
org$frostlang$frostc$ASTNode* $tmp2274 = *(&local6);
frost$core$Int64* $tmp2275 = &$tmp2274->$rawValue;
frost$core$Int64 $tmp2276 = *$tmp2275;
frost$core$Int64 $tmp2277 = (frost$core$Int64) {22};
frost$core$Bit $tmp2278 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2276, $tmp2277);
bool $tmp2279 = $tmp2278.value;
if ($tmp2279) goto block22; else goto block23;
block22:;
org$frostlang$frostc$Position* $tmp2280 = (org$frostlang$frostc$Position*) ($tmp2274->$data + 0);
org$frostlang$frostc$Position $tmp2281 = *$tmp2280;
frost$core$String** $tmp2282 = (frost$core$String**) ($tmp2274->$data + 16);
frost$core$String* $tmp2283 = *$tmp2282;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$String* $tmp2284 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local9) = $tmp2283;
// line 675
frost$core$String* $tmp2285 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
frost$core$String* $tmp2286 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local7) = $tmp2285;
// line 676
org$frostlang$frostc$Type* $tmp2287 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
org$frostlang$frostc$Type* $tmp2288 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local8) = $tmp2287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
// unreffing REF($203:org.frostlang.frostc.Type)
frost$core$String* $tmp2289 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
// unreffing id
*(&local9) = ((frost$core$String*) NULL);
goto block21;
block23:;
frost$core$Int64 $tmp2290 = (frost$core$Int64) {47};
frost$core$Bit $tmp2291 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2276, $tmp2290);
bool $tmp2292 = $tmp2291.value;
if ($tmp2292) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp2293 = (org$frostlang$frostc$Position*) ($tmp2274->$data + 0);
org$frostlang$frostc$Position $tmp2294 = *$tmp2293;
frost$core$String** $tmp2295 = (frost$core$String**) ($tmp2274->$data + 16);
frost$core$String* $tmp2296 = *$tmp2295;
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
frost$core$String* $tmp2297 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
*(&local10) = $tmp2296;
org$frostlang$frostc$ASTNode** $tmp2298 = (org$frostlang$frostc$ASTNode**) ($tmp2274->$data + 24);
org$frostlang$frostc$ASTNode* $tmp2299 = *$tmp2298;
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
org$frostlang$frostc$ASTNode* $tmp2300 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local11) = $tmp2299;
// line 679
frost$core$String* $tmp2301 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
frost$core$String* $tmp2302 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local7) = $tmp2301;
// line 680
org$frostlang$frostc$ASTNode* $tmp2303 = *(&local11);
frost$core$Bit $tmp2304 = frost$core$Bit$init$builtin_bit($tmp2303 != NULL);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2306 = (frost$core$Int64) {680};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2307, $tmp2306, &$s2308);
abort(); // unreachable
block26:;
org$frostlang$frostc$Type* $tmp2309 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
org$frostlang$frostc$Type* $tmp2310 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
*(&local8) = $tmp2309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
// unreffing REF($261:org.frostlang.frostc.Type)
org$frostlang$frostc$ASTNode* $tmp2311 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
// unreffing type
*(&local11) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp2312 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
// unreffing id
*(&local10) = ((frost$core$String*) NULL);
goto block21;
block25:;
// line 683
frost$core$Bit $tmp2313 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2314 = $tmp2313.value;
if ($tmp2314) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2315 = (frost$core$Int64) {683};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2316, $tmp2315);
abort(); // unreachable
block28:;
goto block21;
block21:;
// line 686
frost$collections$Array* $tmp2317 = *(&local5);
org$frostlang$frostc$ClassDecl$GenericParameter* $tmp2318 = (org$frostlang$frostc$ClassDecl$GenericParameter*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$GenericParameter$class);
org$frostlang$frostc$ASTNode* $tmp2319 = *(&local6);
$fn2321 $tmp2320 = ($fn2321) $tmp2319->$class->vtable[2];
org$frostlang$frostc$Position $tmp2322 = $tmp2320($tmp2319);
frost$core$String* $tmp2323 = *(&local0);
frost$core$String* $tmp2324 = *(&local7);
org$frostlang$frostc$Type* $tmp2325 = *(&local8);
org$frostlang$frostc$ClassDecl$GenericParameter$init$org$frostlang$frostc$Position$frost$core$String$frost$core$String$org$frostlang$frostc$Type($tmp2318, $tmp2322, $tmp2323, $tmp2324, $tmp2325);
frost$collections$Array$add$frost$collections$Array$T($tmp2317, ((frost$core$Object*) $tmp2318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
// unreffing REF($293:org.frostlang.frostc.ClassDecl.GenericParameter)
org$frostlang$frostc$Type* $tmp2326 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// unreffing bound
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp2327 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
// unreffing name
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2272);
// unreffing REF($163:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2328 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
// unreffing p
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block18;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
// unreffing REF($152:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block15;
block15:;
// line 689
frost$collections$Array* $tmp2329 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2329);
*(&local12) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$collections$Array* $tmp2330 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local12) = $tmp2329;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
// unreffing REF($330:frost.collections.Array<org.frostlang.frostc.Type>)
// line 690
frost$core$Bit $tmp2331 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block30; else goto block31;
block30:;
// line 691
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2333;
$tmp2333 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2333->value = param7;
frost$core$Int64 $tmp2334 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2335 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2334);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2336;
$tmp2336 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2336->value = $tmp2335;
ITable* $tmp2337 = ((frost$core$Equatable*) $tmp2333)->$class->itable;
while ($tmp2337->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2337 = $tmp2337->next;
}
$fn2339 $tmp2338 = $tmp2337->methods[0];
frost$core$Bit $tmp2340 = $tmp2338(((frost$core$Equatable*) $tmp2333), ((frost$core$Equatable*) $tmp2336));
bool $tmp2341 = $tmp2340.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2336)));
// unreffing REF($353:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2333)));
// unreffing REF($349:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2341) goto block32; else goto block33;
block32:;
// line 692
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2342);
goto block33;
block33:;
// line 694
frost$core$Bit $tmp2343 = frost$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2344 = $tmp2343.value;
if ($tmp2344) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2345 = (frost$core$Int64) {694};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2346, $tmp2345, &$s2347);
abort(); // unreachable
block34:;
ITable* $tmp2348 = ((frost$collections$Iterable*) param10)->$class->itable;
while ($tmp2348->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2348 = $tmp2348->next;
}
$fn2350 $tmp2349 = $tmp2348->methods[0];
frost$collections$Iterator* $tmp2351 = $tmp2349(((frost$collections$Iterable*) param10));
goto block36;
block36:;
ITable* $tmp2352 = $tmp2351->$class->itable;
while ($tmp2352->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2352 = $tmp2352->next;
}
$fn2354 $tmp2353 = $tmp2352->methods[0];
frost$core$Bit $tmp2355 = $tmp2353($tmp2351);
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block38; else goto block37;
block37:;
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2357 = $tmp2351->$class->itable;
while ($tmp2357->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2357 = $tmp2357->next;
}
$fn2359 $tmp2358 = $tmp2357->methods[1];
frost$core$Object* $tmp2360 = $tmp2358($tmp2351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2360)));
org$frostlang$frostc$ASTNode* $tmp2361 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2361));
*(&local13) = ((org$frostlang$frostc$ASTNode*) $tmp2360);
// line 695
frost$collections$Array* $tmp2362 = *(&local12);
org$frostlang$frostc$ASTNode* $tmp2363 = *(&local13);
org$frostlang$frostc$Type* $tmp2364 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp2363);
frost$collections$Array$add$frost$collections$Array$T($tmp2362, ((frost$core$Object*) $tmp2364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
// unreffing REF($401:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp2360);
// unreffing REF($389:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2365 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2365));
// unreffing s
*(&local13) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block36;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
// unreffing REF($378:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block31;
block31:;
// line 698
org$frostlang$frostc$ClassDecl* $tmp2366 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
frost$core$String* $tmp2367 = *(&local1);
org$frostlang$frostc$Annotations* $tmp2368 = *(&local4);
frost$core$String* $tmp2369 = *(&local0);
frost$collections$Array* $tmp2370 = *(&local12);
frost$collections$Array* $tmp2371 = *(&local5);
frost$core$Weak** $tmp2372 = &param0->compiler;
frost$core$Weak* $tmp2373 = *$tmp2372;
frost$core$Object* $tmp2374 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2373);
org$frostlang$frostc$SymbolTable** $tmp2375 = &((org$frostlang$frostc$Compiler*) $tmp2374)->root;
org$frostlang$frostc$SymbolTable* $tmp2376 = *$tmp2375;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2366, param1, param4, param2, $tmp2367, $tmp2368, param7, $tmp2369, ((frost$collections$ListView*) $tmp2370), $tmp2371, $tmp2376);
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
org$frostlang$frostc$ClassDecl* $tmp2377 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local14) = $tmp2366;
frost$core$Frost$unref$frost$core$Object$Q($tmp2374);
// unreffing REF($431:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
// unreffing REF($421:org.frostlang.frostc.ClassDecl)
// line 700
frost$core$Weak** $tmp2378 = &param0->compiler;
frost$core$Weak* $tmp2379 = *$tmp2378;
frost$core$Object* $tmp2380 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2379);
frost$collections$Stack** $tmp2381 = &((org$frostlang$frostc$Compiler*) $tmp2380)->currentClass;
frost$collections$Stack* $tmp2382 = *$tmp2381;
org$frostlang$frostc$ClassDecl* $tmp2383 = *(&local14);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2382, ((frost$core$Object*) $tmp2383));
frost$core$Frost$unref$frost$core$Object$Q($tmp2380);
// unreffing REF($453:frost.core.Weak.T)
// line 701
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2384;
$tmp2384 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2384->value = param7;
frost$core$Int64 $tmp2385 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2386 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2385);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2387;
$tmp2387 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2387->value = $tmp2386;
ITable* $tmp2388 = ((frost$core$Equatable*) $tmp2384)->$class->itable;
while ($tmp2388->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2388 = $tmp2388->next;
}
$fn2390 $tmp2389 = $tmp2388->methods[0];
frost$core$Bit $tmp2391 = $tmp2389(((frost$core$Equatable*) $tmp2384), ((frost$core$Equatable*) $tmp2387));
bool $tmp2392 = $tmp2391.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2387)));
// unreffing REF($469:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2384)));
// unreffing REF($465:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2392) goto block39; else goto block40;
block39:;
// line 702
org$frostlang$frostc$FieldDecl* $tmp2393 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2394 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2395 = *(&local14);
org$frostlang$frostc$Position* $tmp2396 = &$tmp2395->position;
org$frostlang$frostc$Position $tmp2397 = *$tmp2396;
org$frostlang$frostc$Annotations* $tmp2398 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2399 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2398, $tmp2399);
frost$core$Int64 $tmp2400 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2401 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2400);
org$frostlang$frostc$Type* $tmp2402 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2393, $tmp2394, $tmp2397, ((frost$core$String*) NULL), $tmp2398, $tmp2401, &$s2403, $tmp2402, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
org$frostlang$frostc$FieldDecl* $tmp2404 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local15) = $tmp2393;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// unreffing REF($491:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing REF($486:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
// unreffing REF($481:org.frostlang.frostc.FieldDecl)
// line 705
org$frostlang$frostc$ClassDecl* $tmp2405 = *(&local14);
frost$collections$Array** $tmp2406 = &$tmp2405->fields;
frost$collections$Array* $tmp2407 = *$tmp2406;
org$frostlang$frostc$FieldDecl* $tmp2408 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp2407, ((frost$core$Object*) $tmp2408));
// line 706
org$frostlang$frostc$ClassDecl* $tmp2409 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2410 = &$tmp2409->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2411 = *$tmp2410;
org$frostlang$frostc$FieldDecl* $tmp2412 = *(&local15);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2411, ((org$frostlang$frostc$Symbol*) $tmp2412));
// line 707
org$frostlang$frostc$FieldDecl* $tmp2413 = (org$frostlang$frostc$FieldDecl*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2414 = *(&local14);
org$frostlang$frostc$ClassDecl* $tmp2415 = *(&local14);
org$frostlang$frostc$Position* $tmp2416 = &$tmp2415->position;
org$frostlang$frostc$Position $tmp2417 = *$tmp2416;
org$frostlang$frostc$Annotations* $tmp2418 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2419 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2418, $tmp2419);
frost$core$Int64 $tmp2420 = (frost$core$Int64) {1};
org$frostlang$frostc$FieldDecl$Kind $tmp2421 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp2420);
org$frostlang$frostc$Type* $tmp2422 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FieldDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$FieldDecl$Kind$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$ASTNode$Q($tmp2413, $tmp2414, $tmp2417, ((frost$core$String*) NULL), $tmp2418, $tmp2421, &$s2423, $tmp2422, ((org$frostlang$frostc$ASTNode*) NULL));
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
org$frostlang$frostc$FieldDecl* $tmp2424 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local16) = $tmp2413;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// unreffing REF($535:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
// unreffing REF($530:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
// unreffing REF($525:org.frostlang.frostc.FieldDecl)
// line 710
org$frostlang$frostc$ClassDecl* $tmp2425 = *(&local14);
frost$collections$Array** $tmp2426 = &$tmp2425->fields;
frost$collections$Array* $tmp2427 = *$tmp2426;
org$frostlang$frostc$FieldDecl* $tmp2428 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2427, ((frost$core$Object*) $tmp2428));
// line 711
org$frostlang$frostc$ClassDecl* $tmp2429 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2430 = &$tmp2429->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2431 = *$tmp2430;
org$frostlang$frostc$FieldDecl* $tmp2432 = *(&local16);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2431, ((org$frostlang$frostc$Symbol*) $tmp2432));
org$frostlang$frostc$FieldDecl* $tmp2433 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
// unreffing data
*(&local16) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2434 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
// unreffing rawValue
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block40;
block40:;
// line 713
ITable* $tmp2435 = ((frost$collections$Iterable*) param11)->$class->itable;
while ($tmp2435->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2435 = $tmp2435->next;
}
$fn2437 $tmp2436 = $tmp2435->methods[0];
frost$collections$Iterator* $tmp2438 = $tmp2436(((frost$collections$Iterable*) param11));
goto block41;
block41:;
ITable* $tmp2439 = $tmp2438->$class->itable;
while ($tmp2439->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2439 = $tmp2439->next;
}
$fn2441 $tmp2440 = $tmp2439->methods[0];
frost$core$Bit $tmp2442 = $tmp2440($tmp2438);
bool $tmp2443 = $tmp2442.value;
if ($tmp2443) goto block43; else goto block42;
block42:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2444 = $tmp2438->$class->itable;
while ($tmp2444->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2444 = $tmp2444->next;
}
$fn2446 $tmp2445 = $tmp2444->methods[1];
frost$core$Object* $tmp2447 = $tmp2445($tmp2438);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2447)));
org$frostlang$frostc$ASTNode* $tmp2448 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2447);
// line 714
org$frostlang$frostc$ASTNode* $tmp2449 = *(&local17);
frost$core$Int64* $tmp2450 = &$tmp2449->$rawValue;
frost$core$Int64 $tmp2451 = *$tmp2450;
frost$core$Int64 $tmp2452 = (frost$core$Int64) {29};
frost$core$Bit $tmp2453 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2451, $tmp2452);
bool $tmp2454 = $tmp2453.value;
if ($tmp2454) goto block45; else goto block46;
block45:;
org$frostlang$frostc$Position* $tmp2455 = (org$frostlang$frostc$Position*) ($tmp2449->$data + 0);
org$frostlang$frostc$Position $tmp2456 = *$tmp2455;
*(&local18) = $tmp2456;
org$frostlang$frostc$ASTNode** $tmp2457 = (org$frostlang$frostc$ASTNode**) ($tmp2449->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2458 = *$tmp2457;
org$frostlang$frostc$FixedArray** $tmp2459 = (org$frostlang$frostc$FixedArray**) ($tmp2449->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2460 = *$tmp2459;
org$frostlang$frostc$MethodDecl$Kind* $tmp2461 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2449->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp2462 = *$tmp2461;
*(&local19) = $tmp2462;
frost$core$String** $tmp2463 = (frost$core$String**) ($tmp2449->$data + 40);
frost$core$String* $tmp2464 = *$tmp2463;
org$frostlang$frostc$FixedArray** $tmp2465 = (org$frostlang$frostc$FixedArray**) ($tmp2449->$data + 48);
org$frostlang$frostc$FixedArray* $tmp2466 = *$tmp2465;
org$frostlang$frostc$FixedArray** $tmp2467 = (org$frostlang$frostc$FixedArray**) ($tmp2449->$data + 56);
org$frostlang$frostc$FixedArray* $tmp2468 = *$tmp2467;
org$frostlang$frostc$ASTNode** $tmp2469 = (org$frostlang$frostc$ASTNode**) ($tmp2449->$data + 64);
org$frostlang$frostc$ASTNode* $tmp2470 = *$tmp2469;
org$frostlang$frostc$FixedArray** $tmp2471 = (org$frostlang$frostc$FixedArray**) ($tmp2449->$data + 72);
org$frostlang$frostc$FixedArray* $tmp2472 = *$tmp2471;
// line 716
org$frostlang$frostc$MethodDecl$Kind $tmp2473 = *(&local19);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2474;
$tmp2474 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2474->value = $tmp2473;
frost$core$Int64 $tmp2475 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2476 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2475);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2477;
$tmp2477 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2477->value = $tmp2476;
ITable* $tmp2478 = ((frost$core$Equatable*) $tmp2474)->$class->itable;
while ($tmp2478->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2478 = $tmp2478->next;
}
$fn2480 $tmp2479 = $tmp2478->methods[0];
frost$core$Bit $tmp2481 = $tmp2479(((frost$core$Equatable*) $tmp2474), ((frost$core$Equatable*) $tmp2477));
bool $tmp2482 = $tmp2481.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2477)));
// unreffing REF($636:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2474)));
// unreffing REF($632:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp2482) goto block47; else goto block48;
block47:;
// line 717
frost$core$Int64 $tmp2483 = param7.$rawValue;
frost$core$Int64 $tmp2484 = (frost$core$Int64) {0};
frost$core$Bit $tmp2485 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2483, $tmp2484);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block50; else goto block51;
block50:;
goto block49;
block51:;
frost$core$Int64 $tmp2487 = (frost$core$Int64) {1};
frost$core$Bit $tmp2488 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2483, $tmp2487);
bool $tmp2489 = $tmp2488.value;
if ($tmp2489) goto block52; else goto block53;
block52:;
// line 722
org$frostlang$frostc$Position $tmp2490 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2490, &$s2491);
goto block49;
block53:;
frost$core$Int64 $tmp2492 = (frost$core$Int64) {2};
frost$core$Bit $tmp2493 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2483, $tmp2492);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block54; else goto block49;
block54:;
// line 725
org$frostlang$frostc$Position $tmp2495 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2495, &$s2496);
goto block49;
block49:;
goto block48;
block48:;
goto block44;
block46:;
goto block44;
block44:;
// line 734
org$frostlang$frostc$ClassDecl* $tmp2497 = *(&local14);
org$frostlang$frostc$ASTNode* $tmp2498 = *(&local17);
org$frostlang$frostc$Scanner$scanClassChild$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$ASTNode(param0, $tmp2497, $tmp2498);
frost$core$Frost$unref$frost$core$Object$Q($tmp2447);
// unreffing REF($594:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2499 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
// unreffing m
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block41;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing REF($583:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 736
frost$core$Bit $tmp2500 = frost$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2500;
// line 737
frost$core$Bit $tmp2501 = frost$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2501;
// line 738
org$frostlang$frostc$ClassDecl* $tmp2502 = *(&local14);
frost$collections$Array** $tmp2503 = &$tmp2502->methods;
frost$collections$Array* $tmp2504 = *$tmp2503;
ITable* $tmp2505 = ((frost$collections$Iterable*) $tmp2504)->$class->itable;
while ($tmp2505->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2505 = $tmp2505->next;
}
$fn2507 $tmp2506 = $tmp2505->methods[0];
frost$collections$Iterator* $tmp2508 = $tmp2506(((frost$collections$Iterable*) $tmp2504));
goto block55;
block55:;
ITable* $tmp2509 = $tmp2508->$class->itable;
while ($tmp2509->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2509 = $tmp2509->next;
}
$fn2511 $tmp2510 = $tmp2509->methods[0];
frost$core$Bit $tmp2512 = $tmp2510($tmp2508);
bool $tmp2513 = $tmp2512.value;
if ($tmp2513) goto block57; else goto block56;
block56:;
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp2514 = $tmp2508->$class->itable;
while ($tmp2514->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2514 = $tmp2514->next;
}
$fn2516 $tmp2515 = $tmp2514->methods[1];
frost$core$Object* $tmp2517 = $tmp2515($tmp2508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp2517)));
org$frostlang$frostc$MethodDecl* $tmp2518 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local22) = ((org$frostlang$frostc$MethodDecl*) $tmp2517);
// line 739
org$frostlang$frostc$MethodDecl* $tmp2519 = *(&local22);
org$frostlang$frostc$MethodDecl$Kind* $tmp2520 = &$tmp2519->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2521 = *$tmp2520;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2522;
$tmp2522 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2522->value = $tmp2521;
frost$core$Int64 $tmp2523 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2524 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2523);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2525;
$tmp2525 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2525->value = $tmp2524;
ITable* $tmp2526 = ((frost$core$Equatable*) $tmp2522)->$class->itable;
while ($tmp2526->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2526 = $tmp2526->next;
}
$fn2528 $tmp2527 = $tmp2526->methods[0];
frost$core$Bit $tmp2529 = $tmp2527(((frost$core$Equatable*) $tmp2522), ((frost$core$Equatable*) $tmp2525));
bool $tmp2530 = $tmp2529.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2525)));
// unreffing REF($729:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2522)));
// unreffing REF($725:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp2530) goto block58; else goto block59;
block58:;
// line 740
frost$core$Bit $tmp2531 = frost$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2531;
goto block59;
block59:;
// line 742
org$frostlang$frostc$MethodDecl* $tmp2532 = *(&local22);
frost$core$String** $tmp2533 = &((org$frostlang$frostc$Symbol*) $tmp2532)->name;
frost$core$String* $tmp2534 = *$tmp2533;
frost$core$Bit $tmp2535 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2534, &$s2536);
bool $tmp2537 = $tmp2535.value;
if ($tmp2537) goto block62; else goto block63;
block62:;
org$frostlang$frostc$MethodDecl* $tmp2538 = *(&local22);
frost$collections$Array** $tmp2539 = &$tmp2538->parameters;
frost$collections$Array* $tmp2540 = *$tmp2539;
ITable* $tmp2541 = ((frost$collections$CollectionView*) $tmp2540)->$class->itable;
while ($tmp2541->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2541 = $tmp2541->next;
}
$fn2543 $tmp2542 = $tmp2541->methods[0];
frost$core$Int64 $tmp2544 = $tmp2542(((frost$collections$CollectionView*) $tmp2540));
frost$core$Int64 $tmp2545 = (frost$core$Int64) {0};
frost$core$Bit $tmp2546 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2544, $tmp2545);
*(&local23) = $tmp2546;
goto block64;
block63:;
*(&local23) = $tmp2535;
goto block64;
block64:;
frost$core$Bit $tmp2547 = *(&local23);
bool $tmp2548 = $tmp2547.value;
if ($tmp2548) goto block60; else goto block61;
block60:;
// line 743
frost$core$Bit $tmp2549 = frost$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2549;
// line 744
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2550;
$tmp2550 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2550->value = param7;
frost$core$Int64 $tmp2551 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2552 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2551);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2553;
$tmp2553 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2553->value = $tmp2552;
ITable* $tmp2554 = ((frost$core$Equatable*) $tmp2550)->$class->itable;
while ($tmp2554->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2554 = $tmp2554->next;
}
$fn2556 $tmp2555 = $tmp2554->methods[0];
frost$core$Bit $tmp2557 = $tmp2555(((frost$core$Equatable*) $tmp2550), ((frost$core$Equatable*) $tmp2553));
bool $tmp2558 = $tmp2557.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2553)));
// unreffing REF($775:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2550)));
// unreffing REF($771:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2558) goto block65; else goto block66;
block65:;
// line 745
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, param4, &$s2559);
goto block66;
block66:;
goto block61;
block61:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2517);
// unreffing REF($713:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp2560 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
// unreffing m
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block55;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
// unreffing REF($702:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 749
frost$core$Bit $tmp2561 = *(&local20);
frost$core$Bit $tmp2562 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2561);
bool $tmp2563 = $tmp2562.value;
if ($tmp2563) goto block69; else goto block70;
block69:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2564;
$tmp2564 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2564->value = param7;
frost$core$Int64 $tmp2565 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2566 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2565);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2567;
$tmp2567 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2567->value = $tmp2566;
ITable* $tmp2568 = ((frost$core$Equatable*) $tmp2564)->$class->itable;
while ($tmp2568->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2568 = $tmp2568->next;
}
$fn2570 $tmp2569 = $tmp2568->methods[0];
frost$core$Bit $tmp2571 = $tmp2569(((frost$core$Equatable*) $tmp2564), ((frost$core$Equatable*) $tmp2567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2567)));
// unreffing REF($811:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2564)));
// unreffing REF($807:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local25) = $tmp2571;
goto block71;
block70:;
*(&local25) = $tmp2562;
goto block71;
block71:;
frost$core$Bit $tmp2572 = *(&local25);
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block72; else goto block73;
block72:;
org$frostlang$frostc$ClassDecl* $tmp2574 = *(&local14);
frost$core$String** $tmp2575 = &$tmp2574->name;
frost$core$String* $tmp2576 = *$tmp2575;
ITable* $tmp2578 = ((frost$core$Equatable*) $tmp2576)->$class->itable;
while ($tmp2578->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2578 = $tmp2578->next;
}
$fn2580 $tmp2579 = $tmp2578->methods[1];
frost$core$Bit $tmp2581 = $tmp2579(((frost$core$Equatable*) $tmp2576), ((frost$core$Equatable*) &$s2577));
*(&local24) = $tmp2581;
goto block74;
block73:;
*(&local24) = $tmp2572;
goto block74;
block74:;
frost$core$Bit $tmp2582 = *(&local24);
bool $tmp2583 = $tmp2582.value;
if ($tmp2583) goto block67; else goto block68;
block67:;
// line 750
org$frostlang$frostc$MethodDecl* $tmp2584 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2585 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2586 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2587 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2586, $tmp2587);
frost$core$Int64 $tmp2588 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2589 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2588);
frost$collections$Array* $tmp2590 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2591 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2590, $tmp2591);
org$frostlang$frostc$Type* $tmp2592 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2593 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2593);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2584, $tmp2585, param4, ((frost$core$String*) NULL), $tmp2586, $tmp2589, &$s2594, ((frost$collections$Array*) NULL), $tmp2590, $tmp2592, $tmp2593);
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
org$frostlang$frostc$MethodDecl* $tmp2595 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local26) = $tmp2584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
// unreffing REF($855:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
// unreffing REF($854:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2590));
// unreffing REF($850:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
// unreffing REF($845:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
// unreffing REF($843:org.frostlang.frostc.MethodDecl)
// line 753
org$frostlang$frostc$ClassDecl* $tmp2596 = *(&local14);
frost$collections$Array** $tmp2597 = &$tmp2596->methods;
frost$collections$Array* $tmp2598 = *$tmp2597;
org$frostlang$frostc$MethodDecl* $tmp2599 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2598, ((frost$core$Object*) $tmp2599));
// line 754
org$frostlang$frostc$ClassDecl* $tmp2600 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2601 = &$tmp2600->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2602 = *$tmp2601;
org$frostlang$frostc$MethodDecl* $tmp2603 = *(&local26);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2602, ((org$frostlang$frostc$Symbol*) $tmp2603));
org$frostlang$frostc$MethodDecl* $tmp2604 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
// unreffing defaultInit
*(&local26) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block68;
block68:;
// line 756
frost$core$Bit $tmp2605 = *(&local21);
frost$core$Bit $tmp2606 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2605);
bool $tmp2607 = $tmp2606.value;
if ($tmp2607) goto block77; else goto block78;
block77:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2608;
$tmp2608 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2608->value = param7;
frost$core$Int64 $tmp2609 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2610 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2609);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2611;
$tmp2611 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2611->value = $tmp2610;
ITable* $tmp2612 = ((frost$core$Equatable*) $tmp2608)->$class->itable;
while ($tmp2612->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2612 = $tmp2612->next;
}
$fn2614 $tmp2613 = $tmp2612->methods[0];
frost$core$Bit $tmp2615 = $tmp2613(((frost$core$Equatable*) $tmp2608), ((frost$core$Equatable*) $tmp2611));
bool $tmp2616 = $tmp2615.value;
if ($tmp2616) goto block80; else goto block81;
block80:;
*(&local29) = $tmp2615;
goto block82;
block81:;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2617;
$tmp2617 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2617->value = param7;
frost$core$Int64 $tmp2618 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2619 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2618);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2620;
$tmp2620 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2620->value = $tmp2619;
ITable* $tmp2621 = ((frost$core$Equatable*) $tmp2617)->$class->itable;
while ($tmp2621->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2621 = $tmp2621->next;
}
$fn2623 $tmp2622 = $tmp2621->methods[0];
frost$core$Bit $tmp2624 = $tmp2622(((frost$core$Equatable*) $tmp2617), ((frost$core$Equatable*) $tmp2620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2620)));
// unreffing REF($923:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2617)));
// unreffing REF($919:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local29) = $tmp2624;
goto block82;
block82:;
frost$core$Bit $tmp2625 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2611)));
// unreffing REF($912:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2608)));
// unreffing REF($908:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
*(&local28) = $tmp2625;
goto block79;
block78:;
*(&local28) = $tmp2606;
goto block79;
block79:;
frost$core$Bit $tmp2626 = *(&local28);
bool $tmp2627 = $tmp2626.value;
if ($tmp2627) goto block83; else goto block84;
block83:;
org$frostlang$frostc$ClassDecl* $tmp2628 = *(&local14);
frost$core$String** $tmp2629 = &$tmp2628->name;
frost$core$String* $tmp2630 = *$tmp2629;
ITable* $tmp2632 = ((frost$core$Equatable*) $tmp2630)->$class->itable;
while ($tmp2632->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2632 = $tmp2632->next;
}
$fn2634 $tmp2633 = $tmp2632->methods[1];
frost$core$Bit $tmp2635 = $tmp2633(((frost$core$Equatable*) $tmp2630), ((frost$core$Equatable*) &$s2631));
*(&local27) = $tmp2635;
goto block85;
block84:;
*(&local27) = $tmp2626;
goto block85;
block85:;
frost$core$Bit $tmp2636 = *(&local27);
bool $tmp2637 = $tmp2636.value;
if ($tmp2637) goto block75; else goto block76;
block75:;
// line 758
org$frostlang$frostc$MethodDecl* $tmp2638 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl* $tmp2639 = *(&local14);
org$frostlang$frostc$Annotations* $tmp2640 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2641 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2642 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2643 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2641, $tmp2642);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2640, $tmp2643);
frost$core$Int64 $tmp2644 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2645 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2644);
frost$collections$Array* $tmp2646 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2647 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2646, $tmp2647);
org$frostlang$frostc$Type* $tmp2648 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2649 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2649);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2638, $tmp2639, param4, ((frost$core$String*) NULL), $tmp2640, $tmp2645, &$s2650, ((frost$collections$Array*) NULL), $tmp2646, $tmp2648, $tmp2649);
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
org$frostlang$frostc$MethodDecl* $tmp2651 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local30) = $tmp2638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
// unreffing REF($978:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
// unreffing REF($977:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
// unreffing REF($973:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
// unreffing REF($966:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
// unreffing REF($964:org.frostlang.frostc.MethodDecl)
// line 761
org$frostlang$frostc$ClassDecl* $tmp2652 = *(&local14);
frost$collections$Array** $tmp2653 = &$tmp2652->methods;
frost$collections$Array* $tmp2654 = *$tmp2653;
org$frostlang$frostc$MethodDecl* $tmp2655 = *(&local30);
frost$collections$Array$add$frost$collections$Array$T($tmp2654, ((frost$core$Object*) $tmp2655));
// line 762
org$frostlang$frostc$ClassDecl* $tmp2656 = *(&local14);
org$frostlang$frostc$SymbolTable** $tmp2657 = &$tmp2656->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2658 = *$tmp2657;
org$frostlang$frostc$MethodDecl* $tmp2659 = *(&local30);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2658, ((org$frostlang$frostc$Symbol*) $tmp2659));
org$frostlang$frostc$MethodDecl* $tmp2660 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
// unreffing defaultCleanup
*(&local30) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block76;
block76:;
// line 764
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2661;
$tmp2661 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2661->value = param7;
frost$core$Int64 $tmp2662 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp2663 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2662);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2664;
$tmp2664 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2664->value = $tmp2663;
ITable* $tmp2665 = ((frost$core$Equatable*) $tmp2661)->$class->itable;
while ($tmp2665->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2665 = $tmp2665->next;
}
$fn2667 $tmp2666 = $tmp2665->methods[0];
frost$core$Bit $tmp2668 = $tmp2666(((frost$core$Equatable*) $tmp2661), ((frost$core$Equatable*) $tmp2664));
bool $tmp2669 = $tmp2668.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2664)));
// unreffing REF($1031:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2661)));
// unreffing REF($1027:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
if ($tmp2669) goto block86; else goto block87;
block86:;
// line 765
frost$core$Bit $tmp2670 = frost$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2670;
// line 766
org$frostlang$frostc$ClassDecl* $tmp2671 = *(&local14);
frost$collections$Array** $tmp2672 = &$tmp2671->choiceCases;
frost$collections$Array* $tmp2673 = *$tmp2672;
ITable* $tmp2674 = ((frost$collections$CollectionView*) $tmp2673)->$class->itable;
while ($tmp2674->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2674 = $tmp2674->next;
}
$fn2676 $tmp2675 = $tmp2674->methods[0];
frost$core$Int64 $tmp2677 = $tmp2675(((frost$collections$CollectionView*) $tmp2673));
frost$core$Int64 $tmp2678 = (frost$core$Int64) {0};
int64_t $tmp2679 = $tmp2677.value;
int64_t $tmp2680 = $tmp2678.value;
bool $tmp2681 = $tmp2679 > $tmp2680;
frost$core$Bit $tmp2682 = (frost$core$Bit) {$tmp2681};
bool $tmp2683 = $tmp2682.value;
if ($tmp2683) goto block88; else goto block90;
block88:;
// line 767
org$frostlang$frostc$ClassDecl* $tmp2684 = *(&local14);
frost$collections$Array** $tmp2685 = &$tmp2684->choiceCases;
frost$collections$Array* $tmp2686 = *$tmp2685;
ITable* $tmp2687 = ((frost$collections$Iterable*) $tmp2686)->$class->itable;
while ($tmp2687->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2687 = $tmp2687->next;
}
$fn2689 $tmp2688 = $tmp2687->methods[0];
frost$collections$Iterator* $tmp2690 = $tmp2688(((frost$collections$Iterable*) $tmp2686));
goto block91;
block91:;
ITable* $tmp2691 = $tmp2690->$class->itable;
while ($tmp2691->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2691 = $tmp2691->next;
}
$fn2693 $tmp2692 = $tmp2691->methods[0];
frost$core$Bit $tmp2694 = $tmp2692($tmp2690);
bool $tmp2695 = $tmp2694.value;
if ($tmp2695) goto block93; else goto block92;
block92:;
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp2696 = $tmp2690->$class->itable;
while ($tmp2696->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2696 = $tmp2696->next;
}
$fn2698 $tmp2697 = $tmp2696->methods[1];
frost$core$Object* $tmp2699 = $tmp2697($tmp2690);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp2699)));
org$frostlang$frostc$ChoiceCase* $tmp2700 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) $tmp2699);
// line 768
org$frostlang$frostc$ChoiceCase* $tmp2701 = *(&local32);
frost$collections$Array** $tmp2702 = &$tmp2701->fields;
frost$collections$Array* $tmp2703 = *$tmp2702;
ITable* $tmp2704 = ((frost$collections$CollectionView*) $tmp2703)->$class->itable;
while ($tmp2704->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2704 = $tmp2704->next;
}
$fn2706 $tmp2705 = $tmp2704->methods[0];
frost$core$Int64 $tmp2707 = $tmp2705(((frost$collections$CollectionView*) $tmp2703));
frost$core$Int64 $tmp2708 = (frost$core$Int64) {0};
int64_t $tmp2709 = $tmp2707.value;
int64_t $tmp2710 = $tmp2708.value;
bool $tmp2711 = $tmp2709 > $tmp2710;
frost$core$Bit $tmp2712 = (frost$core$Bit) {$tmp2711};
bool $tmp2713 = $tmp2712.value;
if ($tmp2713) goto block94; else goto block95;
block94:;
// line 769
frost$core$Bit $tmp2714 = frost$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2714;
// line 770
frost$core$Frost$unref$frost$core$Object$Q($tmp2699);
// unreffing REF($1077:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp2715 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2715));
// unreffing e
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2699);
// unreffing REF($1077:frost.collections.Iterator.T)
org$frostlang$frostc$ChoiceCase* $tmp2716 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// unreffing e
*(&local32) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block91;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
// unreffing REF($1066:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block89;
block90:;
// line 1
// line 775
org$frostlang$frostc$ClassDecl* $tmp2717 = *(&local14);
org$frostlang$frostc$Position* $tmp2718 = &$tmp2717->position;
org$frostlang$frostc$Position $tmp2719 = *$tmp2718;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp2719, &$s2720);
// line 776
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2721 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
// unreffing result
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2722 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2723));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2724 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2724));
// unreffing annotations
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2725 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2725));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2726 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2726));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$ClassDecl*) NULL);
block89:;
// line 778
frost$core$Bit $tmp2727 = *(&local31);
frost$core$Bit $tmp2728 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2727);
bool $tmp2729 = $tmp2728.value;
if ($tmp2729) goto block96; else goto block97;
block96:;
// line 779
org$frostlang$frostc$ClassDecl* $tmp2730 = *(&local14);
org$frostlang$frostc$Type* $tmp2731 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
org$frostlang$frostc$Type** $tmp2732 = &$tmp2730->rawSuper;
org$frostlang$frostc$Type* $tmp2733 = *$tmp2732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
org$frostlang$frostc$Type** $tmp2734 = &$tmp2730->rawSuper;
*$tmp2734 = $tmp2731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
// unreffing REF($1172:org.frostlang.frostc.Type)
goto block97;
block97:;
goto block87;
block87:;
// line 782
frost$core$Weak** $tmp2735 = &param0->compiler;
frost$core$Weak* $tmp2736 = *$tmp2735;
frost$core$Object* $tmp2737 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2736);
frost$collections$Stack** $tmp2738 = &((org$frostlang$frostc$Compiler*) $tmp2737)->currentClass;
frost$collections$Stack* $tmp2739 = *$tmp2738;
frost$core$Object* $tmp2740 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2739);
frost$core$Frost$unref$frost$core$Object$Q($tmp2740);
// unreffing REF($1196:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp2737);
// unreffing REF($1191:frost.core.Weak.T)
// line 783
org$frostlang$frostc$ClassDecl* $tmp2741 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2741));
org$frostlang$frostc$ClassDecl* $tmp2742 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
// unreffing result
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$collections$Array* $tmp2743 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2743));
// unreffing supertypes
*(&local12) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp2744 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
// unreffing parameters
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Annotations* $tmp2745 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
// unreffing annotations
*(&local4) = ((org$frostlang$frostc$Annotations*) NULL);
frost$core$String* $tmp2746 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
// unreffing doccomment
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp2747 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
return $tmp2741;

}
void org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$ClassDecl* param1, frost$collections$Array* param2) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 787
frost$collections$Array$add$frost$collections$Array$T(param2, ((frost$core$Object*) param1));
// line 788
frost$collections$Array** $tmp2748 = &param1->classes;
frost$collections$Array* $tmp2749 = *$tmp2748;
ITable* $tmp2750 = ((frost$collections$Iterable*) $tmp2749)->$class->itable;
while ($tmp2750->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2750 = $tmp2750->next;
}
$fn2752 $tmp2751 = $tmp2750->methods[0];
frost$collections$Iterator* $tmp2753 = $tmp2751(((frost$collections$Iterable*) $tmp2749));
goto block1;
block1:;
ITable* $tmp2754 = $tmp2753->$class->itable;
while ($tmp2754->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2754 = $tmp2754->next;
}
$fn2756 $tmp2755 = $tmp2754->methods[0];
frost$core$Bit $tmp2757 = $tmp2755($tmp2753);
bool $tmp2758 = $tmp2757.value;
if ($tmp2758) goto block3; else goto block2;
block2:;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp2759 = $tmp2753->$class->itable;
while ($tmp2759->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2759 = $tmp2759->next;
}
$fn2761 $tmp2760 = $tmp2759->methods[1];
frost$core$Object* $tmp2762 = $tmp2760($tmp2753);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2762)));
org$frostlang$frostc$ClassDecl* $tmp2763 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2763));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2762);
// line 789
org$frostlang$frostc$ClassDecl* $tmp2764 = *(&local0);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp2764, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2762);
// unreffing REF($21:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp2765 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2765));
// unreffing inner
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
// unreffing REF($10:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(org$frostlang$frostc$Scanner* param0, frost$io$File* param1, frost$collections$MapView* param2, frost$core$String* param3, frost$collections$List* param4) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
org$frostlang$frostc$MethodDecl* local2 = NULL;
// line 795
org$frostlang$frostc$ClassDecl** $tmp2766 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2767 = *$tmp2766;
frost$core$Bit $tmp2768 = frost$core$Bit$init$builtin_bit($tmp2767 == NULL);
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block1; else goto block2;
block1:;
// line 796
*(&local0) = ((frost$core$String*) NULL);
// line 797
ITable* $tmp2771 = ((frost$core$Equatable*) param3)->$class->itable;
while ($tmp2771->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2771 = $tmp2771->next;
}
$fn2773 $tmp2772 = $tmp2771->methods[1];
frost$core$Bit $tmp2774 = $tmp2772(((frost$core$Equatable*) param3), ((frost$core$Equatable*) &$s2770));
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block3; else goto block5;
block3:;
// line 798
frost$core$String* $tmp2776 = frost$core$String$convert$R$frost$core$String(param3);
frost$core$String* $tmp2777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2776, &$s2778);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
frost$core$String* $tmp2779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local0) = $tmp2777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
// unreffing REF($19:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
// unreffing REF($18:frost.core.String)
goto block4;
block5:;
// line 1
// line 801
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2780));
frost$core$String* $tmp2781 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
*(&local0) = &$s2782;
goto block4;
block4:;
// line 803
org$frostlang$frostc$ClassDecl* $tmp2783 = (org$frostlang$frostc$ClassDecl*) frostObjectAlloc(208, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$class);
org$frostlang$frostc$Position $tmp2784 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2785 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
org$frostlang$frostc$Annotations$init($tmp2785);
frost$core$Int64 $tmp2786 = (frost$core$Int64) {0};
org$frostlang$frostc$ClassDecl$Kind $tmp2787 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2786);
frost$core$String* $tmp2788 = *(&local0);
frost$collections$Array* $tmp2789 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2789);
frost$collections$Array* $tmp2790 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2790);
frost$core$Weak** $tmp2791 = &param0->compiler;
frost$core$Weak* $tmp2792 = *$tmp2791;
frost$core$Object* $tmp2793 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2792);
org$frostlang$frostc$SymbolTable** $tmp2794 = &((org$frostlang$frostc$Compiler*) $tmp2793)->root;
org$frostlang$frostc$SymbolTable* $tmp2795 = *$tmp2794;
org$frostlang$frostc$ClassDecl$init$frost$io$File$org$frostlang$frostc$Position$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GenericParameter$GT$org$frostlang$frostc$SymbolTable($tmp2783, param1, $tmp2784, param2, ((frost$core$String*) NULL), $tmp2785, $tmp2787, $tmp2788, ((frost$collections$ListView*) $tmp2789), $tmp2790, $tmp2795);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
org$frostlang$frostc$ClassDecl** $tmp2796 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2797 = *$tmp2796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
org$frostlang$frostc$ClassDecl** $tmp2798 = &param0->bareCodeClass;
*$tmp2798 = $tmp2783;
frost$core$Frost$unref$frost$core$Object$Q($tmp2793);
// unreffing REF($60:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
// unreffing REF($54:frost.collections.Array<org.frostlang.frostc.ClassDecl.GenericParameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2789));
// unreffing REF($50:frost.collections.Array<org.frostlang.frostc.Type>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
// unreffing REF($45:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
// unreffing REF($43:org.frostlang.frostc.ClassDecl)
// line 806
org$frostlang$frostc$ClassDecl** $tmp2799 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2800 = *$tmp2799;
frost$core$Bit $tmp2801 = frost$core$Bit$init$builtin_bit($tmp2800 != NULL);
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp2803 = (frost$core$Int64) {806};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2804, $tmp2803, &$s2805);
abort(); // unreachable
block6:;
ITable* $tmp2806 = ((frost$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2806->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2806 = $tmp2806->next;
}
$fn2808 $tmp2807 = $tmp2806->methods[0];
$tmp2807(((frost$collections$CollectionWriter*) param4), ((frost$core$Object*) $tmp2800));
// line 807
org$frostlang$frostc$MethodDecl* $tmp2809 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2810 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2811 = *$tmp2810;
frost$core$Bit $tmp2812 = frost$core$Bit$init$builtin_bit($tmp2811 != NULL);
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp2814 = (frost$core$Int64) {807};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2815, $tmp2814, &$s2816);
abort(); // unreachable
block8:;
org$frostlang$frostc$Position $tmp2817 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2818 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2819 = (frost$core$Int64) {8192};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2818, $tmp2819);
frost$core$Int64 $tmp2820 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2821 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2820);
frost$collections$Array* $tmp2822 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2823 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2822, $tmp2823);
org$frostlang$frostc$Type* $tmp2824 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2825 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2825);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2809, $tmp2811, $tmp2817, ((frost$core$String*) NULL), $tmp2818, $tmp2821, &$s2826, ((frost$collections$Array*) NULL), $tmp2822, $tmp2824, $tmp2825);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
org$frostlang$frostc$MethodDecl* $tmp2827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local1) = $tmp2809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
// unreffing REF($127:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
// unreffing REF($126:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
// unreffing REF($122:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
// unreffing REF($117:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
// unreffing REF($105:org.frostlang.frostc.MethodDecl)
// line 810
org$frostlang$frostc$ClassDecl** $tmp2828 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2829 = *$tmp2828;
frost$core$Bit $tmp2830 = frost$core$Bit$init$builtin_bit($tmp2829 != NULL);
bool $tmp2831 = $tmp2830.value;
if ($tmp2831) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2832 = (frost$core$Int64) {810};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2833, $tmp2832, &$s2834);
abort(); // unreachable
block10:;
frost$collections$Array** $tmp2835 = &$tmp2829->methods;
frost$collections$Array* $tmp2836 = *$tmp2835;
org$frostlang$frostc$MethodDecl* $tmp2837 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp2836, ((frost$core$Object*) $tmp2837));
// line 811
org$frostlang$frostc$ClassDecl** $tmp2838 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2839 = *$tmp2838;
frost$core$Bit $tmp2840 = frost$core$Bit$init$builtin_bit($tmp2839 != NULL);
bool $tmp2841 = $tmp2840.value;
if ($tmp2841) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2842 = (frost$core$Int64) {811};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2843, $tmp2842, &$s2844);
abort(); // unreachable
block12:;
org$frostlang$frostc$SymbolTable** $tmp2845 = &$tmp2839->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2846 = *$tmp2845;
org$frostlang$frostc$MethodDecl* $tmp2847 = *(&local1);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2846, ((org$frostlang$frostc$Symbol*) $tmp2847));
// line 812
org$frostlang$frostc$MethodDecl* $tmp2848 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp2849 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2850 = *$tmp2849;
frost$core$Bit $tmp2851 = frost$core$Bit$init$builtin_bit($tmp2850 != NULL);
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp2853 = (frost$core$Int64) {812};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2854, $tmp2853, &$s2855);
abort(); // unreachable
block14:;
org$frostlang$frostc$Position $tmp2856 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp2857 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp2858 = (frost$core$Int64) {32};
frost$core$Int64 $tmp2859 = (frost$core$Int64) {8192};
frost$core$Int64 $tmp2860 = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64($tmp2858, $tmp2859);
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp2857, $tmp2860);
frost$core$Int64 $tmp2861 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp2862 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2861);
frost$collections$Array* $tmp2863 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp2864 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp2863, $tmp2864);
org$frostlang$frostc$Type* $tmp2865 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
org$frostlang$frostc$FixedArray* $tmp2866 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp2866);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp2848, $tmp2850, $tmp2856, ((frost$core$String*) NULL), $tmp2857, $tmp2862, &$s2867, ((frost$collections$Array*) NULL), $tmp2863, $tmp2865, $tmp2866);
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
org$frostlang$frostc$MethodDecl* $tmp2868 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
*(&local2) = $tmp2848;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
// unreffing REF($212:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// unreffing REF($211:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
// unreffing REF($207:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
// unreffing REF($200:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
// unreffing REF($188:org.frostlang.frostc.MethodDecl)
// line 815
org$frostlang$frostc$ClassDecl** $tmp2869 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2870 = *$tmp2869;
frost$core$Bit $tmp2871 = frost$core$Bit$init$builtin_bit($tmp2870 != NULL);
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2873 = (frost$core$Int64) {815};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2874, $tmp2873, &$s2875);
abort(); // unreachable
block16:;
frost$collections$Array** $tmp2876 = &$tmp2870->methods;
frost$collections$Array* $tmp2877 = *$tmp2876;
org$frostlang$frostc$MethodDecl* $tmp2878 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp2877, ((frost$core$Object*) $tmp2878));
// line 816
org$frostlang$frostc$ClassDecl** $tmp2879 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp2880 = *$tmp2879;
frost$core$Bit $tmp2881 = frost$core$Bit$init$builtin_bit($tmp2880 != NULL);
bool $tmp2882 = $tmp2881.value;
if ($tmp2882) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2883 = (frost$core$Int64) {816};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2884, $tmp2883, &$s2885);
abort(); // unreachable
block18:;
org$frostlang$frostc$SymbolTable** $tmp2886 = &$tmp2880->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp2887 = *$tmp2886;
org$frostlang$frostc$MethodDecl* $tmp2888 = *(&local2);
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp2887, ((org$frostlang$frostc$Symbol*) $tmp2888));
org$frostlang$frostc$MethodDecl* $tmp2889 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
// unreffing defaultCleanup
*(&local2) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
// unreffing defaultInit
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp2891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// unreffing fullName
*(&local0) = ((frost$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Scanner* param0, org$frostlang$frostc$Position param1, frost$core$String* param2) {

frost$io$File** $tmp2892 = &param0->source;
frost$io$File* $tmp2893 = *$tmp2892;
frost$core$Bit $tmp2894 = frost$core$Bit$init$builtin_bit($tmp2893 != NULL);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2896 = (frost$core$Int64) {821};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2897, $tmp2896, &$s2898);
abort(); // unreachable
block1:;
// line 822
frost$core$Weak** $tmp2899 = &param0->compiler;
frost$core$Weak* $tmp2900 = *$tmp2899;
frost$core$Object* $tmp2901 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2900);
frost$io$File** $tmp2902 = &param0->source;
frost$io$File* $tmp2903 = *$tmp2902;
frost$core$Bit $tmp2904 = frost$core$Bit$init$builtin_bit($tmp2903 != NULL);
bool $tmp2905 = $tmp2904.value;
if ($tmp2905) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp2906 = (frost$core$Int64) {822};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2907, $tmp2906, &$s2908);
abort(); // unreachable
block3:;
org$frostlang$frostc$Compiler$error$frost$io$File$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp2901), $tmp2903, param1, param2);
frost$core$Frost$unref$frost$core$Object$Q($tmp2901);
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
// line 826
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp2909 = &param0->source;
frost$io$File* $tmp2910 = *$tmp2909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
frost$io$File** $tmp2911 = &param0->source;
*$tmp2911 = param1;
// line 827
frost$core$Int64* $tmp2912 = &param2->$rawValue;
frost$core$Int64 $tmp2913 = *$tmp2912;
frost$core$Int64 $tmp2914 = (frost$core$Int64) {19};
frost$core$Bit $tmp2915 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2913, $tmp2914);
bool $tmp2916 = $tmp2915.value;
if ($tmp2916) goto block2; else goto block3;
block2:;
org$frostlang$frostc$FixedArray** $tmp2917 = (org$frostlang$frostc$FixedArray**) (param2->$data + 0);
org$frostlang$frostc$FixedArray* $tmp2918 = *$tmp2917;
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
org$frostlang$frostc$FixedArray* $tmp2919 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
*(&local0) = $tmp2918;
// line 829
frost$collections$Array* $tmp2920 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2920);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
frost$collections$Array* $tmp2921 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
*(&local1) = $tmp2920;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
// unreffing REF($27:frost.collections.Array<org.frostlang.frostc.ClassDecl>)
// line 830
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2922));
frost$core$String* $tmp2923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2923));
*(&local2) = &$s2924;
// line 831
frost$collections$HashMap* $tmp2925 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp2925);
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
frost$collections$HashMap* $tmp2926 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
*(&local3) = $tmp2925;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
// unreffing REF($49:frost.collections.HashMap<frost.core.String, frost.core.String>)
// line 832
org$frostlang$frostc$FixedArray* $tmp2927 = *(&local0);
ITable* $tmp2928 = ((frost$collections$Iterable*) $tmp2927)->$class->itable;
while ($tmp2928->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2928 = $tmp2928->next;
}
$fn2930 $tmp2929 = $tmp2928->methods[0];
frost$collections$Iterator* $tmp2931 = $tmp2929(((frost$collections$Iterable*) $tmp2927));
goto block4;
block4:;
ITable* $tmp2932 = $tmp2931->$class->itable;
while ($tmp2932->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2932 = $tmp2932->next;
}
$fn2934 $tmp2933 = $tmp2932->methods[0];
frost$core$Bit $tmp2935 = $tmp2933($tmp2931);
bool $tmp2936 = $tmp2935.value;
if ($tmp2936) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2937 = $tmp2931->$class->itable;
while ($tmp2937->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2937 = $tmp2937->next;
}
$fn2939 $tmp2938 = $tmp2937->methods[1];
frost$core$Object* $tmp2940 = $tmp2938($tmp2931);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2940)));
org$frostlang$frostc$ASTNode* $tmp2941 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local4) = ((org$frostlang$frostc$ASTNode*) $tmp2940);
// line 833
org$frostlang$frostc$ASTNode* $tmp2942 = *(&local4);
frost$core$Int64* $tmp2943 = &$tmp2942->$rawValue;
frost$core$Int64 $tmp2944 = *$tmp2943;
frost$core$Int64 $tmp2945 = (frost$core$Int64) {33};
frost$core$Bit $tmp2946 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2944, $tmp2945);
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp2948 = (org$frostlang$frostc$Position*) ($tmp2942->$data + 0);
org$frostlang$frostc$Position $tmp2949 = *$tmp2948;
frost$core$String** $tmp2950 = (frost$core$String**) ($tmp2942->$data + 16);
frost$core$String* $tmp2951 = *$tmp2950;
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
frost$core$String* $tmp2952 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
*(&local5) = $tmp2951;
// line 835
frost$core$String* $tmp2953 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
frost$core$String* $tmp2954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local2) = $tmp2953;
frost$core$String* $tmp2955 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
// unreffing name
*(&local5) = ((frost$core$String*) NULL);
goto block7;
block9:;
frost$core$Int64 $tmp2956 = (frost$core$Int64) {49};
frost$core$Bit $tmp2957 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2944, $tmp2956);
bool $tmp2958 = $tmp2957.value;
if ($tmp2958) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp2959 = (org$frostlang$frostc$Position*) ($tmp2942->$data + 0);
org$frostlang$frostc$Position $tmp2960 = *$tmp2959;
frost$core$String** $tmp2961 = (frost$core$String**) ($tmp2942->$data + 16);
frost$core$String* $tmp2962 = *$tmp2961;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
frost$core$String* $tmp2963 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local6) = $tmp2962;
// line 838
frost$core$String* $tmp2964 = *(&local6);
frost$core$String$Index$nullable $tmp2965 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp2964, &$s2966);
*(&local7) = $tmp2965;
// line 839
*(&local8) = ((frost$core$String*) NULL);
// line 840
frost$core$String$Index$nullable $tmp2967 = *(&local7);
frost$core$Bit $tmp2968 = frost$core$Bit$init$builtin_bit($tmp2967.nonnull);
bool $tmp2969 = $tmp2968.value;
if ($tmp2969) goto block12; else goto block14;
block12:;
// line 841
frost$core$String* $tmp2970 = *(&local6);
frost$core$String* $tmp2971 = *(&local6);
frost$core$String$Index$nullable $tmp2972 = *(&local7);
frost$core$Bit $tmp2973 = frost$core$Bit$init$builtin_bit($tmp2972.nonnull);
bool $tmp2974 = $tmp2973.value;
if ($tmp2974) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2975 = (frost$core$Int64) {841};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2976, $tmp2975, &$s2977);
abort(); // unreachable
block15:;
frost$core$String$Index $tmp2978 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp2971, ((frost$core$String$Index) $tmp2972.value));
frost$core$Bit $tmp2979 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2980 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2978, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2979);
frost$core$String* $tmp2981 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp2970, $tmp2980);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
frost$core$String* $tmp2982 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2982));
*(&local8) = $tmp2981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2981));
// unreffing REF($162:frost.core.String)
goto block13;
block14:;
// line 1
// line 844
frost$core$String* $tmp2983 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
frost$core$String* $tmp2984 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
*(&local8) = $tmp2983;
goto block13;
block13:;
// line 846
frost$collections$HashMap* $tmp2985 = *(&local3);
frost$core$String* $tmp2986 = *(&local8);
frost$core$String* $tmp2987 = *(&local6);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2985, ((frost$collections$Key*) $tmp2986), ((frost$core$Object*) $tmp2987));
frost$core$String* $tmp2988 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
// unreffing alias
*(&local8) = ((frost$core$String*) NULL);
frost$core$String* $tmp2989 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
// unreffing fullName
*(&local6) = ((frost$core$String*) NULL);
goto block7;
block11:;
frost$core$Int64 $tmp2990 = (frost$core$Int64) {12};
frost$core$Bit $tmp2991 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2944, $tmp2990);
bool $tmp2992 = $tmp2991.value;
if ($tmp2992) goto block17; else goto block18;
block17:;
org$frostlang$frostc$Position* $tmp2993 = (org$frostlang$frostc$Position*) ($tmp2942->$data + 0);
org$frostlang$frostc$Position $tmp2994 = *$tmp2993;
*(&local9) = $tmp2994;
org$frostlang$frostc$ASTNode** $tmp2995 = (org$frostlang$frostc$ASTNode**) ($tmp2942->$data + 16);
org$frostlang$frostc$ASTNode* $tmp2996 = *$tmp2995;
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
org$frostlang$frostc$ASTNode* $tmp2997 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
*(&local10) = $tmp2996;
org$frostlang$frostc$FixedArray** $tmp2998 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 24);
org$frostlang$frostc$FixedArray* $tmp2999 = *$tmp2998;
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2999));
org$frostlang$frostc$FixedArray* $tmp3000 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3000));
*(&local11) = $tmp2999;
org$frostlang$frostc$ClassDecl$Kind* $tmp3001 = (org$frostlang$frostc$ClassDecl$Kind*) ($tmp2942->$data + 32);
org$frostlang$frostc$ClassDecl$Kind $tmp3002 = *$tmp3001;
*(&local12) = $tmp3002;
frost$core$String** $tmp3003 = (frost$core$String**) ($tmp2942->$data + 40);
frost$core$String* $tmp3004 = *$tmp3003;
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3004));
frost$core$String* $tmp3005 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3005));
*(&local13) = $tmp3004;
org$frostlang$frostc$FixedArray** $tmp3006 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3007 = *$tmp3006;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
org$frostlang$frostc$FixedArray* $tmp3008 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
*(&local14) = $tmp3007;
org$frostlang$frostc$FixedArray** $tmp3009 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3010 = *$tmp3009;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
org$frostlang$frostc$FixedArray* $tmp3011 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local15) = $tmp3010;
org$frostlang$frostc$FixedArray** $tmp3012 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 64);
org$frostlang$frostc$FixedArray* $tmp3013 = *$tmp3012;
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
org$frostlang$frostc$FixedArray* $tmp3014 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3014));
*(&local16) = $tmp3013;
// line 850
frost$collections$HashMap* $tmp3015 = *(&local3);
frost$core$String* $tmp3016 = *(&local2);
org$frostlang$frostc$Position $tmp3017 = *(&local9);
org$frostlang$frostc$ASTNode* $tmp3018 = *(&local10);
org$frostlang$frostc$FixedArray* $tmp3019 = *(&local11);
org$frostlang$frostc$ClassDecl$Kind $tmp3020 = *(&local12);
frost$core$String* $tmp3021 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp3022 = *(&local14);
org$frostlang$frostc$FixedArray* $tmp3023 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp3024 = *(&local16);
org$frostlang$frostc$ClassDecl* $tmp3025 = org$frostlang$frostc$Scanner$scanClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ClassDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$ClassDecl$Q(param0, param1, ((frost$collections$MapView*) $tmp3015), $tmp3016, $tmp3017, $tmp3018, $tmp3019, $tmp3020, $tmp3021, $tmp3022, $tmp3023, $tmp3024);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
org$frostlang$frostc$ClassDecl* $tmp3026 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local17) = $tmp3025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
// unreffing REF($278:org.frostlang.frostc.ClassDecl?)
// line 852
org$frostlang$frostc$ClassDecl* $tmp3027 = *(&local17);
frost$core$Bit $tmp3028 = frost$core$Bit$init$builtin_bit($tmp3027 != NULL);
bool $tmp3029 = $tmp3028.value;
if ($tmp3029) goto block19; else goto block20;
block19:;
// line 853
org$frostlang$frostc$ClassDecl* $tmp3030 = *(&local17);
frost$core$Bit $tmp3031 = frost$core$Bit$init$builtin_bit($tmp3030 != NULL);
bool $tmp3032 = $tmp3031.value;
if ($tmp3032) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3033 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3034, $tmp3033, &$s3035);
abort(); // unreachable
block21:;
frost$collections$Array* $tmp3036 = *(&local1);
org$frostlang$frostc$Scanner$addClass$org$frostlang$frostc$ClassDecl$frost$collections$Array$LTorg$frostlang$frostc$ClassDecl$GT(param0, $tmp3030, $tmp3036);
goto block20;
block20:;
org$frostlang$frostc$ClassDecl* $tmp3037 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
// unreffing cl
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$FixedArray* $tmp3038 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
// unreffing members
*(&local16) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3039 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
// unreffing supertypes
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3040 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
// unreffing generics
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3041 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// unreffing name
*(&local13) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3042 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3042));
// unreffing annotations
*(&local11) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3043 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
// unreffing dc
*(&local10) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block18:;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {29};
frost$core$Bit $tmp3045 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2944, $tmp3044);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block23; else goto block24;
block23:;
org$frostlang$frostc$Position* $tmp3047 = (org$frostlang$frostc$Position*) ($tmp2942->$data + 0);
org$frostlang$frostc$Position $tmp3048 = *$tmp3047;
*(&local18) = $tmp3048;
org$frostlang$frostc$ASTNode** $tmp3049 = (org$frostlang$frostc$ASTNode**) ($tmp2942->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3050 = *$tmp3049;
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3050));
org$frostlang$frostc$ASTNode* $tmp3051 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3051));
*(&local19) = $tmp3050;
org$frostlang$frostc$FixedArray** $tmp3052 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3053 = *$tmp3052;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
org$frostlang$frostc$FixedArray* $tmp3054 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local20) = $tmp3053;
org$frostlang$frostc$MethodDecl$Kind* $tmp3055 = (org$frostlang$frostc$MethodDecl$Kind*) ($tmp2942->$data + 32);
org$frostlang$frostc$MethodDecl$Kind $tmp3056 = *$tmp3055;
*(&local21) = $tmp3056;
frost$core$String** $tmp3057 = (frost$core$String**) ($tmp2942->$data + 40);
frost$core$String* $tmp3058 = *$tmp3057;
*(&local22) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
frost$core$String* $tmp3059 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3059));
*(&local22) = $tmp3058;
org$frostlang$frostc$FixedArray** $tmp3060 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 48);
org$frostlang$frostc$FixedArray* $tmp3061 = *$tmp3060;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
org$frostlang$frostc$FixedArray* $tmp3062 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local23) = $tmp3061;
org$frostlang$frostc$FixedArray** $tmp3063 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 56);
org$frostlang$frostc$FixedArray* $tmp3064 = *$tmp3063;
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
org$frostlang$frostc$FixedArray* $tmp3065 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3065));
*(&local24) = $tmp3064;
org$frostlang$frostc$ASTNode** $tmp3066 = (org$frostlang$frostc$ASTNode**) ($tmp2942->$data + 64);
org$frostlang$frostc$ASTNode* $tmp3067 = *$tmp3066;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
org$frostlang$frostc$ASTNode* $tmp3068 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3068));
*(&local25) = $tmp3067;
org$frostlang$frostc$FixedArray** $tmp3069 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 72);
org$frostlang$frostc$FixedArray* $tmp3070 = *$tmp3069;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
org$frostlang$frostc$FixedArray* $tmp3071 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
*(&local26) = $tmp3070;
// line 858
org$frostlang$frostc$MethodDecl$Kind $tmp3072 = *(&local21);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3073;
$tmp3073 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3073->value = $tmp3072;
frost$core$Int64 $tmp3074 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3075 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3074);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3076;
$tmp3076 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3076->value = $tmp3075;
ITable* $tmp3077 = ((frost$core$Equatable*) $tmp3073)->$class->itable;
while ($tmp3077->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3077 = $tmp3077->next;
}
$fn3079 $tmp3078 = $tmp3077->methods[0];
frost$core$Bit $tmp3080 = $tmp3078(((frost$core$Equatable*) $tmp3073), ((frost$core$Equatable*) $tmp3076));
bool $tmp3081 = $tmp3080.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3076)));
// unreffing REF($423:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3073)));
// unreffing REF($419:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp3081) goto block25; else goto block26;
block25:;
// line 859
org$frostlang$frostc$Position $tmp3082 = *(&local18);
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3082, &$s3083);
// line 860
org$frostlang$frostc$FixedArray* $tmp3084 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
// unreffing statements
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3085 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
// unreffing rawReturnType
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3086 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
// unreffing parameters
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3087 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
// unreffing generics
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3088 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3088));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3089 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
// unreffing annotations
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3090 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
// unreffing dc
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2940);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3091 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
// unreffing e
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block26:;
// line 862
frost$collections$HashMap* $tmp3092 = *(&local3);
frost$core$String* $tmp3093 = *(&local2);
frost$collections$Array* $tmp3094 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3092), $tmp3093, ((frost$collections$List*) $tmp3094));
// line 863
*(&local27) = ((frost$core$String*) NULL);
// line 864
frost$core$String* $tmp3095 = *(&local22);
frost$core$Bit $tmp3096 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3095, &$s3097);
bool $tmp3098 = $tmp3096.value;
if ($tmp3098) goto block27; else goto block29;
block27:;
// line 865
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3099));
frost$core$String* $tmp3100 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3100));
*(&local27) = &$s3101;
// line 866
frost$collections$Array* $tmp3102 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3102);
*(&local28) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
frost$collections$Array* $tmp3103 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3103));
*(&local28) = $tmp3102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
// unreffing REF($504:frost.collections.Array<org.frostlang.frostc.MethodDecl.Parameter>)
// line 867
frost$collections$Array* $tmp3104 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3104);
*(&local29) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
frost$collections$Array* $tmp3105 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
*(&local29) = $tmp3104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3104));
// unreffing REF($518:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 868
frost$collections$Array* $tmp3106 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3106);
*(&local30) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
frost$collections$Array* $tmp3107 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
*(&local30) = $tmp3106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3106));
// unreffing REF($532:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 869
org$frostlang$frostc$FixedArray* $tmp3108 = *(&local24);
ITable* $tmp3109 = ((frost$collections$Iterable*) $tmp3108)->$class->itable;
while ($tmp3109->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3109 = $tmp3109->next;
}
$fn3111 $tmp3110 = $tmp3109->methods[0];
frost$collections$Iterator* $tmp3112 = $tmp3110(((frost$collections$Iterable*) $tmp3108));
goto block30;
block30:;
ITable* $tmp3113 = $tmp3112->$class->itable;
while ($tmp3113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3113 = $tmp3113->next;
}
$fn3115 $tmp3114 = $tmp3113->methods[0];
frost$core$Bit $tmp3116 = $tmp3114($tmp3112);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block32; else goto block31;
block31:;
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp3118 = $tmp3112->$class->itable;
while ($tmp3118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3118 = $tmp3118->next;
}
$fn3120 $tmp3119 = $tmp3118->methods[1];
frost$core$Object* $tmp3121 = $tmp3119($tmp3112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp3121)));
org$frostlang$frostc$ASTNode* $tmp3122 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3122));
*(&local31) = ((org$frostlang$frostc$ASTNode*) $tmp3121);
// line 870
org$frostlang$frostc$ASTNode* $tmp3123 = *(&local31);
frost$core$Int64* $tmp3124 = &$tmp3123->$rawValue;
frost$core$Int64 $tmp3125 = *$tmp3124;
frost$core$Int64 $tmp3126 = (frost$core$Int64) {34};
frost$core$Bit $tmp3127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3125, $tmp3126);
bool $tmp3128 = $tmp3127.value;
if ($tmp3128) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp3129 = (org$frostlang$frostc$Position*) ($tmp3123->$data + 0);
org$frostlang$frostc$Position $tmp3130 = *$tmp3129;
*(&local32) = $tmp3130;
frost$core$String** $tmp3131 = (frost$core$String**) ($tmp3123->$data + 16);
frost$core$String* $tmp3132 = *$tmp3131;
*(&local33) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
frost$core$String* $tmp3133 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
*(&local33) = $tmp3132;
org$frostlang$frostc$ASTNode** $tmp3134 = (org$frostlang$frostc$ASTNode**) ($tmp3123->$data + 24);
org$frostlang$frostc$ASTNode* $tmp3135 = *$tmp3134;
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
org$frostlang$frostc$ASTNode* $tmp3136 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
*(&local34) = $tmp3135;
// line 872
frost$collections$Array* $tmp3137 = *(&local28);
org$frostlang$frostc$MethodDecl$Parameter* $tmp3138 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
frost$core$String* $tmp3139 = *(&local33);
org$frostlang$frostc$ASTNode* $tmp3140 = *(&local34);
org$frostlang$frostc$Type* $tmp3141 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3140);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type($tmp3138, $tmp3139, $tmp3141);
frost$collections$Array$add$frost$collections$Array$T($tmp3137, ((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
// unreffing REF($604:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
// unreffing REF($601:org.frostlang.frostc.MethodDecl.Parameter)
// line 874
frost$collections$Array* $tmp3142 = *(&local30);
org$frostlang$frostc$ASTNode* $tmp3143 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3144 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3145 = *(&local32);
frost$core$String* $tmp3146 = *(&local33);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3143, $tmp3144, $tmp3145, $tmp3146);
frost$collections$Array$add$frost$collections$Array$T($tmp3142, ((frost$core$Object*) $tmp3143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
// unreffing REF($617:org.frostlang.frostc.ASTNode)
org$frostlang$frostc$ASTNode* $tmp3147 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
// unreffing type
*(&local34) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp3148 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
// unreffing name
*(&local33) = ((frost$core$String*) NULL);
goto block33;
block35:;
// line 877
frost$core$Bit $tmp3149 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3150 = $tmp3149.value;
if ($tmp3150) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3151 = (frost$core$Int64) {877};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3152, $tmp3151);
abort(); // unreachable
block36:;
goto block33;
block33:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3121);
// unreffing REF($561:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3153 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3153));
// unreffing p
*(&local31) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
// unreffing REF($550:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 881
org$frostlang$frostc$ASTNode* $tmp3154 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3155 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3156 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3157 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3158 = (frost$core$Int64) {22};
org$frostlang$frostc$Position $tmp3159 = *(&local18);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3157, $tmp3158, $tmp3159, &$s3160);
org$frostlang$frostc$FixedArray* $tmp3161 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init($tmp3161);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3154, $tmp3155, $tmp3156, $tmp3157, $tmp3161);
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
org$frostlang$frostc$ASTNode* $tmp3162 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
*(&local35) = $tmp3154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
// unreffing REF($666:org.frostlang.frostc.FixedArray<org.frostlang.frostc.ASTNode>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
// unreffing REF($662:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
// unreffing REF($659:org.frostlang.frostc.ASTNode)
// line 884
frost$collections$Array* $tmp3163 = *(&local29);
org$frostlang$frostc$ASTNode* $tmp3164 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3165 = (frost$core$Int64) {9};
org$frostlang$frostc$Position $tmp3166 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3167 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3168 = (frost$core$Int64) {16};
org$frostlang$frostc$Position $tmp3169 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3170 = *(&local35);
frost$core$String* $tmp3171 = *(&local27);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp3167, $tmp3168, $tmp3169, $tmp3170, $tmp3171);
frost$collections$Array* $tmp3172 = *(&local30);
org$frostlang$frostc$FixedArray* $tmp3173 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3172);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3164, $tmp3165, $tmp3166, $tmp3167, $tmp3173);
frost$collections$Array$add$frost$collections$Array$T($tmp3163, ((frost$core$Object*) $tmp3164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
// unreffing REF($700:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3167));
// unreffing REF($692:org.frostlang.frostc.ASTNode)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
// unreffing REF($689:org.frostlang.frostc.ASTNode)
// line 887
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
// line 888
org$frostlang$frostc$ASTNode* $tmp3174 = *(&local25);
frost$core$Bit $tmp3175 = frost$core$Bit$init$builtin_bit($tmp3174 != NULL);
bool $tmp3176 = $tmp3175.value;
if ($tmp3176) goto block38; else goto block40;
block38:;
// line 889
org$frostlang$frostc$ASTNode* $tmp3177 = *(&local25);
frost$core$Bit $tmp3178 = frost$core$Bit$init$builtin_bit($tmp3177 != NULL);
bool $tmp3179 = $tmp3178.value;
if ($tmp3179) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp3180 = (frost$core$Int64) {889};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3181, $tmp3180, &$s3182);
abort(); // unreachable
block41:;
org$frostlang$frostc$Type* $tmp3183 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(param0, $tmp3177);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
org$frostlang$frostc$Type* $tmp3184 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
*(&local36) = $tmp3183;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
// unreffing REF($732:org.frostlang.frostc.Type)
goto block39;
block40:;
// line 1
// line 892
org$frostlang$frostc$Type* $tmp3185 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
org$frostlang$frostc$Type* $tmp3186 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
*(&local36) = $tmp3185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
// unreffing REF($745:org.frostlang.frostc.Type)
goto block39;
block39:;
// line 894
org$frostlang$frostc$MethodDecl* $tmp3187 = (org$frostlang$frostc$MethodDecl*) frostObjectAlloc(144, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$class);
org$frostlang$frostc$ClassDecl** $tmp3188 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3189 = *$tmp3188;
frost$core$Bit $tmp3190 = frost$core$Bit$init$builtin_bit($tmp3189 != NULL);
bool $tmp3191 = $tmp3190.value;
if ($tmp3191) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp3192 = (frost$core$Int64) {894};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3193, $tmp3192, &$s3194);
abort(); // unreachable
block43:;
org$frostlang$frostc$Position $tmp3195 = org$frostlang$frostc$Position$init();
org$frostlang$frostc$Annotations* $tmp3196 = (org$frostlang$frostc$Annotations*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Annotations$class);
frost$core$Int64 $tmp3197 = (frost$core$Int64) {16};
org$frostlang$frostc$Annotations$init$frost$core$Int64($tmp3196, $tmp3197);
frost$core$Int64 $tmp3198 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl$Kind $tmp3199 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3198);
frost$collections$Array* $tmp3200 = *(&local28);
org$frostlang$frostc$Type* $tmp3201 = *(&local36);
frost$collections$Array* $tmp3202 = *(&local29);
org$frostlang$frostc$FixedArray* $tmp3203 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3202);
org$frostlang$frostc$MethodDecl$init$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$Annotations$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$GenericParameter$GT$Q$frost$collections$Array$LTorg$frostlang$frostc$MethodDecl$Parameter$GT$org$frostlang$frostc$Type$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q($tmp3187, $tmp3189, $tmp3195, ((frost$core$String*) NULL), $tmp3196, $tmp3199, &$s3204, ((frost$collections$Array*) NULL), $tmp3200, $tmp3201, $tmp3203);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
org$frostlang$frostc$MethodDecl* $tmp3205 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local37) = $tmp3187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
// unreffing REF($778:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
// unreffing REF($769:org.frostlang.frostc.Annotations)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
// unreffing REF($757:org.frostlang.frostc.MethodDecl)
// line 898
org$frostlang$frostc$ClassDecl** $tmp3206 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3207 = *$tmp3206;
frost$core$Bit $tmp3208 = frost$core$Bit$init$builtin_bit($tmp3207 != NULL);
bool $tmp3209 = $tmp3208.value;
if ($tmp3209) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp3210 = (frost$core$Int64) {898};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3211, $tmp3210, &$s3212);
abort(); // unreachable
block45:;
frost$collections$Array** $tmp3213 = &$tmp3207->methods;
frost$collections$Array* $tmp3214 = *$tmp3213;
org$frostlang$frostc$MethodDecl* $tmp3215 = *(&local37);
frost$collections$Array$add$frost$collections$Array$T($tmp3214, ((frost$core$Object*) $tmp3215));
org$frostlang$frostc$MethodDecl* $tmp3216 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
// unreffing bareMain
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$Type* $tmp3217 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
// unreffing returnType
*(&local36) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ASTNode* $tmp3218 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
// unreffing bareConstruct
*(&local35) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3219 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
// unreffing mainArguments
*(&local30) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3220 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
// unreffing mainStatements
*(&local29) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp3221 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
// unreffing mainParameters
*(&local28) = ((frost$collections$Array*) NULL);
goto block28;
block29:;
// line 1
// line 901
frost$core$String* $tmp3222 = *(&local22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
frost$core$String* $tmp3223 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local27) = $tmp3222;
goto block28;
block28:;
// line 903
frost$core$Weak** $tmp3224 = &param0->compiler;
frost$core$Weak* $tmp3225 = *$tmp3224;
frost$core$Object* $tmp3226 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3225);
frost$collections$Stack** $tmp3227 = &((org$frostlang$frostc$Compiler*) $tmp3226)->currentClass;
frost$collections$Stack* $tmp3228 = *$tmp3227;
org$frostlang$frostc$ClassDecl** $tmp3229 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3230 = *$tmp3229;
frost$core$Bit $tmp3231 = frost$core$Bit$init$builtin_bit($tmp3230 != NULL);
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp3233 = (frost$core$Int64) {903};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3234, $tmp3233, &$s3235);
abort(); // unreachable
block47:;
frost$collections$Stack$push$frost$collections$Stack$T($tmp3228, ((frost$core$Object*) $tmp3230));
frost$core$Frost$unref$frost$core$Object$Q($tmp3226);
// unreffing REF($860:frost.core.Weak.T)
// line 904
org$frostlang$frostc$ClassDecl** $tmp3236 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3237 = *$tmp3236;
frost$core$Bit $tmp3238 = frost$core$Bit$init$builtin_bit($tmp3237 != NULL);
bool $tmp3239 = $tmp3238.value;
if ($tmp3239) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp3240 = (frost$core$Int64) {904};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3241, $tmp3240, &$s3242);
abort(); // unreachable
block49:;
org$frostlang$frostc$Position $tmp3243 = *(&local18);
org$frostlang$frostc$ASTNode* $tmp3244 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp3245 = *(&local20);
org$frostlang$frostc$MethodDecl$Kind $tmp3246 = *(&local21);
frost$core$String* $tmp3247 = *(&local27);
org$frostlang$frostc$FixedArray* $tmp3248 = *(&local23);
org$frostlang$frostc$FixedArray* $tmp3249 = *(&local24);
org$frostlang$frostc$ASTNode* $tmp3250 = *(&local25);
org$frostlang$frostc$FixedArray* $tmp3251 = *(&local26);
org$frostlang$frostc$MethodDecl* $tmp3252 = org$frostlang$frostc$Scanner$scanMethod$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$MethodDecl$Kind$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$Q$R$org$frostlang$frostc$MethodDecl$Q(param0, $tmp3237, $tmp3243, $tmp3244, $tmp3245, $tmp3246, $tmp3247, $tmp3248, $tmp3249, $tmp3250, $tmp3251);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
org$frostlang$frostc$MethodDecl* $tmp3253 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3253));
*(&local38) = $tmp3252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3252));
// unreffing REF($900:org.frostlang.frostc.MethodDecl?)
// line 906
org$frostlang$frostc$MethodDecl* $tmp3254 = *(&local38);
frost$core$Bit $tmp3255 = frost$core$Bit$init$builtin_bit($tmp3254 != NULL);
bool $tmp3256 = $tmp3255.value;
if ($tmp3256) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp3257 = (frost$core$Int64) {906};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3258, $tmp3257, &$s3259);
abort(); // unreachable
block53:;
org$frostlang$frostc$Annotations** $tmp3260 = &$tmp3254->annotations;
org$frostlang$frostc$Annotations* $tmp3261 = *$tmp3260;
frost$core$Bit $tmp3262 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3261);
bool $tmp3263 = $tmp3262.value;
if ($tmp3263) goto block51; else goto block52;
block51:;
// line 907
org$frostlang$frostc$MethodDecl* $tmp3264 = *(&local38);
frost$core$Bit $tmp3265 = frost$core$Bit$init$builtin_bit($tmp3264 != NULL);
bool $tmp3266 = $tmp3265.value;
if ($tmp3266) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp3267 = (frost$core$Int64) {907};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3268, $tmp3267, &$s3269);
abort(); // unreachable
block55:;
org$frostlang$frostc$Position* $tmp3270 = &((org$frostlang$frostc$Symbol*) $tmp3264)->position;
org$frostlang$frostc$Position $tmp3271 = *$tmp3270;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3271, &$s3272);
// line 909
org$frostlang$frostc$MethodDecl* $tmp3273 = *(&local38);
frost$core$Bit $tmp3274 = frost$core$Bit$init$builtin_bit($tmp3273 != NULL);
bool $tmp3275 = $tmp3274.value;
if ($tmp3275) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp3276 = (frost$core$Int64) {909};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3277, $tmp3276, &$s3278);
abort(); // unreachable
block57:;
org$frostlang$frostc$Annotations** $tmp3279 = &$tmp3273->annotations;
org$frostlang$frostc$Annotations* $tmp3280 = *$tmp3279;
frost$core$Int64* $tmp3281 = &$tmp3280->flags;
frost$core$Int64 $tmp3282 = *$tmp3281;
frost$core$Int64 $tmp3283 = (frost$core$Int64) {16};
frost$core$Int64 $tmp3284 = frost$core$Int64$$BNOT$R$frost$core$Int64($tmp3283);
frost$core$Int64 $tmp3285 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64($tmp3282, $tmp3284);
frost$core$Int64* $tmp3286 = &$tmp3280->flags;
*$tmp3286 = $tmp3285;
goto block52;
block52:;
// line 911
frost$core$Weak** $tmp3287 = &param0->compiler;
frost$core$Weak* $tmp3288 = *$tmp3287;
frost$core$Object* $tmp3289 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3288);
frost$collections$Stack** $tmp3290 = &((org$frostlang$frostc$Compiler*) $tmp3289)->currentClass;
frost$collections$Stack* $tmp3291 = *$tmp3290;
frost$core$Int64 $tmp3292 = (frost$core$Int64) {0};
frost$core$Object* $tmp3293 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3291, $tmp3292);
org$frostlang$frostc$ClassDecl** $tmp3294 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3295 = *$tmp3294;
bool $tmp3296 = ((org$frostlang$frostc$ClassDecl*) $tmp3293) == $tmp3295;
frost$core$Bit $tmp3297 = frost$core$Bit$init$builtin_bit($tmp3296);
bool $tmp3298 = $tmp3297.value;
if ($tmp3298) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp3299 = (frost$core$Int64) {911};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3300, $tmp3299);
abort(); // unreachable
block59:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3293);
// unreffing REF($969:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3289);
// unreffing REF($963:frost.core.Weak.T)
// line 912
frost$core$Weak** $tmp3301 = &param0->compiler;
frost$core$Weak* $tmp3302 = *$tmp3301;
frost$core$Object* $tmp3303 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3302);
frost$collections$Stack** $tmp3304 = &((org$frostlang$frostc$Compiler*) $tmp3303)->currentClass;
frost$collections$Stack* $tmp3305 = *$tmp3304;
frost$core$Object* $tmp3306 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp3305);
frost$core$Frost$unref$frost$core$Object$Q($tmp3306);
// unreffing REF($995:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp3303);
// unreffing REF($990:frost.core.Weak.T)
// line 913
org$frostlang$frostc$ClassDecl** $tmp3307 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3308 = *$tmp3307;
frost$core$Bit $tmp3309 = frost$core$Bit$init$builtin_bit($tmp3308 != NULL);
bool $tmp3310 = $tmp3309.value;
if ($tmp3310) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp3311 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3312, $tmp3311, &$s3313);
abort(); // unreachable
block61:;
frost$collections$Array** $tmp3314 = &$tmp3308->methods;
frost$collections$Array* $tmp3315 = *$tmp3314;
org$frostlang$frostc$MethodDecl* $tmp3316 = *(&local38);
frost$core$Bit $tmp3317 = frost$core$Bit$init$builtin_bit($tmp3316 != NULL);
bool $tmp3318 = $tmp3317.value;
if ($tmp3318) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp3319 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3320, $tmp3319, &$s3321);
abort(); // unreachable
block63:;
frost$collections$Array$add$frost$collections$Array$T($tmp3315, ((frost$core$Object*) $tmp3316));
// line 914
org$frostlang$frostc$ClassDecl** $tmp3322 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3323 = *$tmp3322;
frost$core$Bit $tmp3324 = frost$core$Bit$init$builtin_bit($tmp3323 != NULL);
bool $tmp3325 = $tmp3324.value;
if ($tmp3325) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp3326 = (frost$core$Int64) {914};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3327, $tmp3326, &$s3328);
abort(); // unreachable
block65:;
org$frostlang$frostc$SymbolTable** $tmp3329 = &$tmp3323->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3330 = *$tmp3329;
org$frostlang$frostc$MethodDecl* $tmp3331 = *(&local38);
frost$core$Bit $tmp3332 = frost$core$Bit$init$builtin_bit($tmp3331 != NULL);
bool $tmp3333 = $tmp3332.value;
if ($tmp3333) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp3334 = (frost$core$Int64) {914};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3335, $tmp3334, &$s3336);
abort(); // unreachable
block67:;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol($tmp3330, ((org$frostlang$frostc$Symbol*) $tmp3331));
org$frostlang$frostc$MethodDecl* $tmp3337 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
// unreffing m
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$String* $tmp3338 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
// unreffing name
*(&local27) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3339 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
// unreffing statements
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3340 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3340));
// unreffing rawReturnType
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3341 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
// unreffing parameters
*(&local24) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp3342 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
// unreffing generics
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3343 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3343));
// unreffing rawName
*(&local22) = ((frost$core$String*) NULL);
org$frostlang$frostc$FixedArray* $tmp3344 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
// unreffing annotations
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3345 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
// unreffing dc
*(&local19) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block24:;
frost$core$Int64 $tmp3346 = (frost$core$Int64) {18};
frost$core$Bit $tmp3347 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2944, $tmp3346);
bool $tmp3348 = $tmp3347.value;
if ($tmp3348) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Position* $tmp3349 = (org$frostlang$frostc$Position*) ($tmp2942->$data + 0);
org$frostlang$frostc$Position $tmp3350 = *$tmp3349;
*(&local39) = $tmp3350;
org$frostlang$frostc$ASTNode** $tmp3351 = (org$frostlang$frostc$ASTNode**) ($tmp2942->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3352 = *$tmp3351;
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
org$frostlang$frostc$ASTNode* $tmp3353 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
*(&local40) = $tmp3352;
org$frostlang$frostc$FixedArray** $tmp3354 = (org$frostlang$frostc$FixedArray**) ($tmp2942->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3355 = *$tmp3354;
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
org$frostlang$frostc$FixedArray* $tmp3356 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
*(&local41) = $tmp3355;
org$frostlang$frostc$ASTNode** $tmp3357 = (org$frostlang$frostc$ASTNode**) ($tmp2942->$data + 32);
org$frostlang$frostc$ASTNode* $tmp3358 = *$tmp3357;
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
org$frostlang$frostc$ASTNode* $tmp3359 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local42) = $tmp3358;
// line 917
frost$collections$HashMap* $tmp3360 = *(&local3);
frost$core$String* $tmp3361 = *(&local2);
frost$collections$Array* $tmp3362 = *(&local1);
org$frostlang$frostc$Scanner$createBareCodeClass$frost$io$File$frost$collections$MapView$LTfrost$core$String$Cfrost$core$String$GT$frost$core$String$frost$collections$List$LTorg$frostlang$frostc$ClassDecl$GT(param0, param1, ((frost$collections$MapView*) $tmp3360), $tmp3361, ((frost$collections$List*) $tmp3362));
// line 918
org$frostlang$frostc$ClassDecl** $tmp3363 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3364 = *$tmp3363;
frost$core$Bit $tmp3365 = frost$core$Bit$init$builtin_bit($tmp3364 != NULL);
bool $tmp3366 = $tmp3365.value;
if ($tmp3366) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp3367 = (frost$core$Int64) {918};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3368, $tmp3367, &$s3369);
abort(); // unreachable
block71:;
frost$collections$Array** $tmp3370 = &$tmp3364->fields;
frost$collections$Array* $tmp3371 = *$tmp3370;
ITable* $tmp3372 = ((frost$collections$CollectionView*) $tmp3371)->$class->itable;
while ($tmp3372->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3372 = $tmp3372->next;
}
$fn3374 $tmp3373 = $tmp3372->methods[0];
frost$core$Int64 $tmp3375 = $tmp3373(((frost$collections$CollectionView*) $tmp3371));
*(&local43) = $tmp3375;
// line 919
org$frostlang$frostc$ClassDecl** $tmp3376 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3377 = *$tmp3376;
frost$core$Bit $tmp3378 = frost$core$Bit$init$builtin_bit($tmp3377 != NULL);
bool $tmp3379 = $tmp3378.value;
if ($tmp3379) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp3380 = (frost$core$Int64) {919};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3381, $tmp3380, &$s3382);
abort(); // unreachable
block73:;
org$frostlang$frostc$Position $tmp3383 = *(&local39);
org$frostlang$frostc$ASTNode* $tmp3384 = *(&local40);
org$frostlang$frostc$FixedArray* $tmp3385 = *(&local41);
org$frostlang$frostc$ASTNode* $tmp3386 = *(&local42);
org$frostlang$frostc$Scanner$scanFields$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(param0, $tmp3377, $tmp3383, $tmp3384, $tmp3385, $tmp3386);
// line 920
frost$core$Int64 $tmp3387 = *(&local43);
org$frostlang$frostc$ClassDecl** $tmp3388 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3389 = *$tmp3388;
frost$core$Bit $tmp3390 = frost$core$Bit$init$builtin_bit($tmp3389 != NULL);
bool $tmp3391 = $tmp3390.value;
if ($tmp3391) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp3392 = (frost$core$Int64) {920};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3393, $tmp3392, &$s3394);
abort(); // unreachable
block75:;
frost$collections$Array** $tmp3395 = &$tmp3389->fields;
frost$collections$Array* $tmp3396 = *$tmp3395;
ITable* $tmp3397 = ((frost$collections$CollectionView*) $tmp3396)->$class->itable;
while ($tmp3397->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3397 = $tmp3397->next;
}
$fn3399 $tmp3398 = $tmp3397->methods[0];
frost$core$Int64 $tmp3400 = $tmp3398(((frost$collections$CollectionView*) $tmp3396));
frost$core$Bit $tmp3401 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3402 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3387, $tmp3400, $tmp3401);
frost$core$Int64 $tmp3403 = $tmp3402.min;
*(&local44) = $tmp3403;
frost$core$Int64 $tmp3404 = $tmp3402.max;
frost$core$Bit $tmp3405 = $tmp3402.inclusive;
bool $tmp3406 = $tmp3405.value;
frost$core$Int64 $tmp3407 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3408 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3407);
if ($tmp3406) goto block80; else goto block81;
block80:;
int64_t $tmp3409 = $tmp3403.value;
int64_t $tmp3410 = $tmp3404.value;
bool $tmp3411 = $tmp3409 <= $tmp3410;
frost$core$Bit $tmp3412 = (frost$core$Bit) {$tmp3411};
bool $tmp3413 = $tmp3412.value;
if ($tmp3413) goto block77; else goto block78;
block81:;
int64_t $tmp3414 = $tmp3403.value;
int64_t $tmp3415 = $tmp3404.value;
bool $tmp3416 = $tmp3414 < $tmp3415;
frost$core$Bit $tmp3417 = (frost$core$Bit) {$tmp3416};
bool $tmp3418 = $tmp3417.value;
if ($tmp3418) goto block77; else goto block78;
block77:;
// line 921
org$frostlang$frostc$ClassDecl** $tmp3419 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3420 = *$tmp3419;
frost$core$Bit $tmp3421 = frost$core$Bit$init$builtin_bit($tmp3420 != NULL);
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp3423 = (frost$core$Int64) {921};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3424, $tmp3423, &$s3425);
abort(); // unreachable
block82:;
frost$collections$Array** $tmp3426 = &$tmp3420->fields;
frost$collections$Array* $tmp3427 = *$tmp3426;
frost$core$Int64 $tmp3428 = *(&local44);
frost$core$Object* $tmp3429 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3427, $tmp3428);
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp3429)));
org$frostlang$frostc$FieldDecl* $tmp3430 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
*(&local45) = ((org$frostlang$frostc$FieldDecl*) $tmp3429);
frost$core$Frost$unref$frost$core$Object$Q($tmp3429);
// unreffing REF($1225:frost.collections.Array.T)
// line 922
org$frostlang$frostc$FieldDecl* $tmp3431 = *(&local45);
org$frostlang$frostc$FieldDecl$Kind* $tmp3432 = &$tmp3431->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp3433 = *$tmp3432;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3434;
$tmp3434 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3434->value = $tmp3433;
frost$core$Int64 $tmp3435 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp3436 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp3435);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp3437;
$tmp3437 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp3437->value = $tmp3436;
ITable* $tmp3438 = ((frost$core$Equatable*) $tmp3434)->$class->itable;
while ($tmp3438->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3438 = $tmp3438->next;
}
$fn3440 $tmp3439 = $tmp3438->methods[1];
frost$core$Bit $tmp3441 = $tmp3439(((frost$core$Equatable*) $tmp3434), ((frost$core$Equatable*) $tmp3437));
bool $tmp3442 = $tmp3441.value;
if ($tmp3442) goto block86; else goto block87;
block86:;
org$frostlang$frostc$FieldDecl* $tmp3443 = *(&local45);
org$frostlang$frostc$Annotations** $tmp3444 = &$tmp3443->annotations;
org$frostlang$frostc$Annotations* $tmp3445 = *$tmp3444;
frost$core$Bit $tmp3446 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3445);
*(&local46) = $tmp3446;
goto block88;
block87:;
*(&local46) = $tmp3441;
goto block88;
block88:;
frost$core$Bit $tmp3447 = *(&local46);
bool $tmp3448 = $tmp3447.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3437)));
// unreffing REF($1245:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3434)));
// unreffing REF($1241:frost.core.Equatable<org.frostlang.frostc.FieldDecl.Kind>)
if ($tmp3448) goto block84; else goto block85;
block84:;
// line 924
org$frostlang$frostc$FieldDecl* $tmp3449 = *(&local45);
org$frostlang$frostc$Position* $tmp3450 = &((org$frostlang$frostc$Symbol*) $tmp3449)->position;
org$frostlang$frostc$Position $tmp3451 = *$tmp3450;
org$frostlang$frostc$Scanner$error$org$frostlang$frostc$Position$frost$core$String(param0, $tmp3451, &$s3452);
goto block85;
block85:;
org$frostlang$frostc$FieldDecl* $tmp3453 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
// unreffing f
*(&local45) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block79;
block79:;
frost$core$Int64 $tmp3454 = *(&local44);
int64_t $tmp3455 = $tmp3404.value;
int64_t $tmp3456 = $tmp3454.value;
int64_t $tmp3457 = $tmp3455 - $tmp3456;
frost$core$Int64 $tmp3458 = (frost$core$Int64) {$tmp3457};
frost$core$UInt64 $tmp3459 = frost$core$Int64$convert$R$frost$core$UInt64($tmp3458);
if ($tmp3406) goto block90; else goto block91;
block90:;
uint64_t $tmp3460 = $tmp3459.value;
uint64_t $tmp3461 = $tmp3408.value;
bool $tmp3462 = $tmp3460 >= $tmp3461;
frost$core$Bit $tmp3463 = (frost$core$Bit) {$tmp3462};
bool $tmp3464 = $tmp3463.value;
if ($tmp3464) goto block89; else goto block78;
block91:;
uint64_t $tmp3465 = $tmp3459.value;
uint64_t $tmp3466 = $tmp3408.value;
bool $tmp3467 = $tmp3465 > $tmp3466;
frost$core$Bit $tmp3468 = (frost$core$Bit) {$tmp3467};
bool $tmp3469 = $tmp3468.value;
if ($tmp3469) goto block89; else goto block78;
block89:;
int64_t $tmp3470 = $tmp3454.value;
int64_t $tmp3471 = $tmp3407.value;
int64_t $tmp3472 = $tmp3470 + $tmp3471;
frost$core$Int64 $tmp3473 = (frost$core$Int64) {$tmp3472};
*(&local44) = $tmp3473;
goto block77;
block78:;
org$frostlang$frostc$ASTNode* $tmp3474 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3474));
// unreffing varDecl
*(&local42) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$FixedArray* $tmp3475 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
// unreffing annotations
*(&local41) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ASTNode* $tmp3476 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
// unreffing dc
*(&local40) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block7;
block70:;
// line 930
frost$core$Bit $tmp3477 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp3479 = (frost$core$Int64) {930};
org$frostlang$frostc$ASTNode* $tmp3480 = *(&local4);
frost$core$String* $tmp3481 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3482, ((frost$core$Object*) $tmp3480));
frost$core$String* $tmp3483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3481, &$s3484);
org$frostlang$frostc$ASTNode* $tmp3485 = *(&local4);
frost$core$Int64* $tmp3486 = &$tmp3485->$rawValue;
frost$core$Int64 $tmp3487 = *$tmp3486;
frost$core$Int64$wrapper* $tmp3488;
$tmp3488 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3488->value = $tmp3487;
frost$core$String* $tmp3489 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3483, ((frost$core$Object*) $tmp3488));
frost$core$String* $tmp3490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3489, &$s3491);
org$frostlang$frostc$ASTNode* $tmp3492 = *(&local4);
$fn3494 $tmp3493 = ($fn3494) $tmp3492->$class->vtable[2];
org$frostlang$frostc$Position $tmp3495 = $tmp3493($tmp3492);
org$frostlang$frostc$Position$wrapper* $tmp3496;
$tmp3496 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp3496->value = $tmp3495;
frost$core$String* $tmp3497 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3490, ((frost$core$Object*) $tmp3496));
frost$core$String* $tmp3498 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3497, &$s3499);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3500, $tmp3479, $tmp3498);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
// unreffing REF($1341:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3497));
// unreffing REF($1340:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
// unreffing REF($1339:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
// unreffing REF($1335:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
// unreffing REF($1334:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
// unreffing REF($1333:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
// unreffing REF($1329:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
// unreffing REF($1328:frost.core.String)
abort(); // unreachable
block92:;
goto block7;
block7:;
frost$core$Frost$unref$frost$core$Object$Q($tmp2940);
// unreffing REF($78:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp3501 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
// unreffing e
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
// unreffing REF($67:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 934
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File** $tmp3502 = &param0->source;
frost$io$File* $tmp3503 = *$tmp3502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3503));
frost$io$File** $tmp3504 = &param0->source;
*$tmp3504 = ((frost$io$File*) NULL);
// line 935
frost$collections$Array* $tmp3505 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp3505)));
frost$collections$HashMap* $tmp3506 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3506));
// unreffing aliases
*(&local3) = ((frost$collections$HashMap*) NULL);
frost$core$String* $tmp3507 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3507));
// unreffing currentPackage
*(&local2) = ((frost$core$String*) NULL);
frost$collections$Array* $tmp3508 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3508));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$FixedArray* $tmp3509 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3509));
// unreffing entries
*(&local0) = ((org$frostlang$frostc$FixedArray*) NULL);
return ((frost$collections$ListView*) $tmp3505);
block3:;
// line 938
frost$core$Bit $tmp3510 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3511 = $tmp3510.value;
if ($tmp3511) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp3512 = (frost$core$Int64) {938};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3513, $tmp3512);
abort(); // unreachable
block94:;
goto block1;
block1:;
frost$core$Bit $tmp3514 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp3516 = (frost$core$Int64) {825};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3517, $tmp3516, &$s3518);
abort(); // unreachable
block96:;
abort(); // unreachable

}
void org$frostlang$frostc$Scanner$cleanup(org$frostlang$frostc$Scanner* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp3519 = &param0->compiler;
frost$core$Weak* $tmp3520 = *$tmp3519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
org$frostlang$frostc$ClassDecl** $tmp3521 = &param0->bareCodeClass;
org$frostlang$frostc$ClassDecl* $tmp3522 = *$tmp3521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
frost$io$File** $tmp3523 = &param0->source;
frost$io$File* $tmp3524 = *$tmp3523;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
return;

}

